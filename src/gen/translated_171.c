#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00da7c00 */
unsigned int F_00da7c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda7c00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar1 = *param_2;
  in_ecx[4] = (float)param_2[4];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[6];
  in_ecx[8] = (float)param_2[8];
  in_ecx[9] = (float)param_2[9];
  dVar2 = param_2[10];
  *in_ecx = (float)dVar1;
  dVar1 = param_2[1];
  in_ecx[10] = (float)dVar2;
  dVar2 = param_2[0xc];
  in_ecx[1] = (float)dVar1;
  dVar1 = param_2[2];
  in_ecx[0xc] = (float)dVar2;
  dVar2 = param_2[0xd];
  in_ecx[2] = (float)dVar1;
  in_ecx[0xd] = (float)dVar2;
  dVar1 = param_2[0xe];
  in_ecx[3] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[0xb] = 0.0;
  fVar3 = REFG(float, 0x1087f04);
  in_ecx[0xe] = (float)dVar1;
  in_ecx[0xf] = fVar3;
  return 0;
}

/* ref: FUN_00da7d00 */
unsigned int F_00da7d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda7d00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = gen_bits2f((uint)*param_2);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_2[1]);
  local_30 = gen_bits2f((uint)param_2[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_2[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_2[3]);
  local_40 = gen_bits2f((uint)param_2[4]);
  fStack_3c = gen_bits2f((uint)((ulonglong)param_2[4] >> 0x20));
  fStack_38 = gen_bits2f((uint)param_2[5]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_2[5] >> 0x20));
  in_ecx[4] = fStack_1c;
  in_ecx[5] = fStack_2c;
  in_ecx[6] = fStack_3c;
  in_ecx[7] = fStack_34;
  *in_ecx = local_20;
  in_ecx[1] = local_30;
  in_ecx[2] = local_40;
  in_ecx[3] = fStack_3c;
  in_ecx[8] = fStack_18;
  in_ecx[9] = fStack_28;
  in_ecx[10] = fStack_38;
  in_ecx[0xb] = fStack_34;
  fVar1 = gen_bits2f(*(uint *)(param_2 + 6) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  fVar2 = gen_bits2f(*(uint *)((int)param_2 + 0x34) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar3 = gen_bits2f(*(uint *)(param_2 + 7) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  in_ecx[0xc] = (fVar2 * fStack_1c + fVar1 * local_20) + fVar3 * fStack_18;
  in_ecx[0xd] = (fVar2 * fStack_2c + fVar1 * local_30) + fVar3 * fStack_28;
  in_ecx[0xe] = (fVar2 * fStack_3c + fVar1 * local_40) + fVar3 * fStack_38;
  in_ecx[0xf] = (fVar2 * fStack_34 + fVar1 * fStack_3c) + fVar3 * fStack_34;
  return 0;
}

/* ref: FUN_00da81c0 */
uint F_00da81c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda81c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  byte bVar2;
  undefined4 extraout_EDX = 0;
  undefined4 uVar3;
  
  bVar2 = F_00da2020(this,param_1,param_2);
  if (bVar2 != 0) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 0x34) - *(float *)(param_1 + 0x34)) <
                          param_2[1]);
    (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)((int)this + 0x30) - *(float *)(param_1 + 0x30)) < *param_2
                          );
    (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 0x38) - *(float *)(param_1 + 0x38)) <
                          param_2[2]);
    (*(undefined4 *)((char *)&auVar1 + 12)) =
         -(uint)(ABS(*(float *)((int)this + 0x3c) - *(float *)(param_1 + 0x3c)) < param_2[3]);
    uVar3 = gen_movmskps(&(auVar1));
    if (((byte)uVar3 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00da8220 */
uint F_00da8220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda8220u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar4 = *(uint *)&REFG(undefined, 0x1138afc);
  uVar1 = in_ecx[0xc];
  uVar2 = in_ecx[0xd];
  uVar3 = in_ecx[0xe];
  uVar9 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[1];
  uVar10 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[2];
  uVar11 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[3];
  uVar12 = *(uint *)&REFG(undefined, 0x10abc20) & in_ecx[4];
  uVar13 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[5];
  uVar14 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[6];
  uVar15 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[7];
  uVar5 = *(uint *)&REFG(undefined, 0x10abc20) & in_ecx[8];
  uVar6 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[9];
  uVar7 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[10];
  uVar8 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[0xb];
  *param_2 = *(uint *)&REFG(undefined, 0x10abc20) & *in_ecx;
  param_2[1] = uVar9;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  param_2[4] = uVar12;
  param_2[5] = uVar13;
  param_2[6] = uVar14;
  param_2[7] = uVar15;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  return (uint)param_2;
}

/* ref: FUN_00da8270 */
uint F_00da8270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda8270u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar4 = *(uint *)&REFG(undefined, 0x1138afc);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar9 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[1];
  uVar10 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[2];
  uVar11 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[3];
  uVar12 = *(uint *)&REFG(undefined, 0x10abc20) & param_2[4];
  uVar13 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[5];
  uVar14 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[6];
  uVar15 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[7];
  uVar5 = *(uint *)&REFG(undefined, 0x10abc20) & param_2[8];
  uVar6 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[9];
  uVar7 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[10];
  uVar8 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[0xb];
  *in_ecx = *(uint *)&REFG(undefined, 0x10abc20) & *param_2;
  in_ecx[1] = uVar9;
  in_ecx[2] = uVar10;
  in_ecx[3] = uVar11;
  in_ecx[4] = uVar12;
  in_ecx[5] = uVar13;
  in_ecx[6] = uVar14;
  in_ecx[7] = uVar15;
  in_ecx[8] = uVar5;
  in_ecx[9] = uVar6;
  in_ecx[10] = uVar7;
  in_ecx[0xb] = uVar8;
  in_ecx[0xc] = uVar1;
  in_ecx[0xd] = uVar2;
  in_ecx[0xe] = uVar3;
  in_ecx[0xf] = uVar4;
  return (uint)param_2;
}

/* ref: FUN_00da83a0 */
uint F_00da83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda83a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00da8830 */
byte F_00da8830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda8830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  float * this;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar15;
  float fVar17;
  float fVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar37;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  F_00da8270(&(*(float *)(gen_frame + 0x80)),param_1);
  F_00dbd040(&(*(float *)(gen_frame + 0xc0)),param_1);
  fVar9 = *(float *)&REFG(undefined, 0x1138afc);
  (*(float *)(gen_frame + 0xc0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xc4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xc8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xcc)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xcc))) & *(uint *)&REFG(undefined, 0x10abc2c));
  (*(float *)(gen_frame + 0xd0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xd4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xd8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xdc)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xdc))) & *(uint *)&REFG(undefined, 0x10abc2c));
  (*(float *)(gen_frame + 0xe0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xe4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xe8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xec)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xec))) & *(uint *)&REFG(undefined, 0x10abc2c));
  *param_2 = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
  param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb4)));
  param_2[2] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8)));
  param_2[3] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xbc)));
  (*(float *)(gen_frame + 0xfc)) = fVar9;
  iVar8 = 0;
  (*(float *)(gen_frame + 0x140)) = (*(float *)(gen_frame + 0x80));
  (*(undefined4 *)(gen_frame + 0x144)) = (*(undefined4 *)(gen_frame + 0x84));
  (*(undefined4 *)(gen_frame + 0x148)) = (*(undefined4 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x14c)) = (*(undefined4 *)(gen_frame + 0x8c));
  (*(undefined4 *)(gen_frame + 0x150)) = (*(undefined4 *)(gen_frame + 0x90));
  (*(undefined4 *)(gen_frame + 0x154)) = (*(undefined4 *)(gen_frame + 0x94));
  (*(undefined4 *)(gen_frame + 0x158)) = (*(undefined4 *)(gen_frame + 0x98));
  (*(undefined4 *)(gen_frame + 0x15c)) = (*(undefined4 *)(gen_frame + 0x9c));
  (*(undefined4 *)(gen_frame + 0x160)) = (*(undefined4 *)(gen_frame + 0xa0));
  (*(undefined4 *)(gen_frame + 0x164)) = (*(undefined4 *)(gen_frame + 0xa4));
  (*(undefined4 *)(gen_frame + 0x168)) = (*(undefined4 *)(gen_frame + 0xa8));
  (*(undefined4 *)(gen_frame + 0x16c)) = (*(undefined4 *)(gen_frame + 0xac));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd0));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd4));
  (*(undefined8 *)(gen_frame + 0x1b0)) = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1138bd4),*(undefined4 *)&REFG(undefined, 0x1138bd0));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd8));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bdc));
  (*(undefined8 *)(gen_frame + 0x1b8)) = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1138bdc),*(undefined4 *)&REFG(undefined, 0x1138bd8));
  do {
    (*(undefined4 *)(gen_frame + 0x70)) = (*(undefined4 *)(gen_frame + 0x160));
    (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x164));
    (*(undefined4 *)(gen_frame + 0x78)) = (*(undefined4 *)(gen_frame + 0x168));
    (*(undefined4 *)(gen_frame + 0x7c)) = (*(undefined4 *)(gen_frame + 0x16c));
    (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x160));
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x164));
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x168));
    (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x16c));
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x140));
    (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x144));
    (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x148));
    (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x14c));
    (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0x150));
    (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x154));
    (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0x158));
    (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0x15c));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x140));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x144));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x148));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x14c));
    (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x150));
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x154));
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x158));
    (*(undefined4 *)(gen_frame + 0x2c)) = (*(undefined4 *)(gen_frame + 0x15c));
    F_00da2150(&(*(float *)(gen_frame + 0x10)),REFG(float, 0x10905c4));
    F_00da1640(&(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x114)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x118)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x11c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x120)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x124)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x128)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x12c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x6c)));
    (*(float *)(gen_frame + 0x130)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x134)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x138)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x13c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x7c)));
    F_00da1920(&(*(float *)(gen_frame + 0x110)),&(*(float *)(gen_frame + 0x10)));
    F_00da18f0(&(*(float *)(gen_frame + 0x140)),&(*(undefined8 *)(gen_frame + 0x1b0)),&(*(float *)(gen_frame + 0x110)));
    iVar8 = iVar8 + 1;
    if (0x1d < iVar8) break;
    bVar5 = F_00da1fa0(&(*(float *)(gen_frame + 0x140)),&(*(float *)(gen_frame + 0x50)),REFG(float, 0x10905c4));
  } while (bVar5 == 0);
  param_2[0x30] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x140)));
  param_2[0x31] = (*(undefined4 *)(gen_frame + 0x144));
  param_2[0x32] = (*(undefined4 *)(gen_frame + 0x148));
  param_2[0x33] = (*(undefined4 *)(gen_frame + 0x14c));
  param_2[0x34] = (*(undefined4 *)(gen_frame + 0x150));
  param_2[0x35] = (*(undefined4 *)(gen_frame + 0x154));
  param_2[0x36] = (*(undefined4 *)(gen_frame + 0x158));
  param_2[0x37] = (*(undefined4 *)(gen_frame + 0x15c));
  param_2[0x38] = (*(undefined4 *)(gen_frame + 0x160));
  param_2[0x39] = (*(undefined4 *)(gen_frame + 0x164));
  param_2[0x3a] = (*(undefined4 *)(gen_frame + 0x168));
  param_2[0x3b] = (*(undefined4 *)(gen_frame + 0x16c));
  uVar27 = *(undefined8 *)(param_2 + 0x30);
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(undefined4 *)((char *)&auVar28 + 4)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 12)) = (undefined4)gen_fl2bits(fVar9);
  (*(float *)((char *)&auVar52 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 12)) = (fVar15 + fVar9) + fVar17;
  gen_rsqrtps(&(auVar29), &(auVar28), &(auVar52));
  fVar9 = (*(float *)((char *)&auVar29 + 0));
  fVar15 = (*(float *)((char *)&auVar29 + 4));
  fVar17 = (*(float *)((char *)&auVar29 + 8));
  fVar19 = (*(float *)((char *)&auVar29 + 12));
  (*(float *)((char *)&auVar51 + 0)) = *(float *)&REFG(undefined, 0x113c440) * fVar9;
  (*(float *)((char *)&auVar51 + 4)) = *(float *)&REFG(undefined, 0x113c444) * fVar15;
  (*(float *)((char *)&auVar51 + 8)) = *(float *)&REFG(undefined, 0x113c448) * fVar17;
  (*(float *)((char *)&auVar51 + 12)) = *(float *)&REFG(undefined, 0x113c44c) * fVar19;
  fVar41 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) *
           gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 0)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - (fVar9 * (*(float *)((char *)&auVar52 + 0))) * fVar9)
                                        * (*(float *)((char *)&auVar51 + 0))));
  fVar43 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) *
           gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 4)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) -
                                        (fVar15 * (*(float *)((char *)&auVar52 + 4))) * fVar15) * (*(float *)((char *)&auVar51 + 4))));
  fVar45 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) *
           gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 8)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) -
                                        (fVar17 * (*(float *)((char *)&auVar52 + 8))) * fVar17) * (*(float *)((char *)&auVar51 + 8))));
  fVar47 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) *
           gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 12)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c43c) -
                                        (fVar19 * (*(float *)((char *)&auVar52 + 12))) * fVar19) * (*(float *)((char *)&auVar51 + 12))));
  uVar27 = *(undefined8 *)(param_2 + 0x34);
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(float *)((char *)&auVar29 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 12)) = (fVar15 + fVar9) + fVar17;
  gen_rsqrtps(&(auVar52), &(auVar51), &(auVar29));
  fVar25 = (*(float *)((char *)&auVar52 + 0));
  fVar33 = (*(float *)((char *)&auVar52 + 4));
  fVar35 = (*(float *)((char *)&auVar52 + 8));
  fVar37 = (*(float *)((char *)&auVar52 + 12));
  fVar9 = (fVar25 * (*(float *)((char *)&auVar29 + 0))) * fVar25;
  fVar15 = (fVar33 * (*(float *)((char *)&auVar29 + 4))) * fVar33;
  fVar17 = (fVar35 * (*(float *)((char *)&auVar29 + 8))) * fVar35;
  fVar19 = (fVar37 * (*(float *)((char *)&auVar29 + 12))) * fVar37;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (undefined4)gen_fl2bits(fVar15);
  (*(float *)(gen_frame + 0x1a8)) = fVar17;
  (*(float *)(gen_frame + 0x1ac)) = fVar19;
  uVar27 = *(undefined8 *)(param_2 + 0x38);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar25 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 0)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - fVar9) *
                                        (*(float *)&REFG(undefined, 0x113c440) * fVar25))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar33 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 4)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) - fVar15) *
                                        (*(float *)&REFG(undefined, 0x113c444) * fVar33))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar35 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 8)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) - fVar17) *
                                        (*(float *)&REFG(undefined, 0x113c448) * fVar35))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  fVar37 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 12)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c43c) - fVar19) *
                                        (*(float *)&REFG(undefined, 0x113c44c) * fVar37))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4));
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar27 = (*(undefined8 *)(gen_frame + 0x1b0));
  uVar1 = *(undefined8 *)(param_2 + 0x3a);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  uVar1 = (*(undefined8 *)(gen_frame + 0x1b8));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(undefined4 *)((char *)&auVar53 + 4)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 12)) = (undefined4)gen_fl2bits(fVar9);
  (*(float *)((char *)&auVar21 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 12)) = (fVar15 + fVar9) + fVar17;
  (*(float *)(gen_frame + 0x170)) = *(float *)&REFG(undefined, 0x113c430);
  (*(float *)(gen_frame + 0x174)) = *(float *)&REFG(undefined, 0x113c434);
  (*(float *)(gen_frame + 0x178)) = *(float *)&REFG(undefined, 0x113c438);
  (*(float *)(gen_frame + 0x17c)) = *(float *)&REFG(undefined, 0x113c43c);
  (*(float *)(gen_frame + 0x180)) = *(float *)&REFG(undefined, 0x113c440);
  (*(float *)(gen_frame + 0x184)) = *(float *)&REFG(undefined, 0x113c444);
  (*(float *)(gen_frame + 0x188)) = *(float *)&REFG(undefined, 0x113c448);
  (*(float *)(gen_frame + 0x18c)) = *(float *)&REFG(undefined, 0x113c44c);
  gen_rsqrtps(&(auVar52), &(auVar53), &(auVar21));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), &(auVar52), sizeof(auVar52) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) ? sizeof(auVar52) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))));
  memcpy(&(auVar52), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) < sizeof(auVar52) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) : sizeof(auVar52));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (*(undefined4 *)((char *)&auVar52 + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (*(undefined4 *)((char *)&auVar52 + 4));
  (*(float *)(gen_frame + 0x1a8)) = (*(float *)((char *)&auVar52 + 8));
  (*(float *)(gen_frame + 0x1ac)) = (*(float *)((char *)&auVar52 + 12));
  fVar50 = *(float *)&REFG(undefined, 0x113c44c) * (*(float *)(gen_frame + 0x1ac));
  (*(float *)(gen_frame + 0x190)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0))) * (*(float *)((char *)&auVar21 + 0));
  (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4))) * (*(float *)((char *)&auVar21 + 4));
  (*(float *)(gen_frame + 0x198)) = (*(float *)(gen_frame + 0x1a8)) * (*(float *)((char *)&auVar21 + 8));
  (*(float *)(gen_frame + 0x19c)) = (*(float *)(gen_frame + 0x1ac)) * (*(float *)((char *)&auVar21 + 12));
  fVar9 = (gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0))) * (*(float *)((char *)&auVar21 + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)));
  fVar15 = (gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4))) * (*(float *)((char *)&auVar21 + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)));
  fVar17 = ((*(float *)(gen_frame + 0x1a8)) * (*(float *)((char *)&auVar21 + 8))) * (*(float *)(gen_frame + 0x1a8));
  fVar19 = ((*(float *)(gen_frame + 0x1ac)) * (*(float *)((char *)&auVar21 + 12))) * (*(float *)(gen_frame + 0x1ac));
  (*(float *)(gen_frame + 0x190)) = fVar9;
  (*(float *)(gen_frame + 0x194)) = fVar15;
  (*(float *)(gen_frame + 0x198)) = fVar17;
  (*(float *)(gen_frame + 0x19c)) = fVar19;
  fVar19 = *(float *)&REFG(undefined, 0x113c43c) - fVar19;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 0)) <= 0.0) &
                     (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - fVar9) *
                                       (*(float *)&REFG(undefined, 0x113c440) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)))))) *
          (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 4)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) - fVar15) *
                                        (*(float *)&REFG(undefined, 0x113c444) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)))))) *
           (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 8)) <= 0.0) &
                      (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) - fVar17) *
                                        (*(float *)&REFG(undefined, 0x113c448) * (*(float *)(gen_frame + 0x1a8))))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  fVar49 = ((fVar35 * fVar9 - fVar25 * fVar17) * fVar43 +
           (fVar33 * fVar17 - fVar35 * fVar15) * fVar41) +
           (fVar25 * fVar15 - fVar33 * fVar9) * fVar45;
  if (!(0.0 <= fVar49)) {
    fVar41 = fVar41 * *(float *)&REFG(undefined, 0x1138ad0);
    fVar43 = fVar43 * *(float *)&REFG(undefined, 0x1138ad4);
    fVar45 = fVar45 * *(float *)&REFG(undefined, 0x1138ad8);
    fVar47 = fVar47 * *(float *)&REFG(undefined, 0x1138adc);
  }
  this = (float *)(param_2 + 4);
  *(bool *)((int)param_2 + 0x32) = !(0.0 <= fVar49);
  (*(float *)(gen_frame + 0x110)) = fVar41;
  (*(float *)(gen_frame + 0x114)) = fVar43;
  (*(float *)(gen_frame + 0x118)) = fVar45;
  (*(float *)(gen_frame + 0x11c)) = fVar47;
  (*(float *)(gen_frame + 0x120)) = fVar25;
  (*(float *)(gen_frame + 0x124)) = fVar33;
  (*(float *)(gen_frame + 0x128)) = fVar35;
  (*(float *)(gen_frame + 0x12c)) = fVar37;
  (*(float *)(gen_frame + 0x130)) = fVar9;
  (*(float *)(gen_frame + 0x134)) = fVar15;
  (*(float *)(gen_frame + 0x138)) = fVar17;
  (*(float *)(gen_frame + 0x13c)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar19 * fVar50)) *
              (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), &(auVar52), sizeof(auVar52) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) ? sizeof(auVar52) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))));
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  F_00d991c0(this,&(*(float *)(gen_frame + 0x110)));
  fVar9 = *this;
  fVar15 = gen_bits2f(param_2[5]);
  fVar17 = gen_bits2f(param_2[6]);
  fVar19 = gen_bits2f(param_2[7]);
  (*(float *)((char *)&auVar11 + 0)) = fVar17 * fVar17 + fVar9 * fVar9;
  (*(float *)((char *)&auVar11 + 4)) = fVar19 * fVar19 + fVar15 * fVar15;
  (*(float *)((char *)&auVar11 + 8)) = fVar9 * fVar9 + fVar17 * fVar17;
  (*(float *)((char *)&auVar11 + 12)) = fVar15 * fVar15 + fVar19 * fVar19;
  (*(float *)((char *)&auVar30 + 0)) = (*(float *)((char *)&auVar11 + 4)) + (*(float *)((char *)&auVar11 + 0));
  (*(float *)((char *)&auVar30 + 4)) = (*(float *)((char *)&auVar11 + 0)) + (*(float *)((char *)&auVar11 + 4));
  (*(float *)((char *)&auVar30 + 8)) = (*(float *)((char *)&auVar11 + 12)) + (*(float *)((char *)&auVar11 + 8));
  (*(float *)((char *)&auVar30 + 12)) = (*(float *)((char *)&auVar11 + 8)) + (*(float *)((char *)&auVar11 + 12));
  gen_rsqrtps(&(auVar52), &(auVar11), &(auVar30));
  fVar25 = (*(float *)((char *)&auVar52 + 0));
  fVar33 = (*(float *)((char *)&auVar52 + 4));
  fVar35 = (*(float *)((char *)&auVar52 + 8));
  fVar37 = (*(float *)((char *)&auVar52 + 12));
  *this = fVar9 * (((*(float *)(gen_frame + 0x170)) - (fVar25 * (*(float *)((char *)&auVar30 + 0))) * fVar25) * ((*(float *)(gen_frame + 0x180)) * fVar25));
  param_2[5] = (undefined4)
               gen_fl2bits(fVar15 * (((*(float *)(gen_frame + 0x174)) - (fVar33 * (*(float *)((char *)&auVar30 + 4))) * fVar33) *
                                    ((*(float *)(gen_frame + 0x184)) * fVar33)));
  param_2[6] = (undefined4)
               gen_fl2bits(fVar17 * (((*(float *)(gen_frame + 0x178)) - (fVar35 * (*(float *)((char *)&auVar30 + 8))) * fVar35) *
                                    ((*(float *)(gen_frame + 0x188)) * fVar35)));
  param_2[7] = (undefined4)
               gen_fl2bits(fVar19 * (((*(float *)(gen_frame + 0x17c)) - (fVar37 * (*(float *)((char *)&auVar30 + 12))) * fVar37) *
                                    ((*(float *)(gen_frame + 0x18c)) * fVar37)));
  F_00da7350(((undefined1 *)(gen_frame + 0x0)),this);
  (*(undefined4 *)(gen_frame + 0x30)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x38)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x3c)) = param_2[3];
  F_00da7d00(((undefined1 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00dbd040(&(*(uint *)(gen_frame + 0x100)),((undefined1 *)(gen_frame + 0x40)));
  fVar9 = *(float *)&REFG(undefined, 0x1138afc);
  fVar17 = gen_bits2f((*(uint *)(gen_frame + 0x100)) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar19 = gen_bits2f((*(uint *)(gen_frame + 0x104)) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar25 = gen_bits2f((*(uint *)(gen_frame + 0x108)) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar33 = gen_bits2f((*(uint *)(gen_frame + 0x10c)) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar35 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x110))) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar37 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x114))) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar41 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x118))) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar43 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x11c))) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar45 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x120))) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar47 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x124))) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar49 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x128))) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar50 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x12c))) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar15 = (*(float *)(gen_frame + 0xcc)) * *(float *)&REFG(undefined, 0x1138afc);
  param_2[0x10] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar35 + (*(float *)(gen_frame + 0xc0)) * fVar17) + (*(float *)(gen_frame + 0xc8)) * fVar45) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x11] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar37 + (*(float *)(gen_frame + 0xc0)) * fVar19) + (*(float *)(gen_frame + 0xc8)) * fVar47) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x12] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar41 + (*(float *)(gen_frame + 0xc0)) * fVar25) + (*(float *)(gen_frame + 0xc8)) * fVar49) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x13] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar43 + (*(float *)(gen_frame + 0xc0)) * fVar33) + (*(float *)(gen_frame + 0xc8)) * fVar50) + fVar15);
  param_2[0x14] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar35 + (*(float *)(gen_frame + 0xd0)) * fVar17) + (*(float *)(gen_frame + 0xd8)) * fVar45) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x15] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar37 + (*(float *)(gen_frame + 0xd0)) * fVar19) + (*(float *)(gen_frame + 0xd8)) * fVar47) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x16] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar41 + (*(float *)(gen_frame + 0xd0)) * fVar25) + (*(float *)(gen_frame + 0xd8)) * fVar49) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x17] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar43 + (*(float *)(gen_frame + 0xd0)) * fVar33) + (*(float *)(gen_frame + 0xd8)) * fVar50) +
                   (*(float *)(gen_frame + 0xdc)) * fVar9);
  param_2[0x18] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar35 + (*(float *)(gen_frame + 0xe0)) * fVar17) + (*(float *)(gen_frame + 0xe8)) * fVar45) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x19] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar37 + (*(float *)(gen_frame + 0xe0)) * fVar19) + (*(float *)(gen_frame + 0xe8)) * fVar47) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x1a] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar41 + (*(float *)(gen_frame + 0xe0)) * fVar25) + (*(float *)(gen_frame + 0xe8)) * fVar49) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x1b] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar43 + (*(float *)(gen_frame + 0xe0)) * fVar33) + (*(float *)(gen_frame + 0xe8)) * fVar50) +
                   (*(float *)(gen_frame + 0xec)) * fVar9);
  param_2[0x1c] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar35 + (*(float *)(gen_frame + 0xf0)) * fVar17) + (*(float *)(gen_frame + 0xf8)) * fVar45) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x1d] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar37 + (*(float *)(gen_frame + 0xf0)) * fVar19) + (*(float *)(gen_frame + 0xf8)) * fVar47) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x1e] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar41 + (*(float *)(gen_frame + 0xf0)) * fVar25) + (*(float *)(gen_frame + 0xf8)) * fVar49) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x1f] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar43 + (*(float *)(gen_frame + 0xf0)) * fVar33) + (*(float *)(gen_frame + 0xf8)) * fVar50) +
                   (*(float *)(gen_frame + 0xfc)) * fVar9);
  fVar19 = *(float *)&REFG(undefined, 0x113c45c);
  fVar17 = *(float *)&REFG(undefined, 0x113c458);
  fVar15 = *(float *)&REFG(undefined, 0x113c454);
  fVar9 = *(float *)&REFG(undefined, 0x113c450);
  fVar48 = *(float *)&REFG(undefined, 0x1138afc);
  fVar46 = *(float *)&REFG(undefined, 0x1138af8);
  fVar44 = *(float *)&REFG(undefined, 0x1138af4);
  fVar42 = *(float *)&REFG(undefined, 0x1138af0);
  (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c454));
  (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c450));
  (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c458));
  (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c45c));
  uVar27 = CONCAT44((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)),param_2[0x1a]);
  *(ulonglong *)(param_2 + 8) = CONCAT44(param_2[0x15],param_2[0x10]);
  *(undefined8 *)(param_2 + 10) = uVar27;
  (*(undefined4 *)((char *)&auVar12 + 4)) = -(uint)(ABS(gen_bits2f(param_2[0x15]) - *(float *)&REFG(undefined, 0x1138af4)) < fVar15);
  (*(undefined4 *)((char *)&auVar12 + 0)) = -(uint)(ABS(gen_bits2f(param_2[0x10]) - *(float *)&REFG(undefined, 0x1138af0)) < fVar9);
  (*(undefined4 *)((char *)&auVar12 + 8)) = -(uint)(ABS(gen_bits2f(param_2[0x1a]) - *(float *)&REFG(undefined, 0x1138af8)) < fVar17);
  (*(undefined4 *)((char *)&auVar12 + 12)) = -(uint)(ABS(fVar42 - *(float *)&REFG(undefined, 0x1138afc)) < fVar19);
  uVar7 = gen_movmskps(&(auVar12));
  *(bool *)(param_2 + 0xc) = ((byte)uVar7 & 7) != 7;
  memcpy(&(auVar52), &(*(gen_v16 *)(param_2 + 8)), sizeof(*(gen_v16 *)(param_2 + 8)) < sizeof(auVar52) ? sizeof(*(gen_v16 *)(param_2 + 8)) : sizeof(auVar52));
  fVar42 = fVar42 * *(float *)&REFG(undefined, 0x1138ca0);
  fVar44 = fVar44 * *(float *)&REFG(undefined, 0x1138ca4);
  fVar46 = fVar46 * *(float *)&REFG(undefined, 0x1138ca8);
  fVar48 = fVar48 * *(float *)&REFG(undefined, 0x1138cac);
  fVar9 = gen_bits2f(param_2[0x18]);
  gen_rcpps(&(auVar29), &(auVar4), &(auVar52));
  fVar10 = (*(float *)&REFG(undefined, 0x113c420) - (*(float *)((char *)&auVar29 + 0)) * (*(float *)((char *)&auVar52 + 0))) * (*(float *)((char *)&auVar29 + 0));
  fVar16 = (*(float *)&REFG(undefined, 0x113c424) - (*(float *)((char *)&auVar29 + 4)) * (*(float *)((char *)&auVar52 + 4))) * (*(float *)((char *)&auVar29 + 4));
  fVar18 = (*(float *)&REFG(undefined, 0x113c428) - (*(float *)((char *)&auVar29 + 8)) * (*(float *)((char *)&auVar52 + 8))) * (*(float *)((char *)&auVar29 + 8));
  (*(float *)(gen_frame + 0xb0)) = fVar42;
  (*(float *)(gen_frame + 0xb4)) = fVar44;
  (*(float *)(gen_frame + 0xb8)) = fVar46;
  (*(float *)(gen_frame + 0xbc)) = fVar48;
  fVar15 = gen_bits2f(param_2[0x14]);
  fVar20 = fVar10 * (float)REFG(float, 0x1138c70);
  fVar23 = fVar10 * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar24 = fVar10 * (float)REFG(undefined8, 0x1138c78);
  fVar10 = fVar10 * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  fVar26 = fVar16 * (float)REFG(float, 0x1138c80);
  fVar34 = fVar16 * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar36 = fVar16 * (float)REFG(undefined8, 0x1138c88);
  fVar16 = fVar16 * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  fVar38 = fVar18 * (float)REFG(float, 0x1138c90);
  fVar39 = fVar18 * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar40 = fVar18 * (float)REFG(undefined8, 0x1138c98);
  fVar18 = fVar18 * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  fVar17 = gen_bits2f(param_2[0x15]);
  (*(float *)(gen_frame + 0x180)) = fVar17 * fVar26;
  (*(float *)(gen_frame + 0x184)) = fVar17 * fVar34;
  (*(float *)(gen_frame + 0x188)) = fVar17 * fVar36;
  (*(float *)(gen_frame + 0x18c)) = fVar17 * fVar16;
  fVar19 = gen_bits2f(param_2[0x19]);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (undefined4)gen_fl2bits(fVar19 * fVar26);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (undefined4)gen_fl2bits(fVar19 * fVar34);
  (*(float *)(gen_frame + 0x1a8)) = fVar19 * fVar36;
  (*(float *)(gen_frame + 0x1ac)) = fVar19 * fVar16;
  fVar25 = gen_bits2f(param_2[0x1d]);
  fVar33 = gen_bits2f(param_2[0x16]);
  (*(float *)(gen_frame + 0x170)) = fVar33 * fVar38;
  (*(float *)(gen_frame + 0x174)) = fVar33 * fVar39;
  (*(float *)(gen_frame + 0x178)) = fVar33 * fVar40;
  (*(float *)(gen_frame + 0x17c)) = fVar33 * fVar18;
  fVar35 = gen_bits2f(param_2[0x1a]);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = fVar35 * fVar38;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = fVar35 * fVar39;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = fVar35 * fVar40;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = fVar35 * fVar18;
  fVar37 = gen_bits2f(param_2[0x1e]);
  fVar41 = gen_bits2f(param_2[0x17]);
  fVar43 = gen_bits2f(param_2[0x1c]);
  (*(float *)(gen_frame + 0x190)) = fVar41 * fVar42;
  (*(float *)(gen_frame + 0x194)) = fVar41 * fVar44;
  (*(float *)(gen_frame + 0x198)) = fVar41 * fVar46;
  (*(float *)(gen_frame + 0x19c)) = fVar41 * fVar48;
  fVar45 = gen_bits2f(param_2[0x1b]);
  fVar47 = gen_bits2f(param_2[0x1f]);
  fVar49 = gen_bits2f(param_2[0x10]);
  fVar50 = gen_bits2f(param_2[0x11]);
  fVar2 = gen_bits2f(param_2[0x12]);
  fVar3 = gen_bits2f(param_2[0x13]);
  param_2[0x24] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar20 + fVar17 * fVar26) + fVar33 * fVar38) + fVar41 * fVar42);
  param_2[0x25] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar23 + fVar17 * fVar34) + fVar33 * fVar39) + fVar41 * fVar44);
  param_2[0x26] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar24 + fVar17 * fVar36) + fVar33 * fVar40) + fVar41 * fVar46);
  param_2[0x27] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar10 + fVar17 * fVar16) + fVar33 * fVar18) + fVar41 * fVar48);
  param_2[0x28] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar20 + fVar19 * fVar26) + fVar35 * fVar38) + fVar45 * fVar42);
  param_2[0x29] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar23 + fVar19 * fVar34) + fVar35 * fVar39) + fVar45 * fVar44);
  param_2[0x2a] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar24 + fVar19 * fVar36) + fVar35 * fVar40) + fVar45 * fVar46);
  param_2[0x2b] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar10 + fVar19 * fVar16) + fVar35 * fVar18) + fVar45 * fVar48);
  param_2[0x2c] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar20 + fVar25 * fVar26) + fVar37 * fVar38) + fVar47 * fVar42);
  param_2[0x2d] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar23 + fVar25 * fVar34) + fVar37 * fVar39) + fVar47 * fVar44);
  param_2[0x2e] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar24 + fVar25 * fVar36) + fVar37 * fVar40) + fVar47 * fVar46);
  param_2[0x2f] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar10 + fVar25 * fVar16) + fVar37 * fVar18) + fVar47 * fVar48);
  param_2[0x20] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar26 + fVar49 * fVar20) + fVar2 * fVar38) + fVar3 * fVar42);
  param_2[0x21] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar34 + fVar49 * fVar23) + fVar2 * fVar39) + fVar3 * fVar44);
  param_2[0x22] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar36 + fVar49 * fVar24) + fVar2 * fVar40) + fVar3 * fVar46);
  param_2[0x23] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar16 + fVar49 * fVar10) + fVar2 * fVar18) + fVar3 * fVar48);
  (*(undefined8 *)((char *)&auVar13 + 0)) =
       CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x2d]) - *(float *)&REFG(undefined, 0x1138ca4)),
                (uint)gen_fl2bits(gen_bits2f(param_2[0x2c]) - *(float *)&REFG(undefined, 0x1138ca0))) &
       0x7fffffff7fffffff;
  (*(float *)((char *)&auVar13 + 8)) = ABS(gen_bits2f(param_2[0x2e]) - *(float *)&REFG(undefined, 0x1138ca8));
  (*(float *)((char *)&auVar13 + 12)) = ABS(gen_bits2f(param_2[0x2f]) - *(float *)&REFG(undefined, 0x1138cac));
  (*(undefined8 *)((char *)&auVar22 + 0)) =
       CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x29]) - (*(float *)((char *)&REFG(float, 0x1138c90) + 4))),
                (uint)gen_fl2bits(gen_bits2f(param_2[0x28]) - (float)REFG(float, 0x1138c90))) &
       0x7fffffff7fffffff;
  (*(float *)((char *)&auVar22 + 8)) = ABS(gen_bits2f(param_2[0x2a]) - (float)REFG(undefined8, 0x1138c98));
  (*(float *)((char *)&auVar22 + 12)) = ABS(gen_bits2f(param_2[0x2b]) - (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4)));
  gen_maxps(&(auVar52), &(auVar22), &(auVar13));
  (*(undefined8 *)((char *)&auVar31 + 0)) =
       CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x21]) - (*(float *)((char *)&REFG(float, 0x1138c70) + 4))),
                (uint)gen_fl2bits(gen_bits2f(param_2[0x20]) - (float)REFG(float, 0x1138c70))) &
       0x7fffffff7fffffff;
  (*(float *)((char *)&auVar31 + 8)) = ABS(gen_bits2f(param_2[0x22]) - (float)REFG(undefined8, 0x1138c78));
  (*(float *)((char *)&auVar31 + 12)) = ABS(gen_bits2f(param_2[0x23]) - (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)));
  (*(undefined8 *)((char *)&auVar14 + 0)) =
       CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x25]) - (*(float *)((char *)&REFG(float, 0x1138c80) + 4))),
                (uint)gen_fl2bits(gen_bits2f(param_2[0x24]) - (float)REFG(float, 0x1138c80))) &
       0x7fffffff7fffffff;
  (*(float *)((char *)&auVar14 + 8)) = ABS(gen_bits2f(param_2[0x26]) - (float)REFG(undefined8, 0x1138c88));
  (*(float *)((char *)&auVar14 + 12)) = ABS(gen_bits2f(param_2[0x27]) - (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4)));
  gen_maxps(&(auVar29), &(auVar31), &(auVar14));
  gen_maxps(&(auVar52), &(auVar29), &(auVar52));
  (*(undefined4 *)((char *)&auVar32 + 4)) = -(uint)((*(float *)((char *)&auVar52 + 4)) <= *(float *)&REFG(undefined, 0x113c454));
  (*(undefined4 *)((char *)&auVar32 + 0)) = -(uint)((*(float *)((char *)&auVar52 + 0)) <= *(float *)&REFG(undefined, 0x113c450));
  (*(undefined4 *)((char *)&auVar32 + 8)) = -(uint)((*(float *)((char *)&auVar52 + 8)) <= *(float *)&REFG(undefined, 0x113c458));
  (*(undefined4 *)((char *)&auVar32 + 12)) = -(uint)((*(float *)((char *)&auVar52 + 12)) <= *(float *)&REFG(undefined, 0x113c45c));
  iVar8 = gen_movmskps(&(auVar32));
  *(bool *)((int)param_2 + 0x31) = iVar8 != 0xf;
  return iVar8 != 0xf;
}

