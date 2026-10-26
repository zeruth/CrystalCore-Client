#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0061f4d0 */
byte F_0061f4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 8) = param_2;
  return 1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::vf4 */
unsigned int F_0061f4e0(void)
{
  GEN_ENTER(0x61f4e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f4f0 */
uint F_0061f4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x61f4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_0061f500 */
uint F_0061f500(unsigned int gen_a0)
{
  GEN_ENTER(0x61f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x90) != 0) {
    F_0050c620(*(int *)((int)this + 0x90),0,0);
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x8c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x8c),0,0);
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  return uVar1;
}

/* ref: FUN_0061f550 */
unsigned int F_0061f550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x7c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + param_1 * 4 + 0x7c) = param_2;
  return 0;
}

/* ref: FUN_0061f5b0 */
unsigned int F_0061f5b0(void)
{
  GEN_ENTER(0x61f5b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f5d0 */
unsigned int F_0061f5d0(void)
{
  GEN_ENTER(0x61f5d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0061f640 */
uint F_0061f640(unsigned int gen_a0)
{
  GEN_ENTER(0x61f640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x260);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x260) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x240);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x240) = 0;
  }
  F_0061e400((undefined *)((int)this + 0x11c));
  uVar2 = F_0061e400((undefined *)((int)this + 0x74));
  piVar4 = (int *)((int)this + 0x1c);
  iVar3 = 3;
  do {
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 8);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_0061f710 */
uint F_0061f710(unsigned int gen_a0)
{
  GEN_ENTER(0x61f710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x28c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x28c),0,0);
    *(undefined4 *)((int)this + 0x28c) = 0;
  }
  return uVar1;
}

/* ref: FUN_0061f740 */
uint F_0061f740(unsigned int gen_a0)
{
  GEN_ENTER(0x61f740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x70) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x70),0,0);
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::ModelRenderer::vf1 */
unsigned int F_0061f760(void)
{
  GEN_ENTER(0x61f760u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf1 */
uint F_0061f790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61f790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061f7a0 */
uint F_0061f7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61f7a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = param_1 * param_2 + param_3;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar2 >> 5) * 4)));
  uVar2 = 1 << ((byte)uVar2 & 0x1f);
  *puVar1 = *puVar1 | uVar2;
  return uVar2;
}

/* ref: FUN_0061f7d0 */
uint F_0061f7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61f7d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = param_1 * param_2 + param_3;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + (uVar1 >> 5) * 4))) & 1 << ((byte)uVar1 & 0x1f);
}

/* ref: FUN_0061f800 */
uint F_0061f800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x61f800u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(uint *)&REFG(undefined, 0x1487c10) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487c10) = *(uint *)&REFG(undefined, 0x1487c10) | 1;
    *(float *)&REFG(undefined, 0x1487c00) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c04) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c08) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c0c) = REFG(float, 0x1088068);
  }
  fVar6 = (param_3[4] + *param_3) * *(float *)&REFG(undefined, 0x1487c00);
  fVar7 = (param_3[5] + param_3[1]) * *(float *)&REFG(undefined, 0x1487c04);
  fVar8 = (param_3[6] + param_3[2]) * *(float *)&REFG(undefined, 0x1487c08);
  fVar1 = param_3[4] - fVar6;
  fVar3 = param_3[5] - fVar7;
  fVar5 = param_3[6] - fVar8;
  fVar2 = ((fVar8 * param_2[8] + param_2[0xc]) + fVar7 * param_2[4]) + fVar6 * *param_2;
  fVar4 = ((fVar8 * param_2[9] + param_2[0xd]) + fVar7 * param_2[5]) + fVar6 * param_2[1];
  fVar7 = ((fVar8 * param_2[10] + param_2[0xe]) + fVar7 * param_2[6]) + fVar6 * param_2[2];
  fVar6 = *param_2;
  *in_ecx = fVar6;
  in_ecx[1] = fVar6;
  in_ecx[2] = fVar6;
  in_ecx[3] = fVar6;
  fVar6 = param_2[1];
  in_ecx[4] = fVar6;
  in_ecx[5] = fVar6;
  in_ecx[6] = fVar6;
  in_ecx[7] = fVar6;
  fVar6 = param_2[2];
  in_ecx[8] = fVar6;
  in_ecx[9] = fVar6;
  in_ecx[10] = fVar6;
  in_ecx[0xb] = fVar6;
  fVar6 = param_2[4];
  in_ecx[0xc] = fVar6;
  in_ecx[0xd] = fVar6;
  in_ecx[0xe] = fVar6;
  in_ecx[0xf] = fVar6;
  fVar6 = param_2[5];
  in_ecx[0x10] = fVar6;
  in_ecx[0x11] = fVar6;
  in_ecx[0x12] = fVar6;
  in_ecx[0x13] = fVar6;
  fVar6 = param_2[6];
  in_ecx[0x14] = fVar6;
  in_ecx[0x15] = fVar6;
  in_ecx[0x16] = fVar6;
  in_ecx[0x17] = fVar6;
  fVar6 = param_2[8];
  in_ecx[0x18] = fVar6;
  in_ecx[0x19] = fVar6;
  in_ecx[0x1a] = fVar6;
  in_ecx[0x1b] = fVar6;
  fVar6 = param_2[9];
  in_ecx[0x1c] = fVar6;
  in_ecx[0x1d] = fVar6;
  in_ecx[0x1e] = fVar6;
  in_ecx[0x1f] = fVar6;
  fVar6 = param_2[10];
  in_ecx[0x20] = fVar6;
  in_ecx[0x21] = fVar6;
  in_ecx[0x22] = fVar6;
  in_ecx[0x23] = fVar6;
  in_ecx[0x24] = fVar2;
  in_ecx[0x25] = fVar2;
  in_ecx[0x26] = fVar2;
  in_ecx[0x27] = fVar2;
  in_ecx[0x28] = fVar4;
  in_ecx[0x29] = fVar4;
  in_ecx[0x2a] = fVar4;
  in_ecx[0x2b] = fVar4;
  in_ecx[0x2c] = fVar7;
  in_ecx[0x2d] = fVar7;
  in_ecx[0x2e] = fVar7;
  in_ecx[0x2f] = fVar7;
  in_ecx[0x30] = fVar1;
  in_ecx[0x31] = fVar1;
  in_ecx[0x32] = fVar1;
  in_ecx[0x33] = fVar1;
  in_ecx[0x34] = fVar3;
  in_ecx[0x35] = fVar3;
  in_ecx[0x36] = fVar3;
  in_ecx[0x37] = fVar3;
  in_ecx[0x38] = fVar5;
  in_ecx[0x39] = fVar5;
  in_ecx[0x3a] = fVar5;
  in_ecx[0x3b] = fVar5;
  return (uint)param_2;
}

/* ref: FUN_0061f990 */
byte F_0061f990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61f990u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
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
  int iVar26;
  undefined1 auVar27 [16];
  
  fVar10 = *param_1;
  fVar11 = param_1[1];
  fVar12 = param_1[2];
  fVar13 = param_1[3];
  fVar2 = param_1[0x10];
  fVar3 = param_1[0x11];
  fVar4 = param_1[0x12];
  fVar5 = param_1[0x13];
  fVar14 = param_1[8];
  fVar15 = param_1[9];
  fVar16 = param_1[10];
  fVar17 = param_1[0xb];
  fVar18 = param_1[0xc];
  fVar19 = param_1[0xd];
  fVar20 = param_1[0xe];
  fVar21 = param_1[0xf];
  fVar6 = param_1[0x18];
  fVar7 = param_1[0x19];
  fVar8 = param_1[0x1a];
  fVar9 = param_1[0x1b];
  fVar22 = param_1[0x1c];
  fVar23 = param_1[0x1d];
  fVar24 = param_1[0x1e];
  fVar25 = param_1[0x1f];
  (*(undefined4 *)((char *)&auVar27 + 4)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[1] * fVar3 + param_2[5] * fVar7) +
                                             param_2[9] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
                param_2[0x31] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xd] * fVar3 + param_2[0x11] * fVar7) +
                                            param_2[0x15] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
               param_2[0x35]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x19] * fVar3 + param_2[0x1d] * fVar7) +
                                            param_2[0x21] * fVar23) & *(uint *)&REFG(undefined, 0x10aba64)) *
               param_2[0x39] <
              ((param_2[0x25] * fVar3 + param_1[0x15]) + param_2[0x29] * fVar7) +
              param_2[0x2d] * fVar23);
  (*(undefined4 *)((char *)&auVar27 + 0)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((*param_2 * fVar2 + param_2[4] * fVar6) +
                                             param_2[8] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
                param_2[0x30] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xc] * fVar2 + param_2[0x10] * fVar6) +
                                            param_2[0x14] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
               param_2[0x34]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x18] * fVar2 + param_2[0x1c] * fVar6) +
                                            param_2[0x20] * fVar22) & *(uint *)&REFG(undefined, 0x10aba60)) *
               param_2[0x38] <
              ((param_2[0x24] * fVar2 + param_1[0x14]) + param_2[0x28] * fVar6) +
              param_2[0x2c] * fVar22);
  (*(undefined4 *)((char *)&auVar27 + 8)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[2] * fVar4 + param_2[6] * fVar8) +
                                             param_2[10] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
                param_2[0x32] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xe] * fVar4 + param_2[0x12] * fVar8) +
                                            param_2[0x16] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
               param_2[0x36]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1a] * fVar4 + param_2[0x1e] * fVar8) +
                                            param_2[0x22] * fVar24) & *(uint *)&REFG(undefined, 0x10aba68)) *
               param_2[0x3a] <
              ((param_2[0x26] * fVar4 + param_1[0x16]) + param_2[0x2a] * fVar8) +
              param_2[0x2e] * fVar24);
  (*(undefined4 *)((char *)&auVar27 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[3] * fVar5 + param_2[7] * fVar9) +
                                             param_2[0xb] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
                param_2[0x33] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xf] * fVar5 + param_2[0x13] * fVar9) +
                                            param_2[0x17] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x37]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1b] * fVar5 + param_2[0x1f] * fVar9) +
                                            param_2[0x23] * fVar25) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x3b] <
              ((param_2[0x27] * fVar5 + param_1[0x17]) + param_2[0x2b] * fVar9) +
              param_2[0x2f] * fVar25);
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[1] * fVar11 + param_2[5] * fVar15) +
                                                       param_2[9] * fVar19) & *(uint *)&REFG(undefined, 0x10aba64)
                                    ) * param_2[0x31] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xd] * fVar11 +
                                                      param_2[0x11] * fVar15) +
                                                      param_2[0x15] * fVar19) &
                                    *(uint *)&REFG(undefined, 0x10aba64)) * param_2[0x35]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x19] * fVar11 +
                                                      param_2[0x1d] * fVar15) +
                                                      param_2[0x21] * fVar19) &
                                    *(uint *)&REFG(undefined, 0x10aba64)) * param_2[0x39] <
                        ((param_2[0x25] * fVar11 + param_1[5]) + param_2[0x29] * fVar15) +
                        param_2[0x2d] * fVar19);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits((*param_2 * fVar10 + param_2[4] * fVar14) +
                                                       param_2[8] * fVar18) & *(uint *)&REFG(undefined, 0x10aba60)
                                    ) * param_2[0x30] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xc] * fVar10 +
                                                      param_2[0x10] * fVar14) +
                                                      param_2[0x14] * fVar18) &
                                    *(uint *)&REFG(undefined, 0x10aba60)) * param_2[0x34]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x18] * fVar10 +
                                                      param_2[0x1c] * fVar14) +
                                                      param_2[0x20] * fVar18) &
                                    *(uint *)&REFG(undefined, 0x10aba60)) * param_2[0x38] <
                        ((param_2[0x24] * fVar10 + param_1[4]) + param_2[0x28] * fVar14) +
                        param_2[0x2c] * fVar18);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[2] * fVar12 + param_2[6] * fVar16) +
                                                       param_2[10] * fVar20) &
                                     *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x32] +
                         gen_bits2f((uint)gen_fl2bits((param_2[0xe] * fVar12 +
                                                      param_2[0x12] * fVar16) +
                                                      param_2[0x16] * fVar20) &
                                    *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x36]) +
                         gen_bits2f((uint)gen_fl2bits((param_2[0x1a] * fVar12 +
                                                      param_2[0x1e] * fVar16) +
                                                      param_2[0x22] * fVar20) &
                                    *(uint *)&REFG(undefined, 0x10aba68)) * param_2[0x3a] <
                        ((param_2[0x26] * fVar12 + param_1[6]) + param_2[0x2a] * fVar16) +
                        param_2[0x2e] * fVar20);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits((param_2[3] * fVar13 + param_2[7] * fVar17) +
                                             param_2[0xb] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
                param_2[0x33] +
               gen_bits2f((uint)gen_fl2bits((param_2[0xf] * fVar13 + param_2[0x13] * fVar17) +
                                            param_2[0x17] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x37]) +
               gen_bits2f((uint)gen_fl2bits((param_2[0x1b] * fVar13 + param_2[0x1f] * fVar17) +
                                            param_2[0x23] * fVar21) & *(uint *)&REFG(undefined, 0x10aba6c)) *
               param_2[0x3b] <
              ((param_2[0x27] * fVar13 + param_1[7]) + param_2[0x2b] * fVar17) +
              param_2[0x2f] * fVar21);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar27), &(auVar1));
  iVar26 = gen_movmskps(gen_vt0);
  return iVar26 == 0;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf1 */
uint F_0061fdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x61fdb0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_0061fdc0 */
uint F_0061fdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x61fdc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(param_1,param_2);
  return uVar1;
}

/* ref: FUN_0061fde0 */
uint F_0061fde0(void)
{
  GEN_ENTER(0x61fde0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    uVar1 = F_00c4f2dd();
    uVar3 = uVar2 + 4;
    *(float *)((int)&REFG(float, 0x1379d80) + uVar2) =
         (float)((float10)(int)uVar1 / (float10)*(double *)&REFG(undefined, 0x10920e0));
    uVar2 = uVar3;
  } while (uVar3 < 0x400);
  return uVar1;
}

/* ref: FUN_0061fe10 */
uint F_0061fe10(unsigned int gen_a0)
{
  GEN_ENTER(0x61fe10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xff;
}

/* ref: FUN_0061fe30 */
float10 F_0061fe30(unsigned int gen_a0)
{
  GEN_ENTER(0x61fe30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 8;
  return (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[uVar1]))) +
                         (float10)((float)GEN_TOF(((float10)(param_1 & 0xff) *
                                         (float10)*(double *)&REFG(double, 0x10a5850)))) *
                         (((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[uVar1 + 1 & 0xff]))) -
                         ((float10)GEN_TOD(gen_bits2f((&REFG(float, 0x1379d80))[uVar1])))))));
}

/* ref: FUN_0061fe90 */
unsigned int F_0061fe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x61fe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
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
  float fVar28;
  float * pfVar29;
  float * pfVar30;
  int iVar31;
  
  fVar17 = *param_4;
  fVar18 = param_4[1];
  fVar19 = param_4[2];
  fVar20 = param_4[4];
  fVar21 = param_4[5];
  fVar22 = param_4[6];
  fVar23 = param_4[8];
  fVar24 = param_4[9];
  fVar25 = param_4[10];
  fVar26 = param_4[0xc];
  fVar27 = param_4[0xd];
  fVar28 = param_4[0xe];
  if (param_2 != 0) {
    pfVar30 = (float *)(param_1 + 0x20);
    pfVar29 = (float *)(param_3 + 0x20);
    iVar31 = param_2;
    do {
      fVar1 = pfVar29[-8];
      fVar2 = pfVar29[-7];
      fVar3 = pfVar29[-6];
      fVar4 = pfVar29[-5];
      fVar5 = pfVar29[-4];
      fVar6 = pfVar29[-3];
      fVar7 = pfVar29[-2];
      fVar8 = pfVar29[-1];
      fVar9 = *pfVar29;
      fVar10 = pfVar29[1];
      fVar11 = pfVar29[2];
      fVar12 = pfVar29[3];
      fVar13 = pfVar29[4];
      fVar14 = pfVar29[5];
      fVar15 = pfVar29[6];
      fVar16 = pfVar29[7];
      pfVar30[-4] = ((fVar2 * fVar20 + fVar1 * fVar17) + fVar3 * fVar23) + fVar4 * fVar26;
      pfVar30[-3] = ((fVar6 * fVar20 + fVar5 * fVar17) + fVar7 * fVar23) + fVar8 * fVar26;
      pfVar30[-2] = ((fVar10 * fVar20 + fVar9 * fVar17) + fVar11 * fVar23) + fVar12 * fVar26;
      pfVar30[-1] = ((fVar14 * fVar20 + fVar13 * fVar17) + fVar15 * fVar23) + fVar16 * fVar26;
      *pfVar30 = ((fVar2 * fVar21 + fVar1 * fVar18) + fVar3 * fVar24) + fVar4 * fVar27;
      pfVar30[1] = ((fVar6 * fVar21 + fVar5 * fVar18) + fVar7 * fVar24) + fVar8 * fVar27;
      pfVar30[2] = ((fVar10 * fVar21 + fVar9 * fVar18) + fVar11 * fVar24) + fVar12 * fVar27;
      pfVar30[3] = ((fVar14 * fVar21 + fVar13 * fVar18) + fVar15 * fVar24) + fVar16 * fVar27;
      pfVar30[4] = ((fVar2 * fVar22 + fVar1 * fVar19) + fVar3 * fVar25) + fVar4 * fVar28;
      pfVar30[5] = ((fVar6 * fVar22 + fVar5 * fVar19) + fVar7 * fVar25) + fVar8 * fVar28;
      pfVar30[6] = ((fVar10 * fVar22 + fVar9 * fVar19) + fVar11 * fVar25) + fVar12 * fVar28;
      pfVar30[7] = ((fVar14 * fVar22 + fVar13 * fVar19) + fVar15 * fVar25) + fVar16 * fVar28;
      pfVar29 = pfVar29 + 0x10;
      pfVar30 = pfVar30 + 0x20;
      iVar31 = iVar31 + -1;
    } while (iVar31 != 0);
  }
  return 0;
}

/* ref: FUN_0062002e */
unsigned int F_0062002e(void)
{
  GEN_ENTER(0x62002eu, 0u, 0u, 0u, 0u);
  code * pcVar1;
  
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  (*pcVar1)();
  return 0;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf1 */
uint F_00620040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620040u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00620050 */
uint F_00620050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620050u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((*(uint *)&REFG(undefined, 0x1487c50) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487c50) = *(uint *)&REFG(undefined, 0x1487c50) | 1;
    *(float *)&REFG(undefined, 0x1487c40) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c44) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c48) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c4c) = REFG(float, 0x1088068);
  }
  fVar4 = (param_2[4] + *param_2) * *(float *)&REFG(undefined, 0x1487c40);
  fVar5 = (param_2[5] + param_2[1]) * *(float *)&REFG(undefined, 0x1487c44);
  fVar6 = (param_2[6] + param_2[2]) * *(float *)&REFG(undefined, 0x1487c48);
  fVar7 = param_2[4] - fVar4;
  fVar8 = param_2[5] - fVar5;
  fVar9 = param_2[6] - fVar6;
  (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[1]) & *(uint *)&REFG(undefined, 0x10aba84)) * fVar7
                         + gen_bits2f((uint)gen_fl2bits(param_1[9]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                           fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0xd]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar9 < ((param_1[1] * fVar4 + param_1[5]) + param_1[9] * fVar5) +
                                 param_1[0xd] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(*param_1) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar7 +
                         gen_bits2f((uint)gen_fl2bits(param_1[8]) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar8)
                         + gen_bits2f((uint)gen_fl2bits(param_1[0xc]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                           fVar9 <
                        ((*param_1 * fVar4 + param_1[4]) + param_1[8] * fVar5) +
                        param_1[0xc] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[2]) & *(uint *)&REFG(undefined, 0x10aba88)) * fVar7
                         + gen_bits2f((uint)gen_fl2bits(param_1[10]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                           fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0xe]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar9 < ((param_1[2] * fVar4 + param_1[6]) + param_1[10] * fVar5) +
                                 param_1[0xe] * fVar6);
  (*(undefined4 *)((char *)&auVar2 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[3]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar7 +
               gen_bits2f((uint)gen_fl2bits(param_1[0xb]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar8) +
               gen_bits2f((uint)gen_fl2bits(param_1[0xf]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 <
              ((param_1[3] * fVar4 + param_1[7]) + param_1[0xb] * fVar5) + param_1[0xf] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x11]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x19]) &
                                             *(uint *)&REFG(undefined, 0x10aba84)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1d]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar9 < ((param_1[0x11] * fVar4 + param_1[0x15]) + param_1[0x19] * fVar5) +
                                 param_1[0x1d] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x10]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x18]) &
                                             *(uint *)&REFG(undefined, 0x10aba80)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1c]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                         fVar9 < ((param_1[0x10] * fVar4 + param_1[0x14]) + param_1[0x18] * fVar5) +
                                 param_1[0x1c] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x12]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                          fVar7 + gen_bits2f((uint)gen_fl2bits(param_1[0x1a]) &
                                             *(uint *)&REFG(undefined, 0x10aba88)) * fVar8) +
                         gen_bits2f((uint)gen_fl2bits(param_1[0x1e]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar9 < ((param_1[0x12] * fVar4 + param_1[0x16]) + param_1[0x1a] * fVar5) +
                                 param_1[0x1e] * fVar6);
  (*(undefined4 *)((char *)&auVar1 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(param_1[0x13]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar7 +
               gen_bits2f((uint)gen_fl2bits(param_1[0x1b]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar8) +
               gen_bits2f((uint)gen_fl2bits(param_1[0x1f]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 <
              ((param_1[0x13] * fVar4 + param_1[0x17]) + param_1[0x1b] * fVar5) +
              param_1[0x1f] * fVar6);
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar2), &(auVar1));
  iVar3 = gen_movmskps(gen_vt0);
  return CONCAT31((int3)((uint)iVar3 >> 8),iVar3 == 0);
}

/* ref: FUN_0062005c */
byte F_0062005c(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62005cu, gen_a0, gen_a1, gen_a2, 0u);
  int in_ebx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float * pfVar1;
  float * pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(uint *)&REFG(undefined, 0x1487c50) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487c50) = *(uint *)&REFG(undefined, 0x1487c50) | 1;
    *(float *)&REFG(undefined, 0x1487c40) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c44) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c48) = REFG(float, 0x1088068);
    *(float *)&REFG(undefined, 0x1487c4c) = REFG(float, 0x1088068);
  }
  pfVar1 = *(float * PTR32 *)(in_ebx + 0xc);
  fVar6 = (pfVar1[4] + *pfVar1) * *(float *)&REFG(undefined, 0x1487c40);
  fVar7 = (pfVar1[5] + pfVar1[1]) * *(float *)&REFG(undefined, 0x1487c44);
  fVar8 = (pfVar1[6] + pfVar1[2]) * *(float *)&REFG(undefined, 0x1487c48);
  pfVar2 = *(float * PTR32 *)(in_ebx + 8);
  fVar9 = pfVar1[4] - fVar6;
  fVar10 = pfVar1[5] - fVar7;
  fVar11 = pfVar1[6] - fVar8;
  (*(undefined4 *)((char *)&auVar4 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[1]) & *(uint *)&REFG(undefined, 0x10aba84)) * fVar9
                         + gen_bits2f((uint)gen_fl2bits(pfVar2[9]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                           fVar10) +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[0xd]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar11 < ((pfVar2[1] * fVar6 + pfVar2[5]) + pfVar2[9] * fVar7) +
                                  pfVar2[0xd] * fVar8);
  (*(undefined4 *)((char *)&auVar4 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(*pfVar2) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar9 +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[8]) & *(uint *)&REFG(undefined, 0x10aba80)) * fVar10)
                         + gen_bits2f((uint)gen_fl2bits(pfVar2[0xc]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                           fVar11 <
                        ((*pfVar2 * fVar6 + pfVar2[4]) + pfVar2[8] * fVar7) + pfVar2[0xc] * fVar8);
  (*(undefined4 *)((char *)&auVar4 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[2]) & *(uint *)&REFG(undefined, 0x10aba88)) * fVar9
                         + gen_bits2f((uint)gen_fl2bits(pfVar2[10]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                           fVar10) +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[0xe]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar11 < ((pfVar2[2] * fVar6 + pfVar2[6]) + pfVar2[10] * fVar7) +
                                  pfVar2[0xe] * fVar8);
  (*(undefined4 *)((char *)&auVar4 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[3]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 +
               gen_bits2f((uint)gen_fl2bits(pfVar2[0xb]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar10) +
               gen_bits2f((uint)gen_fl2bits(pfVar2[0xf]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar11 <
              ((pfVar2[3] * fVar6 + pfVar2[7]) + pfVar2[0xb] * fVar7) + pfVar2[0xf] * fVar8);
  (*(undefined4 *)((char *)&auVar3 + 4)) = -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[0x11]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                          fVar9 + gen_bits2f((uint)gen_fl2bits(pfVar2[0x19]) &
                                             *(uint *)&REFG(undefined, 0x10aba84)) * fVar10) +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[0x1d]) & *(uint *)&REFG(undefined, 0x10aba84)) *
                         fVar11 < ((pfVar2[0x11] * fVar6 + pfVar2[0x15]) + pfVar2[0x19] * fVar7) +
                                  pfVar2[0x1d] * fVar8);
  (*(undefined4 *)((char *)&auVar3 + 0)) = -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[0x10]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                          fVar9 + gen_bits2f((uint)gen_fl2bits(pfVar2[0x18]) &
                                             *(uint *)&REFG(undefined, 0x10aba80)) * fVar10) +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[0x1c]) & *(uint *)&REFG(undefined, 0x10aba80)) *
                         fVar11 < ((pfVar2[0x10] * fVar6 + pfVar2[0x14]) + pfVar2[0x18] * fVar7) +
                                  pfVar2[0x1c] * fVar8);
  (*(undefined4 *)((char *)&auVar3 + 8)) = -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[0x12]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                          fVar9 + gen_bits2f((uint)gen_fl2bits(pfVar2[0x1a]) &
                                             *(uint *)&REFG(undefined, 0x10aba88)) * fVar10) +
                         gen_bits2f((uint)gen_fl2bits(pfVar2[0x1e]) & *(uint *)&REFG(undefined, 0x10aba88)) *
                         fVar11 < ((pfVar2[0x12] * fVar6 + pfVar2[0x16]) + pfVar2[0x1a] * fVar7) +
                                  pfVar2[0x1e] * fVar8);
  (*(undefined4 *)((char *)&auVar3 + 12)) =
       -(uint)((gen_bits2f((uint)gen_fl2bits(pfVar2[0x13]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar9 +
               gen_bits2f((uint)gen_fl2bits(pfVar2[0x1b]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar10) +
               gen_bits2f((uint)gen_fl2bits(pfVar2[0x1f]) & *(uint *)&REFG(undefined, 0x10aba8c)) * fVar11 <
              ((pfVar2[0x13] * fVar6 + pfVar2[0x17]) + pfVar2[0x1b] * fVar7) + pfVar2[0x1f] * fVar8)
  ;
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar4), &(auVar3));
  iVar5 = gen_movmskps(gen_vt0);
  return iVar5 == 0;
}

/* ref: Client::Graphics::Render::TerrainRenderer::vf1 */
unsigned int F_006201e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6201e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x3a68) = 0;
  return 0;
}

/* ref: FUN_006201f0 */
uint F_006201f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6201f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar1 = (int)this + 0x11fd;
  iVar3 = 0x400;
  do {
    *(undefined2 *)(iVar1 + -1) = 0x202;
    iVar1 = iVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pvVar2 = F_00c48350((undefined *)((int)this + 0x1fc),0,0x1000);
  return (uint)pvVar2;
}

/* ref: FUN_00620230 */
byte F_00620230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620230u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))) + 0x18))))(((int *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))));
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return ((*(undefined4 * PTR32 *)&gen_args[1])[1] & (*(uint *)&gen_args[0])) != (*(uint *)&gen_args[0]);
}

/* ref: FUN_00620290 */
float10 F_00620290(float gen_a0)
{
  GEN_ENTER(0x620290u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  return (float10)(float)fVar1;
}

/* ref: FUN_006202b0 */
uint F_006202b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6202b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (REFG(int * PTR32, 0x137fab0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fab0) + 0xc))))(REFG(int * PTR32, 0x137fab0));
    if (REFG(int * PTR32, 0x137fab0)[1] == 0) {
      REFG(int * PTR32, 0x137fab0) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faac) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faac) + 0xc))))(REFG(int * PTR32, 0x137faac));
    if (REFG(int * PTR32, 0x137faac)[1] == 0) {
      REFG(int * PTR32, 0x137faac) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa8) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa8) + 0xc))))(REFG(int * PTR32, 0x137faa8));
    if (REFG(int * PTR32, 0x137faa8)[1] == 0) {
      REFG(int * PTR32, 0x137faa8) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa4) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa4) + 0xc))))(REFG(int * PTR32, 0x137faa4));
    if (REFG(int * PTR32, 0x137faa4)[1] == 0) {
      REFG(int * PTR32, 0x137faa4) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137faa0) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa0) + 0xc))))(REFG(int * PTR32, 0x137faa0));
    if (REFG(int * PTR32, 0x137faa0)[1] == 0) {
      REFG(int * PTR32, 0x137faa0) = (int *)0x0;
    }
  }
  if (REFG(int * PTR32, 0x137fa9c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa9c) + 0xc))))(REFG(int * PTR32, 0x137fa9c));
    if (REFG(int * PTR32, 0x137fa9c)[1] == 0) {
      REFG(int * PTR32, 0x137fa9c) = (int *)0x0;
    }
  }
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
    if (REFG(int * PTR32, 0x137fa98) != (int *)0x0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa98) + 0xc))))(REFG(int * PTR32, 0x137fa98));
      if (REFG(int * PTR32, 0x137fa98)[1] == 0) {
        REFG(int * PTR32, 0x137fa98) = (int *)0x0;
      }
    }
  }
  else {
    uVar2 = *(int *)((int)this + 4) - 1;
    if ((uVar2 < 2) && (REFG(int * PTR32, 0x137fa0c) != (int *)0x0)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa0c) + 0xc))))(REFG(int * PTR32, 0x137fa0c));
      if (REFG(int * PTR32, 0x137fa0c)[1] == 0) {
        REFG(int * PTR32, 0x137fa0c) = (int *)0x0;
      }
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar2;
}

/* ref: FUN_00620400 */
uint F_00620400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x620400u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x80) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = *param_3;
  *(float *)(param_1 + 0x84) = param_4;
  return (uint)param_3;
}

/* ref: FUN_00620460 */
uint F_00620460(unsigned int gen_a0)
{
  GEN_ENTER(0x620460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  piVar3 = (int *)((int)this + 0x3c);
  local_8 = 2;
  do {
    piVar1 = (int *)piVar3[-2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-2] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x1d0);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1d0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xa0);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar3 = (int *)((int)this + 0x20);
  local_8 = 2;
  do {
    piVar1 = (int *)piVar3[2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[2] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar1 = (int *)piVar3[-2];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-2] = 0;
    }
    piVar1 = (int *)piVar3[-4];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-4] = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_00620580 */
unsigned int F_00620580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x620580u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x34);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x34) = param_2;
  if (param_3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x38);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x38) = param_3;
  *(float *)(param_1 + 0x274) = param_4;
  *(float *)(param_1 + 0x270) = param_5;
  return 0;
}

/* ref: FUN_006205f0 */
unsigned int F_006205f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x6205f0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x3c) = param_2;
  if (param_3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_3 + 8))(param_3);
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x40);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)(param_1 + 0x40) = param_3;
  *(float *)(param_1 + 0x278) = param_4;
  return 0;
}

/* ref: FUN_00620650 */
float10 F_00620650(float gen_a0)
{
  GEN_ENTER(0x620650u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)(float)((float10)param_1 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
  return (float10)(float)((float10)(float)fVar1 * (float10)(float)fVar1);
}

/* ref: FUN_00620680 */
uint F_00620680(unsigned int gen_a0)
{
  GEN_ENTER(0x620680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x2c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar2 = (int *)((int)this + 0x14);
  local_8 = 3;
  do {
    if (*piVar2 != 0) {
      F_0050c620(*piVar2,0,0);
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x10),0,0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  return uVar1;
}

/* ref: FUN_006207a0 */
uint F_006207a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6207a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  F_00c48350((undefined *)((int)this + 4),0,0x8c);
  return (uint)this;
}

/* ref: Client::Graphics::Render::ShadowMaskRenderer::vf1 */
unsigned int F_006207e0(void)
{
  GEN_ENTER(0x6207e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006207f0 */
uint F_006207f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6207f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10aba9c));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00620800 */
unsigned int F_00620800(unsigned int gen_a0)
{
  GEN_ENTER(0x620800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00620820 */
unsigned int F_00620820(unsigned int gen_a0)
{
  GEN_ENTER(0x620820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 0x24);
  local_8 = 4;
  do {
    piVar1 = (int *)piVar3[-5];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-5] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x44);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x20);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x38);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x50);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x54);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x58);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x5c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x8c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x8c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  piVar3 = (int *)((int)this + 100);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x78);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  piVar3 = (int *)((int)this + 0x7c);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0x90);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x90) = 0;
  }
  piVar3 = (int *)((int)this + 0x94);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar3 = (int *)((int)this + 0xa4);
  iVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0xb4);
  iVar2 = 3;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = (int *)((int)this + 0xc0);
  iVar2 = 2;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 200);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 200) = 0;
  }
  piVar3 = (int *)((int)this + 0xcc);
  iVar2 = 4;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  piVar3 = *(int * PTR32 *)((int)this + 0xdc);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe4) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0xe8);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x198);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x198) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x19c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x19c) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1a0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x1a4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x1a4) = 0;
  }
  return 0;
}

/* ref: FUN_00620bb0 */
unsigned int F_00620bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x620bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((int)this + 0x20);
  iVar2 = 4;
  do {
    if ((undefined *)puVar1[-5] != (undefined *)0x0) {
      F_004d9cc0((undefined *)puVar1[-5]);
    }
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0x3c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x3c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x40) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x40));
  }
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x1c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x34));
  }
  if (*(undefined * PTR32 *)((int)this + 0x38) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x38));
  }
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x30));
  }
  if (*(undefined * PTR32 *)((int)this + 0x8c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x8c));
  }
  puVar1 = (undefined4 *)((int)this + 0x90);
  iVar2 = 4;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xa0);
  iVar2 = 4;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xb0);
  iVar2 = 3;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = (undefined4 *)((int)this + 0xbc);
  iVar2 = 2;
  do {
    if ((undefined *)*puVar1 != (undefined *)0x0) {
      F_004d9cc0((undefined *)*puVar1);
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0xc4) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0xc4));
  }
  if (*(undefined * PTR32 *)((int)this + 0x194) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x194));
  }
  if (*(undefined * PTR32 *)((int)this + 0x198) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x198));
  }
  if (*(undefined * PTR32 *)((int)this + 0x19c) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x19c));
  }
  if (*(undefined * PTR32 *)((int)this + 0x1a0) != (undefined *)0x0) {
    F_004d9cc0(*(undefined * PTR32 *)((int)this + 0x1a0));
    return 0;
  }
  return 0;
}

/* ref: FUN_00620d10 */
uint F_00620d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620d10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00620d20 */
uint F_00620d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x620d20u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00620d30 */
unsigned int F_00620d30(unsigned int gen_a0)
{
  GEN_ENTER(0x620d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x83c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x83c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x838);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x838) = 0;
  }
  piVar2 = (int *)((int)this + 0x18);
  local_8 = 4;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = *(int * PTR32 *)((int)this + 0x28);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x18))(piVar2);
    piVar2 = *(int * PTR32 *)((int)this + 0x28);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  piVar2 = (int *)((int)this + 0x7c);
  local_8 = 0x14;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1);
      piVar1 = (int *)*piVar2;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar2 = 0;
      }
    }
    piVar2 = piVar2 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  piVar2 = *(int * PTR32 *)((int)this + 0xcc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xcc) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd0) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd4) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe0) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xd8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xd8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xdc);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xdc) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe4);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe4) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xe8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x1a0);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x1a0) = 0;
  }
  return 0;
}

/* ref: FUN_00620ec0 */
uint F_00620ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x620ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x840) != 0) {
    F_0050c620(*(int *)((int)this + 0x840),0,0);
    *(undefined4 *)((int)this + 0x840) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x844) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x844),0,0);
    *(undefined4 *)((int)this + 0x844) = 0;
  }
  return uVar1;
}

/* ref: FUN_00620f30 */
unsigned int F_00620f30(unsigned int gen_a0)
{
  GEN_ENTER(0x620f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return 0;
}

/* ref: FUN_00620f70 */
unsigned int F_00620f70(void)
{
  GEN_ENTER(0x620f70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00620f80 */
uint F_00620f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x620f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)((int)this + 0x78);
  while ((*piVar2 == 0 || (*piVar2 != param_1))) {
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 1;
    if (0x13 < (int)uVar1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

/* ref: FUN_00620fb0 */
uint F_00620fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x620fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x70);
  return (uint)this;
}

/* ref: FUN_00621020 */
uint F_00621020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_00621030 */
uint F_00621030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((int *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[0] = 0;
  ((int *)(gen_frame + 0xc))[1] = 0;
  ((int *)(gen_frame + 0xc))[2] = 1;
  uVar1 = *(uint *)((int)this + ((int *)(gen_frame + 0xc))[(int)(param_1)] * 4 + 4);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00621070 */
uint F_00621070(unsigned int gen_a0)
{
  GEN_ENTER(0x621070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  ((uint *)(gen_frame + 0x4))[0] = 0x10;
  ((uint *)(gen_frame + 0x4))[1] = 0xc;
  return ((uint *)(gen_frame + 0x4))[(int)(param_1)];
}

/* ref: FUN_006210a0 */
uint F_006210a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6210a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((uint *)(gen_frame + 0xc))[0] = 0x10;
  ((uint *)(gen_frame + 0xc))[1] = 0x10;
  ((uint *)(gen_frame + 0xc))[2] = 0xc;
  uVar1 = ((uint *)(gen_frame + 0xc))[(int)(param_1)];
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00621100 */
unsigned int F_00621100(unsigned int gen_a0)
{
  GEN_ENTER(0x621100u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00621130 */
unsigned int F_00621130(unsigned int gen_a0)
{
  GEN_ENTER(0x621130u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00621190 */
byte F_00621190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x21) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006211a0 */
uint F_006211a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6211a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (((*(int *)(in_ecx + 0x20) != 0) && (*(int *)(in_ecx + 0x28) != 0)) &&
     (*(int *)(in_ecx + 0x24) != 0)) {
    uVar1 = F_00500600(*(int *)(in_ecx + 0x20));
    return *(uint *)(uVar1 + 8);
  }
  return 0;
}

/* ref: FUN_006211e0 */
uint F_006211e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6211e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005006f0(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_006211f0 */
uint F_006211f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6211f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00500710(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_00621200 */
uint F_00621200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00500730(*(undefined4 *)(in_ecx + 0x20),param_2);
  return uVar1;
}

/* ref: FUN_00621220 */
unsigned int F_00621220(unsigned int gen_a0)
{
  GEN_ENTER(0x621220u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00621250 */
unsigned int F_00621250(unsigned int gen_a0)
{
  GEN_ENTER(0x621250u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00621270 */
uint F_00621270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621270u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *(int *)(in_ecx + 0x30);
}

/* ref: FUN_00621290 */
uint F_00621290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621290u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006212b0 */
unsigned int F_006212b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6212b0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_006212d0 */
uint F_006212d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6212d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)(in_ecx + 0x28);
  if (puVar1 == (undefined4 *)0x0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1375ac0));
    param_2[1] = GEN_FLT_TO(param_2[1], REFG(float, 0x1375ac4));
    param_2[2] = GEN_FLT_TO(param_2[2], REFG(float, 0x1375ac8));
    return (uint)param_2;
  }
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  param_2[2] = puVar1[2];
  return (uint)param_2;
}

/* ref: FUN_00621320 */
uint F_00621320(unsigned int gen_a0)
{
  GEN_ENTER(0x621320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int local_c;
  
  piVar4 = *(int * PTR32 *)((int)this + 0x1164);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1164) = 0;
  }
  piVar4 = (int *)((int)this + 0x114c);
  local_c = 2;
  do {
    iVar3 = 2;
    piVar5 = piVar4;
    do {
      piVar5 = piVar5 + 1;
      piVar1 = (int *)*piVar5;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar5 = 0;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar5 = (int *)*piVar4;
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 3;
    local_c = local_c + -1;
  } while (local_c != 0);
  piVar4 = *(int * PTR32 *)((int)this + 0x120c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x120c) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1184);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1184) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x117c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x117c) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1174);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1174) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x118c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x118c) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x1168) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x1168),0,0);
    *(undefined4 *)((int)this + 0x1168) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1214);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1214) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x1220);
  if (piVar4 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x1220) = 0;
  }
  return uVar2;
}

/* ref: Client::Graphics::Render::GrassRenderer::vf1 */
uint F_00621470(unsigned int gen_a0)
{
  GEN_ENTER(0x621470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined2 *)(in_ecx + 0x1144) = 0;
  return 0;
}

/* ref: FUN_00621480 */
uint F_00621480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x621480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort uVar1;
  
  uVar1 = *(ushort *)((int)this + 0x1144);
  if (uVar1 < 0x450) {
    *(undefined4 *)((int)this + (uint)uVar1 * 4 + 4) = param_1;
    *(short *)((int)this + 0x1144) = *(short *)((int)this + 0x1144) + 1;
  }
  return (uint)uVar1;
}

/* ref: FUN_006214b0 */
unsigned int F_006214b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6214b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1218) = param_2;
  return 0;
}

/* ref: FUN_006214e0 */
unsigned int F_006214e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6214e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x121c) = param_2;
  if ((float10)param_2 <= (float10)*(float *)(in_ecx + 0x1218)) {
    *(float *)(in_ecx + 0x121c) =
         ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1218) + (float10)*(double *)&REFG(undefined, 0x10928e8))));
    return 0;
  }
  return 0;
}

/* ref: FUN_00621530 */
unsigned int F_00621530(unsigned int gen_a0)
{
  GEN_ENTER(0x621530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x1218) = REFG(float, 0x10ab17c);
  *(undefined4 *)(in_ecx + 0x121c) = REFG(float, 0x1087f04);
  return 0;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf1 */
uint F_00621560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621560u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf4 */
uint F_00621570(unsigned int gen_a0)
{
  GEN_ENTER(0x621570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x10),0,0);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar2;
}

/* ref: FUN_006215b0 */
uint F_006215b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6215b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Render::WaterRenderer::vf1 */
unsigned int F_006215d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6215d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x1b2) = 0;
  return 0;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf1 */
uint F_00621600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf4 */
uint F_00621610(unsigned int gen_a0)
{
  GEN_ENTER(0x621610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 0x10) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x10),0,0);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  return uVar2;
}

/* ref: FUN_00621650 */
uint F_00621650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf1 */
uint F_00621690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x621690u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf4 */
uint F_006216a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6216a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(this + 8) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 8),0,0);
    *(undefined4 *)(this + 8) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar2;
}

/* ref: FUN_006216e0 */
uint F_006216e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6216e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
  }
  *(int *)((int)this + 8) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_00621720 */
uint F_00621720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  float10 fVar2;
  
  uVar1 = *(uint *)((int)this + 0x10);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1088100);
  *param_1 = ((float)GEN_TOF(((float10)(uVar1 & 0xff) / fVar2)));
  param_1[1] = ((float)GEN_TOF(((float10)(uVar1 >> 8 & 0xff) / fVar2)));
  param_1[2] = ((float)GEN_TOF(((float10)(uVar1 >> 0x10 & 0xff) / fVar2)));
  param_1[3] = ((float)GEN_TOF(((float10)(uVar1 >> 0x18) / fVar2)));
  return (uint)param_1;
}

/* ref: FUN_006217c0 */
byte F_006217c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6217c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  byte bVar1;
  
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined1 *)((int)this + 1) = (undefined1)param_1;
  bVar1 = (byte)param_2;
  *(undefined1 *)((int)this + 3) = (undefined1)param_4;
  *(byte *)((int)this + 2) = (byte)param_2;
  *(undefined1 *)((int)this + 4) = (undefined1)param_5;
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((byte)param_2 == 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = REFG(float, 0x1087f04);
    return bVar1;
  }
  if ((byte)param_2 == 2) {
    *(undefined4 *)((int)this + 0x10) = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 0x14) = 0;
    return bVar1;
  }
  if ((byte)param_2 == 1) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return bVar1;
}

/* ref: FUN_00621830 */
byte F_00621830(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x621830u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  char cVar3;
  float10 fVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  uVar5 = REFG(float, 0x1087f04);
  cVar3 = *(char *)(in_ecx + 2);
  fVar1 = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0xc))));
  if (cVar3 == '\0') {
    if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x1088068))) && !(fVar1 < REFG(float, 0x1088068))) {
      return 0;
    }
    fVar6 = (float10)*(double *)&REFG(undefined, 0x1094788);
    fVar2 = (float)((float10)fVar1 * fVar6);
    *(float *)(in_ecx + 0x10) = fVar2;
    if ((float10)1 < (float10)fVar2) {
      *(undefined4 *)(in_ecx + 0x10) = uVar5;
    }
    fVar2 = ((float)GEN_TOF((((float10)REFG(double, 0x1088108) - (float10)fVar1) * fVar6)));
    *(float *)(in_ecx + 0x14) = fVar2;
    if ((float10)1 < (float10)fVar2) {
      *(undefined4 *)(in_ecx + 0x14) = uVar5;
      *(float *)(in_ecx + 0xc) = fVar1;
      return 1;
    }
  }
  else {
    if (cVar3 == '\x01') {
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ab17c))) && !(fVar1 < REFG(float, 0x10ab17c))) {
        return 0;
      }
      fVar6 = (float10)fVar1;
    }
    else {
      if (cVar3 != '\x02') goto LAB_006218eb;
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ab17c))) && !(fVar1 < REFG(float, 0x10ab17c))) {
        return 0;
      }
      fVar6 = (float10)*(double *)&REFG(undefined, 0x1094878) - (float10)fVar1;
    }
    fVar4 = (float10)*(double *)&REFG(undefined, 0x1094788);
    *(undefined4 *)(in_ecx + 0x14) = 0;
    *(float *)(in_ecx + 0x10) = (float)(fVar6 * fVar4);
  }
LAB_006218eb: ;
  *(float *)(in_ecx + 0xc) = fVar1;
  return 1;
}

/* ref: FUN_00621930 */
byte F_00621930(unsigned int gen_a0)
{
  GEN_ENTER(0x621930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  undefined1 * puVar2;
  
  uVar1 = 0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  *(undefined4 *)(in_ecx + 0x18) = 0;
  *(undefined4 *)(in_ecx + 0x1c) = 0;
  *(undefined4 *)(in_ecx + 0x20) = 0;
  puVar2 = (undefined1 *)(in_ecx + 0x24);
  do {
    *puVar2 = (char)uVar1;
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 0x18;
  } while (uVar1 < 0x100);
  return 1;
}

/* ref: FUN_00621970 */
uint F_00621970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x621970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  uint uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar3 = this;
  do {
    puVar3 = puVar3 + 1;
    uVar2 = *puVar3;
    if (uVar2 != 0xffffffff) {
      uVar4 = 0;
      do {
        uVar5 = 1 << ((byte)uVar4 & 0x1f);
        if ((uVar2 & uVar5) == 0) {
          *(uint *)((int)this + uVar6 * 4 + 4) = uVar5 | uVar2;
          uVar4 = uVar6 * 0x20 + uVar4;
          iVar1 = uVar4 * 0x18;
          *(undefined1 *)((int)this + iVar1 + 0x25) = (undefined1)param_1;
          *(undefined1 *)((int)this + iVar1 + 0x27) = (undefined1)param_4;
          *(char *)((int)this + iVar1 + 0x26) = (char)param_2;
          *(undefined4 *)((int)this + iVar1 + 0x2c) = param_3;
          *(undefined1 *)((int)this + iVar1 + 0x28) = (undefined1)param_5;
          *(undefined4 *)((int)this + iVar1 + 0x30) = 0;
          if ((char)param_2 == '\0') {
            *(undefined4 *)((int)this + iVar1 + 0x34) = 0;
            *(undefined4 *)((int)this + iVar1 + 0x38) = REFG(float, 0x1087f04);
            return uVar4;
          }
          if ((char)param_2 != '\x02') {
            if ((char)param_2 != '\x01') {
              return uVar4;
            }
            *(undefined4 *)((int)this + iVar1 + 0x34) = 0;
            *(undefined4 *)((int)this + iVar1 + 0x38) = 0;
            return uVar4;
          }
          *(undefined4 *)((int)this + iVar1 + 0x34) = REFG(float, 0x1087f04);
          *(undefined4 *)((int)this + iVar1 + 0x38) = 0;
          return uVar4;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x20);
    }
    uVar6 = uVar6 + 1;
    if (7 < uVar6) {
      return 0xffff;
    }
  } while( true );
}

/* ref: FUN_00621a50 */
uint F_00621a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + (uint)((ushort)param_1 >> 5) * 4 + 4)));
  *puVar1 = *puVar1 & ~(1 << ((byte)(ushort)param_1 & 0x1f));
  return (uint)((ushort)param_1 >> 5);
}

/* ref: FUN_00621a80 */
uint F_00621a80(void)
{
  GEN_ENTER(0x621a80u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_009f0510(1);
  uVar1 = F_00b1af80(this);
  return uVar1;
}

/* ref: FUN_00621ab0 */
unsigned int F_00621ab0(void)
{
  GEN_ENTER(0x621ab0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00621ac0 */
uint F_00621ac0(void)
{
  GEN_ENTER(0x621ac0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = (undefined *)F_009f0510(1);
  if (this != (undefined *)0x0) {
    uVar1 = F_00b1af80(this);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00621ae0 */
unsigned int F_00621ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x621ae0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  for (iVar2 = param_1[1]; iVar2 != 0; iVar2 = iVar2 + -1) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,0);
    piVar1 = piVar1 + 0x24;
  }
  return 0;
}

/* ref: FUN_00621b80 */
uint F_00621b80(unsigned int gen_a0)
{
  GEN_ENTER(0x621b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abc34));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 0x12) = 0xff;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0x32;
  *(undefined2 *)((int)this + 0x10) = 0xffff;
  *(undefined4 *)((int)this + 0x13) = 0x1010101;
  *(undefined4 *)((int)this + 0x17) = 0x1010000;
  *(undefined4 *)((int)this + 0x1b) = 0x10101;
  *(undefined4 *)((int)this + 0x1f) = 0;
  *(undefined4 *)((int)this + 0x23) = 0;
  *(undefined4 *)((int)this + 0x27) = 0x1010000;
  *(undefined1 *)((int)this + 0x2b) = 1;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return (uint)this;
}

/* ref: FUN_00621be0 */
byte F_00621be0(unsigned int gen_a0)
{
  GEN_ENTER(0x621be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  cVar1 = *(char *)((int)this + 0x13);
  if ((cVar1 != '\0') && (*(char *)((int)this + 0x14) != '\0')) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
    F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,2);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
    F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,2);
    *(char *)((int)this + 0x12) = -(cVar1 != '\0');
    *(undefined2 *)((int)this + 0x10) = 0xffff;
    return 1;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x6d646c;
  F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,1);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x746578;
  F_005079f0(*(undefined * PTR32 *)(REFG(int, 0x1375aec) + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),0,1);
  *(char *)((int)this + 0x12) = -(cVar1 != '\0');
  *(undefined2 *)((int)this + 0x10) = 0;
  return 1;
}

/* ref: FUN_00621ca0 */
byte F_00621ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x621ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint * puVar1;
  
  this_00 = REFG(void * PTR32, 0x13759f4);
  if (REFG(void * PTR32, 0x13759f4) == (undefined *)0x0) {
    return 0;
  }
  puVar1 = (uint *)F_0068bb80(REFG(void * PTR32, 0x13759f4));
  *puVar1 = (uint)*(byte *)((int)this + 0x24);
  F_006a59f0(this_00,1);
  return 1;
}

/* ref: FUN_00621cd0 */
unsigned int F_00621cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10abc60);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10abc40));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x30) = uVar1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar1;
  uVar1 = REFG(float, 0x10abc38);
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x10abc38);
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  uVar1 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x54) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x58) = 1;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x70) = uVar1;
  *(undefined4 *)((int)this + 0x74) = REFG(float, 0x10947a4);
  *(undefined4 *)((int)this + 0x78) = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  return 0;
}

/* ref: FUN_00621da0 */
uint F_00621da0(unsigned int gen_a0)
{
  GEN_ENTER(0x621da0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  in_ecx[0x20] = 0;
  in_ecx[0x21] = 0;
  in_ecx[0x22] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00621df0 */
uint F_00621df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(uint *)((int)this + 0x10) >> 4 & 1) == 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x118 + param_1 * 4)));
  }
  return *(uint *)((int)this + param_1 * 4 + 0x38);
}

/* ref: FUN_00621e20 */
uint F_00621e20(unsigned int gen_a0)
{
  GEN_ENTER(0x621e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_8;
  
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
  uVar1 = *((ushort *)GEN_TOP((*(int *)(iVar6 + 4) + 0x12 + iVar6)));
  uVar5 = (uint)uVar1;
  uVar4 = F_00406bb0(uVar5 * 4,0,0);
  *(uint *)((int)this + 0x48) = uVar4;
  if (uVar1 != 0) {
    iVar6 = 0;
    local_8 = uVar5;
    do {
      *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x48)))) = 0;
      iVar2 = *((int *)GEN_TOP((iVar6 + *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0x124))))));
      if (iVar2 == 0) {
        uVar4 = *(uint *)((int)this + 0x48);
        *(undefined4 *)(iVar6 + uVar4) = 0;
      }
      else {
        piVar3 = *(int * PTR32 *)(iVar2 + 0xa0);
        if (piVar3 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
        }
        uVar4 = *(uint *)((int)this + 0x48);
        if (*(int *)(uVar4 + iVar6) != 0) {
          uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar4 + iVar6) + 0xc))))(*(int * PTR32 *)(uVar4 + iVar6));
        }
        *((undefined4 *)GEN_TOP((iVar6 + *(int *)((int)this + 0x48)))) = *(undefined4 *)(iVar2 + 0xa0);
      }
      iVar6 = iVar6 + 4;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
    *(uint *)((int)this + 0x4c) = uVar5;
    return uVar4;
  }
  *(undefined4 *)((int)this + 0x4c) = 0;
  return 0;
}

/* ref: FUN_00621ef0 */
uint F_00621ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x621ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x30);
  if (iVar2 != 0) {
    puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x6c)));
    do {
      *puVar1 = param_1;
      puVar1 = puVar1 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(uint *)((int)this + 0x34) = param_1;
    return (uint)puVar1;
  }
  *(uint *)((int)this + 0x34) = param_1;
  return param_1;
}

/* ref: Client::Graphics::Render::Camera::vf1 */
unsigned int F_00621fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x621fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x120);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return 0;
}

/* ref: FUN_00621fc0 */
uint F_00621fc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x621fc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  uint in_ecx = (uint)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  cVar5 = *(char *)(in_ecx + 0xb8);
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = (undefined4 *)(in_ecx + 0x10);
  puVar6 = param_5;
  puVar9 = (undefined4 *)(in_ecx + 0x10);
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  (*(uint *)(gen_frame + 0x18)) = in_ecx;
  if (cVar5 == '\0') {
    F_004f0c10(in_ecx + 0x50,in_xmm3,in_xmm5,in_xmm6,*(float *)(in_ecx + 0xa4),
                 *(float *)(in_ecx + 0xa8),*(float *)(in_ecx + 0xac),*(float *)(in_ecx + 0xb0));
  }
  else {
    fVar3 = *(float *)(in_ecx + 0xb4);
    (*(float *)(gen_frame + 0x1c)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)*(float *)(in_ecx + 0xa8))));
    (*(float *)(gen_frame + 0x1c)) = fVar4;
    F_004f09d0(in_ecx + 0x50,fVar4,fVar3,*(float *)(in_ecx + 0xac),*(float *)(in_ecx + 0xb0),
                 (float)(float10)0,(float)(float10)0);
  }
  puVar6 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x20)),(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
  puVar9 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar9 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar6 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),((undefined4 *)(gen_frame + 0x60)));
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar7 = (*(uint *)(gen_frame + 0x18));
  *(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x90) = *puVar6;
  *(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x94) = uVar1;
  *(undefined4 *)((*(uint *)(gen_frame + 0x18)) + 0x98) = uVar2;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar7;
}

/* ref: Client::Graphics::Render::Camera::vf5 */
uint F_00622110(unsigned int gen_a0)
{
  GEN_ENTER(0x622110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x0)),(uint)(this + 0x10),(uint)(this + 0x50));
  puVar4 = ((undefined4 *)(gen_frame + 0x40));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar2 = F_0065fc60(this + 0xc0,((undefined4 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar2;
}

/* ref: FUN_00622190 */
uint F_00622190(unsigned int gen_a0)
{
  GEN_ENTER(0x622190u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x108b284));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1096cd4));
  in_ecx[0x2b] = GEN_FLT_TO(in_ecx[0x2b], REFG(float, 0x1094884));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1094724));
  uVar1 = REFG(float, 0x1094880);
  in_ecx[1] = 1;
  in_ecx[0x28] = 0x1e;
  in_ecx[0x2d] = uVar1;
  *(undefined1 *)(in_ecx + 0x2e) = 0;
  in_ecx[0x48] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[6])REFP(0x10abc98));
  return (uint)in_ecx;
}

/* ref: FUN_00622210 */
unsigned int F_00622210(unsigned int gen_a0)
{
  GEN_ENTER(0x622210u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  return 0;
}

/* ref: FUN_006222c0 */
uint F_006222c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6222c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1b0) = *param_2;
  *(undefined4 *)(in_ecx + 0x1b4) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1b8) = param_2[2];
  *(undefined1 *)(in_ecx + 0x1c4) = 1;
  return (uint)param_2;
}

/* ref: FUN_006222f0 */
uint F_006222f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6222f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float local_30;
  float local_2c;
  
  fVar2 = (float10)*param_3;
  fVar3 = (float10)*param_2;
  if (*(double *)&REFG(undefined, 0x10ab998) <=
      (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_3[2] * (float10)param_2[2] +
                                         ((float10)param_3[1] * (float10)param_2[1] + fVar3 * fVar2)
                                         ))))))) {
    fVar3 = (float10)REFG(float, 0x1302c80);
    fVar4 = (float10)REFG(float, 0x1302c84);
    fVar5 = (float10)REFG(float, 0x1302c88);
    if (*(double *)&REFG(undefined, 0x10ab998) <=
        (double)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((fVar3 * fVar2 + fVar4 * (float10)param_3[1]) +
                                           fVar5 * (float10)param_3[2]))))))) {
      local_30 = (float)((float10)REFG(float, 0x1302c74) * (float10)param_3[2] -
                        (float10)REFG(float, 0x1302c78) * (float10)param_3[1]);
      local_2c = (float)(fVar2 * (float10)REFG(float, 0x1302c78) - (float10)REFG(float, 0x1302c70) * (float10)param_3[2]
                        );
      fVar2 = (float10)param_3[1] * (float10)REFG(float, 0x1302c70) - fVar2 * (float10)REFG(float, 0x1302c74);
    }
    else {
      local_30 = (float)((float10)param_3[2] * fVar4 - (float10)param_3[1] * fVar5);
      local_2c = (float)(fVar2 * fVar5 - (float10)param_3[2] * fVar3);
      fVar2 = (float10)param_3[1] * fVar3 - fVar2 * fVar4;
    }
  }
  else {
    local_30 = (float)((float10)param_2[1] * (float10)param_3[2] -
                      (float10)param_3[1] * (float10)param_2[2]);
    local_2c = (float)((float10)param_2[2] * fVar2 - fVar3 * (float10)param_3[2]);
    fVar2 = (float10)param_3[1] * fVar3 - (float10)param_2[1] * fVar2;
  }
  *param_1 = (float)((float10)local_2c * (float10)param_3[2] -
                    (float10)(float)fVar2 * (float10)param_3[1]);
  param_1[1] = (float)((float10)*param_3 * (float10)(float)fVar2 -
                      (float10)local_30 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)local_30 -
                      (float10)local_2c * (float10)*param_3);
  pfVar1 = (float *)F_0046f390(param_1);
  *param_1 = *pfVar1;
  param_1[1] = pfVar1[1];
  param_1[2] = pfVar1[2];
  return (uint)pfVar1;
}

/* ref: FUN_006224f0 */
uint F_006224f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6224f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  undefined4 uVar8;
  uint uVar9;
  float10 fVar10;
  
  uVar9 = REFG(float, 0x10920d0);
  uVar8 = REFG(float, 0x1087f04);
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  *param_1 = uVar8;
  param_1[5] = uVar8;
  param_1[10] = uVar8;
  param_1[0xe] = (uint)gen_fl2bits(fVar5) ^ uVar9;
  fVar10 = (float10)REFG(double, 0x1088108);
  param_1[0xf] = uVar8;
  param_1[0xc] = (uint)gen_fl2bits(((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)fVar1) *
                                          fVar10)))) ^ uVar9;
  fVar7 = (float10)REFG(double, 0x1094890);
  param_1[0xd] = (uint)gen_fl2bits(((float)GEN_TOF((fVar10 * (float10)(float)((float10)fVar4 + (float10)fVar3
                                                                    ))))) ^ uVar9;
  uVar9 = F_0065f3e0(param_1,((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                                      (float10)(float)((float10)fVar1 - (float10)fVar2)))),
                       ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x1092098) /
                              (float10)(float)((float10)fVar3 - (float10)fVar4)))),
                       ((float)GEN_TOF((fVar7 / (float10)(float)((float10)fVar5 - (float10)fVar6)))));
  return uVar9;
}

/* ref: FUN_00622640 */
uint F_00622640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0x622640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x270];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float * pfVar8;
  undefined4 * puVar9;
  uint uVar10;
  int iVar11;
  float * pfVar12;
  undefined4 * puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x25c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x260);
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(float * PTR32 *)(gen_frame + 0x34)) = param_6;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_7;
  F_006222f0(((undefined1 *)(gen_frame + 0x0)),param_5,param_6);
  (*(float *)(gen_frame + 0x70)) = *param_7;
  pfVar12 = param_7 + 2;
  (*(float *)(gen_frame + 0x74)) = param_7[1];
  (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar12;
  (*(float *)(gen_frame + 0x78)) = *pfVar12;
  (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)0x1;
  if (1 < (uint)gen_fl2bits(param_8)) {
    if (3 < (int)gen_fl2bits(param_8) + -1) {
      iVar11 = ((int)gen_fl2bits(param_8) - 5U >> 2) + 1;
      (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)(iVar11 * 4 + 1);
      pfVar8 = param_7 + 10;
      do {
        iVar11 = iVar11 + -1;
        fVar14 = (float10)(*(float *)(gen_frame + 0x70));
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar8[-6] + fVar14);
        fVar15 = (float10)(*(float *)(gen_frame + 0x74));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar8[-5] + fVar15);
        fVar16 = (float10)(*(float *)(gen_frame + 0x78));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)pfVar8[-4] + fVar16);
        fVar3 = ((float)GEN_TOF(((float10)pfVar8[-2] + (float10)(float)((float10)pfVar8[-6] + fVar14))));
        (*(float *)(gen_frame + 0x70)) = fVar3;
        fVar4 = ((float)GEN_TOF(((float10)pfVar8[-1] + (float10)(float)((float10)pfVar8[-5] + fVar15))));
        (*(float *)(gen_frame + 0x74)) = fVar4;
        fVar5 = ((float)GEN_TOF(((float10)*pfVar8 + (float10)(float)((float10)pfVar8[-4] + fVar16))));
        (*(float *)(gen_frame + 0x78)) = fVar5;
        fVar3 = (float)((float10)pfVar8[2] + (float10)fVar3);
        (*(float *)(gen_frame + 0x70)) = fVar3;
        fVar4 = (float)((float10)pfVar8[3] + (float10)fVar4);
        (*(float *)(gen_frame + 0x74)) = fVar4;
        fVar5 = (float)((float10)pfVar8[4] + (float10)fVar5);
        (*(float *)(gen_frame + 0x78)) = fVar5;
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar8[6] + (float10)fVar3);
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar8[7] + (float10)fVar4);
        (*(float *)(gen_frame + 0x78)) = (float)((float10)pfVar8[8] + (float10)fVar5);
        pfVar8 = pfVar8 + 0x10;
      } while (iVar11 != 0);
    }
    if ((*(float * PTR32 *)(gen_frame + 0x64)) < (uint)gen_fl2bits(param_8)) {
      iVar11 = (int)gen_fl2bits(param_8) - (int)(*(float * PTR32 *)(gen_frame + 0x64));
      pfVar8 = param_7 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x64))) * 4 + 2;
      do {
        iVar11 = iVar11 + -1;
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar8[-2] + (float10)(*(float *)(gen_frame + 0x70)));
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar8[-1] + (float10)(*(float *)(gen_frame + 0x74)));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)*pfVar8 + (float10)(*(float *)(gen_frame + 0x78)));
        pfVar8 = pfVar8 + 4;
      } while (iVar11 != 0);
    }
  }
  (*(float *)(gen_frame + 0x6c)) = param_8;
  fVar14 = (float10)(int)gen_fl2bits(param_8);
  if ((int)gen_fl2bits(param_8) < 0) {
    fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)(gen_frame + 0x6c)) = (float)fVar14;
  (*(float * PTR32 *)(gen_frame + 0x64)) = (float *)0x0;
  fVar14 = (float10)(float)fVar14;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x70)) / fVar14);
  (*(float *)(gen_frame + 0x70)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x74)) / fVar14);
  (*(float *)(gen_frame + 0x74)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x78)) / fVar14);
  (*(float *)(gen_frame + 0x78)) = fVar5;
  if (param_8 != 0.0) {
    (*(float *)(gen_frame + 0x6c)) = param_8;
    do {
      (*(float *)(gen_frame + 0x50)) = (float)((float10)pfVar12[-2] - (float10)fVar3);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar12[-1] - (float10)fVar4);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)*pfVar12 - (float10)fVar5);
      fVar14 = (float10)(float)((float10)pfVar12[-1] - (float10)fVar4);
      fVar15 = (float10)(float)((float10)pfVar12[-2] - (float10)fVar3);
      fVar16 = (float10)(float)((float10)*pfVar12 - (float10)fVar5);
      fVar6 = ((float)GEN_TOF((fVar16 * fVar16 + (fVar15 * fVar15 + fVar14 * fVar14))));
      (*(float * PTR32 *)(gen_frame + 0x68)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar6)));
      pfVar8 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar6))))));
      (*(float * PTR32 *)(gen_frame + 0x68)) = pfVar8;
      if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar8)))) {
        (*(float * PTR32 *)(gen_frame + 0x64)) = pfVar8;
      }
      pfVar12 = pfVar12 + 4;
      fVar6 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + -1);
      (*(float *)(gen_frame + 0x6c)) = fVar6;
    } while (fVar6 != 0.0);
  }
  fVar6 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x64))))));
  (*(float *)(gen_frame + 0x6c)) = fVar6;
  fVar14 = (float10)fVar6;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar14 * (float10)*(*(float * PTR32 *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x34))[1] * fVar14);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar14 * (float10)(*(float * PTR32 *)(gen_frame + 0x34))[2]);
  fVar3 = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar14 * (float10)*(*(float * PTR32 *)(gen_frame + 0x34))))));
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 - (float10)(float)((float10)(*(float * PTR32 *)(gen_frame + 0x34))[1] * fVar14))));
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar5 - (float10)(float)(fVar14 * (float10)(*(float * PTR32 *)(gen_frame + 0x34))[2]))));
  (*(float *)(gen_frame + 0x48)) = fVar5;
  (*(float *)(gen_frame + 0x50)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = fVar4;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  F_004f4430(param_2,&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0x0)));
  if (param_8 != 0.0) {
    puVar13 = ((undefined4 *)(gen_frame + 0xd0)) + 2;
    (*(float * PTR32 *)(gen_frame + 0x8c)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x8c)) - (int)puVar13);
    (*(float *)(gen_frame + 0x6c)) = param_8;
    do {
      (*(undefined4 *)(gen_frame + 0x90)) = *param_2;
      (*(undefined4 *)(gen_frame + 0x94)) = param_2[1];
      (*(undefined4 *)(gen_frame + 0x98)) = param_2[2];
      (*(undefined4 *)(gen_frame + 0xa0)) = param_2[4];
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xa4)) = param_2[5];
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined4 *)(gen_frame + 0xa8)) = param_2[6];
      (*(undefined4 *)(gen_frame + 0xc0)) = param_2[0xc];
      (*(undefined4 *)(gen_frame + 0xb0)) = param_2[8];
      (*(undefined4 *)(gen_frame + 0xc4)) = param_2[0xd];
      (*(undefined4 *)(gen_frame + 0xb4)) = param_2[9];
      (*(undefined4 *)(gen_frame + 0xc8)) = param_2[0xe];
      (*(undefined4 *)(gen_frame + 0xb8)) = param_2[10];
      (*(undefined4 *)(gen_frame + 0xcc)) = REFG(float, 0x1087f04);
      puVar9 = (undefined4 *)F_004ee9b0(&(*(float *)(gen_frame + 0x40)),(int)(*(float * PTR32 *)(gen_frame + 0x8c)) + (int)puVar13,&(*(undefined4 *)(gen_frame + 0x90)));
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      puVar13[-2] = *puVar9;
      puVar13[-1] = uVar1;
      *puVar13 = uVar2;
      puVar13 = puVar13 + 4;
      fVar3 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + -1);
      (*(float *)(gen_frame + 0x6c)) = fVar3;
    } while (fVar3 != 0.0);
  }
  F_004f4990(&(*(float *)(gen_frame + 0x10)),((undefined4 *)(gen_frame + 0xd0)),(undefined4)gen_fl2bits(param_8),0x10);
  (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x28));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x10)) / (float10)param_9))));
  dVar7 = (double)(float)((float10)(*(float *)(gen_frame + 0x10)) / (float10)param_9);
  fVar14 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)param_9 * (float10)(float)fVar14);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x14)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  dVar7 = (double)fVar3;
  fVar14 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_9 * (float10)(float)fVar14);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x18)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  dVar7 = (double)fVar3;
  fVar14 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)param_9 * (float10)(float)fVar14);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x20)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  dVar7 = (double)fVar3;
  fVar14 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x50)) = (float)((float10)param_9 * (float10)(float)fVar14);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x54)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  dVar7 = (double)fVar3;
  fVar14 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)param_9 * (float10)(float)fVar14);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x58)) / (float10)param_9);
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  dVar7 = (double)fVar3;
  fVar14 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar7),
                        (int)((ulonglong)gen_d2bits(dVar7) >> 0x20));
  (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x40));
  fVar3 = (float)((float10)(float)fVar14 * (float10)param_9);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x54));
  uVar10 = F_006224f0((*(undefined4 *)(gen_frame + 0x38)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x25c)) ^ (uint)(uint)(gen_frame + 0x260));
  return uVar10;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf6 */
uint F_00622e40(unsigned int gen_a0)
{
  GEN_ENTER(0x622e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined * pCVar5;
  
  pCVar5 = this + 0x130;
  iVar4 = 4;
  do {
    iVar1 = *(int *)pCVar5;
    piVar2 = *(int * PTR32 *)(iVar1 + 0x120);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      *(undefined4 *)(iVar1 + 0x120) = 0;
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pCVar5 + 0xc))))(*(int * PTR32 *)pCVar5);
    pCVar5 = pCVar5 + 4;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar2 = *(int * PTR32 *)(this + 0x120);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(this + 0x120) = 0;
  }
  return uVar3;
}

/* ref: FUN_00622f40 */
uint F_00622f40(unsigned int gen_a0)
{
  GEN_ENTER(0x622f40u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  in_ecx[1] = 0;
  in_ecx[6] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Render::Rigid::vf1 */
unsigned int F_00622fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x622fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  return 0;
}

/* ref: FUN_00622fe0 */
byte F_00622fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x622fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)param_1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) != 0) {
    F_0050c620(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))),0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))) = param_2;
  if (param_2 != 0) {
    F_00513f60(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar2 * 4))),0,0);
    if ((ushort)param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x44) + 0xa8)));
    }
    F_009f9680(((undefined *)GEN_TOP((uVar2 * 0x120 + *(int *)((int)this + 0x4c)))),param_2,uVar1);
  }
  return 1;
}

/* ref: FUN_00623060 */
uint F_00623060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  *(undefined4 *)((int)this + 0x20) = param_1[4];
  *(undefined4 *)((int)this + 0x24) = param_1[5];
  *(undefined4 *)((int)this + 0x28) = param_1[6];
  *(undefined4 *)((int)this + 0x2c) = param_1[7];
  *(undefined4 *)((int)this + 0x30) = param_1[8];
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x34) = param_1[9];
  *(undefined4 *)((int)this + 0x38) = param_1[10];
  uVar1 = *(int *)((int)this + 0x70) + 0x1fU >> 5;
  if (uVar1 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x6c) + uVar2 * 4))) = 0xffffffff;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return uVar1;
}

/* ref: FUN_006230d0 */
unsigned int F_006230d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6230d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  undefined * this;
  int iVar2;
  uint local_8;
  
  F_009f0510(0);
  if (((*(int *)(param_1 + 0x58) != 0) &&
      (bVar1 = F_009f15b0(*(int *)(param_1 + 0x58)), bVar1 != 0)) &&
     (*(int *)(REFG(int, 0x1375b00) + 0x28) == 0)) {
    F_009f45b0(*(undefined * PTR32 *)(param_1 + 0x58),(undefined4)gen_fl2bits(param_2));
  }
  local_8 = (uint)*(ushort *)(param_1 + 0x40);
  if (local_8 != 0) {
    iVar2 = 0;
    do {
      this = ((undefined *)GEN_TOP((*(int *)(param_1 + 0x4c) + iVar2)));
      if (*(int *)((int)this + 0xbc) != 0) {
        F_009f8140(this,param_2);
        F_009f3370(this);
      }
      iVar2 = iVar2 + 0x120;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00623160 */
uint F_00623160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  ushort uVar2;
  byte * pbVar3;
  int iVar4;
  uint uVar5;
  byte * pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar2 = *(ushort *)((int)this + 0x40);
  uVar7 = 0;
  if (1 < uVar2) {
    pbVar3 = &REFG(undefined1, 0x10a5fe8);
    pbVar6 = param_1;
    do {
      bVar1 = *pbVar3;
      bVar8 = bVar1 < *pbVar6;
      if (bVar1 != *pbVar6) {
LAB_006231a0: ;
        iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_006231a5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar8 = bVar1 < pbVar6[1];
      if (bVar1 != pbVar6[1]) goto LAB_006231a0;
      pbVar3 = pbVar3 + 2;
      pbVar6 = pbVar6 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_006231a5: ;
    if (iVar4 != 0) {
      pbVar3 = &REFG(undefined1, 0x10a5ff0);
      pbVar6 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar8 = bVar1 < *pbVar6;
        if (bVar1 != *pbVar6) {
LAB_006231d0: ;
          iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_006231d5;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar8 = bVar1 < pbVar6[1];
        if (bVar1 != pbVar6[1]) goto LAB_006231d0;
        pbVar3 = pbVar3 + 2;
        pbVar6 = pbVar6 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006231d5: ;
      if (iVar4 != 0) goto joined_r0x006231e0;
    }
    uVar7 = 1;
  }
joined_r0x006231e0: ;
  while( true ) {
    if (uVar2 <= uVar7) {
      return 0xffff;
    }
    iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + uVar7 * 4)));
    if ((iVar4 != 0) &&
       (uVar5 = F_00d32e80(*(undefined4 *)(iVar4 + 0xa8),param_1,0), (uVar5 & 0x8000) == 0))
    break;
    uVar7 = uVar7 + 1;
  }
  return (uVar7 & 0xf) << 0xc | uVar5 & 0xfff;
}

/* ref: FUN_00623240 */
ushort F_00623240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  uVar1 = F_009f0d70(((undefined *)GEN_TOP(((uint)*param_1 * 0x120 + *(int *)((int)this + 0x4c)))),
                       (uint)*(ushort *)(param_1 + 2));
  return uVar1;
}

/* ref: FUN_00623270 */
ushort F_00623270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  return *((ushort *)GEN_TOP(((uint)*param_1 * 0x120 + 0xb2 + *(int *)((int)this + 0x4c))));
}

/* ref: FUN_00623290 */
uint F_00623290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009f5ea0(((undefined *)GEN_TOP(((param_1 >> 0xc & 0xf) * 0x120 + *(int *)((int)this + 0x4c)))),
                       param_1 & 0xfff,param_2);
  return uVar1;
}

/* ref: FUN_006232c0 */
uint F_006232c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6232c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((uint *)GEN_TOP(((uint)(ushort)param_2 * 0x120 + 0xbc + *(int *)(in_ecx + 0x4c))));
}

/* ref: FUN_006232e0 */
uint F_006232e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6232e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + (param_1 & 0xff) * 4)));
  if (iVar1 == 0) {
    return 0x1302d00;
  }
  uVar2 = (uint)(short)(param_1 >> 0x10);
  if (uVar2 < *(uint *)(iVar1 + 0xa4)) {
    return uVar2 * 0x40 + *(int *)(iVar1 + 0xcc);
  }
  return 0;
}

/* ref: FUN_00623320 */
uint F_00623320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + (param_1 >> 0xc & 0xf) * 4)));
  if (iVar1 == 0) {
    return 0x1302d00;
  }
  if ((param_1 & 0xfff) < *(uint *)(iVar1 + 0xa4)) {
    return (param_1 & 0xfff) * 0x40 + *(int *)(iVar1 + 0xcc);
  }
  return 0;
}

/* ref: FUN_00623360 */
byte F_00623360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = 0;
    if (*(uint *)((int)this + 0x68) != 0) {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x5c) + 0x20)));
      do {
        if (*piVar2 == param_1) {
          return 1;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 0x10;
      } while (uVar1 < *(uint *)((int)this + 0x68));
    }
  }
  return 0;
}

/* ref: FUN_006233a0 */
uint F_006233a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6233a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(uint * PTR32 *)(in_ecx + 0x50) != (uint *)0x0) {
    return **(uint * PTR32 *)(in_ecx + 0x50);
  }
  return 0;
}

/* ref: FUN_006233b0 */
uint F_006233b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6233b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x50) != 0) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc)));
  }
  return 0;
}

/* ref: FUN_006233d0 */
uint F_006233d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6233d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 0x50) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x50) + 0xc))) + param_1 * 4))) + 0x3c))) & 1;
  }
  return 0;
}

/* ref: FUN_00623400 */
float10 F_00623400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(param_1 + 0x50) == (undefined *)0x0) {
    return (float10)0;
  }
  uVar1 = F_009f0d90(*(undefined * PTR32 *)(param_1 + 0x50),param_2,1);
  if (uVar1 != 0) {
    return (float10)*(float *)(uVar1 + 0x38);
  }
  return (float10)0.0;
}

/* ref: FUN_00623440 */
uint F_00623440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x44) + param_1 * 4))) != 0) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x44) + param_1 * 4))) + 0xa8)));
  }
  return 0;
}

/* ref: FUN_00623470 */
uint F_00623470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x58);
  if (pvVar2 != (undefined *)0x0) {
    F_009f44d0(pvVar2);
    F_00406ad0(pvVar2);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  uVar1 = F_00406b90(0x20,0,0);
  if (uVar1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_009f1580(uVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x58) = pvVar2;
  uVar1 = F_009f4510(pvVar2,this,param_1);
  return uVar1;
}

/* ref: FUN_006234f0 */
unsigned int F_006234f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6234f0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  for (iVar1 = param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    uVar2 = ((code *)*(gen_code32 *)*param_2)(param_2,iVar1);
    if (((char)uVar2 != '\0') && (param_1 = (uint)*(ushort *)(iVar1 + 0x40), param_1 != 0)) {
      iVar3 = 0;
      do {
        ((code *)*(gen_code32 *)(*param_2 + 4))(param_2,*(int *)(iVar1 + 0x4c) + iVar3);
        iVar3 = iVar3 + 0x120;
        param_1 = param_1 - 1;
      } while (param_1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00623570 */
byte F_00623570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)(in_ecx + 4) != 1) {
    uVar1 = F_00a065a0();
    if ((char)uVar1 != '\0') {
      return *(char *)(param_2 + 0xa8) < '\x01';
    }
  }
  return 1;
}

/* ref: FUN_006235a0 */
uint F_006235a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6235a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = -(uint)(*(int *)((int)this + 4) != 0) & 2;
  this_00 = *(undefined * PTR32 *)(param_1 + 0xbc + uVar1 * 4);
  if (this_00 != (undefined *)0x0) {
    if ((int)REFG(undefined4, 0x137a180) < 0x400) {
      (&REFG(undefined4, 0x137a200))[REFG(undefined4, 0x137a180)] = this_00;
      uVar1 = REFG(undefined4, 0x137a180) + 1;
      REFG(undefined4, 0x137a180) = uVar1;
      return uVar1;
    }
    uVar1 = F_00d31730(this_00);
  }
  return uVar1;
}

/* ref: FUN_00623660 */
byte F_00623660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(param_1 + 0xa8) < '\x01';
}

/* ref: FUN_006236a0 */
byte F_006236a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6236a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(param_1 + 0xa8) < '\x01';
}

/* ref: FUN_006236e0 */
unsigned int F_006236e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6236e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(undefined * PTR32 *)(param_1 + 0xbc) != (undefined *)0x0) {
    F_00d31b70(*(undefined * PTR32 *)(param_1 + 0xbc));
  }
  return 0;
}

/* ref: FUN_00623700 */
uint F_00623700(unsigned int gen_a0)
{
  GEN_ENTER(0x623700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = *(ushort *)((int)this + 0x40);
  uVar4 = 0;
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = *(uint *)((int)this + 0x4c);
      iVar5 = uVar4 * 0x120;
      if (*(int *)(uVar3 + 0xbc + iVar5) != 0) {
        if (uVar4 == 0) {
          if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
            F_009f8f80(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,0);
          }
LAB_00623745: ;
          bVar2 = F_009f16f0(*(int *)((int)this + 0x4c) + iVar5,1);
          uVar3 = CONCAT31(extraout_var,bVar2);
          if (bVar2 != 0) {
            uVar3 = F_009f69f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar5))));
          }
        }
        else if (uVar4 == 1) goto LAB_00623745;
        if ((uVar4 == 0) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0)) {
          uVar3 = F_009f7590(*(undefined * PTR32 *)((int)this + 0x54));
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return uVar3;
}

/* ref: Client::Graphics::Render::PreBoneDeformer::vf1 */
uint F_00623780(unsigned int gen_a0)
{
  GEN_ENTER(0x623780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 8) != 0) {
    uVar1 = F_0050c620(*(int *)(this + 8),0,0);
    *(undefined4 *)(this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_006237a0 */
uint F_006237a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6237a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 0x74) = 0;
  uVar2 = 0;
  if (*(int *)((int)this + 0x70) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)((int)this + 0x70));
    *(undefined4 *)((int)this + 0x70) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x68);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  return uVar2;
}

/* ref: FUN_006237e0 */
uint F_006237e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6237e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x68),0,0,2);
  uVar5 = 0;
  if (uVar4 != 0) {
    piVar1 = (int *)(param_1 + 0x40);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(uint *)(param_1 + 0x50 + iVar2 * 8) = uVar4;
    iVar3 = *(int *)((int)this + 0x80);
    if (iVar3 != 0) {
      *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(iVar3 + 0x10);
      *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(iVar3 + 0x14);
      *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(iVar3 + 0x18);
      *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar3 + 0x30);
      *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(iVar3 + 0x34);
      *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(iVar3 + 0x38);
      *(undefined4 *)((int)this + 0x60) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x80) + 0x4c)));
      *(uint *)((int)this + 100) = (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x80) + 0x40)));
    }
    uVar5 = (int)this + 0x30;
    *(uint *)(param_1 + 0x54 + iVar2 * 8) = uVar5;
  }
  return uVar5;
}

/* ref: FUN_00623880 */
uint F_00623880(unsigned int gen_a0)
{
  GEN_ENTER(0x623880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abd90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0xffffffff;
  *(undefined4 *)((int)this + 0xac) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb0) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00623920 */
byte F_00623920(unsigned int gen_a0)
{
  GEN_ENTER(0x623920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x10);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0xc)) {
    iVar3 = *(int *)((int)this + 8) + uVar2 * 0x14;
  }
  else {
    iVar3 = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b0))) = iVar3;
  return iVar3 != 0;
}

/* ref: FUN_00623960 */
byte F_00623960(unsigned int gen_a0)
{
  GEN_ENTER(0x623960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),5,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x73686364;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitiveVS.shcd",0,0,0);
  *(uint *)((int)this + 0x8c) = uVar2;
  if (uVar2 != 0) {
    uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"shader/shcd/PrimitivePS.shcd",0,0,0);
    *(uint *)((int)this + 0x90) = uVar2;
    if (uVar2 != 0) {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x98)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x94);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      *(undefined4 *)((int)this + 0x94) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + 0x98)));
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x9c)));
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x98);
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      }
      *(undefined4 *)((int)this + 0x98) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x90) + 0x9c)));
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00623a70 */
uint F_00623a70(unsigned int gen_a0)
{
  GEN_ENTER(0x623a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00662be0((undefined *)((int)this + 0x70));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb3c));
  return uVar1;
}

/* ref: FUN_00623ae0 */
uint F_00623ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint local_c;
  uint * local_8;
  
  uVar1 = *(uint *)((int)this + 0x10) >> 5;
  iVar3 = 0;
  local_c = 0;
  if (uVar1 != 0) {
    local_8 = *(uint * PTR32 *)((int)this + 8);
    do {
      if (*local_8 != 0) {
        uVar2 = 0;
        do {
          if (((*local_8 & 1 << ((byte)uVar2 & 0x1f)) != 0) &&
             (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + (iVar3 + uVar2) * 4))) == param_1)) {
            return iVar3 + uVar2;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x20);
      }
      local_8 = local_8 + 1;
      local_c = local_c + 1;
      iVar3 = iVar3 + 0x20;
    } while (local_c < uVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_00623b60 */
uint F_00623b60(unsigned int gen_a0)
{
  GEN_ENTER(0x623b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  uint uVar6;
  
  uVar6 = *(uint *)((int)this + 0x10) >> 5;
  uVar2 = 0;
  if (uVar6 != 0) {
    puVar5 = *(uint * PTR32 *)((int)this + 8);
    do {
      uVar1 = *puVar5;
      if (uVar1 != 0xffffffff) {
        uVar3 = 0;
        do {
          uVar4 = 1 << ((byte)uVar3 & 0x1f);
          if ((uVar1 & uVar4) == 0) {
            (*(uint * PTR32 *)((int)this + 8))[uVar2] = uVar4 | uVar1;
            return uVar2 * 0x20 + uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < 0x20);
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar2 < uVar6);
  }
  return 0xffffffff;
}

/* ref: FUN_00623be0 */
byte F_00623be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined * _Dst;
  
  iVar1 = ((param_1 * 0x10 + 0x1fU >> 5) + 3 >> 2) * 0x10;
  *(int *)((int)this + 0x10) = iVar1;
  _Dst = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),iVar1,0x10)));
  *(undefined * PTR32 *)((int)this + 0xc) = _Dst;
  if (_Dst == (undefined *)0x0) {
    return 0;
  }
  F_00c48350(_Dst,0,*(gen_size32 *)((int)this + 0x10));
  return 1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf4 */
uint F_00623c90(unsigned int gen_a0)
{
  GEN_ENTER(0x623c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)(this + 0x20) != 0) {
    F_0050c620(*(int *)(this + 0x20),0,0);
    *(undefined4 *)(this + 0x20) = 0;
  }
  uVar1 = 0;
  if (*(int *)(this + 0x28) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)(this + 0x28));
    *(undefined4 *)(this + 0x28) = 0;
  }
  return uVar1;
}

/* ref: FUN_00623cd0 */
uint F_00623cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  
  *(int *)((int)this + 0x20) = param_1;
  F_00513f60(param_1,0,0);
  if (*(int *)((int)this + 0x28) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0x2c + *(int *)(param_1 + 0xa8))));
  pvVar3 = (undefined *)0x0;
  if (uVar2 != 0) {
    iVar1 = (uVar2 * 0x10 + 0x1f >> 5) * 4;
    *(int *)((int)this + 0x2c) = iVar1;
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),iVar1,0x10)));
    *(undefined * PTR32 *)((int)this + 0x28) = pvVar3;
    pvVar3 = F_00c48350(pvVar3,0,*(gen_size32 *)((int)this + 0x2c));
  }
  return (uint)pvVar3;
}

/* ref: FUN_00623d60 */
uint F_00623d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x623d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xf4)));
  if (pfVar7 == (float *)0x0) {
    pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x20) + 0xf0)));
  }
  uVar6 = *(ushort *)((int)this + 0x24);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 8) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_00623e40 */
uint F_00623e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
  uVar3 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x2c + iVar2))) * param_1 + param_2;
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar3 >> 5) * 4)));
  uVar3 = 1 << ((byte)uVar3 & 0x1f);
  *puVar1 = *puVar1 | uVar3;
  return uVar3;
}

/* ref: FUN_00623e80 */
uint F_00623e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
  uVar2 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar1 + 4) + 0x2c + iVar1))) * param_1 + param_2;
  return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar2 >> 5) * 4))) & 1 << ((byte)uVar2 & 0x1f);
}

/* ref: FUN_00623ec0 */
uint F_00623ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(short *)(param_1 + 10) * 0x20 + *(short *)(param_1 + 8) + 0x210;
  uVar3 = (uint)uVar2;
  *(ushort *)(param_1 + 0x26) = uVar2;
  *(int *)((int)this + uVar3 * 4 + 0x1fc) = param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x20) + 0x10))))(*(int * PTR32 *)(param_1 + 0x20));
  *(char *)((int)this + uVar3 * 8 + 0x11fc) = (char)uVar1;
  *(char *)((int)this + uVar3 * 8 + 0x11fd) = (char)uVar1;
  *(undefined2 *)((int)this + uVar3 * 8 + 0x11fe) = 0;
  *(undefined4 *)((int)this + uVar3 * 8 + 0x1200) = 0;
  return uVar1;
}

/* ref: FUN_00623f30 */
uint F_00623f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x623f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  undefined4 uVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  iVar7 = *(int *)this;
  uVar2 = *(ushort *)(iVar7 + 0x24);
  (*(uint *)(gen_frame + 0x48)) = param_1 + 0x10;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x54)) = 0;
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = 0;
  (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x70)) = 0;
  (*(undefined4 *)(gen_frame + 0x74)) = 0;
  (*(undefined4 *)(gen_frame + 0x78)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x80)) = (float)(int)((int)*(short *)(iVar7 + 8) * (uint)uVar2 + (uint)(uVar2 >> 1));
  (*(undefined4 *)(gen_frame + 0x84)) = 0;
  (*(float *)(gen_frame + 0x88)) = (float)(int)((int)*(short *)(iVar7 + 10) * (uint)uVar2 + (uint)(uVar2 >> 1));
  puVar5 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar5;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x90)),(uint)&(*(undefined4 *)(gen_frame + 0x50)),(*(uint *)(gen_frame + 0x48)));
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x44));
    uVar3 = REFG(float, 0x1087f04);
    puVar8 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    ((undefined4 *)(gen_frame + 0xa0))[0] = ((undefined4 *)(gen_frame + 0x0))[0];
    ((undefined4 *)(gen_frame + 0xa0))[1] = (*(undefined4 *)(gen_frame + 0x10));
    ((undefined4 *)(gen_frame + 0xa0))[2] = (*(undefined4 *)(gen_frame + 0x20));
    ((undefined4 *)(gen_frame + 0xa0))[3] = (*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 *)(gen_frame + 0xb0)) = ((undefined4 *)(gen_frame + 0x0))[1];
    (*(undefined4 *)(gen_frame + 0xb4)) = (*(undefined4 *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0xb8)) = (*(undefined4 *)(gen_frame + 0x24));
    (*(undefined4 *)(gen_frame + 0xbc)) = (*(undefined4 *)(gen_frame + 0x34));
    (*(undefined4 *)(gen_frame + 0xc0)) = ((undefined4 *)(gen_frame + 0x0))[2];
    (*(undefined4 *)(gen_frame + 0xc4)) = (*(undefined4 *)(gen_frame + 0x18));
    (*(undefined4 *)(gen_frame + 0xc8)) = (*(undefined4 *)(gen_frame + 0x28));
    (*(undefined4 *)(gen_frame + 0xcc)) = (*(undefined4 *)(gen_frame + 0x38));
    puVar6 = ((undefined4 *)(gen_frame + 0xa0));
    puVar8 = puVar5;
    for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar1 = *(undefined4 *)((int)pvVar4 + 0xc);
    puVar5[0xc] = uVar3;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = uVar1;
    puVar5[0x10] = *param_2;
    puVar5[0x11] = param_2[1];
    puVar5[0x12] = param_2[2];
    puVar5[0x13] = param_2[3];
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = 0;
    *((undefined4 *)GEN_TOP((*(int *)((int)pvVar4 + 0x10) + 0x24))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return (uint)puVar5;
}

/* ref: FUN_00624150 */
unsigned int F_00624150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x624150u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  *(undefined4 *)(*param_2 * 0x20 + param_1) = 3;
  *(undefined4 *)(*param_2 * 0x20 + 8 + param_1) = 0xd;
  uVar2 = REFG(undefined4, 0x130236c);
  iVar1 = *param_2;
  *(uint *)(iVar1 * 0x20 + 0x10 + param_1) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(iVar1 * 0x20 + 0x14 + param_1) = uVar2 & 0xfffffffc;
  *(undefined4 *)(*param_2 * 0x20 + 4 + param_1) = 0x7a88286;
  *(undefined4 *)(*param_2 * 0x20 + 0x18 + param_1) = 0x19;
  *param_2 = *param_2 + 1;
  return 0;
}

/* ref: FUN_00624210 */
unsigned int F_00624210(unsigned int gen_a0)
{
  GEN_ENTER(0x624210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  puVar1 = (undefined4 *)((int)this + 0xa0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x88);
  iVar2 = 3;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0;
}

/* ref: FUN_00624280 */
byte F_00624280(unsigned int gen_a0)
{
  GEN_ENTER(0x624280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char * pcVar1;
  uint uVar2;
  uint uVar3;
  uint * puVar4;
  
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
    *(undefined4 *)((int)this + 4) = 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    F_0050c620(*(int *)((int)this + 8),0,0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_0050c620(*(int *)((int)this + 0xc),0,0);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(int *)((int)this + 0x10) != 0) {
    F_0050c620(*(int *)((int)this + 0x10),0,0);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),5,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x73686364;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarVS0.shcd",0,0,0);
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarVS1.shcd",0,0,0);
  *(uint *)((int)this + 8) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarPS0.shcd",0,0,0);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"shader/shcd/StarPS1.shcd",0,0,0);
  *(uint *)((int)this + 0x10) = uVar2;
  if ((((*(int *)((int)this + 4) != 0) && (*(int *)((int)this + 8) != 0)) &&
      (*(int *)((int)this + 0xc) != 0)) && (uVar2 != 0)) {
    ((char * PTR32 *)(gen_frame + 0x28))[0] = "bgcommon/nature/star/texture/star0.tex";
    ((char * PTR32 *)(gen_frame + 0x28))[1] = "bgcommon/nature/star/texture/star1.tex";
    ((char * PTR32 *)(gen_frame + 0x28))[2] = "bgcommon/nature/star/texture/star2.tex";
    F_004ff2f0(((undefined1 *)(gen_frame + 0x34)));
    uVar2 = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(undefined4, 0x1302ff0);
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 5;
    (*(undefined1 *)(gen_frame + 0x14)) = 0xff;
    (*(undefined4 *)(gen_frame + 0x1d)) = 0x101;
    (*(undefined2 *)(gen_frame + 0x21)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    puVar4 = (uint *)((int)this + 0x14);
    while( true ) {
      if (*puVar4 != 0) {
        F_0050c620(*puVar4,0,0);
        *puVar4 = 0;
      }
      pcVar1 = ((char * PTR32 *)(gen_frame + 0x28))[(int)(uVar2)];
      F_00503ef0(((undefined1 *)(gen_frame + 0x34)),pcVar1);
      (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
      uVar3 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),pcVar1,&(*(undefined4 *)(gen_frame + 0x0)),0,0);
      *puVar4 = uVar3;
      if (uVar3 == 0) break;
      uVar2 = uVar2 + 1;
      puVar4 = puVar4 + 1;
      if (2 < uVar2) {
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00624430 */
byte F_00624430(unsigned int gen_a0)
{
  GEN_ENTER(0x624430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = (uint *)((int)this + 0x50);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0x4c)) {
    iVar3 = *(int *)((int)this + 0x48) + uVar2 * 0x14;
  }
  else {
    iVar3 = 0;
  }
  *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1b8))) = iVar3;
  return iVar3 != 0;
}

/* ref: FUN_00624470 */
byte F_00624470(unsigned int gen_a0)
{
  GEN_ENTER(0x624470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b52710("TransformType",0xd,0);
  uVar2 = F_00b52710("TransformTypePlane",0x12,0);
  *(uint *)((int)this + 0x18) = uVar1;
  *(uint *)((int)this + 0x1c) = uVar2;
  uVar1 = F_00b52710("TransformType",0xd,0);
  uVar2 = F_00b52710("TransformTypeBox",0x10,0);
  *(uint *)((int)this + 0x24) = uVar1;
  *(uint *)((int)this + 0x28) = uVar2;
  uVar1 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x30) = uVar1;
  uVar1 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x34) = uVar1;
  uVar1 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x3c) = uVar1;
  uVar1 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *(uint *)((int)this + 0x40) = uVar1;
  return 1;
}

/* ref: FUN_00624510 */
uint F_00624510(unsigned int gen_a0)
{
  GEN_ENTER(0x624510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  F_004d6630((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x20) = 0;
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
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x10c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
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
  *(undefined4 *)((int)this + 0x198) = 0;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  return (uint)this;
}

/* ref: FUN_00624650 */
byte F_00624650(unsigned int gen_a0)
{
  GEN_ENTER(0x624650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  F_004ff310(((undefined1 *)(gen_frame + 0x34)),0,0);
  (*(undefined4 *)(gen_frame + 0x38)) = 0x746578;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined1 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"common/graphics/texture/-attenuation.tex",&(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)((int)this + 0x840) = uVar1;
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x34)),&(*(undefined4 *)(gen_frame + 0x38)),"common/graphics/texture/-omni_shadow_index_table.tex",
                       &(*(undefined4 *)(gen_frame + 0xc)),0,0);
  *(uint *)((int)this + 0x844) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00624700 */
uint F_00624700(unsigned int gen_a0)
{
  GEN_ENTER(0x624700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  int * piVar6;
  
  piVar6 = (int *)((int)this + 0x18);
  (*(int *)(gen_frame + 0x2c)) = 4;
  do {
    if (*(int *)((int)this + 0x14) == 0) {
      *(undefined1 *)(*piVar6 + 0x1c4) = 0;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
      puVar5 = (undefined4 *)
               F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) + 0x10);
      uVar1 = puVar5[1];
      uVar2 = puVar5[2];
      iVar3 = *piVar6;
      *(undefined4 *)(iVar3 + 0x1b0) = *puVar5;
      *(undefined4 *)(iVar3 + 0x1b4) = uVar1;
      *(undefined4 *)(iVar3 + 0x1b8) = uVar2;
      *(undefined1 *)(iVar3 + 0x1c4) = 1;
      *(undefined1 *)(*piVar6 + 0x1c4) = 1;
    }
    piVar6 = piVar6 + 1;
    iVar3 = (*(int *)(gen_frame + 0x2c)) + -1;
    (*(int *)(gen_frame + 0x2c)) = iVar3;
  } while (iVar3 != 0);
  if (*(int *)((int)this + 0x14) != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    puVar5 = (undefined4 *)
             F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x10))) + 0x10);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    iVar3 = *(int *)((int)this + 0x28);
    *(undefined4 *)(iVar3 + 0x1b0) = *puVar5;
    *(undefined4 *)(iVar3 + 0x1b4) = uVar1;
    *(undefined4 *)(iVar3 + 0x1b8) = uVar2;
    *(undefined1 *)(iVar3 + 0x1c4) = 1;
    uVar4 = *(uint *)((int)this + 0x28);
    *(undefined1 *)(uVar4 + 0x1c4) = 1;
    return uVar4;
  }
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x28) + 0x1c4))) = 0;
  return 0;
}

/* ref: FUN_00624850 */
unsigned int F_00624850(unsigned int gen_a0)
{
  GEN_ENTER(0x624850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  float * pfVar3;
  int iVar4;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  pfVar3 = (float *)((int)this + 0x2c);
  iVar4 = 0x14;
  do {
    piVar2 = ((int *)(uintptr_t)gen_fl2bits((float)(pfVar3[0x14])));
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2);
      if (*pfVar3 < REFG(float, 0x1087f04)) {
        *pfVar3 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10947f0) + (float10)*pfVar3);
      }
    }
    pfVar3 = pfVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return 0;
}

/* ref: FUN_006248b0 */
uint F_006248b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6248b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(int *)((int)this + 0x18) = param_1;
  *(int *)((int)this + 0x1c) = param_2;
  uVar2 = 0;
  if (param_1 != 0) {
    uVar2 = F_004dcc90(param_1 * 0xc,4,8);
    *(uint *)((int)this + 0x10) = uVar2;
  }
  if (param_2 != 0) {
    uVar2 = F_004dccf0(param_2 * 2,1,4,8);
    *(uint *)((int)this + 0x14) = uVar2;
  }
  return uVar2;
}

/* ref: FUN_00624930 */
uint F_00624930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(uint *)((int)this + 0x10) == param_1) {
    return param_1;
  }
  *(uint *)((int)this + 0x10) = param_1;
  uVar2 = REFG(float, 0x10abe54);
  uVar3 = REFG(float, 0x1094884);
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0: ;
    *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1094884);
    *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10abe58);
    uVar3 = REFG(float, 0x10a0da0);
    *(undefined4 *)((int)this + 0x14) = 1;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x20) = 2;
    *(undefined4 *)((int)this + 0x24) = 3;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 1: ;
    *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1094884);
    *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10946b4);
    uVar3 = REFG(float, 0x10a0da0);
    *(undefined4 *)((int)this + 0x24) = 3;
    break;
  case 2: ;
    *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1094884);
    uVar2 = 2;
    *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10916ec);
    uVar3 = REFG(float, 0x10a0da0);
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x24) = 2;
    goto LAB_00624abc;
  case 3: ;
    *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1094884);
    *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10abe54);
    uVar3 = REFG(float, 0x10a0da0);
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 2;
    *(undefined4 *)((int)this + 0x24) = 1;
    *(undefined4 *)((int)this + 0x20) = 1;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 4: ;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 1;
    *(undefined4 *)((int)this + 0x20) = 2;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x2c) = uVar3;
    *(undefined4 *)((int)this + 0x30) = uVar2;
    *(undefined4 *)((int)this + 0x34) = uVar3;
    *(undefined1 *)((int)this + 0x4d) = 1;
    *(undefined4 *)((int)this + 0x18) = 1;
    return 1;
  case 5: ;
    *(undefined4 *)((int)this + 0x2c) = REFG(float, 0x1094884);
    *(undefined4 *)((int)this + 0x30) = REFG(float, 0x10946b4);
    uVar3 = REFG(float, 0x10abe50);
    *(undefined4 *)((int)this + 0x24) = 2;
    break;
  default: ;
    goto switchD_0062494b_default;
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
LAB_00624abc: ;
  uVar1 = 1;
  *(undefined4 *)((int)this + 0x1c) = uVar2;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined1 *)((int)this + 0x4d) = 1;
  *(undefined4 *)((int)this + 0x18) = 1;
switchD_0062494b_default: ;
  return uVar1;
}

/* ref: FUN_00624af0 */
unsigned int F_00624af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x624af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x128) + param_1 * 4)));
  *param_2 = **(undefined4 * PTR32 *)(iVar1 + 0x10);
  param_2[1] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 4)));
  param_2[2] = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 8)));
  *param_3 = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x14) * (float10)*(float *)(iVar1 + 0x20))));
  param_3[1] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x18) * (float10)*(float *)(iVar1 + 0x20))));
  param_3[2] = ((float)GEN_TOF(((float10)*(float *)(iVar1 + 0x1c) * (float10)*(float *)(iVar1 + 0x20))));
  *param_4 = *(undefined4 *)(iVar1 + 0x70);
  *param_5 = *(undefined4 *)(iVar1 + 0x7c);
  return 0;
}

/* ref: FUN_00624b90 */
uint F_00624b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624b90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined2 *)(in_ecx + 8) = 0;
  in_ecx[5] = 5;
  in_ecx[4] = 5;
  in_ecx[7] = 0;
  in_ecx[6] = 0;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00624be0 */
uint F_00624be0(unsigned int gen_a0)
{
  GEN_ENTER(0x624be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x14) = 5;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return (uint)this;
}

/* ref: FUN_00624c30 */
uint F_00624c30(unsigned int gen_a0)
{
  GEN_ENTER(0x624c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = F_00b14060(REFG(void * PTR32, 0x1370c1c),6);
  *(uint *)((int)this + 0x24) = uVar2;
  *(undefined * PTR32 *)(uVar2 + 4) = this;
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar1[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar1[2];
  (*(undefined4 *)(gen_frame + 0xc)) = puVar1[3];
  uVar2 = F_00b81ed0(*(undefined * PTR32 *)((int)this + 0x24),&(*(undefined4 *)(gen_frame + 0x0)));
  return uVar2;
}

/* ref: FUN_00624ca0 */
uint F_00624ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  (*(int *)(gen_frame + 0x2c)) = REFG(int, 0x1370c1c);
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int *)(gen_frame + 0x30)) = *(int *)(REFG(int, 0x1370c1c) + 0x3924) * 0x800 + 0x650 + REFG(int, 0x1370c1c);
  uVar5 = F_00500600(*(undefined4 *)((int)this + 0x20));
  uVar8 = 0;
  (*(uint *)(gen_frame + 0x28)) = *(uint *)(uVar5 + 8);
  if (*(uint *)(uVar5 + 8) != 0) {
    (*(int *)(gen_frame + 0x38)) = 0;
    pfVar7 = (float *)(uVar5 + 0x5c);
    do {
      fVar9 = (float10)REFG(double, 0x1088108);
      (*(float *)(gen_frame + 0x34)) = pfVar7[-4];
      fVar10 = (float10)pfVar7[-4];
      fVar1 = (float)((float10)pfVar7[-1] - fVar10);
      (*(float *)(gen_frame + 0x10)) = fVar1;
      (*(float *)(gen_frame + 0x34)) = pfVar7[-3];
      fVar11 = (float10)pfVar7[-3];
      fVar2 = (float)((float10)*pfVar7 - fVar11);
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x34)) = pfVar7[-2];
      fVar12 = (float10)pfVar7[-2];
      fVar3 = (float)((float10)pfVar7[1] - fVar12);
      (*(float *)(gen_frame + 0x18)) = fVar3;
      (*(float *)(gen_frame + 0x0)) = (float)((float10)fVar1 * fVar9 + fVar10);
      (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar2 * fVar9 + fVar11);
      (*(float *)(gen_frame + 0x8)) = (float)(fVar12 + (float10)fVar3 * fVar9);
      uVar5 = F_00b13590((*(int *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x10)));
      *((bool *)GEN_TOP(((*(int *)(gen_frame + 0x38)) + 0x21 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x30)))) = uVar5 != 0;
      bVar6 = (byte)uVar8;
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + 0x30;
      bVar4 = (uVar5 != 0) << (bVar6 & 0x1f);
      uVar5 = CONCAT31((int3)(uVar5 >> 8),bVar4);
      uVar8 = uVar8 + 1;
      pfVar7 = pfVar7 + 0x10;
      *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xc) =
           ~('\x01' << (bVar6 & 0x1f)) & *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0xc) | bVar4;
    } while (uVar8 < (*(uint *)(gen_frame + 0x28)));
  }
  return uVar5;
}

/* ref: FUN_00624dd0 */
uint F_00624dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  
  uVar1 = F_00500600(*(undefined4 *)((int)this + 0x20));
  uVar1 = *(uint *)(uVar1 + 8);
  uVar4 = 0;
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      *((char *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21 + uVar2))) = (char)param_1;
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 + 1;
      uVar2 = uVar2 + 0x30;
      *(byte *)((int)this + 0xc) =
           ~('\x01' << (bVar3 & 0x1f)) & *(byte *)((int)this + 0xc) |
           ((char)param_1 != '\0') << (bVar3 & 0x1f);
    } while (uVar4 < uVar1);
  }
  return uVar2;
}

/* ref: FUN_00624e40 */
byte F_00624e40(unsigned int gen_a0)
{
  GEN_ENTER(0x624e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int local_8;
  
  uVar1 = *(ushort *)((int)this + 0x2c);
  local_8 = 5;
  if (uVar1 != 0) {
    local_8 = *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10)));
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    iVar3 = 0;
    do {
      if (((*(byte *)((int)this + 0xc) >> ((byte)uVar2 & 0x1f) & 1) == 0) ||
         (local_8 != *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10 + iVar3))))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < uVar1);
  }
  return 1;
}

/* ref: FUN_00624ed0 */
float F_00624ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x624ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  float * pfVar8;
  float * pfVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  pfVar9 = *(float * PTR32 *)((int)this + 0x28);
  (*(float *)(gen_frame + 0x20)) = *pfVar9;
  (*(float *)(gen_frame + 0x24)) = pfVar9[1];
  ((float *)(gen_frame + 0x28))[0] = pfVar9[2];
  (*(float *)(gen_frame + 0x10)) = *pfVar9;
  (*(float *)(gen_frame + 0x14)) = pfVar9[1];
  ((float *)(gen_frame + 0x18))[0] = pfVar9[2];
  fVar1 = pfVar9[3];
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  ((float *)(gen_frame + 0x8))[0] = fVar1;
  pfVar8 = &(*(float *)(gen_frame + 0x20));
  fVar2 = (float)((float10)*pfVar9 - (float10)fVar1);
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)((float10)pfVar9[1] - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar4 = (float)((float10)pfVar9[2] - (float10)fVar1);
  ((float *)(gen_frame + 0x28))[0] = fVar4;
  fVar5 = (float)((float10)*pfVar9 + (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar1 + (float10)pfVar9[1]);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar1 = (float)((float10)fVar1 + (float10)pfVar9[2]);
  ((float *)(gen_frame + 0x18))[0] = fVar1;
  (*(float *)(gen_frame + 0x3c)) = *param_1;
  fVar11 = (float10)*param_1;
  if (!(fVar11 < (float10)fVar2)) {
    pfVar8 = param_1;
  }
  pfVar9 = param_1 + 1;
  (*(float *)(gen_frame + 0x3c)) = param_1[1];
  fVar12 = (float10)param_1[1];
  (*(float *)(gen_frame + 0x0)) = *pfVar8;
  if (fVar12 < (float10)fVar3) {
    pfVar9 = &(*(float *)(gen_frame + 0x24));
  }
  pfVar10 = param_1 + 2;
  (*(float *)(gen_frame + 0x3c)) = param_1[2];
  fVar13 = (float10)param_1[2];
  (*(float *)(gen_frame + 0x4)) = *pfVar9;
  if (fVar13 < (float10)fVar4) {
    pfVar10 = ((float *)(gen_frame + 0x28));
  }
  ((float *)(gen_frame + 0x8))[0] = *pfVar10;
  pfVar7 = &(*(float *)(gen_frame + 0x10));
  if (!((float10)fVar5 < (float10)*pfVar8)) {
    pfVar7 = &(*(float *)(gen_frame + 0x0));
  }
  (*(float *)(gen_frame + 0x20)) = *pfVar7;
  pfVar8 = &(*(float *)(gen_frame + 0x14));
  if (!((float10)fVar6 < (float10)*pfVar9)) {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  (*(float *)(gen_frame + 0x24)) = *pfVar8;
  pfVar9 = ((float *)(gen_frame + 0x18));
  if (!((float10)fVar1 < (float10)*pfVar10)) {
    pfVar9 = ((float *)(gen_frame + 0x8));
  }
  ((float *)(gen_frame + 0x28))[0] = *pfVar9;
  fVar1 = (float)((float10)*pfVar7 - fVar11);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)*pfVar8 - fVar12);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)*pfVar9 - fVar13);
  ((float *)(gen_frame + 0x8))[0] = fVar3;
  fVar11 = (float10)fVar2;
  fVar12 = (float10)fVar1;
  fVar13 = (float10)fVar3;
  fVar1 = ((float)GEN_TOF((fVar13 * fVar13 + (fVar12 * fVar12 + fVar11 * fVar11))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  return fVar1;
}

/* ref: FUN_00625080 */
uint F_00625080(unsigned int gen_a0)
{
  GEN_ENTER(0x625080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int * piVar4;
  int local_8;
  int * piVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe60));
  F_00621320(this);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11fc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  puVar2 = (undefined4 *)((int)this + 0x11fc);
  iVar3 = 2;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11d8);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11c0);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  puVar2 = (undefined4 *)((int)this + 0x11a8);
  iVar3 = 1;
  do {
    puVar2 = puVar2 + -3;
    iVar3 = iVar3 + -1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar3);
  local_8 = 1;
  piVar4 = (int *)((int)this + 0x1164);
  do {
    piVar5 = piVar4 + -3;
    piVar4 = piVar4 + -2;
    iVar3 = 2;
    do {
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar4 = 0;
      }
      piVar4 = piVar4 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    piVar4 = (int *)*piVar5;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
      *piVar5 = 0;
    }
    local_8 = local_8 + -1;
    piVar4 = piVar5;
  } while (-1 < local_8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return (uint)this;
}

/* ref: FUN_006251c0 */
uint F_006251c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6251c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf8)));
  if (pfVar7 == (float *)0x0) {
    pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xf0)));
  }
  uVar6 = *(ushort *)((int)this + 8);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 0xc) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_006252a0 */
uint F_006252a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6252a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar2 = ((*(int *)(param_1 + 0xc) * 4 ^ *(uint *)(iVar1 + 0x3c)) & 4 ^ *(uint *)(iVar1 + 0x3c)) &
          0x7fffffff;
  *(uint *)(iVar1 + 0x3c) = uVar2;
  return uVar2;
}

/* ref: FUN_00625340 */
uint F_00625340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x625340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  short sVar2;
  undefined4 in_EAX = 0;
  uint uVar3;
  float * pfVar4;
  
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),(undefined2)param_1);
  *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
  *(undefined2 *)((int)this + 10) = (undefined2)param_1;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    pfVar4 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
    uVar3 = 0;
    if (pfVar4 != (float *)0x0) {
      uVar1 = *(ushort *)((int)this + 8);
      sVar2 = *(short *)((int)this + 0xc);
      *pfVar4 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
      pfVar4[1] = 0.0;
      pfVar4[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
      pfVar4[3] = 0.0;
      uVar3 = *(uint *)((int)this + 0x14);
      *(undefined4 *)(uVar3 + 0x24) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_006253e0 */
uint F_006253e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6253e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  ushort uVar6;
  float * pfVar7;
  float10 fVar8;
  float10 fVar9;
  
  pfVar7 = *((float * PTR32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0xfc)));
  uVar6 = *(ushort *)((int)this + 8);
  fVar8 = (float10)(int)((int)*(short *)((int)this + 10) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar1 = pfVar7[1];
  fVar2 = pfVar7[2];
  fVar9 = (float10)(int)((int)*(short *)((int)this + 0xc) * (uint)uVar6 + (uint)(uVar6 >> 1));
  fVar3 = pfVar7[4];
  fVar4 = pfVar7[5];
  fVar5 = pfVar7[6];
  *param_1 = (float)(fVar8 + (float10)*pfVar7);
  param_1[1] = (float)((float10)fVar1 + (float10)0);
  param_1[2] = (float)(fVar9 + (float10)fVar2);
  param_1[4] = (float)((float10)fVar3 + fVar8);
  param_1[5] = (float)((float10)0 + (float10)fVar4);
  param_1[6] = (float)(fVar9 + (float10)fVar5);
  return (uint)param_1;
}

/* ref: FUN_00625530 */
unsigned int F_00625530(unsigned int gen_a0)
{
  GEN_ENTER(0x625530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint * puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  uint * local_c;
  
  uVar14 = REFG(float, 0x1087f04);
  fVar12 = (float10)*(double *)&REFG(undefined, 0x1094788);
  *(short *)this = *(short *)this + 1;
  fVar3 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  uVar9 = 0;
  fVar13 = REFG(float, 0x10ab17c);
  puVar8 = this;
  do {
    local_c = puVar8 + 1;
    uVar7 = *local_c;
    if (uVar7 != 0) {
      uVar10 = 0;
      uVar11 = 1;
      do {
        if ((uVar7 & uVar11) != 0) {
          iVar1 = uVar9 + uVar10;
          cVar6 = *(char *)((int)this + iVar1 * 0x18 + 0x26);
          iVar2 = iVar1 * 0x18;
          fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)this + iVar1 * 0x18 + 0x30) + (float10)fVar3)));
          if (cVar6 == '\0') {
            if ((GEN_ISNAN(fVar4) || GEN_ISNAN(REFG(float, 0x1088068))) || fVar4 < REFG(float, 0x1088068)) {
              fVar5 = (float)((float10)fVar4 * fVar12);
              *(float *)((int)this + iVar2 + 0x34) = fVar5;
              if ((float10)1 < (float10)fVar5) {
                *(undefined4 *)((int)this + iVar2 + 0x34) = uVar14;
              }
              fVar5 = ((float)GEN_TOF((((float10)REFG(double, 0x1088108) - (float10)fVar4) * fVar12)));
              *(float *)((int)this + iVar2 + 0x38) = fVar5;
              if (!((float10)1 < (float10)fVar5)) goto LAB_00625638;
              *(undefined4 *)((int)this + iVar2 + 0x38) = uVar14;
              *(float *)((int)this + iVar2 + 0x30) = fVar4;
            }
            else {
LAB_0062563f: ;
              ((code *)*(gen_code32 *)(&REFG(undefined, 0x13205e0) + (uint)*(byte *)((int)this + iVar2 + 0x25) * 4))
                        (*(undefined4 *)((int)this + iVar2 + 0x2c));
              fVar12 = (float10)*(double *)&REFG(undefined, 0x1094788);
              fVar13 = REFG(float, 0x10ab17c);
              uVar14 = REFG(float, 0x1087f04);
            }
          }
          else if (cVar6 == '\x01') {
            if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar13)) && !(fVar4 < fVar13)) goto LAB_0062563f;
            *(undefined4 *)((int)this + iVar2 + 0x38) = 0;
            *(float *)((int)this + iVar2 + 0x30) = fVar4;
            *(float *)((int)this + iVar2 + 0x34) = (float)((float10)fVar4 * fVar12);
          }
          else {
            if (cVar6 == '\x02') {
              if ((!GEN_ISNAN(fVar4) && !GEN_ISNAN(fVar13)) && !(fVar4 < fVar13)) goto LAB_0062563f;
              *(undefined4 *)((int)this + iVar2 + 0x38) = 0;
              *(float *)((int)this + iVar2 + 0x34) =
                   ((float)GEN_TOF((((float10)*(double *)&REFG(undefined, 0x1094878) - (float10)fVar4) * fVar12)));
            }
LAB_00625638: ;
            *(float *)((int)this + iVar2 + 0x30) = fVar4;
          }
        }
        uVar10 = uVar10 + 1;
        uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      } while (uVar10 < 0x20);
    }
    uVar9 = uVar9 + 0x20;
    puVar8 = local_c;
    if (0xff < uVar9) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_006256b0 */
byte F_006256b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6256b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  
  puVar1 = (uint *)((int)this + 0x6b10);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (uVar2 < *(uint *)((int)this + 0x6b0c)) {
    iVar5 = *(int *)((int)this + 0x6b08) + uVar2 * 0x14;
  }
  else {
    iVar5 = 0;
  }
  iVar3 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *(int *)(iVar3 + 0x1ac) = iVar5;
  if (iVar5 != 0) {
    puVar1 = (uint *)((int)this + 0xacb0);
    LOCK();
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if (uVar2 < *(uint *)((int)this + 0xacac)) {
      iVar5 = *(int *)((int)this + 0xaca8) + uVar2 * 0x14;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(iVar3 + 0x1b4) = iVar5;
    if (iVar5 != 0) {
      bVar4 = F_00624430((undefined *)((int)this + 0x10528));
      if (bVar4 != 0) {
        bVar4 = F_00623920(REFG(void * PTR32, 0x1487c60));
        return bVar4 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00625750 */
uint F_00625750(unsigned int gen_a0)
{
  GEN_ENTER(0x625750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * puVar1;
  undefined4 * this;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x30,0x10)));
  this = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    puVar1[8] = 0;
    puVar1[10] = 0;
    puVar1[1] = 1;
    *puVar1 = (*(undefined * PTR32 (*)[8])REFP(0x10abde0));
    *(undefined2 *)(puVar1 + 9) = 0x80;
    this = puVar1;
  }
  F_00623cd0(this,param_1);
  return (uint)this;
}

/* ref: FUN_006257b0 */
uint F_006257b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6257b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x18,0x10)));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[1] = 1;
    *piVar1 = (int)(*(undefined * PTR32 (*)[8])REFP(0x10abe78));
    *(undefined4 *)((int)piVar1 + 10) = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
  }
  uVar2 = F_004dcd60(0x40,2,0);
  piVar1[5] = uVar2;
  if (uVar2 == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    return 0;
  }
  piVar1[4] = param_1;
  F_00513f60(param_1,0,0);
  return (uint)piVar1;
}

/* ref: FUN_00625830 */
uint F_00625830(unsigned int gen_a0)
{
  GEN_ENTER(0x625830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x90,0x10)));
  uVar1 = REFG(float, 0x10abc60);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = (*(undefined * PTR32 (*)[8])REFP(0x10abc40));
    puVar2[1] = 1;
    *(undefined2 *)(puVar2 + 2) = 0;
    *(undefined2 *)((int)puVar2 + 10) = 0;
    puVar2[4] = param_1;
    puVar2[3] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[0xc] = uVar1;
    puVar2[0xd] = uVar1;
    puVar2[0xe] = uVar1;
    uVar1 = REFG(float, 0x10abc38);
    puVar2[0x10] = GEN_FLT_TO(puVar2[0x10], REFG(float, 0x10abc38));
    puVar2[0x11] = uVar1;
    puVar2[0x12] = uVar1;
    uVar1 = REFG(float, 0x1088068);
    puVar2[0x14] = GEN_FLT_TO(puVar2[0x14], REFG(float, 0x1088068));
    puVar2[0x15] = uVar1;
    uVar1 = REFG(float, 0x1087f04);
    puVar2[0x16] = 1;
    puVar2[0x18] = 0;
    puVar2[0x19] = 0;
    puVar2[0x1c] = uVar1;
    puVar2[0x1d] = GEN_FLT_TO(puVar2[0x1d], REFG(float, 0x10947a4));
    puVar2[0x1e] = GEN_FLT_TO(puVar2[0x1e], REFG(float, 0x1094880));
    puVar2[0x1f] = 0;
    puVar2[0x20] = 0;
    puVar2[0x21] = 0;
    return (uint)puVar2;
  }
  return 0;
}

/* ref: FUN_00625920 */
unsigned int F_00625920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x625920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (REFG(void * PTR32, 0x1487c64) != (undefined *)0x0) {
    F_00b803a0(REFG(void * PTR32, 0x1487c64));
  }
  return 0;
}

/* ref: FUN_00625940 */
byte F_00625940(void)
{
  GEN_ENTER(0x625940u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370c1c) + 6) = 0;
  *(undefined1 *)(REFG(int, 0x1370c1c) + 4) = 0;
  return 0;
}

/* ref: FUN_00625960 */
byte F_00625960(void)
{
  GEN_ENTER(0x625960u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370c1c) + 6) = 1;
  *(undefined1 *)(REFG(int, 0x1370c1c) + 4) = 1;
  return 1;
}

/* ref: FUN_00625980 */
uint F_00625980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x625980u, gen_a0, gen_a1, gen_a2, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  uint * in_edx = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  if (*param_3 < *in_eax) {
    in_eax = param_3;
  }
  if (*in_eax <= *in_edx) {
    in_eax = in_edx;
  }
  return (uint)in_eax;
}

/* ref: FUN_006259a0 */
byte F_006259a0(void)
{
  GEN_ENTER(0x6259a0u, 0u, 0u, 0u, 0u);
  undefined * this;
  byte bVar1;
  
  this = REFG(void * PTR32, 0x137128c);
  if (REFG(void * PTR32, 0x137128c) != (undefined *)0x0) {
    bVar1 = F_0067a800(REFG(void * PTR32, 0x137128c));
    if (bVar1 != 0) {
      F_0067d150(this);
    }
  }
  return 1;
}

/* ref: FUN_006259d0 */
byte F_006259d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6259d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *(char *)((int)this + 0x20);
  if (cVar1 == '\0') {
    uVar3 = REFG(undefined4, 0x1302378) & 0xfffffeff | 0x2c0;
  }
  else if (cVar1 == '\x01') {
    uVar3 = REFG(undefined4, 0x1302378) & 0xffffff7f | 0x340;
  }
  else {
    uVar3 = REFG(undefined4, 0x1302378) | 0x3c0;
    if (cVar1 != '\x02') {
      *(undefined1 *)((int)this + 0x20) = 2;
    }
  }
  cVar1 = *(char *)((int)this + 0x21);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar3 = uVar3 & 0xfcffffff | 0x4000000;
      goto LAB_00625a22;
    }
    if (cVar1 == '\x02') {
      uVar3 = uVar3 | 0x7000000;
      goto LAB_00625a22;
    }
    *(undefined1 *)((int)this + 0x21) = 0;
  }
  uVar3 = uVar3 & 0xfaffffff | 0x2000000;
LAB_00625a22: ;
  iVar2 = REFG(int, 0x1370b90);
  iVar5 = *(int *)(REFG(int, 0x1370b90) + 0x24);
  if (iVar5 != 0) {
    iVar4 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)(iVar2 + 4) + 0x5a8 + iVar4))) = uVar3 & 0x70003c0;
      iVar4 = iVar4 + 0x5b0;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 1;
}

/* ref: FUN_00625a70 */
byte F_00625a70(void)
{
  GEN_ENTER(0x625a70u, 0u, 0u, 0u, 0u);
  *(undefined1 *)(REFG(int, 0x1370b90) + 0x50) = 1;
  return 1;
}

/* ref: FUN_00625a80 */
unsigned int F_00625a80(unsigned int gen_a0)
{
  GEN_ENTER(0x625a80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(uint *)(REFG(int, 0x1371280) + 0x14) = (uint)*(byte *)((int)this + 0x26);
  iVar2 = REFG(int, 0x1371280);
  *(uint *)(REFG(int, 0x1371280) + 0x20) = (uint)*(byte *)((int)this + 0x27);
  *(undefined1 *)(iVar2 + 0x4d) = 1;
  iVar2 = REFG(int, 0x1371280);
  cVar1 = *(char *)((int)this + 0x28);
  uVar3 = 0;
  uVar4 = 0;
  if (cVar1 == '\0') {
    uVar3 = 0;
    uVar4 = 1;
  }
  else if (cVar1 == '\x01') {
    uVar3 = 1;
    uVar4 = 2;
  }
  else if (cVar1 == '\x02') {
    uVar3 = 3;
  }
  *(undefined4 *)(REFG(int, 0x1371280) + 0x24) = uVar3;
  *(undefined1 *)(iVar2 + 0x4d) = 1;
  *(undefined4 *)(REFG(int, 0x1371280) + 0x1c) = uVar4;
  return 0;
}

/* ref: FUN_00625af0 */
byte F_00625af0(unsigned int gen_a0)
{
  GEN_ENTER(0x625af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009d53c0(REFG(void * PTR32, 0x1487c90),(uint)(*(char *)((int)this + 0x29) == '\0'));
  F_00984440(REFG(undefined4, 0x1487c8c),(uint)(*(char *)((int)this + 0x2a) == '\0'));
  F_00984460(REFG(undefined4, 0x1487c8c),(uint)(*(char *)((int)this + 0x2b) == '\0'));
  return 1;
}

/* ref: FUN_00625b40 */
byte F_00625b40(unsigned int gen_a0)
{
  GEN_ENTER(0x625b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(REFG(int, 0x1487c58) + 0x8018) = *(undefined1 *)(in_ecx + 0x16);
  return 1;
}

/* ref: FUN_00625b60 */
byte F_00625b60(unsigned int gen_a0)
{
  GEN_ENTER(0x625b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(REFG(int, 0x137127c) + 0xebe1) = *(undefined1 *)(in_ecx + 0x1f);
  return 1;
}

/* ref: Client::Graphics::Render::Light::vf4 */
uint F_00625b80(unsigned int gen_a0)
{
  GEN_ENTER(0x625b80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x1371284);
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x1371284) + 0x14) == this) {
    *(undefined4 *)(REFG(undefined4, 0x1371284) + 0x14) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x84);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x84) = 0;
  }
  return uVar2;
}

/* ref: FUN_00625d30 */
byte F_00625d30(unsigned int gen_a0)
{
  GEN_ENTER(0x625d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
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
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = REFG(undefined4, 0x1375a88);
  *(undefined4 *)((int)this + 0x74) = REFG(undefined4, 0x1375a8c);
  *(undefined4 *)((int)this + 0x78) = REFG(undefined4, 0x1375a90);
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  uVar2 = F_004dcd60(0x50,2,9);
  *(uint *)((int)this + 0x80) = uVar2;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = REFG(float, 0x1088068);
  *(undefined1 *)((int)this + 0xa4) = 0;
  *(undefined * PTR32 *)((int)this + 0x88) = REFG(void * PTR32, 0x137fa00);
  REFG(void * PTR32, 0x137fa00) = this;
  return 1;
}

/* ref: FUN_00625e20 */
uint F_00625e20(float gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x625e20u, gen_trace_f(gen_a0), gen_a1, gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int * piVar6;
  float * pfVar7;
  float * PTR32 * ppfVar8;
  int iVar9;
  int iVar10;
  float * pfVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(float *)(gen_frame + 0x10)) = param_1;
  if (param_2 != *(int *)((int)gen_fl2bits(param_1) + 0x8c)) {
    fVar16 = param_3;
    if (*(int *)((int)gen_fl2bits(param_1) + 0x8c) == 0) {
      fVar16 = 0.0;
    }
    *(float *)((int)gen_fl2bits(param_1) + 0x90) = fVar16;
    *(undefined4 *)((int)gen_fl2bits(param_1) + 0x94) = 0;
    *(undefined4 *)((int)gen_fl2bits(param_1) + 0x98) = 0;
    *(int *)((int)gen_fl2bits(param_1) + 0x8c) = param_2;
  }
  iVar9 = REFG(int, 0x1371290);
  if (param_2 != 0) {
    pfVar7 = *(float * PTR32 *)(param_2 + 0x78);
    (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar7;
    (*(float * PTR32 *)(gen_frame + 0xc)) = *(float * PTR32 *)(param_2 + 0x7c);
    if (pfVar7 != (float *)0x0) {
      fVar16 = ((float)GEN_TOF((((float10)*(float *)((int)gen_fl2bits(param_1) + 0x98) +
                       (float10)*(float *)((int)gen_fl2bits(param_1) + 0x98)) -
                      (float10)REFG(double, 0x1088130))));
      F_004c3ac0((int)gen_fl2bits(param_1) + 0x90,*(float *)(REFG(int, 0x137104c) + 0x1198),1);
      fVar5 = (*(float *)(gen_frame + 0x10));
      pfVar11 = *(float * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x9c);
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar11;
      if (*(float *)&REFG(undefined, 0x1088114) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)))) {
        pfVar12 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar12;
        F_004bebc0(pfVar12,pfVar12,pfVar7 + 0x66,((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))));
        (*(float *)(gen_frame + 0x20)) = pfVar7[0x81];
        (*(float *)(gen_frame + 0x24)) = pfVar7[0x82];
        (*(float *)(gen_frame + 0x28)) = pfVar7[0x83];
        fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c)))));
        pfVar11 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - fVar13))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar11;
        fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)));
        fVar15 = ((float)GEN_TOF((fVar14 * (float10)*(float *)((int)gen_fl2bits(fVar5) + 0x70))));
        (*(float *)(gen_frame + 0x20)) = fVar15;
        fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(fVar5) + 0x74) * fVar14)));
        (*(float *)(gen_frame + 0x24)) = fVar2;
        fVar3 = ((float)GEN_TOF((fVar14 * (float10)*(float *)((int)gen_fl2bits(fVar5) + 0x78))));
        (*(float *)(gen_frame + 0x28)) = fVar3;
        fVar15 = ((float)GEN_TOF(((float10)fVar15 + (float10)(float)(fVar13 * (float10)pfVar7[0x81]))));
        fVar2 = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)((float10)pfVar7[0x82] * fVar13))));
        fVar3 = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)pfVar7[0x83] * fVar13))));
        (*(float *)(gen_frame + 0x24)) = fVar15;
        *(float *)((int)gen_fl2bits(fVar5) + 0x70) = fVar15;
        (*(float *)(gen_frame + 0x28)) = fVar2;
        (*(float *)(gen_frame + 0x2c)) = fVar3;
        *(float *)((int)gen_fl2bits(fVar5) + 0x74) = fVar2;
        *(float *)((int)gen_fl2bits(fVar5) + 0x78) = fVar3;
        fVar15 = F_00697300(*(undefined * PTR32 *)((int)gen_fl2bits(fVar5) + 0x8c));
        *(float *)((int)gen_fl2bits(fVar5) + 0x7c) =
             ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(fVar5) + 0x7c) *
                     (float10)(double)((float10)1 - fVar13) +
                    (float10)fVar15 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c))))))));
        pfVar11 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)*(float *)((int)gen_fl2bits(fVar5) + 0x98) +
                                   (float10)*(float *)((int)gen_fl2bits(fVar5) + 0x98)) -
                                  (float10)REFG(double, 0x1088130)))))));
        (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar11;
        if ((!GEN_ISNAN(fVar16) && !(0.0 <= fVar16)) && ((float10)0 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))))) {
          if ((*(float * PTR32 *)(gen_frame + 0xc)) != (float *)0x0) {
            ((code *)*(gen_code32 *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0xc))) + 8))((*(float * PTR32 *)(gen_frame + 0xc)));
          }
          piVar6 = *(int * PTR32 *)((int)gen_fl2bits(fVar5) + 0x84);
          if (piVar6 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
          }
          *(float * PTR32 *)((int)gen_fl2bits(fVar5) + 0x84) = (*(float * PTR32 *)(gen_frame + 0xc));
        }
        (*(float * PTR32 *)(gen_frame + 0x8)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c)))))))))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = (*(float * PTR32 *)(gen_frame + 0x8));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        pfVar7 = pfVar7 + 0x66;
        pfVar11 = (float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 4);
        for (iVar9 = 0x1b; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar11 = *pfVar7;
          pfVar7 = pfVar7 + 1;
          pfVar11 = pfVar11 + 1;
        }
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x70) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x81];
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x74) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x82];
        *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x78) = (*(float * PTR32 *)(gen_frame + 0x3c))[0x83];
        fVar16 = F_00697300(*(undefined * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x8c));
        pfVar7 = (*(float * PTR32 *)(gen_frame + 0xc));
        *(float *)((int)gen_fl2bits(fVar5) + 0x7c) = fVar16;
        if ((*(float * PTR32 *)(gen_frame + 0xc)) != (float *)0x0) {
          ((code *)*(gen_code32 *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0xc))) + 8))((*(float * PTR32 *)(gen_frame + 0xc)));
        }
        piVar6 = *(int * PTR32 *)((int)gen_fl2bits(fVar5) + 0x84);
        if (piVar6 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
        }
        pfVar11 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        *(float * PTR32 *)((int)gen_fl2bits(fVar5) + 0x84) = pfVar7;
        (*(float * PTR32 *)(gen_frame + 0x8)) = pfVar11;
        pfVar7 = (*(float * PTR32 *)(gen_frame + 0x3c));
      }
      (*(float *)(gen_frame + 0x14)) = gen_bits2f(*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
      fVar16 = *(float *)(REFG(int, 0x1371290) + 0x664);
      fVar15 = *(float *)(REFG(int, 0x1371290) + 0x668);
      (*(float *)(gen_frame + 0x10)) = fVar15;
      if ((!GEN_ISNAN(fVar15) && !GEN_ISNAN(REFG(float, 0x10947f8))) && !(fVar15 <= REFG(float, 0x10947f8))) {
        fVar13 = (float10)fVar15;
        pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)pfVar7[0x42] / (float10)*(float *)&REFG(undefined, 0x1097920) +
                                 (float10)*(double *)&REFG(undefined, 0x108bec8)))));
        (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar7;
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((fVar13 / ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7))) * ((float10)1 - fVar13) + fVar13))));
      }
      pfVar7 = (float *)F_004d9920(*(undefined * PTR32 *)((int)gen_fl2bits(fVar5) + 0x80),0,
                                     *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)gen_fl2bits(fVar5) + 0x80) + 0xc))),2);
      fVar15 = 0.0;
      if (pfVar7 != (float *)0x0) {
        F_00660ae0((*(float * PTR32 *)(gen_frame + 0x18)),((float *)(gen_frame + 0x40)));
        (*(float * PTR32 *)(gen_frame + 0xc)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
        (*(float * PTR32 *)(gen_frame + 0x1c)) = ((float *)(gen_frame + 0x40));
        (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)0x3;
        do {
          F_004eebf0((*(float * PTR32 *)(gen_frame + 0x1c)),(uint)gen_fl2bits((*(float *)(gen_frame + 0x14))));
          ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0xc));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[1]))))));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)*(*(float * PTR32 *)(gen_frame + 0x1c))))))));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[2]))))));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[3]))))));
          pfVar11 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[1]))) +
                                      (float10)((float)GEN_TOF(ABS((float10)*(*(float * PTR32 *)(gen_frame + 0x1c)))))) +
                                     (float10)((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[2])))) +
                                    (float10)((float)GEN_TOF(ABS((float10)(*(float * PTR32 *)(gen_frame + 0x1c))[3])))))))));
          (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar11;
          if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc))))))) {
            ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0x3c));
          }
          pfVar11 = *ppfVar8;
          pfVar12 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x18)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar12;
          (*(float * PTR32 *)(gen_frame + 0xc)) = pfVar11;
          (*(float * PTR32 *)(gen_frame + 0x1c)) = (*(float * PTR32 *)(gen_frame + 0x1c)) + 4;
        } while (pfVar12 != (float *)0x0);
        fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)));
        fVar15 = (float)((float10)((float *)(gen_frame + 0x40))[0] / fVar13);
        ((float *)(gen_frame + 0x40))[0] = fVar15;
        fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[1] / fVar13);
        ((float *)(gen_frame + 0x40))[1] = fVar2;
        fVar3 = (float)((float10)((float *)(gen_frame + 0x40))[2] / fVar13);
        ((float *)(gen_frame + 0x40))[2] = fVar3;
        fVar4 = (float)((float10)((float *)(gen_frame + 0x40))[3] / fVar13);
        ((float *)(gen_frame + 0x40))[3] = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar15;
        (*(float *)(gen_frame + 0x24)) = fVar2;
        *pfVar7 = fVar15;
        (*(float *)(gen_frame + 0x28)) = fVar3;
        pfVar7[1] = fVar2;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar7[2] = fVar3;
        pfVar7[3] = fVar4;
        fVar15 = (float)((float10)((float *)(gen_frame + 0x40))[4] / fVar13);
        ((float *)(gen_frame + 0x40))[4] = fVar15;
        fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[5] / fVar13);
        ((float *)(gen_frame + 0x40))[5] = fVar2;
        fVar3 = (float)((float10)((float *)(gen_frame + 0x40))[6] / fVar13);
        ((float *)(gen_frame + 0x40))[6] = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x5c)) / fVar13);
        (*(float *)(gen_frame + 0x5c)) = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar15;
        (*(float *)(gen_frame + 0x24)) = fVar2;
        pfVar7[4] = fVar15;
        (*(float *)(gen_frame + 0x28)) = fVar3;
        pfVar7[5] = fVar2;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar7[6] = fVar3;
        pfVar7[7] = fVar4;
        fVar15 = (float)((float10)(*(float *)(gen_frame + 0x60)) / fVar13);
        (*(float *)(gen_frame + 0x60)) = fVar15;
        fVar2 = (float)((float10)(*(float *)(gen_frame + 0x64)) / fVar13);
        (*(float *)(gen_frame + 0x64)) = fVar2;
        fVar3 = (float)((float10)(*(float *)(gen_frame + 0x68)) / fVar13);
        (*(float *)(gen_frame + 0x68)) = fVar3;
        fVar4 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / fVar13);
        (*(float *)(gen_frame + 0x6c)) = fVar4;
        (*(float *)(gen_frame + 0x20)) = fVar15;
        (*(float *)(gen_frame + 0x24)) = fVar2;
        pfVar7[8] = fVar15;
        (*(float *)(gen_frame + 0x28)) = fVar3;
        (*(float *)(gen_frame + 0x2c)) = fVar4;
        pfVar7[9] = fVar2;
        pfVar7[10] = fVar3;
        pfVar7[0xb] = fVar4;
        pfVar7[0xc] = *(float *)((int)gen_fl2bits(fVar5) + 0x70);
        fVar15 = *(float *)((int)gen_fl2bits(fVar5) + 0x74);
        pfVar7[0xd] = fVar15;
        fVar2 = *(float *)((int)gen_fl2bits(fVar5) + 0x78);
        pfVar7[0x10] = ((float)GEN_TOF(((float10)fVar16 * ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x8))))) * (float10)(*(float *)(gen_frame + 0x10))))));
        pfVar7[0xe] = fVar2;
        pfVar7[0xf] = 0.0;
        pfVar7[0x12] = 0.0;
        pfVar7[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar11)));
        pfVar7[0x11] = ((float)GEN_TOF(((float10)fVar16 *
                              (((float10)1 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x8)))))) * (float10)REFG(double, 0x1088108) +
                              ((float10)1 - (float10)(*(float *)(gen_frame + 0x10)))))));
        *((undefined4 *)GEN_TOP((*(int *)((int)gen_fl2bits(fVar5) + 0x80) + 0x24))) = 0;
      }
      goto LAB_006265f1;
    }
  }
  fVar15 = gen_bits2f(REFG(int, 0x1371290) + 0x550);
  pfVar7 = (float *)((int)gen_fl2bits(param_1) + 4);
  pfVar11 = (float *)(REFG(int, 0x1371290) + 0x5f0);
  pfVar12 = pfVar7;
  for (iVar10 = 0x1b; pfVar1 = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04))), iVar10 != 0; iVar10 = iVar10 + -1) {
    *pfVar12 = *pfVar11;
    pfVar11 = pfVar11 + 1;
    pfVar12 = pfVar12 + 1;
  }
  (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar7;
  fVar13 = (float10)0;
  *(float *)((int)gen_fl2bits(param_1) + 0x70) =
       (float)((float10)*pfVar7 / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar13);
  *(float *)((int)gen_fl2bits(param_1) + 0x74) =
       ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(param_1) + 0x28) /
               (float10)*(float *)&REFG(undefined, 0x1097920) + fVar13)));
  *(float *)((int)gen_fl2bits(param_1) + 0x78) =
       ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits(param_1) + 0x4c) /
               (float10)*(float *)&REFG(undefined, 0x1097920) + fVar13)));
  *(float * PTR32 *)((int)gen_fl2bits(param_1) + 0x7c) = pfVar1;
  iVar10 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  pfVar7 = (float *)F_004d9920(*(undefined * PTR32 *)((int)gen_fl2bits(param_1) + 0x80),0,0,2);
  if (pfVar7 == (float *)0x0) {
    fVar15 = 0.0;
  }
  else {
    F_00660ae0((*(float * PTR32 *)(gen_frame + 0x18)),((float *)(gen_frame + 0x40)));
    (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    pfVar11 = ((float *)(gen_frame + 0x40));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)0x3;
    do {
      F_004eebf0(pfVar11,iVar10 + 0x10);
      ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0x18));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar11[1])));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)*pfVar11)));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar11[2])));
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(ABS((float10)pfVar11[3])));
      pfVar12 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)pfVar11[1]))) +
                                  (float10)((float)GEN_TOF(ABS((float10)*pfVar11)))) +
                                 (float10)((float)GEN_TOF(ABS((float10)pfVar11[2])))) +
                                (float10)((float)GEN_TOF(ABS((float10)pfVar11[3])))))))));
      (*(float * PTR32 *)(gen_frame + 0x3c)) = pfVar12;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x18))))))) {
        ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0x3c));
      }
      pfVar12 = *ppfVar8;
      pfVar11 = pfVar11 + 4;
      pfVar1 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x1c)) + -1);
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar1;
      (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar12;
    } while (pfVar1 != (float *)0x0);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
    fVar16 = (float)((float10)((float *)(gen_frame + 0x40))[0] / fVar13);
    ((float *)(gen_frame + 0x40))[0] = fVar16;
    fVar5 = (float)((float10)((float *)(gen_frame + 0x40))[1] / fVar13);
    ((float *)(gen_frame + 0x40))[1] = fVar5;
    fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[2] / fVar13);
    ((float *)(gen_frame + 0x40))[2] = fVar2;
    fVar3 = (float)((float10)((float *)(gen_frame + 0x40))[3] / fVar13);
    ((float *)(gen_frame + 0x40))[3] = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar16;
    (*(float *)(gen_frame + 0x24)) = fVar5;
    *pfVar7 = fVar16;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    pfVar7[1] = fVar5;
    (*(float *)(gen_frame + 0x2c)) = fVar3;
    pfVar7[2] = fVar2;
    pfVar7[3] = fVar3;
    fVar16 = (float)((float10)((float *)(gen_frame + 0x40))[4] / fVar13);
    ((float *)(gen_frame + 0x40))[4] = fVar16;
    fVar5 = (float)((float10)((float *)(gen_frame + 0x40))[5] / fVar13);
    ((float *)(gen_frame + 0x40))[5] = fVar5;
    fVar2 = (float)((float10)((float *)(gen_frame + 0x40))[6] / fVar13);
    ((float *)(gen_frame + 0x40))[6] = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x5c)) / fVar13);
    (*(float *)(gen_frame + 0x5c)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar16;
    (*(float *)(gen_frame + 0x24)) = fVar5;
    pfVar7[4] = fVar16;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    pfVar7[5] = fVar5;
    (*(float *)(gen_frame + 0x2c)) = fVar3;
    pfVar7[6] = fVar2;
    pfVar7[7] = fVar3;
    fVar16 = (float)((float10)(*(float *)(gen_frame + 0x60)) / fVar13);
    (*(float *)(gen_frame + 0x60)) = fVar16;
    fVar5 = (float)((float10)(*(float *)(gen_frame + 0x64)) / fVar13);
    (*(float *)(gen_frame + 0x64)) = fVar5;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x68)) / fVar13);
    (*(float *)(gen_frame + 0x68)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x6c)) / fVar13);
    (*(float *)(gen_frame + 0x6c)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar16;
    (*(float *)(gen_frame + 0x24)) = fVar5;
    pfVar7[8] = fVar16;
    (*(float *)(gen_frame + 0x28)) = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar3;
    pfVar7[9] = fVar5;
    pfVar7[10] = fVar2;
    pfVar7[0xb] = fVar3;
    (*(float *)(gen_frame + 0x24)) = *(float *)(iVar9 + 0x5d0);
    fVar16 = *(float *)(iVar9 + 0x5d4);
    (*(float *)(gen_frame + 0x28)) = fVar16;
    fVar5 = *(float *)(iVar9 + 0x5d8);
    pfVar7[0xc] = *(float *)(iVar9 + 0x5d0);
    pfVar7[0xd] = fVar16;
    (*(float *)(gen_frame + 0x2c)) = fVar5;
    pfVar7[0xe] = fVar5;
    pfVar7[0xf] = 0.0;
    pfVar7[0x10] = *(float *)(iVar9 + 0x664);
    pfVar7[0x11] = 0.0;
    pfVar7[0x12] = 0.0;
    pfVar7[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar12)));
    *((undefined4 *)GEN_TOP((*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x80) + 0x24))) = 0;
  }
  fVar16 = (*(float *)(gen_frame + 0x10));
  piVar6 = *(int * PTR32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x10))) + 0x84);
  if (piVar6 != (int *)0x0) {
    fVar15 = gen_bits2f(((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6));
    *(undefined4 *)((int)gen_fl2bits(fVar16) + 0x84) = 0;
  }
LAB_006265f1: ;
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)gen_fl2bits(fVar15);
}

/* ref: FUN_00626610 */
uint F_00626610(unsigned int gen_a0)
{
  GEN_ENTER(0x626610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  float * pfVar7;
  float * PTR32 * ppfVar8;
  float * PTR32 * ppfVar9;
  float * pfVar10;
  uint uVar11;
  int * piVar12;
  float10 fVar13;
  float10 fVar14;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(REFG(int, 0x1371290) + 0x550);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10);
  pfVar7 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x84),0,
                                 *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 0x84) + 0xc))),2);
  if (pfVar7 != (float *)0x0) {
    if ((REFG(undefined4, 0x1487cb0) & 1) == 0) {
      REFG(undefined4, 0x1487cb0) = REFG(undefined4, 0x1487cb0) | 1;
      *(undefined4 *)&REFG(undefined, 0x1487ca0) = REFG(float, 0x10abf58);
      *(undefined4 *)&REFG(undefined, 0x1487ca4) = REFG(float, 0x10abf58);
      *(undefined4 *)&REFG(undefined, 0x1487ca8) = REFG(float, 0x10abf58);
    }
    if ((REFG(undefined4, 0x1487cb0) & 2) == 0) {
      REFG(undefined4, 0x1487cb0) = REFG(undefined4, 0x1487cb0) | 2;
      REFG(float, 0x1487c94) = REFG(float, 0x10a0da0);
      REFG(float, 0x1487c98) = REFG(float, 0x10a0da0);
      REFG(float, 0x1487c9c) = REFG(float, 0x10a0da0);
    }
    fVar13 = (float10)*(float *)&REFG(undefined, 0x1321e88);
    ((float *)(gen_frame + 0x40))[0] = 0.0;
    ((float *)(gen_frame + 0x40))[9] = 0.0;
    ((float *)(gen_frame + 0x40))[0x12] = 0.0;
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(float *)(gen_frame + 0x3c)) = (float)((float10)1 - fVar13);
    ((float *)(gen_frame + 0x40))[3] = 0.0;
    fVar14 = (float10)(float)((float10)1 - fVar13);
    ((float *)(gen_frame + 0x40))[4] = 0.0;
    ((float *)(gen_frame + 0x40))[5] = 0.0;
    ((float *)(gen_frame + 0x40))[6] = 0.0;
    ((float *)(gen_frame + 0x40))[7] = 0.0;
    ((float *)(gen_frame + 0x40))[8] = 0.0;
    ((float *)(gen_frame + 0x40))[10] = 0.0;
    ((float *)(gen_frame + 0x40))[0xb] = 0.0;
    fVar1 = (float)((float10)REFG(float, 0x1487c94) * fVar14);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    ((float *)(gen_frame + 0x40))[0xc] = 0.0;
    ((float *)(gen_frame + 0x40))[0xd] = 0.0;
    ((float *)(gen_frame + 0x40))[0xe] = 0.0;
    ((float *)(gen_frame + 0x40))[0xf] = 0.0;
    ((float *)(gen_frame + 0x40))[0x10] = 0.0;
    ((float *)(gen_frame + 0x40))[0x11] = 0.0;
    ((float *)(gen_frame + 0x40))[0x13] = 0.0;
    fVar2 = (float)((float10)REFG(float, 0x1487c98) * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    ((float *)(gen_frame + 0x40))[0x14] = 0.0;
    ((float *)(gen_frame + 0x40))[0x15] = 0.0;
    ((float *)(gen_frame + 0x40))[0x16] = 0.0;
    ((float *)(gen_frame + 0x40))[0x17] = 0.0;
    ((float *)(gen_frame + 0x40))[0x18] = 0.0;
    ((float *)(gen_frame + 0x40))[0x19] = 0.0;
    fVar3 = (float)((float10)REFG(float, 0x1487c9c) * fVar14);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    ((float *)(gen_frame + 0x40))[0x1a] = 0.0;
    fVar14 = (float10)*(float *)&REFG(undefined, 0x1097920);
    ((float *)(gen_frame + 0x40))[0] = (float)((float10)0.0 + fVar14 * (float10)fVar1);
    ((float *)(gen_frame + 0x40))[9] = (float)((float10)fVar2 * fVar14 + (float10)0.0);
    ((float *)(gen_frame + 0x40))[0x12] = (float)(fVar14 * (float10)fVar3 + (float10)0.0);
    fVar1 = (float)(fVar13 * (float10)REFG(float, 0x1487c94));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = (float)((float10)REFG(float, 0x1487c98) * fVar13);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)REFG(float, 0x1487c9c) * fVar13);
    F_004be890(((float *)(gen_frame + 0x40)),fVar1,0x1487ca0,(float)(float10)1);
    F_004be890(((float *)(gen_frame + 0x40)) + 9,(*(float *)(gen_frame + 0x24)),0x1487ca0,(float)(float10)1);
    F_004be890(((float *)(gen_frame + 0x40)) + 0x12,(*(float *)(gen_frame + 0x28)),0x1487ca0,(float)(float10)1);
    F_00660ae0(((float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0xb0)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb0)))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
    fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    fVar3 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb8)))));
    (*(float *)(gen_frame + 0x3c)) = fVar3;
    fVar4 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xbc)))));
    (*(float *)(gen_frame + 0x3c)) = fVar4;
    pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)fVar4 + ((float10)fVar3 + ((float10)fVar2 + (float10)fVar1))
                              ))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)1)) {
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0x38));
    (*(float * PTR32 *)(gen_frame + 0x38)) = *ppfVar9;
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc4)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc0)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc8)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xcc)))));
    pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc4))))) +
                                (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc0)))))) +
                               (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xc8)))))) +
                              (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xcc)))))))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar9))))) {
      ppfVar8 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
    (*(float * PTR32 *)(gen_frame + 0x38)) = *ppfVar8;
    fVar1 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd0)))));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    fVar2 = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd4)))));
    (*(float *)(gen_frame + 0x3c)) = fVar2;
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd8)))));
    (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xdc)))));
    pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xdc))))) +
                              ((float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xd8))))) +
                              ((float10)fVar2 + (float10)fVar1))))))));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar8))))) {
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
    }
    pfVar10 = *ppfVar9;
    (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) / fVar13);
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb4)) / fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb8)) / fVar13);
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xbc)) / fVar13);
    (*(float *)(gen_frame + 0xbc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    *pfVar7 = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar7[1] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[2] = fVar3;
    pfVar7[3] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc0)) / fVar13);
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xc4)) / fVar13);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xc8)) / fVar13);
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xcc)) / fVar13);
    (*(float *)(gen_frame + 0xcc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar7[4] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar7[5] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[6] = fVar3;
    pfVar7[7] = fVar4;
    fVar5 = REFG(float, 0x1321e84);
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xd0)) / fVar13);
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xd4)) / fVar13);
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xd8)) / fVar13);
    (*(float *)(gen_frame + 0xd8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xdc)) / fVar13);
    (*(float *)(gen_frame + 0xdc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[8] = fVar1;
    pfVar7[9] = fVar2;
    pfVar7[10] = fVar3;
    pfVar7[0xb] = fVar4;
    pfVar7[0xc] = GEN_FLT_TO(pfVar7[0xc], REFG(float, 0x1487c94));
    pfVar7[0xd] = GEN_FLT_TO(pfVar7[0xd], REFG(float, 0x1487c98));
    fVar1 = REFG(float, 0x1487c9c);
    pfVar7[0xf] = 0.0;
    pfVar7[0x10] = 0.0;
    pfVar7[0x12] = 0.0;
    pfVar7[0xe] = fVar1;
    pfVar7[0x11] = fVar5;
    pfVar7[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + 0x24))) = 0;
  }
  pfVar7 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 300),0,
                                 *((undefined4 *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 300) + 0xc))),2);
  if (pfVar7 != (float *)0x0) {
    F_00660ae0((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0xa0,&(*(float *)(gen_frame + 0xb0)));
    (*(float * PTR32 *)(gen_frame + 0x1c)) = (float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    (*(float * PTR32 *)(gen_frame + 0x38)) = &(*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0x3c)) = 4.2039e-45;
    do {
      F_004eebf0((*(float * PTR32 *)(gen_frame + 0x38)),(uint)gen_fl2bits((*(float *)(gen_frame + 0x18))));
      pfVar6 = (*(float * PTR32 *)(gen_frame + 0x38));
      pfVar10 = (*(float * PTR32 *)(gen_frame + 0x38)) + 1;
      ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x1c));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)*pfVar10))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)*pfVar6))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)pfVar6[2]))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(ABS((float10)pfVar6[3]))))));
      pfVar10 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((((float10)((float)GEN_TOF(ABS((float10)*pfVar10))) +
                                  (float10)((float)GEN_TOF(ABS((float10)*pfVar6)))) +
                                 (float10)((float)GEN_TOF(ABS((float10)pfVar6[2])))) +
                                (float10)((float)GEN_TOF(ABS((float10)pfVar6[3])))))))));
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar10;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x1c))))))) {
        ppfVar9 = &(*(float * PTR32 *)(gen_frame + 0x38));
      }
      pfVar10 = *ppfVar9;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + -1);
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      (*(float * PTR32 *)(gen_frame + 0x1c)) = pfVar10;
      (*(float * PTR32 *)(gen_frame + 0x38)) = pfVar6 + 4;
    } while (fVar1 != 0.0);
    fVar13 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb0)) / fVar13);
    (*(float *)(gen_frame + 0xb0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb4)) / fVar13);
    (*(float *)(gen_frame + 0xb4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb8)) / fVar13);
    (*(float *)(gen_frame + 0xb8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xbc)) / fVar13);
    (*(float *)(gen_frame + 0xbc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    *pfVar7 = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar7[1] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[2] = fVar3;
    pfVar7[3] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xc0)) / fVar13);
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xc4)) / fVar13);
    (*(float *)(gen_frame + 0xc4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xc8)) / fVar13);
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xcc)) / fVar13);
    (*(float *)(gen_frame + 0xcc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar7[4] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    pfVar7[5] = fVar2;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[6] = fVar3;
    pfVar7[7] = fVar4;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0xd0)) / fVar13);
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0xd4)) / fVar13);
    (*(float *)(gen_frame + 0xd4)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xd8)) / fVar13);
    (*(float *)(gen_frame + 0xd8)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xdc)) / fVar13);
    (*(float *)(gen_frame + 0xdc)) = fVar4;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    pfVar7[8] = fVar1;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    pfVar7[9] = fVar2;
    pfVar7[10] = fVar3;
    pfVar7[0xb] = fVar4;
    (*(float *)(gen_frame + 0x24)) = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x80);
    fVar1 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x84);
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar2 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x88);
    pfVar7[0xc] = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x80);
    pfVar7[0xd] = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar7[0xe] = fVar2;
    pfVar7[0xf] = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x110);
    pfVar7[0x10] = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x118) *
                          (float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x114))));
    fVar1 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x118);
    fVar2 = *(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x14))) + 0x114);
    pfVar7[0x12] = 0.0;
    pfVar7[0x13] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar10)));
    pfVar7[0x11] = ((float)GEN_TOF((((float10)1 - (float10)fVar1) * (float10)fVar2)));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 300) + 0x24))) = 0;
  }
  pfVar7 = (float *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x1d0),0,0,2);
  if (pfVar7 != (float *)0x0) {
    (*(float *)(gen_frame + 0x20)) = *(float *)((int)this + 0x154);
    (*(float *)(gen_frame + 0x24)) = gen_bits2f(*(undefined4 *)((int)this + 0x158));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f(*(undefined4 *)((int)this + 0x15c));
    pfVar10 = (float *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x18))));
    fVar1 = pfVar10[1];
    fVar2 = pfVar10[2];
    (*(float *)(gen_frame + 0x24)) = *pfVar10;
    *pfVar7 = *pfVar10;
    (*(float *)(gen_frame + 0x28)) = fVar1;
    pfVar7[1] = fVar1;
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    pfVar7[2] = fVar2;
    pfVar7[4] = *(float *)((int)this + 0x160);
    pfVar7[5] = *(float *)((int)this + 0x164);
    pfVar7[6] = *(float *)((int)this + 0x168);
    pfVar7[3] = *(float *)((int)this + 0x16c);
    pfVar7[7] = *(float *)((int)this + 0x170);
    fVar1 = *(float *)((int)this + 0x174);
    fVar2 = *(float *)((int)this + 0x178);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    (*(float *)(gen_frame + 0x14)) = fVar2;
    pfVar7[8] = fVar1;
    pfVar7[9] = fVar2;
    fVar1 = (float)((float10)1 - (float10)fVar1);
    (*(float *)(gen_frame + 0x18)) = fVar1;
    fVar2 = (float)((float10)1 - (float10)fVar2);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    pfVar7[10] = fVar1;
    pfVar7[0xb] = fVar2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1d0) + 0x24))) = 0;
  }
  piVar12 = *(int * PTR32 *)((int)this + 0x1f0);
  uVar11 = 0;
  if ((*(int *)(REFG(int, 0x1371290) + 4) != 0) &&
     (uVar11 = *((uint *)GEN_TOP((*(int *)(REFG(int, 0x1371290) + 4) + 0x100))), uVar11 != 0)) {
    piVar12 = *(int * PTR32 *)(uVar11 + 0x7c);
  }
  if (piVar12 != (int *)0x0) {
    uVar11 = ((code *)*(gen_code32 *)(*piVar12 + 8))();
  }
  if (*(int * PTR32 *)((int)this + 0x130) != (int *)0x0) {
    uVar11 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0xc))))();
  }
  *(int * PTR32 *)((int)this + 0x130) = piVar12;
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar11;
}

/* ref: FUN_00626f6a */
uint F_00626f6a(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x626f6au, gen_a0, gen_a1, gen_a2, (unsigned int)gen_trace_d(gen_a3));
  undefined4 in_ebx = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  float10 in_st0 = (float10)gen_a3;
  uint in_ebp = (uint)gen_a4;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  undefined4 uStack00000004;
  
  *(float *)(in_esi + 0x2c) = (float)in_st0;
  *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x1d0) + 0x24))) = 0;
  piVar4 = *(int * PTR32 *)(in_edi + 0x1f0);
  uVar3 = 0;
  if ((*(int *)(REFG(int, 0x1371290) + 4) != 0) &&
     (uVar3 = *((uint *)GEN_TOP((*(int *)(REFG(int, 0x1371290) + 4) + 0x100))), uVar3 != 0)) {
    piVar4 = *(int * PTR32 *)(uVar3 + 0x7c);
  }
  if (piVar4 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  }
  piVar1 = *(int * PTR32 *)(in_edi + 0x130);
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  uVar2 = *(uint *)(in_ebp - 4);
  *(int * PTR32 *)(in_edi + 0x130) = piVar4;
  uStack00000004 = 0x626fca;
  F_00c47745(uVar2 ^ in_ebp);
  return uVar3;
}

/* ref: FUN_00626fe0 */
unsigned int F_00626fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x626fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + 0x180)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x184);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + 0x1a4)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x1a8);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) !=
             *(int *)((int)this + 0x1c8)) {
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x1cc);
    }
  }
  return 0;
}

/* ref: FUN_006270a0 */
uint F_006270a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6270a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x84);
  iVar3 = *(int *)((int)this + 0x1f0);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x80) != 0) {
      iVar4 = *(int *)(param_1 + 0x80);
    }
    if (*(int *)(param_1 + 0x84) != 0) {
      iVar3 = *(int *)(param_1 + 0x84);
    }
  }
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((int *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0xa8 + *(int *)((int)this + 0x1d4) * 4))) = iVar4;
  *((int *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)((int)this + 0x1e0) * 8))) = iVar3;
  *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)((int)this + 0x1e0) * 8))) =
       *(uint *)((int)this + 0x1e8) & 0xfffffff;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)((int)this + 0x1e4) * 8))) =
       *(undefined4 *)(REFG(int, 0x137128c) + 0x1498);
  uVar2 = *(uint *)(iVar1 + 0x1a8);
  *((uint *)GEN_TOP((uVar2 + 0x2ac + *(int *)((int)this + 0x1e4) * 8))) =
       *(uint *)((int)this + 0x1ec) & 0xfffffff;
  return uVar2;
}

/* ref: FUN_00627170 */
unsigned int F_00627170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x627170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_8;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = 2;
  }
  local_8 = (uint)(param_1 != 0);
  if ((*(int *)(param_2 + 4) != 0) && (*(int *)(param_2 + 8) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 4) + 0x58)));
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + 0x70))) + uVar3 * 4))) ==
            *(int *)((int)this + iVar2 * 0xc + 0x180)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + uVar3 * 4))) =
               *(undefined4 *)((int)this + iVar2 * 0xc + 0x184);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 4) + 0x58)));
    uVar3 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + 0x70))) + uVar3 * 4))) ==
            *(int *)((int)this + local_8 * 0xc + 0x1a4)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + uVar3 * 4))) =
               *(undefined4 *)((int)this + local_8 * 0xc + 0x1a8);
          break;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_2 + 4) + 0x58)));
    uVar3 = 0;
    if (uVar1 != 0) {
      while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 4) + 0x70))) + uVar3 * 4))) !=
             *(int *)((int)this + 0x1c8)) {
        uVar3 = uVar3 + 1;
        if (uVar1 <= uVar3) {
          return 0;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + uVar3 * 4))) = *(undefined4 *)((int)this + 0x1cc);
    }
  }
  return 0;
}

/* ref: FUN_00627260 */
uint F_00627260(unsigned int gen_a0)
{
  GEN_ENTER(0x627260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0xa8 + *(int *)((int)this + 0x1d4) * 4))) =
       *(undefined4 *)((int)this + 300);
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0xa8 + *(int *)((int)this + 0x1dc) * 4))) =
       *(undefined4 *)((int)this + 0x1d0);
  iVar3 = *(int *)((int)this + 0x130);
  if (iVar3 == 0) {
    iVar3 = *(int *)((int)this + 0x1f0);
  }
  *((int *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)((int)this + 0x1e0) * 8))) = iVar3;
  *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)((int)this + 0x1e0) * 8))) =
       *(uint *)((int)this + 0x1e8) & 0xfffffff;
  *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)((int)this + 0x1e4) * 8))) =
       *(undefined4 *)(REFG(int, 0x137128c) + 0x1498);
  uVar2 = *(uint *)(iVar1 + 0x1a8);
  *((uint *)GEN_TOP((uVar2 + 0x2ac + *(int *)((int)this + 0x1e4) * 8))) =
       *(uint *)((int)this + 0x1ec) & 0xfffffff;
  return uVar2;
}

/* ref: FUN_00627330 */
unsigned int F_00627330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x627330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 4) != 0) && (*(int *)(param_1 + 8) != 0)) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + param_2 * 0xc + 0x180)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) =
               *(undefined4 *)((int)this + param_2 * 0xc + 0x184);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      do {
        if (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) ==
            *(int *)((int)this + param_3 * 0xc + 0x1a4)) {
          *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) =
               *(undefined4 *)((int)this + param_3 * 0xc + 0x1a8);
          break;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 4) + 0x58)));
    uVar2 = 0;
    if (uVar1 != 0) {
      while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0x70))) + uVar2 * 4))) !=
             *(int *)((int)this + 0x1c8)) {
        uVar2 = uVar2 + 1;
        if (uVar1 <= uVar2) {
          return 0;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + uVar2 * 4))) = *(undefined4 *)((int)this + 0x1cc);
    }
  }
  return 0;
}

/* ref: FUN_00627410 */
uint F_00627410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x627410u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int param_7 = (int)gen_a6;
  int iVar1;
  int iVar2;
  short * psVar3;
  uint uVar4;
  undefined * pvVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ushort * puVar10;
  int * piVar11;
  int * piVar12;
  int iVar13;
  ushort * puVar14;
  undefined4 uVar15;
  int local_10;
  undefined4 * local_8;
  
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0xa4) + 0x98)));
  local_10 = *(int *)(iVar1 + 0x50);
  uVar9 = *(uint *)(iVar1 + 0x5c);
  iVar2 = *(int *)(iVar1 + 0x44);
  iVar13 = 0;
  if (local_10 != 0) {
    psVar3 = ((short *)GEN_TOP((*(int *)(iVar1 + 0x68) + 10)));
    iVar7 = local_10;
    do {
      if (*psVar3 == 2) {
        iVar13 = iVar13 + 1;
      }
      psVar3 = psVar3 + 6;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_8 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),(uVar9 + iVar13 * 3) * 4 + 0x20,0x10)));
  uVar8 = 0;
  if (local_8 == (undefined4 *)0x0) {
    local_8 = (undefined4 *)0x0;
  }
  else {
    *(undefined2 *)(local_8 + 7) = 0;
    local_8[1] = 1;
    *local_8 = (*(undefined * PTR32 (*)[4])REFP(0x10abc68));
    local_8[5] = 0;
    local_8[6] = 0;
  }
  local_8[2] = param_1;
  local_8[4] = local_8 + 8;
  local_8[6] = local_8 + 8 + uVar9;
  *(short *)(local_8 + 7) = (short)iVar13;
  local_8[3] = *param_3;
  if (uVar9 != 0) {
    do {
      uVar15 = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x80) + uVar8 * 4)));
      uVar4 = 0;
      if (*(ushort *)(param_2 + 2) != 0) {
        do {
          if (*((int *)GEN_TOP((*(int *)(iVar1 + 0x74) + uVar8 * 4))) == *(int *)(param_4 + uVar4 * 8)) {
            uVar15 = *(undefined4 *)(param_4 + 4 + uVar4 * 8);
            break;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(ushort *)(param_2 + 2));
      }
      *(undefined4 *)(local_8[4] + uVar8 * 4) = uVar15;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  if (iVar2 == 0) {
    pvVar5 = (undefined *)0x0;
  }
  else {
    pvVar5 = (undefined *)F_004dcd60(*(undefined4 *)(iVar1 + 0x44),4,0);
  }
  local_8[5] = pvVar5;
  if ((pvVar5 != (undefined *)0x0) &&
     (pvVar5 = (undefined *)F_004d9920(pvVar5,0,*(undefined4 *)((int)pvVar5 + 0xc),2),
     pvVar5 != (undefined *)0x0)) {
    F_00c48350(pvVar5,0,*(gen_size32 *)(local_8[5] + 0xc));
    param_3 = (undefined4 *)0x0;
    if (*(short *)(param_2 + 4) != 0) {
      puVar14 = (ushort *)(param_5 + 6);
      do {
        uVar9 = 0;
        if (*(uint *)(iVar1 + 0x48) != 0) {
          piVar6 = *(int * PTR32 *)(iVar1 + 0x60);
          do {
            if (*piVar6 == *(int *)(puVar14 + -3)) {
              puVar10 = (ushort *)((int)piVar6 + 6);
              if (*puVar14 <= *(ushort *)((int)piVar6 + 6)) {
                puVar10 = puVar14;
              }
              F_00c46aa0((uint)*(ushort *)(piVar6 + 1) + (int)pvVar5,(uint)puVar14[-1] + param_7,
                         (uint)*puVar10);
              break;
            }
            uVar9 = uVar9 + 1;
            piVar6 = piVar6 + 2;
          } while (uVar9 < *(uint *)(iVar1 + 0x48));
        }
        param_3 = (undefined4 *)((int)param_3 + 1);
        puVar14 = puVar14 + 4;
      } while (param_3 < (uint)*(ushort *)(param_2 + 4));
    }
    *(undefined4 *)(local_8[5] + 0x24) = 0;
  }
  piVar6 = (int *)local_8[6];
  if (local_10 != 0) {
    param_3 = (undefined4 *)0x0;
    do {
      piVar11 = ((int *)GEN_TOP((*(int *)(iVar1 + 0x68) + (int)param_3)));
      if (*(short *)((int)piVar11 + 10) == 2) {
        *piVar6 = piVar11[1];
        uVar9 = 0;
        piVar6[1] = 0;
        if (*(ushort *)(param_2 + 6) != 0) {
          piVar12 = param_6;
          do {
            if ((*piVar12 == *piVar11) && ((char)piVar12[2] != -1)) {
              uVar8 = F_00513f60(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xa8) +
                                    (uint)*(byte *)(param_6 + uVar9 * 3 + 2) * 8))),0,0);
              piVar6[1] = uVar8;
              piVar6[2] = param_6[uVar9 * 3 + 1] & 0xffffdffU | 0x1c0;
              break;
            }
            uVar9 = uVar9 + 1;
            piVar12 = piVar12 + 3;
          } while (uVar9 < *(ushort *)(param_2 + 6));
        }
        piVar6 = piVar6 + 3;
      }
      param_3 = (undefined4 *)((int)param_3 + 0xc);
      local_10 = local_10 + -1;
    } while (local_10 != 0);
  }
  return (uint)local_8;
}

/* ref: FUN_006276c0 */
uint F_006276c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6276c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),param_1);
  uVar3 = (uint)*(ushort *)((int)this + 0x1c);
  uVar2 = 0;
  if (uVar3 != 0) {
    iVar5 = 0;
    if (uVar3 == 0) {
      uVar4 = 0xffffffff;
      goto LAB_006276f7;
    }
    do {
      uVar4 = *((uint *)GEN_TOP((iVar5 + *(int *)((int)this + 0x18))));
LAB_006276f7: ;
      if (uVar4 == uVar1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar5 = iVar5 + 0xc;
    } while (uVar2 < uVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00627710 */
uint F_00627710(unsigned int gen_a0)
{
  GEN_ENTER(0x627710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  undefined4 * puVar5;
  int iVar6;
  uint local_8;
  
  iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xa4)));
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 0x98);
  }
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),
                      ((uint)*(ushort *)((int)this + 0x1c) * 3 + *(int *)(iVar6 + 0x5c)) * 4 + 0x20,
                      0x10)));
  if (puVar5 == (undefined4 *)0x0) {
    return 0;
  }
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[1] = 1;
  *puVar5 = (*(undefined * PTR32 (*)[4])REFP(0x10abc68));
  *(undefined2 *)(puVar5 + 7) = 0;
  puVar5[2] = *(undefined4 *)((int)this + 8);
  *(undefined2 *)(puVar5 + 7) = *(undefined2 *)((int)this + 0x1c);
  puVar1 = puVar5 + 8;
  puVar5[4] = puVar1;
  puVar5[6] = puVar1 + *(int *)(iVar6 + 0x5c);
  puVar5[3] = *(undefined4 *)((int)this + 0xc);
  F_00c46aa0(puVar1,*(undefined4 *)((int)this + 0x10),*(int *)(iVar6 + 0x5c) * 4)
  ;
  piVar2 = *(int * PTR32 *)((int)this + 0x14);
  iVar6 = 0;
  puVar5[5] = piVar2;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
  }
  local_8 = 0;
  if (*(short *)((int)this + 0x1c) != 0) {
    do {
      iVar3 = *(int *)((int)this + 0x18);
      iVar4 = puVar5[6];
      *(undefined4 *)(iVar4 + iVar6) = *(undefined4 *)(iVar3 + iVar6);
      *(undefined4 *)(iVar4 + 4 + iVar6) = *(undefined4 *)(iVar3 + 4 + iVar6);
      *(uint *)(iVar4 + 8 + iVar6) = *(uint *)(iVar3 + 8 + iVar6) & 0xfffffff;
      iVar3 = *(int *)(iVar6 + 4 + puVar5[6]);
      if (iVar3 != 0) {
        F_00513f60(iVar3,0,0);
      }
      local_8 = local_8 + 1;
      iVar6 = iVar6 + 0xc;
    } while (local_8 < *(ushort *)((int)this + 0x1c));
  }
  return (uint)puVar5;
}

/* ref: FUN_00627830 */
uint F_00627830(unsigned int gen_a0)
{
  GEN_ENTER(0x627830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar1 = this;
  if (REFG(void * PTR32, 0x1487c88) != (undefined *)0x0) {
    *(undefined * PTR32 *)((int)this + 8) = REFG(void * PTR32, 0x1487c88);
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1487c88) + 0xc))) = this;
    pvVar1 = *(undefined * PTR32 *)&REFG(undefined, 0x1487c84);
  }
  *(undefined * PTR32 *)&REFG(undefined, 0x1487c84) = pvVar1;
  REFG(void * PTR32, 0x1487c88) = this;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10abf60));
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x20;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_006278c0 */
byte F_006278c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6278c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x88);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 == 2) {
      piVar1 = (int *)(param_1 + 0x8c);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar2 < 8) {
        F_00513f60(param_1,0,0);
        *(undefined4 *)((int)this + 0x24) = param_2;
        *(int *)((int)this + 0x18) = param_1;
        *(undefined4 *)((int)this + 0x28) = param_3;
        F_00621e20(this);
        if (*(char *)(param_1 + 0x12a) == '\0') {
          uVar3 = F_00406bb0((uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0xc +
                                      *(int *)(param_1 + 0xa8)))) * 4,0,0);
          *(uint *)((int)this + 0x44) = uVar3;
        }
        *(undefined4 *)((int)this + 0x50) = 0xffffffff;
        *(undefined4 *)((int)this + 0x54) = 0xffffffff;
        iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
        F_00667240((undefined *)((int)this + 0x58),1,
                     (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x10 + iVar2))));
        *(undefined4 *)((int)this + 0x60) = 0;
        *(undefined4 *)((int)this + 100) = 0;
        *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 8;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_006279a0 */
unsigned int F_006279a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6279a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (0 < param_2) {
    piVar3 = param_1 + 0x1a;
    iVar2 = param_2;
    do {
      piVar3[3] = 0;
      if (piVar3[2] != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                  (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),piVar3[2]);
        piVar3[2] = 0;
      }
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 < 0) {
    if (param_1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*param_1)(param_1,1);
      return 0;
    }
  }
  else if (param_1 != (undefined4 *)0x0) {
    if (param_1[-4] != 0) {
      ((code *)*(gen_code32 *)*param_1)(param_1,3);
      return 0;
    }
    F_00406b30(param_1 + -4);
  }
  return 0;
}

/* ref: FUN_00627a40 */
byte F_00627a40(unsigned int gen_a0)
{
  GEN_ENTER(0x627a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)((int)this + 0x18);
  if ((iVar1 != 0) && (this_00 = *(undefined * PTR32 *)((int)this + 0x20), this_00 != (undefined *)0x0)) {
    uVar2 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar1 + 0xa8) + 4))) + 0x14 + *(int *)(iVar1 + 0xa8))));
    uVar3 = F_00406bb0(uVar2 * 2,0,0);
    if (uVar3 != 0) {
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar4 = F_00623160(this_00,*(int *)(iVar1 + 0xa8) + 8 +
                                       *((int *)GEN_TOP((*(int *)(iVar1 + 0xd4) + (uVar5 & 0xffff) * 4))));
          *(short *)(uVar3 + uVar5 * 2) = (short)uVar4;
          if ((short)uVar4 == -1) {
            *(undefined2 *)(uVar3 + uVar5 * 2) = 0;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      *(uint *)((int)this + 0x68) = uVar3;
      *(uint *)((int)this + 0x6c) = uVar2;
      return 1;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00627b00 */
unsigned int F_00627b00(unsigned int gen_a0)
{
  GEN_ENTER(0x627b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint * local_8;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffff9;
  if (*(int *)((int)this + 0x60) != *(int *)((int)this + 100)) {
    *(int *)((int)this + 100) = *(int *)((int)this + 0x60);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 8;
  }
  if (*(int *)((int)this + 0x50) != *(int *)((int)this + 0x54)) {
    *(int *)((int)this + 0x54) = *(int *)((int)this + 0x50);
    *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 8;
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
    uVar6 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x10 + iVar2)));
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 200)));
    uVar3 = *(int *)((int)this + 0x5c) + 0x1fU >> 5;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x58) + uVar4 * 4))) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    uVar4 = *(uint *)((int)this + 0x50);
    uVar5 = 0;
    uVar3 = 1;
    if (uVar6 != 0) {
      local_8 = (uint *)(iVar2 + 8);
      do {
        if ((*local_8 & uVar4) == *local_8) {
          puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x58) + (uVar5 >> 5) * 4)));
          *puVar1 = ~uVar3 & *puVar1 | uVar3;
        }
        local_8 = local_8 + 4;
        uVar5 = uVar5 + 1;
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
      } while (uVar5 < uVar6);
    }
  }
  return 0;
}

/* ref: FUN_00627bc0 */
unsigned int F_00627bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x627bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort * puVar1;
  ushort * puVar2;
  int iVar3;
  undefined * pvVar4;
  int * piVar5;
  int iVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined * pvVar9;
  uint * puVar10;
  sbyte sVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int * piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xffffffdf;
  iVar3 = *(int *)((int)this + 0x18);
  uVar20 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0xa8) + 4))) + 0x1e + *(int *)(iVar3 + 0xa8))));
  uVar7 = *(int *)((int)this + 0x5c) + 0x1fU >> 5;
  uVar12 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  if (uVar7 != 0) {
    piVar15 = *(int * PTR32 *)((int)this + 0x58);
    do {
      if (*piVar15 != -1) goto LAB_00627d1b;
      uVar12 = uVar12 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar12 < uVar7);
  }
  if (*(int *)((int)this + 0x60) == 0) {
    if (uVar20 != 0) {
      (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)((int)this + 0x38);
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)(iVar3 + 0x118);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)uVar20;
      do {
        pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
        pvVar8 = (undefined *)F_004dccf0(*(undefined4 *)((int)pvVar4 + 0x18),1,4,0);
        if (pvVar8 == (undefined *)0x0) {
          *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) | 0x20;
        }
        else {
          piVar15 = (int *)*(*(int * PTR32 *)(gen_frame + 0x40));
          if (piVar15 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar15 + 0xc))(piVar15);
            *(*(int * PTR32 *)(gen_frame + 0x40)) = 0;
          }
          pvVar9 = (undefined *)F_004d6a30(pvVar8,0,0,2);
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar9;
          uVar7 = F_004d6a30(pvVar4,0,0,1);
          F_00c46aa0((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar7,*(undefined4 *)((int)pvVar4 + 0x18));
          F_004d6ae0(pvVar4);
          F_004d6ae0(pvVar8);
          *(*(int * PTR32 *)(gen_frame + 0x40)) = (int)pvVar8;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x40)) = (*(int * PTR32 *)(gen_frame + 0x40)) + 1;
        uVar7 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x18)) - 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)uVar7;
        this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      } while (uVar7 != 0);
    }
    uVar12 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0xa8) + 4))) + 0xc + *(int *)(iVar3 + 0xa8))));
    uVar7 = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)uVar12;
    if (uVar12 != 0) {
      do {
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + uVar7 * 4))) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0xbc) + 4 + (uVar7 & 0xffff) * 0x24)));
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar12);
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffff7;
      *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x10;
      return 0;
    }
  }
  else {
LAB_00627d1b: ;
    (*(uint *)(gen_frame + 0x1c)) = 0;
    if (uVar20 != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)0xa;
      (*(int * PTR32 *)(gen_frame + 0x30)) = (int *)((int)this + 0x38);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)(iVar3 + 0x118);
      do {
        pvVar4 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x18));
        pvVar8 = (undefined *)F_004dccf0(*(undefined4 *)((int)pvVar4 + 0x18),1,4,0);
        piVar15 = (*(int * PTR32 *)(gen_frame + 0x30));
        (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar8;
        if (pvVar8 == (undefined *)0x0) {
          *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x20;
        }
        else {
          piVar5 = (int *)*(*(int * PTR32 *)(gen_frame + 0x30));
          if (piVar5 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
            *piVar15 = 0;
          }
          (*(char *)(gen_frame + 0x4b)) = '\x01';
          uVar7 = F_004d6a30((*(undefined * PTR32 *)(gen_frame + 0x8)),0,0,2);
          (*(uint *)(gen_frame + 0x4)) = uVar7;
          uVar7 = F_004d6a30(pvVar4,0,0,1);
          iVar6 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
          (*(uint *)(gen_frame + 0x44)) = F_00667cd0(*(undefined * PTR32 *)(iVar6 + 0x1a8),*(undefined4 *)((int)pvVar4 + 0x18));
          if ((*(uint *)(gen_frame + 0x44)) == 0) {
            (*(uint *)(gen_frame + 0x44)) = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                                (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(undefined4 *)((int)pvVar4 + 0x18),
                                 0x10);
            (*(char *)(gen_frame + 0x4b)) = '\0';
          }
          F_00c46aa0((*(uint *)(gen_frame + 0x44)),uVar7,*(undefined4 *)((int)pvVar4 + 0x18));
          F_004d6ae0(pvVar4);
          puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar3 + 0xb8) + ((*(uint *)(gen_frame + 0x1c)) & 0xff) * 0x3c)));
          (*(ushort * PTR32 *)(gen_frame + 0x20)) = puVar1;
          uVar7 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0xa8) + 4))) + 0x18 + *(int *)(iVar3 + 0xa8))));
          (*(uint *)(gen_frame + 0x10)) = uVar7;
          (*(uint *)(gen_frame + 0x28)) = 0;
          if (uVar7 != 0) {
            do {
              if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x60) >> ((byte)(*(uint *)(gen_frame + 0x28)) & 0x1f) & 1) != 0) {
                iVar21 = ((*(uint *)(gen_frame + 0x28)) & 0xffff) * 0x10 + *(int *)(iVar3 + 0xdc);
                (*(uint *)(gen_frame + 0xc)) = iVar21;
                (*(uint *)(gen_frame + 0x24)) = 0;
                if (*(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + iVar21) != 0) {
                  do {
                    piVar15 = ((int *)GEN_TOP((*(int *)(iVar3 + 0xe0) +
                                     (uint)(ushort)(*(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + -6 + iVar21) +
                                                   (short)(*(uint *)(gen_frame + 0x24))) * 0xc)));
                    uVar12 = 0;
                    if (piVar15[1] != 0) {
                      do {
                        puVar2 = ((ushort *)GEN_TOP((*(int *)(iVar3 + 0xe4) +
                                 (uint)(ushort)((short)piVar15[2] + (short)uVar12) * 4)));
                        uVar12 = uVar12 + 1;
                        *((ushort *)GEN_TOP(((*(uint *)(gen_frame + 0x44)) + ((uint)*puVar2 + *piVar15) * 2))) = puVar2[1];
                      } while (uVar12 < (uint)piVar15[1]);
                    }
                    uVar12 = (*(uint *)(gen_frame + 0x24)) + 1;
                    (*(uint *)(gen_frame + 0x24)) = uVar12;
                  } while (uVar12 < *(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + iVar21));
                }
              }
              uVar12 = (*(uint *)(gen_frame + 0x28)) + 1;
              (*(uint *)(gen_frame + 0x28)) = uVar12;
            } while (uVar12 < uVar7);
          }
          uVar7 = (uint)puVar1[1];
          (*(uint *)(gen_frame + 0xc)) = 0;
          if (uVar7 != 0) {
            do {
              iVar21 = *(int *)(iVar3 + 0xbc) + (uint)(ushort)(*(*(ushort * PTR32 *)(gen_frame + 0x20)) + (short)(*(uint *)(gen_frame + 0xc))) * 0x24;
              uVar12 = (uint)*(ushort *)(iVar21 + 10);
              (*(uint *)(gen_frame + 0x34)) = (uint)*(ushort *)(iVar21 + 0xc);
              (*(int * PTR32 *)(gen_frame + 0x40)) = ((int *)GEN_TOP(((*(uint *)(gen_frame + 0x4)) + *(int *)(iVar21 + 0x10) * 2)));
              (*(uint *)(gen_frame + 0x10)) = uVar12;
              (*(int *)(gen_frame + 0x38)) = 0;
              (*(int *)(gen_frame + 0x14)) = *(int *)(iVar3 + 200);
              uVar14 = (*(uint *)(gen_frame + 0xc));
              if ((*(uint *)(gen_frame + 0x34)) != 0) {
                (*(uint *)(gen_frame + 0x0)) = 0x20;
                do {
                  puVar10 = &(*(uint *)(gen_frame + 0x34));
                  if (0x1f < (*(uint *)(gen_frame + 0x34))) {
                    puVar10 = &(*(uint *)(gen_frame + 0x0));
                  }
                  uVar14 = *puVar10;
                  puVar10 = ((uint *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x58) + (uVar12 >> 5) * 4)));
                  sVar11 = (sbyte)(uVar12 & 0x1f);
                  uVar16 = *puVar10 >> sVar11;
                  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
                  if (uVar14 < 0x20) {
                    (*(uint *)(gen_frame + 0x24)) = 1;
                    uVar17 = (1 << ((byte)uVar14 & 0x1f)) - 1;
                  }
                  else {
                    uVar17 = 0xffffffff;
                  }
                  if ((uVar12 & 0x1f) != 0) {
                    uVar16 = uVar16 + (puVar10[1] << (0x20U - sVar11 & 0x1f));
                  }
                  uVar16 = uVar16 & uVar17;
                  if (uVar16 == 0xffffffff) {
                    iVar21 = *(int *)((*(int *)(gen_frame + 0x14)) + uVar12 * 0x10);
                    iVar18 = (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + (uVar12 + 0x1f) * 0x10))) +
                             *(int *)((*(int *)(gen_frame + 0x14)) + 500 + uVar12 * 0x10)) - iVar21;
                    iVar13 = iVar18 * 2;
                    (*(uint *)(gen_frame + 0x10)) = uVar12;
                    F_00c46aa0((*(int * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)) + iVar21 * 2,iVar13);
                    (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + iVar13);
                    (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + iVar18;
                  }
                  else {
                    iVar21 = uVar12 * 0x10 + (*(int *)(gen_frame + 0x14));
                    while (uVar16 != 0) {
                      iVar13 = 0;
                      if (uVar16 != 0) {
                        for (; (uVar16 >> iVar13 & 1) == 0; iVar13 = iVar13 + 1) {
                        }
                      }
                      if (uVar16 == 0) {
                        iVar13 = 0x20;
                      }
                      uVar16 = uVar16 >> ((byte)iVar13 & 0x1f);
                      (*(uint *)(gen_frame + 0x28)) = 0x20;
                      (*(uint *)(gen_frame + 0x24)) = uVar16;
                      uVar16 = ~uVar16;
                      uVar17 = 0;
                      if (uVar16 != 0) {
                        for (; (uVar16 >> uVar17 & 1) == 0; uVar17 = uVar17 + 1) {
                        }
                      }
                      if (uVar16 != 0) {
                        (*(uint *)(gen_frame + 0x28)) = uVar17;
                      }
                      iVar22 = (*(uint *)(gen_frame + 0x28)) + iVar13;
                      iVar18 = iVar22 + -1;
                      iVar13 = *(int *)(iVar21 + iVar13 * 0x10);
                      iVar19 = (*(int *)(iVar21 + 4 + iVar18 * 0x10) - iVar13) +
                               *(int *)(iVar21 + iVar18 * 0x10);
                      iVar18 = iVar19 * 2;
                      (*(uint *)(gen_frame + 0x10)) = uVar12;
                      F_00c46aa0((*(int * PTR32 *)(gen_frame + 0x40)),(*(uint *)(gen_frame + 0x44)) + iVar13 * 2,iVar18);
                      (*(int * PTR32 *)(gen_frame + 0x40)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x40)) + iVar18);
                      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) + iVar19;
                      uVar16 = (*(uint *)(gen_frame + 0x24)) >> ((byte)(*(uint *)(gen_frame + 0x28)) & 0x1f);
                      iVar21 = iVar21 + iVar22 * 0x10;
                      (*(uint *)(gen_frame + 0x24)) = uVar16;
                      uVar12 = (*(uint *)(gen_frame + 0x10));
                    }
                  }
                  (*(uint *)(gen_frame + 0x34)) = (*(uint *)(gen_frame + 0x34)) - uVar14;
                  uVar12 = uVar12 + uVar14;
                  (*(uint *)(gen_frame + 0x10)) = uVar12;
                  uVar14 = (*(uint *)(gen_frame + 0xc));
                } while ((*(uint *)(gen_frame + 0x34)) != 0);
              }
              *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x44) + (*(*(ushort * PTR32 *)(gen_frame + 0x20)) + uVar14) * 4))) = (*(int *)(gen_frame + 0x38));
              (*(uint *)(gen_frame + 0xc)) = uVar14 + 1;
            } while (uVar14 + 1 < uVar7);
          }
          pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x8));
          F_004d6ae0((*(undefined * PTR32 *)(gen_frame + 0x8)));
          if ((*(char *)(gen_frame + 0x4b)) == '\0') {
            if ((*(uint *)(gen_frame + 0x44)) != 0) {
              ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),(*(uint *)(gen_frame + 0x44)));
            }
          }
          else {
            iVar6 = *(int *)(iVar6 + 0x1a8);
            if ((*(uint *)(gen_frame + 0x44)) != 0) {
              *(uint *)(iVar6 + 0x28) = (*(uint *)(gen_frame + 0x44)) - *(int *)(iVar6 + 0x24);
            }
          }
          *(*(int * PTR32 *)(gen_frame + 0x30)) = (int)pvVar4;
          this = (*(undefined * PTR32 *)(gen_frame + 0x3c));
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x2c)) + 2);
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)(gen_frame + 0x18)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x30)) = (*(int * PTR32 *)(gen_frame + 0x30)) + 1;
        uVar7 = (*(uint *)(gen_frame + 0x1c)) + 1;
        (*(uint *)(gen_frame + 0x1c)) = uVar7;
      } while (uVar7 < uVar20);
    }
  }
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) & 0xfffffff7;
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 0x10;
  return 0;
}

/* ref: Client::Graphics::Render::Camera::vf4 */
uint F_00628180(unsigned int gen_a0)
{
  GEN_ENTER(0x628180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pCVar5;
  undefined4 * puVar6;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined * PTR32 *)(gen_frame + 0xa0)) = this;
  ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  puVar3 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)(this + 0x120),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0xa8)) = this + 0x50;
    (*(undefined * PTR32 *)(gen_frame + 0xa4)) = this + 0x10;
    puVar3 = (undefined4 *)F_004f11a0(((undefined4 *)(gen_frame + 0x170)),(uint)(this + 0x10),(uint)(this + 0x50));
    puVar6 = ((undefined4 *)(gen_frame + 0xf0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0x170)),(*(undefined * PTR32 *)(gen_frame + 0xa4)));
    pCVar5 = (*(undefined * PTR32 *)(gen_frame + 0xa8));
    puVar6 = ((undefined4 *)(gen_frame + 0x50));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined4 *)F_004f4970(((undefined4 *)(gen_frame + 0x130)),pCVar5);
    puVar6 = ((undefined4 *)(gen_frame + 0x170));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    pCVar5 = (*(undefined * PTR32 *)(gen_frame + 0xa8));
    puVar3 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *(undefined4 *)pCVar5;
      pCVar5 = pCVar5 + 4;
      puVar3 = puVar3 + 1;
    }
    pCVar5 = *((undefined * PTR32 *)GEN_TOP((*(int *)((*(undefined * PTR32 *)(gen_frame + 0xa0)) + 0xa0) * 0x358 + 0x2a4 + REFG(int, 0x137127c))));
    if ((pCVar5 != (undefined *)0x0) && (pCVar5 != (*(undefined * PTR32 *)(gen_frame + 0xa0)))) {
      puVar3 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0x130)),pCVar5 + 0x10);
      puVar6 = ((undefined4 *)(gen_frame + 0x1b0));
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar3 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0xb0)),(uint)((undefined4 *)(gen_frame + 0x1b0)),(uint)((undefined4 *)(gen_frame + 0xf0)));
      puVar6 = ((undefined4 *)(gen_frame + 0x0));
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    ((undefined4 *)(gen_frame + 0x1c0))[0] = *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0xa4));
    ((undefined4 *)(gen_frame + 0x1c0))[1] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x10);
    ((undefined4 *)(gen_frame + 0x1c0))[2] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x20);
    ((undefined4 *)(gen_frame + 0x1c0))[3] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x30);
    (*(undefined4 *)(gen_frame + 0x1d0)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 4);
    (*(undefined4 *)(gen_frame + 0x1d4)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x14);
    (*(undefined4 *)(gen_frame + 0x1d8)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x24);
    (*(undefined4 *)(gen_frame + 0x1dc)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x34);
    (*(undefined4 *)(gen_frame + 0x1e0)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 8);
    (*(undefined4 *)(gen_frame + 0x1e4)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x18);
    (*(undefined4 *)(gen_frame + 0x1e8)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x28);
    (*(undefined4 *)(gen_frame + 0x1ec)) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa4)) + 0x38);
    puVar3 = ((undefined4 *)(gen_frame + 0x1c0));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac));
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    ((undefined4 *)(gen_frame + 0x1c0))[0] = ((undefined4 *)(gen_frame + 0x50))[0];
    ((undefined4 *)(gen_frame + 0x1c0))[1] = (*(undefined4 *)(gen_frame + 0x60));
    ((undefined4 *)(gen_frame + 0x1c0))[2] = (*(undefined4 *)(gen_frame + 0x70));
    ((undefined4 *)(gen_frame + 0x1c0))[3] = (*(undefined4 *)(gen_frame + 0x80));
    (*(undefined4 *)(gen_frame + 0x1d0)) = ((undefined4 *)(gen_frame + 0x50))[1];
    (*(undefined4 *)(gen_frame + 0x1d4)) = (*(undefined4 *)(gen_frame + 0x64));
    (*(undefined4 *)(gen_frame + 0x1d8)) = (*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 *)(gen_frame + 0x1dc)) = (*(undefined4 *)(gen_frame + 0x84));
    (*(undefined4 *)(gen_frame + 0x1e0)) = ((undefined4 *)(gen_frame + 0x50))[2];
    (*(undefined4 *)(gen_frame + 0x1e4)) = (*(undefined4 *)(gen_frame + 0x68));
    (*(undefined4 *)(gen_frame + 0x1e8)) = (*(undefined4 *)(gen_frame + 0x78));
    (*(undefined4 *)(gen_frame + 0x1ec)) = (*(undefined4 *)(gen_frame + 0x88));
    puVar3 = ((undefined4 *)(gen_frame + 0x1c0));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0xc;
    for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0065f550(((undefined4 *)(gen_frame + 0x1b0)),((undefined4 *)(gen_frame + 0xf0)));
    puVar3 = ((undefined4 *)(gen_frame + 0x1b0));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0x18;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar3 = (undefined4 *)F_004f4970(((undefined1 *)(gen_frame + 0xb0)),((undefined4 *)(gen_frame + 0xf0)));
    puVar6 = ((undefined4 *)(gen_frame + 0x1b0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0065f550(((undefined4 *)(gen_frame + 0x130)),((undefined4 *)(gen_frame + 0x1b0)));
    puVar3 = ((undefined4 *)(gen_frame + 0x130));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0x28;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0065f550(((undefined4 *)(gen_frame + 0x130)),((undefined4 *)(gen_frame + 0x170)));
    puVar3 = ((undefined4 *)(gen_frame + 0x130));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0x38;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0065f550(((undefined4 *)(gen_frame + 0x170)),(*(undefined * PTR32 *)(gen_frame + 0xa8)));
    puVar3 = ((undefined4 *)(gen_frame + 0x170));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0x48;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0065f550(((undefined4 *)(gen_frame + 0x170)),((undefined4 *)(gen_frame + 0x0)));
    pCVar5 = (*(undefined * PTR32 *)(gen_frame + 0xa0));
    puVar3 = ((undefined4 *)(gen_frame + 0x170));
    puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0xac)) + 0x58;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    (*(undefined4 *)(gen_frame + 0x90)) = (*(undefined4 *)(gen_frame + 0x70));
    (*(undefined4 *)(gen_frame + 0x94)) = (*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x68] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa0)) + 0x90);
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x69] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa0)) + 0x94);
    (*(undefined4 *)(gen_frame + 0x98)) = (*(undefined4 *)(gen_frame + 0x78));
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x6a] = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0xa0)) + 0x98);
    (*(undefined4 *)(gen_frame + 0x9c)) = 0;
    puVar3 = (undefined4 *)F_0065e920(((undefined1 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x90)));
    uVar1 = puVar3[1];
    uVar2 = puVar3[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x6c] = *puVar3;
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x6d] = uVar1;
    (*(undefined4 * PTR32 *)(gen_frame + 0xac))[0x6e] = uVar2;
    *((undefined4 *)GEN_TOP((*(int *)(pCVar5 + 0x120) + 0x24))) = 0;
    puVar3 = (*(undefined4 * PTR32 *)(gen_frame + 0xac));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xac)) = puVar3;
  F_00c47745((*(uint *)(gen_frame + 0x1fc)) ^ (uint)(uint)(gen_frame + 0x200));
  return (uint)puVar3;
}

/* ref: FUN_006285c0 */
byte F_006285c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6285c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  uVar2 = F_004dcd60(0x1c0,1,0);
  *(uint *)((int)this + 0x120) = uVar2;
  if (uVar2 != 0) {
    F_00621fc0(this,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
    uVar1 = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 0x10) = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 0x24) = uVar1;
    *(undefined4 *)((int)this + 0x38) = uVar1;
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    *(undefined4 *)((int)this + 0x34) = 0;
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
    *(undefined4 *)((int)this + 0x48) = 0;
    *(undefined4 *)((int)this + 0x50) = uVar1;
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x78) = uVar1;
    *(undefined4 *)((int)this + 0x8c) = uVar1;
    uVar1 = REFG(float, 0x1090708);
    *(undefined4 *)((int)this + 0x54) = 0;
    *(undefined4 *)((int)this + 0x58) = 0;
    *(undefined4 *)((int)this + 0x5c) = 0;
    *(undefined4 *)((int)this + 0x60) = 0;
    *(undefined4 *)((int)this + 0x68) = 0;
    *(undefined4 *)((int)this + 0x6c) = 0;
    *(undefined4 *)((int)this + 0x70) = 0;
    *(undefined4 *)((int)this + 0x74) = 0;
    *(undefined4 *)((int)this + 0x7c) = 0;
    *(undefined4 *)((int)this + 0x80) = 0;
    *(undefined4 *)((int)this + 0x84) = 0;
    *(undefined4 *)((int)this + 0x88) = 0;
    *(undefined4 *)((int)this + 0x90) = 0;
    *(undefined4 *)((int)this + 0x94) = 0;
    *(undefined4 *)((int)this + 0x98) = 0;
    *(undefined4 *)((int)this + 0x134) = uVar1;
    uVar1 = REFG(float, 0x1094724);
    *(undefined4 *)((int)this + 0x130) = 0;
    *(undefined4 *)((int)this + 0x138) = 0;
    *(undefined4 *)((int)this + 0x140) = 0;
    *(undefined4 *)((int)this + 0x144) = uVar1;
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)((int)this + 0x14c) = 0;
    return 1;
  }
  return 0;
}

/* ref: FUN_00628700 */
uint F_00628700(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x628700u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x260];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint * puVar7;
  undefined4 * puVar8;
  float * pfVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 * puVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float in_xmm3;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  (*(uint *)(gen_frame + 0x24c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x250);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(float *)(gen_frame + 0x7c)) = param_1;
  (*(uint *)(gen_frame + 0x20)) = REFG(uint, 0x1302c90) ^ (uint)gen_fl2bits(REFG(float, 0x10920d0));
  (*(uint *)(gen_frame + 0x24)) = REFG(uint, 0x1302c94) ^ (uint)gen_fl2bits(REFG(float, 0x10920d0));
  (*(uint *)(gen_frame + 0x28)) = REFG(uint, 0x1302c98) ^ (uint)gen_fl2bits(REFG(float, 0x10920d0));
  in_xmm3 = REFG(float, 0x10920d0);
  puVar7 = (uint *)F_004bdda0(((undefined1 *)(gen_frame + 0x10)),&(*(uint *)(gen_frame + 0x20)),(int)this + 0x130);
  (*(uint *)(gen_frame + 0x20)) = *puVar7;
  (*(uint *)(gen_frame + 0x24)) = puVar7[1];
  (*(uint *)(gen_frame + 0x28)) = puVar7[2];
  (*(uint *)(gen_frame + 0x2c)) = puVar7[3];
  puVar8 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x10)),&REFG(float, 0x1302c80),&(*(uint *)(gen_frame + 0x20)));
  (*(undefined4 *)(gen_frame + 0x0)) = *puVar8;
  (*(undefined4 *)(gen_frame + 0x4)) = puVar8[1];
  (*(undefined4 *)(gen_frame + 0x8)) = puVar8[2];
  F_004f4430(((undefined1 *)(gen_frame + 0x180)),&REFG(float, 0x1375ac0),(int)this + 0x130,&(*(undefined4 *)(gen_frame + 0x0)));
  pfVar9 = (float *)((int)this + 0x140);
  if (GEN_ISNAN(*pfVar9) || (0.0 < *pfVar9 || *pfVar9 == 0.0)) {
    (*(float *)(gen_frame + 0x1c0)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x1c4)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x1c8)) = 0.0;
    ((float *)(gen_frame + 0x1d0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x1d0))[0], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x1d0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x1d0))[1], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x1d0))[2] = 0.0;
    ((float *)(gen_frame + 0x1d0))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x1d0))[4], REFG(float, 0x1090708));
    ((float *)(gen_frame + 0x1d0))[5] = GEN_FLT_TO(((float *)(gen_frame + 0x1d0))[5], REFG(float, 0x1090708));
    (*(float *)(gen_frame + 0x1e8)) = 0.0;
    (*(float *)(gen_frame + 0x1f0)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x1f4)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x1f8)) = 0.0;
    (*(float *)(gen_frame + 0x200)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x204)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x208)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x210)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x214)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x218)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x220)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x228)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x230)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x234)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x238)) = REFG(float, 0x1087f04);
    puVar8 = (undefined4 *)
             F_004f11a0(((undefined1 *)(gen_frame + 0xc0)),(int)gen_fl2bits(param_1) + 0x10,
                          (int)gen_fl2bits(param_1) + 0x50);
    puVar13 = ((undefined4 *)(gen_frame + 0x100));
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar13 + 1;
    }
    puVar8 = (undefined4 *)F_004f4970(((undefined1 *)(gen_frame + 0x80)),((undefined4 *)(gen_frame + 0x100)));
    puVar13 = ((undefined4 *)(gen_frame + 0x140));
    for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar13 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar13 = puVar13 + 1;
    }
    pfVar9 = &(*(float *)(gen_frame + 0x1c0));
    iVar11 = 8;
    do {
      F_004eeb30(pfVar9,(uint)((undefined4 *)(gen_frame + 0x140)));
      fVar1 = (*(float *)(gen_frame + 0x7c));
      pfVar9 = pfVar9 + 4;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    pfVar9 = &(*(float *)(gen_frame + 0x7c));
    fVar2 = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x140) /
                   (float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x7c))) + 0xac))));
    (*(float *)(gen_frame + 0x7c)) = fVar2;
    if (!((float10)1 < (float10)fVar2)) {
      pfVar9 = &(*(float *)(gen_frame + 0x3c));
    }
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)gen_fl2bits(fVar1) + 0x90);
    (*(float *)(gen_frame + 0x7c)) = *pfVar9;
    fVar14 = (float10)*(float *)((int)gen_fl2bits(fVar1) + 0x90);
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x1c0)) - fVar14);
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)gen_fl2bits(fVar1) + 0x94);
    fVar15 = (float10)*(float *)((int)gen_fl2bits(fVar1) + 0x94);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x1c4)) - fVar15);
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)gen_fl2bits(fVar1) + 0x98);
    fVar16 = (float10)*(float *)((int)gen_fl2bits(fVar1) + 0x98);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x1c8)) - fVar16);
    fVar17 = (float10)*pfVar9;
    fVar2 = ((float)GEN_TOF((fVar17 * (float10)(float)((float10)(*(float *)(gen_frame + 0x1c0)) - fVar14))));
    (*(float *)(gen_frame + 0x50)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1c4)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1c8)) - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar4;
    fVar2 = (float)(fVar14 + (float10)fVar2);
    (*(float *)(gen_frame + 0x60)) = fVar2;
    fVar3 = (float)(fVar15 + (float10)fVar3);
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)(fVar16 + (float10)fVar4);
    (*(float *)(gen_frame + 0x68)) = fVar4;
    (*(float *)(gen_frame + 0x1c0)) = fVar2;
    (*(float *)(gen_frame + 0x1c4)) = fVar3;
    (*(float *)(gen_frame + 0x1c8)) = fVar4;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)((float *)(gen_frame + 0x1d0))[0] - fVar14);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)((float *)(gen_frame + 0x1d0))[1] - fVar15);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)((float *)(gen_frame + 0x1d0))[2] - fVar16);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x1d0))[0] - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x1d0))[1] - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x1d0))[2] - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar4;
    fVar2 = (float)(fVar14 + (float10)fVar2);
    (*(float *)(gen_frame + 0x60)) = fVar2;
    fVar3 = (float)(fVar15 + (float10)fVar3);
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)(fVar16 + (float10)fVar4);
    (*(float *)(gen_frame + 0x68)) = fVar4;
    ((float *)(gen_frame + 0x1d0))[0] = fVar2;
    (*(float *)(gen_frame + 0x3c)) = REFG(float, 0x1087f04);
    pfVar9 = &(*(float *)(gen_frame + 0x7c));
    ((float *)(gen_frame + 0x1d0))[1] = fVar3;
    ((float *)(gen_frame + 0x1d0))[2] = fVar4;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)((float *)(gen_frame + 0x1d0))[4] - fVar14);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)((float *)(gen_frame + 0x1d0))[5] - fVar15);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x1e8)) - fVar16);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x1d0))[4] - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)((float *)(gen_frame + 0x1d0))[5] - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1e8)) - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar4;
    fVar2 = (float)(fVar14 + (float10)fVar2);
    (*(float *)(gen_frame + 0x60)) = fVar2;
    fVar3 = (float)(fVar15 + (float10)fVar3);
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)(fVar16 + (float10)fVar4);
    (*(float *)(gen_frame + 0x68)) = fVar4;
    ((float *)(gen_frame + 0x1d0))[4] = fVar2;
    ((float *)(gen_frame + 0x1d0))[5] = fVar3;
    (*(float *)(gen_frame + 0x1e8)) = fVar4;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x1f0)) - fVar14);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x1f4)) - fVar15);
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x1f8)) - fVar16);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1f0)) - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x1f4)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar4 = ((float)GEN_TOF((fVar17 * (float10)(float)((float10)(*(float *)(gen_frame + 0x1f8)) - fVar16))));
    (*(float *)(gen_frame + 0x58)) = fVar4;
    fVar2 = (float)(fVar14 + (float10)fVar2);
    (*(float *)(gen_frame + 0x60)) = fVar2;
    fVar3 = (float)(fVar15 + (float10)fVar3);
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)(fVar16 + (float10)fVar4);
    (*(float *)(gen_frame + 0x68)) = fVar4;
    (*(float *)(gen_frame + 0x1f0)) = fVar2;
    (*(float *)(gen_frame + 0x1f4)) = fVar3;
    (*(float *)(gen_frame + 0x1f8)) = fVar4;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(undefined * PTR32 *)(gen_frame + 0x38)) + 0x144) /
                   (float10)*(float *)((int)gen_fl2bits(fVar1) + 0xb0))));
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    if (!((float10)fVar1 < (float10)1)) {
      pfVar9 = &(*(float *)(gen_frame + 0x3c));
    }
    (*(float *)(gen_frame + 0x7c)) = *pfVar9;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x200)) - fVar14);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x204)) - fVar15);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x208)) - fVar16);
    fVar17 = (float10)*pfVar9;
    fVar1 = ((float)GEN_TOF((fVar17 * (float10)(float)((float10)(*(float *)(gen_frame + 0x200)) - fVar14))));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x204)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x208)) - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar1 = (float)(fVar14 + (float10)fVar1);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = (float)(fVar15 + (float10)fVar2);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = (float)(fVar16 + (float10)fVar3);
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x200)) = fVar1;
    (*(float *)(gen_frame + 0x204)) = fVar2;
    (*(float *)(gen_frame + 0x208)) = fVar3;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x210)) - fVar14);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x214)) - fVar15);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x218)) - fVar16);
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x210)) - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x214)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x218)) - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar1 = (float)(fVar14 + (float10)fVar1);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = (float)(fVar15 + (float10)fVar2);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = (float)(fVar16 + (float10)fVar3);
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x210)) = fVar1;
    (*(float *)(gen_frame + 0x214)) = fVar2;
    (*(float *)(gen_frame + 0x218)) = fVar3;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x220)) - fVar14);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x224)) - fVar15);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x228)) - fVar16);
    pfVar9 = &(*(float *)(gen_frame + 0x1c0));
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x220)) - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x224)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x228)) - fVar16) * fVar17)));
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar1 = (float)(fVar14 + (float10)fVar1);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = (float)(fVar15 + (float10)fVar2);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = (float)(fVar16 + (float10)fVar3);
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x220)) = fVar1;
    (*(float *)(gen_frame + 0x224)) = fVar2;
    (*(float *)(gen_frame + 0x228)) = fVar3;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x230)) - fVar14);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x234)) - fVar15);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x238)) - fVar16);
    fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x230)) - fVar14) * fVar17)));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x234)) - fVar15) * fVar17)));
    (*(float *)(gen_frame + 0x54)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar17 * (float10)(float)((float10)(*(float *)(gen_frame + 0x238)) - fVar16))));
    (*(float *)(gen_frame + 0x58)) = fVar3;
    fVar1 = (float)((float10)fVar1 + fVar14);
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = (float)(fVar15 + (float10)fVar2);
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = (float)(fVar16 + (float10)fVar3);
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x230)) = fVar1;
    (*(float *)(gen_frame + 0x234)) = fVar2;
    (*(float *)(gen_frame + 0x238)) = fVar3;
    iVar11 = 8;
    do {
      iVar12 = iVar11;
      F_004eea10(pfVar9,(uint)((undefined1 *)(gen_frame + 0x180)));
      pfVar9 = pfVar9 + 4;
      iVar11 = iVar12 + -1;
    } while (iVar11 != 0);
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x1c4));
    (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x1c8));
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x1c0));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x1c4));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x1c8));
    pfVar9 = ((float *)(gen_frame + 0x1d0)) + 2;
    iVar12 = iVar12 + 6;
    do {
      fVar1 = pfVar9[-2];
      (*(float *)(gen_frame + 0x7c)) = fVar1;
      if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x60))) {
        (*(float *)(gen_frame + 0x60)) = fVar1;
      }
      fVar2 = pfVar9[-1];
      (*(float *)(gen_frame + 0x7c)) = fVar2;
      if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x64))) {
        (*(float *)(gen_frame + 0x64)) = fVar2;
      }
      fVar3 = *pfVar9;
      (*(float *)(gen_frame + 0x7c)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x68))) {
        (*(float *)(gen_frame + 0x68)) = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x50)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x50)) = fVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0x54)) < (float10)fVar2) {
        (*(float *)(gen_frame + 0x54)) = fVar2;
      }
      if ((float10)(*(float *)(gen_frame + 0x58)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x58)) = fVar3;
      }
      pfVar9 = pfVar9 + 4;
      iVar12 = iVar12 + -1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x38));
    } while (iVar12 != 0);
  }
  else {
    pfVar9 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x10)),(int)gen_fl2bits(param_1) + 0x90,((undefined1 *)(gen_frame + 0x180)));
    (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)((int)this + 0x144))));
    fVar14 = (float10)*(float *)((int)this + 0x144);
    (*(float *)(gen_frame + 0x50)) = *pfVar9;
    (*(float *)(gen_frame + 0x54)) = pfVar9[1];
    (*(float *)(gen_frame + 0x58)) = pfVar9[2];
    (*(float *)(gen_frame + 0x40)) = (float)(fVar14 * (float10)REFG(float, 0x1302c60));
    (*(float *)(gen_frame + 0x44)) = (float)(fVar14 * (float10)REFG(float, 0x1302c64));
    (*(float *)(gen_frame + 0x48)) = (float)(fVar14 * (float10)REFG(float, 0x1302c68));
    fVar15 = (float10)*pfVar9;
    fVar16 = (float10)(float)(fVar14 * (float10)REFG(float, 0x1302c60));
    (*(float *)(gen_frame + 0x60)) = (float)(fVar15 - fVar16);
    fVar17 = (float10)pfVar9[1];
    fVar18 = (float10)(float)(fVar14 * (float10)REFG(float, 0x1302c64));
    (*(float *)(gen_frame + 0x64)) = (float)(fVar17 - fVar18);
    fVar19 = (float10)pfVar9[2];
    fVar14 = (float10)(float)(fVar14 * (float10)REFG(float, 0x1302c68));
    (*(float *)(gen_frame + 0x68)) = (float)(fVar19 - fVar14);
    (*(float *)(gen_frame + 0x50)) = (float)(fVar16 + fVar15);
    (*(float *)(gen_frame + 0x54)) = (float)(fVar18 + fVar17);
    (*(float *)(gen_frame + 0x58)) = (float)(fVar14 + fVar19);
  }
  *(undefined *)((int)this + 0xb8) = (undefined1)0x1;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x50)) - (float10)(*(float *)(gen_frame + 0x60)));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x54)) - (float10)(*(float *)(gen_frame + 0x64)));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x58)) - (float10)(*(float *)(gen_frame + 0x68)));
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar14 = (float10)fVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((fVar14 * (float10)*(float *)((int)this + 0x148)))))));
  (*(float *)(gen_frame + 0x3c)) = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14c) * fVar14)));
  fVar15 = (float10)((float)GEN_TOF((fVar14 * (float10)*(float *)((int)this + 0x148))));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x14c) * fVar14))) +
                 (fVar15 + fVar14))));
  (*(float *)(gen_frame + 0x3c)) = fVar3;
  fVar14 = (float10)fVar3;
  fVar3 = (float)((float10)REFG(double, 0x1094800) * fVar14);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  *(float *)((int)this + 0xac) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x60)) + (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x60)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x64)) + (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0x64)) = fVar5;
  fVar4 = (float)((float10)fVar4 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x50)) = fVar4;
  fVar5 = (float)((float10)REFG(double, 0x1088108) * (float10)fVar5);
  (*(float *)(gen_frame + 0x54)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)fVar3 + (fVar15 + (float10)(*(float *)(gen_frame + 0x58))))));
  (*(float *)(gen_frame + 0x18)) = fVar6;
  fVar4 = ((float)GEN_TOF(-(float10)fVar4));
  (*(float *)(gen_frame + 0x60)) = fVar4;
  fVar5 = ((float)GEN_TOF(-(float10)fVar5));
  (*(float *)(gen_frame + 0x64)) = fVar5;
  fVar6 = ((float)GEN_TOF(-(float10)fVar6));
  (*(float *)(gen_frame + 0x68)) = fVar6;
  (*(float *)(gen_frame + 0x1b0)) = (float)((float10)(*(float *)(gen_frame + 0x1b0)) + (float10)fVar4);
  (*(float *)(gen_frame + 0x1b4)) = (float)((float10)(*(float *)(gen_frame + 0x1b4)) + (float10)fVar5);
  (*(float *)(gen_frame + 0x1b8)) = (float)((float10)(*(float *)(gen_frame + 0x1b8)) + (float10)fVar6);
  *(float *)((int)this + 0xa8) = (float)((float10)fVar1 / (float10)fVar2);
  *(float *)((int)this + 0xb0) = (float)((float10)fVar3 + fVar14);
  *(float *)((int)this + 0xb4) = fVar2;
  F_00621fc0(this,in_xmm3,in_XMM5_Da,in_XMM6_Da,((undefined1 *)(gen_frame + 0x180)));
  uVar10 = F_00628180(this);
  F_00c47745((*(uint *)(gen_frame + 0x24c)) ^ (uint)(uint)(gen_frame + 0x250));
  return uVar10;
}

/* ref: FUN_00629280 */
byte F_00629280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x629280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int * piVar2;
  uint uVar3;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  ((int *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = F_004dcd60(0x1c0,1,0);
  *(uint *)((int)this + 0x120) = uVar3;
  if (uVar3 != 0) {
    F_00621fc0(this,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
    ((int *)(gen_frame + 0x8))[0] = 0;
    ((int *)(gen_frame + 0x8))[1] = 1;
    ((int *)(gen_frame + 0x8))[2] = 2;
    ((int *)(gen_frame + 0x8))[3] = 3;
    iVar1 = ((int *)(gen_frame + 0x8))[(int)(param_2)];
    *(char *)((int)this + 0x1c0) = (char)param_1;
    *(short *)((int)this + 0x1c6) = (short)param_2;
    iVar1 = (char)param_1 * 0x358 + 0x1c + iVar1 * 0x34 + REFG(int, 0x137127c);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    piVar2 = *(int * PTR32 *)(iVar1 + 0x18);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    *(undefined * PTR32 *)(iVar1 + 0x18) = this;
    *(undefined1 *)((int)this + 0x1c4) = 0;
    F_00c47745(((int *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c));
    return 1;
  }
  F_00c47745(((int *)(gen_frame + 0x8))[4] ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00629360 */
uint F_00629360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0x629360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x370];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  undefined4 * puVar8;
  float * pfVar9;
  undefined4 * puVar10;
  undefined4 * puVar11;
  int iVar12;
  float * pfVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x35c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x360);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = param_3;
  (*(float * PTR32 *)(gen_frame + 0x6c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x44)) = param_4;
  (*(float * PTR32 *)(gen_frame + 0xac)) = param_5;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_7;
  pfVar7 = (float *)F_0065e920(&(*(float *)(gen_frame + 0x20)),(uint)param_6);
  (*(float *)(gen_frame + 0x90)) = *pfVar7;
  (*(float *)(gen_frame + 0x94)) = pfVar7[1];
  (*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 0)) = pfVar7[2];
  pfVar7 = (float *)F_0065e920(&(*(float *)(gen_frame + 0x30)),(uint)(*(float * PTR32 *)(gen_frame + 0xac)));
  (*(float *)(gen_frame + 0xb0)) = *pfVar7;
  (*(float *)(gen_frame + 0xb4)) = pfVar7[1];
  (*(float *)(gen_frame + 0xb8)) = pfVar7[2];
  fVar3 = ((float)GEN_TOF(((float10)pfVar7[2] * (float10)(*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 0)) +
                 ((float10)pfVar7[1] * (float10)(*(float *)(gen_frame + 0x94)) + (float10)*pfVar7 * (float10)(*(float *)(gen_frame + 0x90))))));
  (*(float *)(gen_frame + 0xc8)) = fVar3;
  fVar3 = ((float)GEN_TOF(ABS((float10)fVar3)));
  (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
  if ((float10)REFG(float, 0x1088138) < (float10)fVar3) {
    puVar8 = (undefined4 *)
             F_00622640((*(undefined4 *)(gen_frame + 0x48)),param_2,(*(undefined4 * PTR32 *)(gen_frame + 0x4c)),(*(float * PTR32 *)(gen_frame + 0x44)),(*(float * PTR32 *)(gen_frame + 0xac)),(*(float * PTR32 *)(gen_frame + 0x6c)),param_7,GEN_TOF(param_8),
                          param_9);
  }
  else {
    F_006222f0(&(*(float *)(gen_frame + 0x30)),(*(float * PTR32 *)(gen_frame + 0xac)),(*(float * PTR32 *)(gen_frame + 0x6c)));
    pfVar13 = (*(float * PTR32 *)(gen_frame + 0x6c));
    (*(float *)(gen_frame + 0xb0)) = *param_7;
    pfVar7 = param_7 + 2;
    (*(float *)(gen_frame + 0xb4)) = param_7[1];
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = pfVar7;
    (*(float *)(gen_frame + 0xb8)) = *pfVar7;
    (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x1;
    if ((float *)0x1 < param_8) {
      if (3 < (int)param_8 + -1) {
        iVar12 = ((int)param_8 - 5U >> 2) + 1;
        (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)(iVar12 * 4 + 1);
        pfVar9 = param_7 + 10;
        do {
          iVar12 = iVar12 + -1;
          fVar14 = (float10)(*(float *)(gen_frame + 0xb0));
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)pfVar9[-6] + fVar14);
          fVar15 = (float10)(*(float *)(gen_frame + 0xb4));
          (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar9[-5] + fVar15);
          fVar16 = (float10)(*(float *)(gen_frame + 0xb8));
          (*(float *)(gen_frame + 0xb8)) = (float)((float10)pfVar9[-4] + fVar16);
          fVar3 = ((float)GEN_TOF(((float10)pfVar9[-2] + (float10)(float)((float10)pfVar9[-6] + fVar14))));
          (*(float *)(gen_frame + 0xb0)) = fVar3;
          fVar4 = ((float)GEN_TOF(((float10)pfVar9[-1] + (float10)(float)((float10)pfVar9[-5] + fVar15))));
          (*(float *)(gen_frame + 0xb4)) = fVar4;
          fVar5 = ((float)GEN_TOF(((float10)(float)((float10)pfVar9[-4] + fVar16) + (float10)*pfVar9)));
          (*(float *)(gen_frame + 0xb8)) = fVar5;
          fVar3 = (float)((float10)pfVar9[2] + (float10)fVar3);
          (*(float *)(gen_frame + 0xb0)) = fVar3;
          fVar4 = (float)((float10)pfVar9[3] + (float10)fVar4);
          (*(float *)(gen_frame + 0xb4)) = fVar4;
          fVar5 = (float)((float10)pfVar9[4] + (float10)fVar5);
          (*(float *)(gen_frame + 0xb8)) = fVar5;
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)pfVar9[6] + (float10)fVar3);
          (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar9[7] + (float10)fVar4);
          (*(float *)(gen_frame + 0xb8)) = (float)((float10)pfVar9[8] + (float10)fVar5);
          pfVar9 = pfVar9 + 0x10;
        } while (iVar12 != 0);
      }
      if ((*(float * PTR32 *)(gen_frame + 0xac)) < param_8) {
        iVar12 = (int)param_8 - (int)(*(float * PTR32 *)(gen_frame + 0xac));
        pfVar9 = param_7 + (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0xac))) * 4 + 2;
        do {
          iVar12 = iVar12 + -1;
          (*(float *)(gen_frame + 0xb0)) = (float)((float10)pfVar9[-2] + (float10)(*(float *)(gen_frame + 0xb0)));
          (*(float *)(gen_frame + 0xb4)) = (float)((float10)pfVar9[-1] + (float10)(*(float *)(gen_frame + 0xb4)));
          (*(float *)(gen_frame + 0xb8)) = (float)((float10)*pfVar9 + (float10)(*(float *)(gen_frame + 0xb8)));
          pfVar9 = pfVar9 + 4;
        } while (iVar12 != 0);
      }
    }
    (*(float * PTR32 *)(gen_frame + 0xcc)) = param_8;
    fVar14 = (float10)(int)param_8;
    if ((int)param_8 < 0) {
      fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)fVar14)));
    (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
    fVar14 = (float10)(float)fVar14;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb0)) / fVar14);
    (*(float *)(gen_frame + 0xb0)) = fVar3;
    fVar4 = (float)((float10)(*(float *)(gen_frame + 0xb4)) / fVar14);
    (*(float *)(gen_frame + 0xb4)) = fVar4;
    fVar5 = (float)((float10)(*(float *)(gen_frame + 0xb8)) / fVar14);
    (*(float *)(gen_frame + 0xb8)) = fVar5;
    if (param_8 != (float *)0x0) {
      (*(float * PTR32 *)(gen_frame + 0xcc)) = param_8;
      do {
        (*(float *)(gen_frame + 0x70)) = (float)((float10)pfVar7[-2] - (float10)fVar3);
        (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar7[-1] - (float10)fVar4);
        (*(float *)(gen_frame + 0x78)) = (float)((float10)*pfVar7 - (float10)fVar5);
        fVar14 = (float10)(float)((float10)pfVar7[-2] - (float10)fVar3);
        fVar15 = (float10)(float)((float10)pfVar7[-1] - (float10)fVar4);
        fVar16 = (float10)(float)((float10)*pfVar7 - (float10)fVar5);
        fVar6 = ((float)GEN_TOF((fVar16 * fVar16 + (fVar15 * fVar15 + fVar14 * fVar14))));
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar6)));
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar6))))));
        if ((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))) < (float10)(float)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4))) {
          (*(float * PTR32 *)(gen_frame + 0xac)) = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4));
        }
        pfVar7 = pfVar7 + 4;
        pfVar9 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
        (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar9;
      } while (pfVar9 != (float *)0x0);
    }
    pfVar7 = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac))))) + (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xac)))))))));
    (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar7;
    fVar14 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar7)));
    (*(float *)(gen_frame + 0x70)) = (float)(fVar14 * (float10)*(*(float * PTR32 *)(gen_frame + 0x6c)));
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x6c))[1] * fVar14);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar14 * (float10)(*(float * PTR32 *)(gen_frame + 0x6c))[2]);
    fVar3 = ((float)GEN_TOF(((float10)fVar3 - (float10)(float)(fVar14 * (float10)*(*(float * PTR32 *)(gen_frame + 0x6c))))));
    (*(float *)(gen_frame + 0x90)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar4 - (float10)(float)((float10)(*(float * PTR32 *)(gen_frame + 0x6c))[1] * fVar14))));
    (*(float *)(gen_frame + 0x94)) = fVar4;
    (*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 0)) = ((float)GEN_TOF(((float10)fVar5 - (float10)(float)(fVar14 * (float10)(*(float * PTR32 *)(gen_frame + 0x6c))[2]))));
    (*(float *)(gen_frame + 0x50)) = fVar3;
    (*(float *)(gen_frame + 0x54)) = fVar4;
    (*(float *)(gen_frame + 0x58)) = (*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 0));
    F_004f4430(param_2,&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0x30)));
    if (param_8 != (float *)0x0) {
      puVar11 = ((undefined4 *)(gen_frame + 0x1d0)) + 2;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x8c)) - (int)puVar11);
      (*(float * PTR32 *)(gen_frame + 0xcc)) = param_8;
      do {
        ((undefined4 *)(gen_frame + 0x190))[0] = *param_2;
        ((undefined4 *)(gen_frame + 0x190))[1] = param_2[1];
        ((undefined4 *)(gen_frame + 0x190))[2] = param_2[2];
        ((undefined4 *)(gen_frame + 0x190))[4] = param_2[4];
        ((undefined4 *)(gen_frame + 0x190))[3] = 0;
        (*(undefined4 *)(gen_frame + 0x1a4)) = param_2[5];
        (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
        (*(undefined4 *)(gen_frame + 0x1bc)) = 0;
        (*(undefined4 *)(gen_frame + 0x1a8)) = param_2[6];
        (*(undefined4 *)(gen_frame + 0x1c0)) = param_2[0xc];
        (*(undefined4 *)(gen_frame + 0x1b0)) = param_2[8];
        (*(undefined4 *)(gen_frame + 0x1c4)) = param_2[0xd];
        (*(undefined4 *)(gen_frame + 0x1b4)) = param_2[9];
        (*(undefined4 *)(gen_frame + 0x1c8)) = param_2[0xe];
        (*(undefined4 *)(gen_frame + 0x1b8)) = param_2[10];
        (*(undefined4 *)(gen_frame + 0x1cc)) = REFG(float, 0x1087f04);
        puVar10 = (undefined4 *)
                  F_004ee9b0(&(*(float *)(gen_frame + 0x50)),(int)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) + (int)puVar11,((undefined4 *)(gen_frame + 0x190)));
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        puVar11[-2] = *puVar10;
        puVar11[-1] = uVar1;
        *puVar11 = uVar2;
        puVar11 = puVar11 + 4;
        pfVar7 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0xcc)) + -1);
        (*(float * PTR32 *)(gen_frame + 0xcc)) = pfVar7;
        pfVar13 = (*(float * PTR32 *)(gen_frame + 0x6c));
      } while (pfVar7 != (float *)0x0);
    }
    F_004f4990(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x1d0)),param_8,0x10);
    fVar3 = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0xc8)) * (float10)(*(float *)(gen_frame + 0xc8)));
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar4 = (float)((float10)1 / (float10)fVar3);
    (*(float *)(gen_frame + 0xc8)) = fVar4;
    fVar4 = (float)((float10)fVar4 * (float10)param_10);
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar4)));
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x4)));
    fVar5 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x4))))));
    (*(float *)(gen_frame + 0xc8)) = fVar5;
    (*(double *)(gen_frame + 0x98)) = (double)fVar5;
    fVar14 = (float10)fVar4;
    fVar3 = ((float)GEN_TOF(-(fVar14 + (float10)fVar5 * (float10)fVar3)));
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar3 = (float)((float10)fVar3 / -fVar14);
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar3 = ((float)GEN_TOF(((float10)fVar5 / ((float10)fVar3 - (float10)REFG(double, 0x1088130)))));
    (*(float * PTR32 *)(gen_frame + 0xcc)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar14 = (float10)fVar3;
    (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)(fVar14 + (float10)fVar5))));
    (*(float *)((char *)&(*(double *)(gen_frame + 0x98)) + 0)) = gen_bits2f((uint)(ulonglong)gen_d2bits((double)fVar5));
    fVar3 = (float)(fVar14 - (float10)param_10);
    (*(float *)(gen_frame + 0xc8)) = fVar3;
    fVar14 = (float10)fVar3;
    (*(float *)(gen_frame + 0x70)) = (float)(fVar14 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar14);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar14 * (float10)(*(float *)(gen_frame + 0x38)));
    fVar3 = ((float)GEN_TOF(((float10)*(*(float * PTR32 *)(gen_frame + 0x44)) - (float10)(float)(fVar14 * (float10)(*(float *)(gen_frame + 0x30))))));
    (*(float *)(gen_frame + 0x50)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x44))[1] - (float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar14))));
    (*(float *)(gen_frame + 0x54)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x44))[2] - (float10)(float)(fVar14 * (float10)(*(float *)(gen_frame + 0x38))))));
    (*(float *)(gen_frame + 0x58)) = fVar5;
    (*(float *)(gen_frame + 0x20)) = fVar3;
    (*(float *)(gen_frame + 0x24)) = fVar4;
    (*(float *)(gen_frame + 0x28)) = fVar5;
    (*(float *)(gen_frame + 0x50)) = (float)((float10)*pfVar13 + (float10)fVar3);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar4 + (float10)pfVar13[1]);
    (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar5 + (float10)pfVar13[2]);
    (*(float *)(gen_frame + 0x70)) = (float)((float10)*pfVar13 + (float10)fVar3);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)fVar4 + (float10)pfVar13[1]);
    (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar5 + (float10)pfVar13[2]);
    F_004f4430(param_2,&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)));
    fVar14 = (float10)(float)(*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x98)) + 4));
    ((undefined4 *)(gen_frame + 0x190))[0] = *param_2;
    fVar15 = fVar14 - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xcc)))));
    ((undefined4 *)(gen_frame + 0x190))[1] = param_2[1];
    ((undefined4 *)(gen_frame + 0x190))[2] = param_2[2];
    ((undefined4 *)(gen_frame + 0x190))[4] = param_2[4];
    (*(undefined4 *)(gen_frame + 0x1a4)) = param_2[5];
    (*(undefined4 *)(gen_frame + 0x1a8)) = param_2[6];
    (*(undefined4 *)(gen_frame + 0x1b0)) = param_2[8];
    (*(undefined4 *)(gen_frame + 0x154)) = 0;
    (*(undefined4 *)(gen_frame + 0x158)) = 0;
    (*(undefined4 *)(gen_frame + 0x15c)) = 0;
    (*(undefined4 *)(gen_frame + 0x160)) = 0;
    (*(undefined4 *)(gen_frame + 0x168)) = 0;
    (*(undefined4 *)(gen_frame + 0x170)) = 0;
    (*(undefined4 *)(gen_frame + 0x174)) = 0;
    (*(undefined4 *)(gen_frame + 0x17c)) = 0;
    (*(undefined4 *)(gen_frame + 0x180)) = 0;
    (*(undefined4 *)(gen_frame + 0x188)) = 0;
    (*(undefined4 *)(gen_frame + 0x18c)) = 0;
    ((undefined4 *)(gen_frame + 0x190))[3] = 0;
    (*(undefined4 *)(gen_frame + 0x1ac)) = 0;
    (*(undefined4 *)(gen_frame + 0x1bc)) = 0;
    (*(undefined4 *)(gen_frame + 0x1b4)) = param_2[9];
    (*(undefined4 *)(gen_frame + 0x1c0)) = param_2[0xc];
    (*(undefined4 *)(gen_frame + 0x150)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x178)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x16c)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x1b8)) = param_2[10];
    (*(float *)(gen_frame + 0x164)) = (float)(fVar14 / fVar15);
    (*(float *)(gen_frame + 0x184)) = ((float)GEN_TOF(((-fVar14 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xcc)))))) / fVar15)));
    (*(undefined4 *)(gen_frame + 0x1c4)) = param_2[0xd];
    (*(undefined4 *)(gen_frame + 0x1c8)) = param_2[0xe];
    (*(undefined4 *)(gen_frame + 0x1cc)) = REFG(float, 0x1087f04);
    puVar11 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0xd0)),(uint)((undefined4 *)(gen_frame + 0x190)),(uint)&(*(undefined4 *)(gen_frame + 0x150)));
    puVar10 = ((undefined4 *)(gen_frame + 0x110));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    if (param_8 != (float *)0x0) {
      puVar11 = ((undefined4 *)(gen_frame + 0x1d0)) + 2;
      iVar12 = (int)(*(float * PTR32 *)(gen_frame + 0x8c)) - (int)puVar11;
      (*(float * PTR32 *)(gen_frame + 0x8c)) = param_8;
      do {
        puVar10 = (undefined4 *)F_004ee9b0(&(*(float *)(gen_frame + 0x50)),(int)puVar11 + iVar12,((undefined4 *)(gen_frame + 0x110)));
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        puVar11[-2] = *puVar10;
        puVar11[-1] = uVar1;
        *puVar11 = uVar2;
        puVar11 = puVar11 + 4;
        pfVar7 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x8c)) + -1);
        (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar7;
      } while (pfVar7 != (float *)0x0);
    }
    F_004f4990(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x1d0)),param_8,0x10);
    puVar11 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
    F_006224f0((*(undefined4 * PTR32 *)(gen_frame + 0x4c)),((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x10)));
    puVar8 = (undefined4 *)F_004f0e10(((undefined1 *)(gen_frame + 0xd0)),(uint)&(*(undefined4 *)(gen_frame + 0x150)),(uint)puVar11);
    puVar11 = puVar8;
    puVar10 = ((undefined4 *)(gen_frame + 0x190));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar11 = ((undefined4 *)(gen_frame + 0x190));
    puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar10 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar10 = puVar10 + 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x35c)) ^ (uint)(uint)(gen_frame + 0x360));
  return (uint)puVar8;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::vf5 */
uint F_00629da0(unsigned int gen_a0)
{
  GEN_ENTER(0x629da0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  undefined * this_00;
  undefined * pCVar4;
  undefined4 * puVar5;
  float * pfVar6;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x60)),(uint)(this + 0x10),(uint)(this + 0x50));
  puVar5 = ((undefined4 *)(gen_frame + 0x0));
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar5 = puVar5 + 1;
  }
  this_00 = this + 0xc0;
  F_0065fc60(this_00,((undefined4 *)(gen_frame + 0x0)));
  pCVar4 = this_00;
  pfVar6 = ((float *)(gen_frame + 0x40));
  for (iVar3 = 0x18; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *(float *)pCVar4;
    pCVar4 = pCVar4 + 4;
    pfVar6 = pfVar6 + 1;
  }
  ((float *)(gen_frame + 0x40))[3] = (float)((float10)((float *)(gen_frame + 0x40))[3] + (float10)*(double *)&REFG(double, 0x10abf80));
  uVar2 = F_00662250(this_00,((float *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar2;
}

/* ref: FUN_00629eb0 */
uint F_00629eb0(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0x629eb0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x220];
  float fVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float * pfVar7;
  float * pfVar8;
  undefined4 * puVar9;
  uint uVar10;
  float fVar11;
  
  (*(uint *)(gen_frame + 0x20c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x210);
  (*(float * PTR32 *)(gen_frame + 0x3c)) = param_4;
  F_004f0c10(((undefined1 *)(gen_frame + 0x100)),in_xmm3,in_xmm5,in_xmm6,*(float *)(param_6 + 0xa4),
               *(float *)(param_6 + 0xa8),param_7,param_8);
  puVar3 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x40)),param_6 + 0x10,(uint)((undefined1 *)(gen_frame + 0x100)));
  puVar9 = ((undefined4 *)(gen_frame + 0x140));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar3 = (undefined4 *)F_004f4970(((undefined1 *)(gen_frame + 0x80)),((undefined4 *)(gen_frame + 0x140)));
  puVar9 = ((undefined4 *)(gen_frame + 0xc0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar9 = puVar9 + 1;
  }
  fVar11 = *((float *)GEN_TOP((*(int *)(REFG(int, 0x1370c1c) + 0x3930) + 0x3200a4)));
  (*(float *)(gen_frame + 0x38)) = fVar11;
  fVar1 = *((float *)GEN_TOP((*(int *)(REFG(int, 0x1370c1c) + 0x3930) + 0x320094)));
  (*(float *)(gen_frame + 0x34)) = fVar1;
  if ((float10)fVar11 - (float10)fVar1 < (float10)*(double *)&REFG(undefined, 0x10abfa0)) {
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x10abc38);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x10abc60);
  }
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1302c80);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1302c80);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1302c84);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1302c88);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1302c84);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1302c88);
  (*(float *)(gen_frame + 0x1c)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0xc)) = (*(float *)(gen_frame + 0x38));
  ((float *)(gen_frame + 0x180))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x180))[0], REFG(float, 0x1090708));
  ((float *)(gen_frame + 0x180))[1] = gen_bits2f(REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x180))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x190)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x194)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x198)) = 0;
  (*(undefined4 *)(gen_frame + 0x1a0)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x1a4)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1a8)) = 0;
  (*(float *)(gen_frame + 0x1b0)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x1b4)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1b8)) = 0;
  (*(float *)(gen_frame + 0x1c0)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1c4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1c8)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1d0)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1d4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1d8)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x1e0)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x1e4)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1e8)) = REFG(float, 0x1087f04);
  (*(float *)(gen_frame + 0x1f0)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x1f4)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x1f8)) = REFG(float, 0x1087f04);
  pfVar7 = ((float *)(gen_frame + 0x180));
  iVar5 = 8;
  do {
    F_004eeb30(pfVar7,(uint)((undefined4 *)(gen_frame + 0xc0)));
    pfVar8 = (*(float * PTR32 *)(gen_frame + 0x3c));
    pfVar7 = pfVar7 + 4;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  (*(float * PTR32 *)(gen_frame + 0x3c)) = (float *)0x0;
  uVar10 = 0;
  do {
    uVar4 = (uint)(byte)(&REFG(undefined1, 0x10abf89))[(int)(*(float * PTR32 *)(gen_frame + 0x3c))];
    uVar6 = (uint)(byte)(&REFG(undefined1, 0x10abf88))[(int)(*(float * PTR32 *)(gen_frame + 0x3c))];
    (*(float *)(gen_frame + 0x160)) = ((float *)(gen_frame + 0x180))[(int)(uVar6 * 4)];
    (*(float *)(gen_frame + 0x164)) = ((float *)(gen_frame + 0x180))[(int)(uVar6 * 4 + 1)];
    (*(float *)(gen_frame + 0x168)) = ((float *)(gen_frame + 0x180))[(int)(uVar6 * 4 + 2)];
    (*(float *)(gen_frame + 0x170)) = ((float *)(gen_frame + 0x180))[(int)(uVar4 * 4)];
    (*(float *)(gen_frame + 0x174)) = ((float *)(gen_frame + 0x180))[(int)(uVar4 * 4 + 1)];
    (*(float *)(gen_frame + 0x178)) = ((float *)(gen_frame + 0x180))[(int)(uVar4 * 4 + 2)];
    bVar2 = F_00660720(&(*(float *)(gen_frame + 0x160)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)));
    if (bVar2 == 0) {
      if (!((float10)(*(float *)(gen_frame + 0x38)) < (float10)(*(float *)(gen_frame + 0x164)))) goto LAB_0062a208;
    }
    else {
      if ((float10)(*(float *)(gen_frame + 0x164)) < (float10)(*(float *)(gen_frame + 0x24))) {
        (*(float *)(gen_frame + 0x170)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x174)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x178)) = (*(float *)(gen_frame + 0x28));
      }
      else {
        (*(float *)(gen_frame + 0x160)) = (*(float *)(gen_frame + 0x20));
        (*(float *)(gen_frame + 0x164)) = (*(float *)(gen_frame + 0x24));
        (*(float *)(gen_frame + 0x168)) = (*(float *)(gen_frame + 0x28));
      }
LAB_0062a208: ;
      bVar2 = F_00660720(&(*(float *)(gen_frame + 0x160)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)));
      if (bVar2 == 0) {
        if (!((float10)(*(float *)(gen_frame + 0x34)) < (float10)(*(float *)(gen_frame + 0x164)))) goto LAB_0062a318;
        *pfVar8 = (*(float *)(gen_frame + 0x160));
        pfVar8[1] = (*(float *)(gen_frame + 0x164));
        pfVar8[2] = (*(float *)(gen_frame + 0x168));
        pfVar8[4] = (*(float *)(gen_frame + 0x170));
        pfVar8[5] = (*(float *)(gen_frame + 0x174));
        fVar11 = (*(float *)(gen_frame + 0x178));
      }
      else {
        if ((float10)(*(float *)(gen_frame + 0x24)) < (float10)(*(float *)(gen_frame + 0x164))) {
          *pfVar8 = (*(float *)(gen_frame + 0x160));
          pfVar8[1] = (*(float *)(gen_frame + 0x164));
          fVar11 = (*(float *)(gen_frame + 0x168));
        }
        else {
          *pfVar8 = (*(float *)(gen_frame + 0x170));
          pfVar8[1] = (*(float *)(gen_frame + 0x174));
          fVar11 = (*(float *)(gen_frame + 0x178));
        }
        pfVar8[2] = fVar11;
        pfVar8[4] = (*(float *)(gen_frame + 0x20));
        pfVar8[5] = (*(float *)(gen_frame + 0x24));
        fVar11 = (*(float *)(gen_frame + 0x28));
      }
      uVar10 = uVar10 + 2;
      pfVar8[6] = fVar11;
      pfVar8 = pfVar8 + 8;
    }
LAB_0062a318: ;
    uVar4 = (int)(*(float * PTR32 *)(gen_frame + 0x3c)) + 2;
    (*(float * PTR32 *)(gen_frame + 0x3c)) = (float *)uVar4;
    if (0x17 < uVar4) {
      F_00c47745((*(uint *)(gen_frame + 0x20c)) ^ (uint)(uint)(gen_frame + 0x210));
      return uVar10;
    }
  } while( true );
}

/* ref: FUN_0062a350 */
uint F_0062a350(float gen_a0)
{
  GEN_ENTER(0x62a350u, gen_trace_f(gen_a0), 0u, 0u, 0u);
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

/* ref: FUN_0062a390 */
uint F_0062a390(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x62a390u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined * pCVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined * PTR32 * ppCVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined * pCVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  iVar8 = *(int *)(in_ecx + 0x140);
  pCVar10 = *(undefined * PTR32 *)(iVar8 + 0x50);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pCVar10;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = *(undefined * PTR32 *)(iVar8 + 0x54);
  if (*(int *)(iVar8 + 0xc) == 5) {
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(iVar8 + 0x10) + 0x20))) * (float10)REFG(double, 0x1088108) +
                      (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)(iVar8 + 0x54))))))))));
  }
  fVar11 = (float10)REFG(double, 0x1094800);
  *(float *)(in_ecx + 0xa4) = REFG(float, 0x10abfac);
  *(undefined4 *)(in_ecx + 0xa8) = REFG(float, 0x1087f04);
  pCVar1 = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094884)));
  in_ecx[0xb8] = (undefined1)0x0;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pCVar1;
  ppCVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x2c));
  if (!(fVar11 < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pCVar10))))) {
    ppCVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x28));
  }
  pCVar10 = *ppCVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pCVar10;
  *(undefined * PTR32 *)(in_ecx + 0xac) = pCVar10;
  ppCVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x24));
  pCVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pCVar10))) + fVar11))));
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = pCVar1;
  if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pCVar1))) < (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x24))))))) {
    ppCVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  pCVar1 = *ppCVar5;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pCVar1;
  *(undefined * PTR32 *)(in_ecx + 0xb0) = pCVar1;
  F_004f0c10(in_ecx + 0x50,in_xmm3,in_xmm5,in_xmm6,REFG(float, 0x10abfac),(float)(float10)1,((float)gen_bits2f((unsigned int)(uintptr_t)(pCVar10))),
               ((float)gen_bits2f((unsigned int)(uintptr_t)(pCVar1))));
  F_00628180(in_ecx);
  iVar8 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  *(undefined4 *)(in_ecx + 0x90) = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(in_ecx + 0x94) = *(undefined4 *)(iVar8 + 0x94);
  uVar6 = REFG(undefined4, 0x1487d10);
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(iVar8 + 0x98);
  if ((uVar6 & 1) == 0) {
    uVar6 = uVar6 | 1;
    REFG(float, 0x1487d00) = REFG(float, 0x10abfa8);
    *(undefined4 *)&REFG(undefined, 0x1487d04) = REFG(float, 0x10abfa8);
    *(undefined4 *)&REFG(undefined, 0x1487d08) = REFG(float, 0x10abfa8);
    *(undefined4 *)&REFG(undefined, 0x1487d0c) = REFG(float, 0x10abfa8);
    REFG(undefined4, 0x1487d10) = uVar6;
  }
  if ((uVar6 & 2) == 0) {
    REFG(undefined4, 0x1487d10) = uVar6 | 2;
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x10)));
    REFG(float, 0x1487cc0) = *puVar7;
    REFG(float, 0x1487cc4) = puVar7[1];
    REFG(float, 0x1487cc8) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x10)));
    REFG(float, 0x1487cd0) = *puVar7;
    REFG(float, 0x1487cd4) = puVar7[1];
    REFG(float, 0x1487cd8) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x10)));
    *(undefined4 *)&REFG(undefined, 0x1487ce0) = *puVar7;
    *(undefined4 *)&REFG(undefined, 0x1487ce4) = puVar7[1];
    *(undefined4 *)&REFG(undefined, 0x1487ce8) = puVar7[2];
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x10)));
    *(undefined4 *)&REFG(undefined, 0x1487cf0) = *puVar7;
    *(undefined4 *)&REFG(undefined, 0x1487cf4) = puVar7[1];
    *(undefined4 *)&REFG(undefined, 0x1487cf8) = puVar7[2];
  }
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = in_ecx + 400;
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = in_ecx + 0x154;
  (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)&REFG(float, 0x1487d00);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &REFG(float, 0x1487cc0);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = in_ecx + 0x130;
  do {
    uVar2 = REFG(float, 0x1087f04);
    *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + -4) = *(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    *(undefined4 *)(*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1];
    (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
    uVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xc))[2];
    *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 8) = 0;
    *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x24)) + 4) = uVar2;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    F_004f4430(((undefined4 *)(gen_frame + 0x70)),&REFG(float, 0x1375ac0),(*(undefined4 * PTR32 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x10)));
    puVar7 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x30)),(uint)(in_ecx + 0x10),(uint)((undefined4 *)(gen_frame + 0x70)));
    puVar9 = ((undefined4 *)(gen_frame + 0x70));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    fVar11 = ((float10)GEN_TOD(fsin((float10)*(*(float * PTR32 *)(gen_frame + 0x8)))));
    fVar3 = (float)fVar11;
    (*(float *)(gen_frame + 0x20)) = fVar3;
    fVar11 = ((float10)GEN_TOD(fcos((float10)*(*(float * PTR32 *)(gen_frame + 0x8)))));
    fVar4 = (float)fVar11;
    (*(float *)(gen_frame + 0x20)) = fVar4;
    (*(float *)(gen_frame + 0xb0)) = fVar4;
    (*(float *)(gen_frame + 0xb4)) = fVar3;
    (*(float *)(gen_frame + 0xc0)) = ((float)GEN_TOF(-(float10)fVar3));
    (*(undefined4 *)(gen_frame + 0xb8)) = 0;
    (*(float *)(gen_frame + 0xc4)) = fVar4;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd4)) = 0;
    (*(undefined4 *)(gen_frame + 0xd8)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    puVar7 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x30)),(uint)((undefined4 *)(gen_frame + 0x70)),(uint)&(*(float *)(gen_frame + 0xb0)));
    pCVar10 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
    fVar3 = REFG(float, 0x10abfac);
    puVar9 = ((undefined4 *)(gen_frame + 0x70));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
    *(undefined1 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x138) = 1;
    *(undefined1 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb8) = 0;
    *(float *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xa4) = fVar3;
    uVar2 = REFG(float, 0x1087f04);
    *(undefined4 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xac) = *(undefined4 *)(in_ecx + 0xac);
    *(undefined4 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xb0) = *(undefined4 *)(in_ecx + 0xb0);
    *(undefined4 *)(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xa8) = uVar2;
    F_00621fc0(*(int *)(*(undefined * PTR32 *)(gen_frame + 0x2c)),in_xmm3,in_xmm5,in_xmm6,((undefined4 *)(gen_frame + 0x70)));
    puVar7 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x30)),*(int *)pCVar10 + 0x10,*(int *)pCVar10 + 0x50);
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x10;
    pCVar10 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *(undefined4 *)pCVar10 = *puVar7;
      puVar7 = puVar7 + 1;
      pCVar10 = pCVar10 + 4;
    }
    (*(float * PTR32 *)(gen_frame + 0x8)) = (*(float * PTR32 *)(gen_frame + 0x8)) + 1;
    (*(undefined * PTR32 *)(gen_frame + 0x2c)) = (*(undefined * PTR32 *)(gen_frame + 0x2c)) + 4;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 4;
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x40;
  } while ((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) < 0x1487d00);
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return (uint)(*(undefined4 * PTR32 *)(gen_frame + 0xc));
}

/* ref: FUN_0062a920 */
uint F_0062a920(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x62a920u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  undefined * pCVar9;
  undefined4 * puVar10;
  float10 fVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  iVar8 = *(int *)(in_ecx + 0x140);
  if (*(int *)(iVar8 + 0xc) == 3) {
    fVar1 = *(float *)(iVar8 + 0x50);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x4)) = *(float *)(iVar8 + 0x54);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(iVar8 + 0x78) + (float10)*(float *)(iVar8 + 0x74))));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    (*(float *)(gen_frame + 0xc)) = REFG(float, 0x10abfb0);
    pfVar6 = &(*(float *)(gen_frame + 0x8));
    if (!((float10)fVar2 < (float10)REFG(float, 0x10abfb0))) {
      pfVar6 = &(*(float *)(gen_frame + 0xc));
    }
    fVar2 = *pfVar6;
    pfVar6 = (float *)(iVar8 + 0x48);
    (*(float *)(gen_frame + 0xc)) = fVar2;
    if (!((float10)*(float *)(iVar8 + 0x48) < (float10)*(float *)(iVar8 + 0x54))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar6;
    fVar12 = (float10)*(double *)&REFG(undefined, 0x1080228);
    (*(float *)(gen_frame + 0x4)) = fVar3;
    *(undefined4 *)(in_ecx + 0xa8) = REFG(float, 0x1087f04);
    fVar4 = REFG(float, 0x1094884);
    fVar11 = (float10)*(double *)&REFG(undefined, 0x1080220);
    in_ecx[0xb8] = (undefined1)0x0;
    pfVar6 = &(*(float *)(gen_frame + 0x0));
    fVar2 = ((float)GEN_TOF((((float10)fVar2 * fVar12) / fVar11)));
    (*(float *)(gen_frame + 0xc)) = fVar2;
    *(float *)(in_ecx + 0xa4) = fVar2;
    fVar11 = (float10)REFG(double, 0x1094800);
    (*(float *)(gen_frame + 0xc)) = fVar4;
    if (!(fVar11 < (float10)fVar1)) {
      pfVar6 = &(*(float *)(gen_frame + 0xc));
    }
    fVar1 = *pfVar6;
    (*(float *)(gen_frame + 0xc)) = fVar1;
    *(float *)(in_ecx + 0xac) = fVar1;
    pfVar6 = &(*(float *)(gen_frame + 0x4));
    fVar4 = (float)((float10)fVar1 + fVar11);
    (*(float *)(gen_frame + 0x8)) = fVar4;
    if (!((float10)fVar4 < (float10)fVar3)) {
      pfVar6 = &(*(float *)(gen_frame + 0x8));
    }
    fVar3 = *pfVar6;
    (*(float *)(gen_frame + 0xc)) = fVar3;
    *(float *)(in_ecx + 0xb0) = fVar3;
    F_004f0c10(in_ecx + 0x50,in_xmm3,in_xmm5,in_xmm6,fVar2,(float)(float10)1,fVar1,fVar3);
  }
  else if (*(int *)(iVar8 + 0xc) == 4) {
    (*(float *)(gen_frame + 0x4)) = *(float *)(iVar8 + 0x54);
    fVar1 = *(float *)(iVar8 + 0x50);
    fVar2 = *((float *)GEN_TOP((*(int *)(iVar8 + 0x10) + 0x20)));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar3 = *((float *)GEN_TOP((*(int *)(iVar8 + 0x10) + 0x24)));
    (*(float *)(gen_frame + 0x44)) = fVar3;
    fVar11 = (float10)fVar3;
    fVar12 = (float10)fVar2;
    fVar2 = (float)(fVar12 * fVar12 + fVar11 * fVar11);
    (*(float *)(gen_frame + 0x8)) = fVar2;
    fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
    (*(float *)(gen_frame + 0x8)) = fVar2;
    pfVar6 = (float *)(iVar8 + 0x48);
    if (!((float10)*pfVar6 < (float10)*(float *)(iVar8 + 0x54))) {
      pfVar6 = &(*(float *)(gen_frame + 0x4));
    }
    fVar3 = *pfVar6;
    fVar11 = (float10)REFG(double, 0x1094800);
    (*(float *)(gen_frame + 0x4)) = fVar3;
    *(float *)(in_ecx + 0xb4) = fVar2;
    fVar4 = REFG(float, 0x1094884);
    in_ecx[0xb8] = (undefined1)0x1;
    (*(float *)(gen_frame + 0xc)) = fVar4;
    pfVar6 = &(*(float *)(gen_frame + 0x0));
    if (!(fVar11 < (float10)fVar1)) {
      pfVar6 = &(*(float *)(gen_frame + 0xc));
    }
    fVar1 = *pfVar6;
    (*(float *)(gen_frame + 0xc)) = fVar1;
    *(float *)(in_ecx + 0xac) = fVar1;
    pfVar6 = &(*(float *)(gen_frame + 0x4));
    fVar4 = (float)((float10)fVar1 + fVar11);
    (*(float *)(gen_frame + 0x0)) = fVar4;
    if (!((float10)fVar4 < (float10)fVar3)) {
      pfVar6 = &(*(float *)(gen_frame + 0x0));
    }
    fVar3 = *pfVar6;
    (*(float *)(gen_frame + 0xc)) = fVar3;
    fVar2 = (float)((float10)fVar2 + (float10)fVar2);
    (*(float *)(gen_frame + 0x8)) = fVar2;
    *(float *)(in_ecx + 0xb0) = fVar3;
    F_004f09d0(in_ecx + 0x50,fVar2,fVar2,fVar1,fVar3,(float)(float10)0,(float)(float10)0);
  }
  F_00628180(in_ecx);
  uVar5 = REFG(float, 0x1087f04);
  iVar8 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  *(undefined4 *)(in_ecx + 0x90) = *(undefined4 *)(iVar8 + 0x90);
  *(undefined4 *)(in_ecx + 0x94) = *(undefined4 *)(iVar8 + 0x94);
  *(undefined4 *)(in_ecx + 0x98) = *(undefined4 *)(iVar8 + 0x98);
  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0x138))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xac))) = *(undefined4 *)(in_ecx + 0xac);
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xb0))) = *(undefined4 *)(in_ecx + 0xb0);
  *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xa8))) = uVar5;
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x140) + 0xc))) == 3) {
    pCVar9 = in_ecx + 0x10;
    puVar10 = ((undefined4 *)(gen_frame + 0x10));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *(undefined4 *)pCVar9;
      pCVar9 = pCVar9 + 4;
      puVar10 = puVar10 + 1;
    }
    F_0065ec40(((undefined4 *)(gen_frame + 0x10)),*(float *)&REFG(undefined, 0x10ab948));
    *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xb8))) = 0;
    *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xa4))) = *(undefined4 *)(in_ecx + 0xa4);
  }
  else {
    if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x140) + 0xc))) != 4) goto LAB_0062aca9;
    pCVar9 = in_ecx + 0x10;
    puVar10 = ((undefined4 *)(gen_frame + 0x10));
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *(undefined4 *)pCVar9;
      pCVar9 = pCVar9 + 4;
      puVar10 = puVar10 + 1;
    }
    F_0065ec40(((undefined4 *)(gen_frame + 0x10)),*(float *)&REFG(undefined, 0x10ab948));
    *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xb8))) = 1;
    *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x130) + 0xb4))) = *(undefined4 *)(in_ecx + 0xb4);
  }
  F_00621fc0(*(undefined4 *)(in_ecx + 0x130),in_xmm3,in_xmm5,in_xmm6,((undefined4 *)(gen_frame + 0x10)));
LAB_0062aca9: ;
  puVar7 = (undefined4 *)
           F_004f11a0(((undefined4 *)(gen_frame + 0x10)),*(int *)(in_ecx + 0x130) + 0x10,*(int *)(in_ecx + 0x130) + 0x50);
  puVar10 = puVar7;
  pCVar9 = in_ecx + 400;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pCVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    pCVar9 = pCVar9 + 4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)puVar7;
}

/* ref: FUN_0062acf0 */
byte F_0062acf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62acf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  uVar1 = F_004dcd60(0x1c0,1,0);
  *(uint *)((int)this + 0x120) = uVar1;
  if (uVar1 != 0) {
    F_00621fc0(this,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
    *(undefined4 *)((int)this + 0x130) = param_1;
    *(undefined4 *)((int)this + 0x134) = param_2;
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::CameraOmniFace::vf5 */
uint F_0062ad50(unsigned int gen_a0)
{
  GEN_ENTER(0x62ad50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined * this_00;
  int iVar1;
  float * pfVar2;
  float10 fVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined1 * puVar7;
  undefined * pCVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  puVar4 = (undefined4 *)F_004f11a0(&(*(undefined4 *)(gen_frame + 0x80)),(uint)(this + 0x10),(uint)(this + 0x50));
  pCVar8 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  puVar9 = ((undefined4 *)(gen_frame + 0x20));
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar9 = puVar9 + 1;
  }
  this_00 = (*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xc0;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this_00;
  uVar5 = F_0065fc60(this_00,((undefined4 *)(gen_frame + 0x20)));
  if (pCVar8[0x138] != (undefined1)0x0) {
    if ((*(uint *)&REFG(undefined, 0x1487de0) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x1487de0) = *(uint *)&REFG(undefined, 0x1487de0) | 1;
      *(undefined4 *)&REFG(undefined, 0x1487d20) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d24) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d28) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d30) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d34) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d38) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d40) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d44) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d48) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d50) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d54) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d58) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d60) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d64) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d68) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d70) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d74) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d78) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d80) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d84) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d88) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d90) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487d94) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487d98) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487da0) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487da4) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487da8) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487db0) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487db4) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487db8) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487dc0) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487dc4) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487dc8) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487dd0) = REFG(float, 0x1087f04);
      *(undefined4 *)&REFG(undefined, 0x1487dd4) = REFG(float, 0x1090708);
      *(undefined4 *)&REFG(undefined, 0x1487dd8) = REFG(float, 0x1090708);
    }
    iVar6 = *(int *)(pCVar8 + 0x134);
    fVar3 = (float10)0;
    pfVar2 = *((float * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(pCVar8 + 0x130) + 0x140))) + 0x10)));
    (*(float *)(gen_frame + 0xf0)) = (float)fVar3;
    (*(float *)(gen_frame + 0xf4)) = (float)fVar3;
    (*(undefined4 *)(gen_frame + 0xc0)) = REFG(float, 0x1302c60);
    (*(float *)(gen_frame + 0xf8)) = (float)fVar3;
    (*(undefined4 *)(gen_frame + 0xc4)) = 0;
    (*(undefined4 *)(gen_frame + 0xc8)) = 0;
    (*(undefined4 *)(gen_frame + 0xd0)) = 0;
    (*(undefined4 *)(gen_frame + 0xd8)) = 0;
    (*(undefined4 *)(gen_frame + 0xe0)) = 0;
    (*(undefined4 *)(gen_frame + 0xe4)) = 0;
    (*(float * PTR32 *)(gen_frame + 0x14)) = pfVar2;
    (*(undefined4 *)(gen_frame + 0xd4)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0xe8)) = REFG(float, 0x1302c68);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0xc0)),(uint)(pfVar2 + 4));
    (*(int *)(gen_frame + 0x18)) = 3;
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0xf0)));
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0xf4)));
    puVar7 = ((undefined1 *)(gen_frame + 0x100));
    iVar6 = iVar6 * 0x30 - (int)puVar7;
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0xf8)));
    do {
      F_004ee670(puVar7,(uint)(puVar7 + (int)(&REFG(undefined, 0x1487d20) + iVar6)),(uint)&(*(undefined4 *)(gen_frame + 0xc0)));
      pfVar2 = (*(float * PTR32 *)(gen_frame + 0x14));
      puVar7 = puVar7 + 0x10;
      iVar1 = (*(int *)(gen_frame + 0x18)) + -1;
      (*(int *)(gen_frame + 0x18)) = iVar1;
    } while (iVar1 != 0);
    pCVar8 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
    puVar4 = ((undefined4 *)(gen_frame + 0x60));
    for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = *(undefined4 *)pCVar8;
      pCVar8 = pCVar8 + 4;
      puVar4 = puVar4 + 1;
    }
    puVar4 = (undefined4 *)F_0065f870(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x100)),((undefined1 *)(gen_frame + 0x110)),(*(float * PTR32 *)(gen_frame + 0x14)));
    (*(undefined4 *)(gen_frame + 0x70)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x74)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x78)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x7c)) = puVar4[3];
    puVar4 = (undefined4 *)F_0065f870(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x120)),((undefined1 *)(gen_frame + 0x100)),pfVar2);
    (*(undefined4 *)(gen_frame + 0x80)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x84)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x88)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x8c)) = puVar4[3];
    puVar4 = (undefined4 *)F_0065f870(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x110)),((undefined1 *)(gen_frame + 0x120)),pfVar2);
    (*(undefined4 *)(gen_frame + 0x90)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x94)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x98)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x9c)) = puVar4[3];
    puVar4 = (undefined4 *)F_0065f870(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x100)),((undefined1 *)(gen_frame + 0x110)),pfVar2);
    (*(undefined4 *)(gen_frame + 0xa0)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0xa4)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0xa8)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0xac)) = puVar4[3];
    uVar5 = F_00662250((*(undefined * PTR32 *)(gen_frame + 0x1c)),((undefined4 *)(gen_frame + 0x60)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return uVar5;
}

/* ref: Client::Graphics::Render::Rigid::vf4 */
uint F_0062b2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x62b2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
  float10 fVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(uint *)(gen_frame + 0xdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xe0);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  puVar4 = ((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0x10)));
  if (*(int *)(REFG(int, 0x137127c) + 0x66f4) == 0) {
    puVar4 = &REFG(float, 0x1302d00);
  }
  puVar2 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)(this + 0x10),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0xc0)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(this + 0x40);
    (*(float *)(gen_frame + 0xc4)) = (float)fVar1;
    (*(float *)(gen_frame + 0xc8)) = (float)fVar1;
    (*(undefined4 *)(gen_frame + 0x94)) = 0;
    (*(undefined4 *)(gen_frame + 0x98)) = 0;
    (*(undefined4 *)(gen_frame + 0xa0)) = 0;
    (*(undefined4 *)(gen_frame + 0xa8)) = 0;
    (*(undefined4 *)(gen_frame + 0xb0)) = 0;
    (*(undefined4 *)(gen_frame + 0xb4)) = 0;
    (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(this + 0x44);
    (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(this + 0x48);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x90)),(uint)(this + 0x30));
    (*(float *)(gen_frame + 0xc0)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x20) + (float10)(*(float *)(gen_frame + 0xc0)))));
    (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0xc4)))));
    (*(float *)(gen_frame + 0xc8)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0xc8)))));
    puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x90)),(uint)puVar4);
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x4c));
    puVar5 = ((undefined4 *)(gen_frame + 0x0));
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *puVar2 = ((undefined4 *)(gen_frame + 0x0))[0];
    puVar2[1] = (*(undefined4 *)(gen_frame + 0x10));
    puVar2[2] = (*(undefined4 *)(gen_frame + 0x20));
    iVar3 = *(int *)((*(undefined * PTR32 *)(gen_frame + 0x48)) + 0x10);
    puVar2[3] = (*(undefined4 *)(gen_frame + 0x30));
    puVar2[4] = ((undefined4 *)(gen_frame + 0x0))[1];
    puVar2[5] = (*(undefined4 *)(gen_frame + 0x14));
    puVar2[6] = (*(undefined4 *)(gen_frame + 0x24));
    puVar2[7] = (*(undefined4 *)(gen_frame + 0x34));
    puVar2[8] = ((undefined4 *)(gen_frame + 0x0))[2];
    puVar2[9] = (*(undefined4 *)(gen_frame + 0x18));
    puVar2[10] = (*(undefined4 *)(gen_frame + 0x28));
    puVar2[0xb] = (*(undefined4 *)(gen_frame + 0x38));
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = GEN_FLT_TO(puVar2[0xf], REFG(float, 0x1087f04));
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0xdc)) ^ (uint)(uint)(gen_frame + 0xe0));
  return (uint)puVar2;
}

/* ref: FUN_0062b490 */
uint F_0062b490(unsigned int gen_a0)
{
  GEN_ENTER(0x62b490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  pvVar1 = this;
  if (REFG(void * PTR32, 0x1487c6c) != (undefined *)0x0) {
    *(undefined * PTR32 *)((int)this + 8) = REFG(void * PTR32, 0x1487c6c);
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1487c6c) + 0xc))) = this;
    pvVar1 = REFG(void * PTR32, 0x1487c54);
  }
  REFG(void * PTR32, 0x1487c54) = pvVar1;
  REFG(void * PTR32, 0x1487c6c) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10abfd0));
  *(undefined4 *)((int)this + 0x10) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x14) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x18) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x20) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x24) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x2c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1302e18);
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
  *(undefined2 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(gen_code32 *)((int)this + 0x78) = ((code *)REFP(0x667370));
  *(undefined4 *)((int)this + 0x7c) = 0x2000000;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined1 *)((int)this + 0x9c) = 0xff;
  F_009f0ad0((int)this + 0xa0);
  return (uint)this;
}

/* ref: FUN_0062b5c0 */
byte F_0062b5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62b5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint * puVar2;
  uint * this_00;
  int iVar3;
  
  *(ushort *)((int)this + 0x40) = (ushort)param_1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),(uint)(ushort)param_1 * 4,0x10);
  *(uint *)((int)this + 0x44) = uVar1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),(uint)*(ushort *)((int)this + 0x40) * 4,0x10);
  *(uint *)((int)this + 0x48) = uVar1;
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x44),0,(uint)*(ushort *)((int)this + 0x40) * 4);
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x48),0,(uint)*(ushort *)((int)this + 0x40) * 4);
  uVar1 = (uint)*(ushort *)((int)this + 0x40);
  if (uVar1 == 0) {
    puVar2 = (uint *)F_00406a50(0x10);
  }
  else {
    puVar2 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),
                                -(uint)(0xffffffef < uVar1 * 0x120) | uVar1 * 0x120 + 0x10,0x10)));
  }
  if (puVar2 == (uint *)0x0) {
    puVar2 = (uint *)0x0;
  }
  else {
    *puVar2 = uVar1;
    puVar2 = puVar2 + 4;
    this_00 = puVar2;
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      F_009f7f70(this_00);
      this_00 = this_00 + 0x48;
    }
  }
  uVar1 = 0;
  *(uint * PTR32 *)((int)this + 0x4c) = puVar2;
  if (*(short *)((int)this + 0x40) != 0) {
    iVar3 = 0;
    do {
      F_009f0800(*(int *)((int)this + 0x4c) + iVar3,this);
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x120;
    } while (uVar1 < *(ushort *)((int)this + 0x40));
  }
  uVar1 = 0;
  if (*(short *)((int)this + 0x40) != 0) {
    iVar3 = 0;
    do {
      F_009f07a0(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar3))),uVar1);
      uVar1 = uVar1 + 1;
      iVar3 = iVar3 + 0x120;
    } while (uVar1 < *(ushort *)((int)this + 0x40));
  }
  return 1;
}

/* ref: FUN_0062b710 */
uint F_0062b710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62b710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  ushort uVar1;
  byte bVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  if (param_1 != 0) {
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x4c);
    uVar1 = *(ushort *)((int)pvVar4 + param_1 * 0x120 + 0xb2);
    if (-1 < (short)uVar1) {
      if (param_1 == 2) {
        if (*(undefined * PTR32 *)((int)pvVar4 + 0x1dc) == (undefined *)0x0) {
          puVar3 = (undefined4 *)&REFG(undefined, 0x1351770);
        }
        else {
          puVar3 = (undefined4 *)F_00d321b0(*(undefined * PTR32 *)((int)pvVar4 + 0x1dc));
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        puVar3 = (undefined4 *)F_00667ad0(pvVar4,(uint)uVar1);
      }
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar3[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar3[2];
      (*(undefined4 *)(gen_frame + 0xc)) = puVar3[3];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar3[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar3[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar3[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar3[7];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar3[8];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar3[9];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar3[10];
      (*(undefined4 *)(gen_frame + 0x2c)) = puVar3[0xb];
      F_009f5660(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + param_1 * 0x120))),&(*(undefined4 *)(gen_frame + 0x0)),0xffffffff);
    }
  }
  pvVar4 = (undefined *)F_00a065a0();
  if (((char)pvVar4 != '\0') && ('\0' < *(char *)((int)this + 0xa8))) goto LAB_0062b819;
  if (*(undefined * PTR32 *)((int)this + 0x50) == (undefined *)0x0) {
    if (param_1 != 0) goto LAB_0062b7db;
LAB_0062b7e0: ;
    bVar2 = F_009f16f0(*(int *)((int)this + 0x4c) + param_1 * 0x120,1);
    pvVar4 = ((undefined *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    if (bVar2 != 0) {
      pvVar4 = (undefined *)F_009f69f0(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + param_1 * 0x120))));
    }
  }
  else {
    if (param_1 == 0) {
      F_009f8f80(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,0);
      goto LAB_0062b7e0;
    }
LAB_0062b7db: ;
    pvVar4 = this;
    if (param_1 == 1) goto LAB_0062b7e0;
  }
  if ((param_1 == 0) && (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0)) {
    pvVar4 = (undefined *)F_009f7590(*(undefined * PTR32 *)((int)this + 0x54));
  }
LAB_0062b819: ;
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return (uint)pvVar4;
}

/* ref: FUN_0062b830 */
uint F_0062b830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62b830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = (uint)*(ushort *)((int)this + 0x40);
  uVar4 = 0;
  if (uVar2 != 0) {
    iVar3 = 0;
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0x4c) + 0xbc + iVar3))) != 0) {
        F_0062b710(this,uVar4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x120;
    } while (uVar4 < uVar2);
  }
  uVar4 = F_00a065a0();
  if (((char)uVar4 == '\0') || (*(char *)((int)this + 0xa8) < '\x01')) {
    if (1 < uVar2) {
      cVar1 = *(char *)((int)this + 0x9c);
      uVar4 = CONCAT31((int3)(uVar4 >> 8),cVar1);
      if (-1 < cVar1) {
        uVar4 = F_009f7500(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,(int)cVar1);
      }
    }
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      uVar4 = F_009f08d0(*(undefined * PTR32 *)((int)this + 0x50));
    }
  }
  return uVar4;
}

/* ref: FUN_0062b8c0 */
uint F_0062b8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62b8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  short sVar1;
  undefined * this_00;
  int * piVar2;
  
  sVar1 = *(short *)(param_1 + 2);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((uint)*param_1 * 0x120 + *(int *)((int)this + 0x4c) + 0xbc)));
  if ((this_00 != (undefined *)0x0) && (-1 < sVar1)) {
    piVar2 = (int *)F_00d321b0(this_00);
    return sVar1 * 0x30 + *piVar2;
  }
  return 0x1351770;
}

/* ref: FUN_0062b910 */
uint F_0062b910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62b910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = F_006679e0(((undefined *)GEN_TOP(((param_2 & 0xff) * 0x120 + *(int *)((int)this + 0x4c)))),param_1,
                       param_2 >> 0x10);
  return uVar1;
}

/* ref: FUN_0062b940 */
uint F_0062b940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x62b940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint3 uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined * pvVar5;
  
  uVar3 = (uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (((*(int *)&gen_args[4]) < (int)uVar3) && ((int)(*(uint *)&gen_args[5]) < (int)uVar3)) {
    uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
    pvVar5 = *(undefined * PTR32 *)(uVar3 + (*(uint *)&gen_args[5]) * 4);
    if ((pvVar5 != (undefined *)0x0) &&
       ((uVar3 = F_009f9540(pvVar5,((byte *)(gen_frame + 0x4)),(*(undefined4 *)&gen_args[3]),(uint)((*(int *)&gen_args[4]) == 1),0), (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) != 0 &&
        ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
      uVar2 = F_009f5460(pvVar5,(*(undefined4 *)&gen_args[3]));
      uVar3 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),(uint)uVar2);
      uVar1 = GEN_PIECE(&(*(uint *)&gen_args[5]), 1, 3);
      (*(uint *)&gen_args[5]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[5]), 1, 3),*(undefined1 *)(uVar3 + 8)) & 0xffffff01;
      uVar4 = F_009f9330(pvVar5,(*(undefined4 *)&gen_args[3]),(*(uint *)&gen_args[5]));
      (*(uint *)&gen_args[5]) = (uint)uVar1 << 8;
      if ((*(byte *)(uVar3 + 8) & 1) != 0) {
        (*(uint *)&gen_args[5]) = CONCAT31(uVar1,1);
      }
      pvVar5 = (undefined *)F_009f5c90(((undefined *)GEN_TOP(((*(int *)&gen_args[4]) * 0x120 + *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x4c)))),
                                    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)),uVar4,(*(undefined4 *)&gen_args[2]),uVar3,(*(uint *)&gen_args[5]));
      uVar3 = 0;
      if (pvVar5 != (undefined *)0x0) {
        if ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) != 0) {
          F_009f0610(pvVar5,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)));
        }
        uVar3 = F_009f7d80(((undefined *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1]))),pvVar5);
      }
    }
  }
  return uVar3;
}

/* ref: FUN_0062ba30 */
uint F_0062ba30(unsigned int gen_a0)
{
  GEN_ENTER(0x62ba30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  short * psVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar4 = (uint)*(ushort *)((int)this + 0x40);
  uVar1 = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x0)) = 0;
  if (1 < uVar4) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0x4c) + 0x218)));
    iVar3 = (uVar4 - 2 >> 1) + 1;
    uVar1 = iVar3 * 2;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x8)) + 0)) = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x4)) + 0)) = 0;
    uVar6 = (ushort)(*(uint *)(gen_frame + 0x8));
    uVar5 = (ushort)(*(uint *)(gen_frame + 0x4));
    do {
      uVar5 = uVar5 + psVar2[-0x90];
      uVar6 = uVar6 + *psVar2;
      psVar2 = psVar2 + 0x120;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar6;
    (*(uint *)(gen_frame + 0x4)) = (uint)uVar5;
  }
  if (uVar1 < uVar4) {
    (*(uint *)(gen_frame + 0x0)) = (uint)*((ushort *)GEN_TOP((uVar1 * 0x120 + 0xf8 + *(int *)((int)this + 0x4c))));
  }
  return (*(uint *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0x4)) + (*(uint *)(gen_frame + 0x0));
}

/* ref: FUN_0062bac0 */
unsigned int F_0062bac0(unsigned int gen_a0)
{
  GEN_ENTER(0x62bac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  
  in_ecx = *(int *)((int)this + 0x54);
  if (in_ecx != 0) {
    F_009f1390(in_ecx);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),in_ecx);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  return 0;
}

/* ref: FUN_0062baf0 */
unsigned int F_0062baf0(unsigned int gen_a0)
{
  GEN_ENTER(0x62baf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x50);
  if (this_00 != (undefined *)0x0) {
    F_009f1970(this_00);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this_00);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return 0;
}

/* ref: FUN_0062bb20 */
uint F_0062bb20(unsigned int gen_a0)
{
  GEN_ENTER(0x62bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint in_ecx;
  undefined3 extraout_var = 0;
  uint uVar2;
  
  in_ecx = F_009f0740(*(undefined4 *)((int)this + 0x4c));
  uVar2 = 0;
  if (in_ecx != 0) {
    bVar1 = F_00503ac0(in_ecx);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar2 = F_00623470(this,in_ecx + 0xd0);
    }
  }
  return uVar2;
}

/* ref: FUN_0062bb50 */
uint F_0062bb50(unsigned int gen_a0)
{
  GEN_ENTER(0x62bb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 100) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 100));
    *(undefined4 *)((int)this + 100) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x5c));
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_0062bbb0 */
uint F_0062bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62bbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  short sVar1;
  uint uVar2;
  int * piVar3;
  undefined * puVar4;
  int iVar5;
  
  F_009f5660(((undefined *)GEN_TOP(((param_2 & 0xff) * 0x120 + *(int *)((int)this + 0x4c)))),param_1,
               param_2 >> 0x10);
  uVar2 = (uint)*(ushort *)((int)this + 0x40);
  if ((ushort)(byte)param_2 < *(ushort *)((int)this + 0x40)) {
    iVar5 = (param_2 & 0xff) * 0x120;
    param_1 = uVar2 - (param_2 & 0xff) & 0xffff;
    do {
      uVar2 = *(uint *)((int)this + 0x4c);
      sVar1 = *(short *)(iVar5 + 0xb2 + uVar2);
      if (0 < sVar1) {
        if (*(undefined * PTR32 *)(uVar2 + 0xbc) == (undefined *)0x0) {
          puVar4 = &REFG(undefined, 0x1351770);
        }
        else {
          piVar3 = (int *)F_00d321b0(*(undefined * PTR32 *)(uVar2 + 0xbc));
          puVar4 = (undefined *)(sVar1 * 0x30 + *piVar3);
        }
        uVar2 = F_009f5660(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar5))),puVar4,0);
      }
      iVar5 = iVar5 + 0x120;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  return uVar2;
}

/* ref: FUN_0062bc80 */
uint F_0062bc80(unsigned int gen_a0)
{
  GEN_ENTER(0x62bc80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  ushort uVar1;
  short sVar2;
  int * piVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar1 = *(ushort *)((int)this + 0x40);
  (*(uint *)(gen_frame + 0xc)) = 1;
  pvVar4 = this;
  if (1 < uVar1) {
    do {
      pvVar4 = *(undefined * PTR32 *)((int)this + 0x4c);
      iVar6 = (*(uint *)(gen_frame + 0xc)) * 0x120;
      if ((*(int *)((int)pvVar4 + iVar6 + 0xbc) != 0) &&
         (sVar2 = *(short *)((int)pvVar4 + iVar6 + 0xb2), -1 < sVar2)) {
        if ((*(uint *)(gen_frame + 0xc)) == 2) {
          if (*(undefined * PTR32 *)((int)pvVar4 + 0x1dc) == (undefined *)0x0) {
            puVar5 = (undefined4 *)&REFG(undefined, 0x1351770);
          }
          else {
            puVar5 = (undefined4 *)F_00d321b0(*(undefined * PTR32 *)((int)pvVar4 + 0x1dc));
            puVar5 = (undefined4 *)*puVar5;
          }
          (*(undefined4 *)(gen_frame + 0x10)) = *puVar5;
          (*(undefined4 *)(gen_frame + 0x14)) = puVar5[1];
          (*(undefined4 *)(gen_frame + 0x18)) = puVar5[2];
          (*(undefined4 *)(gen_frame + 0x1c)) = puVar5[3];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar5[4];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar5[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar5[6];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar5[7];
          uVar7 = puVar5[8];
          uVar8 = puVar5[9];
          uVar9 = puVar5[10];
          uVar10 = puVar5[0xb];
        }
        else {
          if (*(undefined * PTR32 *)((int)pvVar4 + 0xbc) == (undefined *)0x0) {
            puVar5 = (undefined4 *)&REFG(undefined, 0x1351770);
          }
          else {
            piVar3 = (int *)F_00d321b0(*(undefined * PTR32 *)((int)pvVar4 + 0xbc));
            puVar5 = (undefined4 *)(sVar2 * 0x30 + *piVar3);
          }
          (*(undefined4 *)(gen_frame + 0x10)) = *puVar5;
          (*(undefined4 *)(gen_frame + 0x14)) = puVar5[1];
          (*(undefined4 *)(gen_frame + 0x18)) = puVar5[2];
          (*(undefined4 *)(gen_frame + 0x1c)) = puVar5[3];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar5[4];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar5[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar5[6];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar5[7];
          uVar7 = puVar5[8];
          uVar8 = puVar5[9];
          uVar9 = puVar5[10];
          uVar10 = puVar5[0xb];
        }
        (*(undefined4 *)(gen_frame + 0x30)) = uVar7;
        (*(undefined4 *)(gen_frame + 0x34)) = uVar8;
        (*(undefined4 *)(gen_frame + 0x38)) = uVar9;
        (*(undefined4 *)(gen_frame + 0x3c)) = uVar10;
        pvVar4 = (undefined *)F_009f5660(((undefined *)GEN_TOP((*(int *)((int)this + 0x4c) + iVar6))),&(*(undefined4 *)(gen_frame + 0x10)),
                                      0xffffffff);
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
    } while ((*(uint *)(gen_frame + 0xc)) < uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)pvVar4;
}

/* ref: FUN_0062bda0 */
uint F_0062bda0(unsigned int gen_a0)
{
  GEN_ENTER(0x62bda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  uint uVar2;
  
  F_00623700(this);
  uVar2 = F_0062bc80(this);
  if (1 < *(ushort *)((int)this + 0x40)) {
    cVar1 = *(char *)((int)this + 0x9c);
    uVar2 = CONCAT31((int3)(uVar2 >> 8),cVar1);
    if (-1 < cVar1) {
      uVar2 = F_009f7500(*(undefined * PTR32 *)((int)this + 0x50),(int)this + 0x10,(int)cVar1);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar2 = F_009f08d0(*(undefined * PTR32 *)((int)this + 0x50));
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_0062bde0 */
byte F_0062bde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x62bde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  int iVar2;
  byte bVar3;
  
  if (param_1 != (undefined *)0x0) {
    piVar1 = (int *)((int)param_1 + 0x88);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (iVar2 == 2) {
      piVar1 = (int *)((int)param_1 + 0x8c);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar2 < 8) {
        bVar3 = F_00504d60(param_1,param_2,param_3);
        if (bVar3 == 0) {
          return 0;
        }
        F_00513f60(param_1,0,0);
        *(short *)((int)this + 0xe) = (short)param_3;
        *(undefined * PTR32 *)((int)this + 8) = param_1;
        *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0062be60 */
uint F_0062be60(unsigned int gen_a0)
{
  GEN_ENTER(0x62be60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  pvVar1 = this;
  if (REFG(void * PTR32, 0x1487c78) != (undefined *)0x0) {
    *(undefined * PTR32 *)((int)this + 0x28) = REFG(void * PTR32, 0x1487c78);
    *((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1487c78) + 0x2c))) = this;
    pvVar1 = *(undefined * PTR32 *)&REFG(undefined, 0x1487c74);
  }
  *(undefined * PTR32 *)&REFG(undefined, 0x1487c74) = pvVar1;
  REFG(void * PTR32, 0x1487c78) = this;
  F_004a0020(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
  *(undefined4 *)((int)this + 0x80) = 0;
  F_00c48350((undefined *)((int)this + 0x30),0,0x50);
  return (uint)this;
}

/* ref: FUN_0062bec0 */
byte F_0062bec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x62bec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  ushort uVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  ushort * puVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = param_3;
  puVar12 = (undefined4 *)(uint)*((byte *)GEN_TOP(((int)((int)(uintptr_t)param_3) * 0x84 + 0x80 + *(int *)(param_2 + 0xd8))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x5c)) = puVar12;
  (*(int * PTR32 *)(gen_frame + 0x4c)) = param_1;
  (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = param_4;
  uVar4 = F_004dcd60((int)((int)(uintptr_t)puVar12) * 0x30,2,0);
  *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x68) = uVar4;
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                     (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),
                      ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) * 2 + 0xfU & 0xfffffff0) + (int)((int)(uintptr_t)puVar12) * 0x30,0x10)));
  puVar12 = puVar5 + (int)((int)(uintptr_t)puVar12) * 0xc;
  *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x70) = puVar5;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar12;
  *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x74) = puVar12;
  if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x68) == 0) || (puVar12 == (undefined4 *)0x0)) {
    piVar11 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x80);
    if (piVar11 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11);
      *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x80) = 0;
    }
    bVar3 = 0;
  }
  else {
    puVar12 = (undefined4 *)0x0;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) != (undefined4 *)0x0) {
      uVar4 = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) & 0xffff;
      do {
        uVar6 = F_00623160(param_1,*(int *)(param_2 + 0xa8) + 8 +
                                     *((int *)GEN_TOP((*(int *)(param_2 + 0xd4) +
                                             (uint)*((ushort *)GEN_TOP((*(int *)(param_2 + 0xd8) +
                                                    (((uint)puVar12 & 0xffff) + uVar4 * 0x42) * 2))) *
                                             4))));
        *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + (int)((int)(uintptr_t)puVar12) * 2) = (short)uVar6;
        if ((short)uVar6 == -1) {
          uVar6 = F_00623160(param_1,"j_kao");
          *(short *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + (int)((int)(uintptr_t)puVar12) * 2) = (short)uVar6;
          if ((short)uVar6 == -1) {
            *(undefined2 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + (int)((int)(uintptr_t)puVar12) * 2) = 0;
          }
        }
        puVar12 = (undefined4 *)((int)puVar12 + 1);
      } while (puVar12 < (*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
    }
    piVar11 = param_1;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x54)) == (undefined4 *)0x0) {
      puVar12 = (undefined4 *)0x0;
      if (3 < (int)(*(undefined4 * PTR32 *)(gen_frame + 0x5c))) {
        puVar10 = (ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x44)) + 1);
        (*(int *)(gen_frame + 0xc)) = ((uint)((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) + -1) >> 2) + 1;
        (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar5 + 0x18;
        puVar12 = (undefined4 *)((*(int *)(gen_frame + 0xc)) * 4);
        (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar12;
        do {
          iVar9 = *((int *)GEN_TOP((piVar11[0x11] + (uint)(puVar10[-2] >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar7 = &REFG(float, 0x1302d00);
          }
          else {
            uVar4 = puVar10[-2] & 0xfff;
            if (uVar4 < *(uint *)(iVar9 + 0xa4)) {
              puVar7 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          ((undefined4 *)(gen_frame + 0x10))[0] = *puVar7;
          ((undefined4 *)(gen_frame + 0x10))[1] = puVar7[4];
          ((undefined4 *)(gen_frame + 0x10))[2] = puVar7[8];
          ((undefined4 *)(gen_frame + 0x10))[3] = puVar7[0xc];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar7[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar7[9];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar7[0xd];
          (*(undefined4 *)(gen_frame + 0x30)) = puVar7[2];
          (*(undefined4 *)(gen_frame + 0x34)) = puVar7[6];
          (*(undefined4 *)(gen_frame + 0x38)) = puVar7[10];
          (*(undefined4 *)(gen_frame + 0x3c)) = puVar7[0xe];
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + -0x18;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          iVar9 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x4c))[0x11] + (uint)(puVar10[-1] >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar7 = &REFG(float, 0x1302d00);
          }
          else {
            uVar4 = puVar10[-1] & 0xfff;
            if (uVar4 < *(uint *)(iVar9 + 0xa4)) {
              puVar7 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          ((undefined4 *)(gen_frame + 0x10))[0] = *puVar7;
          ((undefined4 *)(gen_frame + 0x10))[1] = puVar7[4];
          ((undefined4 *)(gen_frame + 0x10))[2] = puVar7[8];
          ((undefined4 *)(gen_frame + 0x10))[3] = puVar7[0xc];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar7[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar7[9];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar7[0xd];
          (*(undefined4 *)(gen_frame + 0x30)) = puVar7[2];
          (*(undefined4 *)(gen_frame + 0x34)) = puVar7[6];
          (*(undefined4 *)(gen_frame + 0x38)) = puVar7[10];
          (*(undefined4 *)(gen_frame + 0x3c)) = puVar7[0xe];
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + -0xc;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          iVar9 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x4c))[0x11] + (uint)(*puVar10 >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar7 = &REFG(float, 0x1302d00);
          }
          else {
            uVar4 = *puVar10 & 0xfff;
            if (uVar4 < *(uint *)(iVar9 + 0xa4)) {
              puVar7 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          ((undefined4 *)(gen_frame + 0x10))[0] = *puVar7;
          ((undefined4 *)(gen_frame + 0x10))[1] = puVar7[4];
          ((undefined4 *)(gen_frame + 0x10))[2] = puVar7[8];
          ((undefined4 *)(gen_frame + 0x10))[3] = puVar7[0xc];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar7[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar7[9];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar7[0xd];
          (*(undefined4 *)(gen_frame + 0x30)) = puVar7[2];
          (*(undefined4 *)(gen_frame + 0x34)) = puVar7[6];
          (*(undefined4 *)(gen_frame + 0x38)) = puVar7[10];
          (*(undefined4 *)(gen_frame + 0x3c)) = puVar7[0xe];
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          iVar9 = *((int *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x4c))[0x11] + (uint)(puVar10[1] >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar7 = &REFG(float, 0x1302d00);
          }
          else {
            uVar4 = puVar10[1] & 0xfff;
            if (uVar4 < *(uint *)(iVar9 + 0xa4)) {
              puVar7 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          ((undefined4 *)(gen_frame + 0x10))[0] = *puVar7;
          ((undefined4 *)(gen_frame + 0x10))[1] = puVar7[4];
          ((undefined4 *)(gen_frame + 0x10))[2] = puVar7[8];
          ((undefined4 *)(gen_frame + 0x10))[3] = puVar7[0xc];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar7[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar7[9];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar7[0xd];
          (*(undefined4 *)(gen_frame + 0x30)) = puVar7[2];
          (*(undefined4 *)(gen_frame + 0x34)) = puVar7[6];
          (*(undefined4 *)(gen_frame + 0x38)) = puVar7[10];
          (*(undefined4 *)(gen_frame + 0x3c)) = puVar7[0xe];
          puVar10 = puVar10 + 4;
          (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0xc)) + -1;
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 0xc;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 0x30;
          piVar11 = (*(int * PTR32 *)(gen_frame + 0x4c));
        } while ((*(int *)(gen_frame + 0xc)) != 0);
      }
      if (puVar12 < (*(undefined4 * PTR32 *)(gen_frame + 0x5c))) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar5 + (int)((int)(uintptr_t)puVar12) * 0xc;
        puVar5 = puVar5 + (int)((int)(uintptr_t)puVar12) * 0xc;
        do {
          uVar1 = *(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + (int)((int)(uintptr_t)puVar12) * 2);
          iVar9 = *((int *)GEN_TOP((piVar11[0x11] + (uint)(uVar1 >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar7 = &REFG(float, 0x1302d00);
          }
          else {
            uVar4 = uVar1 & 0xfff;
            if (uVar4 < *(uint *)(iVar9 + 0xa4)) {
              puVar7 = ((undefined4 *)GEN_TOP((uVar4 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar7 = (undefined4 *)0x0;
            }
          }
          ((undefined4 *)(gen_frame + 0x10))[0] = *puVar7;
          (*(undefined4 * PTR32 *)(gen_frame + 0x54)) = puVar5 + 0xc;
          ((undefined4 *)(gen_frame + 0x10))[1] = puVar7[4];
          ((undefined4 *)(gen_frame + 0x10))[2] = puVar7[8];
          ((undefined4 *)(gen_frame + 0x10))[3] = puVar7[0xc];
          (*(undefined4 *)(gen_frame + 0x20)) = puVar7[1];
          (*(undefined4 *)(gen_frame + 0x24)) = puVar7[5];
          (*(undefined4 *)(gen_frame + 0x28)) = puVar7[9];
          (*(undefined4 *)(gen_frame + 0x2c)) = puVar7[0xd];
          (*(undefined4 *)(gen_frame + 0x30)) = puVar7[2];
          (*(undefined4 *)(gen_frame + 0x34)) = puVar7[6];
          (*(undefined4 *)(gen_frame + 0x38)) = puVar7[10];
          puVar12 = (undefined4 *)((int)puVar12 + 1);
          (*(undefined4 *)(gen_frame + 0x3c)) = puVar7[0xe];
          puVar7 = ((undefined4 *)(gen_frame + 0x10));
          puVar13 = puVar5;
          for (iVar9 = 0xc; iVar9 != 0; iVar9 = iVar9 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          piVar11 = (*(int * PTR32 *)(gen_frame + 0x4c));
          puVar5 = puVar5 + 0xc;
        } while (puVar12 < (*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
      }
    }
    else {
      (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)0x0;
      if ((*(undefined4 * PTR32 *)(gen_frame + 0x5c)) != (undefined4 *)0x0) {
        uVar4 = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x48)) & 0xffff;
        (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = puVar5;
        do {
          iVar9 = *((int *)GEN_TOP((*(int *)(param_2 + 0xd4) +
                          (uint)*((ushort *)GEN_TOP((*(int *)(param_2 + 0xd8) +
                                 (((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) & 0xffff) + uVar4 * 0x42) * 2))) * 4))) + 8 +
                  *(int *)(param_2 + 0xa8);
          if ((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x54))[2] == (undefined *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = F_00504f40((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x54))[2],(uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 3),
                                 (uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 0xe),iVar9);
            if (uVar6 == 0) {
              uVar6 = F_00504ff0((undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0x54))[2],(uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 3),
                                   (uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x54)) + 0xe),iVar9,((undefined1 *)(gen_frame + 0x60)));
            }
          }
          uVar1 = *(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x44)) + (int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x58))) * 2);
          iVar9 = *((int *)GEN_TOP((piVar11[0x11] + (uint)(uVar1 >> 0xc) * 4)));
          if (iVar9 == 0) {
            puVar5 = &REFG(float, 0x1302d00);
          }
          else {
            uVar8 = uVar1 & 0xfff;
            if (uVar8 < *(uint *)(iVar9 + 0xa4)) {
              puVar5 = ((undefined4 *)GEN_TOP((uVar8 * 0x40 + *(int *)(iVar9 + 0xcc))));
            }
            else {
              puVar5 = (undefined4 *)0x0;
            }
          }
          if (uVar6 == 0) {
            ((undefined4 *)(gen_frame + 0x10))[0] = *puVar5;
            ((undefined4 *)(gen_frame + 0x10))[1] = puVar5[4];
            ((undefined4 *)(gen_frame + 0x10))[2] = puVar5[8];
            ((undefined4 *)(gen_frame + 0x10))[3] = puVar5[0xc];
            (*(undefined4 *)(gen_frame + 0x20)) = puVar5[1];
            (*(undefined4 *)(gen_frame + 0x24)) = puVar5[5];
            (*(undefined4 *)(gen_frame + 0x28)) = puVar5[9];
            (*(undefined4 *)(gen_frame + 0x2c)) = puVar5[0xd];
            (*(undefined4 *)(gen_frame + 0x30)) = puVar5[2];
            (*(undefined4 *)(gen_frame + 0x34)) = puVar5[6];
            (*(undefined4 *)(gen_frame + 0x38)) = puVar5[10];
            (*(undefined4 *)(gen_frame + 0x3c)) = puVar5[0xe];
            puVar5 = ((undefined4 *)(gen_frame + 0x10));
            puVar12 = (*(undefined4 * PTR32 *)(gen_frame + 0x48));
            for (iVar9 = 0xc; piVar11 = (*(int * PTR32 *)(gen_frame + 0x4c)), iVar9 != 0; iVar9 = iVar9 + -1) {
              *puVar12 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar12 = puVar12 + 1;
            }
          }
          else {
            F_004f35b0((uint)(*(undefined4 * PTR32 *)(gen_frame + 0x48)),uVar6,(uint)puVar5);
          }
          (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 0xc;
          puVar5 = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x58)) + 1);
          (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = puVar5;
        } while (puVar5 < (*(undefined4 * PTR32 *)(gen_frame + 0x5c)));
      }
    }
    if (piVar11 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar11 + 8))(piVar11);
    }
    piVar2 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x80);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x80) = piVar11;
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x60) = piVar11[0x13];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x30) = piVar11[4];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x34) = piVar11[5];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x38) = piVar11[6];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x40) = piVar11[8];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x44) = piVar11[9];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x48) = piVar11[10];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x4c) = piVar11[0xb];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x50) = piVar11[0xc];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x54) = piVar11[0xd];
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x58) = piVar11[0xe];
    *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 100) = (uint)*(ushort *)(piVar11 + 0x10);
    *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x6c) = 0x1e;
    *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x78) = (*(undefined4 * PTR32 *)(gen_frame + 0x5c));
    bVar3 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return bVar3;
}

/* ref: FUN_0062c700 */
uint F_0062c700(unsigned int gen_a0)
{
  GEN_ENTER(0x62c700u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  puVar1 = in_ecx;
  if (REFG(undefined4 * PTR32, 0x1487c80) != (undefined4 *)0x0) {
    in_ecx[10] = REFG(undefined4 * PTR32, 0x1487c80);
    *((undefined4 * PTR32 *)GEN_TOP(((int)REFG(undefined4 * PTR32, 0x1487c80) + 0x2c))) = in_ecx;
    puVar1 = *(undefined4 * PTR32 *)&REFG(undefined, 0x1487c7c);
  }
  *(undefined4 * PTR32 *)&REFG(undefined, 0x1487c7c) = puVar1;
  REFG(undefined4 * PTR32, 0x1487c80) = in_ecx;
  F_004a0020(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0062c750 */
uint F_0062c750(unsigned int gen_a0)
{
  GEN_ENTER(0x62c750u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(REFG(int, 0x1371288) + 0xcc + param_1 * 4);
}

/* ref: FUN_0062c770 */
uint F_0062c770(unsigned int gen_a0)
{
  GEN_ENTER(0x62c770u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1[1] != 0) {
    uVar2 = *(int *)(param_1[1] + 8) + 0x1a;
    if ((uVar2 == *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) +
                                    0x1a8))) + 8))) >> 0x1b) &&
       (puVar1 = (undefined4 *)*param_1, uVar2 = 0, puVar1 != (undefined4 *)0x0)) {
      uVar2 = (*(code *)*puVar1)(puVar1[1],puVar1 + 2,0);
    }
  }
  return uVar2;
}

/* ref: FUN_0062c820 */
byte F_0062c820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62c820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  undefined * _Dst;
  uint uVar9;
  uint uVar10;
  float * pfVar11;
  uint uVar12;
  undefined4 * puVar13;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar4 = *((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0xc + *(int *)(param_1 + 0xa8))));
  *(ushort *)((int)this + 0x14) = uVar4;
  _Dst = (undefined *)F_00406bb0((uint)uVar4 * 4,0,0);
  *(undefined * PTR32 *)((int)this + 0x18) = _Dst;
  F_00c48350(_Dst,0,(uint)*(ushort *)((int)this + 0x14) * 4);
  uVar8 = 0;
  if (uVar4 != 0) {
    do {
      iVar6 = (uint)uVar8 * 4;
      iVar5 = *((int *)GEN_TOP((iVar6 + *(int *)(param_1 + 0x108))));
      uVar10 = *(uint *)(iVar5 + 0x10);
      uVar9 = 0;
      uVar12 = 0;
      if (uVar10 != 0) {
        do {
          if (uVar9 < *(uint *)(iVar5 + 0x10)) {
            puVar13 = ((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0xc) + uVar9 * 4)));
          }
          else {
            puVar13 = (undefined4 *)0x0;
          }
          (&(*(undefined4 *)(gen_frame + 0x10)))[uVar9] = *puVar13;
          uVar9 = uVar9 + 1;
          uVar12 = uVar10;
        } while (uVar9 < uVar10);
      }
      *(undefined1 *)(&(*(undefined4 *)(gen_frame + 0x10)) + uVar12) = 2;
      *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x10)) + uVar12 * 4 + 1) = 0;
      *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x10)) + uVar12 * 4 + 2) = 0x74;
      *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x10)) + uVar12 * 4 + 3) = 0xc;
      uVar10 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x10)),uVar12 + 1);
      *((uint *)GEN_TOP((iVar6 + *(int *)((int)this + 0x18)))) = uVar10;
      if (*((int *)GEN_TOP((iVar6 + *(int *)((int)this + 0x18)))) == 0) {
        bVar7 = 0;
        goto LAB_0062c9d3;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar4);
  }
  pfVar11 = *(float * PTR32 *)(param_1 + 0xf4);
  if (pfVar11 == (float *)0x0) {
    pfVar11 = *(float * PTR32 *)(param_1 + 0xf0);
  }
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[6] - (float10)pfVar11[2]) *
                 (float10)(float)((float10)pfVar11[4] - (float10)*pfVar11))));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[5] - (float10)pfVar11[1]) *
                 (float10)(float)((float10)pfVar11[4] - (float10)*pfVar11))));
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)pfVar11[6] - (float10)pfVar11[2]) *
                 (float10)(float)((float10)pfVar11[5] - (float10)pfVar11[1]))));
  (*(float *)(gen_frame + 0xc)) = fVar3;
  if ((float10)fVar3 < (float10)fVar1) {
    (*(float *)(gen_frame + 0xc)) = fVar1;
  }
  if ((float10)(*(float *)(gen_frame + 0xc)) < (float10)fVar2) {
    (*(float *)(gen_frame + 0xc)) = fVar2;
  }
  *(bool *)((int)this + 0x28) = *(double *)&REFG(undefined, 0x10943d8) < (double)(*(float *)(gen_frame + 0xc));
  bVar7 = 1;
LAB_0062c9d3: ;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return bVar7;
}

/* ref: FUN_0062c9f0 */
uint F_0062c9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x62c9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 * puVar8;
  float * pfVar9;
  float fVar10;
  undefined4 uVar11;
  
  iVar5 = REFG(int, 0x137128c);
  iVar4 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = this;
  (*(int *)(gen_frame + 0x24)) = iVar4;
  fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x264) * (float10)*(double *)&REFG(undefined, 0x1094818) +
                  (float10)*(float *)(REFG(int, 0x137128c) + 0x1738) * (float10)REFG(double, 0x1094800))));
  ((float *)(gen_frame + 0x28))[0] = fVar10;
  *(float *)((int)this + 0x264) = fVar10;
  if (*(char *)((int)this + 0x288) == '\0') {
    cVar6 = '\0';
    fVar10 = REFG(float, 0x1087f04);
  }
  else {
    ((float *)(gen_frame + 0x28))[0] = ((float)GEN_TOF(SQRT((float10)fVar10)));
    pfVar9 = ((float *)(gen_frame + 0x28));
    fVar10 = (float)((float10)((float)GEN_TOF(SQRT((float10)fVar10))) * (float10)*(float *)&REFG(undefined, 0x1320510));
    ((float *)(gen_frame + 0x28))[0] = fVar10;
    if (!((float10)fVar10 < (float10)REFG(float, 0x1320518))) {
      pfVar9 = &REFG(float, 0x1320518);
    }
    if (!((float10)REFG(float, 0x1320514) < (float10)*pfVar9)) {
      pfVar9 = &REFG(float, 0x1320514);
    }
    fVar10 = *pfVar9;
    cVar6 = *(char *)((int)this + 0x288);
  }
  *(float *)((int)this + 0x268) = fVar10;
  fVar10 = REFG(float, 0x1087f04);
  if (cVar6 != '\0') {
    pfVar9 = ((float *)(gen_frame + 0x28));
    fVar10 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x264) * (float10)*(float *)&REFG(undefined, 0x132051c))));
    ((float *)(gen_frame + 0x28))[0] = fVar10;
    if (!((float10)fVar10 < (float10)REFG(float, 0x1320524))) {
      pfVar9 = &REFG(float, 0x1320524);
    }
    if (!((float10)REFG(float, 0x1320520) < (float10)*pfVar9)) {
      pfVar9 = &REFG(float, 0x1320520);
    }
    fVar10 = *pfVar9;
  }
  *(float *)((int)this + 0x26c) = fVar10;
  ((float *)(gen_frame + 0x28))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x28))[0], REFG(float, 0x1094884));
  pfVar9 = ((float *)(gen_frame + 0x28));
  if (!((double)*(float *)((int)this + 0x268) < REFG(double, 0x1094800))) {
    pfVar9 = (float *)((int)this + 0x268);
  }
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  *(float *)(iVar5 + 0x1654) = (float)((float10)1 / (float10)*pfVar9);
  uVar7 = *(uint *)(REFG(int, 0x1371290) + 0x7e0);
  *(uint *)((int)this + 0x280) = uVar7;
  (*(uint *)(gen_frame + 0x18)) = uVar7 ^ REFG(uint, 0x10920d0);
  uVar7 = F_004ee9b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar4 + 0x50);
  ((float *)(gen_frame + 0x28))[0] = *(float *)(uVar7 + 8);
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  pfVar9 = &(*(float *)(gen_frame + 0x1c));
  if (!((float10)1 < (float10)*(float *)(uVar7 + 8))) {
    pfVar9 = ((float *)(gen_frame + 0x28));
  }
  *(float *)((int)this + 0x284) = *pfVar9;
  puVar8 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  if (puVar8 != (undefined4 *)0x0) {
    if ((*(uint *)(iVar5 + 0x1514) >> 0xd & 1) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(iVar5 + 0x165c);
    }
    uVar1 = *(undefined4 *)(iVar5 + 0x1658);
    uVar2 = *(undefined4 *)(iVar5 + 0x1654);
    uVar3 = *(undefined4 *)((int)this + 0x268);
    *puVar8 = uVar11;
    puVar8[1] = uVar1;
    puVar8[2] = uVar2;
    puVar8[3] = uVar3;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24))) = 0;
  }
  puVar8 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x18),0,0,2);
  if (puVar8 != (undefined4 *)0x0) {
    F_00675f70(&(*(uint *)(gen_frame + 0x18)),*(float *)((*(int *)(gen_frame + 0x24)) + 0xac),*(float *)((*(int *)(gen_frame + 0x24)) + 0xb0),(float)(float10)0
                 ,(float)(float10)1);
    uVar11 = *(undefined4 *)(iVar5 + 0x1568);
    uVar1 = *(undefined4 *)(iVar5 + 0x156c);
    uVar2 = *(undefined4 *)(iVar5 + 0x1570);
    *puVar8 = *(undefined4 *)(iVar5 + 0x1564);
    puVar8[1] = uVar11;
    puVar8[2] = uVar1;
    puVar8[3] = uVar2;
    uVar11 = *(undefined4 *)(iVar5 + 0x157c);
    uVar1 = *(undefined4 *)(iVar5 + 0x1578);
    uVar2 = *(undefined4 *)(iVar5 + 0x1580);
    puVar8[4] = *(undefined4 *)(iVar5 + 0x1574);
    puVar8[5] = uVar11;
    puVar8[6] = uVar1;
    puVar8[7] = uVar2;
    puVar8[8] = (*(uint *)(gen_frame + 0x18));
    puVar8[9] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x1c)));
    puVar8[10] = 0;
    puVar8[0xb] = 0;
    *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x18) + 0x24))) = 0;
  }
  uVar7 = F_00626610((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 0x70));
  return uVar7;
}

/* ref: FUN_0062cd00 */
uint F_0062cd00(unsigned int gen_a0)
{
  GEN_ENTER(0x62cd00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  if (0x19 < uVar1) {
    if (uVar1 < 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0xe4);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0xdc);
    }
    if (uVar1 == 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0x24);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_0062cd80 */
uint F_0062cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62cd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  if (0x19 < uVar1) {
    if (uVar1 < 0x1e) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28c) + 0xfc)));
    }
    if (uVar1 == 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0x28);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0x14);
    }
  }
  return 0;
}

/* ref: FUN_0062cdf0 */
uint F_0062cdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62cdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  if (0x19 < uVar1) {
    if (uVar1 < 0x1e) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28c) + 0xfc)));
    }
    if (uVar1 == 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0x2c);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_0062ce60 */
uint F_0062ce60(unsigned int gen_a0)
{
  GEN_ENTER(0x62ce60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8))) &
      0xf8000000) != 0xf0000000) {
    return 0;
  }
  if ((char)param_1 != '\0') {
    return *(uint *)(REFG(int, 0x1371288) + 0x44);
  }
  return *(uint *)(REFG(int, 0x1371288) + 0x40);
}

/* ref: FUN_0062ceb0 */
uint F_0062ceb0(unsigned int gen_a0)
{
  GEN_ENTER(0x62ceb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  switch((unsigned int)(uintptr_t)(uVar1)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 3: ;
    return *(uint *)(REFG(int, 0x1371288) + 0x60);
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
    return *(uint *)(REFG(int, 0x1371288) + 0x78);
  default: ;
    return 0;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
    return *(uint *)(REFG(int, 0x1371288) + 100 + uVar1 * 4);
  case 0x1e: ;
    break;
  }
  if ((char)param_1 != '\0') {
    return *(uint *)(REFG(int, 0x1371288) + 0x30);
  }
  return *(uint *)(REFG(int, 0x1371288) + 0x1c);
}

/* ref: FUN_0062cf70 */
uint F_0062cf70(unsigned int gen_a0)
{
  GEN_ENTER(0x62cf70u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  if (0x19 < uVar1) {
    if (uVar1 < 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0xe8);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0xe0);
    }
    if (uVar1 == 0x1e) {
      if ((char)param_1 != '\0') {
        return *(uint *)(REFG(int, 0x1371288) + 0x34);
      }
      return *(uint *)(REFG(int, 0x1371288) + 0x20);
    }
  }
  return 0;
}

/* ref: FUN_0062d020 */
uint F_0062d020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
           *(int *)((int)this + 4) * 4))) = param_1;
  return param_1;
}

/* ref: FUN_0062d050 */
uint F_0062d050(unsigned int gen_a0)
{
  GEN_ENTER(0x62d050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0xc) * 4))) = *(undefined4 *)((int)this + 0x10);
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x40) * 8))) =
       *(uint *)((int)this + 0x60) & 0xfffffff;
  uVar2 = F_006788d0(REFG(undefined4, 0x137128c));
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x40) * 8))) = uVar2;
  return uVar2;
}

/* ref: FUN_0062d0a0 */
unsigned int F_0062d0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62d0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  
  if ((char)param_1 == '\0') {
    if ((char)param_2 == '\0') {
      return 0;
    }
    iVar1 = 1;
  }
  else if ((char)param_2 == '\0') {
    iVar1 = 0;
  }
  else {
    iVar1 = 2;
  }
  *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
   *(int *)((int)this + 0x28) * 4))) = *(undefined4 *)((int)this + iVar1 * 4 + 0x1c);
  return 0;
}

/* ref: FUN_0062d0f0 */
uint F_0062d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0x120);
    *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0xa8 +
             *(int *)((int)this + 0x2c) * 4))) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0062d180 */
unsigned int F_0062d180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62d180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  
  iVar5 = param_2;
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar3 = *(int *)(iVar2 + 0x1a8);
  iVar4 = *((int *)GEN_TOP((*(int *)(param_2 + 8) + 0xa4)));
  iVar6 = 0;
  if (iVar4 != 0) {
    iVar6 = *(int *)(iVar4 + 0x98);
  }
  iVar4 = *(int *)(param_1 + 4);
  if (iVar6 == iVar4) {
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0x10);
    }
  }
  else if (iVar4 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar4 + 0x80);
  }
  *((undefined4 *)GEN_TOP((iVar3 + 0xa8 + *(int *)((int)this + 0x30) * 4))) = *(undefined4 *)(param_2 + 0x14);
  uVar1 = *(ushort *)(param_2 + 0x1c);
  uVar8 = 0;
  if (uVar1 != 0) {
    param_2 = 0;
    do {
      if (uVar8 < *(ushort *)(iVar5 + 0x1c)) {
        piVar7 = ((int *)GEN_TOP((*(int *)(iVar5 + 0x18) + param_2)));
      }
      else {
        piVar7 = (int *)0x0;
      }
      if ((*piVar7 != -1) && (piVar7[1] != 0)) {
        *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0x2ac + *piVar7 * 8))) = piVar7[2] & 0xfffffff;
        *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0x2a8 + *piVar7 * 8))) =
             *(undefined4 *)(piVar7[1] + 0xfc);
      }
      param_2 = param_2 + 0xc;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  return 0;
}

/* ref: FUN_0062d260 */
uint F_0062d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if ((*(uint *)(iVar1 + 8) & 0xf8000000) == 0xf0000000) {
    if ((char)param_1 == '\0') {
      uVar2 = *(uint *)((int)this + 0x60);
    }
    else {
      uVar2 = *(uint *)((int)this + 100);
    }
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x34) * 8))) = uVar2 & 0xfffffff;
  }
  uVar2 = F_0062cd00(param_1);
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x34) * 8))) = uVar2;
  return uVar2;
}

/* ref: FUN_0062d2d0 */
uint F_0062d2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  if ((*(uint *)(iVar1 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x38) * 8))) =
         *(uint *)((int)this + 100) & 0xfffffff;
    if ((char)param_1 == '\0') {
      uVar2 = *(uint *)((int)this + 0x60);
    }
    else {
      uVar2 = *(uint *)((int)this + 100);
    }
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x3c) * 8))) = uVar2 & 0xfffffff;
  }
  uVar2 = F_0062cd80(this,param_1);
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x38) * 8))) = uVar2;
  uVar2 = F_0062cdf0(this,param_1);
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x3c) * 8))) = uVar2;
  return uVar2;
}

/* ref: FUN_0062d3d0 */
byte F_0062d3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x62d3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = F_00b52710("TransformView",0xd,0);
  uVar3 = F_00b52710("TransformViewRigid",0x12,0);
  *(uint *)((int)this + 0x20) = uVar2;
  *(uint *)((int)this + 0x24) = uVar3;
  uVar2 = F_00b52710("TransformView",0xd,0);
  uVar3 = F_00b52710("TransformViewSkin",0x11,0);
  *(uint *)((int)this + 0x2c) = uVar2;
  *(uint *)((int)this + 0x30) = uVar3;
  uVar2 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar3 = F_00b52710("ApplyDitherClipOff",0x12,0);
  *(uint *)((int)this + 0x38) = uVar2;
  *(uint *)((int)this + 0x3c) = uVar3;
  uVar2 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar3 = F_00b52710("ApplyDitherClipOn",0x11,0);
  *(uint *)((int)this + 0x44) = uVar2;
  *(uint *)((int)this + 0x48) = uVar3;
  uVar2 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x50) = uVar2;
  uVar2 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x54) = uVar2;
  uVar2 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x5c) = uVar2;
  uVar2 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *(uint *)((int)this + 0x60) = uVar2;
  uVar2 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x68) = uVar2;
  uVar2 = F_00b52710("SUB_VIEW_CUBE_0",0xf,0);
  *(uint *)((int)this + 0x6c) = uVar2;
  F_004ff310(((undefined1 *)(gen_frame + 0x4)),0,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746578;
  uVar2 = F_00513d70(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),"common/graphics/texture/-dither.tex",0,0,0);
  *(uint *)((int)this + 0x70) = uVar2;
  if (uVar2 != 0) {
    piVar4 = (int *)(uVar2 + 0x8c);
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4;
    UNLOCK();
    if (iVar1 < 8) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0062d530 */
uint F_0062d530(unsigned int gen_a0)
{
  GEN_ENTER(0x62d530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint * this_00;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  this_00 = (uint *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x74),0,0x10,2);
  uVar4 = REFG(float, 0x1087f04);
  uVar3 = 0;
  if (this_00 != (uint *)0x0) {
    if (*(int *)(REFG(int, 0x1371284) + 0x14) == 0) {
      this_00[1] = GEN_FLT_TO(this_00[1], REFG(float, 0x1087f04));
      this_00[2] = uVar4;
    }
    else {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(uint *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
      puVar2 = (uint *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),
                                    *((int *)GEN_TOP((*(int *)(REFG(int, 0x1371284) + 0x14) + 0x10))) + 0x10);
      uVar3 = puVar2[2] ^ REFG(uint, 0x10920d0);
      uVar4 = *puVar2 ^ REFG(uint, 0x10920d0);
      this_00[1] = puVar2[1] ^ REFG(uint, 0x10920d0);
      this_00[2] = uVar3;
    }
    *this_00 = uVar4;
    F_004eebf0(this_00,iVar1 + 0x10);
    uVar3 = F_0046f390(this_00);
    *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x74) + 0x24))) = 0;
  }
  return uVar3;
}

/* ref: FUN_0062d620 */
uint F_0062d620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x62d620u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0x3c))) =
       ((*(int *)(param_3 + 0xc) * 4 ^ REFG(undefined4, 0x1302370)) & 4 ^ REFG(undefined4, 0x1302370)) & 0x7fffffff;
  *param_1 = 0;
  *param_1 = ((*(byte *)(param_3 + 0xc) & 0x30) != 0 & (byte)(*(uint *)(param_2 + 0x10) >> 6)) != 0
             | *param_1 & 0xfe;
  *param_1 = *param_1 | 2;
  puVar1 = *(undefined4 * PTR32 *)(param_2 + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    (*(int *)(gen_frame + 0x0)) = param_2;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4;
    (*(byte * PTR32 *)(gen_frame + 0x8)) = param_1;
    (*(code *)*puVar1)(puVar1[1],puVar1 + 2,&(*(int *)(gen_frame + 0x0)));
  }
  return (uint)param_1;
}

/* ref: FUN_0062d6c0 */
uint F_0062d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  uVar2 = F_00623ae0(this,param_1);
  if (uVar2 == 0xffffffff) {
    uVar2 = F_00623b60(this);
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    F_00513f60(param_1,0,0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) = param_1;
    bVar1 = F_0062c820(((undefined *)GEN_TOP((uVar2 * 0x2c + *(int *)((int)this + 4)))),param_1);
    if (bVar1 == 0) {
      F_0050c620(param_1,0,0);
      return uVar2;
    }
  }
  piVar3 = ((int *)GEN_TOP((uVar2 * 0x2c + *(int *)((int)this + 4))));
  *piVar3 = *piVar3 + 1;
  return uVar2;
}

/* ref: FUN_0062d740 */
unsigned int F_0062d740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62d740u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_10;
  int local_8;
  
  iVar2 = (*(uint *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) >> 5;
  iVar3 = 0;
  local_10 = 0;
  if (uVar6 != 0) {
    local_8 = 2;
    do {
      uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + local_10 * 4)));
      if (uVar1 != 0) {
        uVar7 = 0;
        (*(uint *)&gen_args[1]) = 1;
        do {
          if (((uVar1 & (*(uint *)&gen_args[1])) != 0) &&
             (iVar4 = (local_8 + -2 + uVar7) * 0x2c + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
             (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) & 0xffffffe0U) != 0)) {
            *(int *)(iVar2 + iVar3 * 8) = iVar4;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + (local_8 + -2 + uVar7) * 4)));
            iVar3 = iVar3 + 1;
          }
          uVar5 = (*(uint *)&gen_args[1]) << 1 | (uint)((int)(*(uint *)&gen_args[1]) < 0);
          if (((uVar1 & uVar5) != 0) &&
             (iVar4 = (local_8 + -1 + uVar7) * 0x2c + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
             (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) & 0xffffffe0U) != 0)) {
            *(int *)(iVar2 + iVar3 * 8) = iVar4;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + (local_8 + -1 + uVar7) * 4)));
            iVar3 = iVar3 + 1;
          }
          uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          if (((uVar1 & uVar5) != 0) &&
             (iVar4 = (local_8 + uVar7) * 0x2c + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
             (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) & 0xffffffe0U) != 0)) {
            *(int *)(iVar2 + iVar3 * 8) = iVar4;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + (local_8 + uVar7) * 4)));
            iVar3 = iVar3 + 1;
          }
          uVar5 = uVar5 << 1 | (uint)((int)uVar5 < 0);
          if (((uVar1 & uVar5) != 0) &&
             (iVar4 = (local_8 + 1 + uVar7) * 0x2c + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
             (*(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) & 0xffffffe0U) != 0)) {
            *(int *)(iVar2 + iVar3 * 8) = iVar4;
            *(undefined4 *)(iVar2 + 4 + iVar3 * 8) =
                 *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + (local_8 + 1 + uVar7) * 4)));
            iVar3 = iVar3 + 1;
          }
          (*(uint *)&gen_args[1]) = uVar5 << 1 | (uint)((int)uVar5 < 0);
          uVar7 = uVar7 + 4;
        } while (uVar7 < 0x20);
      }
      local_8 = local_8 + 0x20;
      local_10 = local_10 + 1;
    } while (local_10 < uVar6);
  }
  return 0;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf4 */
uint F_0062da90(void)
{
  GEN_ENTER(0x62da90u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xad10) + 0x10))))(REFG(int, 0x137127c) + 0xad10);
  return uVar1;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf3 */
uint F_0062db10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62db10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar2 = F_0062d6c0(this,param_1);
  if (uVar2 == 0xffffffff) {
    return 0;
  }
  uVar4 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0xa8) + 4))) + 0x2c + *(int *)(param_1 + 0xa8))));
  if (uVar4 == 0) {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0xc,0x10)));
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      puVar3[2] = 0xffffffff;
      *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10abdbc));
      puVar3[2] = uVar2;
      return (uint)puVar3;
    }
  }
  else {
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x14,0x10)));
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[1] = 1;
      puVar3[2] = 0xffffffff;
      *puVar3 = (*(undefined * PTR32 (*)[8])REFP(0x10ac00c));
      puVar3[3] = 0;
      puVar3[4] = 0;
      bVar1 = F_00623be0(puVar3,uVar4);
      if (bVar1 != 0) {
        puVar3[2] = uVar2;
        return (uint)puVar3;
      }
    }
  }
  return 0;
}

/* ref: FUN_0062dbe0 */
unsigned int F_0062dbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62dbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x28)) = (int *)(param_1 + 0x30);
    (*(int * PTR32 *)(gen_frame + 0x2c)) = (int *)((int)this + 0x90);
    (*(int *)(gen_frame + 0x24)) = 0x10;
    do {
      if ((*(byte *)((*(int * PTR32 *)(gen_frame + 0x28)) + -5) & 1) != 0) {
        puVar4 = (undefined4 *)F_004d9920((undefined *)*(*(int * PTR32 *)(gen_frame + 0x2c)),0,0x30,2);
        if (puVar4 != (undefined4 *)0x0) {
          (*(int *)(gen_frame + 0x20)) = *(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10;
          puVar5 = (undefined4 *)F_004ee9d0(((undefined1 *)(gen_frame + 0x10)),(int)this + 0x230,*(*(int * PTR32 *)(gen_frame + 0x28)) + 0x10);
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          *puVar4 = *puVar5;
          puVar4[1] = uVar1;
          puVar4[2] = uVar2;
          puVar5 = (undefined4 *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x240,(*(int *)(gen_frame + 0x20)));
          uVar1 = puVar5[1];
          uVar2 = puVar5[2];
          iVar3 = *(*(int * PTR32 *)(gen_frame + 0x2c));
          puVar4[4] = *puVar5;
          puVar4[5] = uVar1;
          puVar4[6] = uVar2;
          puVar4[8] = *(undefined4 *)((int)this + 0x250);
          puVar4[9] = *(undefined4 *)((int)this + 0x254);
          puVar4[10] = *(undefined4 *)((int)this + 600);
          puVar4[0xb] = *(undefined4 *)((int)this + 0x25c);
          *(undefined4 *)(iVar3 + 0x24) = 0;
        }
      }
      (*(int * PTR32 *)(gen_frame + 0x2c)) = (*(int * PTR32 *)(gen_frame + 0x2c)) + 1;
      (*(int * PTR32 *)(gen_frame + 0x28)) = (*(int * PTR32 *)(gen_frame + 0x28)) + 0xd;
      iVar3 = (*(int *)(gen_frame + 0x24)) + -1;
      (*(int *)(gen_frame + 0x24)) = iVar3;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_0062dd10 */
uint F_0062dd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62dd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  byte * pbVar6;
  
  puVar3 = param_1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    iVar1 = *(int *)(REFG(int, 0x1371284) + 0x14);
    if (iVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
      F_004f41e0(&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(iVar1 + 0x10) + 0x10);
      (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x14);
      (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x20);
      (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x18);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x1c);
      (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x1c);
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar1 + 0x14);
      (*(int * PTR32 *)(gen_frame + 0x58)) = param_1 + 0xc;
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0x18);
      (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar1 + 0x20);
      (*(int * PTR32 *)(gen_frame + 0x5c)) = (int *)((int)this + 0xd0);
      (*(int *)(gen_frame + 0x54)) = 0x10;
      do {
        if ((*(byte *)((*(int * PTR32 *)(gen_frame + 0x58)) + -5) & 1) != 0) {
          iVar1 = *(*(int * PTR32 *)(gen_frame + 0x58));
          puVar3 = (undefined4 *)F_004d9920((undefined *)*(*(int * PTR32 *)(gen_frame + 0x5c)),0,0x30,2);
          if (puVar3 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar1 + 0x10);
            (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
            (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
            F_004bd580(&(*(undefined4 *)(gen_frame + 0x20)));
            *puVar3 = (*(undefined4 *)(gen_frame + 0x20));
            puVar3[1] = (*(undefined4 *)(gen_frame + 0x24));
            iVar1 = *(*(int * PTR32 *)(gen_frame + 0x5c));
            puVar3[2] = (*(undefined4 *)(gen_frame + 0x28));
            puVar3[4] = (*(undefined4 *)(gen_frame + 0x40));
            puVar3[5] = (*(undefined4 *)(gen_frame + 0x44));
            puVar3[6] = (*(undefined4 *)(gen_frame + 0x48));
            puVar3[7] = (*(undefined4 *)(gen_frame + 0x4c));
            puVar3[8] = (*(undefined4 *)(gen_frame + 0x30));
            puVar3[9] = (*(undefined4 *)(gen_frame + 0x34));
            puVar3[10] = (*(undefined4 *)(gen_frame + 0x38));
            puVar3[0xb] = (*(undefined4 *)(gen_frame + 0x3c));
            *(undefined4 *)(iVar1 + 0x24) = 0;
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x5c)) = (*(int * PTR32 *)(gen_frame + 0x5c)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x58)) + 0xd;
        iVar1 = (*(int *)(gen_frame + 0x54)) + -1;
        (*(int *)(gen_frame + 0x54)) = iVar1;
      } while (iVar1 != 0);
      return (uint)(*(int * PTR32 *)(gen_frame + 0x58));
    }
    piVar5 = (int *)((int)this + 0xd0);
    pbVar6 = (byte *)(param_1 + 7);
    (*(int *)(gen_frame + 0x54)) = 0x10;
    do {
      if ((*pbVar6 & 1) != 0) {
        puVar3 = (undefined4 *)F_004d9920((undefined *)*piVar5,0,0x30,2);
        uVar2 = REFG(float, 0x1087f04);
        if (puVar3 != (undefined4 *)0x0) {
          iVar1 = *piVar5;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = uVar2;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = uVar2;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = uVar2;
          *(undefined4 *)(iVar1 + 0x24) = 0;
        }
      }
      piVar5 = piVar5 + 1;
      pbVar6 = pbVar6 + 0x34;
      iVar1 = (*(int *)(gen_frame + 0x54)) + -1;
      (*(int *)(gen_frame + 0x54)) = iVar1;
    } while (iVar1 != 0);
  }
  return (uint)puVar3;
}

/* ref: FUN_0062df40 */
uint F_0062df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62df40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  short sVar1;
  int iVar2;
  uint uVar3;
  
  *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 0x3c))) =
       REFG(undefined4, 0x1302374) & 0x7fffffff;
  iVar2 = *((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xa8)));
  sVar1 = *((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 0xb8))) + -0x2a +
                    (uint)*((byte *)GEN_TOP((*(int *)(iVar2 + 4) + 0x1e + iVar2))) * 0x3c)));
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(bool *)(param_1 + 0x1c) = sVar1 != 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(uint *)(param_1 + 0x2c) = REFG(undefined4, 0x1302360) & 0x1f;
  uVar3 = REFG(undefined4, 0x130236c);
  *(uint *)(param_1 + 0x30) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(param_1 + 0x34) = uVar3 & 0xfffffffc;
  *(uint *)(param_1 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  uVar3 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(param_1,param_2);
  return uVar3;
}

/* ref: FUN_0062e000 */
uint F_0062e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62e000u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar5 = *(uint *)((*(int *)&gen_args[0]) + 0xc);
  puVar2 = (ushort *)F_004d4590((int)&(*(int *)&gen_args[0]) + 2,(float)(float10)0);
  uVar5 = ((uint)*puVar2 * 8 | uVar5 & 1) * 4 | *(uint *)(iVar1 + 0x3c) & 0xffe0001b;
  (*(int *)&gen_args[0]) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(int *)(gen_frame + 0x8)) = 0x1ff;
  piVar3 = &(*(int *)&gen_args[0]);
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    piVar3 = &(*(int *)(gen_frame + 0x8));
  }
  (*(int *)&gen_args[0]) = *piVar3;
  (*(int *)(gen_frame + 0x8)) = -0x200;
  piVar4 = &(*(int *)(gen_frame + 0x8));
  if (-0x201 < *piVar3) {
    piVar4 = &(*(int *)&gen_args[0]);
  }
  uVar5 = ((*piVar4 << 0x15 ^ uVar5) & 0x7fe00000 ^ uVar5) & 0x7fffffff;
  *(uint *)(iVar1 + 0x3c) = uVar5;
  return uVar5;
}

/* ref: FUN_0062e0b0 */
uint F_0062e0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62e0b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  ushort * puVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar3 = *(uint *)(iVar1 + 0x3c);
  bVar4 = false;
  if (((char)(*(undefined4 *)&gen_args[1]) != '\0') && ((*(int *)&gen_args[2]) != 0)) {
    bVar4 = (*(byte *)((*(int *)&gen_args[0]) + 0xc) & 3) != 0;
  }
  if (bVar4 == false) {
    fVar5 = *(float *)(&REFG(undefined, 0x10ac030) + (*(uint *)(iVar1 + 8) >> 0x17 & 0xf) * 4);
  }
  else {
    fVar5 = (float)(float10)0;
  }
  puVar2 = (ushort *)F_004d4590((int)&(*(undefined4 *)&gen_args[1]) + 2,fVar5);
  uVar3 = (uint)*puVar2 << 5 | (uVar3 ^ ((uint)bVar4 * 4 ^ uVar3) & 4) & 0x800001f | 0x8000000;
  *(uint *)(iVar1 + 0x3c) = uVar3;
  return uVar3;
}

/* ref: FUN_0062e150 */
uint F_0062e150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62e150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  ushort * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  bVar7 = false;
  if (((char)(*(int *)&gen_args[1]) != '\0') && ((*(int *)&gen_args[2]) != 0)) {
    bVar7 = (*(byte *)((*(int *)&gen_args[0]) + 0xc) & 3) != 0;
  }
  uVar6 = *(uint *)(iVar1 + 0x3c) ^ ((uint)bVar7 * 4 ^ *(uint *)(iVar1 + 0x3c)) & 4;
  if (bVar7 != false) {
    puVar2 = (ushort *)F_004d4590((int)&(*(int *)&gen_args[1]) + 2,(float)(float10)0);
    uVar6 = (uint)*puVar2 << 5 | uVar6 & 0xffe0001f;
    (*(int *)&gen_args[1]) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
    (*(int *)&gen_args[2]) = 0x1ff;
    piVar3 = &(*(int *)&gen_args[1]);
    if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
      piVar3 = &(*(int *)&gen_args[2]);
    }
    (*(int *)&gen_args[1]) = *piVar3;
    (*(int *)&gen_args[2]) = 0xfffffe00;
    piVar4 = &(*(int *)&gen_args[2]);
    if (-0x201 < *piVar3) {
      piVar4 = &(*(int *)&gen_args[1]);
    }
    uVar5 = (*piVar4 << 0x15 ^ uVar6) & 0x7fe00000;
    *(uint *)(iVar1 + 0x3c) = (uVar6 ^ uVar5) & 0x7fffffff;
    return uVar5;
  }
  puVar2 = (ushort *)F_004d4590((int)&(*(int *)&gen_args[1]) + 2,(float)(float10)0);
  *(uint *)(iVar1 + 0x3c) = (uint)*puVar2 << 5 | uVar6 & 0x1000001f | 0x10000000;
  return (uint)puVar2;
}

/* ref: FUN_0062e310 */
uint F_0062e310(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x62e310u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x13712a4);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  F_005022a0(uVar1,param_2);
  uVar3 = F_005045d0(uVar1,param_2,iVar2 + 0xd4);
  return uVar3;
}

/* ref: FUN_0062e350 */
uint F_0062e350(unsigned int gen_a0)
{
  GEN_ENTER(0x62e350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = REFG(int, 0x137127c) + 0xc18c + (uint)*(ushort *)((int)this + 0x26) * 8;
  *(undefined1 *)(uVar1 + 1) =
       *((undefined1 *)GEN_TOP((REFG(int, 0x137127c) + 0xc18c + (uint)*(ushort *)((int)this + 0x26) * 8)));
  *(undefined1 *)(uVar1 + 3) = *(undefined1 *)(uVar1 + 2);
  *(undefined4 *)(uVar1 + 4) = 0;
  return uVar1;
}

/* ref: FUN_0062e380 */
byte F_0062e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62e380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
    F_00c48350(*(undefined * PTR32 *)((int)this + 0x28),0,*(gen_size32 *)((int)this + 0x2c));
  }
  iVar5 = REFG(int, 0x1370c1c);
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x104)));
  uVar9 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x2c + iVar2)));
  iVar2 = *(int *)(REFG(int, 0x1370c1c) + 0x3924);
  iVar10 = 0;
  for (uVar7 = param_2; uVar7 != 0; uVar7 = uVar7 >> 2) {
    if (((byte)uVar7 & 3) == 1) {
      uVar8 = 0;
      param_2 = iVar3;
      if (uVar9 != 0) {
        do {
          uVar6 = F_00620050((iVar2 * 0x10 + iVar10) * 0x80 + 0x50 + iVar5,param_2);
          if ((char)uVar6 != '\0') {
            iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0xa8)));
            uVar6 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar4 + 4) + 0x2c + iVar4))) * iVar10 + uVar8;
            puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar6 >> 5) * 4)));
            *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
          }
          uVar8 = uVar8 + 1;
          param_2 = param_2 + 0x20;
        } while (uVar8 < uVar9);
      }
    }
    iVar10 = iVar10 + 1;
  }
  return (byte)iVar5;
}

/* ref: FUN_0062e480 */
uint F_0062e480(unsigned int gen_a0)
{
  GEN_ENTER(0x62e480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabb0) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)),uVar3);
  if ((*(undefined * PTR32 *)(gen_frame + 0x34)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)((int)this + 0x130);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)((int)this + 0x134);
  }
  iVar1 = (int)this + 0x144;
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)),iVar1);
  if ((*(undefined * PTR32 *)(gen_frame + 0x34)) == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)));
  }
  *(uint *)((int)this + 0x3a8c) = uVar2;
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)),(int)this + 0x1a4);
  if ((*(undefined * PTR32 *)(gen_frame + 0x34)) == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x34)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)));
  }
  *(uint *)((int)this + 0x3a90) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabb0) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar3);
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x124);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + 0x128);
  }
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),iVar1);
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  }
  *(uint *)((int)this + 0x3a94) = uVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabb0) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabb0) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),uVar3);
  if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this + 0x13c);
    (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)((int)this + 0x140);
  }
  F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)),iVar1);
  if ((*(undefined * PTR32 *)(gen_frame + 0x1c)) == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x1c)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
  }
  *(uint *)((int)this + 15000) = uVar2;
  *(bool *)((int)this + 0x3a6c) = *(int *)(REFG(int, 0x1371284) + 0x14) != 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar2 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x30)));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return uVar2;
}

/* ref: FUN_0062e660 */
uint F_0062e660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62e660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x840];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  undefined * pvVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  float * pfVar10;
  int * piVar11;
  float10 fVar12;
  float10 fVar13;
  
  (*(uint *)(gen_frame + 0x82c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x830);
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  (*(uint *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1c)), 1, 3),*(char *)(REFG(int, 0x1371278) + 0x12));
  if (*(char *)(REFG(int, 0x1371278) + 0x12) == -1) {
    piVar11 = (int *)((int)this + 0x1fc);
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)0x0;
    pfVar10 = (float *)((int)this + 0x1200);
    do {
      if (*piVar11 != 0) {
        uVar9 = (*(uint *)(gen_frame + 0x14)) & 0xffff;
        fVar2 = *pfVar10;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        ((ushort *)(gen_frame + 0x28))[(int)(uVar9)] = (ushort)(*(ushort * PTR32 *)(gen_frame + 0x20));
        iVar5 = *piVar11;
        pvVar6 = *(undefined * PTR32 *)(iVar5 + 0x20);
        fVar12 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x18) - (float10)param_1[2])));
        fVar13 = (float10)((float)GEN_TOF(((float10)*(float *)(iVar5 + 0x10) - (float10)*param_1)));
        fVar3 = (float)(fVar13 * fVar13 + fVar12 * fVar12);
        if (0.0 < fVar2) {
          fVar2 = (float)((float10)fVar2 - (float10)fVar1);
          *pfVar10 = fVar2;
          if ((float10)fVar2 < (float10)0) {
            *pfVar10 = 0.0;
          }
          else {
            bVar7 = F_004ffb50(pvVar6,(uint)*(byte *)(pfVar10 + -1));
            bVar8 = F_004ffb50(pvVar6,(uint)*(byte *)((int)pfVar10 + -3));
            if ((bVar7 != 0) && (bVar8 != 0)) goto LAB_0062e816;
            *pfVar10 = 0.0;
          }
          bVar7 = F_004ffb80(pvVar6,fVar3);
          *(byte *)(pfVar10 + -1) = bVar7;
LAB_0062e813: ;
          *(byte *)((int)pfVar10 + -3) = bVar7;
        }
        else {
          bVar8 = F_004ffb80(pvVar6,fVar3);
          bVar7 = *(byte *)(pfVar10 + -1);
          *(byte *)((int)pfVar10 + -3) = bVar7;
          *(byte *)(pfVar10 + -1) = bVar8;
          *(undefined1 *)((int)pfVar10 + -1) = *(undefined1 *)((int)pfVar10 + -2);
          if (bVar7 != bVar8) {
            bVar7 = F_004ffb50(pvVar6,(uint)bVar7);
            if (bVar7 == 0) {
              bVar7 = *(byte *)(pfVar10 + -1);
              goto LAB_0062e813;
            }
            *pfVar10 = GEN_FLT_TO(*pfVar10, REFG(float, 0x1088068));
          }
        }
      }
LAB_0062e816: ;
      (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x20)) + 1);
      piVar11 = piVar11 + 1;
      pfVar10 = pfVar10 + 2;
    } while ((*(ushort * PTR32 *)(gen_frame + 0x20)) < 0x400);
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)((int)this + 0x1fc);
    (*(uint *)(gen_frame + 0x10)) = 0;
    pfVar10 = (float *)((int)this + 0x1200);
    do {
      iVar5 = *(int *)(*(ushort * PTR32 *)(gen_frame + 0x20));
      if (iVar5 != 0) {
        fVar2 = *pfVar10;
        uVar9 = (*(uint *)(gen_frame + 0x14)) & 0xffff;
        (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x14)) + 1;
        ((ushort *)(gen_frame + 0x28))[(int)(uVar9)] = (ushort)(*(uint *)(gen_frame + 0x10));
        pvVar6 = *(undefined * PTR32 *)(iVar5 + 0x20);
        if (0.0 < fVar2) {
          fVar2 = (float)((float10)fVar2 - (float10)fVar1);
          *pfVar10 = fVar2;
          if ((float10)fVar2 < (float10)0) {
            *pfVar10 = 0.0;
            bVar7 = F_004ffbd0(pvVar6,(*(undefined4 *)(gen_frame + 0x1c)));
            *(byte *)(pfVar10 + -1) = bVar7;
          }
          else {
            bVar7 = F_004ffb50(pvVar6,(uint)*(byte *)(pfVar10 + -1));
            bVar8 = F_004ffb50(pvVar6,(uint)*(byte *)((int)pfVar10 + -3));
            if ((bVar7 != 0) && (bVar8 != 0)) goto LAB_0062e969;
            *pfVar10 = 0.0;
            bVar7 = F_004ffbd0(pvVar6,(*(undefined4 *)(gen_frame + 0x1c)));
            *(byte *)(pfVar10 + -1) = bVar7;
          }
LAB_0062e966: ;
          *(byte *)((int)pfVar10 + -3) = bVar7;
        }
        else {
          bVar8 = F_004ffbd0(pvVar6,(*(undefined4 *)(gen_frame + 0x1c)));
          bVar7 = *(byte *)(pfVar10 + -1);
          *(byte *)((int)pfVar10 + -3) = bVar7;
          *(byte *)(pfVar10 + -1) = bVar8;
          *(undefined1 *)((int)pfVar10 + -1) = *(undefined1 *)((int)pfVar10 + -2);
          if (bVar7 != bVar8) {
            bVar7 = F_004ffb50(pvVar6,(uint)bVar7);
            if (bVar7 == 0) {
              bVar7 = *(byte *)(pfVar10 + -1);
              goto LAB_0062e966;
            }
            *pfVar10 = GEN_FLT_TO(*pfVar10, REFG(float, 0x1088068));
          }
        }
      }
LAB_0062e969: ;
      (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)((int)(*(ushort * PTR32 *)(gen_frame + 0x20)) + 4);
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
      pfVar10 = pfVar10 + 2;
    } while ((*(uint *)(gen_frame + 0x10)) < 0x400);
  }
  uVar9 = (*(uint *)(gen_frame + 0x14));
  if ((short)(*(uint *)(gen_frame + 0x14)) != 0) {
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x14)) & 0xffff;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = ((ushort *)(gen_frame + 0x28));
    do {
      uVar4 = *(*(ushort * PTR32 *)(gen_frame + 0x20));
      uVar9 = (uint)uVar4;
      bVar7 = *(byte *)((int)this + (short)uVar4 * 8 + 0x11fc);
      bVar8 = 0;
      if ((-1 < (short)(uVar4 & 0x1f) + -1) &&
         (bVar8 = 8, bVar7 <= *((byte *)GEN_TOP(((int)this + (short)(uVar4 - 1) * 8 + 0x11fc))))) {
        bVar8 = 0;
      }
      if (((int)(short)(uVar4 & 0x1f) + 1U < 0x20) &&
         (*((byte *)GEN_TOP(((int)this + (short)(uVar4 + 1) * 8 + 0x11fc))) < bVar7)) {
        bVar8 = bVar8 | 2;
      }
      if ((-1 < ((short)uVar4 >> 5) + -1) &&
         (*((byte *)GEN_TOP(((int)this + (short)(uVar4 - 0x20) * 8 + 0x11fc))) < bVar7)) {
        bVar8 = bVar8 | 1;
      }
      if (((int)((short)uVar4 >> 5) + 1U < 0x20) &&
         (uVar9 = (uint)(short)(uVar4 + 0x20), *(byte *)((int)this + uVar9 * 8 + 0x11fc) < bVar7)) {
        bVar8 = bVar8 | 4;
      }
      (*(ushort * PTR32 *)(gen_frame + 0x20)) = (*(ushort * PTR32 *)(gen_frame + 0x20)) + 1;
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) - 1;
      *(byte *)((int)this + (short)uVar4 * 8 + 0x11fe) = bVar8;
    } while ((*(uint *)(gen_frame + 0x8)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x82c)) ^ (uint)(uint)(gen_frame + 0x830));
  return uVar9;
}

/* ref: FUN_0062eac0 */
uint F_0062eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int * piVar5;
  byte * pbVar6;
  
  puVar3 = param_1;
  if ((*(byte *)(param_1 + 1) & 1) != 0) {
    iVar1 = *(int *)(REFG(int, 0x1371284) + 0x14);
    if (iVar1 != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
      F_004f41e0(&(*(undefined4 *)(gen_frame + 0x10)),*(int *)(iVar1 + 0x10) + 0x10);
      (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(iVar1 + 0x14);
      (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)(iVar1 + 0x20);
      (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(iVar1 + 0x18);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar1 + 0x1c);
      (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(iVar1 + 0x1c);
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar1 + 0x14);
      (*(int * PTR32 *)(gen_frame + 0x58)) = param_1 + 0xc;
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar1 + 0x18);
      (*(undefined4 *)(gen_frame + 0x3c)) = *(undefined4 *)(iVar1 + 0x20);
      (*(int * PTR32 *)(gen_frame + 0x5c)) = (int *)((int)this + 0xd4);
      (*(int *)(gen_frame + 0x54)) = 0x10;
      do {
        if ((*(byte *)((*(int * PTR32 *)(gen_frame + 0x58)) + -5) & 1) != 0) {
          iVar1 = *(*(int * PTR32 *)(gen_frame + 0x58));
          puVar3 = (undefined4 *)F_004d9920((undefined *)*(*(int * PTR32 *)(gen_frame + 0x5c)),0,0x30,2);
          if (puVar3 != (undefined4 *)0x0) {
            puVar4 = (undefined4 *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar1 + 0x10);
            (*(undefined4 *)(gen_frame + 0x20)) = *puVar4;
            (*(undefined4 *)(gen_frame + 0x24)) = puVar4[1];
            (*(undefined4 *)(gen_frame + 0x28)) = puVar4[2];
            F_004bd580(&(*(undefined4 *)(gen_frame + 0x20)));
            *puVar3 = (*(undefined4 *)(gen_frame + 0x20));
            puVar3[1] = (*(undefined4 *)(gen_frame + 0x24));
            iVar1 = *(*(int * PTR32 *)(gen_frame + 0x5c));
            puVar3[2] = (*(undefined4 *)(gen_frame + 0x28));
            puVar3[4] = (*(undefined4 *)(gen_frame + 0x40));
            puVar3[5] = (*(undefined4 *)(gen_frame + 0x44));
            puVar3[6] = (*(undefined4 *)(gen_frame + 0x48));
            puVar3[7] = (*(undefined4 *)(gen_frame + 0x4c));
            puVar3[8] = (*(undefined4 *)(gen_frame + 0x30));
            puVar3[9] = (*(undefined4 *)(gen_frame + 0x34));
            puVar3[10] = (*(undefined4 *)(gen_frame + 0x38));
            puVar3[0xb] = (*(undefined4 *)(gen_frame + 0x3c));
            *(undefined4 *)(iVar1 + 0x24) = 0;
          }
        }
        (*(int * PTR32 *)(gen_frame + 0x5c)) = (*(int * PTR32 *)(gen_frame + 0x5c)) + 1;
        (*(int * PTR32 *)(gen_frame + 0x58)) = (*(int * PTR32 *)(gen_frame + 0x58)) + 0xd;
        iVar1 = (*(int *)(gen_frame + 0x54)) + -1;
        (*(int *)(gen_frame + 0x54)) = iVar1;
      } while (iVar1 != 0);
      return (uint)(*(int * PTR32 *)(gen_frame + 0x58));
    }
    piVar5 = (int *)((int)this + 0xd4);
    pbVar6 = (byte *)(param_1 + 7);
    (*(int *)(gen_frame + 0x54)) = 0x10;
    do {
      if ((*pbVar6 & 1) != 0) {
        puVar3 = (undefined4 *)F_004d9920((undefined *)*piVar5,0,0x30,2);
        uVar2 = REFG(float, 0x1087f04);
        if (puVar3 != (undefined4 *)0x0) {
          iVar1 = *piVar5;
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = uVar2;
          puVar3[4] = 0;
          puVar3[5] = 0;
          puVar3[6] = 0;
          puVar3[7] = uVar2;
          puVar3[8] = 0;
          puVar3[9] = 0;
          puVar3[10] = 0;
          puVar3[0xb] = uVar2;
          *(undefined4 *)(iVar1 + 0x24) = 0;
        }
      }
      piVar5 = piVar5 + 1;
      pbVar6 = pbVar6 + 0x34;
      iVar1 = (*(int *)(gen_frame + 0x54)) + -1;
      (*(int *)(gen_frame + 0x54)) = iVar1;
    } while (iVar1 != 0);
  }
  return (uint)puVar3;
}

/* ref: FUN_0062ecf0 */
uint F_0062ecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x62ecf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  int iVar2;
  float * pfVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
  ;
  iVar2 = *((int *)GEN_TOP(((uVar4 >> 0x1b) * 0x358 + ((uVar4 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = 0;
  pfVar3 = &(*(float *)(gen_frame + 0x1c));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 0x18) - (float10)*(float *)(iVar2 + 0x98))));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = fVar1;
  fVar5 = (float10)((float)GEN_TOF(((float10)*(float *)(param_3 + 0x14) - (float10)*(float *)(iVar2 + 0x94))));
  fVar6 = (float10)((float)GEN_TOF(((float10)*(float *)(param_3 + 0x10) - (float10)*(float *)(iVar2 + 0x90))));
  fVar7 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar7 * fVar7 + (fVar6 * fVar6 + fVar5 * fVar5))));
  (*(float * PTR32 *)(gen_frame + 0x18)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar1 = (float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10ac040));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if (!((float10)fVar1 < (float10)1)) {
    pfVar3 = &(*(float *)(gen_frame + 0x14));
  }
  if (0.0 < *pfVar3) {
    (*(float * PTR32 *)(gen_frame + 0x18)) = pfVar3;
  }
  else {
    (*(float * PTR32 *)(gen_frame + 0x18)) = (float *)((int)&(*(longlong *)(gen_frame + 0x8)) + 4);
  }
  *(undefined4 *)(*param_2 * 0x20 + param_1) = 1;
  *(uint *)(*param_2 * 0x20 + 8 + param_1) = REFG(undefined4, 0x1302360) & 0x1f;
  uVar4 = REFG(undefined4, 0x130236c);
  iVar2 = *param_2;
  *(uint *)(iVar2 * 0x20 + 0x10 + param_1) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(iVar2 * 0x20 + 0x14 + param_1) = uVar4 & 0xfffffffc;
  *(uint *)(*param_2 * 0x20 + 4 + param_1) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 4)) = ((undefined2)0x27f) | 0xc00;
  (*(longlong *)(gen_frame + 0x8)) = (longlong)TRUNC((double)*(*(float * PTR32 *)(gen_frame + 0x18)) * REFG(double, 0x109cab0));
  (*(float *)((char *)&(*(longlong *)(gen_frame + 0x8)) + 0)) = gen_bits2f((uint)(longlong)TRUNC((double)*(*(float * PTR32 *)(gen_frame + 0x18)) * REFG(double, 0x109cab0)));
  uVar4 = (uint)gen_fl2bits((float)(*(longlong *)(gen_frame + 0x8))) & 0xffff | 0x20000;
  *(uint *)(*param_2 * 0x20 + 0x18 + param_1) = uVar4;
  *param_2 = *param_2 + 1;
  return uVar4;
}

/* ref: FUN_0062ee70 */
uint F_0062ee70(unsigned int gen_a0)
{
  GEN_ENTER(0x62ee70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar2 = ((*(int *)(param_1 + 0xc) * 4 ^ *(uint *)(iVar1 + 0x3c)) & 4 ^ *(uint *)(iVar1 + 0x3c)) &
          0x7fffffff;
  *(uint *)(iVar1 + 0x3c) = uVar2;
  return uVar2;
}

/* ref: FUN_0062eeb0 */
byte F_0062eeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x62eeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  
  pvVar4 = (undefined *)F_004dcc90(0x100,4,0);
  *(undefined * PTR32 *)((int)this + 4) = pvVar4;
  if (pvVar4 != (undefined *)0x0) {
    puVar5 = (undefined4 *)F_004d68c0(pvVar4,0,*(undefined4 *)((int)pvVar4 + 0x18),2);
    puVar5[1] = 0;
    uVar3 = REFG(float, 0x1090708);
    uVar2 = REFG(float, 0x1087f04);
    *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1090708));
    puVar5[2] = uVar3;
    puVar5[8] = uVar2;
    puVar5[9] = 0;
    puVar5[10] = uVar3;
    puVar5[0x10] = uVar3;
    puVar5[0x11] = 0;
    puVar5[0x12] = uVar2;
    puVar5[0x18] = uVar2;
    puVar5[0x19] = 0;
    puVar5[0x1a] = uVar2;
    puVar5[0x20] = uVar3;
    puVar5[0x21] = 0;
    puVar5[0x22] = uVar3;
    puVar5[0x28] = uVar2;
    puVar5[0x29] = 0;
    puVar5[0x2a] = uVar3;
    puVar5[0x30] = uVar3;
    puVar5[0x31] = 0;
    puVar5[0x32] = uVar2;
    puVar5[0x38] = uVar2;
    puVar5[0x39] = 0;
    puVar5[0x3a] = uVar2;
    puVar5[3] = 0;
    puVar5[4] = uVar2;
    puVar5[5] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = uVar2;
    puVar5[0xd] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = uVar2;
    puVar5[0x15] = 0;
    puVar5[0x1b] = 0;
    puVar5[0x1c] = uVar2;
    puVar5[0x1d] = 0;
    puVar5[0x23] = 0;
    puVar5[0x24] = uVar3;
    puVar5[0x25] = 0;
    puVar5[0x2b] = 0;
    puVar5[0x2c] = uVar3;
    puVar5[0x2d] = 0;
    puVar5[0x33] = 0;
    puVar5[0x34] = uVar3;
    puVar5[0x35] = 0;
    puVar5[0x3b] = 0;
    puVar5[0x3c] = uVar3;
    puVar5[0x3d] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = 0;
    puVar5[0x16] = 0;
    puVar5[0x17] = uVar2;
    puVar5[0x1e] = uVar2;
    puVar5[0x1f] = uVar2;
    puVar5[0x26] = 0;
    puVar5[0x27] = 0;
    puVar5[0x2e] = uVar2;
    puVar5[0x2f] = 0;
    puVar5[0x36] = 0;
    puVar5[0x37] = uVar2;
    puVar5[0x3e] = uVar2;
    puVar5[0x3f] = uVar2;
    F_004d6970(*(undefined * PTR32 *)((int)this + 4));
    pvVar4 = (undefined *)F_004dccf0(0x18,1,4,0);
    *(undefined * PTR32 *)((int)this + 8) = pvVar4;
    if (pvVar4 != (undefined *)0x0) {
      puVar5 = (undefined4 *)F_004d6a30(pvVar4,0,*(undefined4 *)((int)pvVar4 + 0x18),2);
      *puVar5 = 0x20000;
      puVar5[1] = 0x10001;
      puVar5[2] = 0x30002;
      puVar5[3] = 0x50004;
      puVar5[4] = 0x60006;
      puVar5[5] = 0x70005;
      F_004d6ae0(*(undefined * PTR32 *)((int)this + 8));
      return 1;
    }
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *(undefined4 *)((int)this + 4) = 0;
    }
  }
  return 0;
}

/* ref: FUN_0062f120 */
byte F_0062f120(unsigned int gen_a0)
{
  GEN_ENTER(0x62f120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int * piVar3;
  short sVar4;
  undefined * pvVar5;
  float * pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  short sVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int local_14;
  float * local_8;
  
  pvVar5 = (undefined *)F_004dcc90(0xec60,4,0);
  *(undefined * PTR32 *)((int)this + 4) = pvVar5;
  if (pvVar5 == (undefined *)0x0) {
    return 0;
  }
  pfVar6 = (float *)F_004d68c0(pvVar5,0,*(undefined4 *)((int)pvVar5 + 0x18),2);
  uVar9 = 0;
  local_8 = pfVar6;
  do {
    fVar13 = (float10)(int)uVar9;
    if ((int)uVar9 < 0) {
      fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar1 = ((float)GEN_TOF(((fVar13 * (float10)*(double *)&REFG(undefined, 0x1080228)) / (float10)*(double *)&REFG(undefined, 0x1088070)
                   )));
    fVar13 = ((float10)GEN_TOD(fsin((float10)fVar1)));
    fVar14 = ((float10)GEN_TOD(fcos((float10)fVar1)));
    uVar12 = 0;
    pfVar6 = local_8;
    do {
      fVar15 = (float10)(int)uVar12;
      if ((int)uVar12 < 0) {
        fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = ((float)GEN_TOF(((fVar15 * (float10)*(float *)&REFG(undefined, 0x1320678)) /
                     (float10)*(double *)&REFG(undefined, 0x10943d8))));
      fVar15 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      fVar2 = (float)((float10)(float)fVar15 * (float10)(float)fVar13);
      fVar15 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar1 = (float)((float10)(float)fVar15 * (float10)(float)fVar13);
      *pfVar6 = fVar2;
      pfVar6[2] = fVar1;
      pfVar6[3] = fVar2;
      uVar8 = uVar12 / 0x3c;
      pfVar6[5] = fVar1;
      pfVar6[1] = (float)fVar14;
      pfVar6[4] = (float)fVar14;
      uVar12 = uVar12 + 1;
      pfVar6[7] = ((float)GEN_TOF(((float10)1 - (float10)(uVar9 / 0x1e))));
      pfVar6[6] = (float)((float10)1 - (float10)uVar8);
      pfVar6 = pfVar6 + 8;
    } while (uVar12 < 0x3d);
    uVar9 = uVar9 + 1;
    local_8 = local_8 + 0x1e8;
  } while (uVar9 < 0x1f);
  F_004d6970(*(undefined * PTR32 *)((int)this + 4));
  pvVar5 = (undefined *)F_004dccf0(0x5460,1,4,0);
  *(undefined * PTR32 *)((int)this + 8) = pvVar5;
  if (pvVar5 != (undefined *)0x0) {
    uVar12 = F_004d6a30(pvVar5,0,*(undefined4 *)((int)pvVar5 + 0x18),2);
    iVar7 = 0;
    uVar9 = 0;
    do {
      uVar8 = uVar9 + 0x3d;
      local_14 = 0x3c;
      uVar10 = uVar8;
      do {
        *(short *)(uVar12 + iVar7 * 2) = (short)uVar9;
        sVar11 = (short)uVar9 + 1;
        sVar4 = (short)uVar10;
        *(short *)(uVar12 + 2 + iVar7 * 2) = sVar11;
        *(short *)(uVar12 + 4 + iVar7 * 2) = sVar4;
        *(short *)(uVar12 + 6 + iVar7 * 2) = sVar4;
        *(short *)(uVar12 + 8 + iVar7 * 2) = sVar11;
        *(short *)(uVar12 + 10 + iVar7 * 2) = sVar4 + 1;
        iVar7 = iVar7 + 6;
        uVar9 = uVar9 + 1;
        uVar10 = uVar10 + 1;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      uVar9 = uVar8;
    } while (uVar8 < 0x726);
    F_004d6ae0(*(undefined * PTR32 *)((int)this + 8));
    return 1;
  }
  piVar3 = *(int * PTR32 *)((int)this + 4);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_0062f350 */
byte F_0062f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x62f350u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * pvVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 * puVar12;
  int * piVar13;
  int iVar14;
  undefined * this;
  undefined4 * puVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  double dVar19;
  undefined * puVar20;
  
  *(uint *)(param_1 + 4) = param_2;
  if (param_2 == 0) {
    puVar20 = &REFG(undefined, 0x10a6964);
LAB_0062f3b5: ;
    uVar11 = F_00b52710(puVar20,4,0);
    *(uint *)(param_1 + 0x10) = uVar11;
  }
  else {
    if (param_2 == 1) {
      puVar20 = &REFG(undefined, 0x10a696c);
      goto LAB_0062f3b5;
    }
    if (param_2 == 2) {
      F_00661870(&REFG(undefined * PTR32, 0x1320754),"GetShadow","GetShadow_Enable");
      F_00661870(&REFG(undefined * PTR32, 0x1320760),"GetColor","GetColor_Texture");
      puVar20 = &REFG(undefined, 0x10a69b4);
      goto LAB_0062f3b5;
    }
  }
  uVar11 = F_00b52710(&REFG(undefined, 0x10a69bc),4,0);
  *(uint *)(param_1 + 0x14) = uVar11;
  this = REFG(void * PTR32, 0x1370b90);
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = REFG(void * PTR32, 0x1370b90);
  F_004d58e0(((undefined1 *)(gen_frame + 0x30)),0,0,0x34,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x34)),0,8,0x34,2);
  uVar11 = F_004deb40(this,((undefined1 *)(gen_frame + 0x30)),2);
  *(uint *)(param_1 + 8) = uVar11;
  if (param_2 == 0) {
    piVar13 = REFG(int * PTR32, 0x137fa98);
    if (REFG(int * PTR32, 0x137fa98) == (int *)0x0) {
      REFG(int * PTR32, 0x137fa98) = (int *)F_004dcc90(32000,4,0);
      uVar11 = F_004d68c0(REFG(int * PTR32, 0x137fa98),0,REFG(int * PTR32, 0x137fa98)[6],2);
      puVar15 = (undefined4 *)(uVar11 + 0xc);
      iVar14 = 1000;
      do {
        dVar18 = F_004a4fe0();
        (*(float *)(gen_frame + 0x44)) = (float)dVar18;
        dVar18 = F_004a4fe0();
        (*(float *)(gen_frame + 0x48)) = (float)dVar18;
        dVar18 = F_004a4fe0();
        dVar19 = F_004a4fe0();
        (*(float *)(gen_frame + 0x3c)) = (float)dVar19;
        puVar12 = (undefined4 *)F_005212c0(((undefined1 *)(gen_frame + 0x18)),(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x48)),(float)dVar18,(float)dVar19);
        uVar4 = *puVar12;
        fVar17 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        puVar15[2] = puVar12[1];
        puVar15[1] = uVar4;
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar17);
        puVar15[-3] = uVar4;
        puVar15[-2] = puVar15[2];
        fVar17 = ((float10)GEN_TOD(fsin((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar17))));
        fVar2 = (float)fVar17;
        (*(float *)(gen_frame + 0x3c)) = fVar2;
        (*(float *)(gen_frame + 0x44)) = fVar2;
        (*(float *)(gen_frame + 0x3c)) = (float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)*(double *)&REFG(undefined, 0x10912a8));
        fVar17 = ((float10)GEN_TOD(fsin(
                               (float10)(float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)*(double *)&REFG(undefined, 0x10912a8)
                                               ))));
        fVar3 = (float)fVar17;
        (*(float *)(gen_frame + 0x3c)) = fVar3;
        (*(float *)(gen_frame + 0x48)) = fVar3;
        fVar17 = ((float10)GEN_TOD(fsin(
                               (float10)(float)((float10)(float)dVar18 *
                                               (float10)*(double *)&REFG(undefined, 0x10912a8)))));
        puVar12 = (undefined4 *)F_005212c0(((undefined1 *)(gen_frame + 0x10)),fVar2,fVar3,(float)fVar17,(float)(float10)0);
        uVar4 = puVar12[1];
        puVar15[-1] = *puVar12;
        *puVar15 = uVar4;
        puVar12 = (undefined4 *)
                  F_005212c0(&(*(undefined4 *)(gen_frame + 0x8)),(*(float *)(gen_frame + 0x44)),(*(float *)(gen_frame + 0x48)),(float)fVar17,(float)(float10)1);
        uVar4 = puVar12[1];
        puVar15[3] = *puVar12;
        puVar15[4] = uVar4;
        puVar15 = puVar15 + 8;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
      F_004d6970(REFG(int * PTR32, 0x137fa98));
      this = (*(undefined * PTR32 *)(gen_frame + 0x40));
      goto LAB_0062f6e3;
    }
  }
  else {
    if (((int)param_2 < 1) || (2 < (int)param_2)) goto LAB_0062f6e3;
    piVar13 = REFG(int * PTR32, 0x137fa0c);
    if (REFG(int * PTR32, 0x137fa0c) == (int *)0x0) {
      REFG(int * PTR32, 0x137fa0c) = (int *)F_004dcc90(16000,4,0);
      uVar11 = F_004d68c0(REFG(int * PTR32, 0x137fa0c),0,REFG(int * PTR32, 0x137fa0c)[6],2);
      puVar15 = (undefined4 *)(uVar11 + 4);
      (*(float *)(gen_frame + 0x3c)) = 1.4013e-42;
      do {
        dVar18 = F_004a4fe0();
        (*(undefined * PTR32 *)(gen_frame + 0x40)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)dVar18)));
        dVar18 = F_004a4fe0();
        (*(float *)(gen_frame + 0x48)) = (float)dVar18;
        dVar18 = F_004a4fe0();
        (*(float *)(gen_frame + 0x44)) = (float)dVar18;
        dVar18 = F_004a4fe0();
        puVar12 = (undefined4 *)F_005212c0(((undefined1 *)(gen_frame + 0x28)),((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x40))))),(*(float *)(gen_frame + 0x48)),(*(float *)(gen_frame + 0x44)),(float)dVar18)
        ;
        fVar16 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x40)))));
        fVar17 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        uVar4 = puVar12[1];
        puVar15[-1] = *puVar12;
        *puVar15 = uVar4;
        (*(undefined * PTR32 *)(gen_frame + 0x40)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)(fVar16 * fVar17))));
        fVar17 = ((float10)GEN_TOD(fsin((float10)(float)(fVar16 * fVar17))));
        pvVar1 = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar17)));
        (*(undefined * PTR32 *)(gen_frame + 0x40)) = pvVar1;
        fVar17 = (float10)(*(float *)(gen_frame + 0x48));
        (*(float *)(gen_frame + 0x48)) = (float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10912a8));
        fVar17 = ((float10)GEN_TOD(fsin(
                               (float10)(float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
        fVar2 = (float)fVar17;
        (*(float *)(gen_frame + 0x48)) = fVar2;
        fVar17 = (float10)(*(float *)(gen_frame + 0x44));
        (*(float *)(gen_frame + 0x44)) = (float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10912a8));
        fVar17 = ((float10)GEN_TOD(fsin(
                               (float10)(float)(fVar17 * (float10)*(double *)&REFG(undefined, 0x10912a8)))));
        fVar3 = (float)fVar17;
        (*(float *)(gen_frame + 0x44)) = fVar3;
        fVar17 = ((float10)GEN_TOD(fsin(
                               (float10)(float)((float10)(float)dVar18 *
                                               (float10)*(double *)&REFG(undefined, 0x10912a8)))));
        puVar12 = (undefined4 *)F_005212c0(((undefined1 *)(gen_frame + 0x20)),((float)gen_bits2f((unsigned int)(uintptr_t)(pvVar1))),fVar2,fVar3,(float)fVar17);
        uVar4 = puVar12[1];
        puVar15[1] = *puVar12;
        puVar15[2] = uVar4;
        puVar15 = puVar15 + 4;
        fVar2 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + -1);
        (*(float *)(gen_frame + 0x3c)) = fVar2;
      } while (fVar2 != 0.0);
      F_004d6970(REFG(int * PTR32, 0x137fa0c));
      goto LAB_0062f6e3;
    }
  }
  ((code *)*(gen_code32 *)(*piVar13 + 8))(piVar13);
LAB_0062f6e3: ;
  if (REFG(int * PTR32, 0x137fa9c) == (int *)0x0) {
    REFG(int * PTR32, 0x137fa9c) = (int *)F_004dcd60(0x40,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fa9c) + 8))))(REFG(int * PTR32, 0x137fa9c));
  }
  if (REFG(int * PTR32, 0x137faa0) == (int *)0x0) {
    REFG(int * PTR32, 0x137faa0) = (int *)F_004dcd60(0x40,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa0) + 8))))(REFG(int * PTR32, 0x137faa0));
  }
  if (REFG(int * PTR32, 0x137faa4) == (int *)0x0) {
    REFG(int * PTR32, 0x137faa4) = (int *)F_004dcd60(0x40,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa4) + 8))))(REFG(int * PTR32, 0x137faa4));
  }
  if (REFG(int * PTR32, 0x137faa8) == (int *)0x0) {
    REFG(int * PTR32, 0x137faa8) = (int *)F_004dcd60(0x40,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faa8) + 8))))(REFG(int * PTR32, 0x137faa8));
  }
  if (REFG(int * PTR32, 0x137faac) == (int *)0x0) {
    REFG(int * PTR32, 0x137faac) = (int *)F_004dcd60(0x40,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137faac) + 8))))(REFG(int * PTR32, 0x137faac));
  }
  if (REFG(int * PTR32, 0x137fab0) == (int *)0x0) {
    REFG(int * PTR32, 0x137fab0) = (int *)F_004dcd60(0x60,2,0);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x137fab0) + 8))))(REFG(int * PTR32, 0x137fab0));
  }
  if (REFG(undefined4, 0x1320528) == 0xffffffff) {
    REFG(undefined4, 0x1320528) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_CameraParameter");
  }
  if (REFG(undefined4, 0x132052c) == 0xffffffff) {
    REFG(undefined4, 0x132052c) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_WorldViewMatrix");
  }
  if (REFG(undefined4, 0x1320530) == 0xffffffff) {
    REFG(undefined4, 0x1320530) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_WorldViewProjMatrix");
  }
  if (REFG(undefined4, 0x1320534) == 0xffffffff) {
    REFG(undefined4, 0x1320534) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_GeometryParam");
  }
  if (REFG(undefined4, 0x1320538) == 0xffffffff) {
    REFG(undefined4, 0x1320538) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_MaterialParam");
  }
  if (REFG(undefined4, 0x132053c) == 0xffffffff) {
    REFG(undefined4, 0x132053c) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_RoofMatrix");
  }
  if (REFG(undefined4, 0x1320540) == 0xffffffff) {
    REFG(undefined4, 0x1320540) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x20),"g_RoofSampler");
  }
  if (REFG(undefined4, 0x1320544) == 0xffffffff) {
    REFG(undefined4, 0x1320544) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x1c),"g_DirectionalShadowParameter");
  }
  if (REFG(undefined4, 0x1320548) == 0xffffffff) {
    REFG(undefined4, 0x1320548) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x20),"g_SamplerShadow");
  }
  if (REFG(undefined4, 0x132054c) == 0xffffffff) {
    REFG(undefined4, 0x132054c) = F_004df8f0(*(undefined * PTR32 *)((int)this + 0x20),"g_AnimSampler");
  }
  uVar9 = REFG(float, 0x10a0d00);
  uVar7 = REFG(float, 0x1094880);
  uVar5 = REFG(float, 0x1090708);
  uVar6 = REFG(float, 0x1088068);
  uVar4 = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1090708);
  *(undefined4 *)(param_1 + 0x38) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  *(undefined4 *)(param_1 + 0x3c) = uVar5;
  *(undefined4 *)(param_1 + 0x40) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar7;
  (*(float *)(gen_frame + 0x3c)) = gen_bits2f(uVar7);
  *(undefined4 *)(param_1 + 100) = uVar4;
  *(undefined4 *)(param_1 + 0x18) = uVar7;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar4;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
  *(undefined4 *)(param_1 + 0x68) = uVar4;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar9;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x48) = uVar4;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x84) = 0;
  uVar10 = REFG(float, 0x10a509c);
  uVar8 = REFG(float, 0x1094884);
  uVar5 = REFG(float, 0x10947a4);
  if (iVar14 == 0) {
    *(undefined4 *)(param_1 + 100) = uVar6;
    (*(undefined4 *)(gen_frame + 0x8)) = uVar6;
    (*(undefined4 *)(gen_frame + 0xc)) = uVar6;
    *(undefined4 *)(param_1 + 0x68) = uVar6;
    *(undefined4 *)(param_1 + 0x20) = uVar5;
    uVar5 = REFG(float, 0x1087ef8);
    *(undefined4 *)(param_1 + 0x6c) = uVar6;
    *(undefined4 *)(param_1 + 0x44) = uVar7;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined4 *)(param_1 + 0x58) = uVar5;
    *(undefined4 *)(param_1 + 0x70) = uVar6;
  }
  else {
    if (iVar14 == 1) {
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x44) = uVar4;
      *(undefined4 *)(param_1 + 0x5c) = uVar8;
      *(undefined4 *)(param_1 + 0x60) = uVar4;
      *(undefined4 *)(param_1 + 0x54) = uVar9;
      *(undefined4 *)(param_1 + 0x58) = uVar7;
      return 1;
    }
    if (iVar14 == 2) {
      *(undefined4 *)(param_1 + 0x38) = uVar4;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 100) = uVar4;
      (*(undefined4 *)(gen_frame + 0x8)) = 0;
      *(undefined4 *)(param_1 + 0x68) = uVar4;
      (*(undefined4 *)(gen_frame + 0xc)) = uVar4;
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x20) = uVar9;
      *(undefined4 *)(param_1 + 0x44) = uVar9;
      *(undefined4 *)(param_1 + 0x54) = uVar10;
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      *(undefined4 *)(param_1 + 0x70) = uVar4;
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_0062fac0 */
byte F_0062fac0(unsigned int gen_a0)
{
  GEN_ENTER(0x62fac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined2 * puVar9;
  short * psVar10;
  short * psVar11;
  uint uVar12;
  byte bVar13;
  short sVar14;
  short sVar15;
  undefined4 * puVar16;
  float * pfVar17;
  float10 fVar18;
  
  pvVar8 = REFG(void * PTR32, 0x1370b90);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = REFG(void * PTR32, 0x1370b90);
  if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
    F_004d58e0(((undefined1 *)(gen_frame + 0xc)),0,0,0x34,0);
    F_004d58e0(((undefined1 *)(gen_frame + 0x10)),0,8,0x32,8);
    uVar7 = F_004deb40(pvVar8,((undefined1 *)(gen_frame + 0xc)),2);
    *(uint *)((int)this + 0xc) = uVar7;
    if (uVar7 != 0) {
      pvVar8 = (undefined *)F_004dcc90(0xd8c,4,9);
      *(undefined * PTR32 *)((int)this + 0x10) = pvVar8;
      if ((pvVar8 != (undefined *)0x0) && (uVar7 = F_004d68c0(pvVar8,0,0,2), uVar7 != 0)) {
        (*(uint *)(gen_frame + 0x34)) = 0;
        puVar16 = (undefined4 *)(uVar7 + 8);
        do {
          fVar18 = (float10)(int)(*(uint *)(gen_frame + 0x34));
          if ((int)(*(uint *)(gen_frame + 0x34)) < 0) {
            fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          uVar7 = 0;
          fVar1 = ((float)GEN_TOF(((fVar18 + fVar18) * (float10)*(double *)&REFG(undefined, 0x10ac058) -
                         (float10)REFG(double, 0x1088130))));
          (*(float *)(gen_frame + 0x38)) = fVar1;
          fVar18 = (float10)fVar1;
          fVar1 = ((float)GEN_TOF(ABS(fVar18)));
          (*(float *)(gen_frame + 0x2c)) = fVar1;
          fVar1 = (float)(fVar18 * (float10)fVar1);
          (*(float *)(gen_frame + 0x38)) = fVar1;
          dVar2 = (double)fVar1;
          (*(double *)(gen_frame + 0x14)) = dVar2 * dVar2;
          do {
            (*(float *)(gen_frame + 0x20)) = gen_bits2f(uVar7);
            fVar18 = (float10)(int)uVar7;
            if ((int)uVar7 < 0) {
              fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
            }
            fVar1 = ((float)GEN_TOF(((fVar18 + fVar18) * (float10)*(double *)&REFG(undefined, 0x10ac058) -
                           (float10)REFG(double, 0x1088130))));
            (*(float *)(gen_frame + 0x3c)) = fVar1;
            fVar18 = (float10)fVar1;
            fVar1 = ((float)GEN_TOF(ABS(fVar18)));
            (*(float *)(gen_frame + 0x2c)) = fVar1;
            fVar1 = (float)(fVar18 * (float10)fVar1);
            (*(float *)(gen_frame + 0x3c)) = fVar1;
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x4a)),((float)GEN_TOF(-(float10)fVar1)));
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 0)) = *puVar9;
            (*(undefined4 *)(gen_frame + 0x24)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 2)),*puVar9);
            fVar1 = (float)((float10)(*(float *)(gen_frame + 0x3c)) * (float10)(*(float *)(gen_frame + 0x3c)) + (float10)(*(double *)(gen_frame + 0x14)));
            (*(float *)(gen_frame + 0x2c)) = fVar1;
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x48)),((float)GEN_TOF(-(float10)fVar1)));
            (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x24)) + 2)) = *puVar9;
            (*(undefined4 *)(gen_frame + 0x24)) = CONCAT22(*puVar9,(undefined2)(*(undefined4 *)(gen_frame + 0x24)));
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x46)),(*(float *)(gen_frame + 0x38)));
            (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 0)) = *puVar9;
            (*(float *)(gen_frame + 0x28)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 2)),*puVar9));
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x44)),(float)(float10)1);
            (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 2)) = *puVar9;
            (*(float *)(gen_frame + 0x28)) = gen_bits2f(CONCAT22(*puVar9,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x28)) + 0))));
            puVar16[-2] = (*(undefined4 *)(gen_frame + 0x24));
            puVar16[-1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x28)));
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x42)),(*(float *)(gen_frame + 0x3c)));
            (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x30)) + 0)) = *puVar9;
            (*(float *)(gen_frame + 0x30)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x30)) + 2)),*puVar9));
            puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x40)),(*(float *)(gen_frame + 0x38)));
            (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x30)) + 2)) = *puVar9;
            (*(float *)(gen_frame + 0x30)) = gen_bits2f(CONCAT22(*puVar9,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x30)) + 0))));
            *puVar16 = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x30)));
            uVar7 = uVar7 + 1;
            puVar16 = puVar16 + 3;
          } while (uVar7 < 0x11);
          uVar7 = (*(uint *)(gen_frame + 0x34)) + 1;
          (*(uint *)(gen_frame + 0x34)) = uVar7;
        } while (uVar7 < 0x11);
        F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
        pvVar8 = (undefined *)F_004dccf0(0x422,1,4,9);
        *(undefined * PTR32 *)((int)this + 0x18) = pvVar8;
        if ((pvVar8 != (undefined *)0x0) &&
           (psVar10 = (short *)F_004d6a30(pvVar8,0,0,2), psVar10 != (short *)0x0)) {
          (*(float *)(gen_frame + 0x30)) = 0.0;
          do {
            sVar15 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x30))) * 0x11;
            bVar13 = ~(byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x30))) & 1;
            *psVar10 = ((bVar13 != 0) - 1 & 0x10) + sVar15;
            uVar7 = 0;
            psVar10 = psVar10 + 1;
            do {
              psVar11 = psVar10;
              uVar12 = uVar7;
              if (bVar13 == 0) {
                uVar12 = 0x10 - uVar7;
              }
              *psVar11 = (short)uVar12 + 0x11 + sVar15;
              if (bVar13 == 0) {
                sVar14 = 0xf - (short)uVar7;
              }
              else {
                sVar14 = (short)uVar7 + 1;
              }
              psVar11[1] = sVar14 + sVar15;
              uVar7 = uVar7 + 1;
              psVar10 = psVar11 + 2;
            } while (uVar7 < 0x10);
            uVar7 = (int)gen_fl2bits((*(float *)(gen_frame + 0x30))) + 1;
            (*(float *)(gen_frame + 0x30)) = gen_bits2f(uVar7);
          } while (uVar7 < 0x10);
          *psVar10 = psVar11[1] + 0x11;
          F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x18));
          pvVar8 = (undefined *)F_004dcc90(0xd8c,4,9);
          *(undefined * PTR32 *)((int)this + 0x14) = pvVar8;
          if ((pvVar8 != (undefined *)0x0) && (uVar7 = F_004d68c0(pvVar8,0,0,2), uVar7 != 0)) {
            (*(uint *)(gen_frame + 0x34)) = 0;
            pfVar17 = (float *)(uVar7 + 8);
            do {
              fVar18 = (float10)(int)(*(uint *)(gen_frame + 0x34));
              if ((int)(*(uint *)(gen_frame + 0x34)) < 0) {
                fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
              }
              uVar7 = 0;
              (*(float *)(gen_frame + 0x3c)) = (float)(fVar18 * (float10)*(double *)&REFG(undefined, 0x1094878));
              (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(-(float10)(float)(fVar18 * (float10)*(double *)&REFG(undefined, 0x1094878))));
              do {
                (*(float *)(gen_frame + 0x28)) = gen_bits2f(uVar7);
                fVar18 = (float10)(int)uVar7;
                if ((int)uVar7 < 0) {
                  fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
                }
                (*(float *)(gen_frame + 0x38)) = (float)(fVar18 / (float10)*(double *)&REFG(undefined, 0x1094400));
                fVar1 = ((float)GEN_TOF(((float10)*(float *)&REFG(undefined, 0x132067c) *
                               (float10)(float)(fVar18 / (float10)*(double *)&REFG(undefined, 0x1094400)))));
                (*(float *)(gen_frame + 0x30)) = fVar1;
                fVar18 = ((float10)GEN_TOD(fsin((float10)fVar1)));
                (*(float *)(gen_frame + 0x28)) = (float)fVar18;
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x40)),(float)fVar18);
                (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x14)) + 0)) = *puVar9;
                (*(double *)(gen_frame + 0x14)) = gen_bits2d(CONCAT62(GEN_PIECE(&(*(double *)(gen_frame + 0x14)), 2, 6),*puVar9));
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x42)),(*(float *)(gen_frame + 0x20)));
                (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x14)) + 2)) = *puVar9;
                (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 0)) = gen_bits2f(CONCAT22(*puVar9,(*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x14)) + 0))));
                fVar18 = ((float10)GEN_TOD(fcos((float10)(*(float *)(gen_frame + 0x30)))));
                (*(float *)(gen_frame + 0x28)) = (float)fVar18;
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x44)),((float)GEN_TOF(-(float10)(float)fVar18)));
                (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x14)) + 4)) = *puVar9;
                gen_piece_set(&(*(double *)(gen_frame + 0x14)), 0, 6, (unsigned long long)(CONCAT24(*puVar9,(uint)gen_fl2bits((*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 0))))));
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x46)),(float)(float10)1);
                fVar18 = (float10)*(double *)&REFG(undefined, 0x10944e0);
                fVar1 = (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 0));
                (*(undefined2 *)((char *)&(*(double *)(gen_frame + 0x14)) + 6)) = *puVar9;
                (*(double *)(gen_frame + 0x14)) = gen_bits2d(CONCAT26(*puVar9,GEN_PIECE(&(*(double *)(gen_frame + 0x14)), 0, 6)));
                (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar18);
                pfVar17[-2] = fVar1;
                pfVar17[-1] = (*(float *)((char *)&(*(double *)(gen_frame + 0x14)) + 4));
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x48)),(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar18));
                (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0)) = *puVar9;
                (*(float *)(gen_frame + 0x2c)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 2)),*puVar9));
                puVar9 = (undefined2 *)F_004d4590(((undefined1 *)(gen_frame + 0x4a)),(*(float *)(gen_frame + 0x3c)));
                (*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 2)) = *puVar9;
                (*(float *)(gen_frame + 0x2c)) = gen_bits2f(CONCAT22(*puVar9,(*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x2c)) + 0))));
                *pfVar17 = (*(float *)(gen_frame + 0x2c));
                uVar7 = uVar7 + 1;
                pfVar17 = pfVar17 + 3;
              } while (uVar7 < 0x19);
              uVar7 = (*(uint *)(gen_frame + 0x34)) + 1;
              (*(uint *)(gen_frame + 0x34)) = uVar7;
            } while (uVar7 < 5);
            F_004d6970(*(undefined * PTR32 *)((int)this + 0x14));
            pvVar8 = (undefined *)F_004dccf0(0x18a,1,4,9);
            *(undefined * PTR32 *)((int)this + 0x1c) = pvVar8;
            if ((pvVar8 != (undefined *)0x0) &&
               (psVar10 = (short *)F_004d6a30(pvVar8,0,0,2), psVar10 != (short *)0x0)) {
              (*(float *)(gen_frame + 0x2c)) = 0.0;
              do {
                sVar15 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))) * 0x19;
                bVar13 = ~(byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))) & 1;
                *psVar10 = ((bVar13 != 0) - 1 & 0x18) + sVar15;
                uVar7 = 0;
                psVar10 = psVar10 + 1;
                do {
                  psVar11 = psVar10;
                  uVar12 = uVar7;
                  if (bVar13 == 0) {
                    uVar12 = 0x18 - uVar7;
                  }
                  *psVar11 = (short)uVar12 + 0x19 + sVar15;
                  if (bVar13 == 0) {
                    sVar14 = 0x17 - (short)uVar7;
                  }
                  else {
                    sVar14 = (short)uVar7 + 1;
                  }
                  psVar11[1] = sVar14 + sVar15;
                  uVar7 = uVar7 + 1;
                  psVar10 = psVar11 + 2;
                } while (uVar7 < 0x18);
                uVar7 = (int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) + 1;
                (*(float *)(gen_frame + 0x2c)) = gen_bits2f(uVar7);
              } while (uVar7 < 4);
              *psVar10 = psVar11[1] + 0x19;
              F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x1c));
              uVar7 = F_00b52710((*(undefined * PTR32 (*)[1])REFP(0x10a6aa8)),3,0);
              uVar12 = F_00b52710(&REFG(undefined, 0x10a6aa0),4,0);
              *(uint *)((int)this + 0x5c) = uVar7;
              *(uint *)((int)this + 0x60) = uVar12;
              uVar7 = F_00b52710(&REFG(undefined, 0x10a6ab4),4,0);
              uVar12 = F_00b52710(&REFG(undefined, 0x10a6aac),4,0);
              *(uint *)((int)this + 0x74) = uVar7;
              *(uint *)((int)this + 0x78) = uVar12;
              uVar7 = F_00b52710((*(undefined * PTR32 (*)[1])REFP(0x10a6ac4)),3,0);
              uVar12 = F_00b52710("SHADOW",6,0);
              *(uint *)((int)this + 0x68) = uVar7;
              *(uint *)((int)this + 0x6c) = uVar12;
              uVar7 = F_00b52710(&REFG(undefined, 0x10a6ad0),4,0);
              uVar12 = F_00b52710("SHADOW",6,0);
              *(uint *)((int)this + 0x80) = uVar7;
              *(uint *)((int)this + 0x84) = uVar12;
              uVar7 = F_00b52710("GetColor",8,0);
              uVar12 = F_00b52710("GetColor0",9,0);
              *(uint *)((int)this + 0x8c) = uVar7;
              *(uint *)((int)this + 0x90) = uVar12;
              uVar7 = F_00b52710("GetColor",8,0);
              uVar12 = F_00b52710("GetColor1",9,0);
              pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
              *(uint *)((int)this + 0x98) = uVar7;
              *(uint *)((int)this + 0x9c) = uVar12;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x1c),"g_WorldMatrix");
              *(uint *)((int)this + 0x44) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x1c),"g_VSParam");
              *(uint *)((int)this + 0x48) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x1c),"g_PSParam");
              *(uint *)((int)this + 0x4c) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x20),"g_Sampler0");
              *(uint *)((int)this + 0x50) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x20),"g_Sampler1");
              *(uint *)((int)this + 0x54) = uVar7;
              uVar7 = F_004dcd60(0x40,2,9);
              *(uint *)((int)this + 0x20) = uVar7;
              uVar7 = F_004dcd60(0x40,2,9);
              *(uint *)((int)this + 0x24) = uVar7;
              uVar7 = F_004dcd60(0x50,2,9);
              *(uint *)((int)this + 0x28) = uVar7;
              uVar7 = F_004dcd60(0x50,2,9);
              *(uint *)((int)this + 0x2c) = uVar7;
              uVar7 = F_004dcd60(0x50,2,9);
              *(uint *)((int)this + 0x30) = uVar7;
              uVar7 = F_004dcd60(0x40,2,9);
              *(uint *)((int)this + 0xa0) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x1c),"g_CloudShadowMatrix");
              *(uint *)((int)this + 0xa4) = uVar7;
              uVar7 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar8 + 0x20),"g_CloudShadowSampler");
              *(uint *)((int)this + 0xa8) = uVar7;
              bVar13 = F_006285c0((undefined *)((int)this + 0xb0));
              uVar4 = REFG(float, 0x10ac050);
              uVar6 = REFG(float, 0x1094880);
              uVar3 = REFG(float, 0x1087f04);
              if (bVar13 != 0) {
                *(undefined4 *)((int)this + 0x208) = REFG(float, 0x1094884);
                *(undefined4 *)((int)this + 0x20c) = REFG(float, 0x1094834);
                *(undefined4 *)((int)this + 0x24c) = REFG(float, 0x10ac04c);
                uVar5 = REFG(float, 0x10928e4);
                *(undefined4 *)((int)this + 0x250) = REFG(float, 0x1094724);
                *(undefined4 *)((int)this + 0x200) = uVar3;
                *(undefined4 *)((int)this + 0x204) = uVar3;
                *(undefined4 *)((int)this + 0x210) = uVar3;
                *(undefined4 *)((int)this + 0x254) = 0;
                *(undefined4 *)((int)this + 0x260) = uVar4;
                uVar4 = REFG(float, 0x1090708);
                *(undefined4 *)((int)this + 600) = 0;
                *(undefined4 *)((int)this + 0x25c) = 0;
                *(undefined4 *)((int)this + 0x264) = uVar6;
                *(undefined4 *)((int)this + 0x268) = 0;
                *(undefined4 *)((int)this + 0x26c) = 0;
                *(undefined4 *)((int)this + 0x218) = uVar4;
                uVar4 = REFG(float, 0x1088068);
                *(undefined4 *)((int)this + 0x214) = 0;
                *(undefined4 *)((int)this + 0x21c) = 0;
                *(undefined4 *)((int)this + 0x220) = uVar3;
                *(undefined4 *)((int)this + 0x224) = uVar3;
                *(undefined4 *)((int)this + 0x228) = uVar3;
                *(undefined4 *)((int)this + 0x22c) = uVar4;
                *(undefined4 *)((int)this + 0x230) = uVar4;
                *(undefined4 *)((int)this + 0x234) = uVar4;
                *(undefined4 *)((int)this + 0x240) = uVar6;
                uVar6 = REFG(float, 0x10ac048);
                *(undefined4 *)((int)this + 0x238) = uVar5;
                *(undefined4 *)((int)this + 0x23c) = 0;
                *(undefined4 *)((int)this + 0x244) = uVar6;
                *(undefined4 *)((int)this + 0x248) = uVar4;
                *(undefined4 *)((int)this + 0x270) = uVar4;
                *(undefined4 *)((int)this + 0x27c) = 0;
                *(undefined4 *)((int)this + 0x280) = 0;
                *(undefined4 *)((int)this + 0x284) = 0;
                *(undefined4 *)((int)this + 0x288) = uVar3;
                return 1;
              }
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00630072 */
byte F_00630072(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x630072u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  int in_esi = (int)gen_a1;
  int in_edi = (int)gen_a2;
  undefined4 in_ebp = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  uint uVar6;
  
  *(undefined4 *)(in_esi + 0x9c) = in_eax;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x1c),"g_WorldMatrix");
  *(uint *)(in_esi + 0x44) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x1c),"g_VSParam");
  *(uint *)(in_esi + 0x48) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x1c),"g_PSParam");
  *(uint *)(in_esi + 0x4c) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x20),"g_Sampler0");
  *(uint *)(in_esi + 0x50) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x20),"g_Sampler1");
  *(uint *)(in_esi + 0x54) = uVar6;
  uVar6 = F_004dcd60(0x40,2,9);
  *(uint *)(in_esi + 0x20) = uVar6;
  uVar6 = F_004dcd60(0x40,2,9);
  *(uint *)(in_esi + 0x24) = uVar6;
  uVar6 = F_004dcd60(0x50,2,9);
  *(uint *)(in_esi + 0x28) = uVar6;
  uVar6 = F_004dcd60(0x50,2,9);
  *(uint *)(in_esi + 0x2c) = uVar6;
  uVar6 = F_004dcd60(0x50,2,9);
  *(uint *)(in_esi + 0x30) = uVar6;
  uVar6 = F_004dcd60(0x40,2,9);
  *(uint *)(in_esi + 0xa0) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x1c),"g_CloudShadowMatrix");
  *(uint *)(in_esi + 0xa4) = uVar6;
  uVar6 = F_004df8f0(*(undefined * PTR32 *)(in_edi + 0x20),"g_CloudShadowSampler");
  *(uint *)(in_esi + 0xa8) = uVar6;
  bVar5 = F_006285c0((undefined *)(in_esi + 0xb0));
  uVar2 = REFG(float, 0x10ac050);
  uVar4 = REFG(float, 0x1094880);
  uVar1 = REFG(float, 0x1087f04);
  if (bVar5 == 0) {
    return 0;
  }
  *(undefined4 *)(in_esi + 0x208) = REFG(float, 0x1094884);
  *(undefined4 *)(in_esi + 0x20c) = REFG(float, 0x1094834);
  *(undefined4 *)(in_esi + 0x24c) = REFG(float, 0x10ac04c);
  uVar3 = REFG(float, 0x10928e4);
  *(undefined4 *)(in_esi + 0x250) = REFG(float, 0x1094724);
  *(undefined4 *)(in_esi + 0x200) = uVar1;
  *(undefined4 *)(in_esi + 0x204) = uVar1;
  *(undefined4 *)(in_esi + 0x210) = uVar1;
  *(undefined4 *)(in_esi + 0x254) = 0;
  *(undefined4 *)(in_esi + 0x260) = uVar2;
  uVar2 = REFG(float, 0x1090708);
  *(undefined4 *)(in_esi + 600) = 0;
  *(undefined4 *)(in_esi + 0x25c) = 0;
  *(undefined4 *)(in_esi + 0x264) = uVar4;
  *(undefined4 *)(in_esi + 0x268) = 0;
  *(undefined4 *)(in_esi + 0x26c) = 0;
  *(undefined4 *)(in_esi + 0x218) = uVar2;
  uVar2 = REFG(float, 0x1088068);
  *(undefined4 *)(in_esi + 0x214) = 0;
  *(undefined4 *)(in_esi + 0x21c) = 0;
  *(undefined4 *)(in_esi + 0x220) = uVar1;
  *(undefined4 *)(in_esi + 0x224) = uVar1;
  *(undefined4 *)(in_esi + 0x228) = uVar1;
  *(undefined4 *)(in_esi + 0x22c) = uVar2;
  *(undefined4 *)(in_esi + 0x230) = uVar2;
  *(undefined4 *)(in_esi + 0x234) = uVar2;
  *(undefined4 *)(in_esi + 0x240) = uVar4;
  uVar4 = REFG(float, 0x10ac048);
  *(undefined4 *)(in_esi + 0x238) = uVar3;
  *(undefined4 *)(in_esi + 0x23c) = 0;
  *(undefined4 *)(in_esi + 0x244) = uVar4;
  *(undefined4 *)(in_esi + 0x248) = uVar2;
  *(undefined4 *)(in_esi + 0x270) = uVar2;
  *(undefined4 *)(in_esi + 0x27c) = 0;
  *(undefined4 *)(in_esi + 0x280) = 0;
  *(undefined4 *)(in_esi + 0x284) = 0;
  *(undefined4 *)(in_esi + 0x288) = uVar1;
  return 1;
}

/* ref: FUN_006314f0 */
byte F_006314f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6314f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined * pvVar9;
  uint * puVar10;
  float * pfVar11;
  float fVar12;
  undefined * pvVar13;
  short * psVar14;
  uint * puVar15;
  undefined2 * puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  double dVar24;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  uVar8 = F_00b52710(&REFG(undefined, 0x10aa310),4,0);
  *(uint *)((int)this + 0x60) = uVar8;
  uVar8 = F_00b52710(&REFG(undefined, 0x10aa318),4,0);
  *(uint *)((int)this + 100) = uVar8;
  pvVar9 = REFG(void * PTR32, 0x1370b90);
  (*(undefined * PTR32 *)(gen_frame + 0xa0)) = REFG(void * PTR32, 0x1370b90);
  if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
    F_00624280(this);
    F_004d58e0(((undefined1 *)(gen_frame + 0x130)),0,0,0x34,0);
    F_004d58e0(((undefined1 *)(gen_frame + 0x134)),0,8,0x34,8);
    F_004d58e0(((undefined1 *)(gen_frame + 0x138)),0,0x10,0x34,9);
    uVar8 = F_004deb40(pvVar9,((undefined1 *)(gen_frame + 0x130)),3);
    *(uint *)((int)this + 0x20) = uVar8;
    if (uVar8 != 0) {
      pvVar9 = (undefined *)F_004dcc90(0xa290,4,0);
      *(undefined * PTR32 *)((int)this + 0x28) = pvVar9;
      if (pvVar9 != (undefined *)0x0) {
        uVar8 = F_004d68c0(pvVar9,0,*(undefined4 *)((int)pvVar9 + 0x18),2);
        (*(uint *)(gen_frame + 0x48)) = uVar8;
        if (uVar8 != 0) {
          F_004bdee0(((undefined1 *)(gen_frame + 0xf0)),REFG(float, 0x108b284));
          (*(float *)(gen_frame + 0xdc)) = 0.0;
          (*(float *)(gen_frame + 0x6c)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x68)) = 0.0;
          (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1087f04);
          do {
            fVar12 = (*(float *)(gen_frame + 0xdc));
            F_004a4010((undefined4)gen_fl2bits((*(float *)(gen_frame + 0xdc))));
            F_004a40e0((undefined4)gen_fl2bits(fVar12));
            F_004a41b0((undefined4)gen_fl2bits(fVar12));
            fVar21 = (float10)REFG(double, 0x1088108);
            (*(uint *)(gen_frame + 0xd4)) = 0;
            (*(int *)(gen_frame + 0x4c)) = (int)gen_fl2bits(fVar12) * 0x11;
            do {
              (*(float *)(gen_frame + 0x7c)) = gen_bits2f((*(uint *)(gen_frame + 0xd4)));
              fVar22 = (float10)(int)(*(uint *)(gen_frame + 0xd4));
              if ((int)(*(uint *)(gen_frame + 0xd4)) < 0) {
                fVar22 = fVar22 + (float10)*(float *)&REFG(undefined, 0x1088110);
              }
              fVar12 = (float)(fVar22 * (float10)*(double *)&REFG(undefined, 0x10ac058));
              (*(float *)(gen_frame + 0xe4)) = fVar12;
              fVar17 = ((float)GEN_TOF((((float10)fVar12 - fVar21) * (float10)*(double *)&REFG(undefined, 0x1094620))));
              (*(float *)(gen_frame + 0xe0)) = fVar17;
              fVar21 = ((float10)GEN_TOD(fsin((float10)fVar17)));
              fVar18 = (float)fVar21;
              (*(float *)(gen_frame + 0xd8)) = fVar18;
              (*(float *)(gen_frame + 0xd0)) = fVar18;
              fVar21 = ((float10)GEN_TOD(fcos((float10)fVar17)));
              (*(float *)(gen_frame + 0xd8)) = (float)fVar21;
              fVar19 = 0.0;
              (*(int *)(gen_frame + 0x40)) = ((*(int *)(gen_frame + 0x4c)) + (*(uint *)(gen_frame + 0xd4))) * 0x11;
              fVar17 = (float)((float10)fVar18 / (float10)(float)fVar21);
              (*(float *)(gen_frame + 0xd0)) = fVar17;
              fVar21 = (float10)fVar12;
              (*(float *)(gen_frame + 0x7c)) = ((float)GEN_TOF(((fVar21 + fVar21) - (float10)1)));
              fVar22 = (float10)fVar17;
              fVar12 = ((float)GEN_TOF(((fVar22 * fVar22) * fVar22)));
              (*(float *)(gen_frame + 0xd8)) = fVar12;
              fVar12 = ((float)GEN_TOF(ABS((float10)fVar12)));
              (*(float *)(gen_frame + 0xd8)) = fVar12;
              (*(double *)(gen_frame + 0x30)) = (double)((float10)1 - (float10)fVar12);
              (*(float *)(gen_frame + 0x64)) = (float)(fVar21 * (float10)REFG(double, 0x10ac068));
              (*(float *)(gen_frame + 0x50)) = (float)(fVar21 * (float10)*(double *)&REFG(undefined, 0x10968a0));
              (*(float *)(gen_frame + 0x54)) = (float)(fVar21 + fVar21);
              fVar21 = (float10)REFG(double, 0x1088108);
              do {
                iVar20 = (*(int *)(gen_frame + 0x40));
                (*(float *)(gen_frame + 0xec)) = fVar19;
                fVar22 = (float10)(int)gen_fl2bits(fVar19);
                if ((int)gen_fl2bits(fVar19) < 0) {
                  fVar22 = fVar22 + (float10)*(float *)&REFG(undefined, 0x1088110);
                }
                fVar12 = (float)(fVar22 * (float10)*(double *)&REFG(undefined, 0x10ac058));
                (*(float *)(gen_frame + 0xe0)) = fVar12;
                fVar17 = ((float)GEN_TOF((((float10)fVar12 - fVar21) * (float10)*(double *)&REFG(undefined, 0x1094620))));
                (*(float *)(gen_frame + 0xe4)) = fVar17;
                fVar21 = ((float10)GEN_TOD(fsin((float10)fVar17)));
                fVar18 = (float)fVar21;
                (*(float *)(gen_frame + 0xe8)) = fVar18;
                (*(float *)(gen_frame + 0xec)) = fVar18;
                fVar21 = ((float10)GEN_TOD(fcos((float10)fVar17)));
                (*(float *)(gen_frame + 0xe8)) = (float)fVar21;
                fVar17 = (float)((float10)fVar18 / (float10)(float)fVar21);
                (*(float *)(gen_frame + 0xec)) = fVar17;
                fVar22 = (float10)fVar17;
                fVar17 = ((float)GEN_TOF(((fVar22 * fVar22) * fVar22)));
                (*(float *)(gen_frame + 0xec)) = fVar17;
                fVar17 = ((float)GEN_TOF(ABS((float10)fVar17)));
                (*(float *)(gen_frame + 0xec)) = fVar17;
                fVar21 = (float10)1;
                fVar17 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xd0)) * (fVar21 - (float10)fVar17) +
                                (float10)(*(float *)(gen_frame + 0x7c)) * (float10)fVar17)));
                (*(float *)(gen_frame + 0x20)) = fVar17;
                fVar12 = ((float)GEN_TOF((((float10)fVar12 + (float10)fVar12) - fVar21)));
                (*(float *)(gen_frame + 0xec)) = fVar12;
                fVar12 = (float)(fVar22 * (float10)(*(double *)(gen_frame + 0x30)) + (float10)fVar12 * (float10)(*(float *)(gen_frame + 0xd8)));
                (*(float *)(gen_frame + 0x24)) = fVar12;
                fVar18 = ((float)GEN_TOF((((float10)fVar12 * (float10)fVar12 +
                                 (float10)fVar17 * (float10)fVar17) + fVar21)));
                (*(float *)(gen_frame + 0xec)) = fVar18;
                fVar18 = ((float)GEN_TOF(SQRT((float10)fVar18)));
                (*(float *)(gen_frame + 0xec)) = fVar18;
                fVar18 = (float)((float10)1 / (float10)fVar18);
                (*(float *)(gen_frame + 0xe4)) = fVar18;
                (*(float *)(gen_frame + 0xb8)) = fVar18;
                fVar17 = (float)((float10)fVar18 * (float10)fVar17);
                (*(float *)(gen_frame + 0x80)) = fVar17;
                fVar12 = (float)((float10)fVar18 * (float10)fVar12);
                (*(float *)(gen_frame + 0x84)) = fVar12;
                (*(float *)(gen_frame + 0xb0)) = fVar17;
                (*(float *)(gen_frame + 0xb4)) = fVar12;
                switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float *)(gen_frame + 0xdc))))) {
                case 0: ;
                  (*(float *)(gen_frame + 0xb0)) = fVar18;
                  goto LAB_0063186e;
                case 1: ;
                  (*(float *)(gen_frame + 0xb0)) = gen_bits2f((uint)gen_fl2bits(fVar18) ^ REFG(uint, 0x10920d0));
                  (*(float *)(gen_frame + 0xb4)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
                  goto LAB_00631927;
                case 2: ;
                  (*(float *)(gen_frame + 0xb4)) = fVar18;
                  fVar17 = fVar12;
                  goto LAB_00631927;
                case 3: ;
                  fVar12 = fVar18;
                  fVar17 = (*(float *)(gen_frame + 0x84));
LAB_0063186e: ;
                  (*(float *)(gen_frame + 0xb4)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
                  (*(float *)(gen_frame + 0xb8)) = gen_bits2f((uint)gen_fl2bits(fVar17) ^ REFG(uint, 0x10920d0));
                  break;
                case 4: ;
                  (*(float *)(gen_frame + 0xb4)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
                  break;
                case 5: ;
                  (*(float *)(gen_frame + 0xb0)) = gen_bits2f((uint)gen_fl2bits(fVar17) ^ REFG(uint, 0x10920d0));
                  (*(float *)(gen_frame + 0xb4)) = gen_bits2f((uint)gen_fl2bits(fVar12) ^ REFG(uint, 0x10920d0));
                  fVar17 = gen_bits2f((uint)gen_fl2bits(fVar18) ^ REFG(uint, 0x10920d0));
LAB_00631927: ;
                  (*(float *)(gen_frame + 0xb8)) = fVar17;
                }
                puVar10 = (uint *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xb0)),((undefined1 *)(gen_frame + 0xf0)));
                pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
                uVar8 = *puVar10;
                (*(uint *)(gen_frame + 0x10)) = uVar8;
                uVar2 = puVar10[1];
                (*(uint *)(gen_frame + 0x14)) = uVar2;
                uVar3 = puVar10[2];
                (*(uint *)(gen_frame + 0x18)) = uVar3;
                fVar12 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0xb0)) * (float10)*(double *)&REFG(undefined, 0x1088118) +
                                 (float10)(*(float *)(gen_frame + 0xb4)) * (float10)REFG(double, 0x10944b8)) + (float10)(*(float *)(gen_frame + 0xb8)))));
                (*(float *)(gen_frame + 0xec)) = fVar12;
                fVar12 = (float)((float10)fVar12 * (float10)*(double *)&REFG(undefined, 0x10912a8));
                (*(float *)(gen_frame + 0xec)) = fVar12;
                fVar21 = ((float10)GEN_TOD(fsin((float10)fVar12)));
                fVar12 = (float)fVar21;
                (*(float *)(gen_frame + 0xec)) = fVar12;
                pfVar11 = (float *)&(*(float *)(gen_frame + 0xe4));
                fVar12 = (float)((float10)fVar12 * (float10)fVar12);
                (*(float *)(gen_frame + 0xe8)) = fVar12;
                (*(float *)(gen_frame + 0xec)) = ((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
                fVar21 = (float10)((float)GEN_TOF(ABS((float10)(*(float *)(gen_frame + 0xb4)))));
                fVar22 = (float10)fVar12;
                fVar12 = ((float)GEN_TOF(((float10)*(double *)&REFG(undefined, 0x109ca50) * fVar22 + (fVar21 + fVar21))));
                (*(float *)(gen_frame + 0xe4)) = fVar12;
                if (!((float10)fVar12 < (float10)1)) {
                  pfVar11 = &(*(float *)(gen_frame + 0x6c));
                }
                if (!(*(float *)&REFG(undefined, 0x1088114) < *pfVar11)) {
                  pfVar11 = &(*(float *)(gen_frame + 0x68));
                }
                (*(float *)(gen_frame + 0xe4)) = *pfVar11;
                fVar21 = (float10)*pfVar11;
                (*(uint *)(gen_frame + 0x70)) = uVar8;
                puVar1 = ((undefined4 *)GEN_TOP(((*(uint *)(gen_frame + 0x48)) + (iVar20 + (int)gen_fl2bits(fVar19)) * 0x18)));
                fVar12 = (float)((float10)1 - fVar21 * fVar21);
                (*(float *)(gen_frame + 0xe4)) = fVar12;
                uVar7 = 0;
                if (uVar8 != 0) {
                  fVar17 = gen_bits2f((uVar8 >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)(uVar8 >> 0x10) & 0x8000 | (ushort)(uVar8 >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(uint *)(gen_frame + 0x38)) = uVar2;
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa8)) + 0)) = uVar7;
                (*(undefined4 *)(gen_frame + 0xa8)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa8)) + 2)),uVar7);
                uVar6 = 0;
                if (uVar2 != 0) {
                  fVar17 = gen_bits2f((uVar2 >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar6 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar6 = (ushort)(uVar2 >> 0x10) & 0x8000 | (ushort)(uVar2 >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(uint *)(gen_frame + 0x5c)) = uVar3;
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xa8)) + 2)) = uVar6;
                (*(undefined4 *)(gen_frame + 0xa8)) = CONCAT22(uVar6,uVar7);
                uVar7 = 0;
                if (uVar3 != 0) {
                  fVar17 = gen_bits2f((uVar3 >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)(uVar3 >> 0x10) & 0x8000 | (ushort)(uVar3 >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xac)) + 0)) = uVar7;
                (*(undefined4 *)(gen_frame + 0xac)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xac)) + 2)),uVar7);
                if ((*(float *)(gen_frame + 0x60)) == 0.0) {
                  uVar6 = 0;
                }
                else {
                  fVar17 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar6 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar6 = (ushort)((int)gen_fl2bits(*pfVar11) << 10) |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) >> 0xd) & 0x3ff |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x60))) >> 0x10) & 0x8000;
                  }
                }
                *puVar1 = (*(undefined4 *)(gen_frame + 0xa8));
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0xac)) + 2)) = uVar6;
                (*(undefined4 *)(gen_frame + 0xac)) = CONCAT22(uVar6,uVar7);
                puVar1[1] = (*(undefined4 *)(gen_frame + 0xac));
                if ((*(float *)(gen_frame + 0x64)) == 0.0) {
                  uVar7 = 0;
                }
                else {
                  fVar17 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x64))) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)((int)gen_fl2bits(*pfVar11) << 10) |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x64))) >> 0xd) & 0x3ff |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x64))) >> 0x10) & 0x8000;
                  }
                }
                fVar23 = (float10)1 - (float10)(*(float *)(gen_frame + 0xe0));
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x78)) + 0)) = uVar7;
                (*(undefined4 *)(gen_frame + 0x78)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x78)) + 2)),uVar7);
                fVar17 = (float)((float10)REFG(double, 0x10ac068) * fVar23);
                (*(float *)(gen_frame + 0x58)) = fVar17;
                uVar6 = 0;
                if (fVar17 != 0.0) {
                  fVar18 = gen_bits2f(((uint)gen_fl2bits(fVar17) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar18;
                  if ((int)gen_fl2bits(fVar18) < 0) {
                    uVar6 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar18)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar6 = (ushort)((uint)gen_fl2bits(fVar17) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar17) >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x78)) + 2)) = uVar6;
                (*(undefined4 *)(gen_frame + 0x78)) = CONCAT22(uVar6,uVar7);
                puVar1[2] = (*(undefined4 *)(gen_frame + 0x78));
                if ((*(float *)(gen_frame + 0x50)) == 0.0) {
                  uVar7 = 0;
                }
                else {
                  fVar17 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x50))) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)((int)gen_fl2bits(*pfVar11) << 10) |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x50))) >> 0xd) & 0x3ff |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x50))) >> 0x10) & 0x8000;
                  }
                }
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x74)) + 0)) = uVar7;
                (*(undefined4 *)(gen_frame + 0x74)) = CONCAT22((*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x74)) + 2)),uVar7);
                fVar17 = (float)((float10)*(double *)&REFG(undefined, 0x10968a0) * fVar23);
                (*(float *)(gen_frame + 0x3c)) = fVar17;
                uVar6 = 0;
                if (fVar17 != 0.0) {
                  fVar18 = gen_bits2f(((uint)gen_fl2bits(fVar17) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar18;
                  if ((int)gen_fl2bits(fVar18) < 0) {
                    uVar6 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar18)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar6 = (ushort)((uint)gen_fl2bits(fVar17) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar17) >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x74)) + 2)) = uVar6;
                (*(undefined4 *)(gen_frame + 0x74)) = CONCAT22(uVar6,uVar7);
                puVar1[3] = (*(undefined4 *)(gen_frame + 0x74));
                if ((*(float *)(gen_frame + 0x54)) == 0.0) {
                  uVar7 = 0;
                }
                else {
                  fVar17 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x54))) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)((int)gen_fl2bits(*pfVar11) << 10) |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x54))) >> 0xd) & 0x3ff |
                            (ushort)((uint)gen_fl2bits((*(float *)(gen_frame + 0x54))) >> 0x10) & 0x8000;
                  }
                }
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = uVar7;
                (*(uint *)(gen_frame + 0xcc)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 2)),uVar7);
                fVar21 = (float10)REFG(double, 0x1088108);
                fVar17 = (float)(fVar23 * (float10)*(double *)&REFG(undefined, 0x1094788) + fVar21);
                (*(float *)(gen_frame + 0x44)) = fVar17;
                uVar6 = 0;
                if (fVar17 != 0.0) {
                  fVar18 = gen_bits2f(((uint)gen_fl2bits(fVar17) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar18;
                  if ((int)gen_fl2bits(fVar18) < 0) {
                    uVar6 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar18)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar6 = (ushort)((uint)gen_fl2bits(fVar17) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar17) >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 2)) = uVar6;
                (*(uint *)(gen_frame + 0xcc)) = CONCAT22(uVar6,uVar7);
                puVar1[4] = (*(uint *)(gen_frame + 0xcc));
                fVar17 = (float)(fVar22 * fVar21 + fVar21);
                (*(float *)(gen_frame + 0xa4)) = fVar17;
                uVar7 = 0;
                if (fVar17 != 0.0) {
                  fVar18 = gen_bits2f(((uint)gen_fl2bits(fVar17) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar18;
                  if ((int)gen_fl2bits(fVar18) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar18)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)((uint)gen_fl2bits(fVar17) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar17) >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                (*(float *)(gen_frame + 0xc8)) = fVar12;
                *(ushort *)(puVar1 + 5) = uVar7;
                uVar7 = 0;
                if (fVar12 != 0.0) {
                  fVar17 = gen_bits2f(((uint)gen_fl2bits(fVar12) >> 0x17 & 0xff) - 0x70);
                  (*(float *)(gen_frame + 0xec)) = fVar17;
                  if ((int)gen_fl2bits(fVar17) < 0) {
                    uVar7 = 0;
                  }
                  else {
                    (*(float *)(gen_frame + 0xe8)) = 4.34403e-44;
                    pfVar11 = &(*(float *)(gen_frame + 0xec));
                    if (0x1e < (int)gen_fl2bits(fVar17)) {
                      pfVar11 = &(*(float *)(gen_frame + 0xe8));
                    }
                    uVar7 = (ushort)((uint)gen_fl2bits(fVar12) >> 0x10) & 0x8000 |
                            (ushort)((uint)gen_fl2bits(fVar12) >> 0xd) & 0x3ff |
                            (ushort)((int)gen_fl2bits(*pfVar11) << 10);
                  }
                }
                fVar19 = gen_bits2f((int)gen_fl2bits(fVar19) + 1);
                *(ushort *)((int)puVar1 + 0x16) = uVar7;
              } while ((uint)gen_fl2bits(fVar19) < 0x11);
              uVar8 = (*(uint *)(gen_frame + 0xd4)) + 1;
              (*(uint *)(gen_frame + 0xd4)) = uVar8;
            } while (uVar8 < 0x11);
            fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xdc))) + 1);
            (*(float *)(gen_frame + 0xdc)) = fVar12;
          } while ((uint)gen_fl2bits(fVar12) < 6);
          F_004d6970(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x28));
          pvVar13 = (undefined *)F_004dccf0(0x4800,1,4,0);
          *(undefined * PTR32 *)((int)pvVar9 + 0x30) = pvVar13;
          if ((pvVar13 != (undefined *)0x0) &&
             (uVar8 = F_004d6a30(pvVar13,0,*(undefined4 *)((int)pvVar13 + 0x18),2),
             pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x9c)), uVar8 != 0)) {
            (*(float *)(gen_frame + 0xe0)) = 0.0;
            psVar14 = (short *)(uVar8 + 4);
            do {
              (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0xe0));
              (*(uint *)(gen_frame + 0xd4)) = 0x10;
              do {
                iVar20 = 0x10;
                fVar12 = (*(float *)(gen_frame + 0xdc));
                do {
                  sVar4 = (short)(uint)gen_fl2bits(fVar12);
                  psVar14[-1] = sVar4 + 0x11;
                  *psVar14 = sVar4 + 0x12;
                  psVar14[1] = sVar4 + 0x12;
                  psVar14[-2] = sVar4;
                  psVar14[2] = sVar4 + 1;
                  psVar14[3] = sVar4;
                  psVar14 = psVar14 + 6;
                  fVar12 = gen_bits2f((int)gen_fl2bits(fVar12) + 1);
                  iVar20 = iVar20 + -1;
                } while (iVar20 != 0);
                (*(float *)(gen_frame + 0xdc)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xdc))) + 0x11);
                uVar8 = (*(uint *)(gen_frame + 0xd4)) - 1;
                (*(uint *)(gen_frame + 0xd4)) = uVar8;
              } while (uVar8 != 0);
              fVar12 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0xe0))) + 0x121);
              (*(float *)(gen_frame + 0xe0)) = fVar12;
            } while ((uint)gen_fl2bits(fVar12) < 0x6c6);
            F_004d6ae0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x30));
            F_004d58e0(&(*(undefined4 *)(gen_frame + 0xa8)),0,0,0x34,0);
            F_004d58e0(&(*(undefined4 *)(gen_frame + 0xac)),0,8,0x34,8);
            uVar8 = F_004deb40((*(undefined * PTR32 *)(gen_frame + 0xa0)),&(*(undefined4 *)(gen_frame + 0xa8)),2);
            *(uint *)((int)pvVar9 + 0x24) = uVar8;
            if (uVar8 != 0) {
              pvVar13 = (undefined *)F_004dcc90(0x2510,4,0);
              *(undefined * PTR32 *)((int)pvVar9 + 0x2c) = pvVar13;
              if ((pvVar13 != (undefined *)0x0) &&
                 (uVar8 = F_004d68c0(pvVar13,0,*(undefined4 *)((int)pvVar13 + 0x18),2), uVar8 != 0
                 )) {
                puVar10 = (uint *)(uVar8 + 8);
                uVar8 = 0;
                do {
                  fVar12 = ((float)GEN_TOF(((float10)*(float *)((int)&REFG(float, 0x10a6b84) + uVar8) *
                                  (float10)REFG(double, 0x1088108))));
                  (*(float *)(gen_frame + 0xc8)) = fVar12;
                  puVar15 = (uint *)F_005212c0(&(*(double *)(gen_frame + 0x30)),*(float *)((int)&REFG(float, 0x10a6b78) + uVar8),
                                                 *(float *)((int)&REFG(float, 0x10a6b7c) + uVar8),
                                                 *(float *)((int)&REFG(float, 0x10a6b80) + uVar8),fVar12);
                  uVar2 = puVar15[1];
                  puVar10[-2] = *puVar15;
                  puVar10[-1] = uVar2;
                  puVar16 = (undefined2 *)
                            F_004d4590((int)&(*(float *)(gen_frame + 0xd0)) + 2,*(float *)((int)&REFG(float, 0x10a6b88) + uVar8));
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xd4)) + 0)) = *puVar16;
                  (*(uint *)(gen_frame + 0xd4)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xd4)) + 2)),*puVar16);
                  puVar16 = (undefined2 *)
                            F_004d4590((int)&(*(float *)(gen_frame + 0xe4)) + 2,*(float *)((int)&REFG(float, 0x10a6b8c) + uVar8));
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xd4)) + 2)) = *puVar16;
                  (*(uint *)(gen_frame + 0xd4)) = CONCAT22(*puVar16,(undefined2)(*(uint *)(gen_frame + 0xd4)));
                  *puVar10 = (*(uint *)(gen_frame + 0xd4));
                  dVar24 = F_004a4fe0();
                  (*(float *)(gen_frame + 0xc8)) = (float)dVar24;
                  dVar24 = F_004a4fe0();
                  (*(float *)(gen_frame + 0xa4)) = (float)dVar24;
                  puVar16 = (undefined2 *)F_004d4590((int)&(*(float *)(gen_frame + 0xe0)) + 2,(*(float *)(gen_frame + 0xc8)));
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 0)) = *puVar16;
                  (*(uint *)(gen_frame + 0xcc)) = CONCAT22((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 2)),*puVar16);
                  puVar16 = (undefined2 *)F_004d4590((int)&(*(float *)(gen_frame + 0xdc)) + 2,(*(float *)(gen_frame + 0xa4)));
                  pvVar9 = (*(undefined * PTR32 *)(gen_frame + 0x9c));
                  (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0xcc)) + 2)) = *puVar16;
                  (*(uint *)(gen_frame + 0xcc)) = CONCAT22(*puVar16,(ushort)(*(uint *)(gen_frame + 0xcc)));
                  puVar10[1] = (*(uint *)(gen_frame + 0xcc));
                  uVar8 = uVar8 + 0x18;
                  puVar10 = puVar10 + 4;
                } while (uVar8 < 0x3798);
                F_004d6970(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x2c));
                pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0xa0));
                uVar8 = F_004dcd60(0x40,2,0);
                *(uint *)((int)pvVar9 + 0x34) = uVar8;
                uVar8 = F_004dcd60(0x40,2,0);
                *(uint *)((int)pvVar9 + 0x38) = uVar8;
                uVar8 = F_004dcd60(0x20,2,0);
                *(uint *)((int)pvVar9 + 0x3c) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x1c),"g_WorldMatrix");
                *(uint *)((int)pvVar9 + 0x40) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x1c),"g_WorldViewProjMatrix");
                *(uint *)((int)pvVar9 + 0x44) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x1c),"g_Param");
                *(uint *)((int)pvVar9 + 0x48) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x20),"g_Sampler0");
                *(uint *)((int)pvVar9 + 0x4c) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x20),"g_Sampler1");
                *(uint *)((int)pvVar9 + 0x50) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x20),"g_Sampler2");
                *(uint *)((int)pvVar9 + 0x54) = uVar8;
                uVar8 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar13 + 0x20),"g_SamplerSky");
                uVar5 = REFG(float, 0x1087ef8);
                *(undefined4 *)((int)pvVar9 + 0x6c) = REFG(float, 0x10ac060);
                fVar12 = REFG(float, 0x1087f04);
                *(undefined4 *)((int)pvVar9 + 0x74) = uVar5;
                uVar5 = REFG(float, 0x1094880);
                *(uint *)((int)pvVar9 + 0x58) = uVar8;
                *(undefined4 *)((int)pvVar9 + 0x68) = 0;
                *(float *)((int)pvVar9 + 0x70) = fVar12;
                *(undefined4 *)((int)pvVar9 + 0x78) = uVar5;
                *(float *)((int)pvVar9 + 0x7c) = fVar12;
                *(float *)((int)pvVar9 + 0x80) = fVar12;
                *(undefined4 *)((int)pvVar9 + 0x84) = 0;
                F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
                return 1;
              }
            }
          }
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return 0;
}

/* ref: FUN_006322a0 */
byte F_006322a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6322a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  uint uVar4;
  uint uVar5;
  undefined * this_00;
  undefined4 uVar6;
  int * piVar7;
  int * piVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  
  piVar8 = (int *)((int)this + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar5 = 0;
  piVar7 = piVar8;
  while ((*piVar7 != 0 && (*(int *)(*piVar7 + 0x98) != 0))) {
    uVar5 = uVar5 + 1;
    piVar7 = piVar7 + 1;
    if (0x22 < uVar5) {
      iVar10 = 2;
      if ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 1 & 1) != 0) {
        iVar10 = 1;
      }
      pcVar2 = REFG(undefined * PTR32, 0x1322184);
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar5 = F_00b52710(REFG(undefined * PTR32, 0x1322184),
                           (int)pcVar2 - (int)(REFG(undefined * PTR32, 0x1322184) + 1),0);
      pcVar2 = (&REFG(undefined * PTR32, 0x1322184))[iVar10];
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar4 = F_00b52710(pcVar2,(int)pcVar3 - (int)(pcVar2 + 1),0);
      iVar10 = 0x23;
      do {
        if (*piVar8 == 0) {
          this_00 = (undefined *)0x0;
        }
        else {
          this_00 = *(undefined * PTR32 *)(*piVar8 + 0x98);
        }
        F_00b527c0(this_00,uVar5,uVar4);
        piVar8 = piVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      uVar5 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),"g_SamplerReflection");
      if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) + 0x98)));
      }
      (*(int *)(gen_frame + 0x4)) = iVar10;
      if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x24) == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *((undefined4 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x24) + 0x98)));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)uVar6;
      uVar4 = 0;
      do {
        iVar10 = (&(*(int *)(gen_frame + 0x4)))[uVar4];
        uVar11 = 0;
        if (*(int *)(iVar10 + 0x50) != 0) {
          iVar9 = 0;
          do {
            if (*((uint *)GEN_TOP((*(int *)(iVar10 + 0x68) + 4 + iVar9))) == uVar5) {
              *((undefined2 *)GEN_TOP((*(int *)(iVar10 + 0x68) + 10 + iVar9))) = 2;
            }
            uVar11 = uVar11 + 1;
            iVar9 = iVar9 + 0xc;
          } while (uVar11 < *(uint *)(iVar10 + 0x50));
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 2);
      *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) | 4;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00632400 */
byte F_00632400(unsigned int gen_a0)
{
  GEN_ENTER(0x632400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_004dcd60(0x50,1,8);
  *(uint *)((int)this + 4) = uVar1;
  return uVar1 != 0;
}

/* ref: FUN_00632420 */
byte F_00632420(unsigned int gen_a0)
{
  GEN_ENTER(0x632420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint * puVar1;
  longlong lVar2;
  ulonglong uVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  
  iVar8 = REFG(int, 0x1370b90);
  fVar4 = REFG(float, 0x1087f04);
  puVar1 = (uint *)((int)this + 0xec);
  *puVar1 = *(uint *)(REFG(int, 0x1370b90) + 0x90);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(iVar8 + 0x94);
  (*(uint * PTR32 *)(gen_frame + 0x98)) = ((uint *)(uintptr_t)gen_fl2bits((float)(fVar4)));
  if (*(char *)(REFG(int, 0x1371278) + 0x1e) == '\x02') {
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = ((float)GEN_TOF(SQRT((float10)*(double *)&REFG(undefined, 0x1092098))));
    (*(uint * PTR32 *)(gen_frame + 0x98)) = ((uint *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)*(double *)&REFG(undefined, 0x1092098)))))));
  }
  else if (*(char *)(REFG(int, 0x1371278) + 0x1e) == '\x03') {
    (*(uint * PTR32 *)(gen_frame + 0x98)) = ((uint *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10928e4))));
  }
  fVar9 = (float10)(int)*puVar1;
  if ((int)*puVar1 < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(uint * PTR32 *)(gen_frame + 0x98)))));
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  lVar2 = (longlong)TRUNC(fVar10 * fVar9);
  (*(longlong *)(gen_frame + 0x80)) = lVar2;
  lVar2 = (*(longlong *)(gen_frame + 0x80));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x80)) + 0)) = (uint)lVar2;
  *puVar1 = (uint)(*(longlong *)(gen_frame + 0x80));
  fVar9 = (float10)*(int *)((int)this + 0xf0);
  if (*(int *)((int)this + 0xf0) < 0) {
    fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(uint * PTR32 *)(gen_frame + 0x98)) = ((uint *)GEN_TOP(CONCAT22(((undefined2)0x27f),(*(undefined2 *)((char *)&(*(uint * PTR32 *)(gen_frame + 0x98)) + 0)))));
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  uVar3 = (ulonglong)TRUNC(fVar9 * fVar10);
  (*(ulonglong *)(gen_frame + 0x90)) = uVar3;
  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 0)) = (uint)uVar3;
  *(uint *)((int)this + 0xf0) = (uint)(*(ulonglong *)(gen_frame + 0x90));
  bVar7 = 1 - *(char *)(REFG(int, 0x1371278) + 0x23);
  (*(uint *)(gen_frame + 0x8c)) = (uint)(*(ulonglong *)(gen_frame + 0x90)) >> (bVar7 & 0x1f);
  (*(uint *)(gen_frame + 0x88)) = (uint)(*(longlong *)(gen_frame + 0x80)) >> (bVar7 & 0x1f);
  iVar8 = (-(uint)(*(char *)(REFG(int, 0x1371278) + 0x22) != '\0') & 0x1010) + 0x1450;
  (*(longlong *)(gen_frame + 0x80)) = lVar2;
  (*(ulonglong *)(gen_frame + 0x90)) = uVar3;
  uVar5 = F_004dca20(puVar1,1,0x4250,0x200008,3);
  *(uint *)((int)this + 0x20) = uVar5;
  if (uVar5 != 0) {
    uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x88)),1,0x4250,0x200008,3);
    uVar3 = (*(ulonglong *)(gen_frame + 0x90));
    *(uint *)((int)this + 0x34) = uVar5;
    if (uVar5 != 0) {
      (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
      (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
      (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0x24);
      do {
        uVar5 = F_004dca20(puVar1,1,iVar8,0x100008,3);
        (*(uint * PTR32 *)(gen_frame + 0x98))[-5] = uVar5;
        if (uVar5 == 0) {
          return 0;
        }
        uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x88)),1,iVar8,0x100008,3);
        *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
        if (uVar5 == 0) {
          return 0;
        }
        (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
        iVar6 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
        (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(iVar6);
        (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(iVar6,(uint)(*(ulonglong *)(gen_frame + 0x90)));
      } while (iVar6 < 4);
      uVar5 = F_004dca20(puVar1,1,0x2460,0x100008,3);
      *(uint *)((int)this + 0x40) = uVar5;
      if (uVar5 != 0) {
        uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x88)),1,0x2460,0x100008,3);
        *(uint *)((int)this + 0x44) = uVar5;
        if (uVar5 != 0) {
          (*(undefined4 *)(gen_frame + 0x10)) = 0x100;
          (*(undefined4 *)(gen_frame + 0x14)) = 0x100;
          uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x10)),1,0x1450,0x100000,3);
          *(uint *)((int)this + 0x58) = uVar5;
          if (uVar5 != 0) {
            (*(undefined4 *)(gen_frame + 0x8)) = 0x100;
            (*(undefined4 *)(gen_frame + 0xc)) = 0x100;
            uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x8)),1,0x1450,0x100000,3);
            *(uint *)((int)this + 0x8c) = uVar5;
            if (uVar5 != 0) {
              (*(uint *)(gen_frame + 0x20)) = *puVar1 >> 1;
              (*(uint *)(gen_frame + 0x24)) = *(uint *)((int)this + 0xf0) >> 1;
              uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x20)),1,0x2250,0x100008,3);
              uVar3 = (*(ulonglong *)(gen_frame + 0x90));
              *(uint *)((int)this + 200) = uVar5;
              if (uVar5 != 0) {
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0xc0);
                do {
                  (*(uint *)(gen_frame + 0x64)) = *(uint *)((int)this + 0xf0) >> 1;
                  (*(uint *)(gen_frame + 0x60)) = *puVar1 >> 1;
                  uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x60)),1,0x2460,0x100008,3);
                  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  uVar5 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(uVar5);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(uVar5,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (uVar5 < 2);
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0x90);
                do {
                  uVar5 = F_004dca20(puVar1,1,iVar8,0x100008,3);
                  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  iVar6 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(iVar6);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(iVar6,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (iVar6 == 0);
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0x94);
                do {
                  (*(uint *)(gen_frame + 0x34)) = *(uint *)((int)this + 0xf0) >> 1;
                  (*(uint *)(gen_frame + 0x30)) = *puVar1 >> 1;
                  uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x30)),1,iVar8,0x100008,3);
                  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  uVar5 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(uVar5);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(uVar5,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (uVar5 < 4);
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0xa4);
                do {
                  (*(uint *)(gen_frame + 0x54)) = *(uint *)((int)this + 0xf0) >> 2;
                  (*(uint *)(gen_frame + 0x50)) = *puVar1 >> 2;
                  uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x50)),1,iVar8,0x100008,3);
                  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  uVar5 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(uVar5);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(uVar5,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (uVar5 < 4);
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0xb4);
                do {
                  (*(uint *)(gen_frame + 0x7c)) = *(uint *)((int)this + 0xf0) >> 3;
                  (*(uint *)(gen_frame + 0x78)) = *puVar1 >> 3;
                  uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x78)),1,iVar8,0x100008,3);
                  uVar3 = (*(ulonglong *)(gen_frame + 0x90));
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  uVar5 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(uVar5);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(uVar5,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (uVar5 < 3);
                (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = 0.0;
                (*(ulonglong *)(gen_frame + 0x90)) = uVar3 & 0xffffffff;
                (*(uint * PTR32 *)(gen_frame + 0x98)) = (uint *)((int)this + 0xcc);
                do {
                  (*(undefined4 *)(gen_frame + 0x40)) = 0x180;
                  (*(undefined4 *)(gen_frame + 0x44)) = 0x280;
                  uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x40)),1,0x1450,0x100000,3);
                  *(*(uint * PTR32 *)(gen_frame + 0x98)) = uVar5;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  (*(uint * PTR32 *)(gen_frame + 0x98)) = (*(uint * PTR32 *)(gen_frame + 0x98)) + 1;
                  uVar5 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4))) + 1;
                  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x90)) + 4)) = gen_bits2f(uVar5);
                  (*(ulonglong *)(gen_frame + 0x90)) = CONCAT44(uVar5,(uint)(*(ulonglong *)(gen_frame + 0x90)));
                } while (uVar5 < 4);
                (*(undefined4 *)(gen_frame + 0x70)) = 0x180;
                (*(undefined4 *)(gen_frame + 0x74)) = 0x280;
                uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x70)),1,0x1450,0x100000,3);
                *(uint *)((int)this + 0xdc) = uVar5;
                if (uVar5 != 0) {
                  (*(undefined4 *)(gen_frame + 0x68)) = 0x180;
                  (*(undefined4 *)(gen_frame + 0x6c)) = 0x280;
                  uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x68)),1,0x1450,0x100000,3);
                  *(uint *)((int)this + 0xe4) = uVar5;
                  if (uVar5 != 0) {
                    (*(undefined4 *)(gen_frame + 0x58)) = 0x180;
                    (*(undefined4 *)(gen_frame + 0x5c)) = 0x280;
                    uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x58)),1,0x4250,0x200000,3);
                    *(uint *)((int)this + 0xe0) = uVar5;
                    if (uVar5 != 0) {
                      (*(undefined4 *)(gen_frame + 0x48)) = 0x180;
                      (*(undefined4 *)(gen_frame + 0x4c)) = 0x280;
                      uVar5 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x48)),1,0x4250,0x200000,3);
                      *(uint *)((int)this + 0xe8) = uVar5;
                      if (uVar5 != 0) {
                        uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x88)),1,iVar8,0x100008,3);
                        *(uint *)((int)this + 0x38) = uVar5;
                        if (uVar5 != 0) {
                          uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x88)),1,iVar8,0x100008,3);
                          *(uint *)((int)this + 0x3c) = uVar5;
                          if (uVar5 != 0) {
                            F_00c48350((undefined *)((int)this + 0x110),0,0x40);
                            F_00c48350((undefined *)((int)this + 0x150),0,0x40);
                            *(undefined4 *)((int)this + 400) =
                                 *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
                            *(undefined4 *)((int)this + 0x194) = *(undefined4 *)((int)this + 0x20);
                            (*(uint *)(gen_frame + 0x38)) = *puVar1 >> 1;
                            (*(uint *)(gen_frame + 0x3c)) = *(uint *)((int)this + 0xf0) >> 1;
                            uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x38)),1,0x4250,0x200008,3);
                            *(uint *)((int)this + 0x198) = uVar5;
                            if (uVar5 != 0) {
                              (*(uint *)(gen_frame + 0x28)) = *puVar1 >> 1;
                              (*(uint *)(gen_frame + 0x2c)) = *(uint *)((int)this + 0xf0) >> 1;
                              uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x28)),1,iVar8,0x100008,3);
                              *(uint *)((int)this + 0x19c) = uVar5;
                              if (uVar5 != 0) {
                                (*(uint *)(gen_frame + 0x18)) = *puVar1 >> 1;
                                (*(uint *)(gen_frame + 0x1c)) = *(uint *)((int)this + 0xf0) >> 1;
                                uVar5 = F_004dca20(&(*(uint *)(gen_frame + 0x18)),1,iVar8,0x100008,3);
                                *(uint *)((int)this + 0x1a0) = uVar5;
                                if (uVar5 != 0) {
                                  uVar5 = *(uint *)((int)this + 0xf0) >> 1;
                                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x80)) + 0)) = *puVar1 >> 1;
                                  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x80)) + 4)) = uVar5;
                                  (*(longlong *)(gen_frame + 0x80)) = CONCAT44(uVar5,*puVar1 >> 1);
                                  uVar5 = F_004dca20(&(*(longlong *)(gen_frame + 0x80)),1,iVar8,0x100008,3);
                                  *(uint *)((int)this + 0x1a4) = uVar5;
                                  return uVar5 != 0;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00632bb0 */
byte F_00632bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x632bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x50);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x54);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  puVar1 = (undefined4 *)((int)this + 0xf4);
  *puVar1 = *param_1;
  *(undefined4 *)((int)this + 0xf8) = param_1[1];
  uVar3 = F_004dca20(puVar1,1,0x5100,0x100000,3);
  *(uint *)((int)this + 0x48) = uVar3;
  if (uVar3 != 0) {
    uVar3 = F_004dca20(puVar1,1,0x5140,0x200000,3);
    *(uint *)((int)this + 0x4c) = uVar3;
    if (uVar3 != 0) {
      (*(undefined4 *)(gen_frame + 0x4)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x8)) = *param_1;
      uVar3 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x4)),1,0x5100,0x100000,3);
      *(uint *)((int)this + 0x50) = uVar3;
      if (uVar3 != 0) {
        uVar3 = F_004dca20(&(*(undefined4 *)(gen_frame + 0x4)),1,0x5140,0x200000,3);
        *(uint *)((int)this + 0x54) = uVar3;
        return uVar3 != 0;
      }
    }
  }
  return 0;
}

/* ref: FUN_00632cc0 */
byte F_00632cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x632cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int iVar6;
  uint * puVar7;
  
  (*(uint *)(gen_frame + 0x4)) = *(uint *)(REFG(int, 0x1370b90) + 0x8c);
  (*(uint *)(gen_frame + 0x8)) = 4;
  puVar2 = &(*(uint *)(gen_frame + 0x4));
  if (3 < *(uint *)(REFG(int, 0x1370b90) + 0x8c)) {
    puVar2 = &(*(uint *)(gen_frame + 0x8));
  }
  uVar3 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  puVar2 = (uint *)((int)this + 0xfc);
  *puVar2 = uVar3;
  *(uint *)((int)this + 0x100) = param_1[1];
  *puVar2 = uVar3 * 4;
  piVar5 = *(int * PTR32 *)((int)this + 0x60);
  *(int *)((int)this + 0x100) = *(int *)((int)this + 0x100) * 4;
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  uVar3 = F_004dca20(puVar2,1,0x5100,0x100000,3);
  *(uint *)((int)this + 0x60) = uVar3;
  if (uVar3 != 0) {
    piVar5 = (int *)((int)this + 100);
    (*(uint *)(gen_frame + 0x4)) = 4;
    do {
      piVar1 = (int *)*piVar5;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar5 = 0;
      }
      piVar5 = piVar5 + 1;
      uVar3 = (*(uint *)(gen_frame + 0x4)) - 1;
      (*(uint *)(gen_frame + 0x4)) = uVar3;
    } while (uVar3 != 0);
    (*(uint *)(gen_frame + 0x4)) = 0;
    if ((*(uint *)(gen_frame + 0x8)) != 0) {
      puVar7 = (uint *)((int)this + 100);
      do {
        uVar3 = F_004dca20(puVar2,1,0x5140,0x200000,3);
        *puVar7 = uVar3;
        if (uVar3 == 0) {
          return 0;
        }
        uVar3 = (*(uint *)(gen_frame + 0x4)) + 1;
        puVar7 = puVar7 + 1;
        (*(uint *)(gen_frame + 0x4)) = uVar3;
      } while (uVar3 < (*(uint *)(gen_frame + 0x8)));
    }
    piVar5 = *(int * PTR32 *)((int)this + 0x74);
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
      *(undefined4 *)((int)this + 0x74) = 0;
    }
    uVar3 = F_004dca20(puVar2,1,0x5140,0x200000,3);
    *(uint *)((int)this + 0x74) = uVar3;
    if (uVar3 != 0) {
      uVar3 = *param_1;
      *(uint *)((int)this + 0x108) = param_1[1] >> 1;
      piVar5 = (int *)((int)this + 0x104);
      *(int *)((int)this + 0x108) = *(int *)((int)this + 0x108) * 4;
      piVar1 = *(int * PTR32 *)((int)this + 0x78);
      *piVar5 = (uVar3 >> 1) << 4;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *(undefined4 *)((int)this + 0x78) = 0;
      }
      uVar3 = F_004dca20(piVar5,1,0x5100,0x100000,3);
      *(uint *)((int)this + 0x78) = uVar3;
      if (uVar3 != 0) {
        puVar7 = (uint *)((int)this + 0x7c);
        iVar6 = 4;
        puVar2 = puVar7;
        do {
          piVar1 = (int *)*puVar2;
          if (piVar1 != (int *)0x0) {
            ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if ((*(uint *)(gen_frame + 0x8)) != 0) {
          uVar3 = 0;
          do {
            uVar4 = F_004dca20(piVar5,1,0x5140,0x200000,3);
            *puVar7 = uVar4;
            if (uVar4 == 0) {
              return 0;
            }
            uVar3 = uVar3 + 1;
            puVar7 = puVar7 + 1;
          } while (uVar3 < (*(uint *)(gen_frame + 0x8)));
        }
        return 1;
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00632ed0 */
byte F_00632ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x632ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  uint * puVar1;
  uint * puVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  undefined4 * puVar9;
  int iVar10;
  float10 fVar11;
  
  iVar10 = REFG(int, 0x1370b90);
  fVar5 = REFG(float, 0x1087f04);
  puVar1 = (uint *)((int)this + 0xe8);
  *puVar1 = *(uint *)(REFG(int, 0x1370b90) + 0x90);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(iVar10 + 0x94);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar5)));
  if (*(char *)(REFG(int, 0x1371278) + 0x1e) == '\x02') {
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = ((float)GEN_TOF(SQRT((float10)*(double *)&REFG(undefined, 0x1092098))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)*(double *)&REFG(undefined, 0x1092098)))))));
  }
  else if (*(char *)(REFG(int, 0x1371278) + 0x1e) == '\x03') {
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x10928e4))));
  }
  fVar11 = (float10)(int)*puVar1;
  if ((int)*puVar1 < 0) {
    fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  puVar2 = (uint *)((int)this + 0xec);
  (*(uint * PTR32 *)(gen_frame + 0x58)) = puVar2;
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  lVar3 = (longlong)TRUNC((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x68))))) * fVar11);
  (*(longlong *)(gen_frame + 0x0)) = lVar3;
  lVar3 = (*(longlong *)(gen_frame + 0x0));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 0)) = (uint)lVar3;
  *puVar1 = (uint)(*(longlong *)(gen_frame + 0x0));
  fVar11 = (float10)(int)*puVar2;
  if ((int)*puVar2 < 0) {
    fVar11 = fVar11 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(((undefined2)0x27f) | 0xc00);
  uVar4 = (ulonglong)TRUNC(fVar11 * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x68))))));
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4;
  uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 0)) = (uint)uVar4;
  *puVar2 = (uint)(*(ulonglong *)(gen_frame + 0x5c));
  bVar8 = 1 - *(char *)(REFG(int, 0x1371278) + 0x23);
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)0x0;
  (*(uint *)(gen_frame + 0x54)) = (uint)(*(ulonglong *)(gen_frame + 0x5c)) >> (bVar8 & 0x1f);
  (*(uint *)(gen_frame + 0x50)) = (uint)(*(longlong *)(gen_frame + 0x0)) >> (bVar8 & 0x1f);
  iVar10 = (-(uint)(*(char *)(REFG(int, 0x1371278) + 0x22) != '\0') & 0x1010) + 0x1450;
  puVar9 = (undefined4 *)((int)this + 0x20);
  (*(longlong *)(gen_frame + 0x0)) = lVar3;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4;
  do {
    if (((undefined *)puVar9[-5] != (undefined *)0x0) &&
       (bVar8 = F_004da550((undefined *)puVar9[-5],puVar1,1,iVar10), bVar8 == 0)) {
      return 0;
    }
    if (((undefined *)*puVar9 != (undefined *)0x0) &&
       (bVar8 = F_004da550((undefined *)*puVar9,&(*(uint *)(gen_frame + 0x50)),1,iVar10), bVar8 == 0)) {
      return 0;
    }
    iVar6 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    puVar9 = puVar9 + 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)iVar6;
  } while (iVar6 < 4);
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x3c) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x3c),puVar1,1,0), bVar8 == 0)) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x40) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x40),&(*(uint *)(gen_frame + 0x50)),1,0), bVar8 == 0)) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1c) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1c),puVar1,1,0), bVar8 == 0)) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x30) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x30),&(*(uint *)(gen_frame + 0x50)),1,0), bVar8 == 0)) {
    return 0;
  }
  uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
  puVar2 = (*(uint * PTR32 *)(gen_frame + 0x58));
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = 0.0;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4 & 0xffffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x8c);
  do {
    if ((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)) != (undefined *)0x0) {
      (*(uint *)(gen_frame + 0x48)) = *puVar1;
      (*(uint *)(gen_frame + 0x4c)) = *puVar2;
      bVar8 = F_004da550((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x48)),1,iVar10);
      if (bVar8 == 0) {
        return 0;
      }
    }
    uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    iVar6 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4))) + 1;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(iVar6);
    (*(ulonglong *)(gen_frame + 0x5c)) = CONCAT44(iVar6,(uint)(*(ulonglong *)(gen_frame + 0x5c)));
  } while (iVar6 == 0);
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = 0.0;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4 & 0xffffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x90);
  do {
    if ((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)) != (undefined *)0x0) {
      (*(uint *)(gen_frame + 0x40)) = *puVar1 >> 1;
      (*(uint *)(gen_frame + 0x44)) = *puVar2 >> 1;
      bVar8 = F_004da550((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x40)),1,iVar10);
      if (bVar8 == 0) {
        return 0;
      }
    }
    uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    uVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4))) + 1;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(uVar7);
    (*(ulonglong *)(gen_frame + 0x5c)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x5c)));
  } while (uVar7 < 4);
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = 0.0;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4 & 0xffffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0xa0);
  do {
    if ((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)) != (undefined *)0x0) {
      (*(uint *)(gen_frame + 0x38)) = *puVar1 >> 2;
      (*(uint *)(gen_frame + 0x3c)) = *puVar2 >> 2;
      bVar8 = F_004da550((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x38)),1,iVar10);
      if (bVar8 == 0) {
        return 0;
      }
    }
    uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    uVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4))) + 1;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(uVar7);
    (*(ulonglong *)(gen_frame + 0x5c)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x5c)));
  } while (uVar7 < 4);
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = 0.0;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4 & 0xffffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0xb0);
  do {
    if ((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)) != (undefined *)0x0) {
      (*(uint *)(gen_frame + 0x30)) = *puVar1 >> 3;
      (*(uint *)(gen_frame + 0x34)) = *puVar2 >> 3;
      bVar8 = F_004da550((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x30)),1,iVar10);
      if (bVar8 == 0) {
        return 0;
      }
    }
    uVar4 = (*(ulonglong *)(gen_frame + 0x5c));
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    uVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4))) + 1;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(uVar7);
    (*(ulonglong *)(gen_frame + 0x5c)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x5c)));
  } while (uVar7 < 3);
  (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = 0.0;
  (*(ulonglong *)(gen_frame + 0x5c)) = uVar4 & 0xffffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0xbc);
  do {
    if ((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)) != (undefined *)0x0) {
      (*(uint *)(gen_frame + 0x28)) = *puVar1 >> 1;
      (*(uint *)(gen_frame + 0x2c)) = *puVar2 >> 1;
      bVar8 = F_004da550((undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x68)),&(*(uint *)(gen_frame + 0x28)),1,0);
      if (bVar8 == 0) {
        return 0;
      }
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x68)) = (*(undefined4 * PTR32 *)(gen_frame + 0x68)) + 1;
    uVar7 = (int)gen_fl2bits((*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4))) + 1;
    (*(float *)((char *)&(*(ulonglong *)(gen_frame + 0x5c)) + 4)) = gen_bits2f(uVar7);
    (*(ulonglong *)(gen_frame + 0x5c)) = CONCAT44(uVar7,(uint)(*(ulonglong *)(gen_frame + 0x5c)));
  } while (uVar7 < 2);
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0xc4) != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x20)) = *puVar1 >> 1;
    (*(uint *)(gen_frame + 0x24)) = *puVar2 >> 1;
    bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0xc4),&(*(uint *)(gen_frame + 0x20)),1,0);
    if (bVar8 == 0) {
      return 0;
    }
  }
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x34) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x34),&(*(uint *)(gen_frame + 0x50)),1,iVar10), bVar8 == 0)) {
    return 0;
  }
  if ((*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x38) != (undefined *)0x0) &&
     (bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x38),&(*(uint *)(gen_frame + 0x50)),1,iVar10), bVar8 == 0)) {
    return 0;
  }
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x194) != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x18)) = *puVar1 >> 1;
    (*(uint *)(gen_frame + 0x1c)) = *puVar2 >> 1;
    bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x194),&(*(uint *)(gen_frame + 0x18)),1,0);
    if (bVar8 == 0) {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x198) != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x10)) = *puVar1 >> 1;
    (*(uint *)(gen_frame + 0x14)) = *puVar2 >> 1;
    bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x198),&(*(uint *)(gen_frame + 0x10)),1,iVar10);
    if (bVar8 == 0) {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x19c) != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x8)) = *puVar1 >> 1;
    (*(uint *)(gen_frame + 0xc)) = *puVar2 >> 1;
    bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x19c),&(*(uint *)(gen_frame + 0x8)),1,iVar10);
    if (bVar8 == 0) {
      return 0;
    }
  }
  if (*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1a0) != (undefined *)0x0) {
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 0)) = *puVar1 >> 1;
    (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x0)) + 4)) = *puVar2 >> 1;
    (*(longlong *)(gen_frame + 0x0)) = CONCAT44(*puVar2 >> 1,*puVar1 >> 1);
    bVar8 = F_004da550(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1a0),&(*(longlong *)(gen_frame + 0x0)),1,iVar10);
    if (bVar8 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00633360 */
uint F_00633360(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x633360u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  uint uVar4;
  undefined4 * PTR32 * ppuVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  float10 fVar10;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  uVar4 = *(uint *)(REFG(int, 0x137127c) + 0x66f4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = *(undefined4 * PTR32 *)(uVar4 + 0xac);
  if (*(char *)(uVar4 + 0xb8) == '\0') {
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = *(undefined4 * PTR32 *)(uVar4 + 0xa8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
    fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 0xa4) * (float10)REFG(double, 0x1088108))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(fVar3)));
    fVar10 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)fVar3);
    puVar6 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar6;
    ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0xc))))) < (float10)1)) {
      ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
    }
    puVar6 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x0)))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppuVar5)))))))))
    ;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar6;
    fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6)));
    fVar10 = fVar10 * fVar10;
  }
  else {
    puVar6 = *(undefined4 * PTR32 *)(uVar4 + 0xb4);
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar6;
    puVar8 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)*(float *)(uVar4 + 0xa8) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6)))))))));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar8;
    fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar8)));
    fVar10 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) + fVar10 * fVar10;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar10)));
  puVar6 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x0))))) * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined4 * PTR32 *)(gen_frame + 0x0))))) + (float10)(float)fVar10))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  puVar6 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6)))))))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1094884)));
  ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
  puVar6 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) * (float10)*(double *)&REFG(undefined, 0x109cb28)))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar6;
  if (!((double)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar6))) < REFG(double, 0x1094800))) {
    ppuVar5 = &(*(undefined4 * PTR32 *)(gen_frame + 0x0));
  }
  uVar1 = *(undefined4 *)(uVar4 + 0x94);
  uVar2 = *(undefined4 *)(uVar4 + 0x98);
  puVar8 = *ppuVar5;
  puVar6 = (undefined4 *)(uVar4 + 0x10);
  *param_4 = *(undefined4 *)(uVar4 + 0x90);
  param_4[1] = uVar1;
  param_4[2] = uVar2;
  param_4[3] = puVar8;
  puVar8 = puVar6;
  puVar9 = param_4 + 4;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
  puVar6 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x10)),puVar6);
  puVar8 = param_4 + 0x14;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  puVar6 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x10)),(uint)(*(undefined4 * PTR32 *)(gen_frame + 0x8)),uVar4 + 0x50);
  puVar8 = param_4 + 0x24;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  param_4[0x34] = uVar4;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar4;
}

/* ref: FUN_00633520 */
uint F_00633520(unsigned int gen_a0)
{
  GEN_ENTER(0x633520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 4;
  *(undefined4 *)((int)this + 0x1c) = 6;
  uVar4 = F_004dcc90(0x30,4,8);
  *(uint *)((int)this + 0x10) = uVar4;
  uVar4 = F_004dccf0(0xc,1,4,8);
  *(uint *)((int)this + 0x14) = uVar4;
  puVar5 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  uVar3 = REFG(float, 0x1090708);
  uVar2 = REFG(float, 0x1087f04);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1090708));
    puVar5[1] = uVar2;
    puVar5[2] = uVar2;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
    puVar5[5] = uVar2;
    puVar5[6] = uVar3;
    puVar5[7] = uVar3;
    puVar5[9] = uVar2;
    puVar5[8] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = uVar2;
    F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
  }
  puVar5 = (undefined4 *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
  uVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 1;
    puVar5[1] = 0x20002;
    puVar5[2] = 0x10003;
    uVar4 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x14));
  }
  return uVar4;
}

/* ref: FUN_00633670 */
uint F_00633670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x633670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  int * piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  ushort * puVar9;
  ushort uVar10;
  undefined * this_00;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  undefined4 * puVar14;
  int iVar15;
  float10 fVar16;
  
  uVar4 = REFG(float, 0x1090708);
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0x24) = uVar4;
  *(undefined4 *)((int)this + 0x28) = uVar4;
  uVar4 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x34) = uVar4;
  *(undefined4 *)((int)this + 0x38) = uVar4;
  piVar3 = *(int * PTR32 *)((int)this + 0x10);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  if ((char)param_1 == '\0') {
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined4 *)((int)this + 0x18) = 0x82;
    *(undefined4 *)((int)this + 0x1c) = 0x300;
    uVar6 = F_004dcc90(0x618,4,8);
    *(uint *)((int)this + 0x10) = uVar6;
    uVar6 = F_004dccf0(0x600,1,4,8);
    *(uint *)((int)this + 0x14) = uVar6;
    puVar7 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
    if (puVar7 != (undefined4 *)0x0) {
      (*(uint *)(gen_frame + 0x30)) = 0;
      do {
        fVar16 = (float10)(int)(*(uint *)(gen_frame + 0x30));
        uVar6 = 0;
        if ((int)(*(uint *)(gen_frame + 0x30)) < 0) {
          fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        (*(float *)(gen_frame + 0x1c)) = (float)fVar16;
        do {
          puVar14 = puVar7;
          uVar6 = uVar6 + 1;
          (*(float *)(gen_frame + 0x24)) = gen_bits2f(uVar6);
          fVar16 = (float10)(int)uVar6;
          (*(uint *)(gen_frame + 0x20)) = uVar6;
          if ((int)uVar6 < 0) {
            fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
          }
          fVar1 = ((float)GEN_TOF(((fVar16 * (float10)*(double *)&REFG(undefined, 0x1080228)) /
                         (float10)*(double *)&REFG(undefined, 0x109cac0))));
          (*(float *)(gen_frame + 0x28)) = fVar1;
          fVar16 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          fVar2 = (float)fVar16;
          (*(float *)(gen_frame + 0x2c)) = fVar2;
          (*(float *)(gen_frame + 0x24)) = fVar2;
          fVar16 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          fVar1 = (float)fVar16;
          (*(float *)(gen_frame + 0x2c)) = fVar1;
          (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
          (*(float *)(gen_frame + 0x54)) = fVar1;
          (*(float *)(gen_frame + 0x58)) = fVar2;
          (*(undefined4 *)(gen_frame + 0x44)) = 0;
          (*(undefined4 *)(gen_frame + 0x48)) = 0;
          (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(-(float10)fVar2));
          (*(undefined4 *)(gen_frame + 0x50)) = 0;
          (*(undefined4 *)(gen_frame + 0x60)) = 0;
          (*(float *)(gen_frame + 0x68)) = fVar1;
          (*(undefined4 *)(gen_frame + 0x70)) = 0;
          (*(undefined4 *)(gen_frame + 0x74)) = 0;
          (*(undefined4 *)(gen_frame + 0x78)) = 0;
          fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x1c)) * (float10)*(float *)&REFG(undefined, 0x1320678)) *
                         (float10)*(double *)&REFG(undefined, 0x10ac058))));
          (*(float *)(gen_frame + 0x24)) = fVar1;
          F_0065ed60(&(*(undefined4 *)(gen_frame + 0x40)),fVar1);
          F_0065ee80(&(*(undefined4 *)(gen_frame + 0x40)),(float)(float10)0);
          F_004ee850(&(*(undefined4 *)(gen_frame + 0x0)),0x1302c80,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
          (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x0));
          (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x4));
          *puVar14 = (*(undefined4 *)(gen_frame + 0x0));
          (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x8));
          puVar14[1] = (*(undefined4 *)(gen_frame + 0x4));
          puVar14[2] = (*(undefined4 *)(gen_frame + 0x8));
          uVar5 = REFG(float, 0x1090708);
          uVar4 = REFG(float, 0x1087f04);
          puVar7 = puVar14 + 3;
          uVar6 = (*(uint *)(gen_frame + 0x20));
        } while ((*(uint *)(gen_frame + 0x20)) < 8);
        uVar6 = (*(uint *)(gen_frame + 0x30)) + 1;
        (*(uint *)(gen_frame + 0x30)) = uVar6;
      } while (uVar6 < 0x10);
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
      *puVar7 = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      puVar14[4] = uVar4;
      (*(undefined4 *)(gen_frame + 0x34)) = 0;
      puVar14[5] = 0;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar5;
      puVar14[6] = 0;
      (*(undefined4 *)(gen_frame + 0x3c)) = 0;
      puVar14[7] = uVar5;
      puVar14[8] = 0;
      F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
    }
    puVar9 = (ushort *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
    uVar6 = 0;
    if (puVar9 == (ushort *)0x0) goto LAB_00633ca8;
    uVar10 = 0;
    (*(uint *)(gen_frame + 0x30)) = 1;
    uVar12 = 9;
    uVar11 = 8;
    (*(float *)(gen_frame + 0x28)) = 2.24208e-44;
    do {
      uVar6 = (*(uint *)(gen_frame + 0x30));
      *puVar9 = uVar10;
      puVar9[1] = uVar11 & 0x7f;
      puVar9[2] = uVar12 & 0x7f;
      puVar9[3] = uVar10;
      puVar9[4] = uVar12 & 0x7f;
      puVar9[5] = (ushort)(*(uint *)(gen_frame + 0x30));
      iVar15 = (*(uint *)(gen_frame + 0x30)) + 1;
      (*(uint *)(gen_frame + 0x30)) = iVar15;
      puVar9[6] = uVar10 + 1;
      puVar9[7] = uVar11 + 1 & 0x7f;
      uVar13 = uVar12 + 1 & 0x7f;
      puVar9[8] = uVar13;
      puVar9[9] = uVar10 + 1;
      puVar9[10] = uVar13;
      puVar9[0xb] = (ushort)iVar15;
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 2;
      puVar9[0xc] = uVar10 + 2;
      puVar9[0xd] = uVar11 + 2 & 0x7f;
      uVar13 = uVar12 + 2 & 0x7f;
      puVar9[0xe] = uVar13;
      puVar9[0xf] = uVar10 + 2;
      puVar9[0x10] = uVar13;
      puVar9[0x11] = (ushort)(uVar6 + 2);
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 3;
      puVar9[0x12] = uVar10 + 3;
      puVar9[0x13] = uVar11 + 3 & 0x7f;
      uVar13 = uVar12 + 3 & 0x7f;
      puVar9[0x14] = uVar13;
      puVar9[0x15] = uVar10 + 3;
      puVar9[0x16] = uVar13;
      puVar9[0x17] = (ushort)(uVar6 + 3);
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 4;
      puVar9[0x18] = uVar10 + 4;
      puVar9[0x19] = uVar11 + 4 & 0x7f;
      uVar13 = uVar12 + 4 & 0x7f;
      puVar9[0x1a] = uVar13;
      puVar9[0x1b] = uVar10 + 4;
      puVar9[0x1c] = uVar13;
      puVar9[0x1d] = (ushort)(uVar6 + 4);
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 5;
      puVar9[0x1e] = uVar10 + 5;
      puVar9[0x1f] = uVar11 + 5 & 0x7f;
      uVar13 = uVar12 + 5 & 0x7f;
      puVar9[0x20] = uVar13;
      puVar9[0x21] = uVar10 + 5;
      puVar9[0x22] = uVar13;
      puVar9[0x23] = (ushort)(uVar6 + 5);
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 6;
      puVar9[0x24] = uVar10 + 6;
      puVar9[0x25] = uVar11 + 6 & 0x7f;
      uVar13 = uVar12 + 6 & 0x7f;
      puVar9[0x26] = uVar13;
      puVar9[0x27] = uVar10 + 6;
      puVar9[0x28] = uVar13;
      puVar9[0x29] = (ushort)(uVar6 + 6);
      puVar9 = puVar9 + 0x2a;
      uVar10 = uVar10 + 8;
      uVar11 = uVar11 + 8;
      uVar12 = uVar12 + 8;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + -1);
      (*(float *)(gen_frame + 0x28)) = fVar1;
      (*(uint *)(gen_frame + 0x30)) = uVar6 + 8;
    } while (fVar1 != 0.0);
    uVar6 = 0;
    do {
      uVar12 = (short)uVar6 * 8;
      *puVar9 = uVar12 + 8 & 0x7f;
      puVar9[1] = uVar12 & 0x7f;
      puVar9[2] = 0x80;
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      *puVar9 = 0x81;
      puVar9[1] = (short)uVar6 * 8 + 7U & 0x7f;
      puVar9[2] = (short)uVar6 * 8 + 0xfU & 0x7f;
      uVar6 = uVar6 + 1;
      puVar9 = puVar9 + 3;
    } while (uVar6 < 0x10);
    this_00 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14);
  }
  else {
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x14);
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined4 *)((int)this + 0x18) = 8;
    *(undefined4 *)((int)this + 0x1c) = 0x24;
    uVar6 = F_004dcc90(0x60,4,8);
    *(uint *)((int)this + 0x10) = uVar6;
    uVar6 = F_004dccf0(0x48,1,4,8);
    *(uint *)((int)this + 0x14) = uVar6;
    puVar7 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
    uVar5 = REFG(float, 0x1090708);
    uVar4 = REFG(float, 0x1087f04);
    if (puVar7 != (undefined4 *)0x0) {
      (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
      *puVar7 = GEN_FLT_TO(*puVar7, REFG(float, 0x1090708));
      (*(undefined4 *)(gen_frame + 0x38)) = uVar4;
      puVar7[1] = uVar4;
      (*(undefined4 *)(gen_frame + 0x3c)) = uVar5;
      puVar7[2] = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
      puVar7[3] = uVar4;
      puVar7[4] = uVar4;
      puVar7[5] = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar5;
      puVar7[6] = uVar5;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar5;
      puVar7[7] = uVar5;
      puVar7[8] = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
      puVar7[9] = uVar4;
      puVar7[10] = uVar5;
      puVar7[0xb] = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar5;
      puVar7[0xc] = uVar5;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar4;
      puVar7[0xd] = uVar4;
      (*(undefined4 *)(gen_frame + 0x3c)) = uVar4;
      puVar7[0xe] = uVar4;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
      puVar7[0xf] = uVar4;
      puVar7[0x10] = uVar4;
      puVar7[0x11] = uVar4;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar5;
      puVar7[0x12] = uVar5;
      (*(undefined4 *)(gen_frame + 0x38)) = uVar5;
      puVar7[0x13] = uVar5;
      (*(undefined4 *)(gen_frame + 0x34)) = uVar4;
      puVar7[0x15] = uVar4;
      puVar7[0x14] = uVar4;
      puVar7[0x16] = uVar5;
      puVar7[0x17] = uVar4;
      F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
    }
    uVar8 = F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
    uVar6 = 0;
    if (uVar8 == 0) goto LAB_00633ca8;
    F_00c46aa0(uVar8,&REFG(undefined, 0x10ac070),*(int *)((int)this + 0x1c) * 2);
    this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  }
  uVar6 = F_004d6ae0(this_00);
LAB_00633ca8: ;
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar6;
}

/* ref: FUN_00633cc0 */
uint F_00633cc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x633cc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  int * piVar2;
  uint uVar3;
  float * pfVar4;
  short * psVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  int iVar9;
  short sVar10;
  float * pfVar11;
  short sVar12;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  fVar15 = (float10)*(double *)&REFG(undefined, 0x10944e0);
  piVar2 = *(int * PTR32 *)(param_1 + 0x10);
  (*(int *)(gen_frame + 0x24)) = param_1;
  (*(float *)(gen_frame + 0x34)) = (float)((float10)*(float *)&REFG(undefined, 0x1320678) / (float10)*(double *)&REFG(undefined, 0x1088120));
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 0x14);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0xbe;
  *(undefined4 *)(param_1 + 0x1c) = 0x41d;
  uVar3 = F_004dcc90(0x8e8,4,8);
  *(uint *)(param_1 + 0x10) = uVar3;
  uVar3 = F_004dccf0(0x83a,1,4,8);
  *(uint *)(param_1 + 0x14) = uVar3;
  (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)F_00406bb0(0x8e8,0,0);
  if ((*(float * PTR32 *)(gen_frame + 0x8)) == (float *)0x0) {
    (*(float * PTR32 *)(gen_frame + 0x8)) = (float *)0x0;
  }
  else {
    (*(float *)(gen_frame + 0x28)) = 0.0;
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x8));
    do {
      fVar14 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x28)));
      uVar3 = 0;
      if ((int)gen_fl2bits((*(float *)(gen_frame + 0x28))) < 0) {
        fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar13 = ((float)GEN_TOF((fVar14 * (float10)(float)((float10)param_2 / fVar15))));
      (*(float *)(gen_frame + 0x2c)) = fVar13;
      fVar14 = ((float10)GEN_TOD(fsin((float10)fVar13)));
      fVar1 = (float)fVar14;
      (*(float *)(gen_frame + 0x3c)) = fVar1;
      fVar14 = ((float10)GEN_TOD(fcos((float10)fVar13)));
      (*(float *)(gen_frame + 0x2c)) = (float)fVar14;
      (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(-(float10)fVar1));
      do {
        (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x2c));
        (*(undefined4 *)(gen_frame + 0x60)) = 0;
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x38));
        (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x2c));
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 *)(gen_frame + 0x74)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x40)),(float)(float10)0);
        (*(float *)(gen_frame + 0x30)) = gen_bits2f(uVar3);
        fVar14 = (float10)(int)uVar3;
        if ((int)uVar3 < 0) {
          fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar13 = (float)((float10)*(float *)&REFG(undefined, 0x1320678) - fVar14 * (float10)(*(float *)(gen_frame + 0x34)));
        (*(float *)(gen_frame + 0x30)) = fVar13;
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x40)),fVar13);
        F_004ee850(&(*(float *)(gen_frame + 0x10)),0x1302c90,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
        *pfVar4 = (*(float *)(gen_frame + 0x10));
        pfVar4[1] = (*(float *)(gen_frame + 0x14));
        pfVar4[2] = (*(float *)(gen_frame + 0x18));
        uVar3 = uVar3 + 1;
        pfVar4 = pfVar4 + 3;
      } while (uVar3 < 0x15);
      uVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x28))) + 1;
      (*(float *)(gen_frame + 0x28)) = gen_bits2f(uVar3);
    } while (uVar3 < 4);
    (*(float *)(gen_frame + 0x2c)) = 1.4013e-45;
    fVar15 = ((float10)GEN_TOD(fsin((float10)param_2)));
    fVar13 = (float)fVar15;
    (*(float *)(gen_frame + 0x30)) = fVar13;
    (*(float *)(gen_frame + 0x3c)) = fVar13;
    fVar15 = ((float10)GEN_TOD(fcos((float10)param_2)));
    (*(float *)(gen_frame + 0x30)) = (float)fVar15;
    (*(float *)(gen_frame + 0x28)) = (float)fVar15;
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(-(float10)fVar13));
    do {
      fVar15 = (float10)(int)gen_fl2bits((*(float *)(gen_frame + 0x2c)));
      if ((int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) < 0) {
        fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar14 = (float10)*(double *)&REFG(undefined, 0x10ac0b8);
      uVar3 = 0;
      do {
        pfVar11 = pfVar4;
        (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x58)) = (*(float *)(gen_frame + 0x3c));
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        (*(undefined4 *)(gen_frame + 0x48)) = 0;
        (*(undefined4 *)(gen_frame + 0x50)) = 0;
        (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x28));
        (*(undefined4 *)(gen_frame + 0x60)) = 0;
        (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x30));
        (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x28));
        (*(undefined4 *)(gen_frame + 0x70)) = 0;
        (*(undefined4 *)(gen_frame + 0x74)) = 0;
        (*(undefined4 *)(gen_frame + 0x78)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x40)),(float)(float10)0);
        (*(float *)(gen_frame + 0x38)) = gen_bits2f(uVar3);
        fVar16 = (float10)(int)uVar3;
        if ((int)uVar3 < 0) {
          fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar13 = (float)((float10)*(float *)&REFG(undefined, 0x1320678) - fVar16 * (float10)(*(float *)(gen_frame + 0x34)));
        (*(float *)(gen_frame + 0x38)) = fVar13;
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x40)),fVar13);
        F_004ee850(&(*(float *)(gen_frame + 0x10)),0x1302c90,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
        fVar13 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x18)) +
                        ((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x10)) +
                        (float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x14))))));
        (*(float *)(gen_frame + 0x38)) = fVar13;
        fVar13 = ((float)GEN_TOF(SQRT((float10)fVar13)));
        (*(float *)(gen_frame + 0x38)) = fVar13;
        uVar3 = uVar3 + 1;
        pfVar4 = pfVar11 + 3;
        fVar13 = ((float)GEN_TOF(((float10)(float)((float10)1 - fVar15 * fVar14) / (float10)fVar13)));
        (*(float *)(gen_frame + 0x38)) = fVar13;
        fVar17 = (float10)(*(float *)(gen_frame + 0x10));
        fVar18 = (float10)fVar13;
        (*(float *)(gen_frame + 0x10)) = (float)(fVar18 * fVar17);
        fVar19 = (float10)(*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x14)) = (float)(fVar19 * fVar18);
        fVar16 = (float10)(*(float *)(gen_frame + 0x18));
        (*(float *)(gen_frame + 0x18)) = (float)(fVar18 * fVar16);
        *pfVar11 = (float)(fVar18 * fVar17);
        pfVar11[1] = (float)(fVar19 * fVar18);
        pfVar11[2] = (float)(fVar18 * fVar16);
      } while (uVar3 < 0x15);
      uVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x2c))) + 1;
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f(uVar3);
    } while (uVar3 < 6);
    *pfVar4 = 0.0;
    pfVar11[4] = 0.0;
    pfVar11[5] = 0.0;
    param_1 = (*(int *)(gen_frame + 0x24));
  }
  F_004f4990((undefined *)(param_1 + 0x20),(*(float * PTR32 *)(gen_frame + 0x8)),0xbe,0xc);
  pfVar4 = (float *)F_004d68c0(*(undefined * PTR32 *)(param_1 + 0x10),0,0,2);
  if (pfVar4 != (float *)0x0) {
    if ((*(float * PTR32 *)(gen_frame + 0x8)) == (float *)0x0) goto LAB_00634147;
    pfVar11 = (*(float * PTR32 *)(gen_frame + 0x8));
    for (iVar9 = 0x23a; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar4 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar4 = pfVar4 + 1;
    }
    F_004d6970(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x24)) + 0x10));
    param_1 = (*(int *)(gen_frame + 0x24));
  }
  if ((*(float * PTR32 *)(gen_frame + 0x8)) != (float *)0x0) {
    F_00406b30((*(float * PTR32 *)(gen_frame + 0x8)));
  }
LAB_00634147: ;
  psVar5 = (short *)F_004d6a30(*(undefined * PTR32 *)(param_1 + 0x14),0,0,2);
  uVar3 = 0;
  if (psVar5 != (short *)0x0) {
    uVar6 = 0;
    (*(float *)(gen_frame + 0x3c)) = 4.2039e-45;
    do {
      sVar10 = uVar6 + 0x15;
      (*(float *)(gen_frame + 0x34)) = 2.8026e-44;
      do {
        uVar7 = uVar6;
        *psVar5 = sVar10;
        psVar5[1] = sVar10 + -0x14;
        psVar5[2] = uVar7;
        psVar5[3] = sVar10;
        psVar5[4] = sVar10 + 1;
        psVar5[5] = sVar10 + -0x14;
        psVar5 = psVar5 + 6;
        sVar10 = sVar10 + 1;
        iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + -1;
        (*(float *)(gen_frame + 0x34)) = gen_bits2f(iVar9);
        uVar6 = uVar7 + 1;
      } while (iVar9 != 0);
      uVar6 = uVar7 + 2;
      iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + -1;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f(iVar9);
    } while (iVar9 != 0);
    fVar13 = gen_bits2f((uint)uVar6);
    sVar10 = uVar7 + 0x17;
    (*(float *)(gen_frame + 0x30)) = fVar13;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    do {
      *psVar5 = sVar10;
      fVar13 = gen_bits2f(((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) & 0xffff) + 1 + (int)gen_fl2bits(fVar13));
      sVar12 = (short)(uint)gen_fl2bits(fVar13);
      psVar5[1] = sVar12;
      (*(float *)(gen_frame + 0x38)) = fVar13;
      psVar5[2] = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) + uVar6;
      psVar5[3] = sVar10;
      sVar10 = sVar10 + 1;
      psVar5[4] = sVar10;
      psVar5[5] = sVar12;
      uVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + 1;
      psVar5 = psVar5 + 6;
      (*(float *)(gen_frame + 0x34)) = gen_bits2f(uVar3);
      fVar13 = (*(float *)(gen_frame + 0x30));
    } while (uVar3 < 0x14);
    sVar10 = uVar7 + 0x17;
    (*(float *)(gen_frame + 0x3c)) = 5.60519e-45;
    do {
      sVar12 = sVar10 + 0x15;
      (*(float *)(gen_frame + 0x34)) = 2.8026e-44;
      do {
        sVar8 = sVar10;
        *psVar5 = sVar12;
        psVar5[1] = sVar12 + -0x14;
        psVar5[2] = sVar8;
        psVar5[3] = sVar12;
        psVar5[4] = sVar12 + 1;
        psVar5[5] = sVar12 + -0x14;
        psVar5 = psVar5 + 6;
        sVar12 = sVar12 + 1;
        fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + -1);
        (*(float *)(gen_frame + 0x34)) = fVar13;
        sVar10 = sVar8 + 1;
      } while (fVar13 != 0.0);
      sVar10 = sVar8 + 2;
      fVar13 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + -1);
      (*(float *)(gen_frame + 0x3c)) = fVar13;
    } while (fVar13 != 0.0);
    uVar3 = 0;
    do {
      *psVar5 = (*(short *)((*(int *)(gen_frame + 0x24)) + 0x18) - (short)uVar3) + -1;
      psVar5[1] = (*(short *)((*(int *)(gen_frame + 0x24)) + 0x18) - (short)uVar3) + -2;
      psVar5[2] = *(short *)((*(int *)(gen_frame + 0x24)) + 0x18) + -1;
      uVar3 = uVar3 + 1;
      psVar5 = psVar5 + 3;
    } while (uVar3 < 0x15);
    uVar3 = F_004d6ae0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x24)) + 0x14));
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return uVar3;
}

/* ref: FUN_006342a0 */
uint F_006342a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6342a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 8;
  *(undefined4 *)((int)this + 0x1c) = 0x24;
  uVar5 = F_004dcc90(0x60,4,8);
  *(uint *)((int)this + 0x10) = uVar5;
  uVar5 = F_004dccf0(0x48,1,4,8);
  uVar3 = REFG(float, 0x109cab8);
  *(uint *)((int)this + 0x14) = uVar5;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  *(undefined4 *)((int)this + 0x28) = 0;
  uVar3 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1087f04);
  puVar6 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  uVar4 = REFG(float, 0x109cab8);
  uVar3 = REFG(float, 0x1088068);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = GEN_FLT_TO(*puVar6, REFG(float, 0x109cab8));
    puVar6[1] = uVar3;
    puVar6[2] = 0;
    puVar6[3] = uVar3;
    puVar6[4] = uVar3;
    puVar6[5] = 0;
    puVar6[6] = uVar4;
    puVar6[7] = uVar4;
    puVar6[8] = 0;
    puVar6[9] = uVar3;
    puVar6[10] = uVar4;
    uVar2 = REFG(float, 0x1087f04);
    puVar6[0xb] = 0;
    puVar6[0xc] = uVar4;
    puVar6[0xd] = uVar3;
    puVar6[0xe] = uVar2;
    puVar6[0xf] = uVar3;
    puVar6[0x10] = uVar3;
    puVar6[0x11] = uVar2;
    puVar6[0x12] = uVar4;
    puVar6[0x13] = uVar4;
    puVar6[0x15] = uVar3;
    puVar6[0x14] = uVar2;
    puVar6[0x16] = uVar4;
    puVar6[0x17] = uVar2;
    F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
  }
  uVar7 = F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
  uVar5 = 0;
  if (uVar7 != 0) {
    F_00c46aa0(uVar7,&REFG(undefined, 0x10ac0c0),*(int *)((int)this + 0x1c) * 2);
    uVar5 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x14));
  }
  return uVar5;
}

/* ref: FUN_006344c0 */
uint F_006344c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6344c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  short * psVar6;
  short sVar7;
  int iVar8;
  uint uVar9;
  short sVar10;
  undefined4 * puVar11;
  float10 fVar12;
  int local_8;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 0x10;
  *(undefined4 *)((int)this + 0x1c) = 0x54;
  uVar4 = F_004dcc90(0xc0,4,8);
  *(uint *)((int)this + 0x10) = uVar4;
  uVar4 = F_004dccf0(0xa8,1,4,8);
  uVar3 = REFG(float, 0x109cab8);
  *(uint *)((int)this + 0x14) = uVar4;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  uVar3 = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1088068);
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x38) = uVar3;
  puVar5 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  if (puVar5 != (undefined4 *)0x0) {
    local_8 = 0;
    do {
      *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x109cab8));
      fVar1 = ((float)GEN_TOF((((float10)local_8 * (float10)*(float *)&REFG(undefined, 0x1320678)) *
                     (float10)*(double *)&REFG(double, 0x10948e0))));
      fVar12 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      puVar5[1] = (undefined4)
                  gen_fl2bits(((float)GEN_TOF((((float10)(float)fVar12 * (float10)REFG(double, 0x1088108)) *
                                     (float10)*(double *)&REFG(undefined, 0x10a0c88)))));
      fVar12 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      local_8 = local_8 + 1;
      puVar11 = puVar5 + 3;
      puVar5[2] = (undefined4)
                  gen_fl2bits(((float)GEN_TOF((((float10)(float)fVar12 * (float10)REFG(double, 0x1088108)) *
                                     (float10)*(double *)&REFG(undefined, 0x10a0c88)))));
      puVar5 = puVar11;
    } while (local_8 < 8);
    local_8 = 0;
    do {
      *puVar11 = GEN_FLT_TO(*puVar11, REFG(float, 0x1088068));
      fVar1 = ((float)GEN_TOF((((float10)local_8 * (float10)*(float *)&REFG(undefined, 0x1320678)) *
                     (float10)*(double *)&REFG(double, 0x10948e0))));
      fVar12 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      puVar11[1] = (undefined4)
                   gen_fl2bits(((float)GEN_TOF((((float10)(float)fVar12 * (float10)REFG(double, 0x1088108)) *
                                      (float10)*(double *)&REFG(undefined, 0x10a0c88)))));
      fVar12 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      local_8 = local_8 + 1;
      puVar11[2] = (undefined4)
                   gen_fl2bits(((float)GEN_TOF((((float10)(float)fVar12 * (float10)REFG(double, 0x1088108)) *
                                      (float10)*(double *)&REFG(undefined, 0x10a0c88)))));
      puVar11 = puVar11 + 3;
    } while (local_8 < 8);
    F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
  }
  psVar6 = (short *)F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
  uVar4 = 0;
  if (psVar6 != (short *)0x0) {
    iVar8 = 0;
    do {
      *psVar6 = (short)iVar8 + 2;
      psVar6[1] = (short)iVar8 + 1;
      psVar6[2] = 0;
      iVar8 = iVar8 + 1;
      psVar6 = psVar6 + 3;
    } while (iVar8 < 6);
    iVar8 = 0;
    do {
      *psVar6 = 8;
      psVar6[1] = (short)iVar8 + 9;
      psVar6[2] = (short)iVar8 + 10;
      iVar8 = iVar8 + 1;
      psVar6 = psVar6 + 3;
    } while (iVar8 < 6);
    uVar4 = 0;
    do {
      sVar10 = (short)uVar4;
      uVar4 = uVar4 + 1;
      uVar9 = uVar4 & 0x80000007;
      *psVar6 = sVar10;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      sVar7 = (short)uVar9;
      psVar6[1] = sVar7;
      sVar10 = sVar10 + 8;
      psVar6[2] = sVar10;
      psVar6[3] = sVar7;
      psVar6[4] = sVar7 + 8;
      psVar6[5] = sVar10;
      psVar6 = psVar6 + 6;
    } while ((int)uVar4 < 8);
    uVar4 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x14));
  }
  return uVar4;
}

/* ref: FUN_00634710 */
uint F_00634710(unsigned int gen_a0)
{
  GEN_ENTER(0x634710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  *(undefined4 *)((int)this + 0x18) = 8;
  *(undefined4 *)((int)this + 0x1c) = 0x24;
  uVar4 = F_004dcc90(0x60,4,8);
  *(uint *)((int)this + 0x10) = uVar4;
  uVar4 = F_004dccf0(0x48,1,4,8);
  uVar2 = REFG(float, 0x1090708);
  *(uint *)((int)this + 0x14) = uVar4;
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  uVar2 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x34) = uVar2;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  puVar5 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0x10),0,0,2);
  uVar3 = REFG(float, 0x1090708);
  uVar2 = REFG(float, 0x1087f04);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1090708));
    puVar5[1] = uVar2;
    puVar5[2] = 0;
    puVar5[3] = uVar2;
    puVar5[4] = uVar2;
    puVar5[5] = 0;
    puVar5[6] = uVar3;
    puVar5[7] = uVar3;
    puVar5[8] = 0;
    puVar5[9] = uVar2;
    puVar5[10] = uVar3;
    puVar5[0xb] = 0;
    puVar5[0xc] = uVar3;
    puVar5[0xd] = uVar2;
    puVar5[0xe] = uVar2;
    puVar5[0xf] = uVar2;
    puVar5[0x10] = uVar2;
    puVar5[0x11] = uVar2;
    puVar5[0x12] = uVar3;
    puVar5[0x13] = uVar3;
    puVar5[0x15] = uVar2;
    puVar5[0x14] = uVar2;
    puVar5[0x16] = uVar3;
    puVar5[0x17] = uVar2;
    F_004d6970(*(undefined * PTR32 *)((int)this + 0x10));
  }
  uVar6 = F_004d6a30(*(undefined * PTR32 *)((int)this + 0x14),0,0,2);
  uVar4 = 0;
  if (uVar6 != 0) {
    F_00c46aa0(uVar6,&REFG(undefined, 0x10ac110),*(int *)((int)this + 0x1c) * 2);
    uVar4 = F_004d6ae0(*(undefined * PTR32 *)((int)this + 0x14));
  }
  return uVar4;
}

/* ref: FUN_00634920 */
uint F_00634920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x634920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  float fVar1;
  float fVar2;
  int * piVar3;
  undefined4 * puVar4;
  uint uVar5;
  short * psVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  short sVar10;
  undefined * pvVar11;
  short sVar12;
  undefined4 * puVar13;
  float10 fVar14;
  
  (*(uint *)(gen_frame + 0x15c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x160);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  if ((*(uint *)&REFG(undefined, 0x1487e70) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487e70) = *(uint *)&REFG(undefined, 0x1487e70) | 1;
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar4 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x30)));
    *(undefined4 *)&REFG(undefined, 0x1487e30) = *puVar4;
    *(undefined4 *)&REFG(undefined, 0x1487e34) = puVar4[1];
    *(undefined4 *)&REFG(undefined, 0x1487e38) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x30)));
    *(undefined4 *)&REFG(undefined, 0x1487e40) = *puVar4;
    *(undefined4 *)&REFG(undefined, 0x1487e44) = puVar4[1];
    *(undefined4 *)&REFG(undefined, 0x1487e48) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar4 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x30)));
    *(undefined4 *)&REFG(undefined, 0x1487e50) = *puVar4;
    *(undefined4 *)&REFG(undefined, 0x1487e54) = puVar4[1];
    *(undefined4 *)&REFG(undefined, 0x1487e58) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004bd580(&(*(undefined4 *)(gen_frame + 0x30)));
    *(undefined4 *)&REFG(undefined, 0x1487e60) = *puVar4;
    *(undefined4 *)&REFG(undefined, 0x1487e64) = puVar4[1];
    *(undefined4 *)&REFG(undefined, 0x1487e68) = puVar4[2];
  }
  if ((*(uint *)&REFG(undefined, 0x1487e70) & 2) == 0) {
    *(uint *)&REFG(undefined, 0x1487e70) = *(uint *)&REFG(undefined, 0x1487e70) | 2;
    *(undefined4 *)&REFG(undefined, 0x1487df0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487df4) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487df8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e00) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e04) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487e08) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e10) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e14) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487e18) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e20) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e24) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487e28) = 0;
  }
  F_004f4430(((undefined4 *)(gen_frame + 0xd0)),&REFG(float, 0x1375ac0),&REFG(undefined, 0x1487e30) + param_1 * 0x10,&REFG(undefined, 0x1487df0) + param_1 * 0x10)
  ;
  puVar4 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0x90)),((undefined4 *)(gen_frame + 0xd0)));
  pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  puVar13 = ((undefined4 *)(gen_frame + 0xd0));
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar13 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar13 = puVar13 + 1;
  }
  piVar3 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x10);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)*(float *)&REFG(undefined, 0x1320678) / (float10)*(double *)&REFG(undefined, 0x10944e0));
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)pvVar11 + 0x10) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)pvVar11 + 0x14);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)pvVar11 + 0x14) = 0;
  }
  *(undefined4 *)((int)pvVar11 + 0x18) = 0x21;
  *(undefined4 *)((int)pvVar11 + 0x1c) = 0x8a;
  uVar5 = F_004dcc90(0x18c,4,8);
  *(uint *)((int)pvVar11 + 0x10) = uVar5;
  uVar5 = F_004dccf0(0x114,1,4,8);
  *(uint *)((int)pvVar11 + 0x14) = uVar5;
  puVar4 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)pvVar11 + 0x10),0,0,2);
  (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar4;
  if (puVar4 != (undefined4 *)0x0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
    do {
      fVar14 = (float10)(int)(*(uint *)(gen_frame + 0x1c));
      (*(uint *)(gen_frame + 0x24)) = 0;
      if ((int)(*(uint *)(gen_frame + 0x1c)) < 0) {
        fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar1 = (float)(fVar14 * (float10)*(double *)&REFG(undefined, 0x10ac158));
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      fVar14 = ((float10)GEN_TOD(fsin((float10)fVar1)));
      fVar2 = (float)fVar14;
      (*(float *)(gen_frame + 0x48)) = fVar2;
      fVar14 = ((float10)GEN_TOD(fcos((float10)fVar1)));
      (*(float *)(gen_frame + 0x4c)) = (float)fVar14;
      (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(-(float10)fVar2));
      do {
        (*(undefined4 *)(gen_frame + 0x110)) = REFG(float, 0x1087f04);
        (*(float *)(gen_frame + 0x128)) = (*(float *)(gen_frame + 0x48));
        (*(undefined4 *)(gen_frame + 0x114)) = 0;
        (*(undefined4 *)(gen_frame + 0x118)) = 0;
        (*(undefined4 *)(gen_frame + 0x120)) = 0;
        (*(float *)(gen_frame + 0x124)) = (*(float *)(gen_frame + 0x4c));
        (*(undefined4 *)(gen_frame + 0x130)) = 0;
        (*(float *)(gen_frame + 0x134)) = (*(float *)(gen_frame + 0x14));
        (*(float *)(gen_frame + 0x138)) = (*(float *)(gen_frame + 0x4c));
        (*(undefined4 *)(gen_frame + 0x140)) = 0;
        (*(undefined4 *)(gen_frame + 0x144)) = 0;
        (*(undefined4 *)(gen_frame + 0x148)) = 0;
        F_0065ed60(&(*(undefined4 *)(gen_frame + 0x110)),(float)(float10)0);
        fVar14 = (float10)(int)(*(uint *)(gen_frame + 0x24));
        if ((int)(*(uint *)(gen_frame + 0x24)) < 0) {
          fVar14 = fVar14 + (float10)*(float *)&REFG(undefined, 0x1088110);
        }
        fVar1 = (float)((float10)*(float *)&REFG(undefined, 0x1320678) - fVar14 * (float10)(*(float *)(gen_frame + 0x18)));
        (*(float *)(gen_frame + 0x20)) = fVar1;
        F_0065ee80(&(*(undefined4 *)(gen_frame + 0x110)),fVar1);
        puVar4 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x110)),(uint)((undefined4 *)(gen_frame + 0xd0)));
        puVar13 = ((undefined4 *)(gen_frame + 0x90));
        for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar13 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar13 = puVar13 + 1;
        }
        F_004ee850(&(*(undefined4 *)(gen_frame + 0x0)),0x1302c90,(uint)((undefined4 *)(gen_frame + 0x90)));
        puVar4 = (*(undefined4 * PTR32 *)(gen_frame + 0x28));
        (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x0));
        *(*(undefined4 * PTR32 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x0));
        (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x4));
        (*(undefined4 * PTR32 *)(gen_frame + 0x28))[1] = (*(undefined4 *)(gen_frame + 0x4));
        (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 * PTR32 *)(gen_frame + 0x28))[2] = (*(undefined4 *)(gen_frame + 0x8));
        puVar13 = (*(undefined4 * PTR32 *)(gen_frame + 0x28)) + 3;
        (*(undefined4 * PTR32 *)(gen_frame + 0x28)) = puVar13;
        uVar5 = (*(uint *)(gen_frame + 0x24)) + 1;
        (*(uint *)(gen_frame + 0x24)) = uVar5;
      } while (uVar5 < 4);
      uVar5 = (*(uint *)(gen_frame + 0x1c)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = uVar5;
    } while (uVar5 < 8);
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    *puVar13 = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    puVar4[4] = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    puVar4[5] = 0;
    F_004d6970(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x10));
    pvVar11 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  }
  psVar6 = (short *)F_004d6a30(*(undefined * PTR32 *)((int)pvVar11 + 0x14),0,0,2);
  uVar5 = 0;
  if (psVar6 != (short *)0x0) {
    sVar10 = 0;
    sVar9 = 1;
    (*(float *)(gen_frame + 0x48)) = 7.00649e-45;
    sVar7 = 4;
    (*(float *)(gen_frame + 0x4c)) = 9.80909e-45;
    do {
      *psVar6 = sVar7;
      psVar6[1] = sVar9;
      psVar6[2] = sVar10;
      psVar6[3] = sVar7;
      sVar12 = (short)(uint)gen_fl2bits((*(float *)(gen_frame + 0x48)));
      psVar6[4] = sVar12;
      psVar6[5] = sVar9;
      psVar6[6] = sVar7 + 1;
      psVar6[7] = sVar9 + 1;
      psVar6[8] = sVar10 + 1;
      psVar6[9] = sVar7 + 1;
      psVar6[10] = sVar12 + 1;
      psVar6[0xb] = sVar9 + 1;
      psVar6[0xc] = sVar7 + 2;
      psVar6[0xd] = sVar9 + 2;
      psVar6[0xe] = sVar10 + 2;
      psVar6[0xf] = sVar7 + 2;
      psVar6[0x10] = sVar12 + 2;
      psVar6[0x11] = sVar9 + 2;
      psVar6 = psVar6 + 0x12;
      sVar10 = sVar10 + 4;
      sVar7 = sVar7 + 4;
      sVar9 = sVar9 + 4;
      fVar1 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x4c))) + -1);
      (*(float *)(gen_frame + 0x4c)) = fVar1;
      (*(float *)(gen_frame + 0x48)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x48))) + 4);
    } while (fVar1 != 0.0);
    uVar5 = 0;
    do {
      *psVar6 = (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x18) - (short)uVar5) + -1;
      psVar6[1] = (*(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x18) - (short)uVar5) + -2;
      psVar6[2] = *(short *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x18) + -1;
      uVar5 = uVar5 + 1;
      psVar6 = psVar6 + 3;
    } while (uVar5 < 4);
    uVar5 = F_004d6ae0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0x14));
  }
  F_00c47745((*(uint *)(gen_frame + 0x15c)) ^ (uint)(uint)(gen_frame + 0x160));
  return uVar5;
}

/* ref: FUN_00634f70 */
uint F_00634f70(unsigned int gen_a0)
{
  GEN_ENTER(0x634f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined * this_00;
  undefined4 uVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  undefined4 * puVar6;
  
  uVar1 = *(undefined4 *)((int)this + 0x10);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
  *(undefined1 *)((int)this_00 + 0x6c) = 0xc;
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
  *(undefined4 *)((int)this_00 + 0x68) = uVar1;
  *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)((int)this + 0x14);
  if (*(int *)((int)this + 0x14) == 0) {
    uVar1 = *(undefined4 *)((int)this + 0x18);
    puVar4 = (undefined4 *)F_004d4760(this_00,0x48);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar4 = 4;
    puVar6 = puVar4 + 4;
    puVar4[1] = 6;
    puVar4[2] = 0;
    puVar4[3] = uVar1;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0x1c);
    uVar2 = *(undefined4 *)((int)this + 0x18);
    puVar4 = (undefined4 *)F_004d4760(this_00,0x54);
    if (puVar4 == (undefined4 *)0x0) {
      return 0;
    }
    *puVar4 = 5;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[5] = 0;
    puVar6 = puVar4 + 7;
    puVar4[1] = 5;
    puVar4[4] = uVar2;
    puVar4[6] = uVar1;
  }
  bVar3 = F_004dc830(this_00,puVar6);
  uVar5 = CONCAT31(extraout_var,bVar3);
  if (bVar3 != 0) {
    uVar5 = F_004d4810(this_00,puVar4);
  }
  return uVar5;
}

/* ref: FUN_006352b0 */
uint F_006352b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6352b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  *(undefined1 *)((int)this + 0x4e) = (undefined1)param_1;
  F_00c48350((undefined *)((int)this + 0x78),0,0x50);
  uVar2 = REFG(float, 0x1087f04);
  uVar3 = 0x7c;
  iVar4 = 2;
  do {
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + -2) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x50) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + -1) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x4c) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 4 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x48) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 8 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 1) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x44) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0xc + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 2) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x40) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x10 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 3) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x3c) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x14 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 4) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x38) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x18 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 5) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x34) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x1c + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 6) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x30) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x20 + iVar1) + 0x140))) = 0;
    iVar1 = REFG(int, 0x1371284);
    uVar5 = uVar2;
    if (3 < iVar4 + 7) {
      uVar5 = 0;
    }
    *((undefined4 *)GEN_TOP(((uVar3 - 0x2c) + REFG(int, 0x1371284)))) = uVar5;
    *((undefined4 *)GEN_TOP((*(int *)(uVar3 + 0x24 + iVar1) + 0x140))) = 0;
    iVar1 = iVar4 + 8;
    uVar3 = uVar3 + 0x28;
    iVar4 = iVar4 + 10;
  } while (iVar1 < 0x14);
  return uVar3;
}

/* ref: FUN_00635470 */
byte F_00635470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  byte bVar5;
  undefined * this_00;
  uint uVar6;
  short * psVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  ushort * puVar12;
  uint uVar13;
  uint * puVar14;
  uint uVar15;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  (*(uint * PTR32 *)(gen_frame + 0x24)) = this;
  this_00 = (undefined *)F_004dcc90(96000,4,0);
  *(undefined * PTR32 *)this = this_00;
  if (this_00 != (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x18)) = F_004d68c0(this_00,0,0,2);
    puVar14 = (*(uint * PTR32 *)(gen_frame + 0x24));
    uVar13 = REFG(float, 0x10abe50);
    fVar4 = REFG(float, 0x1087f04);
    if ((*(uint *)(gen_frame + 0x18)) != 0) {
      ((uint *)(gen_frame + 0x48))[1] = GEN_FLT_TO(((uint *)(gen_frame + 0x48))[1], REFG(float, 0x1094884));
      ((float *)(gen_frame + 0x30))[0] = (float)((float10)*(double *)&REFG(double, 0x10948e0) * (float10)0);
      ((float *)(gen_frame + 0x30))[2] = gen_bits2f(REFG(float, 0x10ac164));
      ((uint *)(gen_frame + 0x48))[0] = 0;
      ((uint *)(gen_frame + 0x48))[2] = GEN_FLT_TO(((uint *)(gen_frame + 0x48))[2], REFG(float, 0x10abe50));
      ((float *)(gen_frame + 0x30))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[1], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x54))[1] = (float)((float10)1 - (float10)0);
      ((float *)(gen_frame + 0x30))[3] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[3], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x30))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[4], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x30))[5] = GEN_FLT_TO(((float *)(gen_frame + 0x30))[5], REFG(float, 0x1087f04));
      ((float *)(gen_frame + 0x54))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x54))[0], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x54))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x54))[2], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x54))[3] = gen_bits2f(REFG(float, 0x1088068));
      ((float *)(gen_frame + 0x54))[4] = GEN_FLT_TO(((float *)(gen_frame + 0x54))[4], REFG(float, 0x10ac160));
      ((float *)(gen_frame + 0x54))[5] = 0.0;
      (*(int *)(gen_frame + 0x20)) = 1000;
      do {
        (*(int *)(gen_frame + 0x1c)) = 2;
        do {
          uVar6 = 0;
          puVar12 = (ushort *)((*(uint *)(gen_frame + 0x18)) + 4);
          do {
            if (param_1 == 0) {
              if ((uVar6 & 1) == 0) {
                ((float *)(gen_frame + 0x8))[3] = 0.0;
              }
              else {
                ((float *)(gen_frame + 0x8))[3] = fVar4;
              }
              fVar1 = ((float *)(gen_frame + 0x30))[(int)((uVar6 >> 1) * 2)];
              fVar2 = ((float)GEN_TOF(((float10)((float *)(gen_frame + 0x30))[(int)((uVar6 >> 1) * 2 + 1)] * (float10)((float *)(gen_frame + 0x8))[3])));
              uVar15 = uVar13;
              if ((uVar6 & 1) != 0) {
                uVar15 = 0;
              }
              uVar8 = 0;
              if (fVar1 != 0.0) {
                iVar10 = ((uint)gen_fl2bits(fVar1) >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x28)) = iVar10;
                if (iVar10 < 0) {
                  uVar8 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x2c)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x28));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x2c));
                  }
                  uVar8 = (ushort)((uint)gen_fl2bits(fVar1) >> 0x10) & 0x8000 |
                          (ushort)((uint)gen_fl2bits(fVar1) >> 0xd) & 0x3ff |
                          (ushort)(*piVar11 << 10);
                }
              }
              puVar12[-2] = uVar8;
              uVar8 = 0;
              if (fVar2 != 0.0) {
                iVar10 = ((uint)gen_fl2bits(fVar2) >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x28)) = iVar10;
                if (iVar10 < 0) {
                  uVar8 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x2c)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x28));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x2c));
                  }
                  uVar8 = (ushort)((uint)gen_fl2bits(fVar2) >> 0x10) & 0x8000 |
                          (ushort)((uint)gen_fl2bits(fVar2) >> 0xd) & 0x3ff |
                          (ushort)(*piVar11 << 10);
                }
              }
              puVar12[-1] = uVar8;
              uVar8 = 0;
              if (uVar15 != 0) {
                iVar10 = (uVar15 >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x28)) = iVar10;
                if (iVar10 < 0) {
                  uVar8 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x2c)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x28));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x2c));
                  }
                  uVar8 = (ushort)(uVar15 >> 0x10) & 0x8000 | (ushort)(uVar15 >> 0xd) & 0x3ff |
                          (ushort)(*piVar11 << 10);
                }
              }
              *puVar12 = uVar8;
              ((float *)(gen_frame + 0x8))[1] = 0.0;
LAB_0063586a: ;
              puVar12[1] = 0;
            }
            else if (param_1 == 1) {
              if ((uVar6 & 1) == 0) {
                ((float *)(gen_frame + 0x8))[2] = fVar4;
              }
              else {
                ((float *)(gen_frame + 0x8))[2] = 0.0;
              }
              uVar9 = uVar6 >> 1;
              fVar1 = ((float *)(gen_frame + 0x54))[(int)(uVar9 * 2 + 1)];
              uVar15 = ((uint *)(gen_frame + 0x48))[(int)(uVar9)];
              fVar2 = (float)((float10)((float *)(gen_frame + 0x54))[(int)(uVar9 * 2)] * (float10)((float *)(gen_frame + 0x8))[2]);
              uVar8 = 0;
              if (fVar2 != 0.0) {
                iVar10 = ((uint)gen_fl2bits(fVar2) >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x2c)) = iVar10;
                if (iVar10 < 0) {
                  uVar8 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x28)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x2c));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x28));
                  }
                  uVar8 = (ushort)((uint)gen_fl2bits(fVar2) >> 0x10) & 0x8000 |
                          (ushort)((uint)gen_fl2bits(fVar2) >> 0xd) & 0x3ff |
                          (ushort)(*piVar11 << 10);
                }
              }
              puVar12[-2] = uVar8;
              uVar8 = 0;
              if (fVar1 != 0.0) {
                iVar10 = ((uint)gen_fl2bits(fVar1) >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x28)) = iVar10;
                if (iVar10 < 0) {
                  uVar8 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x2c)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x28));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x2c));
                  }
                  uVar8 = (ushort)((uint)gen_fl2bits(fVar1) >> 0x10) & 0x8000 |
                          (ushort)((uint)gen_fl2bits(fVar1) >> 0xd) & 0x3ff |
                          (ushort)(*piVar11 << 10);
                }
              }
              puVar12[-1] = uVar8;
              if (uVar15 == 0) {
                *puVar12 = 0;
              }
              else {
                iVar10 = (uVar15 >> 0x17 & 0xff) - 0x70;
                (*(int *)(gen_frame + 0x28)) = iVar10;
                if (iVar10 < 0) {
                  *puVar12 = 0;
                }
                else {
                  (*(int *)(gen_frame + 0x2c)) = 0x1f;
                  piVar11 = &(*(int *)(gen_frame + 0x28));
                  if (0x1e < iVar10) {
                    piVar11 = &(*(int *)(gen_frame + 0x2c));
                  }
                  *puVar12 = (ushort)(uVar15 >> 0x10) & 0x8000 | (ushort)(uVar15 >> 0xd) & 0x3ff |
                             (ushort)(*piVar11 << 10);
                }
              }
              goto LAB_0063586a;
            }
            uVar6 = uVar6 + 1;
            puVar12 = puVar12 + 4;
          } while (uVar6 < 6);
          (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 0x30;
          iVar10 = (*(int *)(gen_frame + 0x1c)) + -1;
          (*(int *)(gen_frame + 0x1c)) = iVar10;
        } while (iVar10 != 0);
        iVar10 = (*(int *)(gen_frame + 0x20)) + -1;
        (*(int *)(gen_frame + 0x20)) = iVar10;
      } while (iVar10 != 0);
      F_004d6970((undefined *)*(*(uint * PTR32 *)(gen_frame + 0x24)));
      uVar13 = 0;
      ((float *)(gen_frame + 0x8))[0] = 4.48416e-41;
      ((float *)(gen_frame + 0x8))[1] = 3.36312e-41;
      do {
        puVar14 = puVar14 + 1;
        uVar6 = F_004dccf0((undefined4)gen_fl2bits(((float *)(gen_frame + 0x8))[(int)(uVar13)]),1,4,0);
        *puVar14 = uVar6;
        if (uVar6 == 0) goto LAB_006354c0;
        uVar13 = uVar13 + 1;
      } while (uVar13 < 2);
      psVar7 = (short *)F_004d6a30((undefined *)(*(uint * PTR32 *)(gen_frame + 0x24))[1],0,0,2);
      puVar14 = (*(uint * PTR32 *)(gen_frame + 0x24));
      if (psVar7 != (short *)0x0) {
        uVar13 = 0;
        do {
          uVar6 = 0;
          do {
            sVar3 = ((short)uVar6 + (short)uVar13 * 2) * 6;
            *psVar7 = sVar3 + 1;
            psVar7[1] = sVar3 + 1;
            psVar7[3] = sVar3 + 3;
            psVar7[4] = sVar3 + 2;
            psVar7[2] = sVar3;
            psVar7[5] = sVar3 + 5;
            psVar7[6] = sVar3 + 4;
            psVar7[7] = sVar3 + 4;
            uVar6 = uVar6 + 1;
            psVar7 = psVar7 + 8;
          } while (uVar6 < 2);
          uVar13 = uVar13 + 1;
        } while (uVar13 < 1000);
        F_004d6ae0((undefined *)(*(uint * PTR32 *)(gen_frame + 0x24))[1]);
        psVar7 = (short *)F_004d6a30((undefined *)puVar14[2],0,0,2);
        if (psVar7 != (short *)0x0) {
          uVar13 = 0;
          do {
            uVar6 = 0;
            do {
              sVar3 = ((short)uVar6 + (short)uVar13 * 2) * 6;
              *psVar7 = sVar3 + 1;
              psVar7[1] = sVar3 + 1;
              psVar7[2] = sVar3;
              psVar7[3] = sVar3 + 5;
              psVar7[4] = sVar3 + 4;
              psVar7[5] = sVar3 + 4;
              uVar6 = uVar6 + 1;
              psVar7 = psVar7 + 6;
            } while (uVar6 < 2);
            uVar13 = uVar13 + 1;
          } while (uVar13 < 1000);
          F_004d6ae0((undefined *)(*(uint * PTR32 *)(gen_frame + 0x24))[2]);
          bVar5 = 1;
          goto LAB_006359fa;
        }
      }
    }
  }
LAB_006354c0: ;
  bVar5 = 0;
LAB_006359fa: ;
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return bVar5;
}

/* ref: FUN_00635a10 */
unsigned int F_00635a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  
  if (*(int *)((int)this + 0x10) != param_1) {
    *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 2;
    *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) & 0xfb;
    uVar1 = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
    if (*(int *)((int)this + 0x10) != 5) {
      uVar1 = REFG(float, 0x13205dc);
    }
    *(undefined4 *)((int)this + 0x1c) = uVar1;
    *(int *)((int)this + 0x14) = *(int *)((int)this + 0x10);
    *(int *)((int)this + 0x10) = param_1;
  }
  return 0;
}

/* ref: FUN_00635a50 */
byte F_00635a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) & 0xfb;
  bVar1 = (*(byte *)((int)this + 0x20) >> 1 ^ *(byte *)((int)this + 0x20)) & 2;
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) ^ bVar1;
  *(undefined4 *)((int)this + 0x18) = REFG(float, 0x13205dc);
  *(undefined4 *)((int)this + 0x1c) = 0;
  return bVar1;
}

/* ref: FUN_00635a90 */
unsigned int F_00635a90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x635a90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if (((*(byte *)(in_ecx + 0x20) & 2) != 0) &&
     (fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x18) + (float10)param_2))),
     *(float *)(in_ecx + 0x18) = fVar1, (float10)REFG(float, 0x13205dc) <= (float10)fVar1)) {
    *(float *)(in_ecx + 0x18) = REFG(float, 0x13205dc);
    *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) & 0xfd;
    *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) | 4;
    *(float *)(in_ecx + 0x1c) = REFG(float, 0x13205dc);
  }
  if (((*(byte *)(in_ecx + 0x20) & 4) != 0) &&
     (fVar1 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x1c) - (float10)param_2))),
     *(float *)(in_ecx + 0x1c) = fVar1, (float10)fVar1 <= (float10)0)) {
    *(undefined4 *)(in_ecx + 0x1c) = 0;
    *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) & 0xfb;
    return 0;
  }
  return 0;
}

/* ref: FUN_00635b10 */
byte F_00635b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (char)param_1 != '\0' | *(byte *)((int)this + 0x20) & 0xfe;
  *(byte *)((int)this + 0x20) = bVar1;
  return bVar1;
}

/* ref: FUN_00635b30 */
uint F_00635b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 8) & 0xfffffffd;
  *(uint *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_00635b60 */
unsigned int F_00635b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x635b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  if (*(short *)((int)this + 0x2c) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)((int)this + 0x30) + iVar3;
      *(undefined4 *)(iVar1 + 0x14) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x10 + iVar3)));
      *(undefined4 *)(iVar1 + 0x10) = param_1;
      *(byte *)(iVar1 + 0x20) = *(byte *)(iVar1 + 0x20) & 0xfb;
      uVar2 = uVar2 + 1;
      *(byte *)(iVar1 + 0x20) =
           *(byte *)(iVar1 + 0x20) ^ (*(byte *)(iVar1 + 0x20) >> 1 ^ *(byte *)(iVar1 + 0x20)) & 2;
      *(undefined4 *)(iVar1 + 0x18) = REFG(float, 0x13205dc);
      *(undefined4 *)(iVar1 + 0x1c) = 0;
      iVar3 = iVar3 + 0x30;
    } while (uVar2 < *(ushort *)((int)this + 0x2c));
  }
  return 0;
}

/* ref: FUN_00635bd0 */
uint F_00635bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x635bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 < 0x18) {
    *param_3 = 0;
    return (uint)param_3;
  }
  F_00624dd0(param_1,0);
  *param_3 = *param_3 & 0x3000000;
  if ((*param_3 & 0x3000000) == 0x1000000) {
    uVar1 = F_00624ca0(param_1,param_2 * 0x358 + 4 + REFG(int, 0x137127c));
    return uVar1;
  }
  uVar1 = F_00624dd0(param_1,1);
  return uVar1;
}

/* ref: FUN_00635c40 */
uint F_00635c40(float gen_a0)
{
  GEN_ENTER(0x635c40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(REFG(int, 0x1371278) + 0x12);
  uVar2 = 0;
  if (bVar1 == 0xff) {
    uVar2 = F_0068bbb0(param_1);
    return uVar2;
  }
  if (bVar1 < 3) {
    uVar2 = (uint)bVar1;
  }
  return uVar2;
}

/* ref: FUN_00635c90 */
uint F_00635c90(unsigned int gen_a0)
{
  GEN_ENTER(0x635c90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  int local_8;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe60));
  *(undefined2 *)((int)this + 0x1144) = 0;
  *(undefined4 *)((int)this + 0x1148) = 0;
  puVar2 = (undefined4 *)((int)this + 0x114c);
  local_8 = 1;
  do {
    *puVar2 = 0;
    F_00c48350(puVar2 + 1,0,0x70);
    puVar2 = puVar2 + 3;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x1164) = 0;
  *(undefined4 *)((int)this + 0x1168) = 0;
  *(undefined4 *)((int)this + 0x116c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1174) = 0;
  *(undefined4 *)((int)this + 0x1170) = 0xffffffff;
  *(undefined4 *)((int)this + 0x117c) = 0;
  *(undefined4 *)((int)this + 0x1178) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1184) = 0;
  *(undefined4 *)((int)this + 0x1180) = 0xffffffff;
  *(undefined4 *)((int)this + 0x118c) = 0;
  *(undefined4 *)((int)this + 0x1188) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1194) = 0;
  *(undefined4 *)((int)this + 0x1198) = 0;
  *(undefined4 *)((int)this + 0x11a0) = 0;
  *(undefined4 *)((int)this + 0x11a4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1190) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x119c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11a8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11ac) = 0;
  *(undefined4 *)((int)this + 0x11b0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11b4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11b8) = 0;
  *(undefined4 *)((int)this + 0x11bc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11c0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11c4) = 0;
  *(undefined4 *)((int)this + 0x11c8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11cc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11d0) = 0;
  *(undefined4 *)((int)this + 0x11d4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11d8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11dc) = 0;
  *(undefined4 *)((int)this + 0x11e0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11e4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11e8) = 0;
  *(undefined4 *)((int)this + 0x11ec) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11f0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x11f4) = 0;
  *(undefined4 *)((int)this + 0x11f8) = 0;
  *(undefined4 *)((int)this + 0x1200) = 0;
  *(undefined4 *)((int)this + 0x1204) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x11fc) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x120c) = 0;
  *(undefined4 *)((int)this + 0x1208) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1214) = 0;
  *(undefined4 *)((int)this + 0x1210) = 0xffffffff;
  *(undefined4 *)((int)this + 0x1218) = REFG(float, 0x10ab17c);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x1220) = 0;
  *(undefined4 *)((int)this + 0x121c) = uVar1;
  return (uint)this;
}

/* ref: FUN_00635e30 */
byte F_00635e30(unsigned int gen_a0)
{
  GEN_ENTER(0x635e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  undefined * pvVar6;
  int iVar7;
  int * piVar8;
  
  pvVar6 = REFG(void * PTR32, 0x1370b90);
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_GrassGridData");
  *(uint *)((int)this + 0x1170) = uVar3;
  uVar3 = F_004dcd60(0x40,2,0);
  *(uint *)((int)this + 0x1174) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_WindParam");
  *(uint *)((int)this + 0x1178) = uVar3;
  uVar3 = F_004dcd60(0x10,2,0);
  *(uint *)((int)this + 0x117c) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_DitherParam");
  *(uint *)((int)this + 0x1180) = uVar3;
  uVar3 = F_004dcd60(0x10,2,0);
  *(uint *)((int)this + 0x1184) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_GridWorldPosition");
  *(uint *)((int)this + 0x1188) = uVar3;
  uVar3 = F_004dcd60(0xc,2,0);
  *(uint *)((int)this + 0x118c) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x20),"g_SamplerColorMap");
  *(uint *)((int)this + 0x116c) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_ModelData");
  *(uint *)((int)this + 0x1208) = uVar3;
  uVar3 = F_004dcd60(0xa00,2,0);
  *(uint *)((int)this + 0x120c) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar6 + 0x1c),"g_ModelParam");
  *(uint *)((int)this + 0x1210) = uVar3;
  uVar3 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)this + 0x114c);
  do {
    bVar2 = F_00635470((*(undefined * PTR32 *)(gen_frame + 0x8)),uVar3);
    if (bVar2 == 0) {
      piVar5 = ((int *)GEN_TOP(((int)this + (uVar3 * 3 + 0x453) * 4)));
      iVar7 = 2;
      piVar8 = piVar5;
      do {
        piVar8 = piVar8 + 1;
        piVar1 = (int *)*piVar8;
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
          *piVar8 = 0;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar8 = (int *)*piVar5;
      if (piVar8 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
        *piVar5 = 0;
      }
      goto LAB_0063625d;
    }
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xc);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  F_004d58e0(((undefined1 *)(gen_frame + 0xc)),0,0,0x34,0);
  F_004d58e0(((undefined1 *)(gen_frame + 0x10)),0,8,0x34,4);
  F_004d58e0(((undefined1 *)(gen_frame + 0x14)),1,0,0x34,8);
  uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0xc)),3);
  *(uint *)((int)this + 0x1164) = uVar3;
  uVar3 = F_00b52710("GetViewPosition",0xf,0);
  uVar4 = F_00b52710("GetViewPosition_Default",0x17,0);
  *(uint *)((int)this + 0x1194) = uVar3;
  *(uint *)((int)this + 0x1198) = uVar4;
  uVar3 = F_00b52710("GetViewPosition",0xf,0);
  uVar4 = F_00b52710("GetViewPosition_Billboard",0x19,0);
  *(uint *)((int)this + 0x11a0) = uVar3;
  *(uint *)((int)this + 0x11a4) = uVar4;
  uVar3 = F_00b52710("GetInstanceData",0xf,0);
  uVar4 = F_00b52710("GetInstanceData_Geometry",0x18,0);
  *(uint *)((int)this + 0x11ac) = uVar3;
  *(uint *)((int)this + 0x11b0) = uVar4;
  uVar3 = F_00b52710("GetInstanceData",0xf,0);
  uVar4 = F_00b52710("GetInstanceData_Model",0x15,0);
  *(uint *)((int)this + 0x11b8) = uVar3;
  *(uint *)((int)this + 0x11bc) = uVar4;
  uVar3 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar4 = F_00b52710("ApplyDitherClipOff",0x12,0);
  *(uint *)((int)this + 0x11c4) = uVar3;
  *(uint *)((int)this + 0x11c8) = uVar4;
  uVar3 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar4 = F_00b52710("ApplyDitherClipOn",0x11,0);
  *(uint *)((int)this + 0x11d0) = uVar3;
  *(uint *)((int)this + 0x11d4) = uVar4;
  uVar3 = F_00b52710("ApplyWavingAnimation",0x14,0);
  uVar4 = F_00b52710("ApplyWavingAnimation_Nothing",0x1c,0);
  *(uint *)((int)this + 0x11dc) = uVar3;
  *(uint *)((int)this + 0x11e0) = uVar4;
  uVar3 = F_00b52710("ApplyWavingAnimation",0x14,0);
  uVar4 = F_00b52710("ApplyWavingAnimation_AutoPlacement",0x22,0);
  *(uint *)((int)this + 0x11e8) = uVar3;
  *(uint *)((int)this + 0x11ec) = uVar4;
  uVar3 = F_00b52710("ApplyWavingAnimation",0x14,0);
  uVar4 = F_00b52710("ApplyWavingAnimation_Shigemi",0x1c,0);
  *(uint *)((int)this + 0x11f4) = uVar3;
  *(uint *)((int)this + 0x11f8) = uVar4;
  uVar3 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x1200) = uVar3;
  uVar3 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x1204) = uVar3;
  F_004ff310(((undefined1 *)(gen_frame + 0x0)),0,0);
  (*(undefined4 *)(gen_frame + 0x4)) = 0x746578;
  uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x4)),"common/graphics/texture/-dither.tex",0,0,0);
  *(uint *)((int)this + 0x1168) = uVar3;
  if (uVar3 != 0) {
    piVar5 = (int *)(uVar3 + 0x8c);
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5;
    UNLOCK();
    if (iVar7 < 8) {
      if (*(int *)((int)this + 0x1214) == 0) {
        pvVar6 = (undefined *)F_004dcc90(0xa0,4,6);
        *(undefined * PTR32 *)((int)this + 0x1214) = pvVar6;
        uVar3 = F_004d68c0(pvVar6,0,0xa0,2);
        uVar4 = 0;
        do {
          *(uint *)(uVar3 + uVar4 * 4) = ((uVar4 << 8 | uVar4) << 8 | uVar4) << 8 | uVar4;
          uVar4 = uVar4 + 1;
        } while (uVar4 < 0x28);
        F_004d6970(*(undefined * PTR32 *)((int)this + 0x1214));
      }
      uVar3 = F_004dcd60(0x280,2,0);
      *(uint *)((int)this + 0x1220) = uVar3;
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return 1;
    }
  }
LAB_0063625d: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: FUN_00636270 */
unsigned int F_00636270(unsigned int gen_a0)
{
  GEN_ENTER(0x636270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined2 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  *(undefined4 *)((int)this + 0x1c8) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1b4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x1e4) = 0;
  *(undefined4 *)((int)this + 0x1e8) = 0;
  *(undefined4 *)((int)this + 0x260) = 0;
  *(undefined4 *)((int)this + 0x264) = 0;
  *(undefined4 *)((int)this + 0x268) = 0;
  *(undefined4 *)((int)this + 0x26c) = 0;
  *(undefined4 *)((int)this + 0x270) = 0;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  return 0;
}

/* ref: FUN_00636370 */
unsigned int F_00636370(unsigned int gen_a0)
{
  GEN_ENTER(0x636370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  
  fVar8 = F_00c4d3da((float10)*(double *)&REFG(undefined, 0x10912a8));
  fVar3 = (float)fVar8;
  *(float *)((int)this + 0xb0) = fVar3;
  if ((*(uint *)&REFG(undefined, 0x1487e7c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1487e7c) = *(uint *)&REFG(undefined, 0x1487e7c) | 1;
    *(float *)&REFG(undefined, 0x1487e78) =
         ((float)GEN_TOF(-(((float10)*(float *)&REFG(undefined, 0x1320678) * (float10)*(double *)&REFG(double, 0x10948e0)) *
                 (float10)*(double *)&REFG(undefined, 0x10944e0))));
  }
  fVar8 = (float10)*(float *)&REFG(undefined, 0x1320678) * (float10)*(double *)&REFG(double, 0x10948e0);
  fVar6 = (float)fVar8;
  fVar4 = (float)(fVar8 * (float10)*(double *)&REFG(undefined, 0x10944d0));
  fVar8 = F_00c4d3da((float10)fVar4);
  *(float *)&REFG(undefined, 0x1487e74) = (float)fVar8;
  fVar8 = F_00c4d3da((float10)fVar4);
  *(float *)&REFG(undefined, 0x1487e78) = (float)fVar8;
  fVar8 = ((float10)GEN_TOD(fsin((float10)*(float *)&REFG(undefined, 0x1487e74))));
  fVar4 = (float)((float10)(float)fVar8 - (float10)REFG(double, 0x1088130));
  *(float *)((int)this + 0x130) = fVar4;
  fVar9 = ((float10)GEN_TOD(fsin((float10)*(float *)&REFG(undefined, 0x1487e78))));
  fVar8 = (float10)1;
  fVar5 = (float)((float10)(float)fVar9 - fVar8);
  fVar9 = (float10)fVar5;
  *(float *)((int)this + 0x134) = fVar5;
  fVar10 = (float10)fVar4;
  *(float *)((int)this + 0x140) = fVar4;
  *(float *)((int)this + 0x144) = fVar5;
  fVar11 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar12 = (float10)*(double *)&REFG(undefined, 0x10920a8);
  *(float *)((int)this + 0x138) = ((float)GEN_TOF(((fVar10 + fVar11) * fVar12)));
  *(float *)((int)this + 0x13c) = ((float)GEN_TOF(((fVar9 + fVar11) * fVar12)));
  fVar13 = (float10)fVar6;
  fVar11 = fVar13 * fVar11;
  fVar4 = (float)fVar11;
  fVar14 = (float10)REFG(double, 0x1088108);
  if ((float10)fVar4 < (float10)*(float *)&REFG(undefined, 0x1487e74)) {
    *(float *)((int)this + 0x130) = (float)(fVar10 * fVar14);
    *(float *)((int)this + 0x140) = (float)(fVar10 * (float10)*(double *)&REFG(undefined, 0x10a1b58));
  }
  else {
    *(float *)((int)this + 0xb8) = fVar3;
  }
  if ((float10)fVar4 < (float10)*(float *)&REFG(undefined, 0x1487e78)) {
    *(float *)((int)this + 0x134) = (float)(fVar9 * fVar14);
    *(float *)((int)this + 0x144) = (float)(fVar9 * (float10)*(double *)&REFG(undefined, 0x10a1b58));
  }
  else {
    *(float *)((int)this + 0xbc) = fVar3;
  }
  uVar1 = REFG(float, 0x10ac168);
  uVar15 = REFG(float, 0x1087f04);
  fVar10 = (float10)*(float *)&REFG(undefined, 0x1487e74);
  fVar9 = (float10)0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  if (fVar10 < (float10)fVar4) {
    *(undefined4 *)((int)this + 0x150) = uVar15;
    *(undefined4 *)((int)this + 0x158) = uVar15;
    *(undefined4 *)((int)this + 0x160) = uVar15;
    *(undefined4 *)((int)this + 0x170) = uVar15;
  }
  else {
    fVar10 = fVar10 - fVar11;
    fVar3 = (float)(fVar8 - fVar10 / fVar11);
    *(float *)((int)this + 0x150) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x150) = 0;
    }
    fVar3 = ((float)GEN_TOF((fVar8 - fVar10 / (fVar13 * (float10)*(double *)&REFG(undefined, 0x109cb18)))));
    *(float *)((int)this + 0x158) = fVar3;
    if ((float10)fVar3 < fVar12) {
      *(undefined4 *)((int)this + 0x158) = uVar1;
    }
    fVar3 = ((float)GEN_TOF((fVar8 - fVar10 / (fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0)))));
    *(float *)((int)this + 0x160) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x160) = 0;
    }
    fVar3 = ((float)GEN_TOF((fVar8 - fVar10 / (fVar13 * (float10)*(double *)&REFG(undefined, 0x1094788)))));
    *(float *)((int)this + 0x170) = fVar3;
    fVar10 = (float10)*(float *)&REFG(undefined, 0x1487e74);
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x170) = 0;
    }
  }
  if ((float10)*(float *)&REFG(undefined, 0x1487e78) < (float10)fVar4) {
    *(undefined4 *)((int)this + 0x154) = uVar15;
    *(undefined4 *)((int)this + 0x15c) = uVar15;
    *(undefined4 *)((int)this + 0x164) = uVar15;
    *(undefined4 *)((int)this + 0x174) = uVar15;
  }
  else {
    fVar14 = (float10)*(float *)&REFG(undefined, 0x1487e78) - fVar11;
    fVar3 = (float)(fVar8 - fVar14 / fVar11);
    *(float *)((int)this + 0x154) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x154) = 0;
    }
    fVar3 = ((float)GEN_TOF((fVar8 - fVar14 / (fVar13 * (float10)*(double *)&REFG(undefined, 0x109cb18)))));
    *(float *)((int)this + 0x15c) = fVar3;
    if ((float10)fVar3 < fVar12) {
      *(undefined4 *)((int)this + 0x15c) = uVar1;
    }
    fVar3 = ((float)GEN_TOF((fVar8 - fVar14 / (fVar13 * (float10)*(double *)&REFG(undefined, 0x10944e0)))));
    *(float *)((int)this + 0x164) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x164) = 0;
    }
  }
  fVar11 = (float10)fVar6;
  if (fVar10 < fVar11) {
    *(undefined4 *)((int)this + 0x170) = uVar15;
  }
  else {
    fVar3 = ((float)GEN_TOF((fVar8 - (fVar10 - fVar13) / fVar13)));
    *(float *)((int)this + 0x170) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x170) = 0;
    }
  }
  if ((float10)*(float *)&REFG(undefined, 0x1487e78) < fVar11) {
    *(undefined4 *)((int)this + 0x174) = uVar15;
  }
  else {
    fVar3 = ((float)GEN_TOF((fVar8 - ((float10)*(float *)&REFG(undefined, 0x1487e78) - fVar13) / fVar13)));
    *(float *)((int)this + 0x174) = fVar3;
    if ((float10)fVar3 < fVar9) {
      *(undefined4 *)((int)this + 0x174) = 0;
    }
  }
  iVar7 = REFG(int, 0x137128c);
  uVar15 = *(undefined4 *)(REFG(int, 0x137128c) + 0x1568);
  uVar1 = *(undefined4 *)(REFG(int, 0x137128c) + 0x156c);
  uVar2 = *(undefined4 *)(REFG(int, 0x137128c) + 0x1570);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(REFG(int, 0x137128c) + 0x1564);
  *(undefined4 *)((int)this + 0x184) = uVar15;
  *(undefined4 *)((int)this + 0x188) = uVar1;
  *(undefined4 *)((int)this + 0x18c) = uVar2;
  *(undefined4 *)((int)this + 400) = *(undefined4 *)(iVar7 + 0x1574);
  *(undefined4 *)((int)this + 0x194) = *(undefined4 *)(iVar7 + 0x1578);
  uVar15 = REFG(float, 0x1094724);
  if (*(int *)(REFG(int, 0x137127c) + 0x66f4) != 0) {
    uVar15 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0x66f4) + 0xb0)));
  }
  *(undefined4 *)((int)this + 0x198) = uVar15;
  *(undefined4 *)((int)this + 0x19c) = 0;
  *(undefined4 *)((int)this + 0x220) = *(undefined4 *)((int)this + 0x180);
  *(undefined4 *)((int)this + 0x224) = *(undefined4 *)((int)this + 0x184);
  *(undefined4 *)((int)this + 0x228) = *(undefined4 *)((int)this + 0x188);
  *(undefined4 *)((int)this + 0x22c) = *(undefined4 *)((int)this + 0x18c);
  *(undefined4 *)((int)this + 0x230) = *(undefined4 *)((int)this + 400);
  *(undefined4 *)((int)this + 0x234) = *(undefined4 *)((int)this + 0x194);
  *(undefined4 *)((int)this + 0x238) = *(undefined4 *)((int)this + 0x198);
  *(undefined4 *)((int)this + 0x23c) = *(undefined4 *)((int)this + 0x19c);
  return 0;
}

/* ref: FUN_00636870 */
uint F_00636870(unsigned int gen_a0)
{
  GEN_ENTER(0x636870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined * this_00;
  int iVar2;
  int iVar3;
  float10 fVar4;
  double dVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  undefined4 * PTR32 * ppuVar10;
  undefined4 * PTR32 * ppuVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar12 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar12 + 0x1a8);
  (*(int *)(gen_frame + 0x18)) = iVar12;
  if ((*(int *)((int)this + 0xc) != -1) && (*(int *)((int)this + 0x10) != 0)) {
    *((int *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xc) * 4 + 0xa8))) = *(int *)((int)this + 0x10);
  }
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfe47ffff | 0x6400000;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(REFG(int, 0x1371288) + 0x1c);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(REFG(int, 0x1371288) + 0x20);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(REFG(int, 0x1371288) + 0x1a4);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(REFG(int, 0x1371288) + 0x19c);
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar12 + 0x1a8) + 8))) >> 0x1b;
  if (uVar7 < 0x1a) {
LAB_00636910: ;
    iVar12 = 0;
  }
  else if (uVar7 < 0x1e) {
    iVar12 = *(int *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar7 != 0x1e) goto LAB_00636910;
    iVar12 = *(int *)(REFG(int, 0x1371288) + 0x10);
  }
  iVar2 = *(int *)(REFG(int, 0x1371288) + 0x1a0);
  iVar3 = *(int *)(REFG(int, 0x1371288) + 0xc0);
  fVar13 = (float10)*(int *)(iVar3 + 0x18);
  if (*(int *)(iVar3 + 0x18) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar4 = (float10)1;
  piVar1 = (int *)(iVar3 + 0x1c);
  (*(int * PTR32 *)(gen_frame + 0x10)) = piVar1;
  *(float *)((int)this + 0x210) = (float)(fVar4 / fVar13);
  puVar9 = (undefined4 *)*piVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x214) = (float)(fVar4 / fVar13);
  puVar9 = *(undefined4 * PTR32 *)(iVar3 + 0x18);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar14 = (float10)REFG(double, 0x1088108);
  *(float *)((int)this + 0x218) = (float)(fVar14 / fVar13);
  puVar9 = (undefined4 *)*piVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x21c) = (float)(fVar14 / fVar13);
  fVar13 = (float10)*(int *)(iVar2 + 0x18);
  if (*(int *)(iVar2 + 0x18) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar1 = (int *)(iVar2 + 0x1c);
  *(float *)((int)this + 0x1f0) = (float)(fVar4 / fVar13);
  fVar13 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 500) = (float)(fVar4 / fVar13);
  puVar9 = *(undefined4 * PTR32 *)(iVar2 + 0x18);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x1f8) = (float)(fVar14 / fVar13);
  puVar9 = (undefined4 *)*piVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x1fc) = (float)(fVar14 / fVar13);
  fVar13 = (float10)*(int *)(iVar12 + 0x18);
  if (*(int *)(iVar12 + 0x18) < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  piVar1 = (int *)(iVar12 + 0x1c);
  *(float *)((int)this + 0x200) = (float)(fVar4 / fVar13);
  fVar13 = (float10)*piVar1;
  if (*piVar1 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x204) = (float)(fVar4 / fVar13);
  puVar9 = *(undefined4 * PTR32 *)(iVar12 + 0x18);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x208) = (float)(fVar14 / fVar13);
  puVar9 = (undefined4 *)*piVar1;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  fVar13 = (float10)(int)puVar9;
  if ((int)puVar9 < 0) {
    fVar13 = fVar13 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *(float *)((int)this + 0x20c) = (float)(fVar14 / fVar13);
  uVar7 = F_004d9920(*(undefined * PTR32 *)((int)this + 0x10),0,0x70,2);
  if (uVar7 != 0) {
    F_00662af0(uVar7,(int)this + 0x1f0);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x24))) = 0;
  }
  uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x198);
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfffc0000 | 0x40000;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar8;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x1c)),0,0,0);
  dVar5 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
  *(uint *)((int)this_00 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar7 = REFG(undefined4, 0x130236c);
  *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)((int)this_00 + 0x5c) = uVar7 & 0xfffffffc;
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0x1e4);
  uVar8 = *(undefined4 *)((int)this + 0x1e8);
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
  *(undefined1 *)((int)this_00 + 0x6c) = 0x10;
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
  *(undefined4 *)((int)this_00 + 0x68) = uVar8;
  puVar9 = (undefined4 *)(int)dVar5;
  (*(int * PTR32 *)(gen_frame + 0x10)) = puVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = puVar9;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x1ff;
  ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  if (0x1fe < (int)puVar9) {
    ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *ppuVar10;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xfffffe00;
  ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if (-0x201 < (int)*ppuVar10) {
    ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2ac))) =
       ((uint)*ppuVar11 & 0x3ff) << 10 | 0x2a;
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x268) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x26c) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  uVar7 = *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar7) {
    if (uVar7 < 0x1e) {
      uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
      goto LAB_00636be5;
    }
    if (uVar7 == 0x1e) {
      uVar8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
      goto LAB_00636be5;
    }
  }
  uVar8 = 0;
LAB_00636be5: ;
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) = uVar8;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  puVar9 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar8 = REFG(float, 0x1087f04);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 3;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = uVar8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    F_004d4810(this_00,puVar9);
  }
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfffc0bb8 | 0x40bb8;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  puVar9 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar8 = REFG(float, 0x1087f04);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 3;
    puVar9[1] = 1;
    puVar9[2] = 0;
    puVar9[3] = uVar8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    F_004d4810(this_00,puVar9);
  }
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfffc170c | 0x4170c;
  *(uint *)((int)this_00 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar7 = REFG(undefined4, 0x1302368);
  *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)((int)this_00 + 0x58) = uVar7 & 0xfe000000;
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0x1e4);
  uVar8 = *(undefined4 *)((int)this + 0x1e8);
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
  *(undefined4 *)((int)this_00 + 0x68) = uVar8;
  *(undefined1 *)((int)this_00 + 0x6c) = 0x10;
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x10));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x1ff;
  ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
    ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *ppuVar10;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xfffffe00;
  ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if (-0x201 < (int)*ppuVar10) {
    ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2ac))) =
       ((uint)*ppuVar11 & 0x3ff) << 10 | 0x36a;
  if ((*(int *)((int)this + 0xc) != -1) && (*(int *)((int)this + 0x10) != 0)) {
    *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x18)) + 0x1a8) + 0xa8 + *(int *)((int)this + 0xc) * 4))) =
         *(int *)((int)this + 0x10);
  }
  *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x288) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  puVar9 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar8 = REFG(float, 0x1087f04);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 3;
    puVar9[1] = 1;
    puVar9[2] = 0;
    puVar9[3] = uVar8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    F_004d4810(this_00,puVar9);
  }
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x19c);
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x280) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x20)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x284) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x294) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x1c)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x19c);
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28c) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  puVar9 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar8 = REFG(float, 0x1087f04);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 3;
    puVar9[1] = 1;
    puVar9[2] = 0;
    puVar9[3] = uVar8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    F_004d4810(this_00,puVar9);
  }
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x290) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar9;
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    }
  }
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x14)),(*(undefined4 *)(gen_frame + 0x28)),0,0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x10));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x1ff;
  ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
    ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *ppuVar10;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xfffffe00;
  ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if (-0x201 < (int)*ppuVar10) {
    ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1cc) * 8 + 0x2ac))) =
       ((uint)*ppuVar11 & 0x3ff) << 10 | 0x36a;
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)(gen_frame + 0x10));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0x1ff;
  ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  if (0x1fe < (int)(*(int * PTR32 *)(gen_frame + 0x10))) {
    ppuVar10 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x24)) = *ppuVar10;
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xfffffe00;
  ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
  if (-0x201 < (int)*ppuVar10) {
    ppuVar11 = &(*(undefined4 * PTR32 *)(gen_frame + 0x24));
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2ac))) =
       ((uint)*ppuVar11 & 0x3ff) << 10 | 0x36a;
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1cc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x19c);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  uVar8 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x298) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(undefined4 *)((int)this_00 + 0x40) = uVar8;
  *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x29c) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  puVar9 = (undefined4 *)F_004d4760(this_00,0x48);
  if (puVar9 != (undefined4 *)0x0) {
    *puVar9 = 4;
    puVar9[1] = 6;
    puVar9[2] = 0;
    puVar9[3] = 4;
    bVar6 = F_004dc830(this_00,puVar9 + 4);
    if (bVar6 != 0) {
      F_004d4810(this_00,puVar9);
    }
  }
  uVar7 = F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0,0);
  return uVar7;
}

/* ref: FUN_0063704e */
uint F_0063704e(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x63704eu, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_edx = (undefined4)gen_a0;
  undefined4 * in_ebx = (undefined4 *)(uintptr_t)gen_a1;
  undefined * in_esi = (undefined *)(uintptr_t)gen_a2;
  int in_edi = (int)gen_a3;
  int in_ebp = (int)gen_a4;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int * piVar5;
  uint * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  F_004d4810(in_esi,in_edx);
  F_004daa40(in_esi,1,in_ebp + -0x18,*(undefined4 *)(in_ebp + -4),in_ebx,in_ebx);
  iVar1 = *(int *)(in_ebp + -0x1c);
  *(int *)(in_ebp + -8) = iVar1;
  *(undefined4 *)(in_ebp + -0x20) = 0x1ff;
  piVar5 = (int *)(in_ebp + -8);
  if (0x1fe < iVar1) {
    piVar5 = (int *)(in_ebp + -0x20);
  }
  iVar2 = *piVar5;
  *(int *)(in_ebp + -8) = iVar2;
  *(undefined4 *)(in_ebp + -0x20) = 0xfffffe00;
  puVar6 = (uint *)(in_ebp + -0x20);
  if (-0x201 < iVar2) {
    puVar6 = (uint *)(in_ebp + -8);
  }
  *((uint *)GEN_TOP(((int)in_esi + *(int *)(in_edi + 0x1cc) * 8 + 0x2ac))) = (*puVar6 & 0x3ff) << 10 | 0x36a;
  *(int *)(in_ebp + -8) = iVar1;
  *(undefined4 *)(in_ebp + -0x20) = 0x1ff;
  piVar5 = (int *)(in_ebp + -8);
  if (0x1fe < iVar1) {
    piVar5 = (int *)(in_ebp + -0x20);
  }
  iVar1 = *piVar5;
  *(int *)(in_ebp + -8) = iVar1;
  *(undefined4 *)(in_ebp + -0x20) = 0xfffffe00;
  puVar6 = (uint *)(in_ebp + -0x20);
  if (-0x201 < iVar1) {
    puVar6 = (uint *)(in_ebp + -8);
  }
  *((uint *)GEN_TOP(((int)in_esi + *(int *)(in_edi + 0x1dc) * 8 + 0x2ac))) = (*puVar6 & 0x3ff) << 10 | 0x36a;
  *((undefined4 *)GEN_TOP(((int)in_esi + *(int *)(in_edi + 0x1cc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x19c);
  *((undefined4 *)GEN_TOP(((int)in_esi + *(int *)(in_edi + 0x1dc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x298) + 0x98)));
  *(undefined4 * PTR32 *)((int)in_esi + 0x60) = in_ebx;
  *(undefined4 *)((int)in_esi + 0x40) = uVar3;
  *(undefined4 *)((int)in_esi + 0x44) = *((undefined4 *)GEN_TOP((*(int *)(in_edi + 0x29c) + 0x9c)));
  *(undefined4 * PTR32 *)((int)in_esi + 0x60) = in_ebx;
  puVar7 = (undefined4 *)F_004d4760(in_esi,0x48);
  if (puVar7 != in_ebx) {
    *puVar7 = 4;
    puVar7[1] = 6;
    puVar7[2] = in_ebx;
    puVar7[3] = 4;
    bVar4 = F_004dc830(in_esi,puVar7 + 4);
    if (bVar4 != 0) {
      F_004d4810(in_esi,puVar7);
    }
  }
  uVar8 = F_004daa40(in_esi,1,in_ebp + -0x28,*(undefined4 *)(in_ebp + -0x24),in_ebx,in_ebx);
  return uVar8;
}

/* ref: FUN_006371c0 */
unsigned int F_006371c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6371c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  ushort * puVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined * this_00;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint * puVar12;
  byte bVar13;
  undefined4 * puVar14;
  uint local_18;
  uint local_14;
  ushort * local_10;
  ushort * local_c;
  int local_8;
  
  iVar6 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar6 + 0x1a8);
  if ((*(int *)((int)this + 0xc) != -1) && (*(int *)((int)this + 0x10) != 0)) {
    *((int *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xc) * 4 + 0xa8))) = *(int *)((int)this + 0x10);
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d8) * 8 + 0x2ac))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x68) & 0xfffffff;
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d8) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0xc0);
  *(undefined4 *)((int)this_00 + 0x48) = *((undefined4 *)GEN_TOP((param_1 + 0x118 + (param_2 & 0xff) * 4)));
  iVar11 = (param_2 & 0xff) * 0x3c;
  uVar4 = *((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + 2 + iVar11)));
  uVar5 = *((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + 0xe + iVar11)));
  local_18 = (uint)uVar5;
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xffc7ffff | 0x400000;
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
  *(undefined4 *)((int)this_00 + 0x58) = 0x1e000000;
  *(undefined4 *)((int)this_00 + 0x5c) = 0xffff0140;
  *(uint *)((int)this_00 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *(undefined4 *)((int)this_00 + 0x40) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x260) + 0x98)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  *(undefined4 *)((int)this_00 + 0x44) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x264) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  if (uVar5 != 0) {
    local_8 = 0;
    do {
      iVar7 = *(int *)(iVar6 + 0x1a8);
      puVar2 = ((ushort *)GEN_TOP((*(int *)(param_1 + 0xbc) +
               ((uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + 0xc + iVar11))) + local_8) * 0x24)));
      *(uint *)(iVar7 + 0x3c) =
           ((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x124) + (uint)puVar2[4] * 4))) + 0xa0))) +
                     0xc))) * 4 ^ *(uint *)(iVar7 + 0x3c)) & 4 ^ *(uint *)(iVar7 + 0x3c)) & 0x7fffffff
      ;
      *(undefined4 *)((int)this_00 + 0x4c) =
           *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x108) +
            ((uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + iVar11))) + (uint)uVar4 + local_8) * 4)));
      bVar13 = *(byte *)((int)puVar2 + 0x23) & 3;
      uVar8 = *((uint *)GEN_TOP((param_1 + 0x10c + (param_2 & 0xff) * 4)));
      if (bVar13 != 0) {
        local_10 = puVar2 + 0x10;
        local_14 = (uint)bVar13;
        local_c = puVar2 + 10;
        puVar12 = (uint *)((int)this_00 + 0x6c);
        do {
          iVar7 = *(int *)local_c;
          uVar5 = *local_10;
          local_c = local_c + 2;
          *puVar12 = *puVar12 ^ (iVar7 << 8 ^ *puVar12) & 0x7fffff00;
          *(char *)puVar12 = (char)uVar5;
          *puVar12 = *puVar12 & 0x7fffffff;
          local_10 = (ushort *)((int)local_10 + 1);
          puVar12[-1] = uVar8;
          puVar12 = puVar12 + 2;
          local_14 = local_14 - 1;
        } while (local_14 != 0);
      }
      uVar9 = *(undefined4 *)(puVar2 + 8);
      uVar5 = *puVar2;
      uVar10 = *(undefined4 *)(puVar2 + 2);
      *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfffc0064 | 0x40064;
      iVar7 = REFG(int, 0x1370b90);
      uVar8 = *(int *)((int)this_00 + 0x18) + 0x60;
      if (uVar8 < 0x8001) {
        puVar14 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
        *(uint *)((int)this_00 + 0x18) = uVar8;
LAB_00637468: ;
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = 5;
          puVar14[2] = 0;
          puVar14[3] = 0;
          puVar14[4] = (uint)uVar5;
          puVar14[6] = uVar10;
          puVar14[1] = 5;
          puVar14[5] = uVar9;
          bVar13 = F_004dc830(this_00,puVar14 + 7);
          if (bVar13 != 0) {
            F_004d4810(this_00,puVar14);
          }
        }
      }
      else {
        piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
        LOCK();
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + 0x8000;
        UNLOCK();
        if (*(uint *)(iVar7 + 0xb8) < (uint)(*(int *)(iVar7 + 0xc4) * 3 + *piVar1)) {
          LOCK();
          *piVar1 = *piVar1 + -0x8000;
          UNLOCK();
        }
        else {
          puVar14 = ((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0xbc) + iVar3)));
          if (puVar14 != (undefined4 *)0x0) {
            *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar14;
            *(undefined4 *)((int)this_00 + 0x18) = 0x60;
            goto LAB_00637468;
          }
        }
      }
      local_8 = local_8 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  return 0;
}

/* ref: FUN_006374d0 */
unsigned int F_006374d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6374d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int * piVar1;
  ushort * puVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined * this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint * puVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  ushort * puVar17;
  int * piVar18;
  undefined4 * puVar19;
  uint local_1c;
  uint local_18;
  ushort * local_c;
  int local_8;
  
  iVar7 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar7 + 0x1a8);
  if ((*(int *)((int)this + 0xc) != -1) && (*(int *)((int)this + 0x10) != 0)) {
    *((int *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xc) * 4 + 0xa8))) = *(int *)((int)this + 0x10);
  }
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1cc) * 8 + 0x2ac))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x68) & 0xfffffff;
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d0) * 8 + 0x2ac))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x68) & 0xfffffff;
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d8) * 8 + 0x2ac))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x68) & 0xfffffff;
  *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1e0) * 8 + 0x2ac))) =
       *(uint *)(REFG(int, 0x13759f8) + 0x68) & 0xfffffff;
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1cc) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x94);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d0) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x38);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1d8) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0xc0);
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x1e0) * 8 + 0x2a8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x1a0);
  *(undefined4 *)((int)this_00 + 0x48) = *((undefined4 *)GEN_TOP((param_1 + 0x118 + (param_2 & 0xff) * 4)));
  iVar10 = (param_2 & 0xff) * 0x3c;
  uVar5 = *((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + 0xe + iVar10)));
  local_1c = (uint)uVar5;
  uVar6 = *((ushort *)GEN_TOP((*(int *)(param_1 + 0xb8) + iVar10 + 2)));
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xffc7ffff | 0x400000;
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
  *(undefined4 *)((int)this_00 + 0x58) = 0xa000000;
  *(undefined4 *)((int)this_00 + 0x5c) = 0xffff0100;
  *(uint *)((int)this_00 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  *(undefined4 *)((int)this_00 + 0x44) =
       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)this + 0x1b1) * 4 + 0x274))) + 0x9c)));
  *(undefined4 *)((int)this_00 + 0x60) = 0;
  if (uVar5 != 0) {
    local_8 = 0;
    do {
      iVar12 = *(int *)(iVar7 + 0x1a8);
      puVar2 = ((ushort *)GEN_TOP((*(int *)(param_1 + 0xbc) +
               ((uint)*((ushort *)GEN_TOP((iVar10 + 0xc + *(int *)(param_1 + 0xb8)))) + local_8) * 0x24)));
      *(uint *)(iVar12 + 0x3c) =
           ((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x124) + (uint)puVar2[4] * 4))) + 0xa0))) +
                     0xc))) * 4 ^ *(uint *)(iVar12 + 0x3c)) & 4 ^ *(uint *)(iVar12 + 0x3c)) &
           0x7fffffff;
      iVar12 = *((int *)GEN_TOP((*(int *)(param_1 + 0x108) +
                       ((uint)*((ushort *)GEN_TOP((iVar10 + *(int *)(param_1 + 0xb8)))) + (uint)uVar6 + local_8
                       ) * 4)));
      *(int *)((int)this_00 + 0x4c) = iVar12;
      if ((*(byte *)(iVar12 + 0x1c) & 4) == 0) {
        iVar12 = *(int *)((int)this + 0x274);
      }
      else {
        iVar12 = *(int *)((int)this + 0x270);
      }
      *(undefined4 *)((int)this_00 + 0x40) = *(undefined4 *)(iVar12 + 0x98);
      *(undefined4 *)((int)this_00 + 0x60) = 0;
      bVar15 = *(byte *)((int)puVar2 + 0x23) & 3;
      uVar16 = *((uint *)GEN_TOP((param_1 + 0x10c + (param_2 & 0xff) * 4)));
      if (bVar15 != 0) {
        local_c = puVar2 + 0x10;
        local_18 = (uint)bVar15;
        puVar13 = (uint *)((int)this_00 + 0x6c);
        puVar17 = puVar2 + 10;
        do {
          uVar5 = *local_c;
          *puVar13 = *puVar13 ^ (*(int *)((int)(uintptr_t)puVar17) << 8 ^ *puVar13) & 0x7fffff00;
          *(char *)puVar13 = (char)uVar5;
          *puVar13 = *puVar13 & 0x7fffffff;
          local_c = (ushort *)((int)local_c + 1);
          puVar13[-1] = uVar16;
          puVar17 = puVar17 + 2;
          puVar13 = puVar13 + 2;
          local_18 = local_18 - 1;
        } while (local_18 != 0);
      }
      uVar5 = *puVar2;
      uVar16 = (uint)puVar2[5];
      if (puVar2[6] == 0) {
        uVar8 = *(undefined4 *)(puVar2 + 8);
        uVar9 = *(undefined4 *)(puVar2 + 2);
        uVar16 = *(int *)((int)this_00 + 0x18) + 0x60;
        *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfffc0c1c | 0x40c1c;
        iVar12 = REFG(int, 0x1370b90);
        if (uVar16 < 0x8001) {
          puVar19 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
          *(uint *)((int)this_00 + 0x18) = uVar16;
LAB_0063783d: ;
          if (puVar19 != (undefined4 *)0x0) {
            *puVar19 = 5;
            puVar19[4] = (uint)uVar5;
            puVar19[2] = 0;
            puVar19[3] = 0;
            puVar19[1] = 5;
            puVar19[5] = uVar8;
            puVar19[6] = uVar9;
            bVar15 = F_004dc830(this_00,puVar19 + 7);
            if (bVar15 != 0) {
              F_004d4810(this_00,puVar19);
            }
          }
        }
        else {
          piVar18 = (int *)(REFG(int, 0x1370b90) + 0xc0);
          LOCK();
          iVar3 = *piVar18;
          *piVar18 = *piVar18 + 0x8000;
          UNLOCK();
          if (*(uint *)(iVar12 + 0xb8) < (uint)(*(int *)(iVar12 + 0xc4) * 3 + *piVar18)) {
            LOCK();
            *piVar18 = *piVar18 + -0x8000;
            UNLOCK();
          }
          else {
            puVar19 = ((undefined4 *)GEN_TOP((*(int *)(iVar12 + 0xbc) + iVar3)));
            if (puVar19 != (undefined4 *)0x0) {
              *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar19;
              *(undefined4 *)((int)this_00 + 0x18) = 0x60;
              goto LAB_0063783d;
            }
          }
        }
      }
      else {
        uVar14 = puVar2[6] + uVar16;
        if (uVar16 < uVar14) {
          local_18 = uVar14 - uVar16;
          piVar18 = ((int *)GEN_TOP((*(int *)(param_1 + 200) + 8 + uVar16 * 0x10)));
          do {
            iVar12 = piVar18[-2];
            iVar3 = piVar18[-1];
            *(uint *)((int)this_00 + 8) =
                 *(uint *)((int)this_00 + 8) ^
                 (*piVar18 - 0x3f3e4U ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
            iVar11 = REFG(int, 0x1370b90);
            uVar16 = *(int *)((int)this_00 + 0x18) + 0x60;
            if (uVar16 < 0x8001) {
              puVar19 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))))
              ;
              *(uint *)((int)this_00 + 0x18) = uVar16;
LAB_00637930: ;
              if (puVar19 != (undefined4 *)0x0) {
                *puVar19 = 5;
                puVar19[4] = (uint)uVar5;
                puVar19[2] = 0;
                puVar19[3] = 0;
                puVar19[1] = 5;
                puVar19[5] = iVar12;
                puVar19[6] = iVar3;
                bVar15 = F_004dc830(this_00,puVar19 + 7);
                if (bVar15 != 0) {
                  F_004d4810(this_00,puVar19);
                }
              }
            }
            else {
              piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
              LOCK();
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + 0x8000;
              UNLOCK();
              if (*(uint *)(iVar11 + 0xb8) < (uint)(*(int *)(iVar11 + 0xc4) * 3 + *piVar1)) {
                LOCK();
                *piVar1 = *piVar1 + -0x8000;
                UNLOCK();
              }
              else {
                puVar19 = ((undefined4 *)GEN_TOP((*(int *)(iVar11 + 0xbc) + iVar4)));
                if (puVar19 != (undefined4 *)0x0) {
                  *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar19;
                  *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                  goto LAB_00637930;
                }
              }
            }
            piVar18 = piVar18 + 4;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
        }
      }
      local_8 = local_8 + 1;
      local_1c = local_1c - 1;
    } while (local_1c != 0);
  }
  return 0;
}

/* ref: FUN_006379a0 */
unsigned int F_006379a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6379a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abea0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xa0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0xffffffff;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return 0;
}

/* ref: FUN_00637a40 */
uint F_00637a40(unsigned int gen_a0)
{
  GEN_ENTER(0x637a40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  double dVar8;
  undefined4 * puVar9;
  uint uVar10;
  float10 fVar11;
  
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)REFG(double, 0x1091858) +
                 (float10)*(float *)((int)this + 0xdc))));
  dVar8 = (double)fVar4;
  fVar11 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar8),
                        (int)((ulonglong)gen_d2bits(dVar8) >> 0x20));
  *(float *)((int)this + 0xdc) = (float)((float10)fVar4 - (float10)(float)fVar11);
  iVar7 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  fVar4 = *(float *)(REFG(int, 0x13759f8) + 0x268);
  puVar9 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xb8),0,0,2);
  uVar10 = 0;
  if (puVar9 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(iVar7 + 0x94);
    uVar2 = *(undefined4 *)(iVar7 + 0x98);
    uVar3 = *(undefined4 *)((int)this + 0xdc);
    *puVar9 = *(undefined4 *)(iVar7 + 0x90);
    puVar9[1] = uVar1;
    puVar9[2] = uVar2;
    puVar9[3] = uVar3;
    fVar5 = *(float *)((int)this + 0xc0);
    fVar11 = (float10)fVar4;
    fVar4 = *(float *)((int)this + 0xc4);
    fVar6 = *(float *)((int)this + 0xbc);
    puVar9[7] = *(undefined4 *)((int)this + 0xd4);
    puVar9[4] = (undefined4)gen_fl2bits((float)((float10)fVar6 * fVar11));
    puVar9[5] = (undefined4)gen_fl2bits((float)(fVar11 * (float10)fVar5));
    puVar9[6] = (undefined4)gen_fl2bits((float)((float10)fVar4 * fVar11));
    fVar4 = *(float *)((int)this + 0xcc);
    fVar5 = *(float *)((int)this + 0xd0);
    fVar6 = *(float *)((int)this + 200);
    puVar9[0xb] = *(undefined4 *)((int)this + 0xd8);
    puVar9[8] = (undefined4)gen_fl2bits((float)(fVar11 * (float10)fVar6));
    puVar9[9] = (undefined4)gen_fl2bits((float)((float10)fVar4 * fVar11));
    puVar9[10] = (undefined4)gen_fl2bits((float)((float10)fVar5 * fVar11));
    uVar10 = *(uint *)((int)this + 0xb8);
    *(undefined4 *)(uVar10 + 0x24) = 0;
  }
  return uVar10;
}

/* ref: FUN_00637b80 */
uint F_00637b80(unsigned int gen_a0)
{
  GEN_ENTER(0x637b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x18,0x10)));
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 1;
    *piVar1 = (int)(*(undefined * PTR32 (*)[8])REFP(0x10abadc));
    piVar1[4] = 0;
    piVar1[5] = 0;
    uVar2 = F_004dcd60(0x10,4,9);
    piVar1[5] = uVar2;
    if (uVar2 != 0) {
      piVar1[4] = param_1;
      F_00513f60(param_1,0,0);
      return (uint)piVar1;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}

/* ref: FUN_00637c00 */
uint F_00637c00(unsigned int gen_a0)
{
  GEN_ENTER(0x637c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x14,0x10)));
  if (piVar1 != (int *)0x0) {
    piVar1[1] = 1;
    *piVar1 = (int)(*(undefined * PTR32 (*)[8])REFP(0x10abb00));
    piVar1[2] = 0;
    piVar1[3] = 0;
    uVar2 = F_004dcd60(0x80,4,9);
    piVar1[3] = uVar2;
    if (uVar2 != 0) {
      piVar1[4] = 0xffffff;
      if (piVar1[2] != 0) {
        F_0050c620(piVar1[2],0,0);
      }
      piVar1[2] = param_1;
      if (param_1 != 0) {
        F_00513f60(param_1,0,0);
      }
      return (uint)piVar1;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  return 0;
}

/* ref: FUN_00637ca0 */
uint F_00637ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x637ca0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint in_EAX = 0;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = (*(uint *)&gen_args[1]);
  fVar2 = REFG(float, 0x10a0d8c);
  pfVar4 = (float *)((*(uint *)&gen_args[1]) + 0xc);
  if (!GEN_ISNAN(*pfVar4) && (!(0.0 < *pfVar4) && *pfVar4 != 0.0)) {
    fVar5 = (float10)*(double *)&REFG(undefined, 0x1088100);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x10a0d8c);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    fVar6 = (float10)REFG(double, 0x1088108);
    pfVar4 = (float *)&(*(uint *)&gen_args[1]);
    fVar1 = (float)((float10)*(float *)(*(uint *)&gen_args[1]) * fVar5 + fVar6);
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
    if (!((float10)fVar1 < fVar5)) {
      pfVar4 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar4)) {
      pfVar4 = &(*(float *)(gen_frame + 0x4));
    }
    *(char *)((*(int *)&gen_args[0]) + 0x10) = (char)(int)*pfVar4;
    (*(float *)(gen_frame + 0x4)) = fVar2;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar4 = (float *)&(*(uint *)&gen_args[1]);
    fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 4) * fVar5 + fVar6)));
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
    if (!((float10)fVar1 < fVar5)) {
      pfVar4 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar4)) {
      pfVar4 = &(*(float *)(gen_frame + 0x8));
    }
    *(char *)((*(int *)&gen_args[0]) + 0x11) = (char)(int)*pfVar4;
    (*(float *)(gen_frame + 0x8)) = 0.0;
    pfVar4 = (float *)&(*(uint *)&gen_args[1]);
    fVar2 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 8) * fVar5 + fVar6)));
    (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar2);
    if (!((float10)fVar2 < fVar5)) {
      pfVar4 = &(*(float *)(gen_frame + 0x4));
    }
    if (!(0.0 < *pfVar4)) {
      pfVar4 = &(*(float *)(gen_frame + 0x8));
    }
    *(char *)((*(int *)&gen_args[0]) + 0x12) = (char)(int)*pfVar4;
    return (uint)pfVar4;
  }
  *(uint *)((*(int *)&gen_args[0]) + 0x10) = *(uint *)((*(int *)&gen_args[0]) + 0x10) | 0xffffff;
  return in_EAX;
}

/* ref: FUN_00637d90 */
uint F_00637d90(unsigned int gen_a0)
{
  GEN_ENTER(0x637d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  uint * puVar5;
  uint uVar6;
  float10 fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  
  fVar8 = ((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) * (float10)REFG(double, 0x1091858) +
                 (float10)*(float *)((int)this + 0x7c))));
  dVar4 = (double)fVar8;
  fVar7 = F_00c4d2a0((uint)(ulonglong)gen_d2bits(dVar4),
                       (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  *(float *)((int)this + 0x7c) = (float)((float10)fVar8 - (float10)(float)fVar7);
  fVar8 = *(float *)(REFG(int, 0x1371290) + 0x684);
  uVar9 = *(uint *)(REFG(int, 0x1371290) + 0x680);
  uVar10 = *(uint *)(REFG(int, 0x1371290) + 0x688);
  if (!(fVar8 < 0.0)) {
    uVar9 = uVar9 ^ REFG(uint, 0x10920d0);
    fVar8 = gen_bits2f((uint)gen_fl2bits(fVar8) ^ REFG(uint, 0x10920d0));
    uVar10 = uVar10 ^ REFG(uint, 0x10920d0);
  }
  uVar1 = *(uint *)(REFG(int, 0x1371290) + 0x560);
  uVar2 = *(uint *)(REFG(int, 0x1371290) + 0x564);
  uVar3 = *(uint *)(REFG(int, 0x1371290) + 0x568);
  puVar5 = (uint *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x74),0,0,2);
  uVar6 = 0;
  if (puVar5 != (uint *)0x0) {
    *puVar5 = uVar9;
    puVar5[1] = (uint)gen_fl2bits(fVar8);
    puVar5[4] = uVar1;
    puVar5[2] = uVar10;
    puVar5[5] = uVar2;
    puVar5[6] = uVar3;
    puVar5[3] = *(uint *)((int)this + 0x7c);
    puVar5[7] = 0;
    uVar6 = *(uint *)((int)this + 0x74);
    *(undefined4 *)(uVar6 + 0x24) = 0;
  }
  return uVar6;
}

/* ref: FUN_00637f00 */
uint F_00637f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x637f00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  ushort * puVar1;
  undefined * this;
  int iVar2;
  ushort * puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint * puVar8;
  undefined4 * puVar9;
  uint uVar10;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(byte *)(gen_frame + 0x1f)) = (byte)param_2;
  (*(uint *)(gen_frame + 0x18)) = param_3 & 0xffff;
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabe8) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabe8) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar5);
  uVar10 = (uint)(*(byte *)(gen_frame + 0x1f));
  iVar2 = *(int *)(param_1 + 8);
  (*(ushort * PTR32 *)(gen_frame + 0x10)) = (ushort *)(uVar10 * 0x3c);
  iVar6 = (uint)*((ushort *)GEN_TOP(((int)(uVar10 * 0x3c) + *(int *)(iVar2 + 0xb8)))) + ((*(uint *)(gen_frame + 0x18)) & 0xffff);
  (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x18)) & 0xffff;
  puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar2 + 0xbc) + iVar6 * 0x24)));
  uVar7 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x124) +
                   (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 0xbc) + 8 + iVar6 * 0x24))) * 4)));
  (*(uint *)(gen_frame + 0x18)) = uVar7;
  F_0062d180(REFG(void * PTR32, 0x13759f8),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),*(undefined4 *)(uVar7 + 0xa0));
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) != (undefined *)0x0) {
    uVar7 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
    if (uVar7 != 0) {
      *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xffe80000 | 0x680000;
      *(uint *)((int)this + 0x60) = uVar7;
      puVar8 = (uint *)F_004d4a30(&(*(uint *)(gen_frame + 0xc)),3,
                                    (uint)(((byte)*((undefined4 *)GEN_TOP((*(int *)((*(uint *)(gen_frame + 0x18)) + 0xa0) + 0xc))) &
                                           3) == 1),0,0,(float)(float10)0,(float)(float10)0);
      *(uint *)((int)this + 0x3c) = *puVar8 & 0x7fffffff;
      *(undefined4 *)((int)this + 0x38) = 0x7080111;
      *(undefined4 *)((int)this + 0x4c) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x108) +
            (*((ushort *)GEN_TOP(((int)(*(ushort * PTR32 *)(gen_frame + 0x10)) + *(int *)(iVar2 + 0xb8)))) + (*(uint *)(gen_frame + 0x14))) * 4)));
      uVar7 = *(uint *)(iVar2 + 0x10c + uVar10 * 4);
      (*(uint *)(gen_frame + 0x14)) = uVar7;
      (*(uint *)(gen_frame + 0x18)) = 0;
      if ((*(byte *)((int)puVar1 + 0x23) & 3) != 0) {
        puVar8 = (uint *)((int)this + 0x6c);
        (*(ushort * PTR32 *)(gen_frame + 0x10)) = puVar1 + 10;
        do {
          puVar3 = (*(ushort * PTR32 *)(gen_frame + 0x10));
          bVar4 = *(byte *)((int)puVar1 + (*(uint *)(gen_frame + 0x18)) + 0x20);
          (*(ushort * PTR32 *)(gen_frame + 0x10)) = (*(ushort * PTR32 *)(gen_frame + 0x10)) + 2;
          (*(uint *)(gen_frame + 0xc)) = (uint)bVar4;
          iVar6 = *(int *)puVar3;
          puVar8[-1] = uVar7;
          *puVar8 = *puVar8 ^ (iVar6 << 8 ^ *puVar8) & 0x7fffff00;
          *(byte *)puVar8 = bVar4;
          *puVar8 = *puVar8 & 0x7fffffff;
          uVar11 = (*(uint *)(gen_frame + 0x18)) + 1;
          puVar8 = puVar8 + 2;
          (*(uint *)(gen_frame + 0x18)) = uVar11;
        } while (uVar11 < (*(byte *)((int)puVar1 + 0x23) & 3));
      }
      *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(iVar2 + 0x118 + uVar10 * 4);
      uVar5 = *(undefined4 *)(puVar1 + 2);
      (*(uint *)(gen_frame + 0x14)) = *(uint *)(puVar1 + 8);
      (*(uint *)(gen_frame + 0xc)) = (uint)*puVar1;
      puVar9 = (undefined4 *)F_004d4760(this,0x54);
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = 5;
        puVar9[2] = 0;
        puVar9[3] = 0;
        puVar9[4] = (*(uint *)(gen_frame + 0xc));
        puVar9[1] = 5;
        puVar9[5] = (*(uint *)(gen_frame + 0x14));
        puVar9[6] = uVar5;
        bVar4 = F_004dc830(this,puVar9 + 7);
        if (bVar4 != 0) {
          F_004d4810(this,puVar9);
        }
      }
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar7 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar7;
}

/* ref: FUN_00638150 */
uint F_00638150(void)
{
  GEN_ENTER(0x638150u, 0u, 0u, 0u, 0u);
  int iVar1;
  int * in_ecx;
  uint uVar2;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  in_ecx = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x130,0x10)));
  if (in_ecx != (int *)0x0) {
    in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x108b284));
    in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1096cd4));
    in_ecx[0x2b] = GEN_FLT_TO(in_ecx[0x2b], REFG(float, 0x1094884));
    in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1094724));
    iVar1 = REFG(float, 0x1094880);
    in_ecx[1] = 1;
    *in_ecx = (int)(*(undefined * PTR32 (*)[6])REFP(0x10abc7c));
    in_ecx[0x28] = 0x1e;
    in_ecx[0x2d] = iVar1;
    *(undefined1 *)(in_ecx + 0x2e) = 0;
    in_ecx[0x48] = 0;
    uVar2 = F_004dcd60(0x1c0,1,0);
    in_ecx[0x48] = uVar2;
    if (uVar2 != 0) {
      F_00621fc0(in_ecx,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
      return (uint)in_ecx;
    }
    ((code *)*(gen_code32 *)(*in_ecx + 0xc))(in_ecx);
  }
  return 0;
}

/* ref: FUN_00638290 */
uint F_00638290(unsigned int gen_a0)
{
  GEN_ENTER(0x638290u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  undefined * this;
  int * this_00;
  
  this = (undefined *)F_00406b90(0xb0,0,0);
  if (this != (undefined *)0x0) {
    this_00 = (int *)F_0062b490(this);
    if (this_00 != (int *)0x0) {
      bVar1 = F_0062b5c0(this_00,param_1);
      if (bVar1 != 0) {
        return (uint)this_00;
      }
      ((code *)*(gen_code32 *)(*this_00 + 0xc))(this_00);
    }
  }
  return 0;
}

/* ref: FUN_006382e0 */
uint F_006382e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6382e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  int * this;
  
  this = (int *)F_00406b90(0x10,0,0);
  if (this != (int *)0x0) {
    this[1] = 1;
    *this = (int)(*(undefined * PTR32 (*)[4])REFP(0x10ab9e4));
    this[2] = 0;
    this[3] = -1;
    bVar1 = F_0062bde0(this,param_1,param_2,param_3);
    if (bVar1 != 0) {
      return (uint)this;
    }
    ((code *)*(gen_code32 *)(*this + 0xc))(this);
  }
  return 0;
}

/* ref: FUN_00638350 */
byte F_00638350(unsigned int gen_a0)
{
  GEN_ENTER(0x638350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 in_ecx;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  byte bVar4;
  bool bVar5;
  
  in_ecx = *(undefined4 *)(REFG(int, 0x137104c) + 0x10);
  uVar2 = F_00414500(in_ecx,0x2b);
  *(bool *)((int)this + 0x13) = *(int *)(uVar2 + 0x14) != 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  uVar2 = F_00414500(in_ecx,0x2c);
  *(bool *)((int)this + 0x14) = *(int *)(uVar2 + 0x14) != 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  uVar2 = F_00414500(in_ecx,0x2d);
  ((char *)(gen_frame + 0x8))[0] = *(char *)(uVar2 + 0x14);
  (*(char *)(gen_frame + 0x7)) = '\x01';
  ((char *)(gen_frame + 0x0))[0] = '\0';
  if (*(char *)(uVar2 + 0x14) == '\0') {
    pcVar3 = ((char *)(gen_frame + 0x0));
  }
  else {
    pcVar3 = &(*(char *)(gen_frame + 0x7));
  }
  if (*(char *)((int)this + 0x22) != *pcVar3) {
    *(char *)((int)this + 0x22) = *pcVar3;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
  }
  uVar2 = F_00414500(in_ecx,0x2f);
  *(bool *)((int)this + 0x15) = *(int *)(uVar2 + 0x14) != 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x80;
  uVar2 = F_00414500(in_ecx,0x2e);
  *(bool *)((int)this + 0x16) = *(int *)(uVar2 + 0x14) != 0;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x100;
  uVar2 = F_00414500(in_ecx,0x1d);
  *(undefined1 *)((int)this + 0x20) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 4;
  uVar2 = F_00414500(in_ecx,0x1e);
  *(undefined1 *)((int)this + 0x21) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 4;
  uVar2 = F_00414500(in_ecx,0x26);
  ((char *)(gen_frame + 0x0))[0] = *(char *)(uVar2 + 0x14);
  (*(char *)(gen_frame + 0x7)) = '\x01';
  ((char *)(gen_frame + 0x8))[0] = '\0';
  if (*(char *)(uVar2 + 0x14) == '\0') {
    pcVar3 = ((char *)(gen_frame + 0x8));
  }
  else {
    pcVar3 = &(*(char *)(gen_frame + 0x7));
  }
  if (*(char *)((int)this + 0x23) != *pcVar3) {
    *(char *)((int)this + 0x23) = *pcVar3;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
  }
  uVar2 = F_00414500(in_ecx,0x1f);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x17) != cVar1) {
    *(char *)((int)this + 0x17) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x20);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x18) != cVar1) {
    *(char *)((int)this + 0x18) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x20);
  bVar5 = 1 < *(uint *)(uVar2 + 0x14);
  if ((bool)*(char *)((int)this + 0x19) != bVar5) {
    *(bool *)((int)this + 0x19) = bVar5;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x21);
  bVar5 = *(int *)(uVar2 + 0x14) != 0;
  if ((bool)*(char *)((int)this + 0x1a) != bVar5) {
    *(bool *)((int)this + 0x1a) = bVar5;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x22);
  bVar5 = *(int *)(uVar2 + 0x14) != 0;
  if ((bool)*(char *)((int)this + 0x1b) != bVar5) {
    *(bool *)((int)this + 0x1b) = bVar5;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x23);
  bVar5 = *(int *)(uVar2 + 0x14) != 0;
  if ((bool)*(char *)((int)this + 0x1c) != bVar5) {
    *(bool *)((int)this + 0x1c) = bVar5;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x16);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x1e) != cVar1) {
    *(char *)((int)this + 0x1e) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 8;
  }
  uVar2 = F_00414500(in_ecx,0x24);
  bVar5 = *(int *)(uVar2 + 0x14) != 0;
  if ((bool)*(char *)((int)this + 0x1d) != bVar5) {
    *(bool *)((int)this + 0x1d) = bVar5;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 2;
  }
  uVar2 = F_00414500(in_ecx,0x3d);
  *(undefined1 *)((int)this + 0x1f) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x400;
  uVar2 = F_00414500(in_ecx,0x1b);
  F_0049dca0(this,*(undefined4 *)(uVar2 + 0x14));
  uVar2 = F_00414500(in_ecx,0x25);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x10;
  uVar2 = F_00414500(in_ecx,0x35);
  bVar4 = *(int *)(uVar2 + 0x14) != 0 | *(byte *)((int)this + 0x25) & 0xfe;
  if (*(byte *)((int)this + 0x25) != bVar4) {
    *(byte *)((int)this + 0x25) = bVar4;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x36);
  bVar4 = (*(int *)(uVar2 + 0x14) != 0) * '\x02' | *(byte *)((int)this + 0x25) & 0xfd;
  if (*(byte *)((int)this + 0x25) != bVar4) {
    *(byte *)((int)this + 0x25) = bVar4;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x38);
  bVar4 = (*(int *)(uVar2 + 0x14) != 0) * '\x04' | *(byte *)((int)this + 0x25) & 0xfb;
  if (*(byte *)((int)this + 0x25) != bVar4) {
    *(byte *)((int)this + 0x25) = bVar4;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x37);
  bVar4 = (*(int *)(uVar2 + 0x14) != 0) * '\b' | *(byte *)((int)this + 0x25) & 0xf7;
  if (*(byte *)((int)this + 0x25) != bVar4) {
    *(byte *)((int)this + 0x25) = bVar4;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x28);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x26) != cVar1) {
    *(char *)((int)this + 0x26) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x29);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x27) != cVar1) {
    *(char *)((int)this + 0x27) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0x2a);
  cVar1 = (char)*(undefined4 *)(uVar2 + 0x14);
  if (*(char *)((int)this + 0x28) != cVar1) {
    *(char *)((int)this + 0x28) = cVar1;
    *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x20;
  }
  uVar2 = F_00414500(in_ecx,0xab);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x40;
  uVar2 = F_00414500(in_ecx,0xac);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x40;
  uVar2 = F_00414500(in_ecx,0xad);
  *(undefined1 *)((int)this + 0x2b) = *(undefined1 *)(uVar2 + 0x14);
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x40;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) & 0xfffffff5;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 0x220;
  return 1;
}

/* ref: FUN_006386d0 */
unsigned int F_006386d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6386d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = 0;
    uVar3 = 1;
    do {
      if (((*(uint *)((int)this + 4) >> ((byte)uVar2 & 0x1f) & 1) != 0) &&
         (uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x1320460))[uVar2])))(this), (char)uVar1 != '\0')) {
        *(uint *)((int)this + 4) = ~uVar3 & *(uint *)((int)this + 4) | 0 << ((byte)uVar2 & 0x1f);
      }
      uVar2 = uVar2 + 1;
      uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
    } while (uVar2 < 0x20);
  }
  return 0;
}

/* ref: FUN_00638720 */
byte F_00638720(unsigned int gen_a0)
{
  GEN_ENTER(0x638720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(uint *)(REFG(int, 0x137129c) + 0xf0) =
       (uint)(*(char *)((int)this + 0x15) != '\0') * 2 | *(uint *)(REFG(int, 0x137129c) + 0xf0) & 0xfffffffd
  ;
  return 1;
}

/* ref: FUN_00638750 */
byte F_00638750(unsigned int gen_a0)
{
  GEN_ENTER(0x638750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  ((float *)(gen_frame + 0x0))[2] = *(float *)(in_ecx + 8);
  ((float *)(gen_frame + 0x0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[1], REFG(float, 0x10ac108));
  ((float *)(gen_frame + 0x0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x0))[0], REFG(float, 0x10ac050));
  pfVar1 = ((float *)(gen_frame + 0x0)) + 2;
  if (!(*(float *)(in_ecx + 8) < REFG(float, 0x10ac108))) {
    pfVar1 = ((float *)(gen_frame + 0x0)) + 1;
  }
  if (!(*(double *)&REFG(undefined, 0x1090b18) < (double)*pfVar1)) {
    pfVar1 = ((float *)(gen_frame + 0x0));
  }
  *(float *)(REFG(int, 0x1370b90) + 0x9c) = *pfVar1;
  return 1;
}

/* ref: FUN_006387b0 */
uint F_006387b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6387b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1371290) + 4);
  iVar2 = 0;
  (*(float *)(gen_frame + 0x18)) = *(float *)((int)this + 0xa0);
  if (this_00 != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0xc)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x10)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x14)) = param_1[2];
    uVar1 = F_006a4ec0(this_00,&(*(undefined4 *)(gen_frame + 0xc)),1,0);
    if (uVar1 != 0) {
      if (*(byte *)((int)this + 0xa4) < *(byte *)(uVar1 + 0x95)) {
        (*(float *)(gen_frame + 0x18)) = *(float *)(uVar1 + 0x88);
      }
      iVar2 = *(int *)(uVar1 + 0x80);
      *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(uVar1 + 0x88);
      *(undefined1 *)((int)this + 0xa4) = *(undefined1 *)(uVar1 + 0x95);
      if (iVar2 != 0) goto LAB_00638865;
    }
    iVar2 = *(int *)((int)this_00 + 0x100);
    *(undefined4 *)((int)this + 0xa0) = REFG(float, 0x1088068);
    *(undefined1 *)((int)this + 0xa4) = 0;
  }
LAB_00638865: ;
  uVar1 = F_00625e20(GEN_TOF(this),iVar2,(*(float *)(gen_frame + 0x18)));
  return uVar1;
}

/* ref: FUN_00638880 */
byte F_00638880(unsigned int gen_a0)
{
  GEN_ENTER(0x638880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  char * pcVar2;
  double dVar3;
  byte bVar4;
  undefined * pvVar5;
  char * pcVar6;
  uint uVar7;
  undefined * PTR32 * ppvVar8;
  undefined * PTR32 * ppvVar9;
  uint uVar10;
  uint * puVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  bVar4 = F_00625d30((undefined *)((int)this + 4));
  if (bVar4 != 0) {
    bVar4 = F_00625d30((undefined *)((int)this + 0xac));
    if (bVar4 != 0) {
      uVar10 = 0;
      ((char * PTR32 *)(gen_frame + 0x18))[0] = "GetAmbientLight_None";
      ((char * PTR32 *)(gen_frame + 0x18))[1] = "GetAmbientLight_Color";
      ((char * PTR32 *)(gen_frame + 0x18))[2] = "GetAmbientLight_SH";
      puVar11 = (uint *)((int)this + 0x184);
      do {
        pcVar2 = ((char * PTR32 *)(gen_frame + 0x18))[(int)(uVar10)];
        pvVar5 = (undefined *)F_00b52710("GetAmbientLight",0xf,0);
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar5;
        pcVar6 = pcVar2;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = F_00b52710(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1),0);
        puVar11[-1] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x24));
        *puVar11 = uVar7;
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 3;
      } while (uVar10 < 3);
      uVar10 = 0;
      ((char * PTR32 *)(gen_frame + 0x18))[1] = "GetReflectColor_None";
      ((char * PTR32 *)(gen_frame + 0x18))[2] = "GetReflectColor_Texture";
      puVar11 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1a8);
      do {
        pcVar2 = ((char * PTR32 *)(gen_frame + 0x18))[(int)(uVar10 + 1)];
        pvVar5 = (undefined *)F_00b52710("GetReflectColor",0xf,0);
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar5;
        pcVar6 = pcVar2;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = F_00b52710(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1),0);
        puVar11[-1] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x24));
        *puVar11 = uVar7;
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 3;
      } while (uVar10 < 2);
      uVar10 = 0;
      ((char * PTR32 *)(gen_frame + 0x18))[1] = "GetAmbientOcclusion_None";
      ((char * PTR32 *)(gen_frame + 0x18))[2] = "GetAmbientOcclusion_Apply";
      puVar11 = (uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c0);
      do {
        pcVar2 = ((char * PTR32 *)(gen_frame + 0x18))[(int)(uVar10 + 1)];
        pvVar5 = (undefined *)F_00b52710("GetAmbientOcclusion",0x13,0);
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar5;
        pcVar6 = pcVar2;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        uVar7 = F_00b52710(pcVar2,(int)pcVar6 - (int)(pcVar2 + 1),0);
        puVar11[-1] = (uint)(*(undefined * PTR32 *)(gen_frame + 0x24));
        *puVar11 = uVar7;
        uVar10 = uVar10 + 1;
        puVar11 = puVar11 + 3;
      } while (uVar10 < 2);
      uVar10 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"g_AmbientParam");
      pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x28));
      *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1d4) = uVar10;
      uVar10 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"g_AmbientMatrix");
      *(uint *)((int)pvVar5 + 0x1d8) = uVar10;
      uVar10 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"g_AmbientExtra");
      *(uint *)((int)pvVar5 + 0x1dc) = uVar10;
      uVar10 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),"g_SamplerReflection");
      *(uint *)((int)pvVar5 + 0x1e0) = uVar10;
      uVar10 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),"g_SamplerOcclusion");
      *(uint *)((int)pvVar5 + 0x1e4) = uVar10;
      uVar10 = F_004dcd60(0x30,2,9);
      dVar3 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
      *(uint *)((int)pvVar5 + 0x1d0) = uVar10;
      *(undefined4 *)((int)pvVar5 + 0x1e8) = 0xf836a;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)(int)dVar3;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x1ff;
      ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x28));
      if (0x1fe < (int)dVar3) {
        ppvVar8 = &(*(undefined * PTR32 *)(gen_frame + 0x24));
      }
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = *ppvVar8;
      (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0xfffffe00;
      ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x24));
      if (-0x201 < (int)*ppvVar8) {
        ppvVar9 = &(*(undefined * PTR32 *)(gen_frame + 0x28));
      }
      *(uint *)((int)pvVar5 + 0x1ec) = ((uint)*ppvVar9 & 0x3ff) << 10 | 0x26a;
      uVar10 = F_004dcb00(1,1,0x1130,4,9);
      *(uint *)((int)pvVar5 + 0x1f0) = uVar10;
      uVar10 = 0;
      do {
        uVar7 = F_004d5bb0(*(undefined * PTR32 *)((int)pvVar5 + 0x1f0),0,uVar10,((byte *)(gen_frame + 0xc)),2);
        if (uVar7 != 0) {
          *(undefined1 *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = 0;
          F_004d5c30(*(undefined * PTR32 *)((int)pvVar5 + 0x1f0),0,uVar10);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 6);
      *(undefined4 *)((int)pvVar5 + 0x154) = 0;
      *(undefined4 *)((int)pvVar5 + 0x158) = 0;
      *(undefined4 *)((int)pvVar5 + 0x15c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x160) = 0;
      *(undefined4 *)((int)pvVar5 + 0x164) = 0;
      *(undefined4 *)((int)pvVar5 + 0x168) = 0;
      *(undefined4 *)((int)pvVar5 + 0x16c) = 0;
      *(undefined4 *)((int)pvVar5 + 0x170) = 0;
      *(undefined4 *)((int)pvVar5 + 0x174) = 0;
      *(undefined4 *)((int)pvVar5 + 0x178) = 0;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00638b60 */
byte F_00638b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x638b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int * piVar1;
  byte bVar2;
  
  bVar2 = F_006278c0(this,param_1,param_3,param_4);
  if (bVar2 == 0) {
    return 0;
  }
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x1c) = param_2;
  return 1;
}

/* ref: FUN_00638bb0 */
byte F_00638bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x638bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  int iVar2;
  uint * puVar3;
  uint * puVar4;
  uint uVar5;
  uint * puVar6;
  uint uVar7;
  
  if ((*(int *)((int)this + 0x18) == 0) || (*(int *)((int)this + 0x20) == 0)) {
    return 0;
  }
  iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + 0xa8)));
  uVar5 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar2 + 4) + 0x16 + iVar2)));
  if (uVar5 == 0) {
    return 0;
  }
  puVar4 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                             (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),
                              -(uint)(0xffffffef < uVar5 * 0x90) | uVar5 * 0x90 + 0x10,0x10)));
  if (puVar4 != (uint *)0x0) {
    puVar1 = puVar4 + 4;
    *puVar4 = uVar5;
    puVar4 = puVar1;
    puVar6 = puVar1;
    uVar7 = uVar5;
    while (uVar7 = uVar7 - 1, -1 < (int)uVar7) {
      puVar6[10] = 0;
      puVar6[0xb] = 0;
      puVar3 = puVar6;
      if (REFG(uint * PTR32, 0x1487c78) != (uint *)0x0) {
        puVar6[10] = (uint)REFG(uint * PTR32, 0x1487c78);
        REFG(uint * PTR32, 0x1487c78)[0xb] = (uint)puVar6;
        puVar3 = *(uint * PTR32 *)&REFG(undefined, 0x1487c74);
      }
      *(uint * PTR32 *)&REFG(undefined, 0x1487c74) = puVar3;
      REFG(uint * PTR32, 0x1487c78) = puVar6;
      F_004a0020(puVar4);
      *puVar4 = (uint)(*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
      puVar6[0x20] = 0;
      F_00c48350(puVar6 + 0xc,0,0x50);
      puVar4 = puVar4 + 0x24;
      puVar6 = puVar6 + 0x24;
    }
    if (puVar1 != (uint *)0x0) {
      uVar7 = 0;
      puVar4 = puVar1;
      if (uVar5 != 0) {
        do {
          F_0062bec0(puVar4,*(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x18),
                       uVar7,param_1);
          uVar7 = uVar7 + 1;
          puVar4 = puVar4 + 0x24;
        } while (uVar7 < uVar5);
      }
      *(uint * PTR32 *)((int)this + 0x2c) = puVar1;
      *(uint *)((int)this + 0x30) = uVar5;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00638cf0 */
uint F_00638cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x638cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = *(int *)((int)this + 0x30);
  if (*(int *)((int)this + 0x2c) == 0) {
    *(undefined4 *)((int)this + 0x2c) = 0;
    *(undefined4 *)((int)this + 0x30) = 0;
    return 0;
  }
  if (iVar2 != 0) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x80)));
    do {
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
        *piVar3 = 0;
      }
      piVar3 = piVar3 + 0x24;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  F_004de750(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x10),((code *)REFP(0x6279a0)),*(undefined4 *)((int)this + 0x2c),
               *(undefined4 *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  return 0;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::vf4 */
uint F_00638d60(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x638d60u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xb20];
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined4 * puVar5;
  float * pfVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined * pCVar10;
  undefined4 * puVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  (*(uint *)(gen_frame + 0xb0c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb10);
  iVar9 = (char)in_ecx[0x1c0] * 0x358 + REFG(int, 0x137127c);
  ((float *)(gen_frame + 0x2f0))[0] = 0.0;
  ((float *)(gen_frame + 0x2f0))[1] = 1.4013e-45;
  ((float *)(gen_frame + 0x2f0))[2] = 2.8026e-45;
  ((float *)(gen_frame + 0x2f0))[3] = 4.2039e-45;
  uVar8 = (int)gen_fl2bits(((float *)(gen_frame + 0x2f0))[(int)(*(short *)(in_ecx + 0x1c6))]) * 0x34 +
          (char)in_ecx[0x1c0] * 0x358 + 0x1c + REFG(int, 0x137127c);
  (*(undefined * PTR32 *)(gen_frame + 0x64)) = in_ecx;
  (*(uint *)(gen_frame + 0x50)) = uVar8;
  if ((in_ecx[0x1c4] == (undefined1)0x0) ||
     (*(int *)(REFG(int, 0x1371280) + 0x24) < (int)*(short *)(in_ecx + 0x1c6))) goto LAB_006392c1;
  *(uint *)(uVar8 + 4) = *(uint *)(uVar8 + 4) | 1;
  iVar9 = *(int *)(iVar9 + 0x2a4);
  fVar1 = *((float *)GEN_TOP((REFG(int, 0x1371280) + 0x38 + *(short *)(in_ecx + 0x1c6) * 4)));
  (*(float *)(gen_frame + 0x60)) = fVar1;
  (*(int *)(gen_frame + 0x54)) = iVar9;
  fVar2 = *((float *)GEN_TOP((REFG(int, 0x1371280) + 0x3c + *(short *)(in_ecx + 0x1c6) * 4)));
  (*(float *)(gen_frame + 0x5c)) = fVar2;
  (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
  F_004f0c10(((float *)(gen_frame + 0x130)),in_xmm3,in_xmm5,in_xmm6,*(float *)(iVar9 + 0xa4),*(float *)(iVar9 + 0xa8),
               fVar1,fVar2);
  (*(float * PTR32 *)(gen_frame + 0x58)) = (float *)(iVar9 + 0x10U);
  puVar5 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0xf0)),iVar9 + 0x10U,(uint)((float *)(gen_frame + 0x130)));
  puVar11 = ((undefined4 *)(gen_frame + 0x70));
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  fVar13 = F_004f0cc0(((undefined4 *)(gen_frame + 0x70)));
  fVar1 = (float)fVar13;
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  fVar2 = (float)((float10)1 / (float10)fVar1);
  (*(float *)(gen_frame + 0x6c)) = fVar2;
  dVar4 = (double)fVar2;
  if ((!(REFG(double, 0x10909a8) <= dVar4)) || (!(dVar4 <= REFG(double, 0x10909a0)))) {
    dVar4 = (double)(float10)1;
    F_00c472af(((CHAR *)(gen_frame + 0x308)),0x800,
               "==== pCamera ====\n0x%08X\n==== FovY ====\n%10.6f\n==== Aspect ====\n%10.6f\n==== NearZ ====\n%10.6f\n==== FarZ ====\n%10.6f\n==== Determinant ====\n%10.6f\n==== ViewMatrix ====\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n==== ProjMatrix ====\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n%10.6f,%10.6f,%10.6f,%10.6f\n"
               ,(*(int *)(gen_frame + 0x54)),(int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0xa4)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0xa4)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0xa8)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0xa8)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x60))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x60))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x5c))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x5c))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)fVar1),
               (int)((ulonglong)gen_d2bits((double)fVar1) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(*(float * PTR32 *)(gen_frame + 0x58))),
               (int)((ulonglong)gen_d2bits((double)*(*(float * PTR32 *)(gen_frame + 0x58))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x14)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x14)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x18)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x18)) >> 0x20),0,0,
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x20)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x20)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x24)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x24)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x28)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x28)) >> 0x20),0,0,
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x30)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x30)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x34)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x34)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x38)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x38)) >> 0x20),0,0,
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x40)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x40)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x44)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x44)) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x48)),
               (int)((ulonglong)gen_d2bits((double)*(float *)((*(int *)(gen_frame + 0x54)) + 0x48)) >> 0x20),
               (int)(ulonglong)gen_d2bits(dVar4),(int)((ulonglong)gen_d2bits(dVar4) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[0]),
               (int)((ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[0]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[1]),
               (int)((ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[1]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[2]),
               (int)((ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[2]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[3]),
               (int)((ulonglong)gen_d2bits((double)((float *)(gen_frame + 0x130))[3]) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x140))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x140))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x144))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x144))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x148))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x148))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x14c))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x14c))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x150))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x150))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x154))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x154))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x158))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x158))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x15c))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x15c))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x160))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x160))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x164))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x164))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x168))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x168))) >> 0x20),
               (int)(ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x16c))),
               (int)((ulonglong)gen_d2bits((double)(*(float *)(gen_frame + 0x16c))) >> 0x20));
    gen_imp_MessageBoxA((HWND)0x0,((CHAR *)(gen_frame + 0x308)),&REFG(undefined, 0x10a5f54),0);
  }
  puVar5 = (undefined4 *)F_004f4970(((undefined1 *)(gen_frame + 0xf0)),((undefined4 *)(gen_frame + 0x70)));
  puVar11 = ((undefined4 *)(gen_frame + 0xb0));
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar11 = puVar11 + 1;
  }
  ((float *)(gen_frame + 0x2f0))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x2f0))[0], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x2f0))[1] = GEN_FLT_TO(((float *)(gen_frame + 0x2f0))[1], REFG(float, 0x1087f04));
  ((float *)(gen_frame + 0x2f0))[2] = GEN_FLT_TO(((float *)(gen_frame + 0x2f0))[2], REFG(float, 0x1087f04));
  pfVar6 = (float *)F_004ee9b0(((undefined1 *)(gen_frame + 0x0)),((float *)(gen_frame + 0x2f0)),((undefined4 *)(gen_frame + 0xb0)));
  (*(float *)(gen_frame + 0x40)) = *pfVar6;
  (*(float *)(gen_frame + 0x44)) = pfVar6[1];
  (*(float *)(gen_frame + 0x48)) = pfVar6[2];
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1090708);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  pfVar6 = (float *)F_004ee9b0(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0xb0)));
  (*(float *)(gen_frame + 0x30)) = *pfVar6;
  (*(float *)(gen_frame + 0x34)) = pfVar6[1];
  (*(float *)(gen_frame + 0x38)) = pfVar6[2];
  fVar1 = (float)((float10)*pfVar6 - (float10)(*(float *)(gen_frame + 0x40)));
  ((float *)(gen_frame + 0x2f0))[0] = fVar1;
  fVar2 = (float)((float10)pfVar6[1] - (float10)(*(float *)(gen_frame + 0x44)));
  ((float *)(gen_frame + 0x2f0))[1] = fVar2;
  fVar3 = (float)((float10)pfVar6[2] - (float10)(*(float *)(gen_frame + 0x48)));
  ((float *)(gen_frame + 0x2f0))[2] = fVar3;
  fVar13 = (float10)fVar2;
  fVar14 = (float10)fVar1;
  fVar15 = (float10)fVar3;
  fVar1 = ((float)GEN_TOF((fVar15 * fVar15 + (fVar14 * fVar14 + fVar13 * fVar13))));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  iVar9 = *(int *)(REFG(int, 0x1371280) + 0x20);
  if (iVar9 == 0) {
    fVar13 = (float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10ac170);
LAB_00639259: ;
    (*(float *)(gen_frame + 0x68)) = (float)fVar13;
    if ((float)fVar13 <= REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
    }
  }
  else {
    if (iVar9 == 1) {
      fVar13 = (float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10ac178);
      goto LAB_00639259;
    }
    if (iVar9 == 2) {
      fVar13 = (float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x10ac180);
      goto LAB_00639259;
    }
  }
  uVar7 = F_00629eb0(in_xmm3,in_xmm5,in_xmm6,((undefined1 *)(gen_frame + 0x170)),0x18,(*(int *)(gen_frame + 0x54)),(*(float *)(gen_frame + 0x60)),(*(float *)(gen_frame + 0x5c)));
  (*(float *)(gen_frame + 0x6c)) = gen_bits2f(uVar7);
  uVar8 = (*(uint *)(gen_frame + 0x50));
  if (uVar7 != 0) {
    pfVar6 = (float *)F_004f45d0(((undefined1 *)(gen_frame + 0xf0)),(*(float * PTR32 *)(gen_frame + 0x58)));
    pCVar10 = (*(undefined * PTR32 *)(gen_frame + 0x64));
    pfVar12 = ((float *)(gen_frame + 0x130));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar12 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar12 = pfVar12 + 1;
    }
    iVar9 = *(int *)(REFG(int, 0x1371280) + 0x1c);
    if (iVar9 == 0) {
      F_00622640((*(undefined * PTR32 *)(gen_frame + 0x64)),(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10,(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x50,&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0x150)),
                   (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1b0,((undefined1 *)(gen_frame + 0x170)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x6c))),(*(float *)(gen_frame + 0x68)));
      pCVar10 = (*(undefined * PTR32 *)(gen_frame + 0x64));
    }
    else if (iVar9 == 1) {
      F_00629360((*(undefined * PTR32 *)(gen_frame + 0x64)),(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10,(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x50,&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0x150)),
                   (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1b0,((undefined1 *)(gen_frame + 0x170)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x6c))),(*(float *)(gen_frame + 0x68)),
                   (*(float *)(gen_frame + 0x60)));
      pCVar10 = (*(undefined * PTR32 *)(gen_frame + 0x64));
    }
    else if (iVar9 == 2) {
      if ((int)*(short *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1c6) == *(int *)(REFG(int, 0x1371280) + 0x24)) {
        F_00629360((*(undefined * PTR32 *)(gen_frame + 0x64)),(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10,(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x50,&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0x150)),
                     (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1b0,((undefined1 *)(gen_frame + 0x170)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x6c))),(*(float *)(gen_frame + 0x68)),
                     (*(float *)(gen_frame + 0x60)));
      }
      else {
        F_00622640((*(undefined * PTR32 *)(gen_frame + 0x64)),(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x10,(*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x50,&(*(float *)(gen_frame + 0x160)),&(*(float *)(gen_frame + 0x150)),
                     (*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x1b0,((undefined1 *)(gen_frame + 0x170)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x6c))),(*(float *)(gen_frame + 0x68)));
      }
    }
    pfVar6 = (float *)F_004f45d0(((undefined1 *)(gen_frame + 0xf0)),pCVar10 + 0x10);
    pfVar12 = ((float *)(gen_frame + 0x130));
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar12 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar12 = pfVar12 + 1;
    }
    *(float *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x90) = (*(float *)(gen_frame + 0x160));
    *(float *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x94) = (*(float *)(gen_frame + 0x164));
    *(float *)((*(undefined * PTR32 *)(gen_frame + 0x64)) + 0x98) = (*(float *)(gen_frame + 0x168));
    uVar8 = F_00628180((*(undefined * PTR32 *)(gen_frame + 0x64)));
    F_00c47745((*(uint *)(gen_frame + 0xb0c)) ^ (uint)(uint)(gen_frame + 0xb10));
    return uVar8;
  }
LAB_006392c1: ;
  *(uint *)(uVar8 + 4) = *(uint *)(uVar8 + 4) & 0xfffffffe;
  (*(uint *)(gen_frame + 0x50)) = uVar8;
  F_00c47745((*(uint *)(gen_frame + 0xb0c)) ^ (uint)(uint)(gen_frame + 0xb10));
  return uVar8;
}

/* ref: FUN_006394d0 */
byte F_006394d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6394d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  uVar3 = F_004dcd60(0x1c0,1,0);
  *(uint *)((int)this + 0x120) = uVar3;
  if (uVar3 != 0) {
    F_00621fc0(this,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
    *(char *)((int)this + 0x1c0) = (char)param_1;
    iVar1 = (char)param_1 * 0x358 + 600 + REFG(int, 0x137127c);
    ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    piVar2 = *(int * PTR32 *)(iVar1 + 0x18);
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    *(undefined * PTR32 *)(iVar1 + 0x18) = this;
    *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffe;
    *(undefined1 *)((int)this + 0x1c4) = 0;
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Render::Camera_SpecialShadow::vf4 */
uint F_00639560(unsigned int gen_a0)
{
  GEN_ENTER(0x639560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  uint * puVar1;
  undefined * pCVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined * this_00;
  uint uVar9;
  undefined4 * puVar10;
  undefined * PTR32 * ppCVar11;
  float * pfVar12;
  int iVar13;
  undefined4 * puVar14;
  float10 fVar15;
  float10 fVar16;
  
  iVar13 = REFG(int, 0x137127c);
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  uVar9 = (char)this[0x1c0] * 0x358;
  puVar1 = (uint *)(uVar9 + 0x25c + REFG(int, 0x137127c));
  *puVar1 = *puVar1 & 0xfffffffe;
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = this;
  if (this[0x1c4] == (undefined1)0x0) goto LAB_006398a6;
  puVar10 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0xa0)),*(int *)(uVar9 + 0x2a4 + iVar13) + 0x10);
  puVar14 = ((undefined4 *)(gen_frame + 0x10));
  for (iVar13 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x9c)), iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar14 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar14 = puVar14 + 1;
  }
  F_0061e870(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),(undefined *)((*(undefined * PTR32 *)(gen_frame + 0x9c)) + 0x1b0));
  (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1375ac4);
  (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1375ac8);
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  if ((REFG(int, 0x14c4e78) == 0) || (uVar9 = *(uint *)(REFG(int, 0x14c4e78) + 0x18), uVar9 == 0)) {
    uVar9 = F_00782c60();
    if ((uVar9 != 0) || (uVar9 = REFG(undefined4, 0x1379694), REFG(undefined4, 0x1379694) != 0)) goto LAB_00639655;
  }
  else {
LAB_00639655: ;
    iVar13 = *(int *)(uVar9 + 0xec);
    if (iVar13 != 0) {
      (*(float *)(gen_frame + 0x80)) = *(float *)(iVar13 + 0x120);
      (*(float *)(gen_frame + 0x84)) = *(float *)(iVar13 + 0x124);
      (*(float *)(gen_frame + 0x88)) = *(float *)(iVar13 + 0x128);
      (*(undefined * PTR32 *)(gen_frame + 0x8c)) = *(undefined * PTR32 *)(iVar13 + 300);
    }
    if ((*(int *)(uVar9 + 0x2e00) != 0) &&
       (iVar13 = *((int *)GEN_TOP((*(int *)(uVar9 + 0x2e00) + 0xec))), iVar13 != 0)) {
      F_005ff0f0(&(*(float *)(gen_frame + 0x80)),iVar13 + 0x120);
    }
    iVar13 = uVar9 + 0x17e0;
    (*(undefined * PTR32 *)(gen_frame + 0x9c)) = (undefined *)0x3;
    do {
      if ((iVar13 != 0x120) && (*(char *)(iVar13 + -0xbb) == '\x03')) {
        F_005ff0f0(&(*(float *)(gen_frame + 0x80)),iVar13);
      }
      iVar13 = iVar13 + 0x7a0;
      pCVar2 = (*(undefined * PTR32 *)(gen_frame + 0x9c)) + -1;
      (*(undefined * PTR32 *)(gen_frame + 0x9c)) = pCVar2;
    } while (pCVar2 != (undefined *)0x0);
  }
  (*(undefined * PTR32 *)(gen_frame + 0x5c)) = (*(undefined * PTR32 *)(gen_frame + 0x8c));
  (*(undefined * PTR32 *)(gen_frame + 0x9c)) = (undefined *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  ppCVar11 = &(*(undefined * PTR32 *)(gen_frame + 0x9c));
  if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8c))))) < (float10)1)) {
    ppCVar11 = &(*(undefined * PTR32 *)(gen_frame + 0x5c));
  }
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = *ppCVar11;
  fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppCVar11)));
  (*(float *)(gen_frame + 0x60)) = ((float)GEN_TOF((fVar15 * (float10)*(float *)(this_00 + 0x1b0))));
  (*(float *)(gen_frame + 0x64)) = ((float)GEN_TOF(((float10)*(float *)(this_00 + 0x1b4) * fVar15)));
  (*(float *)(gen_frame + 0x68)) = ((float)GEN_TOF((fVar15 * (float10)*(float *)(this_00 + 0x1b8))));
  fVar16 = (float10)*(double *)&REFG(undefined, 0x1092098);
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar15 * (float10)*(float *)(this_00 + 0x1b0)))) * fVar16)));
  (*(float *)(gen_frame + 0x70)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(this_00 + 0x1b4) * fVar15))) * fVar16)));
  (*(float *)(gen_frame + 0x74)) = fVar4;
  fVar5 = ((float)GEN_TOF((fVar16 * (float10)((float)GEN_TOF((fVar15 * (float10)*(float *)(this_00 + 0x1b8)))))));
  (*(float *)(gen_frame + 0x78)) = fVar5;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x80)) - (float10)fVar3);
  (*(float *)(gen_frame + 0x60)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x84)) - (float10)fVar4);
  (*(float *)(gen_frame + 0x64)) = fVar4;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x88)) - (float10)fVar5);
  (*(float *)(gen_frame + 0x68)) = fVar5;
  (*(float *)(gen_frame + 0x70)) = fVar3;
  (*(float *)(gen_frame + 0x74)) = fVar4;
  (*(float *)(gen_frame + 0x78)) = fVar5;
  F_004f4430((undefined *)(this_00 + 0x10),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0x0)));
  pfVar12 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x80)),(undefined *)(this_00 + 0x10));
  fVar3 = *pfVar12;
  fVar4 = pfVar12[1];
  fVar5 = pfVar12[2];
  (*(float *)(gen_frame + 0x70)) = fVar3;
  (*(float *)(gen_frame + 0x74)) = fVar4;
  fVar15 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8c)))));
  (*(float *)(gen_frame + 0x78)) = fVar5;
  (*(float *)(gen_frame + 0x80)) = fVar3;
  (*(float *)(gen_frame + 0x84)) = fVar4;
  (*(float *)(gen_frame + 0x88)) = fVar5;
  fVar6 = (float)((float10)fVar3 - fVar15);
  (*(float *)(gen_frame + 0x60)) = fVar6;
  fVar7 = (float)((float10)fVar4 - fVar15);
  (*(float *)(gen_frame + 0x64)) = fVar7;
  fVar8 = (float)((float10)fVar5 - fVar15);
  (*(float *)(gen_frame + 0x68)) = fVar8;
  (*(float *)(gen_frame + 0x30)) = fVar6;
  (*(float *)(gen_frame + 0x34)) = fVar7;
  (*(float *)(gen_frame + 0x38)) = fVar8;
  fVar3 = (float)(fVar15 + (float10)fVar3);
  (*(float *)(gen_frame + 0x70)) = fVar3;
  fVar4 = (float)((float10)fVar4 + fVar15);
  (*(float *)(gen_frame + 0x74)) = fVar4;
  fVar5 = (float)(fVar15 + (float10)fVar5);
  (*(float *)(gen_frame + 0x78)) = fVar5;
  (*(float *)(gen_frame + 0x40)) = fVar3;
  (*(float *)(gen_frame + 0x44)) = fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar5;
  F_0061ea70((undefined *)(this_00 + 0x50),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x40)));
  uVar9 = F_00628180((undefined *)this_00);
LAB_006398a6: ;
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return uVar9;
}

/* ref: FUN_006398c0 */
byte F_006398c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6398c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  int * piVar7;
  undefined4 * in_ecx;
  int * piVar8;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  int * local_8;
  
  *(int *)((int)this + 0x144) = param_1;
  uVar4 = F_004dcd60(0x1c0,1,0);
  *(uint *)((int)this + 0x120) = uVar4;
  if (uVar4 != 0) {
    F_00621fc0(this,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
  }
  piVar7 = (int *)((int)this + 0x130);
  iVar6 = 0;
  local_8 = piVar7;
  do {
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                       (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0x140,0x10)));
    in_ecx = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[0x29] = GEN_FLT_TO(puVar5[0x29], REFG(float, 0x108b284));
      puVar5[0x2a] = GEN_FLT_TO(puVar5[0x2a], REFG(float, 0x1096cd4));
      puVar5[0x2b] = GEN_FLT_TO(puVar5[0x2b], REFG(float, 0x1094884));
      puVar5[0x2c] = GEN_FLT_TO(puVar5[0x2c], REFG(float, 0x1094724));
      uVar3 = REFG(float, 0x1094880);
      puVar5[0x48] = 0;
      puVar5[0x4c] = 0;
      puVar5[0x4d] = 0;
      puVar5[1] = 1;
      puVar5[0x28] = 0x1e;
      puVar5[0x2d] = uVar3;
      *(undefined1 *)(puVar5 + 0x2e) = 0;
      *puVar5 = (*(undefined * PTR32 (*)[7])REFP(0x10abd20));
      *(undefined1 *)(puVar5 + 0x4e) = 0;
      in_ecx = puVar5;
    }
    *local_8 = (int)in_ecx;
    uVar4 = F_004dcd60(0x1c0,1,0);
    in_ecx[0x48] = uVar4;
    if (uVar4 != 0) {
      F_00621fc0(in_ecx,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,&REFG(float, 0x1302d00));
      in_ecx[0x4c] = this;
      in_ecx[0x4d] = iVar6;
    }
    local_8 = local_8 + 1;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  iVar6 = param_1 * 0x358 + 4 + REFG(int, 0x137127c);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
  piVar8 = *(int * PTR32 *)(iVar6 + 0x2a0);
  if (piVar8 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar8 + 0xc))(piVar8);
  }
  *(undefined * PTR32 *)(iVar6 + 0x2a0) = this;
  piVar8 = (int *)(iVar6 + 0x134);
  param_1 = 4;
  do {
    piVar1 = (int *)*piVar7;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    }
    piVar2 = (int *)*piVar8;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
    }
    *piVar8 = (int)piVar1;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 0xd;
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return 1;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf7 */
uint F_00639a80(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x639a80u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm5 = (float)gen_a2;
  float in_xmm6 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x1e0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float * pfVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  undefined4 * puVar12;
  float10 fVar13;
  
  uVar9 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1d0);
  (*(uint *)(gen_frame + 0x1cc)) = uVar9;
  iVar6 = *(int *)(in_ecx + 0x144);
  iVar10 = iVar6 * 0x358 + 4 + REFG(int, 0x137127c);
  (*(int *)(gen_frame + 0x30)) = in_ecx;
  if ((*(int *)(in_ecx + 0x140) != 0) &&
     ((iVar6 < 4 || ((*(uint *)(REFG(int, 0x1371280) + 0x68) & 1 << ((byte)iVar6 & 0x1f)) != 0)))) {
    iVar6 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x140) + 0xc)));
    cVar8 = '\0';
    (*(char *)(gen_frame + 0x3f)) = '\0';
    if ((iVar6 == 2) || (iVar6 == 5)) {
      (*(char *)(gen_frame + 0x3f)) = '\x01';
      cVar8 = '\x01';
    }
    *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 1;
    *(uint *)(iVar10 + 0x120) = *(uint *)(iVar10 + 0x120) | 1;
    *(uint *)(iVar10 + 0x154) = (uint)(cVar8 != '\0') | *(uint *)(iVar10 + 0x154) & 0xfffffffe;
    *(uint *)(iVar10 + 0x188) = (uint)(cVar8 != '\0') | *(uint *)(iVar10 + 0x188) & 0xfffffffe;
    *(uint *)(iVar10 + 0x1bc) = (uint)(cVar8 != '\0') | *(uint *)(iVar10 + 0x1bc) & 0xfffffffe;
    iVar10 = *(int *)(in_ecx + 0x140);
    switch((unsigned int)(uintptr_t)(*(undefined4 *)(iVar10 + 0xc))) {
    case 2: ;
    case 3: ;
    case 5: ;
      F_00666e10((undefined *)(in_ecx + 0x10),*(int *)(iVar10 + 0x10),*(int *)(iVar10 + 0x10) + 0x10,
                   &REFG(float, 0x1302c60));
      cVar8 = (*(char *)(gen_frame + 0x3f));
      break;
    case 4: ;
      pfVar7 = *(float * PTR32 *)(iVar10 + 0x10);
      fVar1 = *pfVar7;
      fVar2 = pfVar7[1];
      fVar3 = pfVar7[2];
      (*(float *)(gen_frame + 0x0)) = pfVar7[4];
      (*(float *)(gen_frame + 0x4)) = pfVar7[5];
      (*(float *)(gen_frame + 0x8)) = pfVar7[6];
      (*(float *)(gen_frame + 0xc)) = pfVar7[7];
      (*(float *)(gen_frame + 0x10)) = pfVar7[8];
      (*(float *)(gen_frame + 0x14)) = pfVar7[9];
      (*(float *)(gen_frame + 0x18)) = pfVar7[10];
      (*(float *)(gen_frame + 0x34)) = *(float *)(REFG(int, 0x1371284) + 0x14);
      if ((*(float *)(REFG(int, 0x1371284) + 0x14) == 0.0) || ((*(byte *)(iVar10 + 8) >> 4 & 1) == 0)) {
        fVar4 = *(float *)(iVar10 + 0x60);
        (*(float *)(gen_frame + 0x34)) = fVar4;
        fVar13 = ((float10)GEN_TOD(fsin((float10)fVar4)));
        fVar5 = (float)fVar13;
        (*(float *)(gen_frame + 0x38)) = fVar5;
        (*(float *)(gen_frame + 0x2c)) = fVar5;
        fVar13 = ((float10)GEN_TOD(fcos((float10)fVar4)));
        fVar4 = (float)fVar13;
        (*(float *)(gen_frame + 0x38)) = fVar4;
        ((undefined4 *)(gen_frame + 0x180))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x180))[0], REFG(float, 0x1087f04));
        (*(float *)(gen_frame + 0x194)) = fVar4;
        ((undefined4 *)(gen_frame + 0x180))[1] = 0;
        ((undefined4 *)(gen_frame + 0x180))[2] = 0;
        (*(float *)(gen_frame + 0x198)) = fVar5;
        (*(undefined4 *)(gen_frame + 0x190)) = 0;
        (*(undefined4 *)(gen_frame + 0x1a0)) = 0;
        (*(float *)(gen_frame + 0x1a4)) = ((float)GEN_TOF(-(float10)fVar5));
        (*(float *)(gen_frame + 0x1b0)) = 0.0;
        (*(float *)(gen_frame + 0x1b4)) = 0.0;
        (*(float *)(gen_frame + 0x1a8)) = fVar4;
        (*(float *)(gen_frame + 0x1b8)) = 0.0;
        F_0065ed60(((undefined4 *)(gen_frame + 0x180)),*(float *)(iVar10 + 100));
      }
      else {
        uVar9 = F_004ef0c0(((undefined1 *)(gen_frame + 0x40)),*(int *)(iVar10 + 0x10) + 0x10);
        puVar12 = (undefined4 *)F_004f45d0(((undefined4 *)(gen_frame + 0x140)),uVar9);
        puVar11 = ((undefined4 *)(gen_frame + 0x100));
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar11 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar9 = F_004ef0c0(((undefined1 *)(gen_frame + 0x80)),*(int *)((int)gen_fl2bits((*(float *)(gen_frame + 0x34))) + 0x10) + 0x10);
        puVar12 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xc0)),uVar9,(uint)((undefined4 *)(gen_frame + 0x100)));
        puVar11 = ((undefined4 *)(gen_frame + 0x180));
        for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
          *puVar11 = *puVar12;
          puVar12 = puVar12 + 1;
          puVar11 = puVar11 + 1;
        }
      }
      F_004efe70(((undefined4 *)(gen_frame + 0x180)),(uint)&(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x1b0)) = (float)((float10)(*(float *)(gen_frame + 0x1b0)) + (float10)fVar1);
      (*(float *)(gen_frame + 0x1b4)) = (float)((float10)(*(float *)(gen_frame + 0x1b4)) + (float10)fVar2);
      (*(float *)(gen_frame + 0x1b8)) = (float)((float10)(*(float *)(gen_frame + 0x1b8)) + (float10)fVar3);
      puVar12 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0xc0)),((undefined4 *)(gen_frame + 0x180)));
      puVar11 = ((undefined4 *)(gen_frame + 0x140));
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      }
      puVar12 = ((undefined4 *)(gen_frame + 0x140));
      puVar11 = (undefined4 *)((*(int *)(gen_frame + 0x30)) + 0x10);
      for (iVar10 = 0x10; in_ecx = (*(int *)(gen_frame + 0x30)), cVar8 = (*(char *)(gen_frame + 0x3f)), iVar10 != 0; iVar10 = iVar10 + -1)
      {
        *puVar11 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    if (cVar8 == '\0') {
      F_0062a920(in_ecx,in_xmm3,in_xmm5,in_xmm6);
    }
    else {
      F_0062a390(in_ecx,in_xmm3,in_xmm5,in_xmm6);
    }
    puVar12 = (undefined4 *)(in_ecx + 0x130);
    iVar10 = 4;
    do {
      uVar9 = ((code *)*(gen_code32 *)(*(int *)*puVar12 + 0x18))((int *)*puVar12);
      puVar12 = puVar12 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    F_00c47745((*(uint *)(gen_frame + 0x1cc)) ^ (uint)(uint)(gen_frame + 0x1d0));
    return uVar9;
  }
  *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) & 0xfffffffe;
  *(uint *)(iVar10 + 0x120) = *(uint *)(iVar10 + 0x120) & 0xfffffffe;
  *(uint *)(iVar10 + 0x154) = *(uint *)(iVar10 + 0x154) & 0xfffffffe;
  *(uint *)(iVar10 + 0x188) = *(uint *)(iVar10 + 0x188) & 0xfffffffe;
  *(uint *)(iVar10 + 0x1bc) = *(uint *)(iVar10 + 0x1bc) & 0xfffffffe;
  F_00c47745(uVar9 ^ (uint)(uint)(gen_frame + 0x1d0));
  return 0xfffffffe;
}

/* ref: FUN_00639e50 */
uint F_00639e50(unsigned int gen_a0)
{
  GEN_ENTER(0x639e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x58);
  uVar3 = 0;
  if (pvVar1 != (undefined *)0x0) {
    F_009f44d0(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  iVar2 = *(int *)((int)this + 0x54);
  if (iVar2 != 0) {
    F_009f1390(iVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x50);
  if (pvVar1 != (undefined *)0x0) {
    F_009f1970(pvVar1);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),pvVar1);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  if (*(short *)((int)this + 0x40) != 0) {
    uVar4 = 0;
    do {
      iVar2 = *(int *)((int)this + 0x48);
      if ((iVar2 != 0) && (*(int *)(iVar2 + uVar4 * 4) != 0)) {
        F_009fa140(*(undefined * PTR32 *)(iVar2 + uVar4 * 4));
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)this + 0x40));
  }
  if (*(int *)((int)this + 0x48) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x48));
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  if (*(int *)((int)this + 0x4c) != 0) {
    F_004de750(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x10),((code *)REFP(0x61ed40)),*(int *)((int)this + 0x4c),
                 (uint)*(ushort *)((int)this + 0x40));
    *(undefined4 *)((int)this + 0x4c) = 0;
  }
  if ((*(int *)((int)this + 0x44) != 0) && (*(short *)((int)this + 0x40) != 0)) {
    do {
      iVar2 = (uint)uVar3 * 4;
      if (*((int *)GEN_TOP((iVar2 + *(int *)((int)this + 0x44)))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x44)))),0,0);
        *((undefined4 *)GEN_TOP((iVar2 + *(int *)((int)this + 0x44)))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)this + 0x40));
  }
  if (*(int *)((int)this + 0x44) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 100) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 100));
    *(undefined4 *)((int)this + 100) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x60));
    *(undefined4 *)((int)this + 0x60) = 0;
  }
  uVar4 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x5c));
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  return uVar4;
}

/* ref: FUN_00639fd0 */
unsigned int F_00639fd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x639fd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint uVar2;
  
  F_006230d0(param_1,param_2);
  F_0062b830(param_1,(undefined4)gen_fl2bits(param_2));
  uVar2 = *(int *)((int)param_1 + 0x70) + 0x1fU >> 5;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)param_1 + 0x6c) + uVar1 * 4))) = 0xffffffff;
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

/* ref: FUN_0063a020 */
uint F_0063a020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63a020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  short sVar1;
  undefined * this;
  int * piVar2;
  uint uVar3;
  
  sVar1 = *(short *)(param_2 + 2);
  this = *(undefined * PTR32 *)((uint)*param_2 * 0x120 + param_3 + 0xbc);
  if ((this != (undefined *)0x0) && (-1 < sVar1)) {
    piVar2 = (int *)F_00d321b0(this);
    uVar3 = F_00d93970((undefined *)(sVar1 * 0x30 + *piVar2),param_1);
    return uVar3;
  }
  uVar3 = F_00d93970(&REFG(undefined, 0x1351770),param_1);
  return uVar3;
}

/* ref: FUN_0063a080 */
uint F_0063a080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x63a080u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_0066bbf0(((undefined *)GEN_TOP(((uint)*param_1 * 0x120 + *(int *)((int)this + 0x4c)))),
                       (uint)*(ushort *)(param_1 + 2),param_2,param_3);
  return uVar1;
}

/* ref: FUN_0063a0b0 */
uint F_0063a0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63a0b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_0066c190(((undefined *)GEN_TOP(((uint)*param_1 * 0x120 + *(int *)((int)this + 0x4c)))),
                       (uint)*(ushort *)(param_1 + 2),param_2);
  return uVar1;
}

/* ref: FUN_0063a0e0 */
uint F_0063a0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63a0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  short sVar1;
  undefined * this_00;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int * piVar10;
  float * pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar2 = *(float *)((int)this + 0x14);
  fVar3 = *(float *)((int)this + 0x18);
  *param_1 = *(float *)((int)this + 0x10);
  param_1[1] = fVar2;
  param_1[2] = fVar3;
  param_1[3] = 0.0;
  fVar2 = *(float *)((int)this + 0x24);
  fVar3 = *(float *)((int)this + 0x28);
  fVar4 = *(float *)((int)this + 0x2c);
  param_1[4] = *(float *)((int)this + 0x20);
  param_1[5] = fVar2;
  param_1[6] = fVar3;
  param_1[7] = fVar4;
  fVar2 = *(float *)((int)this + 0x34);
  fVar3 = *(float *)((int)this + 0x38);
  param_1[8] = *(float *)((int)this + 0x30);
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  param_1[0xb] = 0.0;
  sVar1 = *(short *)(param_2 + 2);
  this_00 = *((undefined * PTR32 *)GEN_TOP(((uint)*param_2 * 0x120 + *(int *)((int)this + 0x4c) + 0xbc)));
  if ((this_00 == (undefined *)0x0) || (sVar1 < 0)) {
    pfVar11 = (float *)&REFG(undefined, 0x1351770);
  }
  else {
    piVar10 = (int *)F_00d321b0(this_00);
    pfVar11 = (float *)(sVar1 * 0x30 + *piVar10);
  }
  fVar2 = param_1[4];
  fVar3 = param_1[5];
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar15 = param_1[8] * *pfVar11;
  fVar16 = param_1[9] * pfVar11[1];
  fVar17 = param_1[10] * pfVar11[2];
  fVar18 = param_1[0xb] * pfVar11[3];
  fVar12 = fVar2 * fVar15;
  fVar13 = fVar3 * fVar16;
  fVar14 = fVar4 * fVar17;
  fVar6 = pfVar11[4];
  fVar7 = pfVar11[5];
  fVar8 = pfVar11[6];
  fVar9 = pfVar11[7];
  fVar19 = (((fVar13 + fVar12) + fVar14) * fVar2 +
           (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar15) +
           (fVar17 * fVar3 - fVar16 * fVar4) * fVar5;
  fVar20 = (((fVar13 + fVar12) + fVar14) * fVar3 +
           (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar16) +
           (fVar15 * fVar4 - fVar17 * fVar2) * fVar5;
  fVar16 = (((fVar13 + fVar12) + fVar14) * fVar4 +
           (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar17) +
           (fVar16 * fVar2 - fVar15 * fVar3) * fVar5;
  fVar17 = (((fVar13 + fVar12) + fVar14) * fVar5 +
           (fVar5 * fVar5 + gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar18) +
           (fVar18 * fVar5 - fVar18 * fVar5) * fVar5;
  fVar12 = pfVar11[8];
  fVar13 = pfVar11[9];
  fVar14 = pfVar11[10];
  fVar15 = pfVar11[0xb];
  *param_1 = (fVar19 + fVar19) + *param_1;
  param_1[1] = (fVar20 + fVar20) + param_1[1];
  param_1[2] = (fVar16 + fVar16) + param_1[2];
  param_1[3] = (fVar17 + fVar17) + param_1[3];
  param_1[4] = ((fVar8 * fVar3 - fVar7 * fVar4) + fVar5 * fVar6) + fVar9 * fVar2;
  param_1[5] = ((fVar6 * fVar4 - fVar8 * fVar2) + fVar5 * fVar7) + fVar9 * fVar3;
  param_1[6] = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar5 * fVar8) + fVar9 * fVar4;
  param_1[7] = fVar9 * fVar5 - ((fVar7 * fVar3 + fVar6 * fVar2) + fVar8 * fVar4);
  param_1[8] = fVar12 * param_1[8];
  param_1[9] = fVar13 * param_1[9];
  param_1[10] = fVar14 * param_1[10];
  param_1[0xb] = fVar15 * param_1[0xb];
  return (uint)param_1;
}

/* ref: FUN_0063a290 */
uint F_0063a290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63a290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP(((param_2 >> 0xc & 0xf) * 0x120 + *(int *)((int)this + 0x4c) + 0xbc)));
  if (this_00 == (undefined *)0x0) {
    uVar2 = F_00d93970(&REFG(undefined, 0x1351770),param_1);
    return uVar2;
  }
  piVar1 = (int *)F_00d321b0(this_00);
  uVar2 = F_00d93970(((undefined *)GEN_TOP(((short)((ushort)param_2 & 0xfff) * 0x30 + *piVar1))),param_1);
  return uVar2;
}

/* ref: FUN_0063a2f0 */
uint F_0063a2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x63a2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  undefined * pvVar1;
  uint uVar2;
  
  if (*param_3 == 0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                               (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x20,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_009f92d0(pvVar1);
    }
    *param_3 = uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x137129c) + 0x60);
  uVar2 = F_00500af0(pvVar1,param_1);
  uVar2 = F_00500ae0(pvVar1,uVar2 & 0xffff);
  if ((*(uint *)(uVar2 + 8) >> 3 & 1) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x74) + 200))))(*(int * PTR32 *)((int)this + 0x74));
    if (uVar2 == 1) {
      uVar2 = F_0062b940(this,param_3,param_2,param_1,1,1);
      return uVar2;
    }
    uVar2 = F_0062b940(this,param_3,param_2,param_1,0,0);
    return uVar2;
  }
  uVar2 = F_0062b940(this,param_3,param_2,param_1,0,0);
  return uVar2;
}

/* ref: FUN_0063a3b0 */
uint F_0063a3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63a3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * pvVar2;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if (pvVar2 != (undefined *)0x0) {
    F_009f1970(pvVar2);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),pvVar2);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0x1c,0x10);
  if (uVar1 == 0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_009f0890(uVar1);
  }
  *(undefined * PTR32 *)((int)this + 0x50) = pvVar2;
  F_009f4000(pvVar2,this,param_1);
  if (*(undefined * PTR32 *)((int)this + 0x50) == (undefined *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = F_009f0f50(*(undefined * PTR32 *)((int)this + 0x50),&REFG(undefined, 0x10a6000));
  }
  *(char *)((int)this + 0x9c) = (char)uVar1;
  if ((char)uVar1 == -1) {
    if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
      uVar1 = F_009f0f50(*(undefined * PTR32 *)((int)this + 0x50),&REFG(undefined, 0x10a6008));
      *(char *)((int)this + 0x9c) = (char)uVar1;
      return uVar1;
    }
    uVar1 = 0xffffffff;
    *(undefined1 *)((int)this + 0x9c) = 0xff;
  }
  return uVar1;
}

/* ref: FUN_0063a460 */
uint F_0063a460(unsigned int gen_a0)
{
  GEN_ENTER(0x63a460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  undefined * this_00;
  uint uVar1;
  
  in_ecx = *(int *)((int)this + 0x54);
  if (in_ecx != 0) {
    F_009f1390(in_ecx);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),in_ecx);
    *(undefined4 *)((int)this + 0x54) = 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),0xe0,0x10)));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_009f1b60(this_00);
    *(uint *)((int)this + 0x54) = uVar1;
    uVar1 = F_009f08e0(uVar1,this);
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x54) = 0;
  uVar1 = F_009f08e0(0,this);
  return uVar1;
}

/* ref: FUN_0063a4d0 */
uint F_0063a4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63a4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  uVar1 = param_1;
  uVar2 = *(uint *)((int)this + 0x68);
  if (uVar2 < param_1) {
    if (uVar2 == 0) {
      *(uint *)((int)this + 0x68) = param_1;
      iVar6 = (int)((ulonglong)param_1 * 0x40 >> 0x20);
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar6,
                         -(uint)(iVar6 != 0) | (uint)((ulonglong)param_1 * 0x40),0x10);
      if (uVar2 == 0) {
        uVar2 = 0;
      }
      else {
        iVar6 = param_1 - 1;
        if (-1 < iVar6) {
          puVar5 = (undefined4 *)(uVar2 + 0x24);
          do {
            puVar5[-1] = 0xffffffff;
            *puVar5 = 0;
            puVar5[1] = 0;
            puVar5[2] = 0;
            puVar5[3] = 0;
            puVar5[4] = 0;
            puVar5[5] = 0;
            puVar5[-9] = 0;
            puVar5[-8] = 0;
            puVar5[-7] = 0;
            puVar5[-6] = 0;
            puVar5[-5] = 0;
            puVar5[-4] = 0;
            puVar5[-3] = 0;
            puVar5[-2] = 0;
            puVar5[6] = 0;
            puVar5 = puVar5 + 0x10;
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
      }
      *(uint *)((int)this + 0x5c) = uVar2;
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x68) << 6,0x10);
      *(uint *)((int)this + 0x60) = uVar2;
      pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0x68) * 2,0x10
                                 )));
      *(undefined * PTR32 *)((int)this + 100) = pvVar3;
      pvVar3 = F_00c48350(pvVar3,-1,*(int *)((int)this + 0x68) * 2);
      return (uint)pvVar3;
    }
    iVar6 = (int)((ulonglong)param_1 * 0x40 >> 0x20);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar6,
                       -(uint)(iVar6 != 0) | (uint)((ulonglong)param_1 * 0x40),0x10);
    if (uVar2 == 0) {
      param_1 = 0;
    }
    else {
      iVar6 = param_1 - 1;
      param_1 = uVar2;
      if (-1 < iVar6) {
        puVar5 = (undefined4 *)(uVar2 + 0x24);
        do {
          puVar5[-1] = 0xffffffff;
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5[2] = 0;
          puVar5[3] = 0;
          puVar5[4] = 0;
          puVar5[5] = 0;
          puVar5[-9] = 0;
          puVar5[-8] = 0;
          puVar5[-7] = 0;
          puVar5[-6] = 0;
          puVar5[-5] = 0;
          puVar5[-4] = 0;
          puVar5[-3] = 0;
          puVar5[-2] = 0;
          puVar5[6] = 0;
          puVar5 = puVar5 + 0x10;
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),uVar1 << 6,0x10);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),uVar1 * 2,0x10);
    F_00c46aa0(param_1,*(undefined4 *)((int)this + 0x5c),*(int *)((int)this + 0x68) << 6);
    F_00c46aa0(uVar4,*(undefined4 *)((int)this + 0x60),*(int *)((int)this + 0x68) << 6);
    F_00c46aa0(uVar2,*(undefined4 *)((int)this + 100),*(int *)((int)this + 0x68) * 2);
    F_0062bb50(this);
    *(uint *)((int)this + 0x60) = uVar4;
    *(uint *)((int)this + 0x5c) = param_1;
    *(uint *)((int)this + 100) = uVar2;
    *(uint *)((int)this + 0x68) = uVar1;
  }
  return uVar2;
}

/* ref: FUN_0063a7d0 */
unsigned int F_0063a7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x63a7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float fVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  for (iVar3 = param_1; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    piVar2 = *(int * PTR32 *)(iVar3 + 0x74);
    if ((piVar2 != (int *)0x0) && (*(char *)((int)piVar2 + 0x65) == '\x03')) {
      fVar1 = *(float *)(iVar3 + 0xa4);
      uVar4 = (uint)param_1 >> 8;
      param_1 = CONCAT31((int3)uVar4,*(char *)(iVar3 + 0xa9) != '\0');
      uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x74))(piVar2);
      if ((uVar4 == 1) || ((char)piVar2[0x1c] < '\0')) {
        uVar4 = 4;
      }
      else {
        uVar4 = F_00a06680(fVar1,param_1);
      }
      F_009f14d0((undefined *)(iVar3 + 0xa0),uVar4);
    }
  }
  return 0;
}

/* ref: FUN_0063a860 */
unsigned int F_0063a860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63a860u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  undefined * this_01;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  undefined4 * puVar5;
  
  pvVar3 = (*(undefined * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xb4)));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xbc)));
    this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x10)));
    F_009f9a30((*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)*(uint *)(iVar1 + 0x14);
    (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)pvVar3 + 0x5a);
    puVar4 = (uint *)&(*(undefined * PTR32 *)&gen_args[1]);
    if (*(uint *)(iVar1 + 0x14) <= (uint)*(ushort *)((int)pvVar3 + 0x5a)) {
      puVar4 = &(*(uint *)(gen_frame + 0x8));
    }
    if (*puVar4 < 0x50) {
      puVar5 = (undefined4 *)F_00d314f0(this_01);
      F_00d36cf0(this_00,iVar1,*puVar5,0,0,0xffffffff,0xffffffff);
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
      }
      *(undefined * PTR32 *)(*piVar2 + piVar2[1] * 4) = this_00;
      piVar2[1] = piVar2[1] + 1;
    }
  }
  return 0;
}

/* ref: FUN_0063a900 */
unsigned int F_0063a900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63a900u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  undefined * this_01;
  int * piVar2;
  undefined * pvVar3;
  uint * puVar4;
  undefined4 * puVar5;
  
  pvVar3 = (*(undefined * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xb8)));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0xc4)));
    this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 0x60)));
    F_009f9a30((*(undefined * PTR32 *)&gen_args[1]));
    (*(undefined * PTR32 *)&gen_args[1]) = (undefined *)*(uint *)(iVar1 + 0x14);
    (*(uint *)(gen_frame + 0x8)) = (uint)*(ushort *)((int)pvVar3 + 0xaa);
    puVar4 = (uint *)&(*(undefined * PTR32 *)&gen_args[1]);
    if (*(uint *)(iVar1 + 0x14) <= (uint)*(ushort *)((int)pvVar3 + 0xaa)) {
      puVar4 = &(*(uint *)(gen_frame + 0x8));
    }
    if (*puVar4 < 0x50) {
      puVar5 = (undefined4 *)F_00d314f0(this_01);
      F_00d36cf0(this_00,iVar1,*puVar5,0,0,0xffffffff,0xffffffff);
      piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,4);
      }
      *(undefined * PTR32 *)(*piVar2 + piVar2[1] * 4) = this_00;
      piVar2[1] = piVar2[1] + 1;
    }
  }
  return 0;
}

/* ref: Client::Graphics::Render::BoneCollector::vf1 */
uint F_0063a9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63a9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float * pfVar1;
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
  ushort uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined * this_00;
  float fVar19;
  float fVar20;
  int iVar21;
  int * piVar22;
  int iVar23;
  undefined * this_01;
  undefined4 * puVar24;
  float * pfVar25;
  undefined4 * puVar26;
  float fVar27;
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
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  iVar15 = *(int *)(this + 0x60);
  iVar21 = *(int *)(this + 0x70);
  iVar16 = *(int *)(this + 0x74);
  uVar17 = *(uint *)(this + 0x78);
  (*(float * PTR32 *)(gen_frame + 0x4)) = (float *)F_004d9920(*(undefined * PTR32 *)(this + 0x68),0,0,2);
  iVar18 = *(int *)(this + 0x80);
  if (iVar18 != 0) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(iVar18 + 0x10);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar18 + 0x14);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(iVar18 + 0x18);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar18 + 0x20);
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(iVar18 + 0x24);
    *(undefined4 *)(this + 0x48) = *(undefined4 *)(iVar18 + 0x28);
    *(undefined4 *)(this + 0x4c) = *(undefined4 *)(iVar18 + 0x2c);
    *(undefined4 *)(this + 0x50) = *(undefined4 *)(iVar18 + 0x30);
    *(undefined4 *)(this + 0x54) = *(undefined4 *)(iVar18 + 0x34);
    *(undefined4 *)(this + 0x58) = *(undefined4 *)(iVar18 + 0x38);
    *(undefined4 *)(this + 0x60) = *((undefined4 *)GEN_TOP((*(int *)(this + 0x80) + 0x4c)));
    *(uint *)(this + 100) = (uint)*((ushort *)GEN_TOP((*(int *)(this + 0x80) + 0x40)));
  }
  if ((*(float * PTR32 *)(gen_frame + 0x4)) != (float *)0x0) {
    iVar18 = *((int *)GEN_TOP((*(int *)(this + 0x6c) * 0x358 + 0x2a4 + REFG(int, 0x137127c))));
    if (iVar18 != 0) {
      puVar24 = (undefined4 *)(iVar18 + 0x10);
      puVar26 = ((undefined4 *)(gen_frame + 0x50));
      for (iVar23 = 0x10; iVar23 != 0; iVar23 = iVar23 + -1) {
        *puVar26 = *puVar24;
        puVar24 = puVar24 + 1;
        puVar26 = puVar26 + 1;
      }
      F_0054fa20(((undefined1 *)(gen_frame + 0x10)),this + 0x30);
      F_004ef5a0((uint)&(*(float *)(gen_frame + 0xd0)),(uint)((undefined1 *)(gen_frame + 0x10)),(uint)((undefined4 *)(gen_frame + 0x50)));
    }
    fVar19 = REFG(float, 0x1087f04);
    (*(uint *)(gen_frame + 0xc)) = 0;
    if (uVar17 != 0) {
      pfVar25 = (float *)(iVar21 + 0x20);
      iVar21 = (int)(*(float * PTR32 *)(gen_frame + 0x4)) - iVar21;
      do {
        uVar14 = *(ushort *)(iVar16 + (*(uint *)(gen_frame + 0xc)) * 2);
        (*(ushort *)(gen_frame + 0x8)) = uVar14 & 0xfff;
        this_00 = *((undefined * PTR32 *)GEN_TOP(((uint)(uVar14 >> 0xc) * 0x120 + iVar15 + 0xbc)));
        if (this_00 == (undefined *)0x0) {
          this_01 = &REFG(undefined, 0x1351770);
        }
        else {
          piVar22 = (int *)F_00d321b0(this_00);
          this_01 = (undefined *)((short)(*(ushort *)(gen_frame + 0x8)) * 0x30 + *piVar22);
        }
        F_00d93970(this_01,&(*(float *)(gen_frame + 0x90)));
        fVar20 = REFG(float, 0x1087f04);
        fVar31 = ((*(float *)(gen_frame + 0x100)) * 0.0 + (*(float *)(gen_frame + 0x98)) * (*(float *)(gen_frame + 0xf0))) +
                 ((*(float *)(gen_frame + 0x94)) * (*(float *)(gen_frame + 0xe0)) + (*(float *)(gen_frame + 0x90)) * (*(float *)(gen_frame + 0xd0)));
        fVar33 = ((*(float *)(gen_frame + 0x100)) * 0.0 + (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0xf0))) +
                 ((*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0xe0)) + (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0xd0)));
        fVar35 = ((*(float *)(gen_frame + 0x100)) * 0.0 + (*(float *)(gen_frame + 0xb8)) * (*(float *)(gen_frame + 0xf0))) +
                 ((*(float *)(gen_frame + 0xb4)) * (*(float *)(gen_frame + 0xe0)) + (*(float *)(gen_frame + 0xb0)) * (*(float *)(gen_frame + 0xd0)));
        fVar37 = (fVar19 * (*(float *)(gen_frame + 0x100)) + (*(float *)(gen_frame + 0xc8)) * (*(float *)(gen_frame + 0xf0))) +
                 ((*(float *)(gen_frame + 0xc4)) * (*(float *)(gen_frame + 0xe0)) + (*(float *)(gen_frame + 0xc0)) * (*(float *)(gen_frame + 0xd0)));
        fVar32 = ((*(float *)(gen_frame + 0x104)) * 0.0 + (*(float *)(gen_frame + 0x98)) * (*(float *)(gen_frame + 0xf4))) +
                 ((*(float *)(gen_frame + 0x94)) * (*(float *)(gen_frame + 0xe4)) + (*(float *)(gen_frame + 0x90)) * (*(float *)(gen_frame + 0xd4)));
        fVar34 = ((*(float *)(gen_frame + 0x104)) * 0.0 + (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0xf4))) +
                 ((*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0xe4)) + (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0xd4)));
        fVar36 = ((*(float *)(gen_frame + 0x104)) * 0.0 + (*(float *)(gen_frame + 0xb8)) * (*(float *)(gen_frame + 0xf4))) +
                 ((*(float *)(gen_frame + 0xb4)) * (*(float *)(gen_frame + 0xe4)) + (*(float *)(gen_frame + 0xb0)) * (*(float *)(gen_frame + 0xd4)));
        fVar38 = (fVar19 * (*(float *)(gen_frame + 0x104)) + (*(float *)(gen_frame + 0xc8)) * (*(float *)(gen_frame + 0xf4))) +
                 ((*(float *)(gen_frame + 0xc4)) * (*(float *)(gen_frame + 0xe4)) + (*(float *)(gen_frame + 0xc0)) * (*(float *)(gen_frame + 0xd4)));
        fVar2 = *pfVar25;
        fVar27 = ((*(float *)(gen_frame + 0x108)) * 0.0 + (*(float *)(gen_frame + 0x98)) * (*(float *)(gen_frame + 0xf8))) +
                 ((*(float *)(gen_frame + 0x94)) * (*(float *)(gen_frame + 0xe8)) + (*(float *)(gen_frame + 0x90)) * (*(float *)(gen_frame + 0xd8)));
        fVar28 = ((*(float *)(gen_frame + 0x108)) * 0.0 + (*(float *)(gen_frame + 0xa8)) * (*(float *)(gen_frame + 0xf8))) +
                 ((*(float *)(gen_frame + 0xa4)) * (*(float *)(gen_frame + 0xe8)) + (*(float *)(gen_frame + 0xa0)) * (*(float *)(gen_frame + 0xd8)));
        fVar29 = ((*(float *)(gen_frame + 0x108)) * 0.0 + (*(float *)(gen_frame + 0xb8)) * (*(float *)(gen_frame + 0xf8))) +
                 ((*(float *)(gen_frame + 0xb4)) * (*(float *)(gen_frame + 0xe8)) + (*(float *)(gen_frame + 0xb0)) * (*(float *)(gen_frame + 0xd8)));
        fVar30 = (fVar19 * (*(float *)(gen_frame + 0x108)) + (*(float *)(gen_frame + 0xc8)) * (*(float *)(gen_frame + 0xf8))) +
                 ((*(float *)(gen_frame + 0xc4)) * (*(float *)(gen_frame + 0xe8)) + (*(float *)(gen_frame + 0xc0)) * (*(float *)(gen_frame + 0xd8)));
        fVar3 = pfVar25[-4];
        fVar4 = pfVar25[-8];
        fVar5 = pfVar25[1];
        fVar6 = pfVar25[-7];
        fVar7 = pfVar25[-3];
        fVar8 = pfVar25[-2];
        fVar9 = pfVar25[2];
        fVar10 = pfVar25[-6];
        fVar11 = pfVar25[-5];
        fVar12 = pfVar25[3];
        fVar13 = pfVar25[-1];
        fVar39 = REFG(float, 0x1087f04) * fVar37;
        *(*(float * PTR32 *)(gen_frame + 0x4)) = (fVar4 * fVar31 + fVar3 * fVar33) + (fVar2 * fVar35 + fVar37 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[1] = (fVar6 * fVar31 + fVar7 * fVar33) + (fVar5 * fVar35 + fVar37 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[2] = (fVar10 * fVar31 + fVar8 * fVar33) + (fVar9 * fVar35 + fVar37 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[3] = (fVar11 * fVar31 + fVar13 * fVar33) + (fVar12 * fVar35 + fVar39);
        (*(float * PTR32 *)(gen_frame + 0x4))[4] = (fVar4 * fVar32 + fVar3 * fVar34) + (fVar2 * fVar36 + fVar38 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[5] = (fVar6 * fVar32 + fVar7 * fVar34) + (fVar5 * fVar36 + fVar38 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[6] = (fVar10 * fVar32 + fVar8 * fVar34) + (fVar9 * fVar36 + fVar38 * 0.0);
        (*(float * PTR32 *)(gen_frame + 0x4))[7] = (fVar11 * fVar32 + fVar13 * fVar34) + (fVar12 * fVar36 + fVar20 * fVar38);
        pfVar1 = (float *)(iVar21 + (int)pfVar25);
        *pfVar1 = (fVar4 * fVar27 + fVar3 * fVar28) + (fVar2 * fVar29 + fVar30 * 0.0);
        pfVar1[1] = (fVar6 * fVar27 + fVar7 * fVar28) + (fVar5 * fVar29 + fVar30 * 0.0);
        pfVar1[2] = (fVar10 * fVar27 + fVar8 * fVar28) + (fVar9 * fVar29 + fVar30 * 0.0);
        pfVar1[3] = (fVar11 * fVar27 + fVar13 * fVar28) + (fVar12 * fVar29 + fVar20 * fVar30);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
        (*(float * PTR32 *)(gen_frame + 0x4)) = (*(float * PTR32 *)(gen_frame + 0x4)) + 0xc;
        pfVar25 = pfVar25 + 0xc;
      } while ((*(uint *)(gen_frame + 0xc)) < uVar17);
    }
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x68) + 0x24))) = 0;
  }
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return (uint)(*(float * PTR32 *)(gen_frame + 0x4));
}

/* ref: FUN_0063ae10 */
byte F_0063ae10(unsigned int gen_a0)
{
  GEN_ENTER(0x63ae10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte bVar7;
  uint uVar8;
  float fVar9;
  undefined4 * puVar10;
  uint * puVar11;
  float in_XMM3_Da = 0;
  float in_XMM5_Da = 0;
  float in_XMM6_Da = 0;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  bVar7 = F_0066d2d0((undefined *)((int)this + 4),*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x24))));
  if (bVar7 != 0) {
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x10ac1ac);
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x10ac1ac);
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x10a509c);
    F_004f4430(((undefined1 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),&REFG(float, 0x1302c80));
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    puVar11 = (uint *)((int)this + 0x6c);
    do {
      uVar8 = F_00638150();
      *(undefined4 *)(uVar8 + 0xa8) = REFG(float, 0x10ac1a8);
      *(undefined4 *)(uVar8 + 0xac) = REFG(float, 0x10920a4);
      *(undefined4 *)(uVar8 + 0xb0) = REFG(float, 0x1094880);
      uVar3 = REFG(float, 0x1087ef8);
      *puVar11 = uVar8;
      *(undefined1 *)(uVar8 + 0xb8) = 1;
      uVar8 = *puVar11;
      *(undefined4 *)(uVar8 + 0xb4) = uVar3;
      *(int *)(uVar8 + 0xa0) = (int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 0x1a;
      F_00621fc0(*puVar11,in_XMM3_Da,in_XMM5_Da,in_XMM6_Da,((undefined1 *)(gen_frame + 0x60)));
      fVar9 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x1c))) + 1);
      puVar11 = puVar11 + 1;
      (*(float *)(gen_frame + 0x1c)) = fVar9;
    } while ((uint)gen_fl2bits(fVar9) < 4);
    F_004d58e0(((undefined1 *)(gen_frame + 0xa0)),0,0,0x23,0);
    F_004d58e0(((undefined1 *)(gen_frame + 0xa4)),0,0xc,0x44,3);
    F_004d58e0(((undefined1 *)(gen_frame + 0xa8)),0,0x10,0x22,8);
    uVar8 = F_004deb40(REFG(void * PTR32, 0x1370b90),((undefined1 *)(gen_frame + 0xa0)),3);
    *(uint *)((int)this + 0x9c) = uVar8;
    if (uVar8 != 0) {
      uVar8 = F_004dcc90(0x48,4,5);
      *(uint *)((int)this + 0xa0) = uVar8;
      if (uVar8 != 0) {
        uVar8 = F_004dcd60(0x40,4,5);
        *(uint *)((int)this + 0xa4) = uVar8;
        if (uVar8 != 0) {
          uVar8 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_RemapMatrix");
          *(uint *)((int)this + 0xa8) = uVar8;
          uVar8 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_RemapVector");
          *(uint *)((int)this + 0xac) = uVar8;
          uVar8 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_ProjectionMatrix");
          *(uint *)((int)this + 0xb0) = uVar8;
          uVar8 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x20))),"g_Texture");
          *(uint *)((int)this + 0xb4) = uVar8;
          puVar10 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 0xa0),0,0,2);
          uVar6 = REFG(float, 0x10ac1a4);
          uVar5 = REFG(float, 0x10ac1a0);
          uVar3 = REFG(float, 0x1088068);
          if (puVar10 != (undefined4 *)0x0) {
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            *puVar10 = 0;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            puVar10[1] = 0;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar3);
            puVar10[2] = uVar3;
            puVar10[3] = REFG(undefined4, 0x1302e24);
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            puVar10[4] = 0;
            (*(float *)(gen_frame + 0x1c)) = 0.0;
            puVar10[5] = 0;
            (*(undefined4 *)(gen_frame + 0x14)) = 0;
            puVar10[6] = 0;
            uVar4 = REFG(float, 0x10928e4);
            (*(undefined4 *)(gen_frame + 0x18)) = uVar6;
            puVar10[7] = uVar6;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar3);
            puVar10[8] = uVar3;
            puVar10[9] = REFG(undefined4, 0x1302e24);
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            puVar10[10] = 0;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar4);
            puVar10[0xb] = uVar4;
            (*(undefined4 *)(gen_frame + 0x14)) = uVar5;
            puVar10[0xc] = uVar5;
            (*(undefined4 *)(gen_frame + 0x18)) = 0;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar3);
            puVar10[0xd] = 0;
            puVar10[0xe] = uVar3;
            puVar10[0xf] = REFG(undefined4, 0x1302e24);
            (*(undefined4 *)(gen_frame + 0x18)) = uVar4;
            (*(float *)(gen_frame + 0x1c)) = 0.0;
            puVar10[0x10] = uVar4;
            puVar10[0x11] = 0;
            F_004d6970(*(undefined * PTR32 *)((int)this + 0xa0));
          }
          uVar8 = F_004d9920(*(undefined * PTR32 *)((int)this + 0xa4),0,0,2);
          if (uVar8 != 0) {
            fVar2 = (float10)0;
            fVar9 = (float)((float10)*(double *)&REFG(undefined, 0x10ac190) + (float10)0);
            (*(float *)(gen_frame + 0x1c)) = fVar9;
            fVar1 = (float)((float10)0 + (float10)*(double *)&REFG(undefined, 0x10ac188));
            (*(float *)(gen_frame + 0x1c)) = fVar1;
            F_004f08f0(((undefined1 *)(gen_frame + 0x20)),(float)fVar2,fVar1,fVar9,(float)fVar2,(float)fVar2,
                         (float)(float10)1,*(float *)&REFG(undefined, 0x10ac198),*(float *)&REFG(undefined, 0x10ac19c));
            F_004d3a00(uVar8,((undefined1 *)(gen_frame + 0x20)));
            *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xa4) + 0x24))) = 0;
          }
          F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
          return 1;
        }
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return 0;
}

/* ref: FUN_0063b260 */
uint F_0063b260(unsigned int gen_a0)
{
  GEN_ENTER(0x63b260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  piVar4 = *(int * PTR32 *)((int)this + 0xa4);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0xa4) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0xa0);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x94);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x94) = 0;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x98);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
    *(undefined4 *)((int)this + 0x98) = 0;
  }
  uVar2 = F_0066d430((undefined *)((int)this + 4));
  piVar4 = (int *)((int)this + 0x7c);
  iVar3 = 4;
  do {
    piVar1 = (int *)piVar4[-4];
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar4[-4] = 0;
    }
    piVar1 = (int *)*piVar4;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return uVar2;
}

/* ref: FUN_0063b320 */
unsigned int F_0063b320(unsigned int gen_a0)
{
  GEN_ENTER(0x63b320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x1b;
  iVar6 = uVar5 * 0x358;
  puVar1 = (uint *)(iVar6 + 8 + REFG(int, 0x137127c));
  *puVar1 = *puVar1 | 1;
  piVar3 = *(int * PTR32 *)((int)this + uVar5 * 4 + 4);
  iVar2 = iVar6 + 0x28c + REFG(int, 0x137127c);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
  }
  piVar4 = *(int * PTR32 *)(iVar2 + 0x18);
  if (piVar4 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
  }
  *(int * PTR32 *)(iVar2 + 0x18) = piVar3;
  puVar1 = (uint *)(iVar6 + 0x290 + REFG(int, 0x137127c));
  *puVar1 = *puVar1 & 0xfffffffd;
  puVar1 = (uint *)(iVar6 + 8 + REFG(int, 0x137127c));
  *puVar1 = *puVar1 & 0xfffffffd;
  F_0066d4e0((undefined *)((int)this + 4),this,((code *)REFP(0x62c770)),0);
  return 0;
}

/* ref: FUN_0063b3d0 */
uint F_0063b3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x63b3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  undefined4 uVar1;
  double dVar2;
  undefined4 uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 * puVar6;
  uint * puVar7;
  uint * puVar8;
  undefined3 extraout_var = 0;
  uint uVar9;
  
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x1371274);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  uVar9 = *(uint *)((int)this_00 + 8) >> 0x1b;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(REFG(int, 0x1371288) + 100 + uVar9 * 4);
  uVar1 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe0);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(REFG(int, 0x1371288) + 0xe4);
  (*(uint *)(gen_frame + 0x10)) = *(undefined4 *)(REFG(int, 0x1371288) + 0xe8);
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfe100000 | 0x6100000;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x14)),uVar1,0,0);
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302e20);
  puVar6 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 3;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[1] = 6;
    puVar6[2] = (*(uint *)(gen_frame + 0x18));
    puVar6[3] = uVar1;
    F_004d4810(this_00,puVar6);
  }
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xffa00000 | 0x200000;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x10)),0,0);
  (*(uint *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302e20);
  puVar6 = (undefined4 *)F_004d4760(this_00,0x28);
  uVar1 = REFG(float, 0x1087f04);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 3;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[1] = 6;
    puVar6[2] = (*(uint *)(gen_frame + 0x10));
    puVar6[3] = uVar1;
    F_004d4810(this_00,puVar6);
  }
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xffb00000 | 0x300000;
  F_004daa40(this_00,1,&(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),0,0);
  uVar1 = REFG(undefined4, 0x1302e24);
  if (*(int *)((int)this + uVar9 * 4 + 0x14) == 0) {
    puVar6 = (undefined4 *)F_004d4760(this_00,0x28);
    uVar3 = REFG(float, 0x1087f04);
    uVar9 = 0;
    if (puVar6 == (undefined4 *)0x0) goto LAB_0063b6dc;
    *puVar6 = 3;
    puVar6[1] = 1;
    puVar6[2] = uVar1;
    puVar6[3] = uVar3;
    puVar6[4] = 0;
    puVar6[5] = 0;
  }
  else {
    uVar1 = *(undefined4 *)((int)this + 0xa0);
    *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
    dVar2 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    *(undefined4 *)((int)this_00 + 0x68) = uVar1;
    *(undefined1 *)((int)this_00 + 0x6c) = 0x18;
    *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
    uVar1 = *(undefined4 *)((int)this + 0x94);
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 0x40) = uVar1;
    uVar1 = *(undefined4 *)((int)this + 0x98);
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 0x44) = uVar1;
    *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0x9c);
    *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
    uVar4 = REFG(undefined4, 0x130236c);
    *(uint *)((int)this_00 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
    *(uint *)((int)this_00 + 0x5c) = uVar4 & 0xfffffffc;
    *(uint *)((int)this_00 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
    *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xa8) * 4 + 0xa8))) =
         *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0x90);
    *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xac) * 4 + 0xa8))) =
         *(undefined4 *)((*(uint *)(gen_frame + 0x0)) + 0x110);
    *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xb0) * 4 + 0xa8))) =
         *(undefined4 *)((int)this + 0xa4);
    *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xb4) * 8 + 0x2a8))) =
         *(undefined4 *)((int)this + uVar9 * 4 + 0x14);
    (*(uint *)(gen_frame + 0x18)) = (int)dVar2;
    (*(uint *)(gen_frame + 0x0)) = 0x1ff;
    puVar7 = &(*(uint *)(gen_frame + 0x18));
    if (0x1fe < (int)dVar2) {
      puVar7 = &(*(uint *)(gen_frame + 0x0));
    }
    (*(uint *)(gen_frame + 0x18)) = *puVar7;
    (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
    puVar8 = &(*(uint *)(gen_frame + 0x0));
    if (-0x201 < (int)*puVar7) {
      puVar8 = &(*(uint *)(gen_frame + 0x18));
    }
    *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0xb4) * 8 + 0x2ac))) =
         (*puVar8 & 0x3ff) << 10 | 0x255;
    puVar6 = (undefined4 *)F_004d4760(this_00,0x48);
    uVar9 = 0;
    if (puVar6 == (undefined4 *)0x0) goto LAB_0063b6dc;
    *puVar6 = 4;
    puVar6[1] = 5;
    puVar6[2] = 0;
    puVar6[3] = 3;
    bVar5 = F_004dc830(this_00,puVar6 + 4);
    uVar9 = CONCAT31(extraout_var,bVar5);
    if (bVar5 == 0) goto LAB_0063b6dc;
  }
  uVar9 = F_004d4810(this_00,puVar6);
LAB_0063b6dc: ;
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) | 0x7ffffff;
  return uVar9;
}

/* ref: FUN_0063b6f0 */
uint F_0063b6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x63b6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ac1b4));
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = 0;
  F_0066caa0((undefined *)((int)this + 0x70));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  return (uint)this;
}

/* ref: FUN_0063b730 */
byte F_0063b730(unsigned int gen_a0)
{
  GEN_ENTER(0x63b730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined * this_00;
  undefined4 * puVar7;
  int * piVar8;
  int * PTR32 * ppiVar9;
  int * PTR32 * ppiVar10;
  undefined4 * puVar11;
  
  iVar4 = REFG(int, 0x1370b90);
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  uVar6 = F_004dcd60(0x40,2,5);
  *(uint *)((int)this + 8) = uVar6;
  if (uVar6 != 0) {
    uVar6 = F_004dcd60(0x10,2,5);
    *(uint *)((int)this + 0x10) = uVar6;
    if (uVar6 != 0) {
      uVar6 = F_004dcd60(0x30,2,5);
      *(uint *)((int)this + 0x18) = uVar6;
      if (uVar6 != 0) {
        ((undefined4 *)(gen_frame + 0x8))[0] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x8))[0], REFG(float, 0x1087f04));
        ((undefined4 *)(gen_frame + 0x8))[1] = 0;
        ((undefined4 *)(gen_frame + 0x8))[2] = 0;
        ((undefined4 *)(gen_frame + 0x8))[3] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x8))[3], REFG(float, 0x1087f04));
        ((undefined4 *)(gen_frame + 0x8))[4] = 0;
        ((undefined4 *)(gen_frame + 0x8))[5] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x8))[5], REFG(float, 0x1087f04));
        ((undefined4 *)(gen_frame + 0x8))[6] = 0;
        ((undefined4 *)(gen_frame + 0x8))[7] = GEN_FLT_TO(((undefined4 *)(gen_frame + 0x8))[7], REFG(float, 0x1087f04));
        (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1087f04);
        (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x1087f04);
        (*(undefined4 *)(gen_frame + 0x30)) = 0;
        (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
        (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
        puVar11 = ((undefined4 *)(gen_frame + 0x8));
        (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)((int)this + 0x1c);
        while( true ) {
          this_00 = (undefined *)F_004dcd60(0x10,4,5);
          *(*(int * PTR32 *)(gen_frame + 0x4)) = (int)this_00;
          if (this_00 == (undefined *)0x0) break;
          puVar7 = (undefined4 *)F_004d9920(this_00,0,0,2);
          if (puVar7 == (undefined4 *)0x0) break;
          uVar1 = puVar11[1];
          *puVar7 = *puVar11;
          uVar2 = puVar11[2];
          puVar7[1] = uVar1;
          uVar1 = puVar11[3];
          puVar7[2] = uVar2;
          puVar7[3] = uVar1;
          piVar8 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x0)) + 1);
          puVar11 = puVar11 + 4;
          *(undefined4 *)(*(*(int * PTR32 *)(gen_frame + 0x4)) + 0x24) = 0;
          (*(int * PTR32 *)(gen_frame + 0x0)) = piVar8;
          (*(int * PTR32 *)(gen_frame + 0x4)) = (*(int * PTR32 *)(gen_frame + 0x4)) + 1;
          if ((int *)0x2 < piVar8) {
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_CommonParameter");
            *(uint *)((int)this + 4) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_ToneMapParameter");
            *(uint *)((int)this + 0xc) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_FogParameter");
            *(uint *)((int)this + 0x14) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_RoofParameter");
            *(uint *)((int)this + 0x28) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_CameraParameter");
            *(uint *)((int)this + 0x2c) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x1c),"g_MaterialParameter");
            *(uint *)((int)this + 0x30) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerGBuffer");
            *(uint *)((int)this + 0x34) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerLightDiffuse");
            *(uint *)((int)this + 0x38) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerLightSpecular");
            *(uint *)((int)this + 0x3c) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_ToneMapSampler");
            *(uint *)((int)this + 0x40) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SkySampler");
            *(uint *)((int)this + 0x44) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerDepth");
            *(uint *)((int)this + 0x48) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerDither");
            *(uint *)((int)this + 0x4c) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerFresnel");
            *(uint *)((int)this + 0x50) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerRefractionMap");
            *(uint *)((int)this + 0x54) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerHalfRefraction");
            *(uint *)((int)this + 0x58) = uVar6;
            uVar6 = F_004df8f0(*(undefined * PTR32 *)(iVar4 + 0x20),"g_SamplerHalfViewPosition");
            dVar3 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
            *(uint *)((int)this + 0x5c) = uVar6;
            piVar8 = (int *)(int)dVar3;
            (*(int * PTR32 *)(gen_frame + 0x4)) = piVar8;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x1ff;
            ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x4));
            if (0x1fe < (int)piVar8) {
              ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x0));
            }
            (*(int * PTR32 *)(gen_frame + 0x4)) = *ppiVar9;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0xfffffe00;
            ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x0));
            if (-0x201 < (int)*ppiVar9) {
              ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x4));
            }
            *(uint *)((int)this + 0x60) = ((uint)*ppiVar10 & 0x3ff) << 10 | 0xaa;
            (*(int * PTR32 *)(gen_frame + 0x4)) = piVar8;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x1ff;
            ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x4));
            if (0x1fe < (int)piVar8) {
              ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x0));
            }
            (*(int * PTR32 *)(gen_frame + 0x4)) = *ppiVar9;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0xfffffe00;
            ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x0));
            if (-0x201 < (int)*ppiVar9) {
              ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x4));
            }
            *(uint *)((int)this + 100) = ((uint)*ppiVar10 & 0x3ff) << 10 | 0x36a;
            (*(int * PTR32 *)(gen_frame + 0x4)) = piVar8;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x1ff;
            ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x4));
            if (0x1fe < (int)piVar8) {
              ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x0));
            }
            (*(int * PTR32 *)(gen_frame + 0x4)) = *ppiVar9;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0xfffffe00;
            ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x0));
            if (-0x201 < (int)*ppiVar9) {
              ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x4));
            }
            (*(int * PTR32 *)(gen_frame + 0x4)) = piVar8;
            *(uint *)((int)this + 0x68) = ((uint)*ppiVar10 & 0x3ff) << 10 | 0xa5;
            uVar2 = REFG(float, 0x1088068);
            uVar1 = REFG(float, 0x1087f04);
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x1ff;
            ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x4));
            if (0x1fe < (int)piVar8) {
              ppiVar9 = &(*(int * PTR32 *)(gen_frame + 0x0));
            }
            (*(int * PTR32 *)(gen_frame + 0x4)) = *ppiVar9;
            (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0xfffffe00;
            ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x0));
            if (-0x201 < (int)*ppiVar9) {
              ppiVar10 = &(*(int * PTR32 *)(gen_frame + 0x4));
            }
            *(uint *)((int)this + 0x6c) = ((uint)*ppiVar10 & 0x3ff) << 10 | 0x365;
            *(undefined4 *)((int)this + 0x270) = uVar2;
            *(undefined4 *)((int)this + 0x278) = REFG(float, 0x1094870);
            *(undefined4 *)((int)this + 0x27c) = REFG(float, 0x10a0da0);
            uVar2 = REFG(float, 0x1090998);
            *(undefined4 *)((int)this + 0x264) = uVar1;
            *(undefined4 *)((int)this + 0x268) = uVar1;
            *(undefined4 *)((int)this + 0x26c) = uVar1;
            *(undefined4 *)((int)this + 0x274) = uVar1;
            *(undefined4 *)((int)this + 0x280) = uVar2;
            *(undefined4 *)((int)this + 0x284) = uVar1;
            *(undefined2 *)((int)this + 0x288) = 0;
            bVar5 = F_00638880((undefined *)((int)this + 0x70));
            F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
            return bVar5 != 0;
          }
        }
        F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
        return 0;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_0063bb20 */
unsigned int F_0063bb20(unsigned int gen_a0)
{
  GEN_ENTER(0x63bb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  iVar2 = *((int *)GEN_TOP(((*(uint *)(iVar1 + 8) >> 0x1b) * 0x358 +
                  ((*(uint *)(iVar1 + 8) >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0x2c) * 4))) = *(undefined4 *)(iVar2 + 0x120);
  }
  *((undefined4 *)GEN_TOP((iVar1 + 0xa8 + *(int *)((int)this + 0x14) * 4))) = *(undefined4 *)((int)this + 0x18)
  ;
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x44) * 8))) = *(uint *)((int)this + 100) & 0xfffffff
  ;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x44) * 8))) =
       *(undefined4 *)(REFG(int, 0x137128c) + 0x14a8);
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x48) * 8))) =
       *(uint *)((int)this + 0x60) & 0xfffffff;
  *((undefined4 *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x48) * 8))) =
       *(undefined4 *)(REFG(int, 0x1371288) + 0x20);
  return 0;
}

/* ref: FUN_0063bbd0 */
uint F_0063bbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63bbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x4c) * 8))) = (*puVar3 & 0x3ff | 0x20000) << 10;
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x4c) * 8))) = param_1;
  return param_1;
}

/* ref: FUN_0063bc60 */
uint F_0063bc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63bc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint * puVar2;
  uint * puVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  (*(uint *)(gen_frame + 0x8)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x4)) = 0x1ff;
  puVar2 = &(*(uint *)(gen_frame + 0x8));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar2 = &(*(uint *)(gen_frame + 0x4));
  }
  (*(uint *)(gen_frame + 0x8)) = *puVar2;
  (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
  puVar3 = &(*(uint *)(gen_frame + 0x4));
  if (-0x201 < (int)*puVar2) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  *((uint *)GEN_TOP((iVar1 + 0x2ac + *(int *)((int)this + 0x50) * 8))) = (*puVar3 & 0x3ff) << 10 | 0x36a;
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *(int *)((int)this + 0x50) * 8))) = param_1;
  return param_1;
}

/* ref: FUN_0063bcf0 */
uint F_0063bcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x63bcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  undefined4 uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 uVar5;
  undefined4 local_8;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar1 + 0x1a8);
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfe43ffff | 0x643ffff;
  uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 1: ;
  case 2: ;
  case 3: ;
    local_8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x60);
    break;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
    local_8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x78);
    break;
  default: ;
    local_8 = 0;
    break;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
    local_8 = *(undefined4 *)(REFG(int, 0x1371288) + 100 + uVar3 * 4);
    break;
  case 0x1e: ;
    local_8 = *(undefined4 *)(REFG(int, 0x1371288) + 0x1c);
  }
  uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 0x90);
  puVar4 = (undefined4 *)F_004d4760(this_00,0x30);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 8;
    puVar4[1] = uVar5;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = local_8;
    puVar4[6] = 0;
    puVar4[7] = 0;
    F_004d4810(this_00,puVar4);
  }
  if (1 < *(byte *)((int)this + 0x289)) {
    uVar3 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
    switch((unsigned int)(uintptr_t)(uVar3)) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 3: ;
      uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 0x60);
      break;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
    case 8: ;
    case 9: ;
    case 10: ;
    case 0xb: ;
    case 0xc: ;
    case 0xd: ;
    case 0xe: ;
    case 0xf: ;
    case 0x10: ;
    case 0x11: ;
    case 0x12: ;
    case 0x13: ;
      uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 0x78);
      break;
    default: ;
      uVar5 = 0;
      break;
    case 0x1a: ;
    case 0x1b: ;
    case 0x1c: ;
    case 0x1d: ;
      uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 100 + uVar3 * 4);
      break;
    case 0x1e: ;
      uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 0x1c);
    }
    uVar2 = *(undefined4 *)(REFG(int, 0x1371288) + 0x94);
    puVar4 = (undefined4 *)F_004d4760(this_00,0x3c);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 9;
      puVar4[1] = uVar2;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = uVar5;
      puVar4[5] = 0;
      puVar4[6] = 0;
      F_004d4810(this_00,puVar4);
    }
    uVar5 = *(undefined4 *)(REFG(int, 0x1371288) + 0xc0);
    uVar2 = *(undefined4 *)(REFG(int, 0x1371288) + 0x40);
    puVar4 = (undefined4 *)F_004d4760(this_00,0x3c);
    this = (undefined *)0x0;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 9;
      puVar4[1] = uVar5;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = uVar2;
      puVar4[5] = 0;
      puVar4[6] = 0;
      this = (undefined *)F_004d4810(this_00,puVar4);
    }
  }
  return (uint)this;
}

/* ref: FUN_0063bef0 */
unsigned int F_0063bef0(unsigned int gen_a0)
{
  GEN_ENTER(0x63bef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abeb8));
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x28) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x34) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x40) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbac));
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  return 0;
}

/* ref: FUN_0063bf90 */
byte F_0063bf90(unsigned int gen_a0)
{
  GEN_ENTER(0x63bf90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  iVar1 = REFG(int, 0x1370b90);
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x1c),"g_LightDirection");
  *(uint *)((int)this + 4) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x1c),"g_WorldViewMatrix");
  *(uint *)((int)this + 8) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x1c),"g_JointMatrixArray");
  *(uint *)((int)this + 0xc) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x20),"g_SamplerNormal");
  *(uint *)((int)this + 0x10) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x20),"g_SamplerIndex");
  *(uint *)((int)this + 0x14) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)(iVar1 + 0x20),"g_SamplerTable");
  *(uint *)((int)this + 0x18) = uVar3;
  bVar2 = F_0066d640((undefined *)((int)this + 0x78),*(undefined4 *)(REFG(int, 0x1370b90) + 0x24));
  if (bVar2 == 0) {
    return 0;
  }
  uVar3 = F_004dcd60(0x10,1,0);
  *(uint *)((int)this + 0x74) = uVar3;
  return 1;
}

/* ref: FUN_0063c030 */
uint F_0063c030(unsigned int gen_a0)
{
  GEN_ENTER(0x63c030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x74);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x74) = 0;
  }
  uVar2 = F_0066d7d0((undefined *)((int)this + 0x78));
  return uVar2;
}

/* ref: FUN_0063c060 */
uint F_0063c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x63c060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  undefined * this;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined3 extraout_var = 0;
  undefined4 uVar7;
  
  iVar2 = REFG(int, 0x13759f8);
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this = *(undefined * PTR32 *)(iVar1 + 0x1a8);
  if ((*(uint *)((int)this + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP(((int)this + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8 + 0x2ac))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (uVar5 < 0x1a) {
LAB_0063c0d6: ;
    uVar7 = 0;
  }
  else if (uVar5 < 0x1e) {
    uVar7 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar5 != 0x1e) goto LAB_0063c0d6;
    uVar7 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
  }
  *((undefined4 *)GEN_TOP(((int)this + *(int *)(iVar2 + 0x34) * 8 + 0x2a8))) = uVar7;
  iVar3 = REFG(int, 0x13759f8);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  if ((*(uint *)(iVar2 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x38) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)(iVar3 + 0x3c) * 8))) = *(uint *)(iVar3 + 0x60) & 0xfffffff;
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (uVar5 < 0x1a) {
LAB_0063c15a: ;
    uVar7 = 0;
  }
  else if (uVar5 < 0x1e) {
    uVar7 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x28c) + 0xfc)));
  }
  else {
    if (uVar5 != 0x1e) goto LAB_0063c15a;
    uVar7 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)(iVar3 + 0x38) * 8))) = uVar7;
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar5) {
    if (uVar5 < 0x1e) {
      uVar7 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x28c) + 0xfc)));
      goto LAB_0063c19c;
    }
    if (uVar5 == 0x1e) {
      uVar7 = *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
      goto LAB_0063c19c;
    }
  }
  uVar7 = 0;
LAB_0063c19c: ;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)(iVar3 + 0x3c) * 8))) = uVar7;
  uVar5 = *(uint *)((int)this + 8);
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xff900000 | uVar5 & 0xffff | 0x100000;
  *(uint *)((int)this + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  *(uint *)((int)this + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
  *(undefined4 *)((int)this + 0x5c) = 0xffff8040;
  *(undefined4 *)((int)this + 0x58) = 0x1e000000;
  puVar6 = (undefined4 *)F_004d4760(this,0x54);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 5;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = param_2;
    puVar6[5] = param_3;
    puVar6[1] = 5;
    puVar6[6] = param_4;
    bVar4 = F_004dc830(this,puVar6 + 7);
    if (bVar4 != 0) {
      F_004d4810(this,puVar6);
    }
  }
  *(uint *)((int)this + 8) =
       *(uint *)((int)this + 8) ^ (*(uint *)((int)this + 8) ^ uVar5 & 0x7ffff) & 0x7ffff;
  uVar5 = (param_5 << 0x17 ^ REFG(undefined4, 0x1302350)) & 0x7800000 ^ REFG(undefined4, 0x1302350);
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xffb7ffff | 0x300000;
  *(uint *)((int)this + 0x38) = uVar5 & 0x7ffffff;
  *(uint *)((int)this + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
  uVar5 = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)((int)this + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)((int)this + 0x58) = uVar5;
  puVar6 = (undefined4 *)F_004d4760(this,0x54);
  uVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 5;
    puVar6[4] = param_2;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[6] = param_4;
    puVar6[1] = 5;
    puVar6[5] = param_3;
    bVar4 = F_004dc830(this,puVar6 + 7);
    uVar5 = CONCAT31(extraout_var,bVar4);
    if (bVar4 != 0) {
      uVar5 = F_004d4810(this,puVar6);
    }
  }
  return uVar5;
}

/* ref: FUN_0063c310 */
uint F_0063c310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x63c310u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  uint * puVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint uVar8;
  undefined3 extraout_var = 0;
  undefined4 uVar9;
  
  iVar3 = REFG(int, 0x13759f8);
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this = *(undefined * PTR32 *)(iVar2 + 0x1a8);
  if ((*(uint *)((int)this + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP(((int)this + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8 + 0x2ac))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
  }
  uVar6 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 8))) >> 0x1b;
  if (uVar6 < 0x1a) {
LAB_0063c38a: ;
    uVar9 = 0;
  }
  else if (uVar6 < 0x1e) {
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0xe4);
  }
  else {
    if (uVar6 != 0x1e) goto LAB_0063c38a;
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x24);
  }
  *((undefined4 *)GEN_TOP(((int)this + *(int *)(iVar3 + 0x34) * 8 + 0x2a8))) = uVar9;
  iVar4 = REFG(int, 0x13759f8);
  iVar3 = *(int *)(iVar2 + 0x1a8);
  if ((*(uint *)(iVar3 + 8) & 0xf8000000) == 0xf0000000) {
    puVar1 = (uint *)(REFG(int, 0x13759f8) + 100);
    *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x38) * 8))) = *puVar1 & 0xfffffff;
    *((uint *)GEN_TOP((iVar3 + 0x2ac + *(int *)(iVar4 + 0x3c) * 8))) = *puVar1 & 0xfffffff;
  }
  uVar6 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 8))) >> 0x1b;
  if (uVar6 < 0x1a) {
LAB_0063c414: ;
    uVar9 = 0;
  }
  else if (uVar6 < 0x1e) {
    uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x28c) + 0xfc)));
  }
  else {
    if (uVar6 != 0x1e) goto LAB_0063c414;
    uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x28);
  }
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)(iVar4 + 0x38) * 8))) = uVar9;
  uVar6 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar6) {
    if (uVar6 < 0x1e) {
      uVar9 = *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x28c) + 0xfc)));
      goto LAB_0063c456;
    }
    if (uVar6 == 0x1e) {
      uVar9 = *(undefined4 *)(REFG(int, 0x1371288) + 0x2c);
      goto LAB_0063c456;
    }
  }
  uVar9 = 0;
LAB_0063c456: ;
  *((undefined4 *)GEN_TOP((iVar3 + 0x2a8 + *(int *)(iVar4 + 0x3c) * 8))) = uVar9;
  uVar6 = *(uint *)((int)this + 8);
  *(uint *)((int)this + 8) = *(uint *)(param_1 + 0x10) & 0x7ffff | uVar6 & 0xffa00000 | 0x200000;
  *(uint *)((int)this + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  *(uint *)((int)this + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
  *(undefined4 *)((int)this + 0x5c) = 0xffff8040;
  *(undefined4 *)((int)this + 0x58) = 0x1e000000;
  puVar7 = (undefined4 *)F_004d4760(this,0x54);
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 5;
    puVar7[4] = param_2;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[1] = 5;
    puVar7[5] = param_3;
    puVar7[6] = param_4;
    bVar5 = F_004dc830(this,puVar7 + 7);
    if (bVar5 != 0) {
      F_004d4810(this,puVar7);
    }
  }
  uVar8 = (param_5 << 0x17 ^ REFG(undefined4, 0x1302354)) & 0x7800000 ^ REFG(undefined4, 0x1302354);
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xffd7ffff | 0x500000;
  *(uint *)((int)this + 0x38) = uVar8 & 0x7ffffff;
  *(uint *)((int)this + 0x50) = REFG(undefined4, 0x1302364) & 0x1f;
  uVar8 = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)((int)this + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)((int)this + 0x5c) = uVar8;
  puVar7 = (undefined4 *)F_004d4760(this,0x54);
  uVar8 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 5;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = param_2;
    puVar7[5] = param_3;
    puVar7[1] = 5;
    puVar7[6] = param_4;
    bVar5 = F_004dc830(this,puVar7 + 7);
    uVar8 = CONCAT31(extraout_var,bVar5);
    if (bVar5 != 0) {
      uVar8 = F_004d4810(this,puVar7);
    }
  }
  *(uint *)((int)this + 8) =
       *(uint *)((int)this + 8) ^ (*(uint *)((int)this + 8) ^ uVar6 & 0x7ffff) & 0x7ffff;
  return uVar8;
}

/* ref: FUN_0063c5d0 */
uint F_0063c5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63c5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  byte bVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *(uint *)((int)this + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  *(uint *)((int)this + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) & 0xff8fffff | 0x80000;
  puVar2 = (undefined4 *)F_004d4760(this,0x54);
  uVar3 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 5;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = param_1;
    puVar2[5] = param_2;
    puVar2[1] = 5;
    puVar2[6] = param_3;
    bVar1 = F_004dc830(this,puVar2 + 7);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this,puVar2);
    }
  }
  return uVar3;
}

/* ref: FUN_0063c670 */
unsigned int F_0063c670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x63c670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  byte bVar1;
  ushort * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar5 = *(uint *)((int)this_00 + 8) >> 0x1b;
  if (((*(int *)(REFG(int, 0x1371280) + 0x78 + uVar5 * 4) != 0) &&
      ((*((byte *)GEN_TOP((*(int *)(REFG(int, 0x1371280) + 0x78 + uVar5 * 4) + 8))) >> 2 & 1) != 0)) &&
     ((*(uint *)(REFG(int, 0x1371280) + 0x6c) & 1 << (byte)(*(uint *)((int)this_00 + 8) >> 0x1b)) != 0)) {
    *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
    *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x1302360) & 0x1f;
    *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xff8fffff | 0x80000;
    puVar2 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x8)) + 2,(float)(float10)0);
    (*(uint *)(gen_frame + 0x8)) = (uint)*puVar2 << 5 | *(uint *)((int)this_00 + 0x3c) & 0xffe0001f;
    F_004d4680(&(*(uint *)(gen_frame + 0x8)),REFG(float, 0x1094870));
    *(uint *)((int)this_00 + 0x3c) = (*(uint *)(gen_frame + 0x8)) & 0x7fffffff;
    (*(uint *)(gen_frame + 0x8)) = 5;
    (*(uint *)(gen_frame + 0x4)) = 10;
    do {
      if ((param_1 & 3 << ((byte)(*(uint *)(gen_frame + 0x4)) & 0x1f)) != 0) {
        *(uint *)((int)this_00 + 8) =
             *(uint *)((int)this_00 + 8) ^
             ((*(uint *)(gen_frame + 0x8)) << 0x17 ^ *(uint *)((int)this_00 + 8)) & 0x7800000;
        F_0066cca0();
        if (*(undefined * PTR32 *)(param_5 + 4) == (undefined *)0x0) {
          uVar3 = 0;
        }
        else {
          *(undefined4 *)(param_5 + 0x10) = *(undefined4 *)((int)this + 0x68);
          *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)((int)this + 0x6c);
          uVar3 = F_00b52db0(*(undefined * PTR32 *)(param_5 + 4),param_5);
        }
        *(uint *)((int)this_00 + 0x60) = uVar3;
        *(uint *)((int)this_00 + 8) =
             *(uint *)((int)this_00 + 8) & 0x7ffffff | (uVar5 + 0x14) * 0x8000000;
        puVar4 = (undefined4 *)F_004d4760(this_00,0x54);
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = 5;
          puVar4[4] = param_2;
          puVar4[2] = 0;
          puVar4[3] = 0;
          puVar4[6] = param_4;
          puVar4[1] = 5;
          puVar4[5] = param_3;
          bVar1 = F_004dc830(this_00,puVar4 + 7);
          if (bVar1 != 0) {
            F_004d4810(this_00,puVar4);
          }
        }
        *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0x7ffffff | uVar5 << 0x1b;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
      (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 2;
    } while ((*(uint *)(gen_frame + 0x4)) < 0x11);
    *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302350) & 0x7ffffff;
  }
  return 0;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf4 */
uint F_0063c840(unsigned int gen_a0)
{
  GEN_ENTER(0x63c840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xad10) + 0x10))))(REFG(int, 0x137127c) + 0xad10,this);
  uVar1 = 0;
  if (*(int *)(this + 0xc) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  return uVar1;
}

/* ref: FUN_0063c880 */
unsigned int F_0063c880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x63c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 * puVar9;
  uint uVar10;
  int * local_c;
  
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  local_c = ((int *)GEN_TOP(((*(uint *)(iVar2 + 8) >> 0x1b) * 0x358 + 0x34 + REFG(int, 0x137127c))));
  puVar9 = (undefined4 *)((int)this + 0xd0);
  uVar10 = 0;
  do {
    uVar3 = (&REFG(undefined4, 0x10ac1b8))[uVar10];
    if ((param_1 & uVar3) != 0) {
      *(uint *)(iVar2 + 8) =
           *(uint *)(iVar2 + 8) ^ (uVar10 << 0x17 ^ *(uint *)(iVar2 + 8)) & 0x7800000;
      iVar4 = *local_c;
      iVar5 = *(int *)(iVar1 + 0x1a8);
      uVar6 = *(uint *)(iVar5 + 8);
      iVar7 = *((int *)GEN_TOP(((uVar6 >> 0x1b) * 0x358 + ((uVar6 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
      if (iVar7 != 0) {
        *((undefined4 *)GEN_TOP((iVar5 + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x2c) * 4))) =
             *(undefined4 *)(iVar7 + 0x120);
      }
      *((undefined4 *)GEN_TOP((iVar2 + 0xa8 + *(int *)((int)this + 0x88) * 4))) = puVar9[-0x10];
      *((undefined4 *)GEN_TOP((iVar2 + 0xa8 + *(int *)((int)this + 0x8c) * 4))) = *puVar9;
      uVar8 = puVar9[0x12];
      *(uint *)(param_2 + 0xc) = uVar3;
      *(int *)(param_2 + 0x18) = iVar4;
      *(undefined4 *)(param_2 + 0x14) = uVar8;
      *(uint *)(param_2 + 0x10) = uVar10;
      F_0061fe90(param_3,*(undefined4 *)(param_2 + 8),param_4,iVar4 + 0x10);
      (*((code *)GEN_TOP((&REFG(undefined4, 0x137fa10))[uVar10])))(this,param_2,param_3);
    }
    local_c = local_c + 0xd;
    uVar10 = uVar10 + 1;
    puVar9 = puVar9 + 1;
  } while (uVar10 < 0x10);
  return 0;
}

/* ref: FUN_0063c9d0 */
uint F_0063c9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63c9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int iVar3;
  uint * puVar4;
  uint uVar5;
  undefined4 uVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  F_00627260((undefined *)(REFG(int, 0x13759f8) + 0x70));
  *(uint *)(iVar2 + 0x3c) = REFG(undefined4, 0x1302370) & 0x7fffffff;
  if (*(char *)((int)this + 0x271) != '\0') {
    puVar4 = (uint *)F_004d4a30(&(*(undefined * PTR32 *)(gen_frame + 0x8)),2,1,0,0,(float)(float10)0,(float)(float10)0);
    *(uint *)(iVar2 + 0x3c) = *puVar4 & 0x7fffffff;
  }
  iVar3 = REFG(int, 0x13759f8);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  if ((*(uint *)(iVar2 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x34) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 0x60) & 0xfffffff;
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (uVar5 < 0x1a) {
LAB_0063ca99: ;
    uVar6 = 0;
  }
  else if (uVar5 < 0x1e) {
    uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0xdc);
  }
  else {
    if (uVar5 != 0x1e) goto LAB_0063ca99;
    uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0x10);
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)(iVar3 + 0x34) * 8))) = uVar6;
  iVar3 = REFG(int, 0x13759f8);
  iVar2 = *(int *)(iVar1 + 0x1a8);
  if ((*(uint *)(iVar2 + 8) & 0xf8000000) == 0xf0000000) {
    *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)(REFG(int, 0x13759f8) + 0x38) * 8))) =
         *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
    *((uint *)GEN_TOP((iVar2 + 0x2ac + *(int *)(iVar3 + 0x3c) * 8))) = *(uint *)(iVar3 + 0x60) & 0xfffffff;
  }
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (uVar5 < 0x1a) {
LAB_0063cb1c: ;
    uVar6 = 0;
  }
  else if (uVar5 < 0x1e) {
    uVar6 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x28c) + 0xfc)));
  }
  else {
    if (uVar5 != 0x1e) goto LAB_0063cb1c;
    uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0x14);
  }
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)(iVar3 + 0x38) * 8))) = uVar6;
  uVar5 = *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 8))) >> 0x1b;
  if (0x19 < uVar5) {
    if (uVar5 < 0x1e) {
      uVar6 = *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x28c) + 0xfc)));
      goto LAB_0063cb5e;
    }
    if (uVar5 == 0x1e) {
      uVar6 = *(undefined4 *)(REFG(int, 0x1371288) + 0x18);
      goto LAB_0063cb5e;
    }
  }
  uVar6 = 0;
LAB_0063cb5e: ;
  *((undefined4 *)GEN_TOP((iVar2 + 0x2a8 + *(int *)(iVar3 + 0x3c) * 8))) = uVar6;
  *(undefined2 *)(param_1 + 7) = 0x100;
  param_1[8] = 2;
  param_1[10] = 2;
  param_1[0xb] = REFG(undefined4, 0x1302360) & 0x1f;
  uVar5 = REFG(undefined4, 0x1302368);
  param_1[0xd] = REFG(undefined4, 0x130236c) & 0xfffffffc;
  param_1[0xc] = uVar5 & 0xfe000000;
  param_1[0xe] = REFG(undefined4, 0x1302350) & 0x7ffffff;
  param_1[0x10] = 6;
  param_1[0x11] = 0xd;
  uVar5 = REFG(undefined4, 0x130236c);
  param_1[0x12] = REFG(undefined4, 0x1302368) & 0xfe000000;
  param_1[0x13] = uVar5 & 0xfffffffc;
  param_1[0x14] = REFG(undefined4, 0x1302350) & 0x7ffffff;
  param_1[0x16] = 1;
  param_1[0x17] = REFG(undefined4, 0x1302360) & 0x1f;
  uVar5 = REFG(undefined4, 0x130236c);
  param_1[0x18] = REFG(undefined4, 0x1302368) & 0xfe000000;
  param_1[0x19] = uVar5 & 0xfffffffc;
  param_1[0x1a] = REFG(undefined4, 0x1302358) & 0x7ffffff;
  if (*(char *)(*param_1 + 0x28) != '\0') {
    param_1[8] = param_1[8] + 1;
  }
  iVar2 = param_1[8];
  param_1[iVar2 * 6 + 10] = 3;
  param_1[iVar2 * 6 + 0xb] = 0xd;
  uVar5 = REFG(undefined4, 0x130236c);
  iVar1 = iVar2 * 3 + 6;
  param_1[iVar1 * 2] = REFG(undefined4, 0x1302368) & 0xfe000000;
  param_1[iVar1 * 2 + 1] = uVar5 & 0xfffffffc;
  param_1[iVar2 * 6 + 0xe] = 0x7a88286;
  *(byte *)((int)param_1 + 0x1d) = *(byte *)((int)param_1 + 0x1d) & *(byte *)((int)this + 0x270);
  uVar5 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 7) * 4))(this,param_1,param_2);
  return uVar5;
}

/* ref: FUN_0063cca0 */
uint F_0063cca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63cca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  int iVar2;
  int iVar3;
  ushort * puVar4;
  uint * puVar5;
  uint * puVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc);
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  iVar7 = *(int *)(iVar2 + 0x1a8);
  puVar4 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x4)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x4)) = (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x0)) = 0x1ff;
  puVar5 = &(*(uint *)(gen_frame + 0x4));
  if (0x1fe < (int)(*(double *)&REFG(undefined, 0x10968a0) * 0.0)) {
    puVar5 = &(*(uint *)(gen_frame + 0x0));
  }
  (*(uint *)(gen_frame + 0x4)) = *puVar5;
  (*(uint *)(gen_frame + 0x0)) = 0xfffffe00;
  puVar6 = &(*(uint *)(gen_frame + 0x0));
  if (-0x201 < (int)*puVar5) {
    puVar6 = &(*(uint *)(gen_frame + 0x4));
  }
  *(uint *)(iVar7 + 0x3c) = (*puVar6 & 0x3ff) << 0x15 ^ ((uint)*puVar4 << 5 | 0xb);
  iVar7 = *(int *)(param_1 + 4);
  sVar1 = *((short *)GEN_TOP((*(int *)(iVar7 + 0xb8) + -0x2a +
                    (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1e +
                                   *(int *)(iVar7 + 0xa8)))) * 0x3c)));
  iVar3 = *(int *)(iVar7 + 0xa8);
  uVar8 = CONCAT31((int3)((uint)iVar3 >> 8),*((undefined1 *)GEN_TOP((*(int *)(iVar3 + 4) + 0x1f + iVar3)))) &
          0xffffff80;
  bVar9 = (char)uVar8 == -0x80;
  uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar9);
  if (((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1f + *(int *)(iVar7 + 0xa8)))) & 0x20) ==
       0x20) ||
     ((*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar7 + 0xa8) + 4))) + 0x1f + *(int *)(iVar7 + 0xa8)))) & 0x40) ==
      0x40)) {
    if (bVar9) {
      iVar7 = 2;
    }
    else {
      iVar7 = 0;
    }
  }
  else {
    if (!bVar9) goto LAB_0063ce43;
    iVar7 = 1;
  }
  *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x28) * 4))) =
       *(undefined4 *)(REFG(int, 0x13759f8) + 0x1c + iVar7 * 4);
  *(bool *)(param_1 + 0x1c) = sVar1 != 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)(param_1 + 0x28) = 1;
  *(uint *)(param_1 + 0x2c) = REFG(undefined4, 0x130235c) & 0x1f;
  uVar8 = REFG(undefined4, 0x1302368) & 0xfe000000;
  *(uint *)(param_1 + 0x34) = REFG(undefined4, 0x130236c) & 0xfffffffc;
  *(uint *)(param_1 + 0x30) = uVar8;
  *(undefined4 *)(param_1 + 0x38) = 0x788b117;
  uVar8 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(this,param_1,param_2);
LAB_0063ce43: ;
  F_00c47745((*(uint *)(gen_frame + 0x8)) ^ (uint)(uint)(gen_frame + 0xc));
  return uVar8;
}

/* ref: FUN_0063ce60 */
uint F_0063ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  sVar1 = *((short *)GEN_TOP((*(int *)(iVar2 + 0xb8) + -0x2a +
                    (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar2 + 0xa8) + 4))) + 0x1e +
                                   *(int *)(iVar2 + 0xa8)))) * 0x3c)));
  uVar7 = *(uint *)(iVar3 + 8) >> 0x1b;
  uVar4 = param_1;
  if (((uVar7 < 0x14) && (*(int *)(REFG(int, 0x1371280) + 0x78 + uVar7 * 4) != 0)) &&
     (bVar5 = (byte)*((undefined2 *)GEN_TOP((*(int *)(REFG(int, 0x1371280) + 0x78 + uVar7 * 4) + 8))),
     (bVar5 >> 3 & 1) != 0)) {
    if (((uVar7 < 4) && (*(char *)(iVar2 + 299) != '\0')) && ((bVar5 >> 2 & 1) != 0)) {
      uVar4 = uVar7 + 0x14;
    }
    else {
      uVar4 = uVar7;
      if ((*(uint *)(REFG(int, 0x1371280) + 0x68) & 1 << (byte)(*(uint *)(iVar3 + 8) >> 0x1b)) == 0) {
        return param_1;
      }
    }
    *(uint *)(iVar3 + 0x3c) = REFG(undefined4, 0x1302374) & 0x7fffffff;
    *(bool *)(param_1 + 0x1c) = sVar1 != 0;
    *(undefined1 *)(param_1 + 0x1d) = 0;
    *(undefined4 *)(param_1 + 0x20) = 1;
    *(uint *)(param_1 + 0x28) = (3 < uVar7) + 1;
    *(uint *)(param_1 + 0x2c) = REFG(undefined4, 0x1302360) & 0x1f;
    uVar6 = REFG(undefined4, 0x130236c) & 0xfffffffc;
    *(uint *)(param_1 + 0x30) = REFG(undefined4, 0x1302368) & 0xfe000000;
    *(uint *)(param_1 + 0x34) = uVar6;
    *(uint *)(param_1 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
    if (uVar4 != uVar7) {
      *(uint *)(iVar3 + 8) = *(uint *)(iVar3 + 8) & 0x7ffffff | uVar4 << 0x1b;
      ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(this,param_1,param_2);
      uVar4 = *(uint *)(iVar3 + 8) & 0x7ffffff | uVar7 << 0x1b;
      *(uint *)(iVar3 + 8) = uVar4;
      return uVar4;
    }
    uVar4 = ((code *)*(gen_code32 *)(&REFG(undefined, 0x137fa50) + (uint)*(byte *)(param_1 + 0x1c) * 4))(this,param_1,param_2)
    ;
  }
  return uVar4;
}

/* ref: FUN_0063cff0 */
uint F_0063cff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x63cff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8))) + 8)))
          >> 0x17 & 0xf;
  if (uVar1 < 4) {
    uVar1 = F_0062e0b0(param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar1 - 5 < 4) {
    uVar1 = F_0062e150(param_1,param_2,param_3);
    return uVar1;
  }
  if (uVar1 != 4) {
    uVar1 = F_0062e000(param_1,param_2,param_3);
    return uVar1;
  }
  return 4;
}

/* ref: FUN_0063d040 */
byte F_0063d040(unsigned int gen_a0)
{
  GEN_ENTER(0x63d040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  char * pcVar6;
  undefined4 * puVar7;
  uint uVar8;
  int * piVar9;
  int iVar10;
  uint * puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  pvVar4 = REFG(void * PTR32, 0x1370b90);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = REFG(void * PTR32, 0x1370b90);
  uVar3 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_EadgBias");
  *(uint *)((int)this + 0x44) = uVar3;
  uVar3 = F_004dcd60(0x10,1,0);
  *(uint *)((int)this + 0x48) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar4 + 0x1c),"g_BGAmbientParameter");
  *(uint *)((int)this + 0xcc) = uVar3;
  uVar3 = F_004dcd60(0x10,2,0);
  *(uint *)((int)this + 0xd0) = uVar3;
  uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar4 + 0x1c),"g_DirectionalLightParam");
  *(uint *)((int)this + 0x1e4) = uVar3;
  puVar11 = (uint *)((int)this + 0xd4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x10;
  do {
    uVar3 = F_004dcd60(0x30,2,0);
    *puVar11 = uVar3;
    puVar11 = puVar11 + 1;
    iVar10 = (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + -1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)iVar10;
  } while (iVar10 != 0);
  if ((*(uint *)&REFG(undefined, 0x1488080) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x1488080) = *(uint *)&REFG(undefined, 0x1488080) | 1;
    REFG(float, 0x1487e80) = 0;
    REFG(float, 0x1487e84) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e88) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e8c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e90) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e94) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e98) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487e9c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ea0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ea4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ea8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487eac) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487eb0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487eb4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487eb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ebc) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487ec0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ec4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ec8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487ecc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ed0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ed4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ed8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487edc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ee0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ee4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ee8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487eec) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ef0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ef4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ef8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487efc) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487f00) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f04) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f08) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f0c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f10) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f14) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f18) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f1c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f20) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f24) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f28) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f2c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f30) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f34) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f38) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f3c) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487f40) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f44) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f48) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f4c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f50) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f54) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f58) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f5c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f60) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f64) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f68) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f6c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f70) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f74) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487f78) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f7c) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487f80) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487f84) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f88) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f8c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f90) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f94) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f98) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487f9c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fa0) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487fa4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fa8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fac) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fb0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fb4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fb8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fbc) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487fc0) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487fc4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fc8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487fcc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fd0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fd4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fd8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fdc) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fe0) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1487fe4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487fe8) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1487fec) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ff0) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ff4) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ff8) = 0;
    *(undefined4 *)&REFG(undefined, 0x1487ffc) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488000) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488004) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488008) = 0;
    *(undefined4 *)&REFG(undefined, 0x148800c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488010) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488014) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1488018) = 0;
    *(undefined4 *)&REFG(undefined, 0x148801c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488020) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488024) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488028) = 0;
    *(undefined4 *)&REFG(undefined, 0x148802c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488030) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488034) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1488038) = 0;
    *(undefined4 *)&REFG(undefined, 0x148803c) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488040) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488044) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488048) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x148804c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488050) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488054) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1488058) = 0;
    *(undefined4 *)&REFG(undefined, 0x148805c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488060) = REFG(float, 0x1090708);
    *(undefined4 *)&REFG(undefined, 0x1488064) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488068) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x148806c) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488070) = 0;
    *(undefined4 *)&REFG(undefined, 0x1488074) = REFG(float, 0x1087f04);
    *(undefined4 *)&REFG(undefined, 0x1488078) = 0;
    *(undefined4 *)&REFG(undefined, 0x148807c) = REFG(float, 0x1090708);
  }
  piVar9 = (int *)((int)this + 0x50);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &REFG(float, 0x1487e80);
  (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
  (*(char * PTR32 *)(gen_frame + 0xc)) = (char *)0x0;
  do {
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
    uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)pvVar4 + 0x1c),"g_PlateEadg");
    piVar9[-1] = uVar3;
    pvVar4 = (undefined *)F_004dcd60(0x20,4,0);
    *piVar9 = (int)pvVar4;
    puVar5 = (undefined4 *)F_004d9920(pvVar4,0,0x20,2);
    puVar7 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 8;
    for (iVar10 = 8; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar5 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar5 = puVar5 + 1;
    }
    *(undefined4 *)(*(*(int * PTR32 *)(gen_frame + 0x14)) + 0x24) = 0;
    pcVar6 = (*(char * PTR32 *)(gen_frame + 0xc)) + 0x20;
    piVar9 = (*(int * PTR32 *)(gen_frame + 0x14)) + 2;
    (*(char * PTR32 *)(gen_frame + 0xc)) = pcVar6;
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar9;
    pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x4));
  } while (pcVar6 < (char *)0x200);
  puVar11 = (uint *)((int)this + 0x158);
  uVar3 = 0;
  do {
    (*(char * PTR32 *)(gen_frame + 0xc)) = *((char * PTR32 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x13221cc) + uVar3)));
    puVar7 = (undefined4 *)F_00b52710("GetLocalPosition",0x10,0);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar7;
    pcVar6 = (*(char * PTR32 *)(gen_frame + 0xc));
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar8 = F_00b52710((*(char * PTR32 *)(gen_frame + 0xc)),(int)pcVar6 - (int)((*(char * PTR32 *)(gen_frame + 0xc)) + 1),0);
    puVar11[-1] = (uint)(*(undefined4 * PTR32 *)(gen_frame + 0x10));
    *puVar11 = uVar8;
    uVar3 = uVar3 + 4;
    puVar11 = puVar11 + 3;
  } while (uVar3 < 8);
  uVar3 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x118) = uVar3;
  uVar3 = F_00b52710("SUB_VIEW_MAIN",0xd,0);
  *(uint *)((int)this + 0x11c) = uVar3;
  uVar3 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x124) = uVar3;
  uVar3 = F_00b52710("SUB_VIEW_OCCLUSION",0x12,0);
  *(uint *)((int)this + 0x128) = uVar3;
  uVar3 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x130) = uVar3;
  uVar3 = F_00b52710("SUB_VIEW_SHADOW_0",0x11,0);
  *(uint *)((int)this + 0x134) = uVar3;
  uVar3 = F_00b52710("Default",7,0);
  *(uint *)((int)this + 0x13c) = uVar3;
  uVar3 = F_00b52710("SUB_VIEW_CUBE_0",0xf,0);
  *(uint *)((int)this + 0x140) = uVar3;
  uVar3 = F_00b52710("GetInstanceData",0xf,0);
  uVar8 = F_00b52710("GeometryInstancingOff",0x15,0);
  *(uint *)((int)this + 0x148) = uVar3;
  *(uint *)((int)this + 0x14c) = uVar8;
  uVar3 = F_00b52710("GetNormalMap",0xc,0);
  uVar8 = F_00b52710("GetNormalMapOff",0xf,0);
  *(uint *)((int)this + 0x16c) = uVar3;
  *(uint *)((int)this + 0x170) = uVar8;
  uVar3 = F_00b52710("GetNormalMap",0xc,0);
  uVar8 = F_00b52710("GetNormalMapOn",0xe,0);
  *(uint *)((int)this + 0x178) = uVar3;
  *(uint *)((int)this + 0x17c) = uVar8;
  uVar3 = F_00b52710("Forward",7,0);
  uVar8 = F_00b52710("ForwardOff",10,0);
  *(uint *)((int)this + 0x184) = uVar3;
  *(uint *)((int)this + 0x188) = uVar8;
  uVar3 = F_00b52710("Forward",7,0);
  uVar8 = F_00b52710("ForwardOn",9,0);
  *(uint *)((int)this + 400) = uVar3;
  *(uint *)((int)this + 0x194) = uVar8;
  uVar3 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar8 = F_00b52710("ApplyDitherClipOff",0x12,0);
  *(uint *)((int)this + 0x19c) = uVar3;
  *(uint *)((int)this + 0x1a0) = uVar8;
  uVar3 = F_00b52710("ApplyDitherClip",0xf,0);
  uVar8 = F_00b52710("ApplyDitherClipOn",0x11,0);
  *(uint *)((int)this + 0x1a8) = uVar3;
  *(uint *)((int)this + 0x1ac) = uVar8;
  uVar3 = F_00b52710("Lighting",8,0);
  uVar8 = F_00b52710("LightingNormal",0xe,0);
  *(uint *)((int)this + 0x1b4) = uVar3;
  *(uint *)((int)this + 0x1b8) = uVar8;
  uVar3 = F_00b52710("Lighting",8,0);
  uVar8 = F_00b52710("LightingLow",0xb,0);
  *(uint *)((int)this + 0x1c0) = uVar3;
  *(uint *)((int)this + 0x1c4) = uVar8;
  uVar3 = F_00b52710("GetMultiDebugColor",0x12,0);
  uVar8 = F_00b52710("GetMultiDebugColorOff",0x15,0);
  *(uint *)((int)this + 0x1cc) = uVar3;
  *(uint *)((int)this + 0x1d0) = uVar8;
  uVar3 = F_00b52710("GetMultiDebugColor",0x12,0);
  uVar8 = F_00b52710("GetMultiDebugColorOn",0x14,0);
  *(uint *)((int)this + 0x1d8) = uVar3;
  *(uint *)((int)this + 0x1dc) = uVar8;
  F_00c48350((undefined *)((int)this + 0x1fc),0,0x1000);
  F_004ff310(((undefined1 *)(gen_frame + 0x0)),0,0);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x746578;
  uVar3 = F_00513d70(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x8)),"common/graphics/texture/-dither.tex",0,0,0);
  *(uint *)((int)this + 0x1ec) = uVar3;
  if (uVar3 != 0) {
    piVar9 = (int *)(uVar3 + 0x8c);
    LOCK();
    iVar10 = *piVar9;
    *piVar9 = *piVar9;
    UNLOCK();
    if (iVar10 < 8) {
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0;
      pcVar6 = "common/graphics/texture/-fresnel.tex";
      puVar7 = &(*(undefined4 *)(gen_frame + 0x8));
      uVar3 = F_004ff310(&(*(char * PTR32 *)(gen_frame + 0xc)),0,0);
      uVar3 = F_00513d70(uVar3,puVar7,pcVar6,uVar12,uVar13,uVar14);
      *(uint *)((int)this + 0x1e8) = uVar3;
      if (uVar3 != 0) {
        piVar9 = (int *)(uVar3 + 0x8c);
        LOCK();
        iVar10 = *piVar9;
        *piVar9 = *piVar9;
        UNLOCK();
        if ((iVar10 < 8) &&
           (bVar2 = F_0066dc30((undefined *)((int)this + 0x31fc),
                                 *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x24)))), bVar2 != 0)) {
          puVar11 = (uint *)((int)this + 0x3208);
          LOCK();
          uVar3 = *puVar11;
          *puVar11 = *puVar11 + 1;
          UNLOCK();
          if (uVar3 < *(uint *)((int)this + 0x3204)) {
            iVar10 = *(int *)((int)this + 0x3200) + uVar3 * 0x14;
          }
          else {
            iVar10 = 0;
          }
          *(int *)((int)this + 0x3264) = iVar10;
          if (iVar10 != 0) {
            uVar3 = 0;
            puVar11 = (uint *)((int)this + 0x3268);
            while( true ) {
              uVar8 = F_004dcd60(0x60,2,0);
              *puVar11 = uVar8;
              if (uVar8 == 0) break;
              uVar3 = uVar3 + 1;
              puVar11 = puVar11 + 1;
              if (0x1ff < uVar3) {
                uVar3 = F_004df8f0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x1c),"g_InstanceData");
                *(uint *)((int)this + 0x1e0) = uVar3;
                iVar10 = (int)this + 300;
                *(int *)((int)this + 4) = iVar10;
                *(int *)((int)this + 8) = iVar10;
                *(int *)((int)this + 0xc) = iVar10;
                *(int *)((int)this + 0x10) = iVar10;
                iVar10 = (int)this + 0x138;
                *(int *)((int)this + 0x18) = iVar10;
                *(int *)((int)this + 0x1c) = iVar10;
                *(int *)((int)this + 0x20) = iVar10;
                *(int *)((int)this + 0x24) = iVar10;
                *(int *)((int)this + 0x14) = (int)this + 0x120;
                *(int *)((int)this + 0x34) = (int)this + 0x114;
                (*(undefined4 *)(gen_frame + 0x18)) = 0x340000;
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a74) = uVar3;
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a78) = uVar3;
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a7c) = uVar3;
                (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 2)) = 0x23;
                gen_piece_set(&(*(undefined4 *)(gen_frame + 0x18)), 0, 3, (unsigned long long)(CONCAT12(0x23,(undefined2)(*(undefined4 *)(gen_frame + 0x18)))));
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a80) = uVar3;
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a84) = uVar3;
                uVar3 = F_004deb40(REFG(void * PTR32, 0x1370b90),&(*(undefined4 *)(gen_frame + 0x18)),1);
                *(uint *)((int)this + 0x3a88) = uVar3;
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_0063da80 */
uint F_0063da80(unsigned int gen_a0)
{
  GEN_ENTER(0x63da80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  piVar3 = *(int * PTR32 *)((int)this + 0xd0);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0xd0) = 0;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    *(undefined4 *)((int)this + 0x48) = 0;
  }
  piVar3 = (int *)((int)this + 0x50);
  iVar4 = 0x10;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar3 = (int *)((int)this + 0x3268);
  iVar4 = 0x200;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  F_0066dd90((undefined *)((int)this + 0x31fc));
  piVar3 = (int *)((int)this + 0x3a80);
  iVar4 = 3;
  do {
    piVar1 = (int *)piVar3[-3];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar3[-3] = 0;
    }
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar3 = (int *)((int)this + 0xd4);
  iVar4 = 0x10;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(int *)((int)this + 0x1e8) != 0) {
    F_0050c620(*(int *)((int)this + 0x1e8),0,0);
    *(undefined4 *)((int)this + 0x1e8) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x1ec) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x1ec),0,0);
    *(undefined4 *)((int)this + 0x1ec) = 0;
  }
  return uVar2;
}

/* ref: FUN_0063dbb0 */
unsigned int F_0063dbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x63dbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0x48),0,0,2);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *(undefined4 *)((int)this + 0x1f8);
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x48) + 0x24))) = 0;
  }
  puVar2 = (undefined4 *)F_004d9920(*(undefined * PTR32 *)((int)this + 0xd0),0,0x10,2);
  uVar1 = REFG(float, 0x10ac02c);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = GEN_FLT_TO(*puVar2, REFG(float, 0x10ac02c));
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
    puVar2[3] = GEN_FLT_TO(puVar2[3], REFG(float, 0x1094880));
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0x24))) = 0;
  }
  F_0062e660(this,param_1);
  return 0;
}

/* ref: FUN_0063dc50 */
uint F_0063dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x63dc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  ushort * param_5 = (ushort *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  int param_7 = (int)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x11020];
  uint * puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined * this;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  byte bVar8;
  int * piVar9;
  uint uVar10;
  undefined3 extraout_var = 0;
  int * piVar11;
  uint * puVar12;
  int * piVar13;
  undefined4 * puVar14;
  
  (*(uint *)(gen_frame + 0x11018)) = 0x63dc5d;
  (*(uint *)(gen_frame + 0x11018)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  piVar9 = (int *)(uint)param_5[5];
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar2 = *param_5;
  piVar13 = (int *)((uint)param_5[6] + (int)piVar9);
  (*(int * PTR32 *)(gen_frame + 0x10010)) = (int *)0x0;
  bVar7 = false;
  if (piVar9 < piVar13) {
    iVar4 = *(int *)(param_3 + 200);
    iVar5 = *((int *)GEN_TOP((*(int *)(param_2 + 0x20) + 0xa8)));
    uVar3 = *((ushort *)GEN_TOP((*(int *)(iVar5 + 4) + 0x2c + iVar5)));
    iVar5 = *(int *)(param_2 + 0x28);
    piVar11 = piVar9;
    do {
      puVar14 = ((undefined4 *)GEN_TOP((((uint)piVar11 & 0xffff) * 0x10 + iVar4)));
      uVar10 = puVar14[2] + (uint)uVar3 * param_1;
      piVar9 = (int *)(uVar10 >> 5);
      if ((*(uint *)(iVar5 + (int)((int)(uintptr_t)piVar9) * 4) & 1 << ((byte)uVar10 & 0x1f)) == 0) {
        if (bVar7) {
          (*(int * PTR32 *)(gen_frame + 0x10010)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x10010)) + 1);
          bVar7 = false;
        }
      }
      else if (bVar7) {
        ((int *)(gen_frame + 0x10818))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10010)))] = ((int *)(gen_frame + 0x10818))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10010)))] + puVar14[1];
        piVar9 = ((int *)(gen_frame + 0x10818)) + (int)(*(int * PTR32 *)(gen_frame + 0x10010));
      }
      else {
        ((undefined4 *)(gen_frame + 0x10018))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10010)))] = *puVar14;
        ((int *)(gen_frame + 0x10818))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10010)))] = puVar14[1];
        bVar7 = true;
        piVar9 = (*(int * PTR32 *)(gen_frame + 0x10010));
      }
      piVar11 = (int *)((int)piVar11 + 1);
    } while (piVar11 < piVar13);
    if (bVar7) {
      (*(int * PTR32 *)(gen_frame + 0x10010)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x10010)) + 1);
    }
  }
  (*(int * PTR32 *)(gen_frame + 0x10008)) = (int *)0x0;
  if ((*(int * PTR32 *)(gen_frame + 0x10010)) != (int *)0x0) {
    do {
      piVar9 = (int *)0x0;
      if (param_7 != 0) {
        iVar4 = ((int *)(gen_frame + 0x10818))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10008)))];
        uVar6 = ((undefined4 *)(gen_frame + 0x10018))[(int)((int)(*(int * PTR32 *)(gen_frame + 0x10008)))];
        puVar12 = (uint *)(param_6 + 4);
        (*(int *)(gen_frame + 0x1000c)) = param_7;
        do {
          *(uint *)((int)this + 0x50) = puVar12[1] & 0x1f;
          *(uint *)((int)this + 8) =
               *(uint *)((int)this + 8) ^
               (puVar12[-1] << 0x13 ^ *(uint *)((int)this + 8)) & 0x780000;
          *(uint *)((int)this + 0x38) = *puVar12 & 0x7ffffff;
          uVar10 = puVar12[4];
          *(uint *)((int)this + 0x58) = puVar12[3] & 0xfe000000;
          *(uint *)((int)this + 0x5c) = uVar10 & 0xfffffffc;
          if (puVar12[-1] == 2) {
            *(uint *)((int)this + 8) =
                 *(uint *)((int)this + 8) & 0xfffb0000 | param_4 & 0xffff | 0x30000;
          }
          else if (puVar12[5] == 0) {
            *(uint *)((int)this + 8) =
                 param_4 >> 4 & 0x3ffff | *(uint *)((int)this + 8) & 0xfff80000;
          }
          else {
            *(uint *)((int)this + 8) =
                 *(uint *)((int)this + 8) ^ (*(uint *)((int)this + 8) ^ puVar12[5]) & 0x7ffff;
          }
          piVar9 = REFG(int * PTR32, 0x1370b90);
          uVar10 = *(int *)((int)this + 0x18) + 0x60;
          if (uVar10 < 0x8001) {
            puVar14 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x18))));
            *(uint *)((int)this + 0x18) = uVar10;
LAB_0063debd: ;
            piVar9 = (int *)0x0;
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = 5;
              puVar14[4] = (uint)uVar2;
              puVar14[2] = 0;
              puVar14[3] = 0;
              puVar14[1] = 5;
              puVar14[5] = uVar6;
              puVar14[6] = iVar4;
              bVar8 = F_004dc830(this,puVar14 + 7);
              piVar9 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar8)));
              if (bVar8 != 0) {
                piVar9 = (int *)F_004d4810(this,puVar14);
              }
            }
          }
          else {
            puVar1 = ((uint *)GEN_TOP((REFG(int * PTR32, 0x1370b90) + 0x30)));
            LOCK();
            uVar10 = *puVar1;
            *puVar1 = *puVar1 + 0x8000;
            UNLOCK();
            if ((uint)piVar9[0x2e] < piVar9[0x31] * 3 + *puVar1) {
              LOCK();
              piVar9 = (int *)*puVar1;
              *puVar1 = *puVar1 - 0x8000;
              UNLOCK();
            }
            else {
              puVar14 = (undefined4 *)(piVar9[0x2f] + uVar10);
              if (puVar14 != (undefined4 *)0x0) {
                *(undefined4 * PTR32 *)((int)this + 0xc) = puVar14;
                *(undefined4 *)((int)this + 0x18) = 0x60;
                goto LAB_0063debd;
              }
            }
          }
          puVar12 = puVar12 + 8;
          (*(int *)(gen_frame + 0x1000c)) = (*(int *)(gen_frame + 0x1000c)) + -1;
        } while ((*(int *)(gen_frame + 0x1000c)) != 0);
      }
      (*(int * PTR32 *)(gen_frame + 0x10008)) = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x10008)) + 1);
    } while ((*(int * PTR32 *)(gen_frame + 0x10008)) < (*(int * PTR32 *)(gen_frame + 0x10010)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x11018)) ^ (uint)(uint)(gen_frame + 0x0));
  return (uint)piVar9;
}

/* ref: FUN_0063df50 */
uint F_0063df50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x63df50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x11030];
  ushort * puVar1;
  int * piVar2;
  ushort uVar3;
  ushort uVar4;
  undefined * this_00;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  ushort * puVar18;
  uint * puVar19;
  undefined4 * puVar20;
  ushort * puVar21;
  bool bVar22;
  
  (*(uint *)(gen_frame + 0x11028)) = 0x63df5d;
  (*(uint *)(gen_frame + 0x11028)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  iVar13 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar13 + 0x1a8);
  uVar17 = (uint)*(byte *)(param_3 + 2);
  iVar5 = *param_3;
  iVar6 = *(int *)(iVar5 + 0x20);
  *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)(iVar6 + 0x118 + uVar17 * 4);
  if (*(byte *)((int)param_3 + 9) != 0) {
    piVar2 = ((int *)GEN_TOP(((int)this + (uint)*(byte *)((int)param_3 + 9) * 8 + 0x4c)));
    iVar7 = *piVar2;
    if ((iVar7 != -1) && (iVar8 = piVar2[1], iVar8 != 0)) {
      *((int *)GEN_TOP((*(int *)(iVar13 + 0x1a8) + 0xa8 + iVar7 * 4))) = iVar8;
    }
    F_00667bd0(param_2,(int)this + 0x15c);
  }
  uVar9 = *(uint *)(iVar6 + 0x10c + uVar17 * 4);
  uVar14 = (&REFG(undefined4, 0x10a6670))[param_1];
  uVar12 = ((code *)*(gen_code32 *)(*(int *)*param_3 + 0x18))((int *)*param_3);
  if ((char)uVar12 == '\0') {
    bVar22 = false;
  }
  else {
    bVar22 = (param_3[1] & uVar14) != uVar14;
  }
  uVar17 = uVar17 * 0x3c;
  uVar3 = *((ushort *)GEN_TOP((*(int *)(iVar6 + 0xb8) + 2 + uVar17)));
  (*(uint *)(gen_frame + 0x10014)) = (uint)uVar3;
  uVar14 = uVar17;
  if (bVar22) {
    if (uVar3 != 0) {
      (*(int *)(gen_frame + 0x10020)) = 0;
      (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10014));
      do {
        iVar13 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xb8) + uVar17))) + (*(int *)(gen_frame + 0x10020));
        puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar6 + 0xbc) + iVar13 * 0x24)));
        F_0062d180(REFG(void * PTR32, 0x13759f8),param_2,
                     *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 0x124) +
                               (uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xbc) + 8 + iVar13 * 0x24))) * 4))) +
                      0xa0))));
        if (*(undefined * PTR32 *)((int)param_2 + 4) == (undefined *)0x0) {
          uVar14 = 0;
        }
        else {
          uVar14 = F_00b52db0(*(undefined * PTR32 *)((int)param_2 + 4),param_2);
        }
        *(uint *)((int)this_00 + 0x60) = uVar14;
        *(undefined4 *)((int)this_00 + 0x4c) =
             *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x108) +
              ((uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xb8) + uVar17))) + (*(int *)(gen_frame + 0x10020))) * 4)));
        bVar16 = *(byte *)((int)puVar1 + 0x23) & 3;
        if (bVar16 != 0) {
          (*(uint *)(gen_frame + 0x1001c)) = (uint)bVar16;
          puVar18 = puVar1 + 0x10;
          puVar19 = (uint *)((int)this_00 + 0x6c);
          puVar21 = puVar1 + 10;
          do {
            uVar3 = *puVar18;
            *puVar19 = *puVar19 ^ (*(int *)((int)(uintptr_t)puVar21) << 8 ^ *puVar19) & 0x7fffff00;
            *(char *)puVar19 = (char)uVar3;
            *puVar19 = *puVar19 & 0x7fffffff;
            puVar19[-1] = uVar9;
            puVar21 = puVar21 + 2;
            puVar18 = (ushort *)((int)puVar18 + 1);
            puVar19 = puVar19 + 2;
            (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) - 1;
          } while ((*(uint *)(gen_frame + 0x1001c)) != 0);
        }
        uVar14 = (uint)puVar1[5];
        uVar3 = *puVar1;
        uVar12 = puVar1[6] + uVar14;
        (*(uint *)(gen_frame + 0x1001c)) = 0;
        bVar22 = false;
        if (uVar14 < uVar12) {
          iVar13 = *((int *)GEN_TOP((*(int *)(iVar5 + 0x20) + 0xa8)));
          uVar4 = *((ushort *)GEN_TOP((*(int *)(iVar13 + 4) + 0x2c + iVar13)));
          iVar13 = *(int *)(iVar5 + 0x28);
          do {
            puVar20 = ((undefined4 *)GEN_TOP(((uVar14 & 0xffff) * 0x10 + *(int *)(iVar6 + 200))));
            uVar15 = puVar20[2] + (uint)uVar4 * param_1;
            if ((*((uint *)GEN_TOP((iVar13 + (uVar15 >> 5) * 4))) & 1 << ((byte)uVar15 & 0x1f)) == 0) {
              if (bVar22) {
                (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
                bVar22 = false;
              }
            }
            else {
              iVar7 = puVar20[1];
              if (bVar22) {
                ((int *)(gen_frame + 0x10828))[(int)((*(uint *)(gen_frame + 0x1001c)))] = ((int *)(gen_frame + 0x10828))[(int)((*(uint *)(gen_frame + 0x1001c)))] + iVar7;
              }
              else {
                ((undefined4 *)(gen_frame + 0x10028))[(int)((*(uint *)(gen_frame + 0x1001c)))] = *puVar20;
                ((int *)(gen_frame + 0x10828))[(int)((*(uint *)(gen_frame + 0x1001c)))] = iVar7;
                bVar22 = true;
              }
            }
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar12);
          if (bVar22) {
            (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
          }
        }
        (*(uint *)(gen_frame + 0x10014)) = 0;
        if ((*(uint *)(gen_frame + 0x1001c)) != 0) {
          do {
            if (param_5 != 0) {
              iVar13 = ((int *)(gen_frame + 0x10828))[(int)((*(uint *)(gen_frame + 0x10014)))];
              uVar10 = ((undefined4 *)(gen_frame + 0x10028))[(int)((*(uint *)(gen_frame + 0x10014)))];
              puVar19 = (uint *)(param_4 + 8);
              (*(int *)(gen_frame + 0x10008)) = param_5;
              do {
                *(uint *)((int)this_00 + 8) =
                     *(uint *)((int)this_00 + 8) ^
                     (puVar19[-2] << 0x13 ^ *(uint *)((int)this_00 + 8)) & 0x780000;
                *(uint *)((int)this_00 + 0x38) = puVar19[-1] & 0x7ffffff;
                *(uint *)((int)this_00 + 0x50) = *puVar19 & 0x1f;
                uVar14 = puVar19[3];
                *(uint *)((int)this_00 + 0x58) = puVar19[2] & 0xfe000000;
                *(uint *)((int)this_00 + 0x5c) = uVar14 & 0xfffffffc;
                *(uint *)((int)this_00 + 8) =
                     *(uint *)((int)this_00 + 8) ^
                     (puVar19[4] ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
                iVar7 = REFG(int, 0x1370b90);
                uVar14 = *(int *)((int)this_00 + 0x18) + 0x60;
                if (uVar14 < 0x8001) {
                  puVar20 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
                  *(uint *)((int)this_00 + 0x18) = uVar14;
LAB_0063e36c: ;
                  if (puVar20 != (undefined4 *)0x0) {
                    *puVar20 = 5;
                    puVar20[4] = (uint)uVar3;
                    puVar20[2] = 0;
                    puVar20[3] = 0;
                    puVar20[6] = iVar13;
                    puVar20[1] = 5;
                    puVar20[5] = uVar10;
                    bVar16 = F_004dc830(this_00,puVar20 + 7);
                    if (bVar16 != 0) {
                      F_004d4810(this_00,puVar20);
                    }
                  }
                }
                else {
                  piVar2 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                  LOCK();
                  iVar8 = *piVar2;
                  *piVar2 = *piVar2 + 0x8000;
                  UNLOCK();
                  if (*(uint *)(iVar7 + 0xb8) < (uint)(*(int *)(iVar7 + 0xc4) * 3 + *piVar2)) {
                    LOCK();
                    *piVar2 = *piVar2 + -0x8000;
                    UNLOCK();
                  }
                  else {
                    puVar20 = ((undefined4 *)GEN_TOP((*(int *)(iVar7 + 0xbc) + iVar8)));
                    if (puVar20 != (undefined4 *)0x0) {
                      *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar20;
                      *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                      goto LAB_0063e36c;
                    }
                  }
                }
                puVar19 = puVar19 + 8;
                (*(int *)(gen_frame + 0x10008)) = (*(int *)(gen_frame + 0x10008)) + -1;
              } while ((*(int *)(gen_frame + 0x10008)) != 0);
            }
            (*(uint *)(gen_frame + 0x10014)) = (*(uint *)(gen_frame + 0x10014)) + 1;
          } while ((*(uint *)(gen_frame + 0x10014)) < (*(uint *)(gen_frame + 0x1001c)));
        }
        (*(int *)(gen_frame + 0x10020)) = (*(int *)(gen_frame + 0x10020)) + 1;
        (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) - 1;
        if ((*(uint *)(gen_frame + 0x10018)) == 0) {
          F_00c47745((*(uint *)(gen_frame + 0x11028)) ^ (uint)(uint)(gen_frame + 0x0));
          return 1;
        }
      } while( true );
    }
  }
  else if (uVar3 != 0) {
    (*(int *)(gen_frame + 0x10020)) = 0;
    do {
      iVar13 = (uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xb8) + uVar17))) + (*(int *)(gen_frame + 0x10020));
      puVar1 = ((ushort *)GEN_TOP((*(int *)(iVar6 + 0xbc) + iVar13 * 0x24)));
      F_0062d180(REFG(void * PTR32, 0x13759f8),param_2,
                   *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 0x124) +
                             (uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xbc) + 8 + iVar13 * 0x24))) * 4))) +
                    0xa0))));
      if (*(undefined * PTR32 *)((int)param_2 + 4) == (undefined *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = F_00b52db0(*(undefined * PTR32 *)((int)param_2 + 4),param_2);
      }
      *(uint *)((int)this_00 + 0x60) = uVar14;
      *(undefined4 *)((int)this_00 + 0x4c) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar6 + 0x108) +
            ((uint)*((ushort *)GEN_TOP((*(int *)(iVar6 + 0xb8) + uVar17))) + (*(int *)(gen_frame + 0x10020))) * 4)));
      bVar16 = *(byte *)((int)puVar1 + 0x23) & 3;
      if (bVar16 != 0) {
        (*(uint *)(gen_frame + 0x10018)) = (uint)bVar16;
        puVar18 = puVar1 + 0x10;
        puVar19 = (uint *)((int)this_00 + 0x6c);
        puVar21 = puVar1 + 10;
        do {
          uVar3 = *puVar18;
          *puVar19 = *puVar19 ^ (*(int *)((int)(uintptr_t)puVar21) << 8 ^ *puVar19) & 0x7fffff00;
          *(char *)puVar19 = (char)uVar3;
          *puVar19 = *puVar19 & 0x7fffffff;
          puVar19[-1] = uVar9;
          puVar21 = puVar21 + 2;
          puVar18 = (ushort *)((int)puVar18 + 1);
          puVar19 = puVar19 + 2;
          (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) - 1;
        } while ((*(uint *)(gen_frame + 0x10018)) != 0);
      }
      uVar10 = *(undefined4 *)(puVar1 + 8);
      uVar3 = *puVar1;
      uVar11 = *(undefined4 *)(puVar1 + 2);
      if (param_5 != 0) {
        puVar19 = (uint *)(param_4 + 8);
        (*(uint *)(gen_frame + 0x10018)) = param_5;
        do {
          *(uint *)((int)this_00 + 8) =
               *(uint *)((int)this_00 + 8) ^
               (puVar19[-2] << 0x13 ^ *(uint *)((int)this_00 + 8)) & 0x780000;
          *(uint *)((int)this_00 + 0x38) = puVar19[-1] & 0x7ffffff;
          *(uint *)((int)this_00 + 0x50) = *puVar19 & 0x1f;
          uVar14 = puVar19[3];
          *(uint *)((int)this_00 + 0x58) = puVar19[2] & 0xfe000000;
          *(uint *)((int)this_00 + 0x5c) = uVar14 & 0xfffffffc;
          *(uint *)((int)this_00 + 8) =
               *(uint *)((int)this_00 + 8) ^ (puVar19[4] ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
          iVar13 = REFG(int, 0x1370b90);
          uVar14 = *(int *)((int)this_00 + 0x18) + 0x60;
          if (uVar14 < 0x8001) {
            puVar20 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
            *(uint *)((int)this_00 + 0x18) = uVar14;
LAB_0063e5f8: ;
            if (puVar20 != (undefined4 *)0x0) {
              *puVar20 = 5;
              puVar20[4] = (uint)uVar3;
              puVar20[2] = 0;
              puVar20[3] = 0;
              puVar20[6] = uVar11;
              puVar20[1] = 5;
              puVar20[5] = uVar10;
              bVar16 = F_004dc830(this_00,puVar20 + 7);
              if (bVar16 != 0) {
                F_004d4810(this_00,puVar20);
              }
            }
          }
          else {
            piVar2 = (int *)(REFG(int, 0x1370b90) + 0xc0);
            LOCK();
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + 0x8000;
            UNLOCK();
            if (*(uint *)(iVar13 + 0xb8) < (uint)(*(int *)(iVar13 + 0xc4) * 3 + *piVar2)) {
              LOCK();
              *piVar2 = *piVar2 + -0x8000;
              UNLOCK();
            }
            else {
              puVar20 = ((undefined4 *)GEN_TOP((*(int *)(iVar13 + 0xbc) + iVar5)));
              if (puVar20 != (undefined4 *)0x0) {
                *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar20;
                *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                goto LAB_0063e5f8;
              }
            }
          }
          puVar19 = puVar19 + 8;
          (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) + -1;
        } while ((*(uint *)(gen_frame + 0x10018)) != 0);
      }
      uVar14 = 1;
      (*(int *)(gen_frame + 0x10020)) = (*(int *)(gen_frame + 0x10020)) + 1;
      (*(uint *)(gen_frame + 0x10014)) = (*(uint *)(gen_frame + 0x10014)) - 1;
    } while ((*(uint *)(gen_frame + 0x10014)) != 0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x11028)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar14;
}

/* ref: FUN_0063e690 */
uint F_0063e690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x63e690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x11030];
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined * this_00;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint * puVar20;
  undefined4 * puVar21;
  bool bVar22;
  
  (*(uint *)(gen_frame + 0x11028)) = 0x63e69d;
  (*(uint *)(gen_frame + 0x11028)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  uVar19 = (uint)*(byte *)(param_2 + 2);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  iVar8 = *param_2;
  iVar9 = *(int *)(iVar8 + 0x20);
  *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)(iVar9 + 0x118 + uVar19 * 4);
  *(undefined4 *)((int)this_00 + 0x4c) =
       *((undefined4 *)GEN_TOP(((int)this + (uVar19 + (*(byte *)(uVar19 + 0x3a6e + (int)this) + 0x4df) * 3) * 4)));
  uVar10 = *(undefined4 *)(iVar9 + 0x10c + uVar19 * 4);
  uVar17 = (&REFG(undefined4, 0x10a6670))[param_1];
  uVar16 = ((code *)*(gen_code32 *)(*(int *)*param_2 + 0x18))((int *)*param_2);
  if ((char)uVar16 == '\0') {
    bVar22 = false;
  }
  else {
    bVar22 = (param_2[1] & uVar17) != uVar17;
  }
  iVar14 = uVar19 * 0x3c;
  uVar5 = *((ushort *)GEN_TOP((iVar14 + 0x16 + *(int *)(iVar9 + 0xb8))));
  uVar17 = 0;
  if (bVar22) {
    (*(uint *)(gen_frame + 0x10018)) = 0;
    if (uVar5 != 0) {
      do {
        uVar17 = (uint)(byte)(*((char *)GEN_TOP((iVar14 + 0x14 + *(int *)(iVar9 + 0xb8)))) + (char)(*(uint *)(gen_frame + 0x10018)));
        uVar4 = *((undefined1 *)GEN_TOP((*(int *)(iVar9 + 0xc0) + 0x12 + uVar17 * 0x14)));
        iVar2 = *(int *)(iVar9 + 0xc0) + uVar17 * 0x14;
        iVar11 = *(int *)(iVar2 + 8);
        *(undefined4 *)((int)this_00 + 0x68) = uVar10;
        *(uint *)((int)this_00 + 0x6c) =
             *(uint *)((int)this_00 + 0x6c) ^
             (iVar11 << 8 ^ *(uint *)((int)this_00 + 0x6c)) & 0x7fffff00;
        *(undefined1 *)((int)this_00 + 0x6c) = uVar4;
        *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
        uVar17 = (uint)*(ushort *)(iVar2 + 0xe);
        uVar6 = *(ushort *)(iVar2 + 0xc);
        uVar16 = *(ushort *)(iVar2 + 0x10) + uVar17;
        uVar19 = 0;
        (*(uint *)(gen_frame + 0x10020)) = 0;
        bVar22 = false;
        if (uVar17 < uVar16) {
          iVar2 = *(int *)(iVar9 + 0xcc);
          iVar11 = *((int *)GEN_TOP((*(int *)(iVar8 + 0x20) + 0xa8)));
          uVar7 = *((ushort *)GEN_TOP((*(int *)(iVar11 + 4) + 0x2c + iVar11)));
          iVar11 = *(int *)(iVar8 + 0x28);
          do {
            puVar21 = ((undefined4 *)GEN_TOP((iVar2 + (uVar17 & 0xffff) * 0xc)));
            uVar18 = (uint)*(ushort *)(puVar21 + 2) + (uint)uVar7 * param_1;
            if ((*((uint *)GEN_TOP((iVar11 + (uVar18 >> 5) * 4))) & 1 << ((byte)uVar18 & 0x1f)) == 0) {
              if (bVar22) {
                uVar19 = uVar19 + 1;
                bVar22 = false;
              }
            }
            else if (bVar22) {
              ((int *)(gen_frame + 0x10828))[(int)(uVar19)] = ((int *)(gen_frame + 0x10828))[(int)(uVar19)] + puVar21[1];
            }
            else {
              iVar3 = puVar21[1];
              ((undefined4 *)(gen_frame + 0x10028))[(int)(uVar19)] = *puVar21;
              ((int *)(gen_frame + 0x10828))[(int)(uVar19)] = iVar3;
              bVar22 = true;
            }
            uVar17 = uVar17 + 1;
          } while (uVar17 < uVar16);
          (*(uint *)(gen_frame + 0x10020)) = uVar19;
          if (bVar22) {
            (*(uint *)(gen_frame + 0x10020)) = uVar19 + 1;
          }
        }
        (*(uint *)(gen_frame + 0x1001c)) = 0;
        if ((*(uint *)(gen_frame + 0x10020)) != 0) {
          do {
            if (param_4 != 0) {
              iVar2 = ((int *)(gen_frame + 0x10828))[(int)((*(uint *)(gen_frame + 0x1001c)))];
              uVar12 = ((undefined4 *)(gen_frame + 0x10028))[(int)((*(uint *)(gen_frame + 0x1001c)))];
              puVar20 = (uint *)(param_3 + 8);
              (*(int *)(gen_frame + 0x1000c)) = param_4;
              do {
                *(uint *)((int)this_00 + 8) =
                     *(uint *)((int)this_00 + 8) ^
                     (puVar20[-2] << 0x13 ^ *(uint *)((int)this_00 + 8)) & 0x780000;
                *(uint *)((int)this_00 + 0x38) = puVar20[-1] & 0x7ffffff;
                *(uint *)((int)this_00 + 0x50) = *puVar20 & 0x1f;
                uVar17 = puVar20[3];
                *(uint *)((int)this_00 + 0x58) = puVar20[2] & 0xfe000000;
                *(uint *)((int)this_00 + 0x5c) = uVar17 & 0xfffffffc;
                *(uint *)((int)this_00 + 8) =
                     *(uint *)((int)this_00 + 8) ^
                     (puVar20[4] ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
                iVar11 = REFG(int, 0x1370b90);
                uVar17 = *(int *)((int)this_00 + 0x18) + 0x60;
                if (uVar17 < 0x8001) {
                  puVar21 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
                  *(uint *)((int)this_00 + 0x18) = uVar17;
LAB_0063e9e8: ;
                  if (puVar21 != (undefined4 *)0x0) {
                    *puVar21 = 5;
                    puVar21[4] = (uint)uVar6;
                    puVar21[2] = 0;
                    puVar21[3] = 0;
                    puVar21[6] = iVar2;
                    puVar21[1] = 5;
                    puVar21[5] = uVar12;
                    bVar15 = F_004dc830(this_00,puVar21 + 7);
                    if (bVar15 != 0) {
                      F_004d4810(this_00,puVar21);
                    }
                  }
                }
                else {
                  piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
                  LOCK();
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + 0x8000;
                  UNLOCK();
                  if (*(uint *)(iVar11 + 0xb8) < (uint)(*(int *)(iVar11 + 0xc4) * 3 + *piVar1)) {
                    LOCK();
                    *piVar1 = *piVar1 + -0x8000;
                    UNLOCK();
                  }
                  else {
                    puVar21 = ((undefined4 *)GEN_TOP((*(int *)(iVar11 + 0xbc) + iVar3)));
                    if (puVar21 != (undefined4 *)0x0) {
                      *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar21;
                      *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                      goto LAB_0063e9e8;
                    }
                  }
                }
                puVar20 = puVar20 + 8;
                (*(int *)(gen_frame + 0x1000c)) = (*(int *)(gen_frame + 0x1000c)) + -1;
              } while ((*(int *)(gen_frame + 0x1000c)) != 0);
            }
            (*(uint *)(gen_frame + 0x1001c)) = (*(uint *)(gen_frame + 0x1001c)) + 1;
          } while ((*(uint *)(gen_frame + 0x1001c)) < (*(uint *)(gen_frame + 0x10020)));
        }
        (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) + 1;
        if (uVar5 <= (ushort)(*(uint *)(gen_frame + 0x10018))) {
          F_00c47745((*(uint *)(gen_frame + 0x11028)) ^ (uint)(uint)(gen_frame + 0x0));
          return (*(uint *)(gen_frame + 0x10018));
        }
      } while( true );
    }
  }
  else {
    (*(uint *)(gen_frame + 0x1001c)) = 0;
    if (uVar5 != 0) {
      do {
        uVar17 = (uint)(byte)(*((char *)GEN_TOP((iVar14 + 0x14 + *(int *)(iVar9 + 0xb8)))) + (char)(*(uint *)(gen_frame + 0x1001c)));
        uVar4 = *((undefined1 *)GEN_TOP((*(int *)(iVar9 + 0xc0) + 0x12 + uVar17 * 0x14)));
        puVar21 = ((undefined4 *)GEN_TOP((*(int *)(iVar9 + 0xc0) + uVar17 * 0x14)));
        iVar8 = puVar21[2];
        *(undefined4 *)((int)this_00 + 0x68) = uVar10;
        *(uint *)((int)this_00 + 0x6c) =
             *(uint *)((int)this_00 + 0x6c) ^
             (iVar8 << 8 ^ *(uint *)((int)this_00 + 0x6c)) & 0x7fffff00;
        *(undefined1 *)((int)this_00 + 0x6c) = uVar4;
        *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
        uVar12 = puVar21[1];
        uVar6 = *(ushort *)(puVar21 + 3);
        uVar13 = *puVar21;
        if (param_4 != 0) {
          puVar20 = (uint *)(param_3 + 8);
          (*(uint *)(gen_frame + 0x10018)) = param_4;
          do {
            *(uint *)((int)this_00 + 8) =
                 *(uint *)((int)this_00 + 8) ^
                 (puVar20[-2] << 0x13 ^ *(uint *)((int)this_00 + 8)) & 0x780000;
            *(uint *)((int)this_00 + 0x38) = puVar20[-1] & 0x7ffffff;
            *(uint *)((int)this_00 + 0x50) = *puVar20 & 0x1f;
            uVar17 = puVar20[3];
            *(uint *)((int)this_00 + 0x58) = puVar20[2] & 0xfe000000;
            *(uint *)((int)this_00 + 0x5c) = uVar17 & 0xfffffffc;
            *(uint *)((int)this_00 + 8) =
                 *(uint *)((int)this_00 + 8) ^ (puVar20[4] ^ *(uint *)((int)this_00 + 8)) & 0x7ffff;
            iVar8 = REFG(int, 0x1370b90);
            uVar17 = *(int *)((int)this_00 + 0x18) + 0x60;
            if (uVar17 < 0x8001) {
              puVar21 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))))
              ;
              *(uint *)((int)this_00 + 0x18) = uVar17;
LAB_0063ebc7: ;
              if (puVar21 != (undefined4 *)0x0) {
                *puVar21 = 5;
                puVar21[4] = (uint)uVar6;
                puVar21[2] = 0;
                puVar21[3] = 0;
                puVar21[6] = uVar13;
                puVar21[1] = 5;
                puVar21[5] = uVar12;
                bVar15 = F_004dc830(this_00,puVar21 + 7);
                if (bVar15 != 0) {
                  F_004d4810(this_00,puVar21);
                }
              }
            }
            else {
              piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
              LOCK();
              iVar2 = *piVar1;
              *piVar1 = *piVar1 + 0x8000;
              UNLOCK();
              if (*(uint *)(iVar8 + 0xb8) < (uint)(*(int *)(iVar8 + 0xc4) * 3 + *piVar1)) {
                LOCK();
                *piVar1 = *piVar1 + -0x8000;
                UNLOCK();
              }
              else {
                puVar21 = ((undefined4 *)GEN_TOP((*(int *)(iVar8 + 0xbc) + iVar2)));
                if (puVar21 != (undefined4 *)0x0) {
                  *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar21;
                  *(undefined4 *)((int)this_00 + 0x18) = 0x60;
                  goto LAB_0063ebc7;
                }
              }
            }
            puVar20 = puVar20 + 8;
            (*(uint *)(gen_frame + 0x10018)) = (*(uint *)(gen_frame + 0x10018)) + -1;
          } while ((*(uint *)(gen_frame + 0x10018)) != 0);
        }
        uVar17 = (*(uint *)(gen_frame + 0x1001c)) + 1;
        (*(uint *)(gen_frame + 0x1001c)) = uVar17;
      } while ((ushort)uVar17 < uVar5);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x11028)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar17;
}

/* ref: FUN_0063ecd0 */
uint F_0063ecd0(unsigned int gen_a0)
{
  GEN_ENTER(0x63ecd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  float fVar1;
  float fVar2;
  byte bVar3;
  float10 fVar4;
  undefined * pvVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  undefined4 * puVar10;
  float * pfVar11;
  uint * puVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  int iVar16;
  undefined4 * puVar17;
  float * pfVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  
  (*(uint *)(gen_frame + 0x2bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c0);
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(bool *)(gen_frame + 0x4a)) = false;
  (*(char *)(gen_frame + 0x4b)) = '\0';
  if (*(int *)((int)this + 4) == 2) {
    bVar19 = (*(uint *)((int)this + 0x7c) & 0x80000) != 0;
    if (bVar19) {
      (*(bool *)(gen_frame + 0x4a)) = true;
    }
    (*(bool *)(gen_frame + 0x4a)) = bVar19;
    if (*(int *)((int)this + 0x80) != 0) {
      (*(char *)(gen_frame + 0x4b)) = '\x01';
    }
  }
  if (*(int *)(REFG(int, 0x1371284) + 0x14) == 0) {
    (*(bool *)(gen_frame + 0x4a)) = false;
  }
  (*(undefined * PTR32 *)(gen_frame + 0x294)) = (undefined *)0x0;
  (*(undefined4 *)(gen_frame + 0x298)) = 0;
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabf0) == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabf0) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)),uVar7);
  if ((*(undefined * PTR32 *)(gen_frame + 0x294)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x2a0)) = *(undefined4 *)((int)this + 0x10);
    (*(undefined4 *)(gen_frame + 0x2a4)) = *(undefined4 *)((int)this + 0x14);
  }
  if ((*(bool *)(gen_frame + 0x4a)) != false) {
    F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)),&REFG(undefined * PTR32, 0x1320754));
  }
  if ((*(char *)(gen_frame + 0x4b)) != '\0') {
    F_00667bd0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)),&REFG(undefined * PTR32, 0x1320760));
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x294)) == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x294)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)));
  }
  iVar16 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  *((uint *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 0x60))) = uVar8;
  iVar13 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  (*(int *)(gen_frame + 0x34)) = iVar16;
  (*(float *)(gen_frame + 0x44)) = *(float *)(REFG(int, 0x137127c) + 0x6554);
  *((undefined4 *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 0xa8 + REFG(int, 0x1320528) * 4))) =
       *(undefined4 *)(iVar13 + 0x120);
  fVar9 = gen_bits2f(F_004d9920(REFG(void * PTR32, 0x137faac),0,*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137faac) + 0xc))),2));
  (*(float *)(gen_frame + 0x40)) = fVar9;
  if (fVar9 == 0.0) {
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  }
  else {
    (*(float *)(gen_frame + 0x238)) = (float)((float10)*(float *)&REFG(undefined, 0x132220c) + (float10)REFG(double, 0x1088130));
    ((float *)(gen_frame + 0x210))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x210))[0], REFG(float, 0x1087f04));
    ((float *)(gen_frame + 0x210))[1] = 0.0;
    ((float *)(gen_frame + 0x210))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x220)) = 0;
    (*(float *)(gen_frame + 0x224)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x228)) = 0;
    (*(undefined4 *)(gen_frame + 0x230)) = 0;
    (*(undefined4 *)(gen_frame + 0x234)) = 0;
    (*(undefined4 *)(gen_frame + 0x240)) = 0;
    (*(undefined4 *)(gen_frame + 0x244)) = 0;
    (*(undefined4 *)(gen_frame + 0x248)) = 0;
    puVar10 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x50)),iVar13 + 0x10);
    puVar17 = ((undefined4 *)(gen_frame + 0x190));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar17 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar17 = puVar17 + 1;
    }
    pfVar11 = (float *)F_004ef350(((undefined1 *)(gen_frame + 0x90)),(uint)((undefined4 *)(gen_frame + 0x190)),(int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x10);
    pfVar18 = ((float *)(gen_frame + 0x250));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *pfVar18 = *pfVar11;
      pfVar11 = pfVar11 + 1;
      pfVar18 = pfVar18 + 1;
    }
    puVar10 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0xd0)),(uint)((float *)(gen_frame + 0x250)),(uint)((float *)(gen_frame + 0x210)));
    puVar17 = ((undefined4 *)(gen_frame + 0x110));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar17 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar10 = (undefined4 *)
              F_004f11a0(((undefined1 *)(gen_frame + 0x150)),(uint)((undefined4 *)(gen_frame + 0x110)),(int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x50);
    puVar17 = ((undefined4 *)(gen_frame + 0x1d0));
    for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
      *puVar17 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar17 = puVar17 + 1;
    }
    F_004d3a00((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x40))),((undefined4 *)(gen_frame + 0x1d0)));
    *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137faac) + 0x24))) = 0;
    *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0xa8 + REFG(int, 0x132053c) * 4))) = REFG(void * PTR32, 0x137faac);
    pfVar11 = (float *)F_004d9920(REFG(void * PTR32, 0x137faa8),0,*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137faa8) + 0xc))),2);
    iVar16 = (*(int *)(gen_frame + 0x34));
    pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x30));
    fVar9 = REFG(float, 0x1087f04);
    if (pfVar11 != (float *)0x0) {
      fVar22 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x48);
      fVar23 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x4c);
      (*(float *)(gen_frame + 0x38)) = fVar22;
      (*(float *)(gen_frame + 0x3c)) = fVar23;
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
      if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4) == 2) {
        (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x84) *
                           (float10)*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x84))));
      }
      if ((*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7e) & 3) == 0) {
        fVar1 = (float)((float10)fVar23 + (float10)fVar22);
        (*(float *)(gen_frame + 0x40)) = fVar1;
        if ((float10)1 < (float10)fVar1) {
          puVar10 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT((float10)fVar1))))));
          (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar10;
          fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(puVar10)));
          fVar22 = (float)((float10)fVar22 / fVar20);
          (*(float *)(gen_frame + 0x38)) = fVar22;
          fVar23 = (float)((float10)fVar23 / fVar20);
          (*(float *)(gen_frame + 0x3c)) = fVar23;
          (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)(*(float *)(gen_frame + 0x44))))));
          fVar20 = ((float10)GEN_TOD(pow((float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x44))),(float10)fVar1)));
          (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)fVar20)));
          (*(float *)(gen_frame + 0x44)) = (float)((float10)1 - (float10)(float)fVar20);
        }
      }
      else {
        fVar22 = 0.0;
        fVar23 = REFG(float, 0x1087f04);
      }
      fVar1 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x74);
      fVar2 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x2c);
      *pfVar11 = fVar22;
      pfVar11[1] = fVar23;
      pfVar11[2] = fVar1;
      pfVar11[3] = fVar2;
      pfVar11[4] = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 100);
      pfVar11[5] = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x68);
      pfVar11[6] = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x6c);
      pfVar11[7] = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x70);
      pfVar11[7] = (float)((float10)pfVar11[7] * (float10)(*(float *)(gen_frame + 0x44)));
      if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4) == 2) {
        if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7c) >> 0x12 & 1) == 0) {
          fVar22 = 0.0;
          fVar23 = 0.0;
        }
        else {
          fVar22 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x34);
          fVar23 = *(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x30);
        }
        bVar3 = *(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7c);
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = (undefined4 *)(uint)bVar3;
        pfVar11[9] = (float)*(byte *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7d);
        pfVar11[8] = (float)(int)(uint)bVar3;
        pfVar11[10] = fVar23;
        pfVar11[0xb] = fVar22;
        fVar22 = fVar9;
        if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7c) & 0x100000) != 0) {
          fVar22 = 0.0;
        }
        if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7c) & 0x100000) == 0) {
          fVar9 = 0.0;
        }
        pfVar11[0xc] = fVar9;
        pfVar11[0xd] = fVar22;
      }
      else {
        pfVar11[8] = 0.0;
        pfVar11[9] = 0.0;
        pfVar11[10] = 0.0;
        pfVar11[0xb] = 0.0;
        pfVar11[0xc] = fVar9;
        pfVar11[0xd] = 0.0;
      }
      pfVar11[0xf] = 0.0;
      pfVar11[0xe] = 0.0;
      *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137faa8) + 0x24))) = 0;
      *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0xa8 + REFG(int, 0x1320538) * 4))) = REFG(void * PTR32, 0x137faa8);
      *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x2a8 + REFG(int, 0x1320540) * 8))) =
           *(undefined4 *)(REFG(int, 0x1371288) + 0x58);
      puVar12 = (uint *)F_004d4af0(&(*(undefined4 * PTR32 *)(gen_frame + 0x4c)),1,1,2,9,(float)(float10)0,0,0,0);
      *((uint *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 0x2ac + REFG(int, 0x1320540) * 8))) = *puVar12 & 0xfffffff;
      if ((*(char *)(gen_frame + 0x4b)) != '\0') {
        *((undefined4 *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 0x2a8 + REFG(int, 0x132054c) * 8))) =
             *(undefined4 *)((int)pvVar6 + 0x80);
        *((uint *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 0x2ac + REFG(int, 0x132054c) * 8))) = REFG(undefined4, 0x1302378) & 0xfffffff;
      }
      iVar13 = (*((uint *)GEN_TOP((*(int *)(iVar16 + 0x1a8) + 8))) >> 0x1b) * 0x358;
      iVar16 = *(int *)(iVar13 + 0x2a4 + REFG(int, 0x137127c));
      puVar10 = ((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x1371280) + 0x24) + 1)));
      (*(float *)(gen_frame + 0x44)) = gen_bits2f(*(int *)(REFG(int, 0x1488084) * 0x34 + iVar13 + 0x34 + REFG(int, 0x137127c)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar10;
      (*(float *)(gen_frame + 0x3c)) = gen_bits2f(iVar16);
      fVar20 = (float10)(int)puVar10;
      if ((int)puVar10 < 0) {
        fVar20 = fVar20 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar4 = (float10)1;
      (*(float *)(gen_frame + 0x40)) = (float)(fVar4 / fVar20);
      fVar21 = (float10)*(int *)(REFG(int, 0x1371288) + 0xf4);
      if (*(int *)(REFG(int, 0x1371288) + 0xf4) < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(float *)(gen_frame + 0x20)) = (float)(fVar4 / fVar21);
      fVar21 = (float10)*(int *)(REFG(int, 0x1371288) + 0xf8);
      if (*(int *)(REFG(int, 0x1371288) + 0xf8) < 0) {
        fVar21 = fVar21 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      ((float *)(gen_frame + 0x250))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x250))[0], REFG(float, 0x1088068));
      ((float *)(gen_frame + 0x250))[1] = 0.0;
      ((float *)(gen_frame + 0x250))[2] = 0.0;
      ((float *)(gen_frame + 0x250))[3] = 0.0;
      ((float *)(gen_frame + 0x250))[4] = 0.0;
      (*(undefined4 *)(gen_frame + 0x268)) = 0;
      (*(undefined4 *)(gen_frame + 0x26c)) = 0;
      (*(undefined4 *)(gen_frame + 0x270)) = 0;
      (*(undefined4 *)(gen_frame + 0x274)) = 0;
      (*(float *)(gen_frame + 0x278)) = REFG(float, 0x1087f04);
      (*(undefined4 *)(gen_frame + 0x27c)) = 0;
      (*(undefined4 *)(gen_frame + 0x280)) = 0;
      (*(undefined4 *)(gen_frame + 0x284)) = 0;
      (*(undefined4 *)(gen_frame + 0x288)) = 0;
      (*(float *)(gen_frame + 0x28c)) = REFG(float, 0x1087f04);
      (*(float *)(gen_frame + 0x24)) = (float)(fVar4 / fVar21);
      fVar20 = (float10)(float)(fVar4 / fVar20);
      ((float *)(gen_frame + 0x250))[5] = (float)((float10)*(double *)&REFG(undefined, 0x10968b0) * fVar20);
      puVar10 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(fVar20 * (float10)REFG(double, 0x1088108)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar10;
      F_0065f270(((float *)(gen_frame + 0x250)),REFG(float, 0x1088068),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar10))),(float)(float10)0);
      puVar10 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)(*(float *)(gen_frame + 0x24)) * (float10)REFG(double, 0x1088108)))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar10;
      puVar17 = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)((float10)REFG(double, 0x1088108) * (float10)(*(float *)(gen_frame + 0x20))))));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar17;
      F_0065f270(((float *)(gen_frame + 0x250)),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar17))),((float)gen_bits2f((unsigned int)(uintptr_t)(puVar10))),(float)(float10)0);
      puVar10 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x150)),iVar16 + 0x10);
      puVar17 = ((undefined4 *)(gen_frame + 0x1d0));
      for (iVar16 = 0x10; iVar16 != 0; iVar16 = iVar16 + -1) {
        *puVar17 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar17 = puVar17 + 1;
      }
      F_004be0e0(((undefined4 *)(gen_frame + 0x190)),((undefined4 *)(gen_frame + 0x1d0)));
      fVar9 = (*(float *)(gen_frame + 0x44));
      F_004be0e0(((undefined4 *)(gen_frame + 0x1d0)),(int)gen_fl2bits((*(float *)(gen_frame + 0x44))) + 0x10);
      F_004f1f30(((undefined4 *)(gen_frame + 0x190)),(uint)((undefined4 *)(gen_frame + 0x1d0)));
      F_004f1f30(((undefined4 *)(gen_frame + 0x190)),(int)gen_fl2bits(fVar9) + 0x50);
      F_004f1f30(((undefined4 *)(gen_frame + 0x190)),(uint)((float *)(gen_frame + 0x250)));
      fVar20 = (float10)REFG(int, 0x1488084);
      if (REFG(int, 0x1488084) < 0) {
        fVar20 = fVar20 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)(uintptr_t)gen_fl2bits((float)((float)(fVar20 * (float10)(*(float *)(gen_frame + 0x40))))));
      F_0065f270(((undefined4 *)(gen_frame + 0x190)),(float)(float10)0,(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x40))),
                   (float)(float10)0);
      if (*(int *)(REFG(int, 0x1371280) + 0x24) < 4) {
        fVar9 = *((float *)GEN_TOP((REFG(int, 0x1371280) + 0x3c + *(int *)(REFG(int, 0x1371280) + 0x24) * 4)));
      }
      else {
        fVar9 = *(float *)(REFG(int, 0x1371280) + 0x48);
      }
      uVar8 = 0;
      iVar16 = (int)gen_fl2bits((*(float *)(gen_frame + 0x3c))) + 0x50;
      (*(float *)(gen_frame + 0x44)) = fVar9;
      ((uint *)(gen_frame + 0x2a8))[0] = GEN_FLT_TO(((uint *)(gen_frame + 0x2a8))[0], REFG(float, 0x10abe98));
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = ((undefined4 *)GEN_TOP((0x3c - (int)(((uint *)(gen_frame + 0x2a8)) + 1))));
      do {
        if ((int)uVar8 < *(int *)(REFG(int, 0x1371280) + 0x24)) {
          uVar14 = *(uint *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4c)) + (int)((uint *)(gen_frame + 0x2a8)) + REFG(int, 0x1371280) + uVar8 * 4 + 4);
        }
        else {
          uVar14 = *((uint *)GEN_TOP((REFG(int, 0x1371280) + 0x3c + *(int *)(REFG(int, 0x1371280) + 0x24) * 4)));
        }
        (*(undefined4 *)(gen_frame + 0x10)) = 0;
        (*(undefined4 *)(gen_frame + 0x14)) = 0;
        (*(uint *)(gen_frame + 0x18)) = uVar14 ^ REFG(uint, 0x10920d0);
        uVar14 = F_004ee9b0(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar16);
        ((uint *)(gen_frame + 0x2a8))[(int)(uVar8 + 1)] = *(undefined4 *)(uVar14 + 8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
      puVar10 = (undefined4 *)F_004d9920(REFG(void * PTR32, 0x137fab0),0,0,2);
      (*(undefined4 * PTR32 *)(gen_frame + 0x4c)) = puVar10;
      if (puVar10 != (undefined4 *)0x0) {
        F_0065f550(((undefined4 *)(gen_frame + 0x1d0)),((undefined4 *)(gen_frame + 0x190)));
        puVar17 = ((undefined4 *)(gen_frame + 0x1d0));
        for (iVar16 = 0x10; iVar13 = REFG(int, 0x1488084), iVar16 != 0; iVar16 = iVar16 + -1) {
          *puVar10 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar10 = puVar10 + 1;
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x12] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x44)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x10] = ((uint *)(gen_frame + 0x2a8))[(int)(iVar13)];
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x13] = 0;
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x11] = ((uint *)(gen_frame + 0x2a8))[(int)(iVar13 + 1)];
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x14] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x20)));
        fVar20 = (float10)REFG(double, 0x1094800);
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x15] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x24)));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x17] = (undefined4)gen_fl2bits(REFG(float, 0x1087f04));
        (*(undefined4 * PTR32 *)(gen_frame + 0x4c))[0x16] =
             (undefined4)gen_fl2bits(((float)GEN_TOF(((float10)1 / ((float10)(*(float *)(gen_frame + 0x44)) * fVar20)))));
        *((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x137fab0) + 0x24))) = 0;
        *((undefined * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0xa8 + REFG(int, 0x1320544) * 4))) = REFG(void * PTR32, 0x137fab0);
        *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x2ac + REFG(int, 0x1320548) * 8))) =
             *(uint *)(REFG(int, 0x13759f8) + 100) & 0xfffffff;
        *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x2a8 + REFG(int, 0x1320548) * 8))) =
             *(undefined4 *)(REFG(int, 0x1371288) + 0x4c);
        *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x3c))) = REFG(undefined4, 0x1302370) & 0x7fffffff;
        uVar8 = REFG(undefined4, 0x130236c);
        iVar16 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8);
        *(uint *)(iVar16 + 0x58) = REFG(undefined4, 0x1302368) & 0xfe000000;
        *(uint *)(iVar16 + 0x5c) = uVar8 & 0xfffffffc;
        *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x50))) = 0xd;
        uVar15 = *(ushort *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x7e) & 3;
        if (uVar15 == 1) {
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x38))) = 0x78b8141;
        }
        else if (uVar15 == 2) {
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x38))) = 0x78b8143;
        }
        else {
          *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x38))) = 0x78b8541;
        }
        *((undefined4 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8) + 0x4c))) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 8);
        uVar7 = REFG(undefined4, 0x137fa98);
        if ((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4) == 0) ||
           (uVar7 = REFG(undefined4, 0x137fa0c), *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 4) - 1U < 2)) {
          iVar16 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x1a8);
          *(uint *)(iVar16 + 0x6c) = *(uint *)(iVar16 + 0x6c) & 0x800000ff;
          *(undefined1 *)(iVar16 + 0x6c) = 0x10;
          *(uint *)(iVar16 + 0x6c) = *(uint *)(iVar16 + 0x6c) & 0x7fffffff;
          *(undefined4 *)(iVar16 + 0x68) = uVar7;
        }
      }
    }
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar8 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x290)));
  F_00c47745((*(uint *)(gen_frame + 0x2bc)) ^ (uint)(uint)(gen_frame + 0x2c0));
  return uVar8;
}

/* ref: FUN_006405d0 */
unsigned int F_006405d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6405d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abe1c));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  uVar1 = REFG(float, 0x108b284);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x7c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x94) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x154) = uVar1;
  *(undefined4 *)((int)this + 0x158) = REFG(float, 0x1096cd4);
  *(undefined4 *)((int)this + 0x15c) = REFG(float, 0x1094884);
  *(undefined4 *)((int)this + 0x160) = REFG(float, 0x1094724);
  uVar1 = REFG(float, 0x1094880);
  *(undefined4 *)((int)this + 0xb4) = 1;
  *(undefined4 *)((int)this + 0x150) = 0x1e;
  *(undefined4 *)((int)this + 0x164) = uVar1;
  *(undefined1 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x1d0) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0xb0) = (*(undefined * PTR32 (*)[6])REFP(0x10abc98));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
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
  *(undefined4 *)((int)this + 0xa0) = 0;
  return 0;
}

/* ref: FUN_006406f0 */
unsigned int F_006406f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6406f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint * puVar3;
  uint * puVar4;
  
  if (*(char *)((int)this + 0x2ad) != '\0') {
    dVar2 = *(double *)&REFG(undefined, 0x10968a0) * 0.0;
    iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0xa8 + *(int *)((int)this + 0xa4) * 4))) =
         *(undefined4 *)((int)this + 0xa0);
    *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2a8 + *(int *)((int)this + 0xa8) * 8))) =
         *(undefined4 *)(REFG(int, 0x1371288) + 0x8c);
    (*(uint *)(gen_frame + 0x8)) = (int)dVar2;
    (*(uint *)(gen_frame + 0x4)) = 0x1ff;
    puVar3 = &(*(uint *)(gen_frame + 0x8));
    if (0x1fe < (int)dVar2) {
      puVar3 = &(*(uint *)(gen_frame + 0x4));
    }
    (*(uint *)(gen_frame + 0x8)) = *puVar3;
    (*(uint *)(gen_frame + 0x4)) = 0xfffffe00;
    puVar4 = &(*(uint *)(gen_frame + 0x4));
    if (-0x201 < (int)*puVar3) {
      puVar4 = &(*(uint *)(gen_frame + 0x8));
    }
    *((uint *)GEN_TOP((*(int *)(iVar1 + 0x1a8) + 0x2ac + *(int *)((int)this + 0xa8) * 8))) =
         (*puVar4 & 0x3ff) << 10 | 0x240;
  }
  return 0;
}

/* ref: FUN_006407c0 */
uint F_006407c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6407c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  int iVar2;
  undefined * this_00;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  undefined4 * puVar9;
  float fVar10;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((char)param_1 == '\0') {
    if ((*(int *)((int)this + 0x28c) == 0) || (!(0.0 < *(float *)((int)this + 0x29c)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  else if ((*(int *)((int)this + 0x294) == 0) || (!(0.0 < *(float *)((int)this + 0x2a4)))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  if ((char)param_1 == '\0') {
    if (*(int *)((int)this + 0x290) != 0) {
      fVar10 = *(float *)((int)this + 0x2a0);
      goto LAB_00640845;
    }
LAB_00640851: ;
    bVar4 = 0;
  }
  else {
    if (*(int *)((int)this + 0x298) == 0) goto LAB_00640851;
    fVar10 = *(float *)((int)this + 0x2a8);
LAB_00640845: ;
    bVar4 = 1;
    if (!(0.0 < fVar10)) goto LAB_00640851;
  }
  if ((char)uVar7 == '\0') goto LAB_00640b69;
  iVar2 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  this_00 = *(undefined * PTR32 *)(iVar2 + 0x1a8);
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabf4) == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabf4) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)),uVar5);
  uVar7 = (uint)((char)param_1 != '\0');
  iVar1 = ((uint)((char)param_2 != '\0') + uVar7 * 2) * 0xc;
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + iVar1 + 0x5c);
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this + iVar1 + 0x60);
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) {
    if ((*(int *)(gen_frame + 0x8)) != 0) {
      uVar6 = 0;
      if (*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x58) != 0) {
        piVar8 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x70);
        do {
          if (*piVar8 == *(int *)((int)this + (uint)bVar4 * 0xc + 0x8c)) {
            *(undefined4 *)((*(int *)(gen_frame + 0x8)) + uVar6 * 4) =
                 *(undefined4 *)((int)this + (uint)bVar4 * 0xc + 0x90);
            break;
          }
          uVar6 = uVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar6 < *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4)) + 0x58));
      }
    }
    if (((*(undefined * PTR32 *)(gen_frame + 0x4)) != (undefined *)0x0) && (uVar6 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x4)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0))), uVar6 != 0)) {
      *(uint *)((int)this_00 + 0x60) = uVar6;
      *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 4) * 4))) =
           *(undefined4 *)(REFG(int, 0x13759f8) + 8);
      if ((char)param_2 == '\0') {
        F_0066cca0();
      }
      else if (this != (undefined *)0xffffff50) {
        *((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x1a8) + 0xa8 + *(int *)(REFG(int, 0x13759f8) + 0x2c) * 4))) =
             *(undefined4 *)((int)this + 0x1d0);
      }
      *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x44) * 4 + 0xa8))) =
           *(undefined4 *)((int)this + uVar7 * 4 + 0x20);
      *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x48) * 4 + 0xa8))) =
           *(undefined4 *)((int)this + uVar7 * 4 + 0x28);
      *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x4c) * 4 + 0xa8))) =
           *(undefined4 *)((int)this + 0x30);
      if ((char)param_1 == '\0') {
        uVar5 = *(undefined4 *)((int)this + 0x28c);
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0x294);
      }
      *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x50) * 8 + 0x2a8))) = uVar5;
      uVar6 = (-(uint)((char)param_1 != '\0') & 2 | 0x78) * 4 | 0xf8000;
      *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x50) * 8 + 0x2ac))) = uVar6;
      if ((char)param_1 == '\0') {
        uVar5 = *(undefined4 *)((int)this + 0x290);
      }
      else {
        uVar5 = *(undefined4 *)((int)this + 0x298);
      }
      *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x54) * 8 + 0x2a8))) = uVar5;
      *((uint *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x54) * 8 + 0x2ac))) = uVar6;
      uVar6 = REFG(undefined4, 0x1302374);
      if ((char)param_2 == '\0') {
        uVar6 = REFG(undefined4, 0x1302370);
      }
      *(uint *)((int)this_00 + 0x3c) = uVar6 & 0x7fffffff;
      uVar6 = REFG(undefined4, 0x1302368);
      *(uint *)((int)this_00 + 0x5c) = REFG(undefined4, 0x130236c) & 0xfffffffc;
      *(uint *)((int)this_00 + 0x58) = uVar6 & 0xfe000000;
      *(uint *)((int)this_00 + 0x50) = REFG(undefined4, 0x130235c) & 0x1f;
      *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0xc);
      uVar5 = *(undefined4 *)((int)this + uVar7 * 4 + 0x10);
      *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
      *(undefined1 *)((int)this_00 + 0x6c) = 0xc;
      *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
      *(undefined4 *)((int)this_00 + 0x68) = uVar5;
      *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)((int)this + uVar7 * 4 + 0x18);
      iVar2 = REFG(int, 0x1370b90);
      uVar5 = *(undefined4 *)(&REFG(undefined, 0x10a6a90) + uVar7 * 4);
      uVar3 = *(undefined4 *)(&REFG(undefined, 0x10a6a98) + uVar7 * 4);
      uVar7 = *(int *)((int)this_00 + 0x18) + 0x60;
      if (uVar7 < 0x8001) {
        puVar9 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 0xc) + *(int *)((int)this_00 + 0x18))));
        *(uint *)((int)this_00 + 0x18) = uVar7;
LAB_00640b03: ;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 5;
          puVar9[6] = uVar3;
          puVar9[4] = uVar5;
          puVar9[1] = 6;
          puVar9[2] = 0;
          puVar9[3] = 0;
          puVar9[5] = 0;
          bVar4 = F_004dc830(this_00,puVar9 + 7);
          if (bVar4 != 0) {
            F_004d4810(this_00,puVar9);
          }
        }
      }
      else {
        piVar8 = (int *)(REFG(int, 0x1370b90) + 0xc0);
        LOCK();
        iVar1 = *piVar8;
        *piVar8 = *piVar8 + 0x8000;
        UNLOCK();
        if (*(uint *)(iVar2 + 0xb8) < (uint)(*(int *)(iVar2 + 0xc4) * 3 + *piVar8)) {
          LOCK();
          *piVar8 = *piVar8 + -0x8000;
          UNLOCK();
        }
        else {
          puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0xbc) + iVar1)));
          if (puVar9 != (undefined4 *)0x0) {
            *(undefined4 * PTR32 *)((int)this_00 + 0xc) = puVar9;
            *(undefined4 *)((int)this_00 + 0x18) = 0x60;
            goto LAB_00640b03;
          }
        }
      }
      *(uint *)((int)this_00 + 0x38) =
           (-(uint)((char)param_2 != '\0') & 0xfcfd2fa6) + 0x78b8171 & 0x7ffffff;
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar7 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
LAB_00640b69: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar7;
}

/* ref: FUN_006411c0 */
byte F_006411c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6411c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  undefined * this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  uint * puVar7;
  uint * puVar8;
  int * piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = this;
  F_004ff310(((byte *)(gen_frame + 0x8)) + 0xc,5,0);
  puVar7 = (uint *)((int)this + 4);
  (*(undefined4 *)(gen_frame + 0x18)) = 0x7368706b;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = puVar7;
  uVar11 = 0;
  puVar8 = puVar7;
  do {
    if (REFG(char, 0x1488088) == '\0') {
      uVar2 = F_00513d20(((byte *)(gen_frame + 0x8)) + 0xc,&(*(undefined4 *)(gen_frame + 0x18)),
                           *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1320550) + uVar11))),0,0,
                           0);
    }
    else {
      uVar2 = F_00513d70(((byte *)(gen_frame + 0x8)) + 0xc,&(*(undefined4 *)(gen_frame + 0x18)),
                           *((undefined4 *)GEN_TOP(((int)&REFG(undefined * PTR32, 0x1320550) + uVar11))),0,0,
                           0);
    }
    *puVar8 = uVar2;
    if (uVar2 == 0) {
      return 0;
    }
    uVar11 = uVar11 + 4;
    puVar8 = puVar8 + 1;
  } while (uVar11 < 0x8c);
  if (REFG(char, 0x1488088) != '\0') {
    uVar11 = 0;
    do {
      if (*puVar7 == 0) {
        return 1;
      }
      if (*(int *)(*puVar7 + 0x98) == 0) {
        return 1;
      }
      uVar11 = uVar11 + 1;
      puVar7 = puVar7 + 1;
    } while (uVar11 < 0x23);
    iVar12 = 2;
    if ((*(uint *)(REFG(int, 0x1370b90) + 0x34) >> 1 & 1) != 0) {
      iVar12 = 1;
    }
    pcVar3 = REFG(undefined * PTR32, 0x1322184);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar11 = F_00b52710(REFG(undefined * PTR32, 0x1322184),
                          (int)pcVar3 - (int)(REFG(undefined * PTR32, 0x1322184) + 1),0);
    pcVar3 = (&REFG(undefined * PTR32, 0x1322184))[iVar12];
    pcVar4 = pcVar3;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar2 = F_00b52710(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1),0);
    iVar12 = 0x23;
    piVar9 = (int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8));
    do {
      if (*piVar9 == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *(undefined * PTR32 *)(*piVar9 + 0x98);
      }
      F_00b527c0(this_00,uVar11,uVar2);
      piVar9 = piVar9 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    uVar11 = F_004df8f0(*(undefined * PTR32 *)(REFG(int, 0x1370b90) + 0x20),"g_SamplerReflection");
    ((byte *)(gen_frame + 0x8))[8] = (char)uVar11;
    ((byte *)(gen_frame + 0x8))[9] = (char)(uVar11 >> 8);
    ((byte *)(gen_frame + 0x8))[10] = (char)(uVar11 >> 0x10);
    ((byte *)(gen_frame + 0x8))[0xb] = (char)(uVar11 >> 0x18);
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x20))) == 0) {
      (*(undefined1 *)((char *)&uVar5 + 0)) = 0;
      (*(undefined1 *)((char *)&uVar5 + 1)) = 0;
      (*(undefined1 *)((char *)&uVar5 + 2)) = 0;
      (*(undefined1 *)((char *)&uVar5 + 3)) = 0;
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x20))) + 0x98)));
    }
    ((byte *)(gen_frame + 0x8))[0] = (byte)uVar5;
    ((byte *)(gen_frame + 0x8))[1] = SUB41(uVar5,1);
    ((byte *)(gen_frame + 0x8))[2] = SUB41(uVar5,2);
    ((byte *)(gen_frame + 0x8))[3] = SUB41(uVar5,3);
    if (*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x24))) == 0) {
      (*(undefined1 *)((char *)&uVar6 + 0)) = 0;
      (*(undefined1 *)((char *)&uVar6 + 1)) = 0;
      (*(undefined1 *)((char *)&uVar6 + 2)) = 0;
      (*(undefined1 *)((char *)&uVar6 + 3)) = 0;
    }
    else {
      uVar6 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) + 0x24))) + 0x98)));
    }
    ((byte *)(gen_frame + 0x8))[4] = (byte)uVar6;
    ((byte *)(gen_frame + 0x8))[5] = SUB41(uVar6,1);
    ((byte *)(gen_frame + 0x8))[6] = SUB41(uVar6,2);
    ((byte *)(gen_frame + 0x8))[7] = SUB41(uVar6,3);
    uVar2 = 0;
    do {
      iVar12 = *(int *)(((byte *)(gen_frame + 0x8)) + uVar2 * 4);
      uVar13 = 0;
      if (*(int *)(iVar12 + 0x50) != 0) {
        iVar10 = 0;
        do {
          if (*((uint *)GEN_TOP((*(int *)(iVar12 + 0x68) + 4 + iVar10))) == uVar11) {
            *((undefined2 *)GEN_TOP((*(int *)(iVar12 + 0x68) + 10 + iVar10))) = 2;
          }
          uVar13 = uVar13 + 1;
          iVar10 = iVar10 + 0xc;
        } while (uVar13 < *(uint *)(iVar12 + 0x50));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    *(uint *)(REFG(int, 0x137127c) + 0x11e44) = *(uint *)(REFG(int, 0x137127c) + 0x11e44) | 4;
  }
  return 1;
}

/* ref: FUN_006413a0 */
unsigned int F_006413a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6413a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x20) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x2c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x38) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x44) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  return 0;
}

/* ref: FUN_00641410 */
byte F_00641410(unsigned int gen_a0)
{
  GEN_ENTER(0x641410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  byte bVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  undefined4 * puVar7;
  
  bVar3 = F_0066e8d0((undefined *)((int)this + 0x44),*((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x24))));
  this_00 = REFG(void * PTR32, 0x1370b90);
  if (bVar3 == 0) {
    return 0;
  }
  uVar4 = F_004df8f0(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1370b90) + 0x1c))),"g_ShadowMaskParameter");
  *(uint *)((int)this + 0x10) = uVar4;
  uVar4 = F_004dcc90(0x60,4,8);
  *(uint *)((int)this + 4) = uVar4;
  if (uVar4 != 0) {
    uVar4 = F_004dccf0(0x48,1,4,8);
    *(uint *)((int)this + 8) = uVar4;
    if (uVar4 != 0) {
      F_004d58e0(((undefined1 *)(gen_frame + 0x8)),0,0,0x23,0);
      uVar4 = F_004deb40(this_00,((undefined1 *)(gen_frame + 0x8)),1);
      *(uint *)((int)this + 0xc) = uVar4;
      if (uVar4 != 0) {
        puVar5 = (undefined4 *)F_004d68c0(*(undefined * PTR32 *)((int)this + 4),0,0,2);
        uVar2 = REFG(float, 0x1090708);
        uVar1 = REFG(float, 0x1087f04);
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1090708));
          puVar5[1] = uVar1;
          puVar5[2] = uVar2;
          puVar5[3] = uVar1;
          puVar5[4] = uVar1;
          puVar5[5] = uVar2;
          puVar5[6] = uVar2;
          puVar5[7] = uVar2;
          puVar5[8] = uVar2;
          puVar5[9] = uVar1;
          puVar5[10] = uVar2;
          puVar5[0xb] = uVar2;
          puVar5[0xc] = uVar2;
          puVar5[0xd] = uVar1;
          puVar5[0xe] = uVar1;
          puVar5[0xf] = uVar1;
          puVar5[0x10] = uVar1;
          puVar5[0x11] = uVar1;
          puVar5[0x12] = uVar2;
          puVar5[0x13] = uVar2;
          puVar5[0x15] = uVar1;
          puVar5[0x14] = uVar1;
          puVar5[0x16] = uVar2;
          puVar5[0x17] = uVar1;
          F_004d6970(*(undefined * PTR32 *)((int)this + 4));
        }
        puVar5 = (undefined4 *)F_004d6a30(*(undefined * PTR32 *)((int)this + 8),0,0,2);
        if (puVar5 != (undefined4 *)0x0) {
          puVar7 = &REFG(undefined4, 0x10ac228);
          for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar5 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5 = puVar5 + 1;
          }
          F_004d6ae0(*(undefined * PTR32 *)((int)this + 8));
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00641610 */
uint F_00641610(unsigned int gen_a0)
{
  GEN_ENTER(0x641610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = F_0066ea40((undefined *)((int)this + 0x44));
  return uVar2;
}

/* ref: FUN_00641660 */
uint F_00641660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x641660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this_00;
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  ushort * puVar5;
  uint * puVar6;
  uint * puVar7;
  undefined4 * puVar8;
  
  (*(uint *)(gen_frame + 0x38)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  *((undefined4 *)GEN_TOP(((int)this_00 + *(int *)((int)this + 0x10) * 4 + 0xa8))) = *param_1;
  uVar2 = *(undefined4 *)((int)this + 4);
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x800000ff;
  *(undefined1 *)((int)this_00 + 0x6c) = 0xc;
  *(uint *)((int)this_00 + 0x6c) = *(uint *)((int)this_00 + 0x6c) & 0x7fffffff;
  *(undefined4 *)((int)this_00 + 0x68) = uVar2;
  *(undefined4 *)((int)this_00 + 0x48) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this_00 + 0x4c) = *(undefined4 *)((int)this + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
  (*(int *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  if (*(int *)(REFG(int, 0x137127c) + 0xabec) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *((undefined4 *)GEN_TOP((*(int *)(REFG(int, 0x137127c) + 0xabec) + 0x98)));
  }
  F_00b52c10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)),uVar2);
  uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x58);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  uVar3 = 0;
  if (uVar4 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x24)) + 0x70) + uVar3 * 4))) == *(int *)((int)this + 0x24)) {
        *(undefined4 *)((*(int *)(gen_frame + 0x28)) + uVar3 * 4) = *(undefined4 *)((int)this + 0x28);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) {
    (*(uint *)(gen_frame + 0xc)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x30);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x34);
    (*(uint *)(gen_frame + 0xc)) = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
  }
  if ((*(undefined * PTR32 *)(gen_frame + 0x24)) == (undefined *)0x0) {
    (*(uint *)(gen_frame + 0x1c)) = 0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x3c);
    (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)((int)this + 0x40);
    uVar4 = F_00b52db0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
    (*(uint *)(gen_frame + 0x1c)) = uVar4;
  }
  *(uint *)((int)this_00 + 0x60) = (*(uint *)(gen_frame + 0x1c));
  *(uint *)((int)this_00 + 8) = *(uint *)((int)this_00 + 8) & 0xfe180014 | 0x6180014;
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  *(undefined4 *)((int)this_00 + 0x50) = 5;
  *(undefined4 *)((int)this_00 + 0x58) = 0xa000000;
  ((byte *)(gen_frame + 0x10))[0] = 0;
  ((byte *)(gen_frame + 0x10))[1] = 0;
  ((byte *)(gen_frame + 0x10))[2] = 0;
  ((byte *)(gen_frame + 0x10))[3] = 0;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  *(undefined4 *)((int)this_00 + 0x5c) = 0xffff800c;
  puVar5 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x18)) + 2,(float)(float10)0);
  uVar4 = (uint)(*(double *)&REFG(undefined, 0x10968a0) * 0.0);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  ((byte *)(gen_frame + 0x10))[4] = 0xff;
  ((byte *)(gen_frame + 0x10))[5] = 1;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  puVar6 = &(*(uint *)(gen_frame + 0x18));
  if (0x1fe < (int)uVar4) {
    puVar6 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  }
  (*(uint *)(gen_frame + 0x18)) = *puVar6;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0xfe;
  ((byte *)(gen_frame + 0x10))[6] = 0xff;
  ((byte *)(gen_frame + 0x10))[7] = 0xff;
  puVar7 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  if (-0x201 < (int)*puVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x18));
  }
  *(uint *)((int)this_00 + 0x3c) = (*puVar7 & 0x3ff) << 0x15 ^ ((uint)*puVar5 << 5 | 7);
  puVar8 = (undefined4 *)F_004d4760(this_00,0x54);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 5;
    puVar8[1] = 5;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 8;
    puVar8[5] = 0;
    puVar8[6] = 0x24;
    bVar1 = F_004dc830(this_00,puVar8 + 7);
    if (bVar1 != 0) {
      F_004d4810(this_00,puVar8);
    }
  }
  *(uint *)((int)this_00 + 0x60) = (*(uint *)(gen_frame + 0xc));
  *(undefined4 *)((int)this_00 + 0x38) = 0x7808116;
  *(undefined4 *)((int)this_00 + 0x50) = 5;
  *(undefined4 *)((int)this_00 + 0x58) = 0xa000000;
  ((byte *)(gen_frame + 0x10))[0] = 0;
  ((byte *)(gen_frame + 0x10))[1] = 0;
  ((byte *)(gen_frame + 0x10))[2] = 0;
  ((byte *)(gen_frame + 0x10))[3] = 0;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  *(undefined4 *)((int)this_00 + 0x5c) = 0xff8100;
  puVar5 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x18)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x18)) = uVar4;
  ((byte *)(gen_frame + 0x10))[4] = 0xff;
  ((byte *)(gen_frame + 0x10))[5] = 1;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  puVar6 = &(*(uint *)(gen_frame + 0x18));
  if (0x1fe < (int)uVar4) {
    puVar6 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  }
  (*(uint *)(gen_frame + 0x18)) = *puVar6;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0xfe;
  ((byte *)(gen_frame + 0x10))[6] = 0xff;
  ((byte *)(gen_frame + 0x10))[7] = 0xff;
  puVar7 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  if (-0x201 < (int)*puVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x18));
  }
  *(uint *)((int)this_00 + 0x3c) = (*puVar7 & 0x3ff) << 0x15 ^ ((uint)*puVar5 << 5 | 0xf);
  puVar8 = (undefined4 *)F_004d4760(this_00,0x54);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 5;
    puVar8[1] = 5;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 8;
    puVar8[5] = 0;
    puVar8[6] = 0x24;
    bVar1 = F_004dc830(this_00,puVar8 + 7);
    if (bVar1 != 0) {
      F_004d4810(this_00,puVar8);
    }
  }
  *(uint *)((int)this_00 + 0x60) = (*(uint *)(gen_frame + 0x1c));
  *(uint *)((int)this_00 + 0x38) = REFG(undefined4, 0x1302358) & 0x7ffffff;
  *(undefined4 *)((int)this_00 + 0x50) = 5;
  *(undefined4 *)((int)this_00 + 0x5c) = 0xffff8110;
  ((byte *)(gen_frame + 0x10))[0] = 0;
  ((byte *)(gen_frame + 0x10))[1] = 0;
  ((byte *)(gen_frame + 0x10))[2] = 0;
  ((byte *)(gen_frame + 0x10))[3] = 0;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  *(undefined4 *)((int)this_00 + 0x58) = 0xa000000;
  puVar5 = (ushort *)F_004d4590((int)&(*(uint *)(gen_frame + 0x18)) + 2,(float)(float10)0);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  ((byte *)(gen_frame + 0x10))[4] = 0xff;
  ((byte *)(gen_frame + 0x10))[5] = 1;
  ((byte *)(gen_frame + 0x10))[6] = 0;
  ((byte *)(gen_frame + 0x10))[7] = 0;
  puVar6 = &(*(uint *)(gen_frame + 0x1c));
  if (0x1fe < (int)uVar4) {
    puVar6 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  }
  (*(uint *)(gen_frame + 0x1c)) = *puVar6;
  ((byte *)(gen_frame + 0x10))[4] = 0;
  ((byte *)(gen_frame + 0x10))[5] = 0xfe;
  ((byte *)(gen_frame + 0x10))[6] = 0xff;
  ((byte *)(gen_frame + 0x10))[7] = 0xff;
  puVar7 = (uint *)(((byte *)(gen_frame + 0x10)) + 4);
  if (-0x201 < (int)*puVar6) {
    puVar7 = &(*(uint *)(gen_frame + 0x1c));
  }
  *(uint *)((int)this_00 + 0x3c) = (*puVar7 & 0x3ff) << 0x15 ^ ((uint)*puVar5 << 5 | 7);
  puVar8 = (undefined4 *)F_004d4760(this_00,0x54);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 5;
    puVar8[1] = 5;
    puVar8[2] = 0;
    puVar8[3] = 0;
    puVar8[4] = 8;
    puVar8[5] = 0;
    puVar8[6] = 0x24;
    bVar1 = F_004dc830(this_00,puVar8 + 7);
    if (bVar1 != 0) {
      F_004d4810(this_00,puVar8);
    }
  }
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar4 = F_00b52cb0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x38)) ^ (uint)(uint)(gen_frame + 0x3c));
  return uVar4;
}