/* ref: FUN_00da8fe0 */
byte F_00da8fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda8fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00da8830(param_1,param_2);
  return bVar1;
}

/* ref: FUN_00da9070 */
uint F_00da9070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00da9090 */
uint F_00da9090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = *in_ecx;
  in_ecx[1] = uVar1;
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00da90b0 */
uint F_00da90b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda90b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = uVar1;
  in_ecx[3] = in_ecx[3];
  return param_2;
}

/* ref: FUN_00da9150 */
uint F_00da9150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xda9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
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
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)((int)this + 0x30) = *param_4;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00da9190 */
uint F_00da9190(unsigned int gen_a0)
{
  GEN_ENTER(0xda9190u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138adc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ad8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ad4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138ad0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00da91b0 */
uint F_00da91b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda91b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da91d0 */
uint F_00da91d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda91d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x14);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da91f0 */
uint F_00da91f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda91f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x28);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da9210 */
uint F_00da9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9210u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  return (uint)param_2;
}

/* ref: FUN_00da9240 */
uint F_00da9240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xda9240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1] * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar2 = param_1[2] * (float)REFG(undefined8, 0x1138c78);
  fVar3 = param_1[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  *(float *)this = *param_1 * (float)REFG(float, 0x1138c70);
  *(float *)((int)this + 4) = fVar1;
  *(float *)((int)this + 8) = fVar2;
  *(float *)((int)this + 0xc) = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c88);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  *(float *)((int)this + 0x10) = *param_2 * (float)REFG(float, 0x1138c80);
  *(float *)((int)this + 0x14) = fVar1;
  *(float *)((int)this + 0x18) = fVar2;
  *(float *)((int)this + 0x1c) = fVar3;
  fVar1 = param_3[1] * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar2 = param_3[2] * (float)REFG(undefined8, 0x1138c98);
  fVar3 = param_3[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  *(float *)((int)this + 0x20) = *param_3 * (float)REFG(float, 0x1138c90);
  *(float *)((int)this + 0x24) = fVar1;
  *(float *)((int)this + 0x28) = fVar2;
  *(float *)((int)this + 0x2c) = fVar3;
  fVar1 = param_4[1] * *(float *)&REFG(undefined, 0x1138ca4);
  fVar2 = param_4[2] * *(float *)&REFG(undefined, 0x1138ca8);
  fVar3 = param_4[3] * *(float *)&REFG(undefined, 0x1138cac);
  *(float *)((int)this + 0x30) = *param_4 * *(float *)&REFG(undefined, 0x1138ca0);
  *(float *)((int)this + 0x34) = fVar1;
  *(float *)((int)this + 0x38) = fVar2;
  *(float *)((int)this + 0x3c) = fVar3;
  return (uint)param_3;
}

/* ref: FUN_00da9290 */
byte F_00da9290(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xda9290u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  (*(undefined8 *)((char *)&auVar2 + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[9] - param_2[9]),
                          (uint)gen_fl2bits(in_ecx[8] - param_2[8])) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar2 + 8)) = ABS(in_ecx[10] - param_2[10]);
  (*(float *)((char *)&auVar2 + 12)) = ABS(in_ecx[0xb] - param_2[0xb]);
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(ABS(in_ecx[0xe] - param_2[0xe]));
  (*(undefined8 *)((char *)&auVar3 + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[0xd] - param_2[0xd]),
                          (uint)gen_fl2bits(in_ecx[0xc] - param_2[0xc])) & 0x7fffffff7fffffff;
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(ABS(in_ecx[0xf] - param_2[0xf]));
  gen_maxps(&(auVar3), &(auVar2), &(auVar3));
  (*(undefined8 *)((char *)&auVar4 + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[1] - param_2[1]),
                          (uint)gen_fl2bits(*in_ecx - *param_2)) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar4 + 8)) = ABS(in_ecx[2] - param_2[2]);
  (*(float *)((char *)&auVar4 + 12)) = ABS(in_ecx[3] - param_2[3]);
  (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(ABS(in_ecx[6] - param_2[6]));
  (*(undefined8 *)((char *)&auVar5 + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[5] - param_2[5]),
                          (uint)gen_fl2bits(in_ecx[4] - param_2[4])) & 0x7fffffff7fffffff;
  (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(ABS(in_ecx[7] - param_2[7]));
  gen_maxps(&(auVar5), &(auVar4), &(auVar5));
  gen_maxps(&(auVar3), &(auVar5), &(auVar3));
  (*(undefined4 *)((char *)&auVar6 + 4)) = -(uint)((*(float *)((char *)&auVar3 + 4)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 0)) = -(uint)((*(float *)((char *)&auVar3 + 0)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 8)) = -(uint)((*(float *)((char *)&auVar3 + 8)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 12)) = -(uint)((*(float *)((char *)&auVar3 + 12)) <= param_3);
  iVar1 = gen_movmskps(&(auVar6));
  return iVar1 == 0xf;
}

/* ref: hkSimpleLocalFrame::vf13 */
unsigned int F_00da9560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x60));
  }
  *(undefined * PTR32 *)(this + 0x60) = param_1;
  return 0;
}

/* ref: FUN_00da95c0 */
uint F_00da95c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda95c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,((undefined1 *)(gen_frame + 0x0)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x30));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  param_1[3] = (*(undefined4 *)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: hkSimpleLocalFrame::vf5 */
uint F_00da9600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x44);
  uVar2 = *(undefined4 *)(in_ecx + 0x48);
  uVar3 = *(undefined4 *)(in_ecx + 0x4c);
  *param_2 = *(undefined4 *)(in_ecx + 0x40);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf10 */
uint F_00da9620(unsigned int gen_a0)
{
  GEN_ENTER(0xda9620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: hkSimpleLocalFrame::vf11 */
uint F_00da9630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x50) + param_2 * 4)));
}

/* ref: hkSimpleLocalFrame::vf14 */
unsigned int F_00da9640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int * piVar2;
  int local_8;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))();
  if (uVar1 != 0) {
    local_8 = 0;
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this,local_8)));
        if (piVar2 != (int *)0x0) {
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            F_00d95710(param_2,param_1,4);
          }
          *(int * PTR32 *)(*param_1 + param_1[1] * 4) = piVar2;
          param_1[1] = param_1[1] + 1;
          ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,param_1,param_2);
        }
        local_8 = local_8 + 1;
        uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this);
      } while (local_8 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: hkSimpleLocalFrame::vf4 */
uint F_00da96e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda96e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = uVar1;
  *(undefined4 *)(in_ecx + 0x18) = uVar2;
  *(undefined4 *)(in_ecx + 0x1c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(in_ecx + 0x20) = param_2[4];
  *(undefined4 *)(in_ecx + 0x24) = uVar1;
  *(undefined4 *)(in_ecx + 0x28) = uVar2;
  *(undefined4 *)(in_ecx + 0x2c) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(in_ecx + 0x30) = param_2[8];
  *(undefined4 *)(in_ecx + 0x34) = uVar1;
  *(undefined4 *)(in_ecx + 0x38) = uVar2;
  *(undefined4 *)(in_ecx + 0x3c) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(in_ecx + 0x40) = param_2[0xc];
  *(undefined4 *)(in_ecx + 0x44) = uVar1;
  *(undefined4 *)(in_ecx + 0x48) = uVar2;
  *(undefined4 *)(in_ecx + 0x4c) = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf3 */
uint F_00da9710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(in_ecx + 0x14);
  uVar2 = *(undefined4 *)(in_ecx + 0x18);
  uVar3 = *(undefined4 *)(in_ecx + 0x1c);
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x24);
  uVar2 = *(undefined4 *)(in_ecx + 0x28);
  uVar3 = *(undefined4 *)(in_ecx + 0x2c);
  param_2[4] = *(undefined4 *)(in_ecx + 0x20);
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x34);
  uVar2 = *(undefined4 *)(in_ecx + 0x38);
  uVar3 = *(undefined4 *)(in_ecx + 0x3c);
  param_2[8] = *(undefined4 *)(in_ecx + 0x30);
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x44);
  uVar2 = *(undefined4 *)(in_ecx + 0x48);
  uVar3 = *(undefined4 *)(in_ecx + 0x4c);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x40);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf6 */
unsigned int F_00da9740(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda9740u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar7 [16];
  
  fVar3 = *param_2 - *(float *)(param_1 + 0x40);
  fVar4 = param_2[1] - *(float *)(param_1 + 0x44);
  fVar5 = param_2[2] - *(float *)(param_1 + 0x48);
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = (fVar4 + fVar3) + fVar5;
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  gen_rsqrtps(&(auVar7), &(in_XMM3), &(auVar7));
  fVar3 = (*(float *)((char *)&auVar7 + 0));
  fVar3 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x113c460) - (fVar3 * fVar6) * fVar3) *
                                       (*(float *)&REFG(undefined, 0x113c470) * fVar3)) * fVar6));
  if (fVar3 <= param_3) {
    ((code *)*(gen_code32 *)(*param_4 + 0xc))(param_4,param_1,(undefined4)gen_fl2bits(fVar3));
  }
  if (0 < *(int *)(param_1 + 0x54)) {
    F_00d94d00(((undefined1 *)(gen_frame + 0x0)),param_1 + 0x10,param_2);
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 0x54)) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x50) + iVar2 * 4)));
        ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,((undefined1 *)(gen_frame + 0x0)),(undefined4)gen_fl2bits(param_3),param_4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(param_1 + 0x54));
    }
  }
  return 0;
}

/* ref: FUN_00da9830 */
uint F_00da9830(unsigned int gen_a0)
{
  GEN_ENTER(0xda9830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 0x54);
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
  if (0 < iVar1) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x50) + iVar3 * 4))));
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x60) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x60));
  }
  F_00d91510((undefined *)((int)this + 100));
  uVar2 = *(uint *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x54) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x50),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00da98b0 */
uint F_00da98b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda98b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00da98c0 */
uint F_00da98c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda98c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00da98f0 */
unsigned int F_00da98f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda98f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00da9920 */
uint F_00da9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00da9960 */
uint F_00da9960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)in_ecx;
}

/* ref: FUN_00da9990 */
uint F_00da9990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9990u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*in_ecx - *param_3) * (*in_ecx - *param_3);
  fVar2 = (in_ecx[1] - param_3[1]) * (in_ecx[1] - param_3[1]);
  fVar3 = (in_ecx[2] - param_3[2]) * (in_ecx[2] - param_3[2]);
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_00da99d0 */
unsigned int F_00da99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda99d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = (*in_ecx - *param_3) * (*in_ecx - *param_3);
  fVar2 = (in_ecx[1] - param_3[1]) * (in_ecx[1] - param_3[1]);
  fVar3 = (in_ecx[2] - param_3[2]) * (in_ecx[2] - param_3[2]);
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x113c464) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x113c468) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x113c46c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x113c474) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x113c478) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x113c47c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x113c460) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x113c470) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: FUN_00da9a70 */
uint F_00da9a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00da9a80 */
float10 F_00da9a80(unsigned int gen_a0)
{
  GEN_ENTER(0xda9a80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float * pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  pfVar1 = (float *)(in_ecx + 8);
  iVar2 = 2;
  do {
    fVar3 = (((((fVar3 + pfVar1[-2]) + pfVar1[-1]) + *pfVar1) + pfVar1[1]) + pfVar1[2]) + pfVar1[3];
    pfVar1 = pfVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (float10)fVar3;
}

/* ref: FUN_00da9ad0 */
uint F_00da9ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xda9ad0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d91340(in_ecx + 8);
  return in_ecx;
}

/* ref: FUN_00da9ae0 */
uint F_00da9ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9ae0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx + 8,param_2);
  return in_ecx;
}

/* ref: FUN_00da9b00 */
unsigned int F_00da9b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda9b00u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  short * psVar1;
  float * pfVar2;
  short * psVar3;
  float * pfVar4;
  int local_8;
  
  pfVar4 = (float *)(in_eax + 0xc);
  psVar3 = (short *)(in_eax + 0x34);
  pfVar2 = (float *)(param_2 + 4);
  psVar1 = (short *)(param_2 + 0x30);
  local_8 = 2;
  do {
    pfVar2[-1] = pfVar4[-3] + pfVar2[-1];
    *psVar1 = *psVar1 + *((short *)GEN_TOP(((in_eax - param_2) + (int)psVar1)));
    *pfVar2 = *((float *)GEN_TOP(((in_eax - param_2) + (int)pfVar2))) + *pfVar2;
    psVar1[1] = psVar1[1] + psVar3[-1];
    pfVar2[1] = pfVar4[-1] + pfVar2[1];
    psVar1[2] = psVar1[2] + *psVar3;
    pfVar2[2] = pfVar2[2] + *pfVar4;
    psVar1[3] = psVar1[3] + psVar3[1];
    pfVar2[3] = pfVar4[1] + pfVar2[3];
    psVar1[4] = psVar1[4] + psVar3[2];
    pfVar2[4] = pfVar4[2] + pfVar2[4];
    psVar1[5] = psVar1[5] + psVar3[3];
    psVar1 = psVar1 + 6;
    psVar3 = psVar3 + 6;
    pfVar2 = pfVar2 + 6;
    pfVar4 = pfVar4 + 6;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00da9bd0 */
uint F_00da9bd0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9bd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  short * psVar5;
  double dVar6;
  
  uVar2 = 0;
  puVar3 = (ushort *)(param_3 + 0x32);
  iVar4 = 2;
  do {
    uVar1 = puVar3[-1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = *puVar3;
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[2];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[3];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[4];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    puVar3 = puVar3 + 6;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    dVar6 = ((double)GEN_TOD(((*(float *)(param_3 + 4) * REFG(float, 0x10916ec)) / param_2)));
    F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),200,"%s (%i) %4.1f%%",*(undefined4 *)(param_3 + 100),uVar2,
                 (int)(ulonglong)gen_d2bits(dVar6),(int)((ulonglong)gen_d2bits(dVar6) >> 0x20));
  }
  else {
    F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),200,"%s (%i)",*(undefined4 *)(param_3 + 100),uVar2);
  }
  F_00da00e0(param_1,"%-34s%s",((undefined1 *)(gen_frame + 0xc)),&REFG(undefined, 0x113c49c));
  iVar4 = 0;
  psVar5 = (short *)(param_3 + 0x30);
  do {
    if (*psVar5 != 0) {
      dVar6 = (double)*(float *)(param_3 + iVar4 * 4);
      F_00da00e0(param_1,"% 12.3f: ",(int)(ulonglong)gen_d2bits(dVar6),
                   (int)((ulonglong)gen_d2bits(dVar6) >> 0x20));
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 0xc);
  uVar2 = F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  return uVar2;
}

/* ref: FUN_00da9d20 */
byte F_00da9d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda9d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00da1030(((undefined1 *)(gen_frame + 0x8)),0,0x12);
  (*(undefined1 *)(gen_frame + 0xa)) = 2;
  (*(undefined2 *)(gen_frame + 0x16)) = (short)param_4;
  (*(undefined2 *)(gen_frame + 0x14)) = (short)param_3;
  (*(undefined1 *)(gen_frame + 0x18)) = 0x20;
  F_00da0140(param_2,((undefined1 *)(gen_frame + 0x8)),0x12);
  F_00da0140(param_2,param_1,param_3 * param_4 * 4);
  return 1;
}

/* ref: FUN_00da9d80 */
unsigned int F_00da9d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9d80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int in_esi = (int)gen_a2;
  int * piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 * local_8;
  
  piVar1 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x13526b8))[(int)(in_ecx)]));
  local_8 = (undefined4 *)(in_esi + in_eax * 4);
  iVar4 = 0;
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    if ((piVar1[6] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *(undefined4 *)(iVar3 + in_esi) = 0xff000000;
    }
    if ((piVar1[5] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *local_8 = 0xff000000;
    }
    if ((piVar1[4] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 2) * 4))) = 0xff000000;
    }
    if ((piVar1[3] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 3) * 4))) = 0xff000000;
    }
    if ((piVar1[2] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 4) * 4))) = 0xff000000;
    }
    if ((piVar1[1] << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 5) * 4))) = 0xff000000;
    }
    if ((*piVar1 << (bVar2 & 0x1f) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 6) * 4))) = 0xff000000;
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x20);
  return 0;
}

/* ref: FUN_00da9e60 */
int F_00da9e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda9e60u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar2 = 1000;
  do {
    F_00da9d80(param_3,(param_2 / iVar2) % 10,in_eax);
    iVar1 = iVar2 * 0x66666667;
    iVar2 = iVar2 / 10;
    in_eax = in_eax + 0x1c;
  } while (0 < iVar2);
  return iVar1;
}

/* ref: FUN_00da9ef0 */
uint F_00da9ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xda9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  return (param_1 / param_2 - param_4) / param_3 - param_5;
}

/* ref: FUN_00da9f50 */
uint F_00da9f50(unsigned int gen_a0)
{
  GEN_ENTER(0xda9f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  F_00d91480(this,"Unknown Heading");
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  return (uint)this;
}

/* ref: FUN_00da9f90 */
unsigned int F_00da9f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xda9f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar5 = param_1;
  if (param_1 < param_2) {
    do {
      uVar1 = *puVar5;
      if ((char)param_4 == '\0') {
        if (uVar1 < 0x15) goto switchD_00daa00e_caseD_46;
LAB_00da9fe7: ;
        uVar1 = F_00dbd9c0(param_3,uVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0xc)));
        if (uVar1 != 0) break;
        *puVar5 = (uint)(*(undefined1 * PTR32 *)(gen_frame + 0xc));
        switch((unsigned int)(uintptr_t)(*(*(undefined1 * PTR32 *)(gen_frame + 0xc)))) {
        case 0x45: ;
        case 0x53: ;
        case 0x54: ;
        case 0x6c: ;
          puVar6 = puVar5 + 3;
          if ((char)param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x28)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x28)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[1] = (*(uint *)(gen_frame + 0x28));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x24)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x24));
          }
          break;
        case 0x46: ;
        case 0x4e: ;
        case 0x50: ;
        case 0x70: ;
          goto switchD_00daa00e_caseD_46;
        default: ;
          goto switchD_00daa00e_caseD_47;
        case 0x4c: ;
          puVar6 = puVar5 + 4;
          uVar1 = F_00dbd9c0(param_3,puVar5[3],&(*(uint *)(gen_frame + 0x4)));
          if (uVar1 == 0) {
            puVar5[3] = (*(uint *)(gen_frame + 0x4));
          }
          if ((char)param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 1)) = uVar4;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = CONCAT11(uVar4,uVar2);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x18)) = CONCAT13((char)uVar1,CONCAT12(uVar3,(undefined2)(*(uint *)(gen_frame + 0x18))));
            puVar5[1] = (*(uint *)(gen_frame + 0x18));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = uVar2;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 1)) = uVar4;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = uVar3;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x14)) = CONCAT13((char)uVar1,CONCAT12(uVar3,CONCAT11(uVar4,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x14));
          }
          break;
        case 0x4d: ;
          puVar6 = puVar5 + 2;
          if ((char)param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x10)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[1] = (*(uint *)(gen_frame + 0x10));
          }
          break;
        case 0x4f: ;
          puVar6 = puVar5 + 4;
          uVar1 = F_00dbd9c0(param_3,puVar5[3],&(*(uint *)(gen_frame + 0x8)));
          if (uVar1 == 0) {
            puVar5[3] = (*(uint *)(gen_frame + 0x8));
          }
          if ((char)param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 1)) = uVar4;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = CONCAT11(uVar4,uVar2);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x20)) = CONCAT13((char)uVar1,CONCAT12(uVar3,(undefined2)(*(uint *)(gen_frame + 0x20))));
            puVar5[1] = (*(uint *)(gen_frame + 0x20));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = uVar2;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = uVar4;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = uVar3;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x1c)) = CONCAT13((char)uVar1,CONCAT12(uVar3,CONCAT11(uVar4,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x1c));
          }
        }
      }
      else {
        param_1 = ((uint *)GEN_TOP(CONCAT13((char)uVar1,
                                   CONCAT12((char)(uVar1 >> 8),
                                            CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))))));
        if (0x14 < param_1) goto LAB_00da9fe7;
        *puVar5 = (uint)param_1;
switchD_00daa00e_caseD_46: ;
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 < param_2);
switchD_00daa00e_caseD_47: ;
  }
  return 0;
}

/* ref: FUN_00daa1f0 */
unsigned int F_00daa1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaa1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  short * psVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  float10 fVar9;
  
  uVar3 = *(uint *)(param_1 + 4);
  if (uVar3 < 0xc) {
    uVar4 = *(uint *)(param_3 + 4);
    uVar5 = *(uint *)(param_2 + 4);
    if (uVar4 < uVar5) {
      iVar8 = (uVar4 - uVar5) + -1;
    }
    else {
      iVar8 = uVar4 - uVar5;
    }
    fVar9 = (float10)iVar8;
    if (iVar8 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)((int)this + uVar3 * 4) =
         ((float)GEN_TOF((fVar9 * (float10)*(float *)(param_1 + 0x10) +
                (float10)*(float *)((int)this + uVar3 * 4))));
    psVar1 = (short *)((int)this + uVar3 * 2 + 0x30);
    *psVar1 = *psVar1 + 1;
  }
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 0xc) {
    if (*(uint *)(param_3 + 4) < *(uint *)(param_2 + 4)) {
      iVar8 = (*(int *)(param_3 + 8) - *(int *)(param_2 + 8)) + -1;
    }
    else {
      iVar8 = *(int *)(param_3 + 8) - *(int *)(param_2 + 8);
    }
    fVar9 = (float10)iVar8;
    if (iVar8 < 0) {
      fVar9 = fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    *(float *)((int)this + uVar3 * 4) =
         ((float)GEN_TOF((fVar9 * (float10)*(float *)(param_1 + 0x14) +
                (float10)*(float *)((int)this + uVar3 * 4))));
    psVar1 = (short *)((int)this + uVar3 * 2 + 0x30);
    *psVar1 = *psVar1 + 1;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar6 = *(int *)(param_2 + 4);
    fVar2 = *(float *)(param_1 + 0x10);
    iVar8 = *(int *)(param_2 + 4);
  }
  else {
    if (*(int *)(param_1 + 0xc) != 1) {
      return 0;
    }
    iVar6 = *(int *)(param_2 + 8);
    fVar2 = *(float *)(param_1 + 0x14);
    iVar8 = *(int *)(param_2 + 8);
  }
  dVar7 = (double)iVar8;
  if (iVar6 < 0) {
    dVar7 = dVar7 + *(double *)&REFG(double, 0x10b8de8);
  }
  *(double *)((int)this + 0x58) = dVar7 * (double)fVar2;
  return 0;
}

/* ref: FUN_00daa2c0 */
byte F_00daa2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaa2c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  
  if ((*param_3 < *(int *)(in_edi + 0x4c)) &&
     (uVar1 = F_00da0d20(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + *param_3 * 4))) + 100))),
                           param_2), uVar1 == 0)) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *(int *)(in_edi + 0x4c)) {
    do {
      uVar1 = F_00da0d20(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar2 * 4))) + 100))),
                           param_2);
      if (uVar1 == 0) {
        *param_3 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_edi + 0x4c));
  }
  return 0;
}

/* ref: FUN_00daa340 */
unsigned int F_00daa340(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xdaa340u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  
  *(float *)(param_1 + param_2 * 4) = *(float *)(param_1 + param_2 * 4) * param_3;
  *(undefined2 *)(param_1 + 0x30 + param_2 * 2) = 0;
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      F_00daa340(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar1 * 4))),param_2,param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x4c));
  }
  return 0;
}

/* ref: FUN_00daa3a0 */
uint F_00daa3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaa3a0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint uVar6;
  uint * puVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*param_1 != '\0') {
    uVar6 = *(uint *)(param_2 + 0x60);
    puVar7 = *(uint * PTR32 *)(uVar6 + 0x48);
    uVar3 = *puVar7;
    if (uVar3 == param_2) {
      if (*(int *)(uVar6 + 0x60) != 0) {
        param_2 = uVar6;
      }
    }
    else {
      iVar2 = 0;
      puVar5 = puVar7;
      if (0 < *(int *)(uVar6 + 0x4c)) {
        do {
          if (*puVar5 == param_2) {
            uVar3 = puVar7[iVar2 + -1];
            break;
          }
          iVar2 = iVar2 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar2 < *(int *)(uVar6 + 0x4c));
      }
      iVar2 = *(int *)(uVar3 + 0x4c);
      param_2 = uVar3;
      while ((0 < iVar2 && ((*(byte *)(param_2 + 0x68) & 1) != 0))) {
        param_2 = *((uint *)GEN_TOP((*(int *)(param_2 + 0x48) + -4 + iVar2 * 4)));
        iVar2 = *(int *)(param_2 + 0x4c);
      }
    }
  }
  uVar6 = param_2;
  if (param_1[1] != '\0') {
    uVar3 = param_2;
    if ((*(int *)(param_2 + 0x4c) < 1) || (uVar3 = param_2, (*(byte *)(param_2 + 0x68) & 1) == 0)) {
      do {
        uVar1 = *(uint *)(uVar3 + 0x60);
        iVar2 = *(int *)(uVar1 + 0x4c);
        iVar4 = 0;
        if (0 < iVar2) {
          puVar7 = *(uint * PTR32 *)(uVar1 + 0x48);
          do {
            if ((*puVar7 == uVar3) && (iVar4 < iVar2 + -1)) {
              uVar6 = *((uint *)GEN_TOP((*(int *)(uVar1 + 0x48) + 4 + iVar4 * 4)));
              goto LAB_00daa46a;
            }
            iVar4 = iVar4 + 1;
            puVar7 = puVar7 + 1;
          } while (iVar4 < iVar2);
        }
        uVar3 = uVar1;
      } while (*(int *)(uVar1 + 0x60) != 0);
    }
    else {
      uVar6 = **(uint * PTR32 *)(param_2 + 0x48);
    }
  }
LAB_00daa46a: ;
  if (param_1[2] != '\0') {
    if ((*(uint *)(uVar6 + 0x68) & 1) == 0) {
      uVar3 = *(uint *)(uVar6 + 0x60);
      if (*(int *)(uVar3 + 0x60) != 0) {
        *(uint *)(uVar3 + 0x68) = *(uint *)(uVar3 + 0x68) & 0xfffffffe;
        uVar6 = uVar3;
      }
    }
    else {
      *(uint *)(uVar6 + 0x68) = *(uint *)(uVar6 + 0x68) & 0xfffffffe;
    }
  }
  if (param_1[3] != '\0') {
    if ((*(uint *)(uVar6 + 0x68) & 1) == 0) {
      *(uint *)(uVar6 + 0x68) = *(uint *)(uVar6 + 0x68) | 1;
    }
    *(uint *)(uVar6 + 0x68) = *(uint *)(uVar6 + 0x68) | 1;
  }
  return uVar6;
}

/* ref: FUN_00daa4c0 */
uint F_00daa4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaa4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(*(undefined4 *)(param_1 + 100));
  uVar1 = uVar1 + 8 + param_2 * param_3;
  if (((char)param_4 != '\0') && ((*(byte *)(param_1 + 0x68) & 1) == 0)) {
    return uVar1;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      uVar2 = F_00daa4c0(*((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar3 * 4))),param_2 + 1,param_3
                           ,param_4);
      if ((int)uVar1 < (int)uVar2) {
        uVar1 = uVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x4c));
  }
  return uVar1;
}

/* ref: FUN_00daa540 */
unsigned int F_00daa540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xdaa540u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  ushort uVar1;
  int iVar2;
  uint uVar3;
  ushort * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float fVar8;
  char * pcVar9;
  
  iVar2 = (int)param_2;
  if (param_3 != 0) {
    if (1 < param_3) {
      iVar5 = param_3 + -1;
      do {
        F_00da00e0(param_1,&REFG(undefined, 0x113c4f0));
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    uVar6 = 0;
    iVar7 = 0;
    puVar4 = (ushort *)((int)param_2 + 0x32);
    iVar5 = 2;
    do {
      uVar1 = puVar4[-1];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = *puVar4;
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[1];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[2];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[3];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      uVar1 = puVar4[4];
      if ((uVar1 != 0) && (iVar7 = iVar7 + 1, uVar6 < uVar1)) {
        uVar6 = (uint)uVar1;
      }
      puVar4 = puVar4 + 6;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    F_00da0ce0(((undefined1 *)(gen_frame + 0x8)),200,"%s(%i)",*(undefined4 *)((int)param_2 + 100),uVar6);
    if (uVar6 < 2) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x8)),200,&REFG(undefined, 0x113bdcc),*(undefined4 *)((int)param_2 + 100));
    }
    else if ((GEN_ISNAN(param_4) || GEN_ISNAN(REFG(float, 0x1087f04))) ==
             ((GEN_ISNAN(param_4) || GEN_ISNAN(REFG(float, 0x1087f04))) || param_4 == REFG(float, 0x1087f04))) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x8)),200,"%s (%4.1f)",*(undefined4 *)((int)param_2 + 100),
                   (int)(ulonglong)gen_d2bits((double)((float)uVar6 * param_4)),
                   (int)((ulonglong)gen_d2bits((double)((float)uVar6 * param_4)) >> 0x20));
    }
    else {
      F_00da0ce0(((undefined1 *)(gen_frame + 0x8)),200,"%s (%i)",*(undefined4 *)((int)param_2 + 100),uVar6);
    }
    F_00da00e0(param_1,"%-32s",((undefined1 *)(gen_frame + 0x8)));
    iVar5 = 3;
    do {
      F_00da00e0(param_1,&REFG(undefined, 0x113c4f0));
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (iVar7 < 1) {
      F_00da00e0(param_1,"% 12.3f\n",0,0);
    }
    else {
      param_2 = (ushort *)((int)param_2 + 0x30);
      (*(int *)(gen_frame + 0x108)) = iVar7;
      iVar5 = 0;
      do {
        uVar3 = (uint)*param_2;
        if (uVar3 != 0) {
          fVar8 = *(float *)(iVar2 + iVar5 * 4) * param_4;
          if (uVar3 < uVar6) {
            fVar8 = fVar8 * ((float)uVar6 / (float)uVar3);
          }
          iVar7 = (*(int *)(gen_frame + 0x108)) + -1;
          (*(int *)(gen_frame + 0x108)) = iVar7;
          if (iVar7 == 0) {
            pcVar9 = "% 12.3f\n";
          }
          else {
            pcVar9 = "% 12.3f: ";
          }
          F_00da00e0(param_1,pcVar9,GEN_LO32((undefined8)gen_d2bits((double)fVar8)),GEN_HI32((undefined8)gen_d2bits((double)fVar8)));
        }
        param_2 = param_2 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0xc);
    }
  }
  iVar5 = 0;
  if (0 < *(int *)(iVar2 + 0x4c)) {
    do {
      F_00daa540(param_1,(ushort *)*((undefined4 *)GEN_TOP((*(int *)(iVar2 + 0x48) + iVar5 * 4))),param_3 + 1
                   ,param_4);
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar2 + 0x4c));
  }
  return 0;
}

/* ref: FUN_00daa7a0 */
uint F_00daa7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaa7a0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edi = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)(in_edi + 0x4c)) {
    do {
      uVar1 = F_00da0d20(param_2,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar2 * 4))) + 100))));
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar2 * 4)));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_edi + 0x4c));
  }
  if (((char)param_3 != '\0') && (0 < *(int *)(in_edi + 0x4c))) {
    return **(uint * PTR32 *)(in_edi + 0x48);
  }
  return 0;
}

/* ref: FUN_00daa800 */
uint F_00daa800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaa800u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar1 = *(int *)(in_edi + 0x4c);
  iVar4 = 0;
  if (0 < iVar1) {
    piVar3 = *(int * PTR32 *)(in_edi + 0x48);
    do {
      if (*piVar3 == in_edx) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar4 < iVar1);
  }
  iVar4 = iVar4 + 1;
  if (iVar4 < iVar1) {
    do {
      uVar2 = F_00da0d20(param_3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar4 * 4))) + 100))));
      if (uVar2 == 0) {
        return *((uint *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar4 * 4)));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_edi + 0x4c));
  }
  return 0;
}

/* ref: FUN_00daa860 */
uint F_00daa860(unsigned int gen_a0, unsigned int gen_a1, double gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaa860u, gen_a0, gen_a1, (unsigned int)gen_trace_d(gen_a2), (unsigned int)(gen_trace_d(gen_a2) >> 32));
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  double param_3 = (double)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_2 == 0) ||
     (uVar3 = param_2, uVar2 = param_2,
     !(param_3 <= (double)*(float *)(param_2 + param_4 * 4) + *(double *)(param_2 + 0x58)))) {
    uVar3 = param_1;
    uVar2 = param_1;
  }
  while (uVar1 = uVar3, uVar1 != 0) {
    uVar3 = F_00daf820(uVar1,param_3,param_4);
    uVar2 = uVar1;
  }
  return uVar2;
}

/* ref: FUN_00daa8c0 */
uint F_00daa8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaa8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0xc)) {
    do {
      uVar1 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8))) & 0xfffffffe,param_1);
      if (uVar1 == 0) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8)));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0xc));
  }
  return *(uint *)((int)this + 0x14);
}

/* ref: FUN_00daa920 */
unsigned int F_00daa920(unsigned int gen_a0, double gen_a1, double gen_a2)
{
  GEN_ENTER(0xdaa920u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), (unsigned int)gen_trace_d(gen_a2));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  double param_3 = (double)gen_a2;
  double * pdVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar2 = *(int *)(*param_1 + iVar3 * 4);
      if ((*(int *)(iVar2 + 0x6c) != 2) &&
         (pdVar1 = (double *)(iVar2 + 0x58),
         (!GEN_ISNAN(param_2) && !GEN_ISNAN(*pdVar1)) && (!(param_2 < *pdVar1) && param_2 != *pdVar1))) {
        *(double *)(iVar2 + 0x58) = *(double *)(iVar2 + 0x58) + param_3;
      }
      F_00daa920(((int *)GEN_TOP((*(int *)(*param_1 + iVar3 * 4) + 0x48))),param_2,param_3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00daa990 */
byte F_00daa990(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaa990u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  double * param_3 = (double *)(uintptr_t)gen_a2;
  int iVar1;
  byte bVar2;
  int iVar3;
  double dVar4;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      iVar1 = *(int *)(iVar3 * 4 + *param_1);
      if (*(int *)(iVar1 + 0x6c) != 2) {
        dVar4 = *(double *)(iVar1 + 0x58);
        if ((dVar4 < param_2) &&
           ((!GEN_ISNAN(*param_3 - dVar4) && !GEN_ISNAN(param_2)) && !(*param_3 - dVar4 <= param_2))) {
          return 1;
        }
        if (dVar4 < *param_3) {
          dVar4 = *param_3;
        }
        *param_3 = dVar4;
      }
      bVar2 = F_00daa990(((int *)GEN_TOP((*(int *)(*param_1 + iVar3 * 4) + 0x48))),param_2,param_3);
      if (bVar2 != 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00daaa30 */
unsigned int F_00daaa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaaa30u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = param_1;
  if (param_1 < param_2) {
    do {
      uVar1 = *puVar2;
      if (uVar1 < 0x15) {
switchD_00daaa6c_caseD_4e: ;
        puVar2 = puVar2 + 1;
      }
      else {
        F_00dbd8b0(param_3,&REFG(undefined * PTR32, 0x13516ac),uVar1,uVar1);
        switch((unsigned int)(uintptr_t)(*(undefined1 *)*puVar2)) {
        case 0x45: ;
        case 0x53: ;
        case 0x54: ;
        case 0x6c: ;
          puVar2 = puVar2 + 3;
          break;
        default: ;
          goto switchD_00daaa6c_caseD_46;
        case 0x4c: ;
        case 0x4f: ;
          F_00dbd8b0(param_3,&REFG(undefined * PTR32, 0x13516ac),puVar2[3],puVar2[3]);
          puVar2 = puVar2 + 4;
          break;
        case 0x4d: ;
          puVar2 = puVar2 + 2;
          break;
        case 0x4e: ;
        case 0x50: ;
        case 0x70: ;
          goto switchD_00daaa6c_caseD_4e;
        }
      }
    } while (puVar2 < param_2);
switchD_00daaa6c_caseD_46: ;
  }
  return 0;
}

/* ref: FUN_00daaae0 */
uint F_00daaae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdaaae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined * pvVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_3 - param_2;
  if ((int)((*(uint *)((int)this + 0x14) & 0x3fffffff) - *(int *)((int)this + 0x10)) < iVar4) {
    *param_1 = 0;
    return (uint)param_1;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)this + *(int *)(param_4 + 0x18) * 0xc)));
  if (piVar1[1] == (*((uint *)GEN_TOP((*(int *)this + 8 + *(int *)(param_4 + 0x18) * 0xc))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,0x24);
  }
  pvVar2 = (undefined *)(*piVar1 + piVar1[1] * 0x24);
  if (pvVar2 != (undefined *)0x0) {
    F_00da9f50(pvVar2);
  }
  pvVar2 = (undefined *)(*piVar1 + piVar1[1] * 0x24);
  piVar1[1] = piVar1[1] + 1;
  F_00d91540(pvVar2,param_4);
  *(undefined4 *)((int)pvVar2 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)((int)pvVar2 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)((int)pvVar2 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
  *(undefined4 *)((int)pvVar2 + 0x14) = *(undefined4 *)(param_4 + 0x14);
  *(undefined4 *)((int)pvVar2 + 0x18) = *(undefined4 *)(param_4 + 0x18);
  *(undefined4 *)((int)pvVar2 + 0x1c) = *(undefined4 *)(param_4 + 0x1c);
  *(undefined4 *)((int)pvVar2 + 0x20) = *(undefined4 *)(param_4 + 0x20);
  iVar3 = *(int *)((int)this + 0x10);
  *(int *)((int)pvVar2 + 0x1c) = iVar3;
  *(int *)((int)pvVar2 + 0x20) = iVar3 + iVar4;
  iVar3 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x10) = iVar3 + iVar4;
  F_00da1010(*(int *)((int)this + 0xc) + iVar3,param_2,iVar4);
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00daabe0 */
uint F_00daabe0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdaabe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int * in_esi = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  uint param_6 = (uint)gen_a5;
  int iVar1;
  uint * puVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  uint uVar6;
  double dVar7;
  double dVar8;
  double local_10;
  int local_8;
  
  piVar3 = *(int * PTR32 *)(param_2 + 0x48);
  iVar5 = *piVar3;
  iVar1 = 0;
  piVar4 = piVar3;
  while( true ) {
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x6c) != 2)) goto LAB_00daac11;
    iVar1 = iVar1 + 1;
    piVar4 = piVar4 + 1;
    if (*(int *)(param_2 + 0x4c) <= iVar1) break;
    iVar5 = *piVar4;
  }
  iVar5 = 0;
LAB_00daac11: ;
  iVar1 = piVar3[*(int *)(param_2 + 0x4c) + -1];
  puVar2 = ((uint *)GEN_TOP((*(int *)(param_2 + 0x4c) - 1)));
  if (iVar1 != 0) {
    piVar3 = piVar3 + (int)puVar2;
    while (*(int *)(iVar1 + 0x6c) == 2) {
      piVar3 = piVar3 + -1;
      puVar2 = (uint *)((int)puVar2 - 1);
      if ((int)puVar2 < 0) {
        return (uint)puVar2;
      }
      iVar1 = *piVar3;
      if (iVar1 == 0) {
        return (uint)puVar2;
      }
    }
    if (iVar5 != 0) {
      dVar7 = *(double *)(iVar5 + 0x58);
      local_10 = 0.0;
      local_8 = param_5;
      while ((local_8 != 0 && (local_10 < dVar7 - (double)param_3))) {
        local_10 = local_10 + (double)param_4;
        if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,4);
        }
        *(undefined4 *)(*in_esi + in_esi[1] * 4) = 0;
        in_esi[1] = in_esi[1] + 1;
        local_8 = local_8 + -1;
      }
      dVar7 = ((double)*(float *)(iVar1 + param_6 * 4) + *(double *)(iVar1 + 0x58)) -
              (double)param_3;
      dVar8 = (((double)param_3 + dVar7) - *(double *)(iVar5 + 0x58)) + REFG(double, 0x1088130);
      *(double *)(param_2 + 0x58) = *(double *)(iVar5 + 0x58);
      uVar6 = 0;
      *(float *)(param_2 + param_6 * 4) = (float)dVar8;
      if (local_8 == 0) {
        return param_6;
      }
      do {
        if (!(local_10 < dVar7)) {
          return param_6;
        }
        uVar6 = F_00daa860(param_2,uVar6,(double)param_3 + local_10,param_6);
        puVar2 = (uint *)0x0;
        if (uVar6 != 0) {
          if (in_esi[1] == (in_esi[2] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),in_esi,4);
          }
          puVar2 = (uint *)(*in_esi + in_esi[1] * 4);
          *puVar2 = uVar6;
          in_esi[1] = in_esi[1] + 1;
        }
        local_8 = local_8 + -1;
        local_10 = (double)param_4 + local_10;
      } while (local_8 != 0);
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00daada0 */
uint F_00daada0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaada0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined2 * puVar2;
  
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  *(int *)((int)this + 0x60) = param_1;
  *(undefined4 *)((int)this + 100) = param_2;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = param_3;
  if (param_1 != 0) {
    if (*(uint *)(param_1 + 0x4c) == (*(uint *)(param_1 + 0x50) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(param_1 + 0x48),4);
    }
    *((undefined * PTR32 *)GEN_TOP((*(int *)(param_1 + 0x48) + *(int *)(param_1 + 0x4c) * 4))) = this;
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  }
  iVar1 = 0;
  puVar2 = (undefined2 *)((int)this + 0x30);
  do {
    *(undefined4 *)((int)this + iVar1 * 4) = 0;
    *puVar2 = 0;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 0xc);
  *(undefined8 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00daae40 */
uint F_00daae40(unsigned int gen_a0)
{
  GEN_ENTER(0xdaae40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if (0 < *(int *)((int)this + 0x4c)) {
    iVar2 = 0;
    do {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x48) + iVar2 * 4)));
      if (this_00 != (undefined *)0x0) {
        F_00db0890(this_00,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 0x4c));
  }
  uVar1 = *(uint *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x4c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x48),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0x80000000;
  *(undefined4 *)((int)this + 0x48) = 0;
  return uVar1;
}

/* ref: FUN_00daaea0 */
uint F_00daaea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaaea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_edi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined * this;
  int iVar4;
  
  if (((char)param_4 != '\0') && (iVar4 = 0, in_edi != 0)) {
    for (; (param_2 != 0 && (iVar4 < *(int *)(in_edi + 0x4c))); iVar4 = iVar4 + 1) {
      iVar1 = *((int *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar4 * 4)));
      if (*(int *)(iVar1 + 100) != 0) {
        uVar2 = F_00da0d20(*(undefined4 *)(iVar1 + 100),param_2);
        if (uVar2 == 0) {
          return *((uint *)GEN_TOP((*(int *)(in_edi + 0x48) + iVar4 * 4)));
        }
      }
    }
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x70)));
  if (this != (undefined *)0x0) {
    uVar2 = F_00daada0(this,in_edi,param_2,param_3);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00daaf20 */
unsigned int F_00daaf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xdaaf20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  int iVar1;
  int iVar2;
  byte bVar3;
  LPVOID pvVar4;
  undefined * this;
  uint uVar5;
  int iVar6;
  float fVar7;
  int local_8;
  
  iVar6 = (*(int *)&gen_args[2]);
  if (0xb < (*(int *)&gen_args[2])) {
    iVar6 = 0xb;
  }
  (*(int *)&gen_args[2]) = 0;
  local_8 = 0;
  if (0 < *(int *)((*(int *)&gen_args[1]) + 0x4c)) {
    fVar7 = REFG(float, 0x1087f04) - (*(float *)&gen_args[4]);
    do {
      iVar1 = *((int *)GEN_TOP((*(int *)((*(int *)&gen_args[1]) + 0x48) + local_8 * 4)));
      bVar3 = F_00daa2c0((*(int *)&gen_args[0]),*(undefined4 *)(iVar1 + 100),&(*(int *)&gen_args[2]));
      iVar2 = (*(int *)&gen_args[2]);
      if (bVar3 == 0) {
        pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar4 + 0x2c),0x70)));
        if (this == (undefined *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = F_00daada0(this,(*(int *)&gen_args[0]),*(undefined4 *)(iVar1 + 100),
                               *(undefined4 *)(iVar1 + 0x6c));
        }
      }
      else {
        uVar5 = *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x48) + (*(int *)&gen_args[2]) * 4)));
      }
      *(float *)(uVar5 + iVar6 * 4) =
           *(float *)(iVar1 + (*(int *)&gen_args[3]) * 4) * fVar7 + *(float *)(uVar5 + iVar6 * 4);
      *(undefined2 *)(uVar5 + 0x30 + iVar6 * 2) = *(undefined2 *)(iVar1 + 0x30 + (*(int *)&gen_args[3]) * 2);
      F_00daaf20(uVar5,iVar1,iVar6,(*(int *)&gen_args[3]),(*(float *)&gen_args[4]));
      iVar1 = *(int *)((*(int *)&gen_args[1]) + 0x4c);
      if (iVar2 < iVar1 + -1) {
        (*(int *)&gen_args[2]) = iVar2 + 1;
      }
      local_8 = local_8 + 1;
    } while (local_8 < iVar1);
  }
  return 0;
}

/* ref: FUN_00dab030 */
unsigned int F_00dab030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xdab030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  F_00daa340(param_1,param_3,param_5);
  F_00daaf20(param_1,param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00dab070 */
uint F_00dab070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdab070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  ushort * puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  
  piVar1 = param_6;
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)));
  iVar8 = param_4 + param_5;
  (*(int *)(gen_frame + 0x28)) = iVar8;
  if (param_3 != 0) {
    if ((char)param_6[4] != '\0') {
      if (param_6[5] == param_2) {
        uVar2 = CONCAT31((int3)((uint)param_6[5] >> 8),(char)param_6[6]);
      }
      else {
        uVar2 = 0x20;
      }
      F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),uVar2);
    }
    iVar3 = param_6[2] * (param_3 + -1);
    if (0 < iVar3) {
      do {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),0x20);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if ((char)param_6[4] != '\0') {
      if (*(int *)(param_2 + 0x4c) < 1) {
        uVar6 = 0x20;
      }
      else if ((*(byte *)(param_2 + 0x68) & 1) == 0) {
        uVar6 = (uint)*(byte *)(param_6 + 6);
      }
      else {
        uVar6 = CONCAT31((int3)((uint)param_2 >> 8),*(undefined1 *)((int)param_6 + 0x19));
      }
      F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),uVar6);
    }
    iVar7 = 0;
    iVar9 = 0;
    iVar3 = 0;
    (*(int *)(gen_frame + 0x18)) = 0;
    if (1 < iVar8) {
      puVar4 = (ushort *)(param_2 + 0x32);
      iVar5 = (iVar8 - 2U >> 1) + 1;
      iVar3 = iVar5 * 2;
      do {
        iVar7 = iVar7 + (uint)puVar4[-1];
        iVar9 = iVar9 + (uint)*puVar4;
        puVar4 = puVar4 + 2;
        iVar5 = iVar5 + -1;
        iVar8 = (*(int *)(gen_frame + 0x28));
      } while (iVar5 != 0);
    }
    uVar6 = 0;
    if (iVar3 < iVar8) {
      uVar6 = (uint)*(ushort *)(param_2 + 0x30 + iVar3 * 2);
    }
    if ((*(char *)((int)param_6 + 0x1b) == '\0') || (*(int *)(param_2 + 0x6c) != 0)) {
      uVar2 = *(undefined4 *)(param_2 + 100);
    }
    else {
      iVar3 = *(int *)(param_2 + 0x4c);
      if (0 < iVar3) {
        do {
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar2 = *(undefined4 *)(param_2 + 100);
    }
    F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"%s (%i) ",uVar2,uVar6 + iVar7 + iVar9);
    iVar3 = 0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    param_6 = (int *)0x0;
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(int *)(gen_frame + 0x20)) = 0;
    if (0 < iVar8) {
      puVar4 = (ushort *)(param_2 + 0x30);
      do {
        if (*(char *)((int)piVar1 + 0x1a) == '\0') {
          iVar8 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar3) - (*(int *)(gen_frame + 0x4))) + *piVar1;
          if (0 < iVar8) {
            (*(int *)(gen_frame + 0x18)) = iVar8;
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),0x20);
              iVar8 = (*(int *)(gen_frame + 0x18)) + -1;
              (*(int *)(gen_frame + 0x18)) = iVar8;
            } while (iVar8 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),9);
        }
        dVar10 = (double)*(float *)(param_2 + iVar3 * 4);
        F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"%-6.3f (%i)",(int)(ulonglong)gen_d2bits(dVar10),
                     (int)((ulonglong)gen_d2bits(dVar10) >> 0x20),(uint)*puVar4);
        if (iVar3 < param_4) {
          param_6 = (int *)((int)param_6 + (uint)*puVar4);
          (*(float *)(gen_frame + 0x24)) = *(float *)(param_2 + iVar3 * 4) + (*(float *)(gen_frame + 0x24));
        }
        else {
          (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + (uint)*puVar4;
          (*(float *)(gen_frame + 0x1c)) = *(float *)(param_2 + iVar3 * 4) + (*(float *)(gen_frame + 0x1c));
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
        iVar8 = (*(int *)(gen_frame + 0x28));
      } while (iVar3 < (*(int *)(gen_frame + 0x28)));
    }
    if (1 < param_4) {
      if (*(char *)((int)piVar1 + 0x1a) == '\0') {
        iVar3 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar8) - (*(int *)(gen_frame + 0x4))) + *piVar1;
        if (0 < iVar3) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),0x20);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),9);
      }
      iVar8 = iVar8 + 1;
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"%-6.3f (%i)",
                   (int)(ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x24)) / (float)param_4)),
                   (int)((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x24)) / (float)param_4)) >> 0x20),param_6)
      ;
    }
    if (1 < param_5) {
      if (*(char *)((int)piVar1 + 0x1a) == '\0') {
        iVar8 = ((piVar1[3] * (param_3 + -1) + piVar1[1] * iVar8) - (*(int *)(gen_frame + 0x4))) + *piVar1;
        if (0 < iVar8) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),0x20);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0xc)),9);
      }
      F_00da00e0(((undefined1 *)(gen_frame + 0xc)),"%-6.3f (%i)",
                   (int)(ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x1c)) / (float)param_5)),
                   (int)((ulonglong)gen_d2bits((double)((*(float *)(gen_frame + 0x1c)) / (float)param_5)) >> 0x20),
                   (*(int *)(gen_frame + 0x20)));
    }
    F_00d9fe80(param_1,(*(undefined4 *)(gen_frame + 0x0)));
    F_00d9fe60(param_1,10);
  }
  if ((((char)piVar1[4] == '\0') || ((*(byte *)(param_2 + 0x68) & 1) != 0)) &&
     (iVar8 = 0, 0 < *(int *)(param_2 + 0x4c))) {
    do {
      F_00dab070(param_1,*((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x48) + iVar8 * 4))),param_3 + 1,param_4
                   ,param_5,piVar1);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_2 + 0x4c));
  }
  F_00d9fda0(((undefined1 *)(gen_frame + 0xc)));
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar6 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar6;
}

/* ref: FUN_00dab400 */
uint F_00dab400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdab400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar1 = F_00daa4c0(param_1,0,param_5[2],(uint)(byte)param_5[4]);
  *param_5 = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0xc)) = 0x80000000;
  F_00da04b0(((undefined1 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x4)));
  F_00da00e0(((undefined1 *)(gen_frame + 0x10)),"Timer Name");
  if ((1 < param_2) || (0 < param_3)) {
    if (0 < param_2) {
      do {
        if (*(char *)((int)param_5 + 0x1a) == '\0') {
          iVar2 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x8))) + *param_5;
          if (0 < iVar2) {
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),0x20);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),9);
        }
        F_00da00e0(((undefined1 *)(gen_frame + 0x10)),"Thread %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_2);
    }
    if (0 < param_3) {
      iVar3 = 0;
      do {
        if (*(char *)((int)param_5 + 0x1a) == '\0') {
          iVar2 = ((iVar3 + param_2) * param_5[1] - (*(int *)(gen_frame + 0x8))) + *param_5;
          if (0 < iVar2) {
            do {
              F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),0x20);
              iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
          }
        }
        else {
          F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),9);
        }
        F_00da00e0(((undefined1 *)(gen_frame + 0x10)),"Spu %d",iVar3);
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    iVar3 = param_2 + param_3;
    if (1 < param_2) {
      if (*(char *)((int)param_5 + 0x1a) == '\0') {
        iVar2 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x8))) + *param_5;
        if (0 < iVar2) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),0x20);
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),9);
      }
      iVar3 = iVar3 + 1;
      F_00da00e0(((undefined1 *)(gen_frame + 0x10)),"Average Cpu");
    }
    if (1 < param_3) {
      if (*(char *)((int)param_5 + 0x1a) == '\0') {
        iVar3 = (param_5[1] * iVar3 - (*(int *)(gen_frame + 0x8))) + *param_5;
        if (0 < iVar3) {
          do {
            F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),0x20);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        F_00d9fe60(((undefined1 *)(gen_frame + 0x10)),9);
      }
      F_00da00e0(((undefined1 *)(gen_frame + 0x10)),"Average Spu");
    }
  }
  F_00d9fe80(param_4,(*(undefined4 *)(gen_frame + 0x4)));
  F_00da00e0(param_4,&REFG(undefined, 0x113c50c));
  F_00dab070(param_4,param_1,0,param_2,param_3,param_5);
  F_00d9fda0(((undefined1 *)(gen_frame + 0x10)));
  (*(int *)(gen_frame + 0x8)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0xc));
  if (-1 < (int)(*(uint *)(gen_frame + 0xc))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)(gen_frame + 0xc)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: FUN_00dab620 */
unsigned int F_00dab620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdab620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  undefined * this;
  short * psVar4;
  float * pfVar5;
  short * psVar6;
  float * pfVar7;
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (0 < *(int *)(param_2 + 0x4c)) {
    do {
      iVar1 = *((int *)GEN_TOP((*(uint *)(param_2 + 0x48) + local_10 * 4)));
      uVar2 = F_00daa7a0(param_1,*(undefined4 *)(iVar1 + 100),
                           *(uint *)(param_2 + 0x48) & 0xffffff00);
      if (uVar2 == 0) {
        pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))
                                 (*(int * PTR32 *)((int)pvVar3 + 0x2c),0x70)));
        if (this == (undefined *)0x0) {
          uVar2 = 0;
        }
        else {
          uVar2 = F_00daada0(this,param_1,*(undefined4 *)(iVar1 + 100),
                               *(undefined4 *)(iVar1 + 0x6c));
        }
      }
      pfVar5 = (float *)(uVar2 + 4);
      psVar4 = (short *)(uVar2 + 0x30);
      pfVar7 = (float *)(iVar1 + 0xc);
      psVar6 = (short *)(iVar1 + 0x34);
      local_c = 2;
      do {
        pfVar5[-1] = pfVar7[-3] + pfVar5[-1];
        *psVar4 = *psVar4 + *((short *)GEN_TOP(((iVar1 - uVar2) + (int)psVar4)));
        *pfVar5 = *((float *)GEN_TOP(((iVar1 - uVar2) + (int)pfVar5))) + *pfVar5;
        psVar4[1] = psVar4[1] + psVar6[-1];
        pfVar5[1] = pfVar7[-1] + pfVar5[1];
        psVar4[2] = psVar4[2] + *psVar6;
        pfVar5[2] = pfVar5[2] + *pfVar7;
        psVar4[3] = psVar4[3] + psVar6[1];
        pfVar5[3] = pfVar7[1] + pfVar5[3];
        psVar4[4] = psVar4[4] + psVar6[2];
        pfVar5[4] = pfVar7[2] + pfVar5[4];
        psVar4[5] = psVar4[5] + psVar6[3];
        psVar4 = psVar4 + 6;
        psVar6 = psVar6 + 6;
        pfVar5 = pfVar5 + 6;
        pfVar7 = pfVar7 + 6;
        local_c = local_c + -1;
      } while (local_c != 0);
      F_00dab620(uVar2,iVar1);
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_2 + 0x4c));
  }
  return 0;
}

/* ref: FUN_00dab780 */
uint F_00dab780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdab780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  
  F_00d91480(((undefined1 *)(gen_frame + 0x4)),param_1);
  (*(undefined4 *)(gen_frame + 0x8)) = param_2;
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,((undefined1 *)(gen_frame + 0x4)));
    *(undefined4 *)((int)this_00 + 4) = (*(undefined4 *)(gen_frame + 0x8));
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  uVar1 = F_00d91510(((undefined1 *)(gen_frame + 0x4)));
  return uVar1;
}

/* ref: FUN_00dab7f0 */
uint F_00dab7f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xdab7f0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int in_eax = (int)gen_a0;
  float in_xmm0 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  (*(float *)(gen_frame + 0x18)) = in_xmm0 / (float)in_eax;
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = ((int)0x80000000);
  if (0 < in_eax) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0xc)),in_eax,4);
  }
  piVar1 = (int *)(*param_6 + param_4 * 4);
  if (0 < *(int *)(*piVar1 + 0x4c)) {
    (*(int *)(gen_frame + 0x10)) = 0;
    if (*(int *)(param_3 + 0xc) == 0) {
      uVar2 = *(undefined4 *)(param_3 + 4);
    }
    else {
      uVar2 = *(undefined4 *)(param_3 + 8);
    }
    F_00daabe0(&(*(int *)(gen_frame + 0xc)),*piVar1,param_7,(*(float *)(gen_frame + 0x18)),in_eax,uVar2);
    if (param_5 < (*(int *)(gen_frame + 0x10))) {
      uVar3 = *(uint *)((*(int *)(gen_frame + 0xc)) + param_5 * 4);
    }
  }
  (*(int *)(gen_frame + 0x10)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x14))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0xc)),(*(int *)(gen_frame + 0x14)) * 4);
  }
  return uVar3;
}

/* ref: FUN_00dab8d0 */
uint F_00dab8d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0xdab8d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  unsigned int gen_args[11];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  memcpy(&gen_args[8], &gen_a8, sizeof gen_a8);
  memcpy(&gen_args[9], &gen_a9, sizeof gen_a9);
  gen_args[10] = gen_a10;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 uVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar4 = (*(int *)&gen_args[7]);
  (*(float *)&gen_args[8]) = (*(float *)&gen_args[8]) / (float)(*(int *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0xffffffff;
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = ((int)0x80000000);
  if (0 < (*(int *)&gen_args[7])) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x18)),(*(int *)&gen_args[7]),4);
  }
  piVar6 = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + (int)gen_fl2bits((*(float *)&gen_args[1])) * 4)));
  if (0 < *(int *)(*piVar6 + 0x4c)) {
    (*(int *)(gen_frame + 0x1c)) = 0;
    if (*(int *)((*(int *)&gen_args[0]) + 0xc) == 0) {
      uVar1 = *(undefined4 *)((*(int *)&gen_args[0]) + 4);
    }
    else {
      uVar1 = *(undefined4 *)((*(int *)&gen_args[0]) + 8);
    }
    F_00daabe0(&(*(int *)(gen_frame + 0x18)),*piVar6,(*(float *)&gen_args[9]),(*(float *)&gen_args[8]),iVar4,uVar1);
    (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x1c));
    (*(int * PTR32 *)&gen_args[2]) = (int *)0x0;
    if (0 < (*(int *)(gen_frame + 0x1c))) {
      do {
        if (iVar4 <= (int)(*(int * PTR32 *)&gen_args[2])) break;
        (*(float *)&gen_args[8]) = -1.7014118e+38;
        piVar6 = (*(int * PTR32 *)&gen_args[2]);
        if (*((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + (int)(*(int * PTR32 *)&gen_args[2]) * 4))) != 0) {
          iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x18)) + (int)(*(int * PTR32 *)&gen_args[2]) * 4)));
          (*(float *)&gen_args[8]) = -NAN;
          for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x60)) {
            uVar1 = *(undefined4 *)(iVar4 + 100);
            uVar2 = F_00dbd9c0(&(*(undefined4 *)(gen_frame + 0xc)),uVar1,&(*(float *)(gen_frame + 0x28)));
            if (uVar2 == 0) {
              (*(float *)&gen_args[8]) = (*(float *)(gen_frame + 0x28));
              break;
            }
            uVar2 = F_00dbd9c0((*(undefined * PTR32 *)&gen_args[10]),uVar1,&(*(float *)&gen_args[1]));
            if (uVar2 == 0) {
              (*(float *)&gen_args[8]) = (*(float *)&gen_args[1]);
            }
            else {
              iVar5 = 0;
              if (0 < *(int *)((*(int *)&gen_args[5]) + 0xc)) {
                do {
                  uVar2 = F_00da0d70(*((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[5]) + 8) + iVar5 * 8))) & 0xfffffffe,
                                       uVar1);
                  if (uVar2 == 0) {
                    (*(float *)&gen_args[8]) = *((float *)GEN_TOP((*(int *)((*(int *)&gen_args[5]) + 8) + 4 + iVar5 * 8)));
                    F_00dbd8b0(&(*(undefined4 *)(gen_frame + 0xc)),&REFG(undefined * PTR32, 0x13516ac),uVar1,
                                 (undefined4)gen_fl2bits((*(float *)&gen_args[8])));
                    piVar6 = (*(int * PTR32 *)&gen_args[2]);
                    goto LAB_00daba5c;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(int *)((*(int *)&gen_args[5]) + 0xc));
              }
              F_00dbd8b0((*(undefined * PTR32 *)&gen_args[10]),&REFG(undefined * PTR32, 0x13516ac),uVar1,(undefined4)gen_fl2bits((*(float *)&gen_args[8])));
              piVar6 = (*(int * PTR32 *)&gen_args[2]);
            }
          }
        }
LAB_00daba5c: ;
        if (0 < (*(int *)&gen_args[4])) {
          pfVar3 = (float *)((*(int *)&gen_args[3]) + (int)((int)(uintptr_t)piVar6) * 4);
          iVar4 = (*(int *)&gen_args[4]);
          do {
            *pfVar3 = (*(float *)&gen_args[8]);
            pfVar3 = pfVar3 + (*(int *)&gen_args[6]);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        (*(int * PTR32 *)&gen_args[2]) = (int *)((int)piVar6 + 1);
        iVar4 = (*(int *)&gen_args[7]);
      } while ((int)(*(int * PTR32 *)&gen_args[2]) < (*(int *)(gen_frame + 0x24)));
    }
  }
  (*(int *)(gen_frame + 0x1c)) = 0;
  if (-1 < (*(int *)(gen_frame + 0x20))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x18)),(*(int *)(gen_frame + 0x20)) * 4);
  }
  (*(int *)(gen_frame + 0x18)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0x80000000;
  uVar2 = F_00dbdb20(&(*(undefined4 *)(gen_frame + 0xc)),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  return uVar2;
}

/* ref: FUN_00dabae0 */
unsigned int F_00dabae0(unsigned int gen_a0)
{
  GEN_ENTER(0xdabae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  int local_c;
  int local_8;
  
  *(undefined4 *)((int)this + 0x10) = 0;
  local_c = 0;
  if (0 < *(int *)((int)this + 4)) {
    local_8 = 0;
    do {
      piVar2 = (int *)(*(int *)this + local_8);
      iVar1 = piVar2[1] + -1;
      if (-1 < iVar1) {
        this_00 = (undefined *)(*piVar2 + iVar1 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar1 = iVar1 + -1;
        } while (-1 < iVar1);
      }
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
      piVar2[1] = 0;
    } while (local_c < *(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00dabb40 */
uint F_00dabb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdabb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  undefined4 * puVar1;
  undefined8 * puVar2;
  int * piVar3;
  float fVar4;
  float fVar5;
  undefined1 * puVar6;
  int iVar7;
  undefined4 uVar8;
  LPVOID pvVar9;
  undefined * pvVar10;
  uint uVar11;
  undefined * pvVar12;
  float * pfVar13;
  uint uVar14;
  undefined8 * puVar15;
  
  pvVar9 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar10 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar9 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar9 + 0x2c),0x70)));
  if (pvVar10 == (undefined *)0x0) {
    pvVar10 = (undefined *)0x0;
  }
  else {
    pvVar10 = (undefined *)F_00daada0(pvVar10,0,param_4,1);
  }
  uVar14 = 0x80000010;
  (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = ((undefined1 *)(gen_frame + 0xe0));
  uVar11 = 0x80000010;
  (*(undefined1 * PTR32 *)(gen_frame + 0x8)) = ((undefined1 *)(gen_frame + 0x14));
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0x80000010;
  (*(uint *)(gen_frame + 0xd8)) = 0;
  (*(uint *)(gen_frame + 0xdc)) = 0x80000010;
  puVar15 = param_1;
  pvVar12 = pvVar10;
  while (puVar15 < param_2) {
    puVar6 = *(undefined1 * PTR32 *)puVar15;
    (*(undefined1 * PTR32 *)(gen_frame + 0x1c8)) = puVar6;
    if (puVar6 < (undefined1 *)0x15) {
      puVar15 = (undefined8 *)((int)puVar15 + 4);
      goto switchD_00dabbec_caseD_46;
    }
    switch((unsigned int)(uintptr_t)(*puVar6)) {
    case 0x45: ;
      if ((*(uint *)(gen_frame + 0xc)) != 0) {
        piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc + -0xc);
        if ((puVar6[2] == '\0') || (uVar14 = F_00da0d20(*piVar3 + 2,puVar6 + 2), uVar14 == 0)) {
          F_00daa1f0(pvVar12,param_3,piVar3,puVar15);
          pvVar12 = *(undefined * PTR32 *)((int)pvVar12 + 0x60);
          (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
          uVar14 = (*(uint *)(gen_frame + 0xd8)) - 1;
          if ((int)((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) < (int)uVar14) {
            uVar11 = ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) * 2;
            if ((int)uVar11 <= (int)uVar14) {
              uVar11 = uVar14;
            }
LAB_00dabdec: ;
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),uVar11,0xc);
          }
          goto LAB_00dabdff;
        }
        (*(uint *)(gen_frame + 0xd8)) = 0;
        if (-1 < (int)(*(uint *)(gen_frame + 0xdc))) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) * 0xc);
        }
        (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (undefined1 *)0x0;
        (*(uint *)(gen_frame + 0xdc)) = 0x80000000;
        (*(uint *)(gen_frame + 0xc)) = 0;
        uVar14 = (*(uint *)(gen_frame + 0x10));
        if ((int)(*(uint *)(gen_frame + 0x10)) < 0) {
          return (uint)pvVar10;
        }
        goto LAB_00dabd47;
      }
      (*(uint *)(gen_frame + 0xd8)) = 0;
      if (-1 < (int)uVar11) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),(uVar11 & 0x3fffffff) * 0xc);
        uVar14 = (*(uint *)(gen_frame + 0x10));
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (undefined1 *)0x0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      goto LAB_00dabd30;
    case 0x46: ;
      break;
    default: ;
      goto switchD_00dabbec_caseD_47;
    case 0x4c: ;
      if ((*(uint *)(gen_frame + 0xc)) == (uVar14 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),0xc);
        uVar11 = (*(uint *)(gen_frame + 0xdc));
      }
      puVar2 = (undefined8 *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar15;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
        uVar11 = (*(uint *)(gen_frame + 0xdc));
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      if ((*(uint *)(gen_frame + 0xd8)) == (uVar11 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),0xc);
      }
      puVar2 = (undefined8 *)((*(undefined1 * PTR32 *)(gen_frame + 0xd4)) + (*(uint *)(gen_frame + 0xd8)) * 0xc);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar15;
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar15 + 1);
      }
      (*(uint *)(gen_frame + 0xd8)) = (*(uint *)(gen_frame + 0xd8)) + 1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a4)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1a4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1a4)), 1, 3),(char)param_5 != '\0');
      uVar14 = F_00daaea0(pvVar12,(*(undefined1 * PTR32 *)(gen_frame + 0x1c8)) + 2,0,(*(undefined4 *)(gen_frame + 0x1a4)));
      iVar7 = *(int *)((int)puVar15 + 0xc);
      (*(int *)(gen_frame + 0x1bc)) = *(undefined4 *)puVar15;
      (*(int *)(gen_frame + 0x1c0)) = *(int *)((int)puVar15 + 4);
      (*(int *)(gen_frame + 0x1c4)) = *(int *)(puVar15 + 1);
      (*(int *)(gen_frame + 0x1bc)) = iVar7;
      if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),0xc);
      }
      piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc);
      if (piVar3 != (int *)0x0) {
        *piVar3 = (*(int *)(gen_frame + 0x1bc));
        piVar3[1] = (*(int *)(gen_frame + 0x1c0));
        piVar3[2] = (*(int *)(gen_frame + 0x1c4));
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      if ((*(uint *)(gen_frame + 0xd8)) == ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),0xc);
      }
      piVar3 = (int *)((*(undefined1 * PTR32 *)(gen_frame + 0xd4)) + (*(uint *)(gen_frame + 0xd8)) * 0xc);
      if (piVar3 != (int *)0x0) {
        *piVar3 = (*(int *)(gen_frame + 0x1bc));
        piVar3[1] = (*(int *)(gen_frame + 0x1c0));
        piVar3[2] = (*(int *)(gen_frame + 0x1c4));
      }
      (*(uint *)(gen_frame + 0xd8)) = (*(uint *)(gen_frame + 0xd8)) + 1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1ac)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1ac)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1ac)), 1, 3),(char)param_5 != '\0');
      pvVar12 = (undefined *)F_00daaea0(uVar14,iVar7 + 2,0,(*(undefined4 *)(gen_frame + 0x1ac)));
      puVar15 = puVar15 + 2;
      uVar11 = (*(uint *)(gen_frame + 0xdc));
      uVar14 = (*(uint *)(gen_frame + 0x10));
      break;
    case 0x4d: ;
      uVar14 = (uint)(*(undefined4 *)(gen_frame + 0x1b4)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b4)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1b4)) = CONCAT31((int3)uVar14,(char)param_5 != '\0');
      pfVar13 = (float *)F_00daaea0(pvVar12,puVar6 + 2,2,(*(undefined4 *)(gen_frame + 0x1b4)));
      fVar4 = *(float *)((int)puVar15 + 4);
      fVar5 = *pfVar13;
      *(short *)(pfVar13 + 0xc) = *(short *)(pfVar13 + 0xc) + 1;
      *pfVar13 = fVar4 + fVar5;
      puVar15 = puVar15 + 1;
      uVar11 = (*(uint *)(gen_frame + 0xdc));
      uVar14 = (*(uint *)(gen_frame + 0x10));
      break;
    case 0x4e: ;
      goto switchD_00dabbec_caseD_4e;
    case 0x4f: ;
      if ((*(uint *)(gen_frame + 0xc)) == (uVar14 & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)((int)puVar15 + 4);
        *puVar1 = *(undefined4 *)puVar15;
        puVar1[1] = uVar8;
        puVar1[2] = *(undefined4 *)(puVar15 + 1);
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a8)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1a8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1a8)), 1, 3),(char)param_5 != '\0');
      pvVar12 = (undefined *)F_00daaea0(pvVar12,*(undefined4 *)((int)puVar15 + 0xc),0,(*(undefined4 *)(gen_frame + 0x1a8)));
      if ((*(uint *)(gen_frame + 0xd8)) == ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0xd4)) + (*(uint *)(gen_frame + 0xd8)) * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)((int)puVar15 + 4);
        *puVar1 = *(undefined4 *)puVar15;
        puVar1[1] = uVar8;
        puVar1[2] = *(undefined4 *)(puVar15 + 1);
      }
      (*(uint *)(gen_frame + 0xd8)) = (*(uint *)(gen_frame + 0xd8)) + 1;
      puVar15 = puVar15 + 2;
      uVar11 = (*(uint *)(gen_frame + 0xdc));
      uVar14 = (*(uint *)(gen_frame + 0x10));
      break;
    case 0x50: ;
      uVar14 = (uint)(*(undefined4 *)(gen_frame + 0x1b0)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b0)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1b0)) = CONCAT31((int3)uVar14,(char)param_5 != '\0');
      pvVar12 = (undefined *)F_00daaea0(pvVar12,puVar6 + 2,1,(*(undefined4 *)(gen_frame + 0x1b0)));
      puVar15 = (undefined8 *)((int)puVar15 + 4);
      uVar11 = (*(uint *)(gen_frame + 0xdc));
      uVar14 = (*(uint *)(gen_frame + 0x10));
      break;
    case 0x53: ;
      if ((*(uint *)(gen_frame + 0xc)) != 0) {
        puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc + -0xc);
        F_00daa1f0(pvVar12,param_3,puVar1,puVar15);
        (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1b8)) + 0)) = (char)param_5 != '\0';
        (*(undefined4 *)(gen_frame + 0x1b8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x1b8)), 1, 3),(char)param_5 != '\0');
        pvVar12 = (undefined *)F_00daaea0(*(undefined4 *)((int)pvVar12 + 0x60),(*(undefined1 * PTR32 *)(gen_frame + 0x1c8)) + 2,0,(*(undefined4 *)(gen_frame + 0x1b8)));
        uVar8 = *(undefined4 *)((int)puVar15 + 4);
        *puVar1 = *(undefined4 *)puVar15;
        puVar1[1] = uVar8;
        puVar1[2] = *(undefined4 *)(puVar15 + 1);
        uVar11 = (*(uint *)(gen_frame + 0xdc));
        uVar14 = (*(uint *)(gen_frame + 0x10));
        goto switchD_00dabbec_caseD_6d;
      }
LAB_00dac32a: ;
      (*(uint *)(gen_frame + 0xd8)) = 0;
      if (-1 < (int)uVar11) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),(uVar11 & 0x3fffffff) * 0xc);
        uVar14 = (*(uint *)(gen_frame + 0x10));
      }
      (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (undefined1 *)0x0;
      (*(uint *)(gen_frame + 0xc)) = 0;
      goto LAB_00dabd30;
    case 0x54: ;
      uVar14 = (uint)(*(undefined4 *)(gen_frame + 0x1a0)) >> 8;
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x1a0)) + 0)) = (char)param_5 != '\0';
      (*(undefined4 *)(gen_frame + 0x1a0)) = CONCAT31((int3)uVar14,(char)param_5 != '\0');
      pvVar12 = (undefined *)F_00daaea0(pvVar12,puVar6 + 2,0,(*(undefined4 *)(gen_frame + 0x1a0)));
      if ((*(uint *)(gen_frame + 0xc)) == ((*(uint *)(gen_frame + 0x10)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x8)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)((int)puVar15 + 4);
        *puVar1 = *(undefined4 *)puVar15;
        puVar1[1] = uVar8;
        puVar1[2] = *(undefined4 *)(puVar15 + 1);
      }
      (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) + 1;
      if ((*(uint *)(gen_frame + 0xd8)) == ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),0xc);
      }
      puVar1 = (undefined4 *)((*(undefined1 * PTR32 *)(gen_frame + 0xd4)) + (*(uint *)(gen_frame + 0xd8)) * 0xc);
      if (puVar1 != (undefined4 *)0x0) {
        uVar8 = *(undefined4 *)((int)puVar15 + 4);
        *puVar1 = *(undefined4 *)puVar15;
        puVar1[1] = uVar8;
        puVar1[2] = *(undefined4 *)(puVar15 + 1);
      }
      (*(uint *)(gen_frame + 0xd8)) = (*(uint *)(gen_frame + 0xd8)) + 1;
      uVar11 = (*(uint *)(gen_frame + 0xdc));
      uVar14 = (*(uint *)(gen_frame + 0x10));
    case 0x6d: ;
switchD_00dabbec_caseD_6d: ;
      puVar15 = (undefined8 *)((int)puVar15 + 0xc);
      break;
    case 0x6c: ;
      if ((1 < (int)(*(uint *)(gen_frame + 0xc))) && (**(char * PTR32 *)((*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc + -0xc) == 'S')) {
        F_00daa1f0(pvVar12,param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc + -0xc,puVar15);
        pvVar12 = *(undefined * PTR32 *)((int)pvVar12 + 0x60);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
        uVar14 = (*(uint *)(gen_frame + 0xd8)) - 1;
        if ((int)((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) < (int)uVar14) {
          uVar11 = ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) * 2;
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
          F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),uVar11,0xc);
        }
        (*(uint *)(gen_frame + 0xd8)) = uVar14;
        F_00daa1f0(pvVar12,param_3,(*(undefined1 * PTR32 *)(gen_frame + 0x8)) + (*(uint *)(gen_frame + 0xc)) * 0xc + -0xc,puVar15);
        pvVar12 = *(undefined * PTR32 *)((int)pvVar12 + 0x60);
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
        uVar14 = (*(uint *)(gen_frame + 0xd8)) - 1;
        if ((int)((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) < (int)uVar14) {
          uVar11 = ((*(uint *)(gen_frame + 0xdc)) & 0x3fffffff) * 2;
          if ((int)uVar11 <= (int)uVar14) {
            uVar11 = uVar14;
          }
          goto LAB_00dabdec;
        }
LAB_00dabdff: ;
        (*(uint *)(gen_frame + 0xd8)) = uVar14;
        uVar11 = (*(uint *)(gen_frame + 0xdc));
        uVar14 = (*(uint *)(gen_frame + 0x10));
        goto switchD_00dabbec_caseD_6d;
      }
      goto switchD_00dabbec_caseD_47;
    case 0x70: ;
      pvVar12 = *(undefined * PTR32 *)((int)pvVar12 + 0x60);
      if (pvVar12 == (undefined *)0x0) goto LAB_00dac32a;
switchD_00dabbec_caseD_4e: ;
      puVar15 = (undefined8 *)((int)puVar15 + 4);
    }
switchD_00dabbec_caseD_46: ;
  }
switchD_00dabbec_caseD_47: ;
  (*(uint *)(gen_frame + 0xd8)) = 0;
  if (-1 < (int)uVar11) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0xd4)),(uVar11 & 0x3fffffff) * 0xc);
    uVar14 = (*(uint *)(gen_frame + 0x10));
  }
  (*(uint *)(gen_frame + 0xc)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (undefined1 *)0x0;
LAB_00dabd30: ;
  (*(uint *)(gen_frame + 0xdc)) = 0x80000000;
  if (-1 < (int)uVar14) {
LAB_00dabd47: ;
    (*(uint *)(gen_frame + 0xdc)) = 0x80000000;
    (*(undefined1 * PTR32 *)(gen_frame + 0xd4)) = (undefined1 *)0x0;
    (*(uint *)(gen_frame + 0xc)) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x8)),(uVar14 & 0x3fffffff) * 0xc);
  }
  return (uint)pvVar10;
}

/* ref: FUN_00dac3d0 */
uint F_00dac3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdac3d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  LPVOID pvVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  int * piVar6;
  int iVar7;
  uint local_8;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar2 + 0x2c),0x70)));
  if (this == (undefined *)0x0) {
    local_8 = 0;
  }
  else {
    local_8 = F_00daada0(this,0,&REFG(undefined, 0x1080808),1);
  }
  iVar1 = param_2 * 0xc;
  iVar7 = *(int *)(iVar1 + 4 + *param_1);
  uVar3 = *(uint *)(local_8 + 0x50) & 0x3fffffff;
  if ((int)uVar3 < iVar7) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),local_8 + 0x48,iVar4,4);
  }
  *(int *)(local_8 + 0x4c) = iVar7;
  iVar7 = 0;
  piVar6 = (int *)(iVar1 + *param_1);
  if (0 < *(int *)(iVar1 + 4 + *param_1)) {
    param_2 = 0;
    do {
      puVar5 = (uint *)(*piVar6 + param_2);
      iVar4 = *(int *)(local_8 + 0x48);
      uVar3 = F_00dabb40(puVar5[7] + param_1[3],puVar5[8] + param_1[3],puVar5,*puVar5 & 0xfffffffe
                           ,param_3);
      param_2 = param_2 + 0x24;
      *(uint *)(iVar4 + iVar7 * 4) = uVar3;
      piVar6 = (int *)(iVar1 + *param_1);
      iVar7 = iVar7 + 1;
    } while (iVar7 < piVar6[1]);
  }
  return local_8;
}

/* ref: FUN_00dac4d0 */
uint F_00dac4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdac4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined1 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  char * pcVar6;
  int * piVar7;
  uint * puVar8;
  undefined8 uVar9;
  
  uVar2 = param_1;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(undefined1 * PTR32 *)(gen_frame + 0xc)) = (undefined1 *)0x0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),0x40,1);
  if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1);
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10))] = 0;
  (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
  F_00da00e0(param_1,"StatisticsDumpInfo(num_threads=%i, num_spus=%i, num_frames=%i)\n",
               *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x1c),
               *(undefined4 *)(*(int *)this + 4));
  (*(int *)(gen_frame + 0x18)) = 0;
  if (0 < *(int *)((int)this + 4)) {
    (*(int *)(gen_frame + 0x24)) = 0;
    do {
      param_1 = 0;
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)(*(int *)this + (*(int *)(gen_frame + 0x24)));
      if (0 < ((int *)(*(int *)this + (*(int *)(gen_frame + 0x24))))[1]) {
        (*(int *)(gen_frame + 0x28)) = 0;
        do {
          puVar8 = (uint *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x28)));
          F_00da00e0(uVar2,"FrameInfo(heading=\'%s\', frame=%i, thread_id=%i, time_counter=%i)\n",
                       *puVar8 & 0xfffffffe,param_1,puVar8[6],puVar8[3]);
          iVar4 = *(int *)((int)this + 0xc);
          uVar5 = puVar8[8];
          piVar7 = (int *)(puVar8[7] + iVar4);
          if (((*(uint *)(gen_frame + 0x14)) & 0x3fffffff) == 0) {
            F_00d95690(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1,1);
          }
          (*(uint *)(gen_frame + 0x10)) = 1;
          *(*(undefined1 * PTR32 *)(gen_frame + 0xc)) = 0;
          uVar3 = (*(uint *)(gen_frame + 0x10));
          this = (*(int * PTR32 *)(gen_frame + 0x1c));
          while ((*(uint *)(gen_frame + 0x10)) = uVar3, (*(int * PTR32 *)(gen_frame + 0x1c)) = this, piVar7 < (int *)(uVar5 + iVar4)) {
            puVar1 = (undefined1 *)*piVar7;
            switch((unsigned int)(uintptr_t)(*puVar1)) {
            case 0x45: ;
              (*(uint *)(gen_frame + 0x10)) = uVar3 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[uVar3 - 3] = 0;
              F_00da00e0(uVar2,"%sTimerEnd(\'%s\',%u,%u)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),*piVar7 + 2,piVar7[1],
                           piVar7[2]);
              goto LAB_00dac848;
            case 0x46: ;
            case 0x4f: ;
            case 0x50: ;
            case 0x70: ;
              break;
            default: ;
              (*(uint *)(gen_frame + 0x10)) = 0;
              if ((int)(*(uint *)(gen_frame + 0x14)) < 0) {
                return (*(uint *)(gen_frame + 0x14));
              }
              uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                                (&REFG(undefined * PTR32, 0x13516a8),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
              return uVar5;
            case 0x4c: ;
              F_00da00e0(uVar2,"%sTimerBegin(\'%s\', %u, %u)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),puVar1 + 2,piVar7[1],
                           piVar7[2]);
              F_00da00e0(uVar2,"%sTimerSplit(\'%s\', %u, %u)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),piVar7[3] + 2,piVar7[1],
                           piVar7[2]);
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10)) - 1] = 0x20;
              if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10))] = 0x20;
              uVar3 = (*(uint *)(gen_frame + 0x10)) + 1;
              (*(uint *)(gen_frame + 0x10)) = uVar3;
              if (uVar3 == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10))] = 0;
              (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
              piVar7 = piVar7 + 4;
              break;
            case 0x4d: ;
              F_00da00e0(uVar2,"%sAddValue(%s,%f)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),puVar1 + 1,
                           (int)(ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[1])))),
                           (int)((ulonglong)gen_d2bits(((double)GEN_TOD(gen_bits2f(piVar7[1])))) >> 0x20));
              piVar7 = piVar7 + 2;
              break;
            case 0x4e: ;
              piVar7 = piVar7 + 1;
              break;
            case 0x53: ;
              (*(uint *)(gen_frame + 0x10)) = uVar3 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[uVar3 - 3] = 0;
              uVar9 = *(undefined8 *)(piVar7 + 1);
              puVar1 = (undefined1 *)*piVar7;
              pcVar6 = "%sTimerSplit(\'%s\', %u, %u)\n";
              goto LAB_00dac62b;
            case 0x54: ;
              uVar9 = *(undefined8 *)(piVar7 + 1);
              pcVar6 = "%sTimerBegin(\'%s\',%u,%u)\n";
LAB_00dac62b: ;
              F_00da00e0(uVar2,pcVar6,(*(undefined1 * PTR32 *)(gen_frame + 0xc)),puVar1 + 2,GEN_LO32(uVar9),GEN_HI32(uVar9));
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10)) - 1] = 0x20;
              if ((*(uint *)(gen_frame + 0x10)) == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10))] = 0x20;
              uVar3 = (*(uint *)(gen_frame + 0x10)) + 1;
              (*(uint *)(gen_frame + 0x10)) = uVar3;
              if (uVar3 == ((*(uint *)(gen_frame + 0x14)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516a8),&(*(undefined1 * PTR32 *)(gen_frame + 0xc)),1);
              }
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[(*(uint *)(gen_frame + 0x10))] = 0;
              (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 1;
              goto LAB_00dac848;
            case 0x6c: ;
              (*(uint *)(gen_frame + 0x10)) = uVar3 - 2;
              (*(undefined1 * PTR32 *)(gen_frame + 0xc))[uVar3 - 3] = 0;
              F_00da00e0(uVar2,"%sTimerEnd(\'%s\', %u, %u)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),*piVar7 + 2,piVar7[1],
                           piVar7[2]);
              goto LAB_00dac848;
            case 0x6d: ;
              pcVar6 = "Free";
              if (-1 < piVar7[2]) {
                pcVar6 = "Alloc";
              }
              F_00da00e0(uVar2,"%s%s%s(ptr=0x%p, nbytes=%i)\n",(*(undefined1 * PTR32 *)(gen_frame + 0xc)),pcVar6,puVar1 + 1,
                           piVar7[1],piVar7[2] & 0x7fffffff);
LAB_00dac848: ;
              piVar7 = piVar7 + 3;
            }
            uVar3 = (*(uint *)(gen_frame + 0x10));
            this = (*(int * PTR32 *)(gen_frame + 0x1c));
          }
          (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + 0x24;
          param_1 = param_1 + 1;
        } while (param_1 < (*(int * PTR32 *)(gen_frame + 0x20))[1]);
      }
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + 0xc;
      iVar4 = (*(int *)(gen_frame + 0x18)) + 1;
      (*(int *)(gen_frame + 0x18)) = iVar4;
    } while (iVar4 < *(int *)((int)this + 4));
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  uVar5 = (*(uint *)(gen_frame + 0x14));
  if (-1 < (int)(*(uint *)(gen_frame + 0x14))) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),(*(undefined1 * PTR32 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x14)) & 0x3fffffff);
  }
  return uVar5;
}

/* ref: FUN_00dace30 */
unsigned int F_00dace30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdace30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  byte bVar2;
  undefined8 * puVar3;
  uint uVar4;
  double * pdVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined4 * puVar10;
  undefined8 * puVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  
  iVar6 = *((int *)GEN_TOP((**(int * PTR32 *)param_1 + 0x4c)));
  (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 4);
  (*(int *)(gen_frame + 0x14)) = param_2[1];
  iVar9 = *param_2 + (*(int *)(gen_frame + 0x14));
  (*(int *)(gen_frame + 0x2c)) = iVar9;
  if (iVar6 < iVar9) {
    (*(int *)(gen_frame + 0x14)) = iVar6 - *param_2;
    (*(int *)(gen_frame + 0x2c)) = iVar6;
  }
  if (0 < (*(int *)(gen_frame + 0x14))) {
    iVar9 = param_2[1];
    if ((int)(param_5[2] & 0x3fffffffU) < iVar9) {
      iVar6 = (param_5[2] & 0x3fffffffU) * 2;
      if (iVar6 <= iVar9) {
        iVar6 = iVar9;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_5,iVar6,4);
    }
    iVar6 = iVar9 - param_5[1];
    puVar10 = (undefined4 *)(*param_5 + param_5[1] * 4);
    if (0 < iVar6) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
    }
    param_5[1] = iVar9;
    *param_4 = 0.0;
    iVar9 = *param_2;
    (*(int *)(gen_frame + 0x34)) = iVar9;
    if (iVar9 < (*(int *)(gen_frame + 0x2c))) {
      (*(int *)(gen_frame + 0x20)) = iVar9 * 0x24;
      do {
        (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x34)) - *param_2;
        iVar9 = *(int *)*param_3;
        if (*(int *)(iVar9 + 0xc + (*(int *)(gen_frame + 0x20))) == 0) {
          iVar9 = *(int *)(iVar9 + 4 + (*(int *)(gen_frame + 0x20)));
        }
        else {
          iVar9 = *(int *)(iVar9 + 8 + (*(int *)(gen_frame + 0x20)));
        }
        (*(int *)(gen_frame + 0x18)) = iVar9;
        iVar9 = *(int *)*param_3;
        if (*(int *)(iVar9 + 0xc + (*(int *)(gen_frame + 0x20))) == 0) {
          fVar13 = *(float *)(iVar9 + 0x10 + (*(int *)(gen_frame + 0x20)));
        }
        else {
          fVar13 = *(float *)(iVar9 + 0x14 + (*(int *)(gen_frame + 0x20)));
        }
        dVar16 = (double)fVar13 * *(double *)&REFG(undefined, 0x113cb80);
        iVar9 = 0;
        dVar17 = dVar16 * REFG(double, 0x1088108);
        (*(longlong *)(gen_frame + 0xc)) = 0;
        if (0 < (*(int *)(gen_frame + 0x38))) {
          piVar8 = *(int * PTR32 *)param_1;
LAB_00dacf50: ;
          bVar2 = F_00daa990(*((int *)GEN_TOP((*(int *)(*piVar8 + 0x48) + (*(int *)(gen_frame + 0x34)) * 4))) + 0x48,dVar17,
                               &(*(longlong *)(gen_frame + 0xc)));
          if (bVar2 == 0) goto code_r0x00dacf77;
          iVar9 = 0;
          do {
            F_00daa920(*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(int *)param_1 + iVar9 * 4) + 0x48))) +
                                 (*(int *)(gen_frame + 0x34)) * 4))) + 0x48,dVar17,dVar16);
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x38)));
        }
LAB_00dacfb5: ;
        iVar9 = (*(int *)(gen_frame + 0x38));
        if ((*(int *)(gen_frame + 0x38)) == 0) {
          (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = (undefined8 *)0x0;
LAB_00dacff4: ;
          (*(uint *)(gen_frame + 0x24)) = 0x80000000;
        }
        else {
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x38)) * 8;
          puVar3 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x1c)))));
          (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = puVar3;
          uVar4 = (int)((*(int *)(gen_frame + 0x1c)) + ((*(int *)(gen_frame + 0x1c)) >> 0x1f & 7U)) >> 3;
          (*(uint *)(gen_frame + 0x24)) = uVar4;
          if (uVar4 == 0) goto LAB_00dacff4;
        }
        if (0 < iVar9) {
          *(*(undefined8 * PTR32 *)(gen_frame + 0x30)) = GEN_FLT_TO(*(*(undefined8 * PTR32 *)(gen_frame + 0x30)), REFG(double, 0x10e1668));
          puVar3 = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
          puVar11 = (*(undefined8 * PTR32 *)(gen_frame + 0x30)) + 1;
          for (uVar4 = (*(int *)(gen_frame + 0x38)) * 8 - 5U >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined4 *)puVar11 = *(undefined4 *)puVar3;
            puVar3 = (undefined8 *)((int)puVar3 + 4);
            puVar11 = (undefined8 *)((int)puVar11 + 4);
          }
        }
        iVar9 = 0;
        if (0 < (*(int *)(gen_frame + 0x38))) {
          do {
            iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(int *)param_1 + iVar9 * 4) + 0x48))) + (*(int *)(gen_frame + 0x34)) * 4)));
            iVar7 = 0;
            if (0 < *(int *)(iVar6 + 0x4c)) {
              do {
                iVar1 = *((int *)GEN_TOP((*(int *)(iVar6 + 0x48) + iVar7 * 4)));
                if (*(int *)(iVar1 + 0x6c) != 2) {
                  dVar16 = *(double *)(iVar1 + 0x58);
                  if (!(dVar16 < gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x30))[iVar9]))) {
                    dVar16 = gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x30))[iVar9]);
                  }
                  (*(undefined8 * PTR32 *)(gen_frame + 0x30))[iVar9] = (undefined8)gen_d2bits(dVar16);
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(iVar6 + 0x4c));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x38)));
        }
        iVar9 = 0;
        *(undefined4 *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = REFG(float, 0x1136c54);
        if (3 < (*(int *)(gen_frame + 0x38))) {
          pdVar5 = (double *)((*(undefined8 * PTR32 *)(gen_frame + 0x30)) + 2);
          iVar6 = ((*(int *)(gen_frame + 0x38)) - 4U >> 2) + 1;
          iVar9 = iVar6 * 4;
          do {
            fVar13 = *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4);
            fVar15 = (float)pdVar5[-2];
            if (!((float)pdVar5[-2] < fVar13)) {
              fVar15 = fVar13;
            }
            *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = fVar15;
            fVar13 = *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4);
            fVar15 = (float)pdVar5[-1];
            if (!((float)pdVar5[-1] < fVar13)) {
              fVar15 = fVar13;
            }
            *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = fVar15;
            fVar13 = *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4);
            fVar15 = (float)*pdVar5;
            if (!((float)*pdVar5 < fVar13)) {
              fVar15 = fVar13;
            }
            *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = fVar15;
            fVar13 = *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4);
            fVar15 = (float)pdVar5[1];
            if (!((float)pdVar5[1] < fVar13)) {
              fVar15 = fVar13;
            }
            pdVar5 = pdVar5 + 4;
            iVar6 = iVar6 + -1;
            *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = fVar15;
          } while (iVar6 != 0);
        }
        for (; iVar9 < (*(int *)(gen_frame + 0x38)); iVar9 = iVar9 + 1) {
          fVar13 = *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4);
          fVar15 = ((float)GEN_TOF(gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x30))[iVar9])));
          if (!(((float)GEN_TOF(gen_bits2d((*(undefined8 * PTR32 *)(gen_frame + 0x30))[iVar9]))) < fVar13)) {
            fVar15 = fVar13;
          }
          *(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4) = fVar15;
        }
        iVar9 = 0;
        if (0 < (*(int *)(gen_frame + 0x38))) {
          do {
            iVar6 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(*(int *)param_1 + iVar9 * 4) + 0x48))) + (*(int *)(gen_frame + 0x34)) * 4)));
            iVar7 = 0;
            if (0 < *(int *)(iVar6 + 0x4c)) {
              do {
                iVar1 = *((int *)GEN_TOP((*(int *)(iVar6 + 0x48) + iVar7 * 4)));
                if (*(int *)(iVar1 + 0x6c) != 2) {
                  fVar13 = ((float)GEN_TOF((((double)*(float *)(iVar1 + (*(int *)(gen_frame + 0x18)) * 4) +
                                   *(double *)(iVar1 + 0x58)) -
                                  (double)*(float *)(*param_5 + (*(int *)(gen_frame + 0x28)) * 4))));
                  if (!(*param_4 < fVar13)) {
                    fVar13 = *param_4;
                  }
                  *param_4 = fVar13;
                }
                iVar7 = iVar7 + 1;
              } while (iVar7 < *(int *)(iVar6 + 0x4c));
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < (*(int *)(gen_frame + 0x38)));
        }
        if (((*(uint *)(gen_frame + 0x24)) & 0x80000000) == 0) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x24)) * 8);
        }
        (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 0x24;
        iVar9 = (*(int *)(gen_frame + 0x34)) + 1;
        (*(int *)(gen_frame + 0x34)) = iVar9;
      } while (iVar9 < (*(int *)(gen_frame + 0x2c)));
    }
    if ((0.0 < gen_bits2f(param_2[7])) && (iVar9 = *param_2, iVar9 < (*(int *)(gen_frame + 0x2c)))) {
      if (3 < (*(int *)(gen_frame + 0x2c)) - iVar9) {
        do {
          *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) =
               *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) + gen_bits2f(param_2[7]);
          *((float *)GEN_TOP((*param_5 + 4 + (iVar9 - *param_2) * 4))) =
               *((float *)GEN_TOP((*param_5 + 4 + (iVar9 - *param_2) * 4))) + gen_bits2f(param_2[7]);
          *((float *)GEN_TOP((*param_5 + 8 + (iVar9 - *param_2) * 4))) =
               gen_bits2f(param_2[7]) + *((float *)GEN_TOP((*param_5 + 8 + (iVar9 - *param_2) * 4)));
          iVar6 = iVar9 - *param_2;
          iVar9 = iVar9 + 4;
          *(float *)(*param_5 + 0xc + iVar6 * 4) =
               gen_bits2f(param_2[7]) + *(float *)(*param_5 + 0xc + iVar6 * 4);
        } while (iVar9 < (*(int *)(gen_frame + 0x2c)) + -3);
      }
      for (; iVar9 < (*(int *)(gen_frame + 0x2c)); iVar9 = iVar9 + 1) {
        *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) =
             *((float *)GEN_TOP((*param_5 + (iVar9 - *param_2) * 4))) + gen_bits2f(param_2[7]);
      }
    }
    fVar13 = REFG(float, 0x113cb7c);
    if (0.0 < gen_bits2f(param_2[6])) {
      *param_4 = gen_bits2f(param_2[6]);
      return 0;
    }
    if ((*(int *)(gen_frame + 0x14)) == 1) {
      fVar15 = *param_4;
      (*(longlong *)(gen_frame + 0xc)) = (longlong)TRUNC((float10)fVar15 * (float10)REFG(float, 0x10947f8));
      (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0xc)) + 0)) = (uint)(longlong)TRUNC((float10)fVar15 * (float10)REFG(float, 0x10947f8));
      uVar4 = (uint)(*(longlong *)(gen_frame + 0xc)) | (uint)(*(longlong *)(gen_frame + 0xc)) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      iVar9 = (uVar4 >> 0x10 | uVar4) + 1;
      fVar12 = (float10)iVar9;
      if (iVar9 < 0) {
        fVar12 = fVar12 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      fVar15 = (float)(fVar12 * (float10)REFG(float, 0x1094724) - (float10)REFG(float, 0x135259c));
      fVar14 = REFG(float, 0x135259c) * REFG(float, 0x1094808);
      if (!(REFG(float, 0x135259c) * REFG(float, 0x1094808) < fVar15)) {
        fVar14 = fVar15;
      }
      fVar15 = fVar14 * REFG(float, 0x10c75a0) + REFG(float, 0x135259c);
      *param_4 = fVar15;
      REFG(float, 0x135259c) = fVar15;
      if (fVar15 < fVar13) {
        REFG(float, 0x135259c) = fVar13;
      }
      *param_4 = GEN_FLT_TO(*param_4, REFG(float, 0x135259c));
    }
  }
  return 0;
code_r0x00dacf77: ;
  iVar9 = iVar9 + 1;
  piVar8 = piVar8 + 1;
  if ((*(int *)(gen_frame + 0x38)) <= iVar9) goto LAB_00dacfb5;
  goto LAB_00dacf50;
}

/* ref: FUN_00dad3e0 */
uint F_00dad3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdad3e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  LPVOID pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  iVar3 = param_1[1];
  ((int *)(gen_frame + 0x18))[4] = iVar3;
  piVar6 = param_1;
  if (0 < iVar3) {
    ((int *)(gen_frame + 0xc))[0] = 0;
    ((int *)(gen_frame + 0xc))[1] = 0;
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1090708);
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)0x80000000;
    F_00dace30((uint)param_1,param_2,param_3,&(*(float *)(gen_frame + 0x40)),((int *)(gen_frame + 0xc)));
    (*(int *)(gen_frame + 0x38)) = param_2[1];
    iVar1 = *(int *)(*param_3 + 4) - *param_2;
    if (iVar1 < (*(int *)(gen_frame + 0x38))) {
      (*(int *)(gen_frame + 0x38)) = iVar1;
    }
    else {
    }
    (*(int *)(gen_frame + 0x2c)) = param_2[3] + param_2[2];
    iVar1 = ((param_2[3] + param_2[2]) * iVar3 + param_2[4]) * (*(int *)(gen_frame + 0x38));
    iVar3 = param_2[5];
    ((int *)(gen_frame + 0x18))[3] = *param_2 + (*(int *)(gen_frame + 0x38));
    (*(int *)(gen_frame + 0x48)) = iVar1;
    uVar7 = ((*(int *)(gen_frame + 0x38)) < 2) - 1 & 0x20;
    (*(int *)(gen_frame + 0x30)) = iVar3 - uVar7;
    (*(uint *)(gen_frame + 0x3c)) = uVar7;
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    iVar3 = (iVar3 + 1) * iVar1 * 4;
    (*(int *)(gen_frame + 0x34)) = iVar3;
    uVar7 = F_00d92460(*(undefined4 *)((int)pvVar2 + 0x2c),iVar3);
    *param_4 = uVar7;
    *param_5 = iVar1;
    F_00da1030(*param_4,0,(*(int *)(gen_frame + 0x34)));
    if (param_6 != (float *)0x0) {
      *param_6 = (*(float *)(gen_frame + 0x40));
    }
    (*(int *)(gen_frame + 0x44)) = *param_2;
    ((int *)(gen_frame + 0x18))[0] = 0;
    ((int *)(gen_frame + 0x18))[1] = 0;
    ((int *)(gen_frame + 0x18))[2] = -1;
    if ((*(int *)(gen_frame + 0x44)) < ((int *)(gen_frame + 0x18))[3]) {
      do {
        iVar3 = (*(int *)(gen_frame + 0x48)) - param_2[4];
        (*(int *)(gen_frame + 0x48)) = iVar3;
        if (1 < (*(int *)(gen_frame + 0x38))) {
          F_00da9e60(*param_4 + (iVar3 - (*(int *)(gen_frame + 0x2c))) * param_2[5] * 4,(*(int *)(gen_frame + 0x44)),param_2[5]);
        }
        iVar3 = 0;
        if (0 < ((int *)(gen_frame + 0x18))[4]) {
          (*(int *)(gen_frame + 0x34)) = 0;
          do {
            iVar4 = (*(int *)(gen_frame + 0x48)) - (*(int *)(gen_frame + 0x2c));
            (*(int *)(gen_frame + 0x48)) = iVar4;
            F_00dab8d0(*(undefined4 *)((*(int *)(gen_frame + 0x34)) + *param_3),(*(int *)(gen_frame + 0x44)),
                         *(int *)(*param_1 + iVar3 * 4) + 0x48,
                         *param_4 + (param_2[5] * iVar4 + (*(uint *)(gen_frame + 0x3c))) * 4,param_2[2],param_2[9],
                         param_2[5],(*(int *)(gen_frame + 0x30)),(*(float *)(gen_frame + 0x40)),GEN_TOF(*((float *)GEN_TOP((((int *)(gen_frame + 0xc))[0] + ((*(int *)(gen_frame + 0x44)) - *param_2) * 4)))),((int *)(gen_frame + 0x18)));
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0xc;
            iVar3 = iVar3 + 1;
          } while (iVar3 < ((int *)(gen_frame + 0x18))[4]);
        }
        (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) + 1;
      } while ((*(int *)(gen_frame + 0x44)) < ((int *)(gen_frame + 0x18))[3]);
    }
    fVar10 = REFG(float, 0x1087f04) / (*(float *)(gen_frame + 0x40));
    fVar9 = (float)((*(int *)(gen_frame + 0x30)) * 1000) * fVar10;
    iVar3 = (int)(((float)((int)gen_bits2f(param_2[7]) % 1000) * REFG(float, 0x10947f8)) * fVar9);
    ((int *)(gen_frame + 0x18))[4] = iVar3;
    if ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(REFG(float, 0x10a509c))) && !(fVar9 <= REFG(float, 0x10a509c))) {
      iVar4 = (*(uint *)(gen_frame + 0x3c)) - iVar3;
      ((int *)(gen_frame + 0x18))[3] = 0;
      if (iVar4 < param_2[5]) {
        do {
          if ((-1 < iVar4) && (param_1 = (int *)0x0, 0 < iVar1)) {
            do {
              *((undefined4 *)GEN_TOP((*param_4 + (param_2[5] * (int)param_1 + iVar4) * 4))) = 0xff0000ff;
              param_1 = (int *)((int)param_1 + 1);
            } while ((int)param_1 < iVar1);
          }
          iVar4 = ((int *)(gen_frame + 0x18))[3] + 1;
          ((int *)(gen_frame + 0x18))[3] = iVar4;
          iVar4 = ((int)((float)iVar4 * fVar9) - iVar3) + (*(uint *)(gen_frame + 0x3c));
        } while (iVar4 < param_2[5]);
      }
    }
    iVar4 = (int)((float)((*(int *)(gen_frame + 0x30)) * 0x411a) * fVar10);
    ((int *)(gen_frame + 0x18))[3] = iVar4;
    if ((0 < iVar4) && (iVar3 = (*(uint *)(gen_frame + 0x3c)) - iVar3, iVar3 < param_2[5])) {
      do {
        if ((-1 < iVar3) && (iVar5 = 0, 0 < iVar1)) {
          do {
            *((undefined4 *)GEN_TOP((*param_4 + (param_2[5] * iVar5 + iVar3) * 4))) = 0xff00ff00;
            iVar8 = param_2[5] * iVar5;
            iVar5 = iVar5 + 1;
            *((undefined4 *)GEN_TOP((*param_4 + 4 + (iVar8 + iVar3) * 4))) = 0xff00ff00;
          } while (iVar5 < iVar1);
        }
        iVar3 = iVar3 + iVar4;
      } while (iVar3 < param_2[5]);
    }
    if ((char)param_2[8] != '\0') {
      iVar3 = 0;
      if (-1 < ((int *)(gen_frame + 0x18))[2]) {
        do {
          if (*(int *)(((int *)(gen_frame + 0x18))[0] + iVar3 * 8) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= ((int *)(gen_frame + 0x18))[2]);
      }
      do {
        if ((((int *)(gen_frame + 0x18))[2] < iVar3) || (iVar3 = iVar3 + 1, ((int *)(gen_frame + 0x18))[2] < iVar3)) break;
        do {
          if (*(int *)(((int *)(gen_frame + 0x18))[0] + iVar3 * 8) != -1) break;
          iVar3 = iVar3 + 1;
        } while (iVar3 <= ((int *)(gen_frame + 0x18))[2]);
      } while( true );
    }
    F_00dbdb20(((int *)(gen_frame + 0x18)),&REFG(undefined * PTR32, 0x13516ac));
    F_00dbd5e0();
    ((int *)(gen_frame + 0xc))[1] = 0;
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x14));
    if (-1 < (int)(*(int * PTR32 *)(gen_frame + 0x14))) {
      piVar6 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                                (&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0xc))[0],(int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x14))) * 4)));
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_00dad770 */
uint F_00dad770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdad770u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  LPVOID pvVar3;
  
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar2 = F_00dad3e0(param_1,param_2,param_3,&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x4)),param_5);
  iVar1 = (*(int *)(gen_frame + 0x8));
  if ((*(int *)(gen_frame + 0x8)) != 0) {
    F_00da9d20((*(int *)(gen_frame + 0x8)),param_4,*(undefined4 *)(param_2 + 0x14),(*(undefined4 *)(gen_frame + 0x4)));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar3 + 0x2c),iVar1);
  }
  return uVar2;
}

/* ref: FUN_00dad8e0 */
uint F_00dad8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdad8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = gen_bits2f(param_3[1]);
  iVar2 = *(int *)(param_4 + 4);
  (*(float *)(gen_frame + 0x18)) = fVar1;
  if ((int)gen_fl2bits(fVar1) < 1) {
    return 0;
  }
  uVar4 = (iVar2 < 2) - 1 & 0x20;
  (*(uint *)(gen_frame + 0x14)) = uVar4;
  if (((int)uVar4 <= param_1) && (param_1 < *(int *)(param_4 + 0x14))) {
    iVar6 = *(int *)(param_4 + 0xc) + *(int *)(param_4 + 8);
    iVar5 = iVar6 * (int)gen_fl2bits(fVar1) + *(int *)(param_4 + 0x10);
    ((int *)(gen_frame + 0x4))[3] = *(int *)(param_4 + 0x14) - uVar4;
    iVar2 = iVar5 * iVar2;
    if ((-1 < param_2) && (param_2 < iVar2)) {
      iVar2 = (iVar2 - param_2) + -1;
      iVar3 = iVar2 / iVar5;
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1090708);
      ((int *)(gen_frame + 0x4))[2] = ((int)0x80000000);
      iVar6 = (iVar2 % iVar5) / iVar6;
      ((int *)(gen_frame + 0x4))[0] = 0;
      ((int *)(gen_frame + 0x4))[1] = 0;
      F_00dace30((uint)param_3,param_4,param_5,&(*(float *)(gen_frame + 0x18)),((int *)(gen_frame + 0x4)));
      uVar4 = F_00dab7f0(((int *)(gen_frame + 0x4))[3],(*(float *)(gen_frame + 0x18)),*(undefined4 *)(*param_5 + iVar6 * 0xc),iVar3,
                           param_1 - (*(uint *)(gen_frame + 0x14)),*(int *)(*param_3 + iVar6 * 4) + 0x48,
                           *(float *)(((int *)(gen_frame + 0x4))[0] + iVar3 * 4));
      ((int *)(gen_frame + 0x4))[1] = 0;
      if (-1 < ((int *)(gen_frame + 0x4))[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),((int *)(gen_frame + 0x4))[0],((int *)(gen_frame + 0x4))[2] * 4);
      }
      return uVar4;
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00dada40 */
uint F_00dada40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdada40u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00dada50 */
unsigned int F_00dada50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdada50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  int iVar2;
  undefined * pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  short * psVar6;
  short * psVar7;
  int iVar8;
  float * pfVar9;
  float * pfVar10;
  int iVar11;
  int * piVar12;
  int iVar13;
  uint uVar14;
  undefined * this;
  int local_18;
  int local_14;
  int local_10;
  
  uVar1 = *(undefined4 *)(param_1 + 100);
  pvVar3 = (undefined *)F_00da4190(param_2,uVar1,0);
  if (pvVar3 == (undefined *)0x0) {
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar4 + 0x30) + 4))))
                               (*(int * PTR32 *)((int)pvVar4 + 0x30),0x88)));
    if (pvVar3 == (undefined *)0x0) {
      pvVar3 = (undefined *)0x0;
    }
    else {
      F_00daada0(pvVar3,0,0,0);
      *(undefined4 *)((int)pvVar3 + 0x70) = 0;
      *(undefined4 *)((int)pvVar3 + 0x74) = 0;
      *(undefined4 *)((int)pvVar3 + 0x78) = 0x80000000;
      *(undefined4 *)((int)pvVar3 + 0x7c) = 0;
      *(undefined4 *)((int)pvVar3 + 0x80) = 0;
      *(undefined4 *)((int)pvVar3 + 0x84) = 0x80000000;
    }
    *(undefined4 *)((int)pvVar3 + 100) = uVar1;
    F_00da3a20(param_2,uVar1,pvVar3);
  }
  pfVar9 = (float *)(param_1 + 0xc);
  psVar6 = (short *)(param_1 + 0x34);
  pfVar10 = (float *)((int)pvVar3 + 4);
  psVar7 = (short *)((int)pvVar3 + 0x30);
  local_10 = 2;
  do {
    pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
    *psVar7 = *psVar7 + *((short *)GEN_TOP(((param_1 - (int)pvVar3) + (int)psVar7)));
    *pfVar10 = *((float *)GEN_TOP(((param_1 - (int)pvVar3) + (int)pfVar10))) + *pfVar10;
    psVar7[1] = psVar7[1] + psVar6[-1];
    pfVar10[1] = pfVar9[-1] + pfVar10[1];
    psVar7[2] = psVar7[2] + *psVar6;
    pfVar10[2] = pfVar10[2] + *pfVar9;
    psVar7[3] = psVar7[3] + psVar6[1];
    pfVar10[3] = pfVar9[1] + pfVar10[3];
    psVar7[4] = psVar7[4] + psVar6[2];
    pfVar10[4] = pfVar9[2] + pfVar10[4];
    psVar7[5] = psVar7[5] + psVar6[3];
    psVar7 = psVar7 + 6;
    psVar6 = psVar6 + 6;
    pfVar10 = pfVar10 + 6;
    pfVar9 = pfVar9 + 6;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  local_18 = 0;
  if (0 < *(int *)(param_1 + 0x4c)) {
    do {
      iVar13 = *((int *)GEN_TOP((*(int *)(param_1 + 0x48) + local_18 * 4)));
      F_00dada50(iVar13,param_2);
      uVar1 = *(undefined4 *)(iVar13 + 100);
      iVar11 = *(int *)((int)pvVar3 + 0x80) + -1;
      if (-1 < iVar11) {
        iVar8 = iVar11 * 0x70;
        do {
          uVar14 = *(int *)((int)pvVar3 + 0x7c) + iVar8;
          uVar5 = F_00da0d20(uVar1,*((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x7c) + 100 + iVar8))));
          if (uVar5 == 0) {
            if (-1 < iVar11) goto LAB_00dadc74;
            break;
          }
          iVar8 = iVar8 + -0x70;
          iVar11 = iVar11 + -1;
        } while (-1 < iVar11);
      }
      iVar8 = *(int *)((int)pvVar3 + 0x80);
      piVar12 = (int *)((int)pvVar3 + 0x7c);
      iVar11 = iVar8 + 1;
      uVar5 = *(uint *)((int)pvVar3 + 0x84) & 0x3fffffff;
      if ((int)uVar5 < iVar11) {
        iVar2 = uVar5 * 2;
        if (iVar11 < iVar2) {
          iVar11 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a8),piVar12,iVar11,0x70);
      }
      iVar11 = *(int *)((int)pvVar3 + 0x80) * 0x70 + *piVar12;
      if (iVar11 != 0) {
        *(undefined4 *)(iVar11 + 0x48) = 0;
        *(undefined4 *)(iVar11 + 0x4c) = 0;
        *(undefined4 *)(iVar11 + 0x50) = 0x80000000;
      }
      *(int *)((int)pvVar3 + 0x80U) = *(int *)((int)pvVar3 + 0x80U) + 1;
      this = (undefined *)(iVar8 * 0x70 + *piVar12);
      if (this == (undefined *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = F_00daada0(this,0,uVar1,0);
      }
LAB_00dadc74: ;
      pfVar9 = (float *)(uVar14 + 4);
      psVar6 = (short *)(uVar14 + 0x30);
      pfVar10 = (float *)(iVar13 + 0xc);
      psVar7 = (short *)(iVar13 + 0x34);
      local_14 = 2;
      do {
        pfVar9[-1] = pfVar10[-3] + pfVar9[-1];
        *psVar6 = *psVar6 + *((short *)GEN_TOP(((iVar13 - uVar14) + (int)psVar6)));
        *pfVar9 = *((float *)GEN_TOP(((iVar13 - uVar14) + (int)pfVar9))) + *pfVar9;
        psVar6[1] = psVar6[1] + psVar7[-1];
        pfVar9[1] = pfVar10[-1] + pfVar9[1];
        psVar6[2] = psVar6[2] + *psVar7;
        pfVar9[2] = pfVar9[2] + *pfVar10;
        psVar6[3] = psVar6[3] + psVar7[1];
        pfVar9[3] = pfVar10[1] + pfVar9[3];
        psVar6[4] = psVar6[4] + psVar7[2];
        pfVar9[4] = pfVar10[2] + pfVar9[4];
        psVar6[5] = psVar6[5] + psVar7[3];
        psVar6 = psVar6 + 6;
        psVar7 = psVar7 + 6;
        pfVar9 = pfVar9 + 6;
        pfVar10 = pfVar10 + 6;
        local_14 = local_14 + -1;
      } while (local_14 != 0);
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x4c));
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    iVar13 = *(int *)((int)pvVar3 + 0x74) + -1;
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x60) + 100)));
    if (-1 < iVar13) {
      iVar11 = iVar13 * 0x70;
      do {
        uVar14 = *(int *)((int)pvVar3 + 0x70) + iVar11;
        uVar5 = F_00da0d20(uVar1,*((undefined4 *)GEN_TOP((*(int *)((int)pvVar3 + 0x70) + 100 + iVar11))));
        if (uVar5 == 0) {
          if (-1 < iVar13) goto LAB_00daddf2;
          break;
        }
        iVar11 = iVar11 + -0x70;
        iVar13 = iVar13 + -1;
      } while (-1 < iVar13);
    }
    iVar11 = *(int *)((int)pvVar3 + 0x74);
    piVar12 = (int *)((int)pvVar3 + 0x70);
    iVar13 = iVar11 + 1;
    uVar5 = *(uint *)((int)pvVar3 + 0x78) & 0x3fffffff;
    if ((int)uVar5 < iVar13) {
      iVar8 = uVar5 * 2;
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a8),piVar12,iVar13,0x70);
    }
    iVar13 = *(int *)((int)pvVar3 + 0x74) * 0x70 + *piVar12;
    if (iVar13 != 0) {
      *(undefined4 *)(iVar13 + 0x48) = 0;
      *(undefined4 *)(iVar13 + 0x4c) = 0;
      *(undefined4 *)(iVar13 + 0x50) = 0x80000000;
    }
    *(int *)((int)pvVar3 + 0x74U) = *(int *)((int)pvVar3 + 0x74U) + 1;
    pvVar3 = (undefined *)(iVar11 * 0x70 + *piVar12);
    if (pvVar3 == (undefined *)0x0) {
      uVar14 = 0;
    }
    else {
      uVar14 = F_00daada0(pvVar3,0,uVar1,0);
    }
LAB_00daddf2: ;
    iVar13 = *(int *)(param_1 + 0x60);
    pfVar9 = (float *)(iVar13 + 0xc);
    psVar6 = (short *)(iVar13 + 0x34);
    pfVar10 = (float *)(uVar14 + 4);
    psVar7 = (short *)(uVar14 + 0x30);
    param_1 = 2;
    do {
      pfVar10[-1] = pfVar9[-3] + pfVar10[-1];
      *psVar7 = *psVar7 + *((short *)GEN_TOP(((iVar13 - uVar14) + (int)psVar7)));
      *pfVar10 = *((float *)GEN_TOP(((iVar13 - uVar14) + (int)pfVar10))) + *pfVar10;
      psVar7[1] = psVar7[1] + psVar6[-1];
      pfVar10[1] = pfVar9[-1] + pfVar10[1];
      psVar7[2] = psVar7[2] + *psVar6;
      pfVar10[2] = *pfVar9 + pfVar10[2];
      psVar7[3] = psVar7[3] + psVar6[1];
      pfVar10[3] = pfVar9[1] + pfVar10[3];
      psVar7[4] = psVar7[4] + psVar6[2];
      pfVar10[4] = pfVar9[2] + pfVar10[4];
      psVar7[5] = psVar7[5] + psVar6[3];
      psVar7 = psVar7 + 6;
      psVar6 = psVar6 + 6;
      pfVar10 = pfVar10 + 6;
      pfVar9 = pfVar9 + 6;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return 0;
}

/* ref: FUN_00dadec0 */
unsigned int F_00dadec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdadec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int iVar5;
  int * piVar6;
  
  iVar4 = param_1 + param_2;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar4) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar3 = (*(int *)((int)this + 4) - iVar4) + -1;
  if (-1 < iVar3) {
    piVar6 = (int *)(*(int *)this + iVar4 * 0xc + iVar3 * 0xc);
    do {
      iVar5 = piVar6[1] + -1;
      if (-1 < iVar5) {
        this_00 = (undefined *)(*piVar6 + iVar5 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      uVar1 = piVar6[2];
      piVar6[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar6,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *piVar6 = 0;
      piVar6[2] = ((int)0x80000000);
      piVar6 = piVar6 + -3;
    } while (-1 < iVar3);
  }
  iVar3 = iVar4 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 0x1c) = param_2;
  *(int *)((int)this + 4) = iVar4;
  *(int *)((int)this + 0x18) = param_1;
  F_00dabae0(this);
  return 0;
}

/* ref: FUN_00dadfd0 */
uint F_00dadfd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xdadfd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined * this;
  uint uVar1;
  uint uVar2;
  LPVOID pvVar3;
  int iVar4;
  
  uVar1 = (*(uint *)(gen_frame + 0x2c));
  (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x2c)) + 0)) = 0;
  (*(uint *)(gen_frame + 0x2c)) = uVar1 & 0xffffff00;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0x80000000;
  F_00da3de0(((undefined1 *)(gen_frame + 0xc)),(*(uint *)(gen_frame + 0x2c)));
  F_00dada50(param_2,((undefined1 *)(gen_frame + 0xc)));
  if ((int)((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) < (*(int *)(gen_frame + 0x10))) {
    iVar4 = ((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) * 2;
    if (iVar4 <= (*(int *)(gen_frame + 0x10))) {
      iVar4 = (*(int *)(gen_frame + 0x10));
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x1c)),iVar4,4);
  }
  uVar1 = F_00da3970(((undefined1 *)(gen_frame + 0xc)));
  F_00da3e40(((undefined1 *)(gen_frame + 0xc)),&(*(char *)(gen_frame + 0x3b)),uVar1);
  while ((*(char *)(gen_frame + 0x3b)) != '\0') {
    uVar2 = F_00da39b0(((undefined1 *)(gen_frame + 0xc)),uVar1);
    *(uint *)((*(int *)(gen_frame + 0x1c)) + (*(int *)(gen_frame + 0x20)) * 4) = uVar2;
    (*(int *)(gen_frame + 0x20)) = (*(int *)(gen_frame + 0x20)) + 1;
    uVar1 = F_00da39f0(((undefined1 *)(gen_frame + 0xc)),uVar1);
    F_00da3e40(((undefined1 *)(gen_frame + 0xc)),&(*(char *)(gen_frame + 0x3b)),uVar1);
  }
  if (1 < (*(int *)(gen_frame + 0x20))) {
    F_00daf3c0((*(int *)(gen_frame + 0x1c)),0,(*(int *)(gen_frame + 0x20)) + -1,((code *)REFP(0xdaeca0)));
  }
  F_00da3e20(((undefined1 *)(gen_frame + 0xc)));
  (*(float *)(gen_frame + 0x30)) = *((float *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x1c)) + -4 + (*(int *)(gen_frame + 0x20)) * 4) + 4)));
  F_00da00e0(in_edi,&REFG(undefined, 0x113c50c));
  F_00da00e0(in_edi,"************************************\n");
  F_00da00e0(in_edi,"********** Per Type Times    *******\n");
  F_00da00e0(in_edi,"************************************\n");
  (*(uint *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x20)) + -1;
  if (-1 < (int)(*(uint *)(gen_frame + 0x2c))) {
    (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x30)) * param_3;
    do {
      this = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x1c)) + (*(uint *)(gen_frame + 0x2c)) * 4);
      if ((*(float *)(gen_frame + 0x28)) < *(float *)((int)this + 4)) {
        F_00da00e0(in_edi,&REFG(undefined, 0x1080294));
        F_00da00e0(in_edi,"************************************\n\n");
        iVar4 = 0;
        if (0 < *(int *)((int)this + 0x74)) {
          (*(int *)(gen_frame + 0x34)) = 0;
          do {
            F_00da00e0(in_edi,&REFG(undefined, 0x113cb88));
            F_00da9bd0(in_edi,0.0,*(int *)((int)this + 0x70) + (*(int *)(gen_frame + 0x34)));
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x70;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)this + 0x74));
        }
        F_00da9bd0(in_edi,(*(float *)(gen_frame + 0x30)),this);
        iVar4 = 0;
        if (0 < *(int *)((int)this + 0x80)) {
          (*(int *)(gen_frame + 0x34)) = 0;
          do {
            F_00da00e0(in_edi,&REFG(undefined, 0x113cb88));
            F_00da9bd0(in_edi,0.0,*(int *)((int)this + 0x7c) + (*(int *)(gen_frame + 0x34)));
            (*(int *)(gen_frame + 0x34)) = (*(int *)(gen_frame + 0x34)) + 0x70;
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)this + 0x80));
        }
      }
      F_00db1170(this);
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar3 + 0x30),this,0x88);
      (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + -1;
    } while (-1 < (int)(*(uint *)(gen_frame + 0x2c)));
  }
  (*(int *)(gen_frame + 0x20)) = 0;
  uVar1 = (*(uint *)(gen_frame + 0x24));
  if (-1 < (int)(*(uint *)(gen_frame + 0x24))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x1c)),(*(uint *)(gen_frame + 0x24)) * 4);
  }
  return uVar1;
}

/* ref: FUN_00dae240 */
uint F_00dae240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdae240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float * pfVar1;
  int * piVar2;
  int iVar3;
  gen_size32 sVar4;
  undefined4 * puVar5;
  LPVOID pvVar6;
  undefined * pvVar7;
  uint uVar8;
  undefined4 extraout_ECX = 0;
  undefined4 extraout_ECX_00 = 0;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  int * piVar12;
  int iVar13;
  undefined1 * puVar14;
  char * pcVar15;
  
  F_00da00e0(param_1,"Havok version: %s\n","hk_2011.3.1-r1");
  iVar3 = *(int *)*param_2;
  piVar12 = (int *)(iVar3 + 0x48);
  (*(int * PTR32 *)(gen_frame + 0xb0)) = piVar12;
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  F_00daada0(((undefined1 *)(gen_frame + 0xc)),0,(*(undefined * PTR32 (*)[1])REFP(0x113cdb4)),1);
  iVar13 = 0;
  (*(int * PTR32 *)(gen_frame + 0xd8)) = ((int *)GEN_TOP((REFG(float, 0x1087f04) / (float)*(int *)(iVar3 + 0x4c))));
  uVar9 = extraout_ECX;
  if (0 < *(int *)(iVar3 + 0x4c)) {
    do {
      F_00dab620(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(*piVar12 + iVar13 * 4));
      iVar13 = iVar13 + 1;
      uVar9 = extraout_ECX_00;
    } while (iVar13 < *(int *)(iVar3 + 0x4c));
  }
  pfVar1 = (float *)F_00daa7a0(((undefined1 *)(gen_frame + 0xc)),param_6,
                                 (int)(CONCAT35((int3)((uint)uVar9 >> 8),CONCAT14(1,param_6)) >>
                                      0x20));
  if (pfVar1 != (float *)0x0) {
    do {
      (*(float *)(gen_frame + 0xcc)) = *pfVar1 * ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd8))))) + (*(float *)(gen_frame + 0xcc));
      pfVar1 = (float *)F_00daa800(pfVar1,((undefined1 *)(gen_frame + 0xc)),param_6);
    } while (pfVar1 != (float *)0x0);
    if (!((*(float *)(gen_frame + 0xcc)) <= 0.0)) goto LAB_00dae331;
  }
  (*(float *)(gen_frame + 0xcc)) = REFG(float, 0x1094724);
LAB_00dae331: ;
  if ((param_5 & 1) != 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
    F_00da00e0(param_1,"*********************************\n");
    F_00da00e0(param_1,"********** Total Times    *******\n");
    F_00da00e0(param_1,"*********************************\n");
    F_00da00e0(param_1,"Timers are added together\n");
    F_00daa540(param_1,((undefined1 *)(gen_frame + 0xc)),0,((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd8))))));
  }
  piVar2 = (int *)F_00daae40(((undefined1 *)(gen_frame + 0xc)));
  if ((param_5 & 2) != 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
    F_00da00e0(param_1,"*********************************\n");
    F_00da00e0(param_1,"********** Per Frame Time *******\n");
    F_00da00e0(param_1,"*********************************\n");
    F_00da00e0(param_1,"Ascii Art all frames overview\n");
    F_00da1030(((undefined1 *)(gen_frame + 0x7c)),0x20,0x28);
    uVar8 = (*(uint *)(gen_frame + 0xa4));
    piVar2 = (int *)0x0;
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xa4)) + 0)) = 0;
    (*(uint *)(gen_frame + 0xa4)) = uVar8 & 0xffffff00;
    (*(int * PTR32 *)(gen_frame + 0xd8)) = (int *)0x0;
    if (0 < *(int *)(iVar3 + 0x4c)) {
      do {
        iVar3 = *(int *)(*piVar12 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xd8))) * 4);
        piVar2 = (*(int * PTR32 *)(gen_frame + 0xd8));
        if (*(int *)(iVar3 + 0x4c) != 0) {
          (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x0;
          (*(char * PTR32 *)(gen_frame + 0xc8)) = "Unknown";
          for (pfVar1 = (float *)F_00daa7a0(iVar3,param_6,
                                              (int)(CONCAT35((int3)((uint)*piVar12 >> 8),
                                                             CONCAT14(1,param_6)) >> 0x20));
              pfVar1 != (float *)0x0; pfVar1 = (float *)F_00daa800(pfVar1,iVar3,param_6)) {
            (*(char * PTR32 *)(gen_frame + 0xc8)) = ((char *)(uintptr_t)gen_fl2bits((float)(pfVar1[0x19])));
            (*(int * PTR32 *)(gen_frame + 0xd4)) = ((int *)(uintptr_t)gen_fl2bits((float)((*pfVar1 + ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd4)))))))));
          }
          iVar3 = (int)((((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0xd4))))) * REFG(float, 0x10a0d00)) / (*(float *)(gen_frame + 0xcc)));
          if (iVar3 < 0) {
            iVar3 = 0;
          }
          else if (0x27 < iVar3) {
            iVar3 = 0x27;
          }
          iVar13 = 0;
          puVar14 = ((undefined1 *)(gen_frame + 0x7c));
          if (4 < iVar3) {
            iVar10 = 4;
            do {
              *puVar14 = 9;
              iVar10 = iVar10 + 4;
              puVar14 = puVar14 + 1;
              iVar13 = iVar13 + 4;
            } while (iVar10 < iVar3);
          }
          iVar10 = iVar13;
          if (iVar13 < iVar3) {
            (*(gen_size32 *)(gen_frame + 0xd0)) = iVar3 - iVar13;
            F_00c48350(puVar14,0x20,iVar3 - iVar13);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xd0));
            iVar10 = (*(gen_size32 *)(gen_frame + 0xd0)) + iVar13;
          }
          *puVar14 = 0x23;
          iVar13 = iVar13 + 4;
          puVar14 = puVar14 + 1;
          if (iVar10 + 1 < iVar13) {
            sVar4 = iVar13 - (iVar10 + 1);
            (*(gen_size32 *)(gen_frame + 0xd0)) = sVar4;
            F_00c48350(puVar14,0x20,sVar4);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xd0));
          }
          if (iVar13 < 0x28) {
            sVar4 = (0x27U - iVar13 >> 2) + 1;
            (*(gen_size32 *)(gen_frame + 0xd0)) = sVar4;
            F_00c48350(puVar14,9,sVar4);
            puVar14 = puVar14 + (*(gen_size32 *)(gen_frame + 0xd0));
          }
          *puVar14 = 0;
          F_00da00e0(param_1,((undefined1 *)(gen_frame + 0x7c)));
          F_00da00e0(param_1,"%i %-12s %f\n",(*(int * PTR32 *)(gen_frame + 0xd8)),(*(char * PTR32 *)(gen_frame + 0xc8)));
          piVar2 = (*(int * PTR32 *)(gen_frame + 0xd8));
          piVar12 = (*(int * PTR32 *)(gen_frame + 0xb0));
        }
        piVar2 = (int *)((int)piVar2 + 1);
        (*(int * PTR32 *)(gen_frame + 0xd8)) = piVar2;
      } while ((int)piVar2 < piVar12[1]);
    }
  }
  if ((param_5 & 4) != 0) {
    iVar3 = param_2[1];
    if ((iVar3 == 1) || ((char)param_7 == '\0')) {
      piVar2 = *(int * PTR32 *)*param_2;
      iVar13 = 0;
      if (0 < piVar2[0x13]) {
        do {
          (*(int * PTR32 *)(gen_frame + 0xd8)) = (int *)0x0;
          if (0 < iVar3) {
            do {
              iVar3 = *(int *)(*param_2 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0xd8))) * 4);
              piVar12 = (*(int * PTR32 *)(gen_frame + 0xd8));
              if (iVar13 < *(int *)(iVar3 + 0x4c)) {
                F_00daada0(((undefined1 *)(gen_frame + 0xc)),0,(*(undefined * PTR32 (*)[1])REFP(0x113cdb4)),1);
                F_00dab620(((undefined1 *)(gen_frame + 0xc)),*((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x48) + iVar13 * 4))));
                F_00da00e0(param_1,&REFG(undefined, 0x1080294));
                F_00da00e0(param_1,"****************************************\n");
                F_00da00e0(param_1,"****** Summary Frame:%i Thread:%i ******\n",iVar13,(*(int * PTR32 *)(gen_frame + 0xd8)));
                F_00da00e0(param_1,"****************************************\n");
                F_00da00e0(param_1,&REFG(undefined, 0x1080530),
                             *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar3 + 0x48) + iVar13 * 4))) + 100))));
                F_00daa540(param_1,((undefined1 *)(gen_frame + 0xc)),0,REFG(float, 0x1087f04));
                if ((param_5 & 8) != 0) {
                  F_00dadfd0(param_1,((undefined1 *)(gen_frame + 0xc)),REFG(float, 0x10920a4));
                }
                F_00daae40(((undefined1 *)(gen_frame + 0xc)));
                piVar12 = (*(int * PTR32 *)(gen_frame + 0xd8));
              }
              iVar3 = param_2[1];
              (*(int * PTR32 *)(gen_frame + 0xd8)) = (int *)((int)piVar12 + 1);
            } while ((int)piVar12 + 1 < iVar3);
          }
          piVar2 = *(int * PTR32 *)*param_2;
          iVar13 = iVar13 + 1;
        } while (iVar13 < piVar2[0x13]);
      }
    }
    else {
      piVar2 = (int *)*param_2;
      (*(int * PTR32 *)(gen_frame + 0xd4)) = (int *)0x0;
      if (0 < *(int *)(*piVar2 + 0x4c)) {
        (*(int * PTR32 *)(gen_frame + 0xb0)) = (int *)(param_5 & 8);
        do {
          F_00da00e0(param_1,&REFG(undefined, 0x1080294));
          F_00da00e0(param_1,"****************************************\n");
          F_00da00e0(param_1,"****** Summary Frame:%i ******\n",(*(int * PTR32 *)(gen_frame + 0xd4)));
          F_00da00e0(param_1,"****************************************\n");
          uVar8 = param_2[1];
          puVar5 = (undefined4 *)0x0;
          (*(undefined4 * PTR32 *)(gen_frame + 0xb4)) = (undefined4 *)0x0;
          (*(int *)(gen_frame + 0xb8)) = 0;
          (*(uint *)(gen_frame + 0xbc)) = 0x80000000;
          (*(uint *)(gen_frame + 0xc4)) = uVar8;
          if (uVar8 != 0) {
            pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
            puVar5 = *(undefined4 * PTR32 *)((int)pvVar6 + 0xc);
            uVar11 = uVar8 * 4 + 0x7f & 0xffffff80;
            if ((*(int *)((int)pvVar6 + 8) < (int)uVar11) ||
               (*(uint *)((int)pvVar6 + 0x10) < (int)puVar5 + uVar11)) {
              puVar5 = (undefined4 *)F_00d94390(pvVar6,uVar11);
            }
            else {
              *(uint *)((int)pvVar6 + 0xc) = (int)puVar5 + uVar11;
            }
          }
          iVar3 = param_2[1];
          (*(uint *)(gen_frame + 0xbc)) = uVar8 | 0x80000000;
          (*(undefined4 * PTR32 *)(gen_frame + 0xb4)) = puVar5;
          (*(undefined4 * PTR32 *)(gen_frame + 0xc0)) = puVar5;
          if ((int)(uVar8 & 0x3fffffff) < iVar3) {
            iVar13 = (uVar8 & 0x3fffffff) * 2;
            if (iVar13 <= iVar3) {
              iVar13 = iVar3;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0xb4)),iVar13,4);
          }
          piVar12 = (*(int * PTR32 *)(gen_frame + 0xd4));
          iVar13 = 0;
          (*(int *)(gen_frame + 0xb8)) = iVar3;
          if (0 < param_2[1]) {
            do {
              pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
              pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 4))))
                                         (*(int * PTR32 *)((int)pvVar6 + 0x2c),0x70)));
              if (pvVar7 == (undefined *)0x0) {
                uVar8 = 0;
              }
              else {
                uVar8 = F_00daada0(pvVar7,0,&REFG(undefined1, 0x107fc63),1);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0xb4))[iVar13] = uVar8;
              iVar3 = *(int *)(*param_2 + iVar13 * 4);
              if ((int)piVar12 < *(int *)(iVar3 + 0x4c)) {
                F_00dab620((*(undefined4 * PTR32 *)(gen_frame + 0xb4))[iVar13],
                             *((undefined4 *)GEN_TOP((*(int *)(iVar3 + 0x48) + (int)((int)(uintptr_t)piVar12) * 4))));
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < param_2[1]);
          }
          iVar3 = 1;
          (*(undefined4 *)(gen_frame + 0x90)) = 0;
          (*(uint *)(gen_frame + 0xa4)) = 0;
          (*(undefined4 *)(gen_frame + 0x98)) = 4;
          (*(undefined4 *)(gen_frame + 0x9c)) = 2;
          (*(undefined4 *)(gen_frame + 0x94)) = 0x10;
          (*(undefined1 *)(gen_frame + 0xa0)) = 0;
          (*(undefined4 *)(gen_frame + 0xa8)) = 0x5f3e;
          if (1 < (*(int *)(gen_frame + 0xb8))) {
            do {
              F_00dab030(*(*(undefined4 * PTR32 *)(gen_frame + 0xb4)),(*(undefined4 * PTR32 *)(gen_frame + 0xb4))[iVar3],iVar3,0,0.0);
              iVar3 = iVar3 + 1;
            } while (iVar3 < (*(int *)(gen_frame + 0xb8)));
          }
          F_00dab400(*(*(undefined4 * PTR32 *)(gen_frame + 0xb4)),param_3,param_4,param_1,&(*(undefined4 *)(gen_frame + 0x90)));
          if ((*(int * PTR32 *)(gen_frame + 0xb0)) != (int *)0x0) {
            F_00dadfd0(param_1,*(*(undefined4 * PTR32 *)(gen_frame + 0xb4)),REFG(float, 0x10920a4));
          }
          iVar3 = 0;
          if (0 < param_2[1]) {
            do {
              pvVar7 = (undefined *)(*(undefined4 * PTR32 *)(gen_frame + 0xb4))[iVar3];
              if (pvVar7 != (undefined *)0x0) {
                F_00daae40(pvVar7);
                pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
                ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x2c) + 8))))
                          (*(int * PTR32 *)((int)pvVar6 + 0x2c),pvVar7,0x70);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < param_2[1]);
          }
          uVar8 = (*(uint *)(gen_frame + 0xc4));
          puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0xc0));
          if ((*(undefined4 * PTR32 *)(gen_frame + 0xc0)) == (*(undefined4 * PTR32 *)(gen_frame + 0xb4))) {
            (*(int *)(gen_frame + 0xb8)) = 0;
          }
          pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          uVar8 = uVar8 * 4 + 0x7f & 0xffffff80;
          if (((*(int *)((int)pvVar6 + 8) < (int)uVar8) ||
              (uVar8 + (int)puVar5 != *(int *)((int)pvVar6 + 0xc))) ||
             (*(undefined4 * PTR32 *)((int)pvVar6 + 0x14) == puVar5)) {
            F_00d945c0(pvVar6,puVar5,uVar8);
          }
          else {
            *(undefined4 * PTR32 *)((int)pvVar6 + 0xc) = puVar5;
          }
          (*(int *)(gen_frame + 0xb8)) = 0;
          if (-1 < (int)(*(uint *)(gen_frame + 0xbc))) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)(gen_frame + 0xb4)),(*(uint *)(gen_frame + 0xbc)) * 4);
          }
          piVar2 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0xd4)) + 1);
          (*(int * PTR32 *)(gen_frame + 0xd4)) = piVar2;
        } while ((int)piVar2 < *(int *)(*(int *)*param_2 + 0x4c));
      }
    }
  }
  if (((param_5 & 0x10) != 0) &&
     (iVar3 = 0, piVar2 = param_2, 0 < *(int *)(*(int *)*param_2 + 0x4c))) {
    do {
      iVar13 = 0;
      if (0 < param_2[1]) {
        param_5 = -param_3;
        do {
          iVar10 = *(int *)(*param_2 + iVar13 * 4);
          (*(char * PTR32 *)(gen_frame + 0xc8)) = (char *)iVar10;
          if (iVar3 < *(int *)(iVar10 + 0x4c)) {
            F_00da00e0(param_1,&REFG(undefined, 0x113c50c));
            F_00da00e0(param_1,"***************************************\n");
            if (iVar13 < param_3) {
              pcVar15 = "***** Details Frame-%i Thread:%i ******\n";
              iVar10 = iVar13;
            }
            else {
              pcVar15 = "***** Details Frame-%i Spu:%i ******\n";
              iVar10 = param_5;
            }
            F_00da00e0(param_1,pcVar15,CONCAT44(iVar10,iVar3));
            F_00da00e0(param_1,"***************************************\n");
            F_00da00e0(param_1,&REFG(undefined, 0x1080530),
                         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(char * PTR32 *)(gen_frame + 0xc8)) + 0x48) + iVar3 * 4))) + 100)))
                        );
            F_00daa540(param_1,*((undefined4 *)GEN_TOP((*(int *)((int)(*(char * PTR32 *)(gen_frame + 0xc8)) + 0x48) + iVar3 * 4))),0,
                         REFG(float, 0x1087f04));
          }
          param_5 = param_5 + 1;
          iVar13 = iVar13 + 1;
        } while (iVar13 < param_2[1]);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(*(int *)*param_2 + 0x4c));
  }
  return (uint)piVar2;
}

/* ref: FUN_00daeb40 */
uint F_00daeb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaeb40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)&REFG(undefined, 0x113cddc);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  REFG(float, 0x135259c) = uVar1;
  uVar2 = *(uint *)((int)this + 0x14) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),(undefined4 *)((int)this + 0xc),iVar3,1);
  }
  *(char * PTR32 *)((int)this + 0x20) = "Physics";
  F_00dadec0(this,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00daebc0 */
uint F_00daebc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaebc0u, gen_a0, 0u, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  
  puVar2 = param_1;
  uVar1 = *param_1;
  param_1 = ((uint *)GEN_TOP(CONCAT13((char)uVar1,
                             CONCAT12((char)(uVar1 >> 8),
                                      CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))))));
  *puVar2 = (uint)param_1;
  return (uint)param_1;
}

/* ref: FUN_00daebf0 */
uint F_00daebf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaebf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1;
  uVar1 = *(uint *)param_1;
  param_1 = CONCAT13((char)uVar1,
                     CONCAT12((char)(uVar1 >> 8),
                              CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))));
  *(uint *)uVar2 = param_1;
  return uVar1;
}

/* ref: FUN_00daec30 */
uint F_00daec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d91540(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  return (uint)this;
}

/* ref: FUN_00daec80 */
uint F_00daec80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaec80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 4);
  pfVar1 = (float *)(in_ecx + 4);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*pfVar1)) && (!(fVar2 < *pfVar1) && fVar2 != *pfVar1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00daeca0 */
uint F_00daeca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaeca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_2 + 4);
  pfVar1 = (float *)(param_1 + 4);
  if ((!GEN_ISNAN(fVar2) && !GEN_ISNAN(*pfVar1)) && (!(fVar2 < *pfVar1) && fVar2 != *pfVar1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00daecd0 */
uint F_00daecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daecf0 */
uint F_00daecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaecf0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00daed10 */
uint F_00daed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaed10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daed40 */
uint F_00daed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaed40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00daed60 */
uint F_00daed60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaed60u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00daed80 */
uint F_00daed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaed80u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx != param_3;
  return param_2;
}

/* ref: FUN_00daeda0 */
uint F_00daeda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaeda0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00daedf0 */
uint F_00daedf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaedf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this,local_8);
  return (uint)this;
}

/* ref: FUN_00daee10 */
uint F_00daee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da3a20(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daee20 */
uint F_00daee20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da4190(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daee40 */
uint F_00daee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaee40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39b0(in_ecx,param_2);
  return uVar1;
}

/* ref: FUN_00daee50 */
uint F_00daee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaee50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da39f0(this,param_1);
  return uVar1;
}

/* ref: FUN_00daee60 */
uint F_00daee60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_00da3e40(in_ecx,param_2,param_3);
  return param_2;
}

/* ref: FUN_00daee80 */
uint F_00daee80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaee80u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd9c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)&gen_args[1]));
  if (uVar1 == 0) {
    *(*(undefined4 * PTR32 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
    return 0;
  }
  return 1;
}

/* ref: FUN_00daeec0 */
uint F_00daeec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaeec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00daeee0 */
uint F_00daeee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaeee0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00daef00 */
uint F_00daef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe450(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  return uVar1;
}

/* ref: FUN_00daef60 */
uint F_00daef60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaef60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daefb0 */
uint F_00daefb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaefb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daefc0 */
uint F_00daefc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaefc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf020 */
uint F_00daf020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf020u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf040 */
uint F_00daf040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf080 */
uint F_00daf080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf080u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0a0 */
uint F_00daf0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf0a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x24;
}

/* ref: FUN_00daf0d0 */
uint F_00daf0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf0d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00daf0f0 */
uint F_00daf0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf0f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00daf150 */
uint F_00daf150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf150u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf160 */
uint F_00daf160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf160u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x70 + *in_ecx;
}

/* ref: FUN_00daf1b0 */
uint F_00daf1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf1b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00daf1f0 */
uint F_00daf1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf1f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00daf200 */
byte F_00daf200(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 != -1;
}

/* ref: FUN_00daf210 */
uint F_00daf210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf240 */
uint F_00daf240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf290 */
unsigned int F_00daf290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf290u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00daf2e0 */
uint F_00daf2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00daf320 */
uint F_00daf320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf390 */
unsigned int F_00daf390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf390u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined4 *)(param_1 + iVar1 * 4) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00daf3c0 */
unsigned int F_00daf3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf3c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int local_14;
  
  do {
    local_14 = param_2;
    uVar2 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      uVar5 = (*param_4)(*(undefined4 *)(param_1 + local_14 * 4),uVar2);
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = local_14 * 4;
        local_14 = local_14 + 1;
        uVar5 = (*param_4)(*(undefined4 *)(param_1 + 4 + iVar1),uVar2);
        cVar4 = (char)uVar5;
      }
      uVar5 = (*param_4)(uVar2,*(undefined4 *)(param_1 + iVar6 * 4));
      cVar4 = (char)uVar5;
      while (cVar4 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 + -1;
        uVar5 = (*param_4)(uVar2,*(undefined4 *)(param_1 + -4 + iVar1));
        cVar4 = (char)uVar5;
      }
      if (iVar6 < local_14) break;
      if (iVar6 != local_14) {
        uVar3 = *(undefined4 *)(param_1 + iVar6 * 4);
        *(undefined4 *)(param_1 + iVar6 * 4) = *(undefined4 *)(param_1 + local_14 * 4);
        *(undefined4 *)(param_1 + local_14 * 4) = uVar3;
      }
      local_14 = local_14 + 1;
      iVar6 = iVar6 + -1;
    } while (local_14 <= iVar6);
    if (param_2 < iVar6) {
      F_00daf3c0(param_1,param_2,iVar6,param_4);
    }
    param_2 = local_14;
    if (param_3 <= local_14) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00daf4e0 */
uint F_00daf4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdaf4e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00daf500 */
uint F_00daf500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf500u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00daf540 */
unsigned int F_00daf540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined8 *)(param_1 + 0x10);
    do {
      iVar2 = iVar2 + -1;
      puVar1[-2] = *param_3;
      puVar1[-1] = *param_3;
      *puVar1 = *param_3;
      puVar1[1] = *param_3;
      puVar1 = puVar1 + 4;
    } while (iVar2 != 0);
  }
  while (iVar3 < param_2) {
    iVar3 = iVar3 + 1;
    *(undefined8 *)(param_1 + -8 + iVar3 * 8) = *param_3;
  }
  return 0;
}

/* ref: FUN_00daf5a0 */
uint F_00daf5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00d914e0(this,param_1);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00daf5c0 */
uint F_00daf5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf5c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00daf5d0 */
uint F_00daf5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf600 */
uint F_00daf600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf660 */
uint F_00daf660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00daf680 */
uint F_00daf680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00daf6a0 */
uint F_00daf6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x70);
  return uVar1;
}

/* ref: FUN_00daf6c0 */
uint F_00daf6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00daf6f0 */
uint F_00daf6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00daf730 */
uint F_00daf730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x24);
  return uVar1;
}

/* ref: FUN_00daf750 */
uint F_00daf750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d91480(this,param_1);
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00daf770 */
uint F_00daf770(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00daf790 */
unsigned int F_00daf790(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x70);
  }
  return 0;
}

/* ref: FUN_00daf7c0 */
uint F_00daf7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x30),param_1);
  return uVar2;
}

/* ref: FUN_00daf7e0 */
unsigned int F_00daf7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdaf7e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x30),param_1,0x88);
  }
  return 0;
}

/* ref: FUN_00daf820 */
uint F_00daf820(unsigned int gen_a0, double gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf820u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), gen_a2);
  int param_1 = (int)gen_a0;
  double param_2 = (double)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint * puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x4c);
  iVar7 = 0;
  if (2 < iVar6) {
    iVar4 = 0;
    do {
      iVar3 = iVar6 + iVar4 >> 1;
      iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar3 * 4)));
      iVar7 = iVar4;
      if (*(int *)(iVar1 + 0x6c) == 2) break;
      iVar7 = iVar3;
      if (param_2 < *(double *)(iVar1 + 0x58)) {
        iVar7 = iVar4;
        iVar6 = iVar3;
      }
      iVar4 = iVar7;
    } while (2 < iVar6 - iVar7);
  }
  if (iVar7 < iVar6) {
    puVar5 = ((uint *)GEN_TOP((*(int *)(param_1 + 0x48) + iVar7 * 4)));
    while ((uVar2 = *puVar5, *(int *)(uVar2 + 0x6c) == 2 ||
           (!(param_2 <= (double)*(float *)(uVar2 + param_3 * 4) + *(double *)(uVar2 + 0x58))))) {
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 1;
      if (iVar6 <= iVar7) {
        return 0;
      }
    }
    if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*(double *)(uVar2 + 0x58))) && !(param_2 < *(double *)(uVar2 + 0x58))
       ) {
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00daf960 */
uint F_00daf960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaf960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daf9a0 */
uint F_00daf9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaf9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa10 */
uint F_00dafa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dafa30 */
uint F_00dafa30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafa30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00dafa50 */
uint F_00dafa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafa50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  if (param_1 != 0) {
    F_00dbe450(this,&REFG(undefined * PTR32, 0x13516ac),param_1);
  }
  return (uint)this;
}

/* ref: FUN_00dafaa0 */
uint F_00dafaa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafaa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafae0 */
uint F_00dafae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dafb10 */
uint F_00dafb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dafb50 */
uint F_00dafb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00dafb60 */
uint F_00dafb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafba0 */
uint F_00dafba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = param_1 + iVar1;
  return *(int *)this + iVar1;
}

/* ref: FUN_00dafbe0 */
unsigned int F_00dafbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafbe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dafc10 */
uint F_00dafc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafc10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00dafc20 */
uint F_00dafc20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafc20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00dafc60 */
uint F_00dafc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00dafc80 */
uint F_00dafc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafc80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00dafcc0 */
unsigned int F_00dafcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (1 < param_2) {
    F_00daf3c0(param_1,0,param_2 + -1,param_3);
  }
  return 0;
}

/* ref: FUN_00dafcf0 */
uint F_00dafcf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafcf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(param_1 * 8);
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar3 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 7U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 3;
    if (iVar3 != 0) goto LAB_00dafd4d;
  }
  iVar3 = ((int)0x80000000);
LAB_00dafd4d: ;
  iVar4 = 0;
  *(int *)((int)this + 8) = iVar3;
  *(uint *)this = param_1;
  *(int *)((int)this + 4) = iVar1;
  if (3 < iVar1) {
    iVar3 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar2 = (undefined8 *)(param_1 + 0x10);
    do {
      iVar3 = iVar3 + -1;
      puVar2[-2] = *param_2;
      puVar2[-1] = *param_2;
      *puVar2 = *param_2;
      puVar2[1] = *param_2;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *((undefined8 *)GEN_TOP(((param_1 - 8) + iVar4 * 8))) = *param_2;
  }
  return (uint)this;
}

/* ref: FUN_00dafdb0 */
uint F_00dafdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xdafdb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d92460(*(undefined4 *)((int)pvVar1 + 0x2c),param_1 * 4);
  return uVar2;
}

/* ref: FUN_00dafde0 */
uint F_00dafde0(unsigned int gen_a0)
{
  GEN_ENTER(0xdafde0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00d924b0(*(undefined4 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00dafe10 */
uint F_00dafe10(unsigned int gen_a0)
{
  GEN_ENTER(0xdafe10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00dafe50 */
uint F_00dafe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdafe50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00dafea0 */
uint F_00dafea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdafea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafec0 */
uint F_00dafec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdafec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dafee0 */
unsigned int F_00dafee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdafee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00d914e0(this,param_3);
        *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_3 + 4);
      }
      this = (undefined *)((int)this + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00daff10 */
uint F_00daff10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaff10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00daff50 */
uint F_00daff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdaff50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0xc);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00daff90 */
unsigned int F_00daff90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  this = param_1;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      if (this != (undefined *)0x0) {
        F_00da9f50(this);
      }
      this = (undefined *)((int)this + 0x24);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00daffc0 */
uint F_00daffc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdaffc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0000 */
unsigned int F_00db0000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_3 + 1);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db0030 */
uint F_00db0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x70);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0090 */
unsigned int F_00db0090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00db00f0 */
uint F_00db00f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb00f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db0130 */
uint F_00db0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db0160 */
uint F_00db0160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db01a0 */
uint F_00db01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb01a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db01e0 */
uint F_00db01e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb01e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db0220 */
uint F_00db0220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db0260 */
uint F_00db0260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db02e0 */
unsigned int F_00db02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb02e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00db0310 */
uint F_00db0310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  uVar1 = *(uint *)this;
  this_00 = ((undefined *)GEN_TOP((uVar1 + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00d914e0(this_00,param_2);
    *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00db0360 */
uint F_00db0360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x24);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x24)));
  if (this_00 != (undefined *)0x0) {
    F_00da9f50(this_00);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x24;
}

/* ref: FUN_00db03b0 */
uint F_00db03b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb03b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db0400 */
uint F_00db0400(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0440 */
uint F_00db0440(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0480 */
uint F_00db0480(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db04c0 */
unsigned int F_00db04c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb04c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0x80000000;
      }
      puVar1 = puVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db04f0 */
uint F_00db04f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb04f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0530 */
uint F_00db0530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0570 */
uint F_00db0570(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  *((undefined1 *)GEN_TOP((*(int *)this + -1 + *(int *)((int)this + 4)))) = 0x20;
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4)))) = 0x20;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db05e0 */
uint F_00db05e0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb05e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  
  if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *(undefined4 *)((int)this + 4) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00db0620 */
uint F_00db0620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar1) {
    uVar1 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (this_00 != (undefined *)0x0) {
    F_00d914e0(this_00,param_1);
    uVar1 = *(uint *)(param_1 + 4);
    *(uint *)((int)this_00 + 4) = uVar1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00db0670 */
uint F_00db0670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db06c0 */
uint F_00db06c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb06c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0700 */
uint F_00db0700(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0740 */
uint F_00db0740(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0780 */
uint F_00db0780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000010;
  return (uint)this;
}

/* ref: FUN_00db07a0 */
uint F_00db07a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000006;
  return (uint)this;
}

/* ref: FUN_00db07c0 */
uint F_00db07c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb07c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0800 */
uint F_00db0800(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0800u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0840 */
unsigned int F_00db0840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0840u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 0x24);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -0x24);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db0890 */
uint F_00db0890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00daae40(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x70);
  }
  return (uint)this;
}

/* ref: FUN_00db08d0 */
uint F_00db08d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb08d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,0x40,1);
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a8),this,1);
  }
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + *(int *)this))) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)this;
}

/* ref: FUN_00db0930 */
uint F_00db0930(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0970 */
uint F_00db0970(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db09b0 */
uint F_00db09b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb09b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID this_00;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(uint *)((int)this + 0x10) = param_1;
  if (param_1 != 0) {
    this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar1 = *(uint *)((int)this_00 + 0xc);
    uVar2 = param_1 * 4 + 0x7f & 0xffffff80;
    if ((*(int *)((int)this_00 + 8) < (int)uVar2) ||
       (*(uint *)((int)this_00 + 0x10) < uVar1 + uVar2)) {
      uVar1 = F_00d94390(this_00,uVar2);
    }
    else {
      *(uint *)((int)this_00 + 0xc) = uVar1 + uVar2;
    }
  }
  *(uint *)((int)this + 8) = param_1 | 0x80000000;
  *(uint *)this = uVar1;
  *(uint *)((int)this + 0xc) = uVar1;
  return (uint)this;
}

/* ref: FUN_00db0a20 */
uint F_00db0a20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  LPVOID this_00;
  uint uVar3;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (iVar1 == *(int *)this) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  iVar2 = *(int *)((int)this + 0x10);
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = iVar2 * 4 + 0x7fU & 0xffffff80;
  if (((*(int *)((int)this_00 + 8) < (int)uVar3) || (uVar3 + iVar1 != *(int *)((int)this_00 + 0xc)))
     || (*(int *)((int)this_00 + 0x14) == iVar1)) {
    F_00d945c0(this_00,iVar1,uVar3);
  }
  else {
    *(int *)((int)this_00 + 0xc) = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar3 & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_00db0ab0 */
uint F_00db0ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0ab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0af0 */
uint F_00db0af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 0x24);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00db0b20 */
uint F_00db0b20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0b60 */
uint F_00db0b60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0ba0 */
unsigned int F_00db0ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0ba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    iVar2 = param_2;
    do {
      if (puVar1 != (undefined4 *)0x50) {
        puVar1[-2] = 0;
        puVar1[-1] = 0;
        *puVar1 = 0x80000000;
      }
      puVar1 = puVar1 + 0x1c;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db0bd0 */
uint F_00db0bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0c30 */
unsigned int F_00db0c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0c30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(iVar1 * 0x70 + param_1);
    do {
      F_00daae40(this);
      this = (undefined *)((int)this + -0x70);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db0c60 */
uint F_00db0c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb0c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  iVar5 = iVar1 + param_2;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x70);
  }
  if (0 < param_2) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_2;
    do {
      if (puVar4 != (undefined4 *)0x50) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0d10 */
uint F_00db0d10(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0d70 */
uint F_00db0d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 4);
  iVar5 = iVar1 + param_1;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),this,iVar3,0x70);
  }
  if (0 < param_1) {
    puVar4 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x70 + *(int *)this + 0x50)));
    iVar5 = param_1;
    do {
      if (puVar4 != (undefined4 *)0x50) {
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
      }
      puVar4 = puVar4 + 0x1c;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return iVar1 * 0x70 + *(int *)this;
}

/* ref: FUN_00db0df0 */
uint F_00db0df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x70 + *(int *)this);
    do {
      F_00daae40(this_00);
      this_00 = (undefined *)((int)this_00 + -0x70);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0e50 */
uint F_00db0e50(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       ((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db0f10 */
uint F_00db0f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb0f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  undefined * this_00;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    this_00 = (undefined *)(*(int *)this + iVar3 * 0x24);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x24);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00db0fa0 */
uint F_00db0fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb0fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(iVar2 * 0x70 + *(int *)this);
    do {
      F_00daae40(this_00);
      this_00 = (undefined *)((int)this_00 + -0x70);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1000 */
unsigned int F_00db1000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  int * piVar4;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(param_1 + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this);
          this = (undefined *)((int)this + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00db1090 */
unsigned int F_00db1090(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (iVar2 < 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
  do {
    iVar3 = piVar4[1] + -1;
    if (-1 < iVar3) {
      this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
      do {
        F_00d91510(this_00);
        this_00 = (undefined *)((int)this_00 + -0x24);
        iVar3 = iVar3 + -1;
      } while (-1 < iVar3);
    }
    uVar1 = piVar4[2];
    piVar4[1] = 0;
    if (-1 < (int)uVar1) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
    }
    iVar2 = iVar2 + -1;
    *piVar4 = 0;
    piVar4[2] = ((int)0x80000000);
    piVar4 = piVar4 + -3;
  } while (-1 < iVar2);
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00db1170 */
uint F_00db1170(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1170u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * pvVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 0x80) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *(int *)((int)this + 0x7c))));
    do {
      F_00daae40(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -0x70);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x84);
  *(undefined4 *)((int)this + 0x80) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)((int)this + 0x7c),(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x84) = 0x80000000;
  iVar3 = *(int *)((int)this + 0x74) + -1;
  if (-1 < iVar3) {
    pvVar2 = ((undefined *)GEN_TOP((iVar3 * 0x70 + *(int *)((int)this + 0x70))));
    do {
      F_00daae40(pvVar2);
      pvVar2 = (undefined *)((int)pvVar2 + -0x70);
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 0x78);
  *(undefined4 *)((int)this + 0x74) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),*(undefined4 *)((int)this + 0x70),(uVar1 & 0x3fffffff) * 0x70);
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x78) = 0x80000000;
  uVar1 = F_00daae40(this);
  return uVar1;
}

/* ref: FUN_00db1230 */
unsigned int F_00db1230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  int iVar4;
  int * piVar5;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar3 = uVar1 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  iVar3 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar3) {
    piVar5 = (int *)(*(int *)this + param_2 * 0xc + iVar3 * 0xc);
    do {
      iVar4 = piVar5[1] + -1;
      if (-1 < iVar4) {
        this_00 = (undefined *)(*piVar5 + iVar4 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      uVar1 = piVar5[2];
      piVar5[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar5,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar3 = iVar3 + -1;
      *piVar5 = 0;
      piVar5[2] = ((int)0x80000000);
      piVar5 = piVar5 + -3;
    } while (-1 < iVar3);
  }
  iVar3 = param_2 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar3) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00db1330 */
uint F_00db1330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1400 */
uint F_00db1400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db1170(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x30) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x30),this,0x88);
  }
  return (uint)this;
}

/* ref: FUN_00db1440 */
uint F_00db1440(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db1510 */
uint F_00db1510(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  int iVar3;
  int * piVar4;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    piVar4 = (int *)(*(int *)this + iVar2 * 0xc);
    do {
      iVar3 = piVar4[1] + -1;
      if (-1 < iVar3) {
        this_00 = (undefined *)(*piVar4 + iVar3 * 0x24);
        do {
          F_00d91510(this_00);
          this_00 = (undefined *)((int)this_00 + -0x24);
          iVar3 = iVar3 + -1;
        } while (-1 < iVar3);
      }
      uVar1 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),*piVar4,((uVar1 & 0x3fffffff) + uVar1 * 8) * 4);
      }
      iVar2 = iVar2 + -1;
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      piVar4 = piVar4 + -3;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db15f0 */
ushort F_00db15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00db1640 */
uint F_00db1640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1640u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1650 */
uint F_00db1650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1650u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00db1680 */
unsigned int F_00db1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 2;
  puVar1 = param_1;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_00db16a0 */
uint F_00db16a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb16a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00db16c0 */
uint F_00db16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db16e0 */
unsigned int F_00db16e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined * PTR32 *)this = param_1;
  return 0;
}

/* ref: FUN_00db1740 */
uint F_00db1740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  undefined4 * puVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  char * pcVar5;
  
  iVar2 = *(int *)((int)this + 0xc);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
    if (*((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar2 * 8))) == (short)param_1) {
      if (param_2 != (undefined *)0x0) {
        F_00d919e0(param_2);
      }
      pvVar3 = (undefined *)*puVar1;
      if (pvVar3 != (undefined *)0x0) {
        F_00d91a80(pvVar3);
      }
      *puVar1 = param_2;
    }
  }
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar5 = " among the existing properties!";
  pvVar3 = (undefined *)F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"Failed to locate key ");
  pvVar3 = (undefined *)F_00d9fef0(pvVar3,param_1);
  F_00d9fe80(pvVar3,pcVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78),1,0x1d11daed,((undefined1 *)(gen_frame + 0x0)),"Types\\Properties\\hkRefCountedProperties.cpp",
             0x54);
  uVar4 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar4;
}

/* ref: FUN_00db17f0 */
uint F_00db17f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb17f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  short * psVar2;
  
  iVar1 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar1) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar1 * 8)));
    do {
      if (*psVar2 == (short)param_1) {
        return *((uint *)GEN_TOP((*(int *)((int)this + 8) + iVar1 * 8)));
      }
      psVar2 = psVar2 + -4;
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00db1820 */
uint F_00db1820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined * this_00;
  uint uVar4;
  short * psVar5;
  int iVar6;
  
  iVar6 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar6) {
    iVar3 = *(int *)((int)this + 8);
    psVar5 = (short *)(iVar3 + 4 + iVar6 * 8);
    do {
      if (*psVar5 == (short)param_1) {
        if (param_2 != (undefined *)0x0) {
          psVar5 = (short *)F_00d919e0(param_2);
        }
        this_00 = *(undefined * PTR32 *)(iVar3 + iVar6 * 8);
        if (this_00 != (undefined *)0x0) {
          psVar5 = (short *)F_00d91a80(this_00);
        }
        *(undefined * PTR32 *)(iVar3 + iVar6 * 8) = param_2;
        return (uint)psVar5;
      }
      psVar5 = psVar5 + -4;
      iVar6 = iVar6 + -1;
    } while (-1 < iVar6);
  }
  piVar1 = (int *)((int)this + 8);
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,8);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc) * 8)));
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0xffff;
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)((int)this + 0xc) * 8)));
  uVar4 = *(int *)((int)this + 0xc) + 1;
  *(uint *)((int)this + 0xc) = uVar4;
  *(short *)(puVar2 + 1) = (short)param_1;
  if (param_2 != (undefined *)0x0) {
    uVar4 = F_00d919e0(param_2);
  }
  if ((undefined *)*puVar2 != (undefined *)0x0) {
    uVar4 = F_00d91a80((undefined *)*puVar2);
  }
  *puVar2 = param_2;
  return uVar4;
}

/* ref: FUN_00db18e0 */
unsigned int F_00db18e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb18e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  short * psVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar5) {
    psVar1 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 4 + iVar5 * 8)));
    while (*psVar1 != (short)param_1) {
      psVar1 = psVar1 + -4;
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        return 0;
      }
    }
    iVar2 = *(int *)((int)this + 8);
    iVar4 = iVar5 * 8;
    this_00 = *(undefined * PTR32 *)(iVar2 + iVar4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    *(undefined4 *)(iVar2 + iVar4) = 0;
    iVar2 = *(int *)((int)this + 0xc) + -1;
    *(int *)((int)this + 0xc) = iVar2;
    if (iVar2 != iVar5) {
      puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + iVar4)));
      iVar5 = (*(int *)((int)this + 8) + iVar2 * 8) - (int)puVar3;
      iVar4 = 2;
      do {
        *puVar3 = *(undefined4 *)(iVar5 + (int)puVar3);
        puVar3 = puVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00db19a0 */
uint F_00db19a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb19a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  return (uint)in_ecx;
}

/* ref: FUN_00db19b0 */
uint F_00db19b0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb19b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113ce48));
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00db1a60 */
unsigned int F_00db1a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *(undefined2 *)(puVar1 + 1) = 0xffff;
        *puVar1 = 0;
        *(undefined2 *)((int)puVar1 + 6) = 0;
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1aa0 */
uint F_00db1aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1af0 */
uint F_00db1af0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffff;
  }
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar2 + 1;
  return *(int *)this + iVar2 * 8;
}

/* ref: FUN_00db1b40 */
unsigned int F_00db1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1b40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * this;
  int iVar1;
  
  iVar1 = param_2 + -1;
  while (-1 < iVar1) {
    this = *(undefined * PTR32 *)(param_1 + iVar1 * 8);
    if (this != (undefined *)0x0) {
      F_00d91a80(this);
    }
    iVar1 = iVar1 + -1;
    *(undefined4 *)(param_1 + 8 + iVar1 * 8) = 0;
  }
  return 0;
}

/* ref: FUN_00db1bb0 */
unsigned int F_00db1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)this;
  iVar3 = param_1 * 8;
  this_00 = *(undefined * PTR32 *)(iVar2 + iVar3);
  if (this_00 != (undefined *)0x0) {
    F_00d91a80(this_00);
  }
  *(undefined4 *)(iVar2 + iVar3) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  if (*(int *)((int)this + 4) != param_1) {
    puVar1 = (undefined4 *)(*(int *)this + iVar3);
    iVar2 = (*(int *)this + *(int *)((int)this + 4) * 8) - (int)puVar1;
    iVar3 = 2;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00db1c10 */
uint F_00db1c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1c80 */
uint F_00db1c80(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1c80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1cf0 */
uint F_00db1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  iVar1 = *(int *)this;
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 8);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 8 + iVar3 * 8) = 0;
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00db1d60 */
uint F_00db1d60(unsigned int gen_a0)
{
  GEN_ENTER(0xdb1d60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkRefCountedProperties::vf0 */
uint F_00db1d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db19b0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db1e00 */
uint F_00db1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e10 */
uint F_00db1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1e10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00db1e50 */
uint F_00db1e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x10);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db1e90 */
unsigned int F_00db1e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_2 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1ed0 */
unsigned int F_00db1ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb1ed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1[1] = *((undefined8 *)GEN_TOP(((param_3 - (int)param_1) + 8 + (int)puVar1)));
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00db1f10 */
uint F_00db1f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00db1f50 */
uint F_00db1f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint * puVar4;
  uint in_EDX = 0;
  int iVar5;
  float * pfVar6;
  
  uVar1 = *(uint *)((int)this + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    pfVar6 = *(float * PTR32 *)this;
    do {
      (*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)GEN_ISNAN(pfVar6[1]);
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)GEN_ISNAN(*pfVar6);
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)GEN_ISNAN(pfVar6[2]);
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)GEN_ISNAN(pfVar6[3]);
      in_EDX = gen_movmskps(&(auVar2));
      if ((in_EDX & 7) != 0) goto LAB_00db1fa8;
      uVar3 = uVar3 + 1;
      pfVar6 = pfVar6 + 4;
    } while (uVar3 < uVar1);
  }
  iVar5 = 0;
  if (0 < *(int *)((int)this + 0x10)) {
    puVar4 = *(uint * PTR32 *)((int)this + 0xc);
    do {
      if (((uVar1 <= *puVar4) || (uVar1 <= puVar4[1])) || (uVar1 <= puVar4[2])) {
LAB_00db1fa8: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      iVar5 = iVar5 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar5 < *(int *)((int)this + 0x10));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00db1fd0 */
uint F_00db1fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb1fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined8 * puVar8;
  int iVar9;
  int iVar10;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0x80000000;
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if ((uVar6 & 0x80000000) == 0) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar10 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar10 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  if ((int)(uVar6 & 0x3fffffff) < piVar5[4]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[4] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[4];
  puVar8 = *((undefined8 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = iVar9;
  if (0 < iVar9) {
    iVar10 = piVar5[3] - (int)puVar8;
    do {
      *puVar8 = *(undefined8 *)(iVar10 + (int)puVar8);
      puVar8[1] = *(undefined8 *)(iVar10 + 8 + (int)puVar8);
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2110 */
uint F_00db2110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2110u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx;
}

/* ref: FUN_00db2120 */
unsigned int F_00db2120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  int * piVar2;
  int iVar3;
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
  int iVar19;
  int iVar20;
  
  iVar3 = *(int *)((int)this + 4);
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  iVar20 = *(int *)((int)this + 0x10);
  F_00db2220((undefined *)((int)this + 0xc),&REFG(undefined * PTR32, 0x13516ac),param_1[3],param_1[4]);
  if (iVar3 < *(int *)((int)this + 4)) {
    iVar19 = iVar3 << 4;
    param_1 = (undefined4 *)iVar3;
    do {
      pfVar1 = (float *)(*(int *)this + iVar19);
      fVar4 = *pfVar1;
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = param_2[1];
      fVar8 = param_2[2];
      fVar9 = param_2[3];
      fVar10 = param_2[5];
      fVar11 = param_2[6];
      fVar12 = param_2[7];
      fVar13 = param_2[9];
      fVar14 = param_2[10];
      fVar15 = param_2[0xb];
      fVar16 = param_2[0xd];
      fVar17 = param_2[0xe];
      fVar18 = param_2[0xf];
      pfVar1 = (float *)(*(int *)this + iVar19);
      *pfVar1 = ((fVar4 * *param_2 + fVar5 * param_2[4]) + fVar6 * param_2[8]) + param_2[0xc];
      pfVar1[1] = ((fVar4 * fVar7 + fVar5 * fVar10) + fVar6 * fVar13) + fVar16;
      pfVar1[2] = ((fVar4 * fVar8 + fVar5 * fVar11) + fVar6 * fVar14) + fVar17;
      pfVar1[3] = ((fVar4 * fVar9 + fVar5 * fVar12) + fVar6 * fVar15) + fVar18;
      param_1 = (undefined4 *)((int)param_1 + 1);
      iVar19 = iVar19 + 0x10;
    } while ((int)param_1 < *(int *)((int)this + 4));
  }
  if (iVar20 < *(int *)((int)this + 0x10)) {
    iVar19 = iVar20 << 4;
    do {
      piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar19)));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 4 + *(int *)((int)this + 0xc))));
      *piVar2 = *piVar2 + iVar3;
      piVar2 = ((int *)GEN_TOP((iVar19 + 8 + *(int *)((int)this + 0xc))));
      *piVar2 = *piVar2 + iVar3;
      iVar20 = iVar20 + 1;
      iVar19 = iVar19 + 0x10;
    } while (iVar20 < *(int *)((int)this + 0x10));
  }
  return 0;
}

/* ref: FUN_00db2220 */
unsigned int F_00db2220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb2220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined8 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((int)this + 4) + param_3;
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < iVar5) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= iVar5) {
      iVar4 = iVar5;
    }
    F_00d95690(param_1,this,iVar4,0x10);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined8 *)(iVar3 + (int)puVar2);
      puVar2[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar2);
      puVar2 = puVar2 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00db22a0 */
uint F_00db22a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb22a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 << 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar1[1] << 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(iVar4 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(iVar4 + 8 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2340 */
unsigned int F_00db2340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_3) {
    puVar5 = param_1;
    iVar6 = param_3;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00db2370 */
unsigned int F_00db2370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 * puVar5;
  int iVar6;
  
  if (0 < param_2) {
    puVar5 = param_1;
    iVar6 = param_2;
    do {
      puVar1 = ((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar5)));
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return 0;
}

/* ref: FUN_00db23a0 */
uint F_00db23a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb23a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined8 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] << 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined8 *)(iVar4 + (int)puVar3);
      puVar3[1] = *(undefined8 *)(iVar4 + 8 + (int)puVar3);
      puVar3 = puVar3 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2440 */
unsigned int F_00db2440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db2220(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00db2460 */
unsigned int F_00db2460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb2460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)((int)this + 4) + param_3;
  uVar5 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar5 < iVar9) {
    iVar8 = uVar5 * 2;
    if (iVar8 <= iVar9) {
      iVar8 = iVar9;
    }
    F_00d95690(param_1,this,iVar8,0x10);
  }
  puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) * 0x10 + *(int *)this)));
  if (0 < param_3) {
    iVar7 = param_2 - (int)puVar6;
    iVar8 = param_3;
    do {
      puVar1 = (undefined4 *)(iVar7 + (int)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar6 = *puVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      puVar6 = puVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  *(int *)((int)this + 4) = iVar9;
  return 0;
}

/* ref: FUN_00db24d0 */
uint F_00db24d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb24d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  piVar5 = (*(int * PTR32 *)&gen_args[2]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar8 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar8 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db2550 */
uint F_00db2550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2550u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int * piVar5;
  uint uVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  uVar6 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar6 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar6) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar6 << 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar5[1] << 4);
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar6;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  }
  iVar9 = piVar5[1];
  puVar7 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar9;
  if (0 < iVar9) {
    iVar8 = *piVar5 - (int)puVar7;
    do {
      puVar1 = (undefined4 *)(iVar8 + (int)puVar7);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *puVar7 = *puVar1;
      puVar7[1] = uVar2;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7 = puVar7 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00db25e0 */
unsigned int F_00db25e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb25e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00db2220(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00db2600 */
unsigned int F_00db2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00db2620 */
unsigned int F_00db2620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  F_00db2460(this,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00db2640 */
uint F_00db2640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb2640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)REFG(gen_code32, 0x135271c))(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00db2660 */
uint F_00db2660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  F_00da46f0(param_2,param_1);
  F_00da45a0(param_2,0x2f,0x5c,1);
  return *param_2;
}

/* ref: FUN_00db2690 */
uint F_00db2690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2690u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00da46f0(param_2,param_1);
  F_00da45a0(param_2,0x5c,0x2f,1);
  F_00da51f0(param_2,&REFG(undefined, 0x113ce68),&REFG(undefined, 0x1080808),1);
  uVar1 = F_00da4430(param_2,&REFG(undefined, 0x113ce64));
  if (uVar1 != 0) {
    F_00da4670(param_2,2);
  }
  return *param_2;
}

/* ref: hkNativeFileSystem::vf4 */
uint F_00db26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined * this_00;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x10)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x10;
  uVar3 = F_00db2660(param_1,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  pvVar2 = (undefined *)F_00dbee30(pvVar2,uVar3);
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x1c)));
  *(undefined2 *)((int)this_00 + 4) = 0x1c;
  uVar3 = F_00dba5e0(this_00,pvVar2,0x1000);
  F_00d91a80(pvVar2);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return uVar3;
}

/* ref: hkNativeFileSystem::vf3 */
uint F_00db27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb27c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  LPVOID pvVar1;
  undefined * pvVar2;
  uint uVar3;
  int * this_00;
  char * pcVar4;
  int * piVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(undefined4 *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                             (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x14)));
  *(undefined2 *)((int)pvVar2 + 4) = 0x14;
  uVar3 = F_00db2660((*(undefined4 *)&gen_args[1]),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)));
  this_00 = (int *)F_00dbf3c0(pvVar2,uVar3);
  pcVar4 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*this_00 + 0x18))(this_00,(int)&(*(undefined4 *)&gen_args[1]) + 3)));
  piVar5 = this_00;
  if (*pcVar4 == '\0') {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar2 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x24)));
    *(undefined2 *)((int)pvVar2 + 4) = 0x24;
    piVar5 = (int *)F_00dbf270(pvVar2,this_00,0x1000);
    F_00d91a80(this_00);
  }
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return (uint)piVar5;
}

/* ref: FUN_00db28c0 */
byte F_00db28c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb28c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + *in_ecx);
}

/* ref: FUN_00db28d0 */
uint F_00db28d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb28d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2900 */
uint F_00db2900(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2900u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2930 */
uint F_00db2930(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00db2970 */
uint F_00db2970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2980 */
uint F_00db2980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00dbe420(this,param_1);
  return uVar1;
}

/* ref: FUN_00db29d0 */
unsigned int F_00db29d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb29d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00db29e0 */
unsigned int F_00db29e0(void)
{
  GEN_ENTER(0xdb29e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDefaultError::vf5 */
uint F_00db2a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2a00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd970(this + 8,param_2,0);
  *(bool *)param_1 = uVar1 == 0;
  return param_1;
}

/* ref: hkDefaultError::vf6 */
uint F_00db2a20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2a20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00dbdaf0(this + 8);
  return uVar1;
}

/* ref: hkDefaultError::vf9 */
uint F_00db2a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xdb2a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xa10];
  uint uVar1;
  undefined * pvVar2;
  
  if (param_2 == 0) {
    if (param_4 == 0) {
      F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,&REFG(undefined, 0x113bdcc),param_3);
      goto LAB_00db2ac0;
    }
  }
  else if (param_2 == -1) {
    F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,"%s(%d): %s: %s",param_4,param_5,param_1,param_3);
    goto LAB_00db2ac0;
  }
  F_00da0ce0(((undefined1 *)(gen_frame + 0xc)),0x800,"%s(%d): [0x%08X] %s: %s",param_4,param_5,param_2,param_1,param_3);
LAB_00db2ac0: ;
  (*(undefined1 *)(gen_frame + 0x80b)) = 0;
  uVar1 = ((code *)*(gen_code32 *)(this + 0x20))(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)(this + 0x24));
  if ((char)param_6 != '\0') {
    pvVar2 = REFG(void * PTR32, 0x15dffb0);
    if ((REFG(void * PTR32, 0x15dffb0) == (undefined *)0x0) &&
       (pvVar2 = (undefined *)F_00db36d0(), REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0)) {
      F_00d91840(REFG(void * PTR32, 0x15dffb0));
    }
    REFG(void * PTR32, 0x15dffb0) = pvVar2;
    uVar1 = F_00db3490(REFG(void * PTR32, 0x15dffb0),((undefined1 *)(gen_frame + 0x80c)),0x80);
    if (2 < (int)uVar1) {
      ((code *)*(gen_code32 *)(this + 0x20))("Stack trace is:\n",*(undefined4 *)(this + 0x24));
      uVar1 = F_00db3330(REFG(void * PTR32, 0x15dffb0),((undefined1 *)(gen_frame + 0x814)),uVar1 - 2,*(undefined4 *)(this + 0x20),
                           *(undefined4 *)(this + 0x24));
    }
  }
  return uVar1;
}

/* ref: hkDefaultError::vf3 */
uint F_00db2b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb2b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  uint uVar1;
  char * pcVar2;
  uint uVar3;
  
  uVar3 = (*(uint *)&gen_args[2]);
  if (((*(uint *)&gen_args[2]) == 0xffffffff) && (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0)) {
    uVar3 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + -4 + *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) * 4)));
  }
  pcVar2 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))))((*(undefined * PTR32 *)&gen_args[0]),(int)&(*(uint *)&gen_args[2]) + 3,uVar3)));
  if (*pcVar2 == '\0') {
    return 0;
  }
  pcVar2 = "";
  uVar1 = (*(uint *)&gen_args[2]) >> 8;
  (*(uint *)&gen_args[2]) = (*(uint *)&gen_args[2]) & 0xffffff00;
  switch((unsigned int)(uintptr_t)((*(int *)&gen_args[1]))) {
  case 0: ;
    pcVar2 = "Report";
    break;
  case 1: ;
    pcVar2 = "Warning";
    break;
  case 2: ;
    pcVar2 = "Assert";
    goto LAB_00db2bcd;
  case 3: ;
    pcVar2 = "Error";
LAB_00db2bcd: ;
    (*(uint *)&gen_args[2]) = CONCAT31((int3)uVar1,1);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))((*(undefined * PTR32 *)&gen_args[0]),pcVar2,uVar3,(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(uint *)&gen_args[2]));
  if (((*(int *)&gen_args[1]) != 2) && ((*(int *)&gen_args[1]) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: hkDefaultError::vf8 */
unsigned int F_00db2c20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 0x18) = *(int *)(in_ecx + 0x18) + -1;
  return 0;
}

/* ref: hkDefaultError::vf4 */
uint F_00db2c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = F_00dbe420(this + 8,param_1);
    return uVar1;
  }
  uVar1 = F_00dbd8b0(this + 8,&REFG(undefined * PTR32, 0x13516ac),param_1,1);
  return uVar1;
}

/* ref: hkDefaultError::vf7 */
uint F_00db2c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)(this + 0x18) == (*(uint *)(this + 0x1c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this + 0x14,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x14) + *(int *)(this + 0x18) * 4)));
  *puVar1 = param_1;
  *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00db2ca0 */
uint F_00db2ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113ceec));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  return (uint)this;
}

/* ref: FUN_00db2ce0 */
uint F_00db2ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00db2cf0 */
uint F_00db2cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2cf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db2d40 */
uint F_00db2d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db2d80 */
uint F_00db2d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2d80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbd8b0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db2dc0 */
uint F_00db2dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db2df0 */
uint F_00db2df0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar2 = F_00dbdb20((undefined *)((int)this + 8),&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: hkDefaultError::vf0 */
uint F_00db2e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)(this + 0x1c);
  *(undefined4 *)(this + 0x18) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(this + 0x14),iVar1 * 4);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x1c) = 0x80000000;
  F_00dbdb20(this + 8,&REFG(undefined * PTR32, 0x13516ac));
  F_00dbd5e0();
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar2 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkSocket::ReaderAdapter::vf4 */
uint F_00db2ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x14))))
                        (*(int * PTR32 *)(this + 8),param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::ReaderAdapter::vf3 */
uint F_00db2f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: hkSocket::WriterAdapter::vf4 */
uint F_00db2f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb2f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < (int)param_2) {
    do {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x18))))
                        (*(int * PTR32 *)(this + 8),param_1 + uVar2,param_2 - uVar2);
      uVar2 = uVar2 + uVar1;
      if (uVar1 == 0) {
        return uVar2;
      }
    } while ((int)uVar2 < (int)param_2);
  }
  return param_2;
}

/* ref: hkSocket::WriterAdapter::vf3 */
uint F_00db2fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb2fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0xc))))(*(int * PTR32 *)(this + 8),param_1);
  return param_1;
}

/* ref: FUN_00db2fd0 */
uint F_00db2fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb2fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113cf74));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[12])REFP(0x113cf18));
  *(undefined2 *)((int)this + 0xe) = 1;
  *(undefined2 *)((int)this + 0x1a) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[9])REFP(0x113cf4c));
  *(undefined * PTR32 *)((int)this + 0x10) = this;
  *(undefined * PTR32 *)((int)this + 0x1c) = this;
  if ((REFG(char, 0x15dffac) == '\0') && (REFG(undefined * PTR32, 0x1352788) != (undefined *)0x0)) {
    (*(code *)REFG(undefined * PTR32, 0x1352788))(0);
    REFG(char, 0x15dffac) = '\x01';
  }
  return (uint)this;
}

/* ref: FUN_00db3030 */
uint F_00db3030(void)
{
  GEN_ENTER(0xdb3030u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                           (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x24)));
  *(undefined2 *)((int)this + 4) = 0x24;
  uVar2 = F_00dbf8f0(this,0xffffffff);
  return uVar2;
}

/* ref: hkSocket::vf9 */
uint F_00db30c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb30c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: hkSocket::vf10 */
byte F_00db30d0(void)
{
  GEN_ENTER(0xdb30d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00db30f0 */
uint F_00db30f0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb30f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db3120 */
uint F_00db3120(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3120u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00db3150 */
uint F_00db3150(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSocket::ReaderAdapter::vf0 */
uint F_00db3180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkSocket::WriterAdapter::vf0 */
uint F_00db31c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb31c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db3200 */
uint F_00db3200(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3200u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkSocket::vf0 */
uint F_00db3230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db3270 */
uint F_00db3270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db3280 */
uint F_00db3280(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3280u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  if (in_eax == 0) {
    in_eax = 0x80000000;
  }
  return in_eax;
}

/* ref: FUN_00db3290 */
uint F_00db3290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d9fe80(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00db32b0 */
uint F_00db32b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb32b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x10) == -1;
  return param_2;
}

/* ref: FUN_00db32d0 */
unsigned int F_00db32d0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb32d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  HANDLE pvVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  if (*piVar1 != 0) {
    pvVar2 = gen_imp_GetCurrentProcess();
    (*(code *)piVar1[0xc])(pvVar2);
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = 0;
    piVar1[0xd] = 0;
    gen_imp_FreeLibrary((HMODULE)piVar1[1]);
    gen_imp_FreeLibrary((HMODULE)*piVar1);
    *piVar1 = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_00db3490 */
uint F_00db3490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  uint uVar2;
  
  pcVar1 = *((gen_code32 *)GEN_TOP((*(int *)((int)this + 8) + 0x38)));
  if (pcVar1 != (code *)0x0) {
    uVar2 = (*pcVar1)(0,param_2,param_1,0);
    return uVar2 & 0xffff;
  }
  return 0;
}

/* ref: FUN_00db34e0 */
uint F_00db34e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb34e0u, gen_a0, gen_a1, 0u, 0u);
  code * param_1 = (code *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  DWORD DVar1;
  uint uVar2;
  undefined1 * puVar3;
  undefined4 uVar4;
  char * pcVar5;
  CHAR * pCVar6;
  
  DVar1 = gen_imp_GetModuleFileNameA((HMODULE)0x0,((CHAR *)(gen_frame + 0x40c)),0x400);
  uVar2 = 0;
  if (DVar1 != 0) {
    pCVar6 = ((CHAR *)(gen_frame + 0x40c));
    pcVar5 = "Win32 \"%s\"";
    puVar3 = ((undefined1 *)(gen_frame + 0xc));
    uVar4 = 0x400;
    F_00da0ce0(puVar3,0x400,"Win32 \"%s\"",pCVar6);
    uVar2 = (*param_1)(((undefined1 *)(gen_frame + 0xc)),param_2,puVar3,uVar4,pcVar5,pCVar6);
  }
  return uVar2;
}

/* ref: FUN_00db3540 */
uint F_00db3540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *(undefined4 *)((int)this + 4);
  uVar5 = *(uint *)((int)this + 8);
  uVar3 = *(undefined4 *)this;
  uVar4 = F_00db3280(param_1[2] & 0x3fffffff);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(uint *)((int)this + 8) = uVar4;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  uVar5 = F_00db3280(uVar5 & 0x3fffffff);
  param_1[2] = uVar5;
  uVar1 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  param_1[4] = uVar1;
  uVar1 = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  param_1[5] = uVar1;
  uVar5 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  param_1[3] = uVar5;
  return uVar5;
}

/* ref: FUN_00db35c0 */
uint F_00db35c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb35c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = param_1;
  if (0 < param_3) {
    do {
      if (iVar2 < 1) {
        return uVar1;
      }
      *(undefined4 *)(param_2 + uVar1 * 4) = *(undefined4 *)(iVar2 * 0x14 + *(int *)this);
      iVar2 = *(int *)(iVar2 * 0x14 + 4 + *(int *)this);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < param_3);
  }
  return uVar1;
}

/* ref: FUN_00db3600 */
int F_00db3600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (0 < param_1) {
    iVar2 = param_1;
    do {
      iVar2 = *(int *)(*(int *)this + 4 + iVar2 * 0x14);
      iVar1 = iVar1 + 1;
    } while (0 < iVar2);
  }
  return iVar1;
}

/* ref: FUN_00db3620 */
uint F_00db3620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = *(int *)this;
  uVar5 = param_1 * 5;
  iVar1 = iVar3 + param_1 * 0x14;
  if ((*(int *)(iVar3 + 0x10 + param_1 * 0x14) == 0) && (*(int *)(iVar1 + 8) == -1)) {
    iVar4 = *(int *)(iVar1 + 4);
    if (iVar4 != -1) {
      piVar2 = (int *)(iVar3 + 8 + iVar4 * 0x14);
      for (iVar4 = *(int *)(iVar3 + 8 + iVar4 * 0x14); iVar4 != param_1;
          iVar4 = *(int *)(iVar3 + 0xc + iVar4 * 0x14)) {
        iVar4 = *piVar2;
        piVar2 = (int *)(iVar3 + 0xc + iVar4 * 0x14);
      }
      *piVar2 = *(int *)(iVar1 + 0xc);
      F_00db3620(this,*(undefined4 *)(iVar1 + 4));
      uVar5 = *(uint *)((int)this + 0x14);
      *(uint *)(iVar1 + 0xc) = uVar5;
      *(int *)((int)this + 0x14) = param_1;
      return uVar5;
    }
    uVar5 = *(uint *)((int)this + 0x14);
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(uint *)(iVar1 + 0xc) = uVar5;
    *(int *)((int)this + 0x14) = param_1;
  }
  return uVar5;
}

/* ref: FUN_00db36a0 */
uint F_00db36a0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb36a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113d1ac));
  *(undefined * PTR32 *)((int)this + 8) = &REFG(undefined, 0x15dffcc);
  F_00db3b00(&REFG(undefined, 0x15dffcc));
  return (uint)this;
}

/* ref: FUN_00db36d0 */
uint F_00db36d0(void)
{
  GEN_ENTER(0xdb36d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00db36a0(&REFG(undefined, 0x15dffc0));
  return uVar1;
}

/* ref: FUN_00db36e0 */
uint F_00db36e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb36e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  uint uVar1;
  
  if (-1 < param_1) {
    this_00 = (undefined *)F_00db36d0();
    if (this_00 != (undefined *)0x0) {
      F_00d919e0(this_00);
    }
    F_00d91a80(this_00);
    uVar1 = F_00db35c0(this,param_1,((undefined1 *)(gen_frame + 0xc)),0x10);
    uVar1 = F_00db3330(this_00,((undefined1 *)(gen_frame + 0xc)),uVar1,((code *)REFP(0xdb3290)),param_2);
    if (this_00 != (undefined *)0x0) {
      uVar1 = F_00d91a80(this_00);
    }
    return uVar1;
  }
  uVar1 = F_00d9fe80(param_2,"No stack trace\n");
  return uVar1;
}

/* ref: FUN_00db3760 */
uint F_00db3760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)(*(int *)this + 0x10 + param_1 * 0x14);
  *piVar1 = *piVar1 + -1;
  uVar2 = F_00db3620(this,param_1);
  return uVar2;
}

/* ref: FUN_00db3780 */
uint F_00db3780(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 != 0xffffffff) {
    iVar2 = uVar1 * 0x14;
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(*(int *)this + 0xc + iVar2);
    *(undefined4 *)(*(int *)this + iVar2) = 0;
    *(undefined4 *)(iVar2 + 4 + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 8 + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0xc + *(int *)this) = 0xffffffff;
    *(undefined4 *)(iVar2 + 0x10 + *(int *)this) = 0;
    return uVar1;
  }
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(*(undefined4 *)((int)this + 0xc),this,0x14);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  iVar2 = uVar1 * 0x14;
  *(undefined4 *)(iVar2 + *(int *)this) = 0;
  *(undefined4 *)(iVar2 + 4 + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 8 + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0xc + *(int *)this) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x10 + *(int *)this) = 0;
  return uVar1;
}

/* ref: FUN_00db3820 */
unsigned int F_00db3820(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (piVar1 != (int *)0x0) {
    uVar2 = *(uint *)((int)this + 8);
    *(undefined4 *)((int)this + 4) = 0;
    if (-1 < (int)uVar2) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                (piVar1,*(undefined4 *)this,((uVar2 & 0x3fffffff) + uVar2 * 4) * 4);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 8) = 0x80000000;
    *(undefined4 *)((int)this + 0xc) = 0;
    *(undefined4 *)((int)this + 0x10) = 0xffffffff;
    *(undefined4 *)((int)this + 0x14) = 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00db3870 */
uint F_00db3870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)((int)this + 0x10) == -1) {
    uVar6 = F_00db3780(this);
    *(uint *)((int)this + 0x10) = uVar6;
  }
  uVar6 = *(uint *)((int)this + 0x10);
  iVar5 = param_2;
joined_r0x00db3890: ;
  do {
    uVar4 = uVar6;
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) {
      piVar1 = (int *)(*(int *)this + 0x10 + uVar4 * 0x14);
      *piVar1 = *piVar1 + 1;
      return uVar4;
    }
    iVar2 = *(int *)(param_1 + iVar5 * 4);
    iVar3 = uVar4 * 0x14;
    uVar6 = *(uint *)(*(int *)this + 8 + iVar3);
    while (0 < (int)uVar6) {
      piVar1 = (int *)(*(int *)this + uVar6 * 0x14);
      if (*piVar1 == iVar2) {
        if (uVar6 != 0xffffffff) goto joined_r0x00db3890;
        break;
      }
      uVar6 = piVar1[3];
    }
    uVar6 = F_00db3780(this);
    piVar1 = (int *)(*(int *)this + uVar6 * 0x14);
    *piVar1 = iVar2;
    piVar1[1] = uVar4;
    piVar1[2] = -1;
    piVar1[3] = *(int *)(iVar3 + 8 + *(int *)this);
    *(uint *)(iVar3 + 8 + *(int *)this) = uVar6;
  } while( true );
}

/* ref: FUN_00db3920 */
uint F_00db3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  uVar1 = param_1[3];
  *(undefined4 *)((int)this + 0xc) = uVar1;
  F_00db40c0(this,uVar1,0,*param_1,param_1[1]);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return (uint)this;
}

/* ref: FUN_00db3970 */
uint F_00db3970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
              (*(int * PTR32 *)((int)this + 0xc),*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4
              );
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  uVar2 = param_1[3];
  *(undefined4 *)((int)this + 0xc) = uVar2;
  F_00db40c0(this,uVar2,0,*param_1,param_1[1]);
  uVar1 = param_1[4];
  *(uint *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return uVar1;
}

/* ref: FUN_00db39e0 */
uint F_00db39e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb39e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  uint uVar1;
  
  uVar1 = F_00db3490(param_1,((undefined1 *)(gen_frame + 0xc)),0x80);
  if (0 < (int)uVar1) {
    uVar1 = F_00db3870(this,((undefined1 *)(gen_frame + 0x10)),uVar1 - 1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00db3a40 */
uint F_00db3a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  byte bVar3;
  undefined4 * puVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  int iVar6;
  
  iVar1 = *(int *)((int)this + 4);
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar5 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar5,4);
  }
  param_1[1] = iVar1;
  puVar4 = (undefined4 *)(param_2[2] & 0x3fffffff);
  if ((int)puVar4 < iVar1) {
    iVar5 = (int)((int)(uintptr_t)puVar4) * 2;
    if ((int)((int)(uintptr_t)puVar4) * 2 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar3 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_2,iVar5,4);
    puVar4 = ((undefined4 *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
  param_2[1] = iVar1;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)*param_1;
    *puVar4 = 0;
    *(undefined4 *)*param_2 = 0xffffffff;
    iVar5 = 1;
    if (1 < iVar1) {
      iVar6 = 0x14;
      do {
        iVar2 = *(int *)this;
        *(undefined4 *)(*param_1 + iVar5 * 4) = *(undefined4 *)(iVar2 + iVar6);
        puVar4 = *(undefined4 * PTR32 *)(iVar2 + 4 + iVar6);
        *(undefined4 * PTR32 *)(*param_2 + iVar5 * 4) = puVar4;
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar5 < iVar1);
    }
  }
  return (uint)puVar4;
}

/* ref: FUN_00db3b00 */
uint F_00db3b00(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HMODULE pHVar1;
  FARPROC pFVar2;
  uint uVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  pHVar1 = gen_imp_LoadLibraryA(REFG(undefined * PTR32, 0x13527fc));
  *(HMODULE *)this = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load dbghelp.dll\r\n");
  }
  pHVar1 = gen_imp_LoadLibraryA("kernel32.dll");
  *(HMODULE *)((int)this + 4) = pHVar1;
  if (pHVar1 == (HMODULE)0x0) {
    gen_imp_OutputDebugStringA("Havok StackTracer: hkStackTracer: Unable to load kernel32.dll\r\n");
  }
  uVar3 = 0;
  if (*(int *)this != 0) {
    *(undefined4 *)((int)this + 8) = 1;
    pFVar2 = gen_imp_GetProcAddress(*(int *)this,"SymInitialize");
    *(FARPROC *)((int)this + 0xc) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymRefreshModuleList");
    *(FARPROC *)((int)this + 0x10) = pFVar2;
    if (pFVar2 == (FARPROC)0x0) {
      gen_imp_OutputDebugStringA(
                        "Havok StackTracer: Could not load symbol SymRefreshModuleList from dbghelp.dll, version too old, but will continue without it.\r\n"
                        );
    }
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetOptions");
    *(FARPROC *)((int)this + 0x14) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymSetOptions");
    *(FARPROC *)((int)this + 0x18) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetSymFromAddr64");
    *(FARPROC *)((int)this + 0x1c) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"StackWalk64");
    *(FARPROC *)((int)this + 0x20) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymFunctionTableAccess64");
    *(FARPROC *)((int)this + 0x24) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetModuleBase64");
    *(FARPROC *)((int)this + 0x28) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymGetLineFromAddr64");
    *(FARPROC *)((int)this + 0x2c) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)this,"SymCleanup");
    *(FARPROC *)((int)this + 0x30) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)((int)this + 4),"RtlCaptureContext");
    *(FARPROC *)((int)this + 0x34) = pFVar2;
    pFVar2 = gen_imp_GetProcAddress(*(undefined4 *)((int)this + 4),"RtlCaptureStackBackTrace");
    *(FARPROC *)((int)this + 0x38) = pFVar2;
    uVar3 = ((code *)*(gen_code32 *)((int)this + 0x14))();
    ((code *)*(gen_code32 *)((int)this + 0x18))(uVar3 | 0x80000014);
    uVar6 = 1;
    uVar5 = 0;
    pvVar4 = gen_imp_GetCurrentProcess();
    uVar3 = ((code *)*(gen_code32 *)((int)this + 0xc))(pvVar4,uVar5,uVar6);
  }
  return uVar3;
}

/* ref: FUN_00db3c20 */
unsigned int F_00db3c20(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  HANDLE pvVar1;
  
  if (*(int *)this != 0) {
    pvVar1 = gen_imp_GetCurrentProcess();
    ((code *)*(gen_code32 *)((int)this + 0x30))(pvVar1);
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
    gen_imp_FreeLibrary(*(undefined4 *)((int)this + 4));
    gen_imp_FreeLibrary(*(undefined4 *)this);
    *(undefined4 *)this = 0;
  }
  return 0;
}

/* ref: FUN_00db3c80 */
uint F_00db3c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3c80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3ca0 */
uint F_00db3ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3ca0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_00db3d00 */
uint F_00db3d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00db3d20 */
uint F_00db3d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00db3d30 */
uint F_00db3d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d50 */
uint F_00db3d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00db3d70 */
uint F_00db3d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00db3d90 */
unsigned int F_00db3d90(unsigned int gen_a0)
{
  GEN_ENTER(0xdb3d90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00db3dc0 */
uint F_00db3dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: FUN_00db3e10 */
uint F_00db3e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3e10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,0x14);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db3e60 */
unsigned int F_00db3e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar2 = param_3 - (int)param_1;
    puVar1 = param_1;
    iVar3 = param_2;
    do {
      *puVar1 = *(undefined8 *)(iVar2 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar2 + 8 + (int)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar2 + 0x10 + (int)puVar1);
      puVar1 = (undefined8 *)((int)puVar1 + 0x14);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00db3ec0 */
uint F_00db3ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb3ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x14);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0x14;
}

/* ref: FUN_00db3f10 */
unsigned int F_00db3f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xdb3f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  undefined8 * puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)((int)this + 4);
  iVar5 = (iVar4 - param_3) + param_5;
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar5) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(param_1,this,iVar3,0x14);
  }
  F_00da38f0(*(int *)this + (param_2 + param_5) * 0x14,*(int *)this + (param_2 + param_3) * 0x14,
               ((iVar4 - param_2) - param_3) * 0x14);
  puVar1 = (undefined8 *)(*(int *)this + param_2 * 0x14);
  if (0 < param_5) {
    iVar3 = param_4 - (int)puVar1;
    iVar4 = param_5;
    do {
      *puVar1 = *(undefined8 *)(iVar3 + (int)puVar1);
      puVar1[1] = *(undefined8 *)(iVar3 + 8 + (int)puVar1);
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(iVar3 + 0x10 + (int)puVar1);
      puVar1 = (undefined8 *)((int)puVar1 + 0x14);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00db3fd0 */
uint F_00db3fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb3fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00db4010 */
uint F_00db4010(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkStackTracer::vf0 */
uint F_00db4040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00db32d0(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00db4080 */
uint F_00db4080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,((uVar1 & 0x3fffffff) + uVar1 * 4) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00db40c0 */
unsigned int F_00db40c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb40c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00db3f10(this,param_1,param_2,0,param_3,param_4);
  return 0;
}

/* ref: FUN_00db40e0 */
uint F_00db40e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb40e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_2) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_2) {
      iVar3 = param_2;
    }
    bVar1 = F_00d95690(param_1,this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00db4120 */
uint F_00db4120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined3 extraout_var = 0;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < param_1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= param_1) {
      iVar3 = param_1;
    }
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00db4180 */
uint F_00db4180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  if ((*(uint *)((int)this + 4) <= param_1[1]) &&
     ((*(uint *)((int)this + 4) < param_1[1] || (*(uint *)this < *param_1)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00db41b0 */
uint F_00db41b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb41b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: hkLeakDetectAllocator::vf8 */
uint F_00db4270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb4270u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x20))))
                    (*(int * PTR32 *)(this + 0x38),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf9 */
uint F_00db4280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xdb4280u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x38) + 0x24))))
                    (*(int * PTR32 *)(this + 0x38),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: FUN_00db4290 */
uint F_00db4290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_2;
  uVar2 = F_00da0e60(param_1);
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x10))(param_2,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00db42e0 */
uint F_00db42e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb42e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * pvVar1;
  undefined4 * puVar2;
  
  *(undefined4 *)((int)this + 0x38) = param_1;
  *(int * PTR32 *)((int)this + 0x3c) = param_2;
  *(undefined4 *)((int)this + 0x40) = param_3;
  *(undefined4 *)((int)this + 0x44) = param_4;
  *(undefined4 *)((int)this + 0x4c) = 0;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  if ((REFG(void * PTR32, 0x15dffb0) == (undefined *)0x0) &&
     (pvVar1 = (undefined *)F_00db36d0(), REFG(void * PTR32, 0x15dffb0) != (undefined *)0x0)) {
    F_00d91840(REFG(void * PTR32, 0x15dffb0));
  }
  REFG(void * PTR32, 0x15dffb0) = pvVar1;
  pvVar1 = REFG(void * PTR32, 0x15dffb0);
  *(undefined * PTR32 *)((int)this + 4) = REFG(void * PTR32, 0x15dffb0);
  F_00d91830(pvVar1);
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 4))(param_2,0xc)));
  if (puVar2 == (undefined4 *)0x0) {
    *(int * PTR32 *)((int)this + 0x14) = param_2;
    *(undefined4 *)((int)this + 0x48) = 0;
    return 0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0xffffffff;
  *(int * PTR32 *)((int)this + 0x14) = param_2;
  *(undefined4 * PTR32 *)((int)this + 0x48) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00db4380 */
unsigned int F_00db4380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xdb4380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  for (iVar3 = param_3; iVar3 != 0; iVar3 = iVar3 - iVar2) {
    iVar2 = iVar3;
    if (0x1f < iVar3) {
      iVar2 = 0x20;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))
              (piVar1,"\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t",iVar2);
  }
  F_00da00e0(param_1,&REFG(undefined, 0x113d450),*(undefined4 *)(*param_5 + param_2 * 8),
               *(undefined4 *)(*param_5 + 4 + param_2 * 8));
  if (param_2 == 0) {
    F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  }
  else {
    F_00db3330(REFG(void * PTR32, 0x15dffb0),*param_4 + param_2 * 0x14,1,((code *)REFP(0xdb4290)),piVar1);
  }
  iVar3 = *(int *)(*param_4 + 8 + param_2 * 0x14);
  if (iVar3 != -1) {
    do {
      F_00db4380(param_1,iVar3,param_3 + 1,param_4,param_5);
      iVar3 = *(int *)(*param_4 + 0xc + iVar3 * 0x14);
    } while (iVar3 != -1);
  }
  return 0;
}

/* ref: FUN_00db4450 */
uint F_00db4450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar1;
  undefined8 uVar2;
  int * piVar3;
  int iVar4;
  undefined4 uVar5;
  LPVOID pvVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  int * piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = this;
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x5c)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00dbff20(param_1);
  piVar3 = *(int * PTR32 *)((int)this + 0x48);
  uVar8 = piVar3[1];
  uVar13 = uVar8 & 0x7fffffff;
  if (uVar13 == 0) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  param_1[2] = uVar13;
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar11 = (uVar13 + uVar8 * 8) * 8;
  uVar13 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x30) + 4))))(*(int * PTR32 *)((int)pvVar6 + 0x30),iVar11);
  param_1[1] = uVar13;
  F_00da3720(uVar13,0,iVar11);
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar7 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar6 + 0x30) + 4))))
                     (*(int * PTR32 *)((int)pvVar6 + 0x30),uVar8 * 4)));
  *param_1 = puVar7;
  (*(int *)(gen_frame + 0x64)) = param_1[1];
  pvVar6 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  (*(LPVOID *)(gen_frame + 0x60)) = pvVar6;
  iVar12 = piVar3[2];
  iVar11 = 0;
  if (-1 < iVar12) {
    piVar10 = (int *)*piVar3;
    do {
      if (*piVar10 != -1) break;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
    } while (iVar11 <= iVar12);
  }
  if (iVar11 <= iVar12) {
    (*(undefined * PTR32 *)(gen_frame + 0x68)) = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x68)) + 8);
    iVar12 = (*(int *)(gen_frame + 0x64)) + 4;
    do {
      iVar4 = *piVar3;
      iVar9 = iVar11 * 0x20;
      (*(undefined8 *)(gen_frame + 0x44)) = *(undefined8 *)(iVar4 + 8 + iVar9);
      uVar1 = *(undefined8 *)(iVar4 + iVar9 + 0x10);
      (*(undefined8 *)(gen_frame + 0x4c)) = uVar1;
      uVar1 = (*(undefined8 *)(gen_frame + 0x4c));
      uVar2 = *(undefined8 *)(iVar4 + iVar9 + 0x18);
      (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 0)) = (undefined4)uVar1;
      uVar5 = (undefined4)(*(undefined8 *)(gen_frame + 0x4c));
      *puVar7 = *(undefined4 *)(iVar4 + iVar9);
      (*(undefined8 *)(gen_frame + 0x54)) = uVar2;
      (*(undefined8 *)(gen_frame + 0x4c)) = uVar1;
      uVar8 = F_00db35c0((*(undefined * PTR32 *)(gen_frame + 0x68)),uVar5,((undefined1 *)(gen_frame + 0x4)),0x10);
      *(uint *)(iVar12 + 0x40) = uVar8;
      F_00da1010(iVar12,((undefined1 *)(gen_frame + 0x4)),uVar8 * 4);
      *(undefined4 *)(iVar12 + -4) = (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4));
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(LPVOID *)(gen_frame + 0x60)) + 0x2c) + 0x24))))
                (*(int * PTR32 *)((int)(*(LPVOID *)(gen_frame + 0x60)) + 0x2c),*puVar7,(*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x4c)) + 4)));
      iVar11 = iVar11 + 1;
      iVar4 = piVar3[2];
      iVar12 = iVar12 + 0x48;
      puVar7 = puVar7 + 1;
      if (iVar11 <= iVar4) {
        piVar10 = (int *)(iVar11 * 0x20 + *piVar3);
        do {
          if (*piVar10 != -1) break;
          iVar11 = iVar11 + 1;
          piVar10 = piVar10 + 8;
        } while (iVar11 <= iVar4);
      }
    } while (iVar11 <= iVar4);
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x5c)));
  return 0;
}

/* ref: FUN_00db46c0 */
unsigned int F_00db46c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb46c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  undefined8 uVar2;
  code * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x20);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (param_2 == 0) {
    if (param_3 != 0) {
      ((code *)*(gen_code32 *)((int)this + 0x40))
                ("Given nonzero bytes to free with an null address\n",
                 *(undefined4 *)((int)this + 0x44));
      pcVar3 = ((code *)GEN_TOP(swi(3)));
      (*pcVar3)();
      return 0;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  if (param_3 == 0) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("Given zero bytes to free with an non-null address\n",
               *(undefined4 *)((int)this + 0x44));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  uVar5 = F_00db5370(*(undefined * PTR32 *)((int)this + 0x48),param_2);
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x48) + 8))) < (int)uVar5) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("Freeing block not from this allocator",*(undefined4 *)((int)this + 0x44));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  iVar1 = uVar5 * 0x20 + 8 + **(int * PTR32 *)((int)this + 0x48);
  (*(undefined8 *)(gen_frame + 0x0)) = *((undefined8 *)GEN_TOP((uVar5 * 0x20 + 8 + **(int * PTR32 *)((int)this + 0x48))));
  uVar2 = *(undefined8 *)(iVar1 + 8);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  uVar2 = (*(undefined8 *)(gen_frame + 0x8));
  (*(undefined8 *)(gen_frame + 0x10)) = *(undefined8 *)(iVar1 + 0x10);
  (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) = (int)((ulonglong)uVar2 >> 0x20);
  (*(undefined8 *)(gen_frame + 0x8)) = uVar2;
  if ((*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) != param_3) {
    F_00db41e0(this,"Freeing block of incorrect size",param_2,&(*(undefined8 *)(gen_frame + 0x0)));
    pcVar3 = ((code *)GEN_TOP(swi(3)));
    (*pcVar3)();
    return 0;
  }
  if (*(int *)((int)this + 4) != 0) {
    (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 0)) = (undefined4)uVar2;
    uVar4 = (undefined4)(*(undefined8 *)(gen_frame + 0x8));
    F_00db3760((undefined *)((int)this + 8),uVar4);
  }
  F_00db54c0(*(undefined * PTR32 *)((int)this + 0x48),uVar5);
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 0x24))))
                    (*(int * PTR32 *)((int)this + 0x38),param_2,param_3);
  *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) - uVar5;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x38) + 8))))(*(int * PTR32 *)((int)this + 0x38),param_2,param_3);
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
  return 0;
}

/* ref: hkLeakDetectAllocator::vf1 */
uint F_00db47f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb47f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db45f0(this,0,param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf2 */
unsigned int F_00db4810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db46c0(this,0,param_1,param_2);
  return 0;
}

/* ref: hkLeakDetectAllocator::vf3 */
uint F_00db4830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00db45f0(this,1,*param_1);
  return uVar1;
}

/* ref: hkLeakDetectAllocator::vf4 */
unsigned int F_00db4850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00db46c0(this,1,param_1,param_2);
  return 0;
}

/* ref: hkLeakDetectAllocator::vf5 */
uint F_00db4870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb4870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00db45f0(this,1,*param_3);
  iVar2 = *param_3;
  if (param_2 <= iVar2) {
    iVar2 = param_2;
  }
  F_00da3710(uVar1,param_1,iVar2);
  F_00db46c0(this,1,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00db48c0 */
uint F_00db48c0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb48c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  undefined8 * puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  undefined1 * puVar10;
  undefined4 uVar11;
  undefined1 * puVar12;
  undefined4 uVar13;
  char * pcVar14;
  
  (*(undefined * PTR32 *)(gen_frame + 0x104)) = this;
  if ((*((uint *)GEN_TOP((*(int *)((int)this + 0x48) + 4))) & 0x7fffffff) != 0) {
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("**************************************************************\n* Begin hkLeakDetectorAllocator                              *\n**************************************************************\n"
               ,*(undefined4 *)((int)this + 0x44));
    iVar7 = *(int *)((int)this + 0x48);
    uVar11 = *(undefined4 *)((int)this + 0x3c);
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(int *)(gen_frame + 0x110)) = 0;
    (*(uint *)(gen_frame + 0x114)) = 0x80000000;
    uVar4 = *(uint *)(iVar7 + 4) & 0x7fffffff;
    if (uVar4 != 0) {
      F_00d95690(uVar11,&(*(int *)(gen_frame + 0x10c)),uVar4,0x18);
    }
    piVar6 = *(int * PTR32 *)((int)this + 0x48);
    iVar7 = 0;
    if ((uint)piVar6[2] < 0x80000000) {
      piVar8 = (int *)*piVar6;
      do {
        if (*piVar8 != -1) break;
        iVar7 = iVar7 + 1;
        piVar8 = piVar8 + 8;
        (*(int * PTR32 *)(gen_frame + 0x118)) = piVar8;
      } while (iVar7 <= piVar6[2]);
      if (iVar7 <= piVar6[2]) {
        do {
          iVar9 = *piVar6;
          iVar5 = iVar7 * 0x20;
          uVar2 = *(undefined8 *)(iVar5 + 0x10 + iVar9);
          uVar3 = *(undefined8 *)(iVar5 + 0x18 + iVar9);
          puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x10c)) + (*(int *)(gen_frame + 0x110)) * 0x18);
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = *(undefined8 *)(iVar5 + 8 + iVar9);
            puVar1[1] = uVar2;
            puVar1[2] = uVar3;
          }
          piVar6 = *(int * PTR32 *)((int)this + 0x48);
          (*(int *)(gen_frame + 0x110)) = (*(int *)(gen_frame + 0x110)) + 1;
          iVar9 = piVar6[2];
          iVar7 = iVar7 + 1;
          if (iVar7 <= iVar9) {
            piVar8 = (int *)(iVar7 * 0x20 + *piVar6);
            do {
              if (*piVar8 != -1) break;
              iVar7 = iVar7 + 1;
              piVar8 = piVar8 + 8;
            } while (iVar7 <= iVar9);
          }
        } while (iVar7 <= iVar9);
      }
    }
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
    (*(undefined1 *)((char *)&(*(int * PTR32 *)(gen_frame + 0x118)) + 0)) = 0;
    (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)((uint)piVar6 & 0xffffff00);
    if (1 < (*(int *)(gen_frame + 0x110))) {
      F_00db5940((*(int *)(gen_frame + 0x10c)),0,(*(int *)(gen_frame + 0x110)) + -1,(*(int * PTR32 *)(gen_frame + 0x118)));
    }
    iVar7 = (*(int *)(gen_frame + 0x10c));
    if (0 < (*(int *)(gen_frame + 0x110))) {
      (*(int *)(gen_frame + 0x108)) = 0;
      (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)0x1;
      iVar9 = (*(int *)(gen_frame + 0x110));
      do {
        iVar5 = (*(int *)(gen_frame + 0x108));
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
        if (-1 < *(int *)((*(int *)(gen_frame + 0x108)) + 8 + iVar7)) {
          if ((int)(*(int * PTR32 *)(gen_frame + 0x118)) < iVar9) {
            do {
              if (*(int *)(iVar5 + 0x20 + iVar7) == *(int *)((*(int *)(gen_frame + 0x108)) + 8 + iVar7)) {
                *(undefined4 *)(iVar5 + 0x20 + iVar7) = 0xffffffff;
                iVar9 = (*(int *)(gen_frame + 0x110));
                iVar7 = (*(int *)(gen_frame + 0x10c));
              }
              piVar6 = (int *)((int)piVar6 + 1);
              this = (*(undefined * PTR32 *)(gen_frame + 0x104));
              iVar5 = iVar5 + 0x18;
            } while ((int)piVar6 < iVar9);
          }
          F_00db41e0(this,"Memory Leaked:\n",0,(*(int *)(gen_frame + 0x108)) + iVar7);
          iVar5 = (*(int *)(gen_frame + 0x108));
          piVar6 = (*(int * PTR32 *)(gen_frame + 0x118));
          iVar9 = (*(int *)(gen_frame + 0x110));
          iVar7 = (*(int *)(gen_frame + 0x10c));
        }
        (*(int * PTR32 *)(gen_frame + 0x118)) = (int *)((int)piVar6 + 1);
        (*(int *)(gen_frame + 0x108)) = iVar5 + 0x18;
      } while ((int)piVar6 < iVar9);
    }
    (*(int *)(gen_frame + 0x110)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x114))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0x10))))
                (*(int * PTR32 *)((int)this + 0x3c),iVar7,((*(uint *)(gen_frame + 0x114)) & 0x3fffffff) * 0x18);
    }
    iVar7 = *(int *)((int)this + 0x48);
    (*(int *)(gen_frame + 0x10c)) = 0;
    (*(uint *)(gen_frame + 0x114)) = 0x80000000;
    uVar4 = *(uint *)(iVar7 + 4) & 0x7fffffff;
    pcVar14 = "\n%i leaks found\n";
    puVar12 = ((undefined1 *)(gen_frame + 0x4));
    uVar13 = 0x100;
    F_00da0ce0(puVar12,0x100,"\n%i leaks found\n",uVar4);
    uVar11 = *(undefined4 *)((int)this + 0x44);
    puVar10 = ((undefined1 *)(gen_frame + 0x4));
    ((code *)*(gen_code32 *)((int)this + 0x40))(puVar10,uVar11,puVar12);
    ((code *)*(gen_code32 *)((int)this + 0x40))
              ("**************************************************************\n* End hkLeakDetectorAllocator                                *\n**************************************************************\n"
               ,*(undefined4 *)((int)this + 0x44),puVar10,uVar11,puVar12,uVar13,pcVar14,uVar4);
  }
  F_00db3820((undefined *)((int)this + 8));
  F_00db5650(*(undefined * PTR32 *)((int)this + 0x48),*(undefined4 *)((int)this + 0x3c));
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 8))))
            (*(int * PTR32 *)((int)this + 0x3c),*(undefined4 *)((int)this + 0x48),0xc);
  uVar4 = F_00d91a80(*(undefined * PTR32 *)((int)this + 4));
  return uVar4;
}

/* ref: FUN_00db4b20 */
unsigned int F_00db4b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  undefined8 uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int * piVar11;
  undefined4 * puVar12;
  undefined4 * puVar13;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)) = this;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)) = (LPCRITICAL_SECTION)((int)this + 0x20);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x20));
  uVar3 = *(uint *)((int)this + 0xc);
  iVar8 = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) = (int)this + 8;
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  ((byte *)(gen_frame + 0xc))[0x19] = 0;
  ((byte *)(gen_frame + 0xc))[0x1a] = 0;
  ((byte *)(gen_frame + 0xc))[0x1b] = 0;
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  ((byte *)(gen_frame + 0xc))[0x20] = 0;
  ((byte *)(gen_frame + 0xc))[0x21] = 0;
  ((byte *)(gen_frame + 0xc))[0x22] = 0;
  ((byte *)(gen_frame + 0xc))[0x23] = 0x80;
  if (0 < (int)uVar3) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a8),((byte *)(gen_frame + 0xc)) + 0x18,((int)uVar3 < 0) - 1 & uVar3,8);
    iVar8 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 28));
  }
  puVar12 = ((undefined4 *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar8 * 8)));
  if (0 < (int)(uVar3 - iVar8)) {
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar13 = puVar12 + 2;
    for (uVar9 = (uVar3 - iVar8) * 8 - 5 >> 2; this = (undefined *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 40)), uVar9 != 0;
        uVar9 = uVar9 - 1) {
      *puVar13 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar13 = puVar13 + 1;
    }
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x48);
  ((byte *)(gen_frame + 0xc))[0x1c] = (char)uVar3;
  ((byte *)(gen_frame + 0xc))[0x1d] = (char)(uVar3 >> 8);
  ((byte *)(gen_frame + 0xc))[0x1e] = (char)(uVar3 >> 0x10);
  ((byte *)(gen_frame + 0xc))[0x1f] = (char)(uVar3 >> 0x18);
  iVar10 = piVar4[2];
  iVar8 = 0;
  if (-1 < iVar10) {
    piVar11 = (int *)*piVar4;
    do {
      if (*piVar11 != -1) break;
      iVar8 = iVar8 + 1;
      piVar11 = piVar11 + 8;
    } while (iVar8 <= iVar10);
  }
  if (iVar8 <= iVar10) {
    do {
      iVar10 = iVar8 * 0x20 + 8 + *piVar4;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 0)) = *(undefined8 *)(iVar8 * 0x20 + 8 + *piVar4);
      uVar2 = *(undefined8 *)(iVar10 + 8);
      ((byte *)(gen_frame + 0xc))[8] = (byte)uVar2;
      ((byte *)(gen_frame + 0xc))[9] = SUB81(uVar2,1);
      ((byte *)(gen_frame + 0xc))[10] = SUB81(uVar2,2);
      ((byte *)(gen_frame + 0xc))[0xb] = SUB81(uVar2,3);
      ((byte *)(gen_frame + 0xc))[0xc] = SUB81(uVar2,4);
      ((byte *)(gen_frame + 0xc))[0xd] = SUB81(uVar2,5);
      ((byte *)(gen_frame + 0xc))[0xe] = SUB81(uVar2,6);
      ((byte *)(gen_frame + 0xc))[0xf] = SUB81(uVar2,7);
      uVar6 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
      (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = (undefined4)uVar2;
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 16)) = *(undefined8 *)(iVar10 + 0x10);
      if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8))) {
        (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) = SUB84(uVar2,4);
        iVar10 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
        do {
          puVar1 = ((uint *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar10 * 8)));
          uVar3 = *puVar1;
          *puVar1 = *puVar1 + (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
          piVar11 = ((int *)GEN_TOP(((*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)) + iVar10 * 8 + 4)));
          *piVar11 = *piVar11 + ((int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)) >> 0x1f) + (uint)CARRY4(uVar3,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12)));
          iVar10 = *((int *)GEN_TOP((*(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)) + 4 + iVar10 * 0x14)));
        } while (-1 < iVar10);
      }
      iVar10 = piVar4[2];
      iVar8 = iVar8 + 1;
      if (iVar8 <= iVar10) {
        piVar11 = (int *)(iVar8 * 0x20 + *piVar4);
        do {
          if (*piVar11 != -1) break;
          iVar8 = iVar8 + 1;
          piVar11 = piVar11 + 8;
        } while (iVar8 <= iVar10);
      }
      (*(undefined8 *)((char *)((byte *)(gen_frame + 0xc)) + 8)) = uVar6;
    } while (iVar8 <= iVar10);
  }
  iVar8 = *(int *)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44));
  iVar7 = *(int *)(iVar8 + 8);
  iVar10 = 0;
  while ((iVar5 = iVar7, 0 < iVar5 && (*(int *)(iVar8 + 0xc + iVar5 * 0x14) < 0))) {
    iVar10 = iVar5;
    iVar7 = *(int *)(iVar8 + iVar5 * 0x14 + 8);
  }
  F_00db4380(param_1,iVar10,0,(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 44)),((byte *)(gen_frame + 0xc)) + 0x18);
  ((byte *)(gen_frame + 0xc))[0x1c] = 0;
  ((byte *)(gen_frame + 0xc))[0x1d] = 0;
  ((byte *)(gen_frame + 0xc))[0x1e] = 0;
  ((byte *)(gen_frame + 0xc))[0x1f] = 0;
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 32))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a8) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 24)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 32)) * 8);
  }
  ((byte *)(gen_frame + 0xc))[0x18] = 0;
  ((byte *)(gen_frame + 0xc))[0x19] = 0;
  ((byte *)(gen_frame + 0xc))[0x1a] = 0;
  ((byte *)(gen_frame + 0xc))[0x1b] = 0;
  ((byte *)(gen_frame + 0xc))[0x20] = 0;
  ((byte *)(gen_frame + 0xc))[0x21] = 0;
  ((byte *)(gen_frame + 0xc))[0x22] = 0;
  ((byte *)(gen_frame + 0xc))[0x23] = 0x80;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 36)));
  return 0;
}

/* ref: FUN_00db4cd0 */
uint F_00db4cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4ce0 */
uint F_00db4ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4d70 */
uint F_00db4d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = (*(uint *)(in_ecx + 4) & 0x80000000) == 0;
  return param_2;
}

/* ref: FUN_00db4d90 */
uint F_00db4d90(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4d90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00db4db0 */
uint F_00db4db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4dc0 */
uint F_00db4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00db4e00 */
uint F_00db4e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4e00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0x20 + *in_ecx);
}

/* ref: FUN_00db4e20 */
uint F_00db4e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4e20u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = param_3 * 0x20 + 8 + *in_ecx;
  *param_2 = *(undefined8 *)(param_3 * 0x20 + 8 + *in_ecx);
  param_2[1] = *(undefined8 *)(iVar1 + 8);
  param_2[2] = *(undefined8 *)(iVar1 + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00db4e60 */
uint F_00db4e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xdb4e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined8 * puVar1;
  
  puVar1 = (undefined8 *)(param_2 * 0x20 + 8 + *in_ecx);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  puVar1[2] = CONCAT44(param_8,param_7);
  return (uint)puVar1;
}

/* ref: FUN_00db4e90 */
uint F_00db4e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdb4e90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = param_3 <= *(int *)(in_ecx + 8);
  return param_2;
}

/* ref: FUN_00db4ec0 */
uint F_00db4ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xdb4ec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  *(undefined4 *)this = param_1;
  *(uint *)((int)this + 4) = param_2 | 0x80000000;
  *(uint *)((int)this + 8) = param_3 - 1U;
  return param_3 - 1U;
}

/* ref: FUN_00db4ee0 */
uint F_00db4ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xdb4ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      iVar1 = iVar1 * 2;
    } while (iVar1 < param_1 * 2);
  }
  return iVar1 << 5;
}

/* ref: FUN_00db4f30 */
uint F_00db4f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xdb4f30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x18;
}

