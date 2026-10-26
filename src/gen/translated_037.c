#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005e4860 */
unsigned int F_005e4860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e4860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 200))(this,param_2);
  F_005de400(this,*(uint *)((int)this + 0x30));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf25 */
unsigned int F_005e48a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e48a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(int *)(this + 0x30) = param_1;
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0x40) = param_2[4];
  *(undefined4 *)(param_1 + 0x44) = param_2[5];
  *(undefined4 *)(param_1 + 0x48) = param_2[6];
  *(undefined4 *)(param_1 + 0x4c) = param_2[7];
  *(undefined4 *)(param_1 + 0x50) = param_2[8];
  *(undefined4 *)(param_1 + 0x54) = param_2[9];
  *(undefined4 *)(param_1 + 0x58) = param_2[10];
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf26 */
unsigned int F_005e48f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e48f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x30) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xdc))(this);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x38)) + 0)) = (char)uVar1;
    (*(undefined4 *)(gen_frame + 0x38)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x38)), 1, 3),(char)uVar1);
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = (char)uVar1;
    (*(undefined4 *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x34)), 1, 3),(char)uVar1);
    ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    uVar1 = F_00507260((undefined *)(iVar2 + 0x14c),this + 0x70);
    (*(uint *)(gen_frame + 0x3c)) = uVar1;
    ((code *)*(gen_code32 *)(*(int *)this + 0x6c))(this,((undefined1 *)(gen_frame + 0x0)),&(*(uint *)(gen_frame + 0x3c)));
    ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,(*(undefined4 *)(gen_frame + 0x38)));
    ((code *)*(gen_code32 *)(*(int *)this + 200))(this,(*(undefined4 *)(gen_frame + 0x34)));
    F_005de400(this,*(uint *)(this + 0x30));
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf53 */
unsigned int F_005e49b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5e49b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float10 fVar2;
  
  if (*(int *)((*(int *)&gen_args[0]) + 0x30) != 0) {
    fVar2 = (float10)(*(float *)&gen_args[1]);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x4)) = 0.0;
    pfVar1 = &(*(float *)&gen_args[1]);
    (*(float *)&gen_args[1]) = (float)((float10)1 - fVar2);
    if (!((float10)(float)((float10)1 - fVar2) < (float10)1)) {
      pfVar1 = &(*(float *)(gen_frame + 0x8));
    }
    if (!(0.0 < *pfVar1)) {
      pfVar1 = &(*(float *)(gen_frame + 0x4));
    }
    F_0068b7c0(*(int *)((*(int *)&gen_args[0]) + 0x30),*pfVar1);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf25 */
unsigned int F_005e4a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5e4a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(int *)(this + 0x30) = param_1;
  *(undefined4 *)(param_1 + 0x30) = *param_2;
  *(undefined4 *)(param_1 + 0x34) = param_2[1];
  *(undefined4 *)(param_1 + 0x38) = param_2[2];
  *(undefined4 *)(param_1 + 0x40) = param_2[4];
  *(undefined4 *)(param_1 + 0x44) = param_2[5];
  *(undefined4 *)(param_1 + 0x48) = param_2[6];
  *(undefined4 *)(param_1 + 0x4c) = param_2[7];
  *(undefined4 *)(param_1 + 0x50) = param_2[8];
  *(undefined4 *)(param_1 + 0x54) = param_2[9];
  *(undefined4 *)(param_1 + 0x58) = param_2[10];
  *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0x24) | 2;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf66 */
uint F_005e4a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e4a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 * puVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  
  (*(uint *)(gen_frame + 0x1bc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c0);
  switch((unsigned int)(uintptr_t)((*(int *)(this + 0x74) << 0x1c) >> 0x1c)) {
  case 1: ;
  case 3: ;
  case 4: ;
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    F_0054fa20(((undefined1 *)(gen_frame + 0xf0)),uVar5);
    (*(undefined4 *)(gen_frame + 0x70)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x78)) = REFG(float, 0x1090708);
    pfVar6 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xf0)));
    (*(float *)(gen_frame + 0xb0)) = *pfVar6;
    (*(float *)(gen_frame + 0x130)) = *pfVar6;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0xb4)) = pfVar6[1];
    (*(float *)(gen_frame + 0xb8)) = pfVar6[2];
    (*(float *)(gen_frame + 0x134)) = pfVar6[1];
    (*(float *)(gen_frame + 0x138)) = pfVar6[2];
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1090708);
    pfVar6 = (float *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xf0)));
    ((float *)(gen_frame + 0x140))[0] = *pfVar6;
    ((float *)(gen_frame + 0x140))[1] = pfVar6[1];
    ((float *)(gen_frame + 0x140))[2] = pfVar6[2];
    (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xf0)));
    ((float *)(gen_frame + 0x140))[4] = gen_bits2f(*puVar4);
    (*(undefined4 *)(gen_frame + 0x90)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x94)) = REFG(float, 0x1087f04);
    ((float *)(gen_frame + 0x140))[5] = gen_bits2f(puVar4[1]);
    (*(undefined4 *)(gen_frame + 0x158)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x98)) = REFG(float, 0x1090708);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0xf0)));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xf0)));
    (*(undefined4 *)(gen_frame + 0x170)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x174)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x178)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xf0)));
    (*(undefined4 *)(gen_frame + 0x180)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x184)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x188)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xf0)));
    (*(undefined4 *)(gen_frame + 0x190)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x194)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x198)) = puVar4[2];
    (*(undefined4 *)(gen_frame + 0x80)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x84)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x88)) = REFG(float, 0x1087f04);
    puVar4 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0xc0)),&(*(undefined4 *)(gen_frame + 0x80)),((undefined1 *)(gen_frame + 0xf0)));
    fVar11 = (*(float *)(gen_frame + 0xb8));
    fVar10 = (*(float *)(gen_frame + 0xb4));
    fVar9 = (*(float *)(gen_frame + 0xb0));
    (*(undefined4 *)(gen_frame + 0x1a0)) = *puVar4;
    (*(undefined4 *)(gen_frame + 0x1a4)) = puVar4[1];
    (*(undefined4 *)(gen_frame + 0x1a8)) = puVar4[2];
    (*(float *)(gen_frame + 0xc0)) = (*(float *)(gen_frame + 0xb0));
    (*(float *)(gen_frame + 0xc4)) = (*(float *)(gen_frame + 0xb4));
    (*(float *)(gen_frame + 0xc8)) = (*(float *)(gen_frame + 0xb8));
    pfVar6 = ((float *)(gen_frame + 0x140)) + 2;
    iVar7 = 7;
    fVar12 = fVar11;
    fVar13 = fVar10;
    fVar14 = fVar9;
    do {
      fVar1 = pfVar6[-2];
      (*(float *)(gen_frame + 0xac)) = fVar1;
      if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0xb0))) {
        (*(float *)(gen_frame + 0xb0)) = fVar1;
        fVar9 = fVar1;
      }
      fVar2 = pfVar6[-1];
      (*(float *)(gen_frame + 0xec)) = fVar2;
      if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0xb4))) {
        (*(float *)(gen_frame + 0xb4)) = fVar2;
        fVar10 = fVar2;
      }
      fVar3 = *pfVar6;
      (*(float *)(gen_frame + 0xec)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0xb8))) {
        (*(float *)(gen_frame + 0xb8)) = fVar3;
        fVar11 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0xc0)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0xc0)) = fVar1;
        fVar14 = fVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0xc4)) < (float10)fVar2) {
        (*(float *)(gen_frame + 0xc4)) = fVar2;
        fVar13 = fVar2;
      }
      if ((float10)(*(float *)(gen_frame + 0xc8)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0xc8)) = fVar3;
        fVar12 = fVar3;
      }
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *param_1 = fVar9;
    param_1[1] = fVar10;
    param_1[2] = fVar11;
    param_1[4] = fVar14;
    param_1[5] = fVar13;
    param_1[6] = fVar12;
    break;
  case 2: ;
    pfVar6 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    (*(float *)(gen_frame + 0xec)) = *pfVar6;
    dVar15 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    pfVar6 = (float *)(ulonglong)gen_d2bits(dVar15);
    fVar8 = (float10)(*(float *)(gen_frame + 0xec));
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)*pfVar6 - fVar8);
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)pfVar6[1] - fVar8);
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)pfVar6[2] - fVar8);
    dVar15 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    pfVar6 = (float *)(ulonglong)gen_d2bits(dVar15);
    fVar9 = *pfVar6;
    fVar8 = (float10)(*(float *)(gen_frame + 0xec));
    (*(float *)(gen_frame + 0xb0)) = (float)(fVar8 + (float10)fVar9);
    fVar10 = pfVar6[1];
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar10 + fVar8);
    fVar11 = pfVar6[2];
    *param_1 = (*(float *)(gen_frame + 0xc0));
    param_1[1] = (*(float *)(gen_frame + 0xc4));
    (*(float *)(gen_frame + 0xb8)) = (float)(fVar8 + (float10)fVar11);
    param_1[2] = (*(float *)(gen_frame + 0xc8));
    param_1[4] = (float)(fVar8 + (float10)fVar9);
    param_1[5] = (float)((float10)fVar10 + fVar8);
    param_1[6] = (float)(fVar8 + (float10)fVar11);
    break;
  case 5: ;
    if (*(int *)(this + 0x30) == 0) {
      fVar9 = (float)(float10)1;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))();
      pfVar6 = (float *)F_005fe430(((undefined1 *)(gen_frame + 0x10)),uVar5,fVar9);
      fVar9 = (float)(float10)1;
      (*(float *)(gen_frame + 0xc0)) = *pfVar6;
      (*(float *)(gen_frame + 0xc4)) = pfVar6[1];
      (*(float *)(gen_frame + 0xc8)) = pfVar6[2];
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
      pfVar6 = (float *)F_005fe3d0(((undefined1 *)(gen_frame + 0x0)),uVar5,fVar9);
      fVar9 = *pfVar6;
      fVar10 = pfVar6[1];
      fVar11 = pfVar6[2];
    }
    else {
      (*(float *)(gen_frame + 0xc0)) = 0.0;
      (*(float *)(gen_frame + 0xc4)) = 0.0;
      (*(float *)(gen_frame + 0xc8)) = 0.0;
      (*(float *)(gen_frame + 0xcc)) = 0.0;
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = 0.0;
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x30) + 0x28))))(*(int * PTR32 *)(this + 0x30),&(*(float *)(gen_frame + 0xc0)));
      fVar9 = (*(float *)(gen_frame + 0xcc));
      fVar10 = (*(float *)(gen_frame + 0xd0));
      fVar11 = (*(float *)(gen_frame + 0xd4));
    }
    *param_1 = (*(float *)(gen_frame + 0xc0));
    param_1[1] = (*(float *)(gen_frame + 0xc4));
    param_1[2] = (*(float *)(gen_frame + 0xc8));
    param_1[4] = fVar9;
    param_1[5] = fVar10;
    param_1[6] = fVar11;
  }
  F_00c47745((*(uint *)(gen_frame + 0x1bc)) ^ (uint)(uint)(gen_frame + 0x1c0));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::TriggerBoxLayoutInstance::vf67 */
uint F_005e5130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e5130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  if (((byte)*(undefined4 *)(this + 0x74) & 0xf) == 5) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x50)) = (float)fVar1;
    ((float *)(gen_frame + 0x20))[0] = GEN_FLT_TO(((float *)(gen_frame + 0x20))[0], REFG(float, 0x1302e10));
    (*(float *)(gen_frame + 0x54)) = (float)fVar1;
    (*(float *)(gen_frame + 0x58)) = (float)fVar1;
    ((float *)(gen_frame + 0x20))[1] = 0.0;
    ((float *)(gen_frame + 0x20))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1302e14);
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1302e18);
    F_004efe70(((float *)(gen_frame + 0x20)),0x1302e00);
    (*(float *)(gen_frame + 0x50)) = (float)((float10)REFG(float, 0x1302df0) + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)REFG(float, 0x1302df4) + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)REFG(float, 0x1302df8) + (float10)(*(float *)(gen_frame + 0x58)));
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,((undefined1 *)(gen_frame + 0x0)));
    F_005fede0(param_1,((float *)(gen_frame + 0x20)),uVar2);
  }
  else {
    pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x20))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x20))[1] = 0.0;
    ((float *)(gen_frame + 0x20))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(float *)(gen_frame + 0x34)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(float *)(gen_frame + 0x50)) = (float)fVar1;
    (*(float *)(gen_frame + 0x54)) = (float)fVar1;
    (*(float *)(gen_frame + 0x58)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x20)),(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x50)) + (float10)*pfVar3);
    (*(float *)(gen_frame + 0x54)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x58)));
    F_005fed50(param_1,((float *)(gen_frame + 0x20)),&REFG(float, 0x1302c60));
  }
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf66 */
uint F_005e52b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e52b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x190];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float * pfVar5;
  undefined4 * puVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  (*(uint *)(gen_frame + 0x17c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x180);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)(this + 0x60))) {
  case 1: ;
  case 3: ;
  case 4: ;
    uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    F_0054fa20(((undefined1 *)(gen_frame + 0xb0)),uVar4);
    (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1090708);
    pfVar5 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x80)) = *pfVar5;
    (*(float *)(gen_frame + 0xf0)) = *pfVar5;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x84)) = pfVar5[1];
    (*(float *)(gen_frame + 0x88)) = pfVar5[2];
    (*(float *)(gen_frame + 0xf4)) = pfVar5[1];
    (*(float *)(gen_frame + 0xf8)) = pfVar5[2];
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1090708);
    pfVar5 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0xb0)));
    ((float *)(gen_frame + 0x100))[0] = *pfVar5;
    ((float *)(gen_frame + 0x100))[1] = pfVar5[1];
    ((float *)(gen_frame + 0x100))[2] = pfVar5[2];
    (*(undefined4 *)(gen_frame + 0x70)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x74)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x78)) = REFG(float, 0x1090708);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x70)),((undefined1 *)(gen_frame + 0xb0)));
    ((float *)(gen_frame + 0x100))[4] = gen_bits2f(*puVar6);
    (*(undefined4 *)(gen_frame + 0x50)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    ((float *)(gen_frame + 0x100))[5] = gen_bits2f(puVar6[1]);
    (*(undefined4 *)(gen_frame + 0x118)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x58)) = REFG(float, 0x1090708);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x120)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x124)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x128)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1087f04);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x10)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x130)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x134)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x138)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x140)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x60)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0x144)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x148)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x64)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x68)) = REFG(float, 0x1087f04);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0xb0)));
    (*(undefined4 *)(gen_frame + 0x150)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x154)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x158)) = puVar6[2];
    (*(undefined4 *)(gen_frame + 0x40)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(undefined4 *)(gen_frame + 0x48)) = REFG(float, 0x1087f04);
    puVar6 = (undefined4 *)F_004ee970(&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x40)),((undefined1 *)(gen_frame + 0xb0)));
    fVar14 = (*(float *)(gen_frame + 0x88));
    fVar13 = (*(float *)(gen_frame + 0x84));
    fVar12 = (*(float *)(gen_frame + 0x80));
    (*(undefined4 *)(gen_frame + 0x160)) = *puVar6;
    (*(undefined4 *)(gen_frame + 0x164)) = puVar6[1];
    (*(undefined4 *)(gen_frame + 0x168)) = puVar6[2];
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x80));
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x84));
    (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x88));
    pfVar5 = ((float *)(gen_frame + 0x100)) + 2;
    iVar7 = 7;
    fVar15 = fVar14;
    fVar16 = fVar13;
    fVar17 = fVar12;
    do {
      fVar1 = pfVar5[-2];
      (*(float *)(gen_frame + 0xa8)) = fVar1;
      if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x80))) {
        (*(float *)(gen_frame + 0x80)) = fVar1;
        fVar12 = fVar1;
      }
      fVar2 = pfVar5[-1];
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar2)));
      if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x84))) {
        (*(float *)(gen_frame + 0x84)) = fVar2;
        fVar13 = fVar2;
      }
      fVar3 = *pfVar5;
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar3)));
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x88))) {
        (*(float *)(gen_frame + 0x88)) = fVar3;
        fVar14 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x90)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x90)) = fVar1;
        fVar17 = fVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0x94)) < (float10)fVar2) {
        (*(float *)(gen_frame + 0x94)) = fVar2;
        fVar16 = fVar2;
      }
      if ((float10)(*(float *)(gen_frame + 0x98)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x98)) = fVar3;
        fVar15 = fVar3;
      }
      pfVar5 = pfVar5 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    *param_1 = fVar12;
    param_1[1] = fVar13;
    param_1[2] = fVar14;
    param_1[4] = fVar17;
    param_1[5] = fVar16;
    param_1[6] = fVar15;
    break;
  case 2: ;
    pfVar5 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar5;
    pfVar5 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this)));
    fVar12 = *(*(float * PTR32 *)(gen_frame + 0xac));
    (*(float *)(gen_frame + 0xa8)) = fVar12;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(*pfVar5)));
    fVar8 = (float10)*pfVar5;
    fVar9 = (float10)fVar12;
    fVar12 = (float)(fVar8 - fVar9);
    (*(float *)(gen_frame + 0x90)) = fVar12;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar5[1])));
    fVar10 = (float10)pfVar5[1];
    fVar13 = (float)(fVar10 - fVar9);
    (*(float *)(gen_frame + 0x94)) = fVar13;
    fVar14 = pfVar5[2];
    *param_1 = fVar12;
    (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar14)));
    fVar11 = (float10)fVar14;
    param_1[1] = fVar13;
    fVar12 = (float)(fVar11 - fVar9);
    (*(float *)(gen_frame + 0x98)) = fVar12;
    param_1[2] = fVar12;
    fVar12 = (float)(fVar9 + fVar8);
    (*(float *)(gen_frame + 0x80)) = fVar12;
    fVar13 = (float)(fVar10 + fVar9);
    (*(float *)(gen_frame + 0x84)) = fVar13;
    fVar14 = (float)(fVar9 + fVar11);
    (*(float *)(gen_frame + 0x88)) = fVar14;
    param_1[4] = fVar12;
    param_1[5] = fVar13;
    param_1[6] = fVar14;
  }
  F_00c47745((*(uint *)(gen_frame + 0x17c)) ^ (uint)(uint)(gen_frame + 0x180));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf67 */
uint F_005e5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  fVar1 = (float10)0;
  ((float *)(gen_frame + 0x10))[0] = pfVar2[8];
  ((float *)(gen_frame + 0x10))[1] = 0.0;
  ((float *)(gen_frame + 0x10))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x24)) = pfVar2[9];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(float *)(gen_frame + 0x38)) = pfVar2[10];
  F_004efe70(((float *)(gen_frame + 0x10)),(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = (float *)F_005fe770(((float *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_005e59a0 */
uint F_005e59a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e59a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined3 extraout_var_00 = 0;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  uVar2 = *(int *)((int)this + 0x60) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
  case 3: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10c))(this,((undefined1 *)(gen_frame + 0x90)));
    bVar1 = F_005ff410(param_1,uVar2);
    uVar2 = CONCAT31(extraout_var,bVar1);
    break;
  case 1: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x0)));
    uVar2 = F_005ff5c0(param_1,uVar2);
    break;
  case 2: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    F_00607160(((undefined1 *)(gen_frame + 0x10)),uVar2);
    (*(undefined4 *)(gen_frame + 0x30)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x34)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x1302c68);
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    (*(undefined4 *)(gen_frame + 0x74)) = puVar3[1];
    (*(undefined4 *)(gen_frame + 0x70)) = 0;
    (*(undefined4 *)(gen_frame + 0x78)) = 0;
    (*(undefined4 *)(gen_frame + 0x80)) = 0;
    (*(uint *)(gen_frame + 0x84)) = puVar3[1] ^ REFG(uint, 0x10920d0);
    (*(undefined4 *)(gen_frame + 0x88)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = *puVar3;
    F_0054fa20(((undefined1 *)(gen_frame + 0x120)),((undefined1 *)(gen_frame + 0x10)));
    F_004ee670(&(*(undefined4 *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x70)),(uint)((undefined1 *)(gen_frame + 0x120)));
    F_0054fa20(((undefined1 *)(gen_frame + 0xe0)),((undefined1 *)(gen_frame + 0x10)));
    F_004ee670(&(*(undefined4 *)(gen_frame + 0x80)),(uint)&(*(undefined4 *)(gen_frame + 0x80)),(uint)((undefined1 *)(gen_frame + 0xe0)));
    (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x70));
    (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x74));
    (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x78));
    (*(undefined4 *)(gen_frame + 0x4c)) = (*(undefined4 *)(gen_frame + 0x6c));
    (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x80));
    (*(uint *)(gen_frame + 0x54)) = (*(uint *)(gen_frame + 0x84));
    (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x88));
    bVar1 = F_005ff690(param_1,&(*(undefined4 *)(gen_frame + 0x40)));
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    break;
  default: ;
    uVar2 = uVar2 & 0xffffff00;
  }
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf67 */
uint F_005e5bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e5bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
  fVar1 = (float10)0;
  ((float *)(gen_frame + 0x10))[0] = pfVar2[8];
  ((float *)(gen_frame + 0x10))[1] = 0.0;
  ((float *)(gen_frame + 0x10))[2] = 0.0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(float *)(gen_frame + 0x24)) = pfVar2[9];
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(float *)(gen_frame + 0x40)) = (float)fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)fVar1;
  (*(float *)(gen_frame + 0x48)) = (float)fVar1;
  (*(float *)(gen_frame + 0x38)) = pfVar2[10];
  F_004efe70(((float *)(gen_frame + 0x10)),(uint)(pfVar2 + 4));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*pfVar2 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar2[1] + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar2[2] + (float10)(*(float *)(gen_frame + 0x48)));
  pfVar2 = (float *)F_005fe770(((float *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)(param_1 + 0x40) = (float)((float10)*pfVar2 * (float10)REFG(float, 0x1302c60));
  *(float *)(param_1 + 0x44) = (float)((float10)pfVar2[1] * (float10)REFG(float, 0x1302c64));
  *(float *)(param_1 + 0x48) = (float)((float10)pfVar2[2] * (float10)REFG(float, 0x1302c68));
  F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
  F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
  F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
  *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
  *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
  *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf67 */
uint F_005e8430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e8430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 * puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  switch((unsigned int)(uintptr_t)(this[0x90])) {
  case (undefined1)0x3: ;
  case (undefined1)0x4: ;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this)));
    if (((byte)this[0x94] & 2) == 0) {
      uVar3 = puVar1[2];
    }
    else {
      uVar3 = *puVar1;
    }
    (*(undefined4 *)(gen_frame + 0x5c)) = uVar3;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    F_00607160(((undefined1 *)(gen_frame + 0x20)),uVar2);
    (*(undefined4 *)(gen_frame + 0x40)) = (*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x44)) = (*(undefined4 *)(gen_frame + 0x5c));
    (*(undefined4 *)(gen_frame + 0x48)) = (*(undefined4 *)(gen_frame + 0x5c));
    F_0054fa20(((undefined1 *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x20)));
    F_005fed50(param_1,((undefined1 *)(gen_frame + 0x60)),&REFG(float, 0x1302c60));
    break;
  case (undefined1)0x5: ;
  case (undefined1)0x6: ;
  case (undefined1)0x7: ;
  case (undefined1)0x8: ;
  case (undefined1)0x9: ;
  case (undefined1)0xb: ;
  case (undefined1)0xc: ;
  case (undefined1)0xd: ;
  case (undefined1)0xe: ;
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x108))(this,((undefined1 *)(gen_frame + 0x0)));
    F_005fede0(param_1,&REFG(float, 0x1302d00),uVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)param_1;
}

/* ref: FUN_005e8540 */
unsigned int F_005e8540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e8540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  float fVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  
  switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + 0x90))) {
  case 3: ;
    iVar8 = *(int *)((int)this + 0x88);
    F_006001e0((undefined *)((int)this + 0x40),param_1);
    uVar1 = *(undefined4 *)(iVar8 + 0x38);
    uVar2 = *(undefined4 *)(iVar8 + 0x34);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x30);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    break;
  case 4: ;
    iVar8 = *(int *)((int)this + 0x88);
    F_006001e0((undefined *)((int)this + 0x40),param_1);
    uVar1 = *(undefined4 *)(iVar8 + 0x50);
    uVar2 = *(undefined4 *)(iVar8 + 0x4c);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x48);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    break;
  case 5: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x98)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x10)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x9c)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x48);
    uVar2 = *(undefined4 *)(iVar8 + 0x44);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x40);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x9c)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x98)));
        (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x9c)) + 1;
        (*(int *)(gen_frame + 0x9c)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 6: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x0)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x128);
    uVar2 = *(undefined4 *)(iVar8 + 0x124);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x120);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 7: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x50)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x68);
    uVar2 = *(undefined4 *)(iVar8 + 100);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x60);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 8: ;
    (*(int *)(gen_frame + 0x9c)) = *(int *)((int)this + 0x88);
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x30)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302c60);
    *(undefined4 *)((int)this + 100) = REFG(float, 0x1302c64);
    *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302c68);
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 9: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x60)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    fVar9 = REFG(float, 0x1087f04);
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x60);
    *(float *)((int)this + 0x60) = fVar9;
    *(undefined4 *)((int)this + 100) = uVar1;
    *(float *)((int)this + 0x68) = fVar9;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xb: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x98)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x40)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    fVar4 = REFG(float, 0x1087f04);
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    fVar9 = *(float *)(iVar8 + 0x134);
    if ((GEN_ISNAN(fVar9) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
        ((GEN_ISNAN(fVar9) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar9 == *(float *)&REFG(undefined, 0x1088114))) {
      fVar9 = fVar4;
    }
    uVar1 = *(undefined4 *)(iVar8 + 0x120);
    *(float *)((int)this + 0x60) = fVar4;
    *(undefined4 *)((int)this + 100) = uVar1;
    *(float *)((int)this + 0x68) = fVar9;
    iVar6 = 0;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + iVar6 * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x98)));
        (*(int *)(gen_frame + 0x98)) = (*(int *)(gen_frame + 0x98)) + 0x10;
        iVar6 = iVar6 + 1;
      } while (iVar6 < (*(int *)(gen_frame + 0x9c)));
    }
    break;
  case 0xc: ;
    (*(int *)(gen_frame + 0x9c)) = *(int *)((int)this + 0x88);
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x20)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302c60);
    *(undefined4 *)((int)this + 100) = REFG(float, 0x1302c64);
    *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302c68);
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xd: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x80)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x48);
    uVar2 = *(undefined4 *)(iVar8 + 0x44);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x40);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x20;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
    break;
  case 0xe: ;
    iVar8 = *(int *)((int)this + 0x88);
    (*(int *)(gen_frame + 0x9c)) = iVar8;
    puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x70)))));
    *(undefined4 *)((int)this + 0x40) = *puVar5;
    (*(int *)(gen_frame + 0x98)) = 0;
    *(undefined4 *)((int)this + 0x44) = puVar5[1];
    *(undefined4 *)((int)this + 0x48) = puVar5[2];
    *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302cf0);
    *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302cf4);
    *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302cf8);
    *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302cfc);
    uVar1 = *(undefined4 *)(iVar8 + 0x28);
    uVar2 = *(undefined4 *)(iVar8 + 0x24);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(iVar8 + 0x20);
    *(undefined4 *)((int)this + 100) = uVar1;
    *(undefined4 *)((int)this + 0x68) = uVar2;
    iVar8 = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    if (0 < iVar8) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x60;
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x98)) * 4))) + 0x10)));
        ((code *)*(gen_code32 *)(*piVar3 + 0xe8))(piVar3,(*(int *)(gen_frame + 0x9c)));
        (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 0x10;
        iVar6 = (*(int *)(gen_frame + 0x98)) + 1;
        (*(int *)(gen_frame + 0x98)) = iVar6;
      } while (iVar6 < iVar8);
    }
  }
  uVar7 = ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,((undefined1 *)(gen_frame + 0x80)));
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(uVar7 + 0xc);
  F_005e0b90(this);
  return 0;
}

/* ref: FUN_005e8d40 */
unsigned int F_005e8d40(unsigned int gen_a0)
{
  GEN_ENTER(0x5e8d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  float fVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  undefined4 * puVar9;
  
  iVar8 = *(int *)((int)this + 0x88);
  (*(int *)(gen_frame + 0x6c)) = iVar8;
  if (iVar8 == 0) {
    return 0;
  }
  uVar5 = *(uint *)((int)this + 0x90) & 0xfffffdff;
  *(uint *)((int)this + 0x90) = uVar5 | 0x100;
  switch((unsigned int)(uintptr_t)((char)uVar5)) {
  case '\x03': ;
    uVar1 = *(undefined4 *)((int)this + 0x44);
    uVar2 = *(undefined4 *)((int)this + 0x48);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)((int)this + 0x40);
    *(undefined4 *)(iVar8 + 0x24) = uVar1;
    uVar1 = REFG(float, 0x1087f04);
    *(undefined4 *)(iVar8 + 0x28) = uVar2;
    *(undefined4 *)(iVar8 + 0x2c) = uVar1;
    *(undefined4 *)(iVar8 + 0x30) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x38) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x34) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\x04': ;
    uVar1 = *(undefined4 *)((int)this + 0x44);
    uVar2 = *(undefined4 *)((int)this + 0x48);
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)((int)this + 0x40);
    fVar4 = REFG(float, 0x109ca64);
    *(undefined4 *)(iVar8 + 0x24) = uVar1;
    uVar1 = REFG(float, 0x1087f04);
    *(undefined4 *)(iVar8 + 0x28) = uVar2;
    *(undefined4 *)(iVar8 + 0x2c) = uVar1;
    (*(undefined4 *)(gen_frame + 0x50)) = *(undefined4 *)((int)this + 0x50);
    (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)this + 0x5c);
    (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)((int)this + 0x54);
    (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)this + 0x58);
    F_0054d030(&(*(undefined4 *)(gen_frame + 0x50)),fVar4);
    F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x50)));
    *(undefined4 *)(iVar8 + 0x34) = (*(undefined4 *)(gen_frame + 0x34));
    uVar1 = REFG(float, 0x1087f04);
    *(undefined4 *)(iVar8 + 0x30) = (*(undefined4 *)(gen_frame + 0x30));
    *(undefined4 *)(iVar8 + 0x38) = (*(undefined4 *)(gen_frame + 0x38));
    *(undefined4 *)(iVar8 + 0x3c) = uVar1;
    *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x4c) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\x05': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    goto LAB_005e96d9;
  case '\x06': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *(undefined4 *)(iVar8 + 0x120) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x128) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x124) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\a': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 100) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\b': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar8 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar8;
      } while (iVar8 < (*(int *)(gen_frame + 0x64)));
    }
    break;
  case '\t': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)((int)this + 100);
    break;
  case '\v': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *(undefined4 *)(iVar8 + 0x120) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x134) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\f': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar8 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar8;
      } while (iVar8 < (*(int *)(gen_frame + 0x64)));
    }
    break;
  case '\r': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x28);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
LAB_005e96d9: ;
    *(undefined4 *)(iVar8 + 0x40) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x48) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x44) = *(undefined4 *)((int)this + 0x68);
    break;
  case '\x0e': ;
    (*(int *)(gen_frame + 0x64)) = *(int *)((int)this + 0xa4) - *(int *)((int)this + 0xa0) >> 2;
    F_00607160(((undefined1 *)(gen_frame + 0x0)),(int)this + 0x40);
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302c68);
    if ((*(byte *)((int)this + 0x94) & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302cf0);
      (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302cf4);
      (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302cf8);
      (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302cfc);
    }
    F_005dada0((undefined *)((int)this + 0x98),((undefined1 *)(gen_frame + 0x0)));
    (*(int *)(gen_frame + 0x68)) = 0;
    if (0 < (*(int *)(gen_frame + 0x64))) {
      puVar9 = (undefined4 *)(iVar8 + 0x68);
      do {
        piVar3 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa0) + (*(int *)(gen_frame + 0x68)) * 4))) + 0x10)));
        puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3)));
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        puVar9[-2] = *puVar6;
        puVar9[-1] = uVar1;
        uVar1 = REFG(float, 0x1087f04);
        iVar7 = (*(int *)(gen_frame + 0x68)) + 1;
        *puVar9 = uVar2;
        puVar9[1] = uVar1;
        puVar9 = puVar9 + 4;
        (*(int *)(gen_frame + 0x68)) = iVar7;
        iVar8 = (*(int *)(gen_frame + 0x6c));
      } while (iVar7 < (*(int *)(gen_frame + 0x64)));
    }
    *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)((int)this + 0x60);
    *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)((int)this + 100);
    *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)((int)this + 0x68);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x34);
  if ((piVar3 != (int *)0x0) && (*(int *)((int)this + 0x88) != 0)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x48))
              (piVar3,*(int *)((int)this + 0x88),(int)*(short *)((int)this + 0x8c));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,&(*(undefined4 *)(gen_frame + 0x40)));
  *(undefined4 *)((int)this + 0x84) = (*(undefined4 *)(gen_frame + 0x4c));
  if ((*(byte *)((int)this + 0x94) & 1) != 0) {
    *(undefined4 *)((int)this + 0x40) = (*(undefined4 *)(gen_frame + 0x40));
    *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)(gen_frame + 0x44));
    *(undefined4 *)((int)this + 0x48) = (*(undefined4 *)(gen_frame + 0x48));
    F_005e0b90(this);
  }
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffcff;
  return 0;
}

/* ref: FUN_005e97a0 */
unsigned int F_005e97a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e97a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  if ((*(byte *)((int)this + 0x94) & 1) == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x88) == 0) {
    return 0;
  }
  uVar4 = *(uint *)((int)this + 0x90) & 0xfffffeff;
  *(uint *)((int)this + 0x90) = uVar4 | 0x200;
  switch((unsigned int)(uintptr_t)((char)uVar4)) {
  case '\x05': ;
  case '\x06': ;
  case '\a': ;
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
  case '\r': ;
    iVar5 = param_1 + 2;
    break;
  default: ;
    goto switchD_005e97fb_caseD_a;
  case '\x0e': ;
    iVar5 = param_1 + 6;
  }
  puVar6 = ((undefined4 *)GEN_TOP((iVar5 * 0x10 + *(int *)((int)this + 0x88))));
  uVar2 = *param_2;
  uVar1 = param_2[2];
  puVar6[1] = param_2[1];
  puVar6[3] = GEN_FLT_TO(puVar6[3], REFG(float, 0x1087f04));
  puVar6[2] = uVar1;
  *puVar6 = uVar2;
switchD_005e97fb_caseD_a: ;
  piVar3 = *(int * PTR32 *)((int)this + 0x34);
  if ((piVar3 != (int *)0x0) && (*(int *)((int)this + 0x88) != 0)) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x48))
              (piVar3,*(int *)((int)this + 0x88),(int)*(short *)((int)this + 0x8c));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x104))(this,&(*(undefined4 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x40) = (*(undefined4 *)(gen_frame + 0x0));
  *(undefined4 *)((int)this + 0x44) = (*(undefined4 *)(gen_frame + 0x4));
  *(undefined4 *)((int)this + 0x48) = (*(undefined4 *)(gen_frame + 0x8));
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(undefined4 *)((int)this + 0x40));
  F_005e0b90(this);
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffcff;
  return 0;
}

/* ref: FUN_005e98e0 */
uint F_005e98e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e98e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint in_EAX = 0;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) & 0xfb;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,param_1);
    *(undefined4 *)((int)this + 0x34) = 0;
    in_EAX = F_005e1000(this);
  }
  return in_EAX;
}

/* ref: FUN_005e9920 */
uint F_005e9920(unsigned int gen_a0)
{
  GEN_ENTER(0x5e9920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 == (int *)0x0) {
    if ((*(byte *)((int)this + 0x94) & 0x10) == 0) goto LAB_005e9958;
    *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) & 0xef;
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  F_005e1000(this);
LAB_005e9958: ;
  uVar2 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x3c),0,0);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::SoundPointLayoutInstance::vf58 */
unsigned int F_005e9980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  if ((*((uint *)GEN_TOP((*(int *)(this + 0x70) + 0x90))) & 0x300) == 0) {
    uVar1 = F_00a1b490(this + 0x10);
    F_005e97a0(*(undefined * PTR32 *)(this + 0x70),uVar1,param_1);
  }
  return 0;
}

/* ref: FUN_005e99d0 */
uint F_005e99d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5e99d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *(int *)(REFG(int, 0x1371298) + 0x30) * 4)));
  *param_1 = *(undefined4 *)(iVar1 + 0x30);
  param_1[1] = *(undefined4 *)(iVar1 + 0x34);
  param_1[2] = *(undefined4 *)(iVar1 + 0x38);
  uVar2 = F_00a1c7d0(param_1,0,0,0);
  return uVar2;
}

/* ref: FUN_005e9a10 */
unsigned int F_005e9a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e9a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  short sVar7;
  
  iVar5 = 0;
  uVar4 = 0;
  do {
    if ((uint)(byte)param_1 == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar4)) {
      puVar6 = &REFG(undefined4, 0x10a2810) + iVar5 * 10;
      goto LAB_005e9a3e;
    }
    uVar4 = uVar4 + 0x28;
    iVar5 = iVar5 + 1;
  } while (uVar4 < 0x208);
  puVar6 = &REFG(undefined4, 0x10a2810);
LAB_005e9a3e: ;
  *(byte *)((int)this + 0x10) = (byte)param_1;
  uVar1 = puVar6[5];
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x2c) = puVar6[7];
  *(undefined4 *)((int)this + 0x30) = puVar6[9];
  *(undefined4 *)((int)this + 0x20) = puVar6[3];
  *(undefined4 *)((int)this + 0x18) = puVar6[2];
  fVar2 = *(float *)(REFG(int, 0x1379cb0) + 0x4c + (uint)(byte)param_1 * 4);
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar2) {
    *(float *)((int)this + 0x24) = fVar2;
  }
  sVar7 = 0;
  *(float *)((int)this + 0x40) = *param_2;
  *(float *)((int)this + 0x44) = param_2[1];
  *(float *)((int)this + 0x48) = param_2[2];
  *(float *)((int)this + 0x50) = *param_2;
  *(float *)((int)this + 0x54) = param_2[1];
  *(float *)((int)this + 0x58) = param_2[2];
  *(undefined1 *)((int)this + 0x12) = 1;
  uVar4 = puVar6[1];
  *(undefined4 *)((int)this + 0x60) = 0;
  *(short *)((int)this + 100) = (short)uVar4;
  *(undefined2 *)((int)this + 0x66) = 0;
  if (1 < uVar4) {
    do {
      uVar4 = uVar4 >> 1;
      sVar7 = sVar7 + 1;
    } while (1 < uVar4);
    *(short *)((int)this + 0x66) = sVar7;
  }
  fVar2 = param_2[2];
  bVar3 = (byte)*(undefined2 *)((int)this + 0x66);
  *(short *)((int)this + 0x60) = (short)(int)*param_2 >> (bVar3 & 0x1f);
  *(short *)((int)this + 0x62) = (short)(int)fVar2 >> (bVar3 & 0x1f);
  return 0;
}

/* ref: FUN_005e9bb0 */
byte F_005e9bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9bb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  undefined4 * puVar2;
  byte * _Str1;
  int iVar3;
  byte * pbVar4;
  byte * pbVar5;
  bool bVar6;
  
  _Str1 = (*(byte * PTR32 *)&gen_args[1]);
  if ((((*(byte * PTR32 *)&gen_args[1]) == (byte *)0x0) || (*(*(byte * PTR32 *)&gen_args[1]) == 0)) ||
     ((iVar3 = F_00c4b813((char *)(*(byte * PTR32 *)&gen_args[1]),"bg/",3), iVar3 != 0 &&
      (iVar3 = F_00c4b813((char *)_Str1,"bgcommon/",9), iVar3 != 0)))) {
    return 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c)));
  (*(byte * PTR32 *)&gen_args[1]) = (byte *)*puVar2;
  do {
    if ((*(byte * PTR32 *)&gen_args[1]) == (byte *)puVar2) {
      return 1;
    }
    pbVar4 = ((byte *)GEN_TOP((*((int *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[1]) + 0xc))) + 0x3c)));
    pbVar5 = _Str1;
    if (0xf < *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[1]) + 0xc))) + 0x50)))) {
      pbVar4 = *(byte * PTR32 *)pbVar4;
    }
    do {
      bVar1 = *pbVar5;
      bVar6 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_005e9c34: ;
        iVar3 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_005e9c39;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar6 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_005e9c34;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_005e9c39: ;
    if (iVar3 == 0) {
      return 0;
    }
    F_0060a620(&(*(byte * PTR32 *)&gen_args[1]));
  } while( true );
}

/* ref: FUN_005e9d30 */
byte F_005e9d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_8;
  
  uVar6 = 0;
  if (*(int *)((int)this + 0x1ac) != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    uVar2 = *(uint *)(param_1 + 0x18);
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0xa0)));
    uVar4 = *(uint *)(iVar3 + 8);
    if (uVar4 != 0) {
      local_8 = 0;
      do {
        iVar7 = *(int *)(iVar3 + 4) + local_8;
        if ((iVar1 == *(int *)(iVar7 + iVar3)) &&
           (uVar5 = F_00a1b6b0(iVar7 + 4 + iVar3), uVar2 == uVar5)) {
          if (*(int *)(param_1 + 0x30) != 0) {
            F_0060b6a0(*(int *)(param_1 + 0x30),*(float *)(iVar7 + 8 + iVar3));
          }
          return 1;
        }
        local_8 = local_8 + 0xc;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  return 0;
}

/* ref: FUN_005e9dc0 */
uint F_005e9dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e9dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005e1540(param_1,0,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005e9de0 */
uint F_005e9de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5e9de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005e1540(0,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_005e9e00 */
byte F_005e9e00(unsigned int gen_a0)
{
  GEN_ENTER(0x5e9e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
  puVar4 = (undefined4 *)*puVar3;
  do {
    if (puVar4 == puVar3) {
      return 1;
    }
    if (*(int *)(puVar4[3] + 8) == 0x6d646c) {
      piVar7 = (int *)(puVar4[3] + 0x88);
      LOCK();
      iVar1 = *piVar7;
      *piVar7 = *piVar7;
      UNLOCK();
      if (iVar1 != 2) {
        return 0;
      }
    }
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar5 + 0x15);
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x15);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar4[1] + 0x15);
        puVar6 = (undefined4 *)puVar4[1];
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
          cVar2 = *(char *)((int)puVar4[1] + 0x15);
          puVar6 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005e9e80 */
byte F_005e9e80(unsigned int gen_a0)
{
  GEN_ENTER(0x5e9e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  byte in_AL = 0;
  byte bVar6;
  undefined4 * puVar8;
  undefined4 * puVar7;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
  puVar8 = (undefined4 *)*puVar3;
  while (puVar8 != puVar3) {
    this_00 = (undefined *)puVar8[3];
    piVar1 = (int *)((int)this_00 + 0x88);
    LOCK();
    puVar7 = (undefined4 *)*piVar1;
    *piVar1 = *piVar1;
    UNLOCK();
    if (puVar7 != (undefined4 *)0x2) {
      bVar6 = F_0050c3d0(this_00);
      puVar7 = (undefined4 *)(uint)bVar6;
    }
    if (*(char *)((int)puVar8 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar8[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar4 + 0x15);
        puVar7 = (undefined4 *)*puVar4;
        while (puVar8 = puVar4, cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar7 + 0x15);
          puVar4 = puVar7;
          puVar7 = (undefined4 *)*puVar7;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar8[1] + 0x15);
        puVar5 = (undefined4 *)puVar8[1];
        puVar4 = puVar8;
        while ((puVar7 = puVar5, puVar8 = puVar7, cVar2 == '\0' &&
               (puVar4 == (undefined4 *)puVar7[2]))) {
          cVar2 = *(char *)((int)puVar7[1] + 0x15);
          puVar5 = (undefined4 *)puVar7[1];
          puVar4 = puVar7;
        }
      }
    }
    in_AL = (byte)puVar7;
  }
  *(undefined4 *)((int)this + 8) = 2;
  return in_AL;
}

/* ref: FUN_005e9f00 */
byte F_005e9f00(unsigned int gen_a0)
{
  GEN_ENTER(0x5e9f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int * piVar7;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
  puVar4 = (undefined4 *)*puVar3;
  while( true ) {
    if (puVar4 == puVar3) {
      return 1;
    }
    piVar7 = (int *)(puVar4[3] + 0x88);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7;
    UNLOCK();
    if (iVar1 != 2) break;
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar5 + 0x15);
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x15);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar4[1] + 0x15);
        puVar6 = (undefined4 *)puVar4[1];
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
          cVar2 = *(char *)((int)puVar4[1] + 0x15);
          puVar6 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf48 */
uint F_005e9f90(unsigned int gen_a0)
{
  GEN_ENTER(0x5e9f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint in_EAX = 0;
  uint uVar1;
  
  if (((byte)this[0x2b] & 8) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
    in_EAX = 0;
    if (uVar1 != 0) {
      return *(byte *)(uVar1 + 100) & 1;
    }
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf56 */
uint F_005e9fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ ((char)param_1 * '\b' ^ (byte)this[0x2b]) & 8);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 100) = (char)param_1 != '\0' | *(byte *)(uVar1 + 100) & 0xfe;
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf66 */
uint F_005e9ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5e9ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  int * piVar5;
  float * pfVar6;
  undefined4 * puVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x60))(this)));
  if ((piVar5 == (int *)0x0) || (*(char *)((int)piVar5 + 0x65) != '\x03')) {
    pfVar6 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
    fVar4 = (float10)0;
    ((float *)(gen_frame + 0x40))[0] = pfVar6[8];
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(float *)(gen_frame + 0x54)) = pfVar6[9];
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(float *)(gen_frame + 0x70)) = (float)fVar4;
    (*(float *)(gen_frame + 0x74)) = (float)fVar4;
    (*(float *)(gen_frame + 0x78)) = (float)fVar4;
    (*(float *)(gen_frame + 0x68)) = pfVar6[10];
    F_004efe70(((float *)(gen_frame + 0x40)),(uint)(pfVar6 + 4));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)*pfVar6 + (float10)(*(float *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)pfVar6[1] + (float10)(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x78)) = (float)((float10)pfVar6[2] + (float10)(*(float *)(gen_frame + 0x78)));
    pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x10)) = *pfVar6;
    (*(float *)(gen_frame + 0x80)) = *pfVar6;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x14)) = pfVar6[1];
    (*(float *)(gen_frame + 0x18)) = pfVar6[2];
    (*(float *)(gen_frame + 0x84)) = pfVar6[1];
    (*(float *)(gen_frame + 0x88)) = pfVar6[2];
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    pfVar6 = (float *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    ((float *)(gen_frame + 0x90))[0] = *pfVar6;
    ((float *)(gen_frame + 0x90))[1] = pfVar6[1];
    ((float *)(gen_frame + 0x90))[2] = pfVar6[2];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    ((float *)(gen_frame + 0x90))[4] = gen_bits2f(*puVar7);
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    ((float *)(gen_frame + 0x90))[5] = gen_bits2f(puVar7[1]);
    (*(undefined4 *)(gen_frame + 0xa8)) = puVar7[2];
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1090708);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0xb0)) = *puVar7;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0xb4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0xb8)) = puVar7[2];
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0xc0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0xc4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0xc8)) = puVar7[2];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090708);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0xd0)) = *puVar7;
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1090708);
    (*(undefined4 *)(gen_frame + 0xd4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0xd8)) = puVar7[2];
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0xe0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0xe4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0xe8)) = puVar7[2];
    (*(float *)(gen_frame + 0x30)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x38)) = REFG(float, 0x1087f04);
    puVar7 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),((float *)(gen_frame + 0x40)));
    fVar11 = (*(float *)(gen_frame + 0x18));
    fVar10 = (*(float *)(gen_frame + 0x14));
    fVar9 = (*(float *)(gen_frame + 0x10));
    (*(undefined4 *)(gen_frame + 0xf0)) = *puVar7;
    (*(undefined4 *)(gen_frame + 0xf4)) = puVar7[1];
    (*(undefined4 *)(gen_frame + 0xf8)) = puVar7[2];
    (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x18));
    pfVar6 = ((float *)(gen_frame + 0x90)) + 2;
    iVar8 = 7;
    fVar12 = fVar11;
    fVar13 = fVar10;
    fVar14 = fVar9;
    do {
      fVar1 = pfVar6[-2];
      (*(float *)(gen_frame + 0x28)) = fVar1;
      if ((float10)fVar1 < (float10)(*(float *)(gen_frame + 0x10))) {
        (*(float *)(gen_frame + 0x10)) = fVar1;
        fVar9 = fVar1;
      }
      fVar2 = pfVar6[-1];
      (*(float *)(gen_frame + 0x2c)) = fVar2;
      if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x14))) {
        (*(float *)(gen_frame + 0x14)) = fVar2;
        fVar10 = fVar2;
      }
      fVar3 = *pfVar6;
      (*(float *)(gen_frame + 0x2c)) = fVar3;
      if ((float10)fVar3 < (float10)(*(float *)(gen_frame + 0x18))) {
        (*(float *)(gen_frame + 0x18)) = fVar3;
        fVar11 = fVar3;
      }
      if ((float10)(*(float *)(gen_frame + 0x30)) < (float10)fVar1) {
        (*(float *)(gen_frame + 0x30)) = fVar1;
        fVar14 = fVar1;
      }
      if ((float10)(*(float *)(gen_frame + 0x34)) < (float10)fVar2) {
        (*(float *)(gen_frame + 0x34)) = fVar2;
        fVar13 = fVar2;
      }
      if ((float10)(*(float *)(gen_frame + 0x38)) < (float10)fVar3) {
        (*(float *)(gen_frame + 0x38)) = fVar3;
        fVar12 = fVar3;
      }
      pfVar6 = pfVar6 + 4;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *param_1 = fVar9;
    param_1[1] = fVar10;
    param_1[2] = fVar11;
    param_1[4] = fVar14;
    param_1[5] = fVar13;
    param_1[6] = fVar12;
  }
  else {
    ((code *)*(gen_code32 *)(*piVar5 + 0x30))(piVar5,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf67 */
uint F_005ea570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ea570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  int * piVar2;
  float * pfVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x60))(this)));
  if ((piVar2 == (int *)0x0) || (*(char *)((int)piVar2 + 0x65) != '\x03')) {
    pfVar3 = ((float *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x10))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x10)),(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)*pfVar3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x48)));
    pfVar3 = (float *)F_005fe770(((float *)(gen_frame + 0x10)),(uint)((undefined1 *)(gen_frame + 0x0)));
    *(float *)(param_1 + 0x40) = (float)((float10)*pfVar3 * (float10)REFG(float, 0x1302c60));
    *(float *)(param_1 + 0x44) = (float)((float10)pfVar3[1] * (float10)REFG(float, 0x1302c64));
    *(float *)(param_1 + 0x48) = (float)((float10)pfVar3[2] * (float10)REFG(float, 0x1302c68));
    F_005fe2e0(param_1,(uint)((float *)(gen_frame + 0x10)));
    F_005fe2e0(param_1 + 0x10,(uint)&(*(undefined4 *)(gen_frame + 0x20)));
    F_005fe2e0(param_1 + 0x20,(uint)&(*(undefined4 *)(gen_frame + 0x30)));
    *(float *)(param_1 + 0x30) = (*(float *)(gen_frame + 0x40));
    *(float *)(param_1 + 0x34) = (*(float *)(gen_frame + 0x44));
    *(float *)(param_1 + 0x38) = (*(float *)(gen_frame + 0x48));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 0x34))(piVar2,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return param_1;
}

/* ref: FUN_005ea6d0 */
uint F_005ea6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ea6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  char * pcVar7;
  uint uVar8;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = param_1[1];
  *(undefined4 *)((int)this + 0xc) = *param_1;
  *(undefined4 *)((int)this + 0x10) = param_1[2];
  uVar1 = param_1[0xf];
  uVar2 = param_1[0x10];
  uVar3 = param_1[0x11];
  uVar4 = param_1[0xd];
  uVar5 = param_1[0xe];
  *(undefined4 *)((int)this + 0x50) = param_1[0xc];
  *(undefined4 *)((int)this + 0x54) = uVar4;
  *(undefined4 *)((int)this + 0x58) = uVar5;
  *(undefined4 *)((int)this + 0x60) = uVar1;
  *(undefined4 *)((int)this + 100) = uVar2;
  *(undefined4 *)((int)this + 0x68) = uVar3;
  F_00a1e7d0((int)this + 0x20,param_1 + 3);
  F_005da4e0(this,((char *)(gen_frame + 0x8)),0x100);
  pcVar7 = ((char *)(gen_frame + 0x8));
  do {
    cVar6 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar6 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x8)),(int)pcVar7 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar8 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  *(uint *)((int)this + 4) = uVar8;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this;
}

/* ref: FUN_005ea7c0 */
uint F_005ea7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ea7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  *(undefined4 *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)this = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = param_3;
  *(undefined4 *)((int)this + 0x20) = *param_4;
  *(undefined4 *)((int)this + 0x24) = param_4[1];
  *(undefined4 *)((int)this + 0x28) = param_4[2];
  *(undefined4 *)((int)this + 0x30) = param_4[4];
  *(undefined4 *)((int)this + 0x34) = param_4[5];
  *(undefined4 *)((int)this + 0x38) = param_4[6];
  *(undefined4 *)((int)this + 0x3c) = param_4[7];
  *(undefined4 *)((int)this + 0x40) = param_4[8];
  *(undefined4 *)((int)this + 0x44) = param_4[9];
  *(undefined4 *)((int)this + 0x48) = param_4[10];
  *(undefined4 *)((int)this + 0x50) = *param_5;
  *(undefined4 *)((int)this + 0x54) = param_5[1];
  *(undefined4 *)((int)this + 0x58) = param_5[2];
  *(undefined4 *)((int)this + 0x60) = param_5[4];
  *(undefined4 *)((int)this + 100) = param_5[5];
  *(undefined4 *)((int)this + 0x68) = param_5[6];
  F_005da4e0(this,((char *)(gen_frame + 0x8)),0x100);
  pcVar2 = ((char *)(gen_frame + 0x8));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(((undefined1 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  uVar3 = F_00408810(((undefined1 *)(gen_frame + 0x0)));
  F_004087f0(((undefined1 *)(gen_frame + 0x0)));
  *(uint *)((int)this + 4) = uVar3;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return (uint)this;
}

/* ref: FUN_005ea8d0 */
unsigned int F_005ea8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ea8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  char cVar3;
  int * piVar4;
  int iVar5;
  bool bVar6;
  int * piVar7;
  undefined4 * puVar8;
  int * piVar9;
  
  piVar4 = *(int * PTR32 *)((int)this + 0xc);
  piVar9 = (int *)*piVar4;
  bVar6 = true;
  if (piVar9 != piVar4) {
    do {
      iVar5 = *(int *)piVar9[4];
      piVar1 = (int *)(iVar5 + 0x88);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1;
      UNLOCK();
      if (iVar2 == 2) {
        puVar8 = (undefined4 *)(iVar5 + 0x8c);
        LOCK();
        *puVar8 = *puVar8;
        UNLOCK();
      }
      else {
        bVar6 = false;
      }
      if (*(char *)((int)piVar9 + 0x15) == '\0') {
        piVar1 = (int *)piVar9[2];
        if (*(char *)((int)piVar1 + 0x15) == '\0') {
          cVar3 = *(char *)(*piVar1 + 0x15);
          piVar9 = piVar1;
          piVar1 = (int *)*piVar1;
          while (cVar3 == '\0') {
            cVar3 = *(char *)(*piVar1 + 0x15);
            piVar9 = piVar1;
            piVar1 = (int *)*piVar1;
          }
        }
        else {
          cVar3 = *(char *)(piVar9[1] + 0x15);
          piVar7 = (int *)piVar9[1];
          piVar1 = piVar9;
          while ((piVar9 = piVar7, cVar3 == '\0' && (piVar1 == (int *)piVar9[2]))) {
            cVar3 = *(char *)(piVar9[1] + 0x15);
            piVar7 = (int *)piVar9[1];
            piVar1 = piVar9;
          }
        }
      }
    } while (piVar9 != piVar4);
    if (!bVar6) {
      return 0;
    }
  }
  *(undefined1 *)((int)this + 0x18) = 0;
  return 0;
}

/* ref: FUN_005eab20 */
uint F_005eab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (uVar1 != 0) {
    *(byte *)(uVar1 + 100) = (char)param_1 != '\0' | *(byte *)(uVar1 + 100) & 0xfe;
  }
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_00c9f290(*(undefined * PTR32 *)((int)this + 0x14),param_1);
  }
  return uVar1;
}

/* ref: FUN_005eab60 */
uint F_005eab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  uVar1 = F_005e2b50(this,param_2);
  return uVar1;
}

/* ref: FUN_005eab80 */
uint F_005eab80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eab80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  char cVar2;
  ushort uVar3;
  int * piVar4;
  byte bVar5;
  int * piVar6;
  uint uVar7;
  undefined * this;
  uint * puVar8;
  undefined4 * puVar9;
  int * piVar10;
  
  uVar7 = (*(uint *)&gen_args[1]);
  piVar6 = (int *)0x0;
  if (0 < *(char *)((*(int *)&gen_args[0]) + 0xc0)) {
    piVar4 = *(int * PTR32 *)((*(int *)&gen_args[0]) + 0xa0);
    piVar10 = piVar4;
    while ((*piVar10 != *(int *)((*(uint *)&gen_args[1]) + 0x18) ||
           (cVar2 = (char)piVar10[1], *(char *)((*(uint *)&gen_args[1]) + 0x11) != cVar2))) {
      piVar6 = (int *)((int)piVar6 + 1);
      piVar10 = piVar10 + 10;
      if ((int)*(char *)((*(int *)&gen_args[0]) + 0xc0) <= (int)piVar6) {
        return (uint)piVar6;
      }
    }
    if (cVar2 == '\x01') {
      uVar7 = ((code *)*(gen_code32 *)(*(int *)(*(uint *)&gen_args[1]) + 0x5c))((*(uint *)&gen_args[1]));
      if ((char)piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 4] != '\x02') {
        *(byte *)(uVar7 + 0x95) =
             *(byte *)(uVar7 + 0x95) ^
             ((char)piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 4] == '\x01' ^ *(byte *)(uVar7 + 0x95)) & 1;
      }
      cVar2 = *(char *)((int)piVar4 + (int)((int)(uintptr_t)piVar6) * 0x28 + 0x11);
      if (cVar2 != '\x02') {
        *(byte *)(uVar7 + 0x95) =
             *(byte *)(uVar7 + 0x95) ^ ((cVar2 == '\x01') * '\x02' ^ *(byte *)(uVar7 + 0x95)) & 2;
      }
      piVar6 = (int *)F_006a3820(uVar7,(int)gen_bits2f(piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 5]) & 0xffff);
    }
    else {
      if (cVar2 == '\x03') {
        iVar1 = (int)((int)(uintptr_t)piVar6) * 0x28;
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)(*(uint *)&gen_args[1]) + 0x5c))((*(uint *)&gen_args[1]))));
        if ((char)piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 9] != '\0') {
          (*(uint *)&gen_args[1]) = *(int *)((int)this + 0x70) + 8;
          *(ushort *)(*(uint *)&gen_args[1]) =
               (ushort)((char)piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 7] != '\0') |
               *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8))) & 0xfffe;
        }
        if (*(char *)((int)piVar4 + iVar1 + 0x23) != '\0') {
          (*(uint *)&gen_args[1]) = piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 6];
          (*(uint *)(gen_frame + 0x18)) = REFG(float, 0x1094884);
          puVar8 = &(*(uint *)&gen_args[1]);
          if (!(REFG(double, 0x1094800) < ((double)GEN_TOD(gen_bits2f(piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 6]))))) {
            puVar8 = &(*(uint *)(gen_frame + 0x18));
          }
          *((uint *)GEN_TOP((*(int *)((int)this + 0x70) + 0x50))) = *puVar8;
        }
        if (*(char *)((int)piVar4 + iVar1 + 0x22) != '\0') {
          F_00a1e5f0(this,piVar4 + (int)((int)(uintptr_t)piVar6) * 10 + 4);
          puVar9 = (undefined4 *)F_00607800(((undefined *)GEN_TOP((*(int *)((int)this + 0x70) + 0x14))),((undefined1 *)(gen_frame + 0x8)));
          *(undefined4 *)(uVar7 + 0x38) = *puVar9;
          *(undefined4 *)(uVar7 + 0x3c) = puVar9[1];
          *(undefined4 *)(uVar7 + 0x40) = puVar9[2];
          *(undefined4 *)(uVar7 + 0x44) = puVar9[3];
        }
        if (*(char *)((int)piVar4 + iVar1 + 0x25) != '\0') {
          *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8))) =
               (ushort)(*(char *)((int)piVar4 + iVar1 + 0x1d) != '\0') << 3 |
               *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8))) & 0xfff7;
        }
        if (*(char *)((int)piVar4 + iVar1 + 0x26) != '\0') {
          *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8))) =
               (ushort)(*(char *)((int)piVar4 + iVar1 + 0x1e) != '\0') * 4 |
               *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8))) & 0xfffb;
        }
        if (*(char *)((int)piVar4 + iVar1 + 0x27) != '\0') {
          *((short *)GEN_TOP((*(int *)((int)this + 0x70) + 10))) = (short)piVar4[(int)((int)(uintptr_t)piVar6) * 10 + 8];
        }
        uVar3 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x70) + 8)));
        bVar5 = (byte)uVar3;
        if (((bVar5 >> 3 & 1) == 0) && ((bVar5 >> 2 & 1) == 0)) {
          uVar7 = F_0068b3c0(this,(uint)(uVar3 & 0xff00));
          return uVar7;
        }
        uVar7 = F_0068b3c0(this,1);
        return uVar7;
      }
      if ((cVar2 == '\x04') &&
         (iVar1 = (int)((int)(uintptr_t)piVar6) * 10, piVar6 = piVar4 + (int)((int)(uintptr_t)piVar6) * 10 + 2,
         (char)piVar4[iVar1 + 4] != '\0')) {
        uVar7 = F_005d77c0((*(uint *)&gen_args[1]),(uint)*(byte *)((int)piVar6 + 9),
                             (uint)*(byte *)((int)piVar6 + 10),(uint)*(byte *)((int)piVar6 + 0xb),
                             (uint)*(byte *)(piVar6 + 3));
        return uVar7;
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005eae70 */
byte F_005eae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eae70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  byte local_5;
  
  local_5 = 0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 1: ;
    local_5 = 4;
    break;
  case 0x1e: ;
    local_5 = 8;
    break;
  case 0x2d: ;
    local_5 = 2;
    break;
  case 0x2e: ;
    local_5 = 1;
    break;
  case 0x47: ;
    local_5 = 0x10;
  }
  bVar1 = *(byte *)((int)this + 0xc4);
  if ((local_5 & bVar1) == 0) {
    uVar2 = F_005e3350(this,param_1);
    if (uVar2 == 0) {
      return 0;
    }
    *(byte *)((int)this + 0xc4) = bVar1 | local_5;
  }
  return 1;
}

/* ref: FUN_005eaf50 */
byte F_005eaf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eaf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float10 fVar1;
  uint uVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  uVar2 = F_005e3350(this,param_2);
  if (uVar2 == 0) {
    pfVar5 = (float *)&REFG(float, 0x1302d00);
  }
  else {
    pfVar3 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(uVar2 + 0x10) + 0xfc))))(*(int * PTR32 *)(uVar2 + 0x10))));
    fVar1 = (float10)0;
    ((float *)(gen_frame + 0x0))[0] = pfVar3[8];
    ((float *)(gen_frame + 0x0))[1] = 0.0;
    ((float *)(gen_frame + 0x0))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(float *)(gen_frame + 0x14)) = pfVar3[9];
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(float *)(gen_frame + 0x30)) = (float)fVar1;
    (*(float *)(gen_frame + 0x34)) = (float)fVar1;
    (*(float *)(gen_frame + 0x38)) = (float)fVar1;
    (*(float *)(gen_frame + 0x28)) = pfVar3[10];
    F_004efe70(((float *)(gen_frame + 0x0)),(uint)(pfVar3 + 4));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)*pfVar3 + (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)pfVar3[1] + (float10)(*(float *)(gen_frame + 0x34)));
    pfVar5 = ((float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)pfVar3[2] + (float10)(*(float *)(gen_frame + 0x38)));
  }
  pfVar3 = param_1;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar3 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar3 = pfVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return uVar2 != 0;
}

/* ref: FUN_005eb040 */
byte F_005eb040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eb040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = F_005e3350(this,param_2);
  if (uVar3 != 0) {
    uVar1 = *(undefined4 *)(uVar3 + 0x24);
    uVar2 = *(undefined4 *)(uVar3 + 0x28);
    *param_1 = *(undefined4 *)(uVar3 + 0x20);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    return 1;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return 0;
}

/* ref: FUN_005eb0b0 */
uint F_005eb0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x78);
  uVar4 = *(int *)((int)this + 0x7c) - (int)((int)(uintptr_t)piVar2) >> 2;
  uVar1 = 0;
  if (uVar4 != 0) {
    do {
      if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)(*piVar2 + 0x10) + 0x11))) == 'F') {
        uVar1 = F_005e59a0(*(undefined * PTR32 *)(*piVar2 + 0x10),param_1);
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < uVar4);
  }
  uVar1 = CONCAT31((int3)(uVar1 >> 8),*(undefined1 *)((int)this + 0x28)) & 0xffffff0f;
  if ((char)uVar1 == '\x04') {
    piVar2 = (int *)F_005e3290(this,0x2d);
    uVar1 = 0;
    if ((piVar2 != (int *)0x0) &&
       (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2,param_1), (char)uVar1 != '\0')) {
LAB_005eb10b: ;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        piVar2 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar3 * 4))) + 0x10)));
        uVar1 = 0;
        if (*(char *)((int)piVar2 + 0x11) != 'F') {
          if (*(char *)((int)piVar2 + 0x11) == '\x06') {
            uVar1 = F_005eb0b0(piVar2,param_1);
          }
          else {
            piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2)));
            uVar1 = 0;
            if (piVar2 == (int *)0x0) goto LAB_005eb15e;
            uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x3c))(piVar2,param_1);
          }
          if ((char)uVar1 != '\0') goto LAB_005eb10b;
        }
LAB_005eb15e: ;
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
  }
  return uVar1 & 0xffffff00;
}

/* ref: FUN_005eb170 */
uint F_005eb170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005e3350(this,param_1);
  return uVar1;
}

/* ref: FUN_005eb180 */
uint F_005eb180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eb180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_005e34a0(this,param_1,param_2,0);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf2 */
uint F_005eb1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  F_005dc4f0(this);
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0xc) = 3;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 4);
  iVar1 = *(int *)(param_1 + 0x18);
  *(int *)(this + 0x24) = iVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x10);
  if (4 < iVar1) {
    *(undefined4 *)(this + 0x24) = 1;
  }
  uVar2 = *(uint *)(this + 4);
  uVar3 = 0;
  uVar4 = *(int *)(uVar2 + 0x7c) - *(int *)(uVar2 + 0x78) >> 2;
  if (uVar4 != 0) {
    do {
      uVar2 = F_005e39e0(this,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 0x78))) + uVar3 * 4))) + 0x10))),
                           param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
  }
  return uVar2;
}

/* ref: FUN_005eb230 */
uint F_005eb230(unsigned int gen_a0)
{
  GEN_ENTER(0x5eb230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x1c) = 1;
  *(undefined1 *)((int)this + 0x2c) = 0;
  uVar2 = F_005dc670(this,0);
  piVar4 = (int *)((int)this + 0x5c);
  iVar3 = 4;
  do {
    if (*piVar4 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x90))((int *)*piVar4,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x50);
  if (pvVar1 != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,500);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      uVar2 = F_005e1000(pvVar1);
    }
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x58);
  if (pvVar1 != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,500);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      uVar2 = F_005e1000(pvVar1);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf1 */
uint F_005eb2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  F_005d6be0(this);
  *(undefined4 *)(this + 0xc) = 5;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x1c) = 3;
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 4);
  *(float *)(this + 0x24) = ((float)GEN_TOF(ABS((float10)*(float *)(param_1 + 8))));
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0xc);
  this[0x35] = (undefined1)(*(char *)(param_1 + 0x11) != '\0');
  this[0x36] = (undefined1)(*(char *)(param_1 + 0x16) != '\0');
  this[0x34] = (undefined1)(0.0 < *(float *)(param_1 + 8));
  uVar1 = *(uint *)(this + 4);
  uVar2 = 0;
  uVar3 = *(int *)(uVar1 + 0x7c) - *(int *)(uVar1 + 0x78) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005e3b70(this,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 4) + 0x78))) + uVar2 * 4))) + 0x10))),
                           param_1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  return uVar1;
}

/* ref: FUN_005eb390 */
unsigned int F_005eb390(unsigned int gen_a0)
{
  GEN_ENTER(0x5eb390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  
  pvVar3 = *(undefined * PTR32 *)((int)this + 0x44);
  if (pvVar3 == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) != 0) ||
       (pvVar3 = *(undefined * PTR32 *)((int)this + 0x48), pvVar3 == (undefined *)0x0)) goto LAB_005eb3ee;
    piVar1 = *(int * PTR32 *)((int)pvVar3 + 0x34);
    *(byte *)((int)pvVar3 + 0x94) = *(byte *)((int)pvVar3 + 0x94) & 0xfb;
    if (piVar1 == (int *)0x0) goto LAB_005eb41a;
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,0);
    *(undefined4 *)((int)pvVar3 + 0x34) = 0;
  }
  else {
    piVar1 = *(int * PTR32 *)((int)pvVar3 + 0x34);
    *(byte *)((int)pvVar3 + 0x94) = *(byte *)((int)pvVar3 + 0x94) & 0xfb;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,0);
      *(undefined4 *)((int)pvVar3 + 0x34) = 0;
      F_005e1000(pvVar3);
    }
LAB_005eb3ee: ;
    pvVar3 = *(undefined * PTR32 *)((int)this + 0x48);
    if (pvVar3 == (undefined *)0x0) goto LAB_005eb41a;
    piVar1 = *(int * PTR32 *)((int)pvVar3 + 0x34);
    *(byte *)((int)pvVar3 + 0x94) = *(byte *)((int)pvVar3 + 0x94) & 0xfb;
    if (piVar1 == (int *)0x0) goto LAB_005eb41a;
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,0);
    *(undefined4 *)((int)pvVar3 + 0x34) = 0;
  }
  F_005e1000(pvVar3);
LAB_005eb41a: ;
  iVar2 = *(int *)((int)this + 0x3c);
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0x30) != 0) && ((*(byte *)(iVar2 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar2 + 0x30),(float)(float10)0);
    }
    *(byte *)(iVar2 + 0x8c) = *(byte *)(iVar2 + 0x8c) & 0xfe;
  }
  iVar2 = *(int *)((int)this + 0x40);
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0x30) != 0) && ((*(byte *)(iVar2 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar2 + 0x30),(float)(float10)0);
    }
    *(byte *)(iVar2 + 0x8c) = *(byte *)(iVar2 + 0x8c) & 0xfe;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf8 */
byte F_005eb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eb470u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))))((*(undefined * PTR32 *)&gen_args[0]));
  if ((char)uVar1 != '\0') {
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x24))) != 0) {
      if (*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))) != (undefined *)0x0) {
        F_005e3700(*((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4))),*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x24))));
      }
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
      *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 1;
    }
    *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(int *)&gen_args[1]);
    *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
    (*(undefined * PTR32 *)&gen_args[0])[0x20] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0));
    *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (uint)((*(int *)&gen_args[1]) != 6);
    return 1;
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf9 */
uint F_005eb4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  if (*(int *)(this + 0xc) == 6) {
    uVar2 = F_005e3d80(this);
  }
  else {
    uVar2 = *(int *)(this + 0xc) - 7;
    if ((uVar2 == 0) && (uVar3 = *(uint *)(this + 0x24), uVar2 = 0, uVar3 != 0)) {
      if (*(undefined * PTR32 *)(this + 4) != (undefined *)0x0) {
        bVar1 = F_005e3700(*(undefined * PTR32 *)(this + 4),uVar3);
        uVar3 = CONCAT31(extraout_var,bVar1);
      }
      *(undefined4 *)(this + 0x24) = 0;
      *(undefined4 *)(this + 0x1c) = 1;
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_005eb510 */
uint F_005eb510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb510u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  float * pfVar5;
  undefined4 * puVar6;
  int iVar7;
  undefined4 * puVar8;
  bool bVar9;
  float10 fVar10;
  int local_c;
  
  *(bool *)((*(int *)&gen_args[0]) + 0x1c) = *(char *)((*(uint *)&gen_args[1]) + 8) != '\0';
  *(bool *)((*(int *)&gen_args[0]) + 0x1d) = *(char *)((*(uint *)&gen_args[1]) + 9) != '\0';
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x20) = *(undefined4 *)((*(uint *)&gen_args[1]) + 0xc);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  *(float *)((*(int *)&gen_args[0]) + 0x28) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*(ushort *)((*(uint *)&gen_args[1]) + 6) * 1000) / 0x1e))) / fVar10)));
  *(float *)((*(int *)&gen_args[0]) + 0x2c) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*(ushort *)((*(uint *)&gen_args[1]) + 0x10) * 1000) / 0x1e))) / fVar10)));
  puVar6 = (undefined4 *)((*(uint *)&gen_args[1]) + 0x1c);
  iVar7 = 2;
  *(float *)((*(int *)&gen_args[0]) + 0x30) =
       ((float)GEN_TOF((((float10)GEN_TOD((((uint)*(ushort *)((*(uint *)&gen_args[1]) + 0x12) * 1000) / 0x1e))) / fVar10)));
  puVar8 = (undefined4 *)((*(int *)&gen_args[0]) + 0x74);
  do {
    puVar8[-1] = puVar6[-2];
    *puVar8 = *puVar6;
    puVar8[2] = puVar6[4];
    local_c = (int)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar6[2]))));
    puVar8[1] = (undefined4)gen_fl2bits(((float)GEN_TOF((((float10)GEN_TOD(((uint)(local_c * 1000) / 0x1e))) / fVar10))));
    local_c = (int)(longlong)TRUNC(((float10)GEN_TOD(gen_bits2f(puVar6[6]))));
    (*(uint *)&gen_args[1]) = (uint)(local_c * 1000) / 0x1e;
    puVar6 = puVar6 + 1;
    iVar7 = iVar7 + -1;
    puVar8[3] = (undefined4)gen_fl2bits((float)((float10)(*(uint *)&gen_args[1]) / fVar10));
    puVar8 = puVar8 + 5;
  } while (iVar7 != 0);
  F_005dd120((*(int *)&gen_args[0]) + 0x98,*(float *)((*(int *)&gen_args[0]) + 0x70),*(float *)((*(int *)&gen_args[0]) + 0x84),
               *(float *)((*(int *)&gen_args[0]) + 0x78),*(float *)((*(int *)&gen_args[0]) + 0x8c));
  F_005dd120((*(int *)&gen_args[0]) + 0xa8,*(float *)((*(int *)&gen_args[0]) + 0x74),*(float *)((*(int *)&gen_args[0]) + 0x88),
               *(float *)((*(int *)&gen_args[0]) + 0x78),*(float *)((*(int *)&gen_args[0]) + 0x8c));
  uVar4 = F_005dd120((*(int *)&gen_args[0]) + 0xb8,*(float *)((*(int *)&gen_args[0]) + 0x7c),*(float *)((*(int *)&gen_args[0]) + 0x90),
                       *(float *)((*(int *)&gen_args[0]) + 0x80),*(float *)((*(int *)&gen_args[0]) + 0x94));
  fVar1 = *(float *)((*(int *)&gen_args[0]) + 0x2c);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x38) = 0;
  if (GEN_ISNAN(fVar1) != (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
    fVar2 = *(float *)((*(int *)&gen_args[0]) + 0x30);
    bVar3 = GEN_ISNAN(fVar2);
    bVar9 = bVar3 || fVar2 == 0.0;
    if (bVar3 != bVar9) {
      return CONCAT22((short)(uVar4 >> 0x10),
                      CONCAT11(bVar9 << 6 | bVar3 << 2 | 2U | !(0.0 <= fVar2),(char)uVar4));
    }
  }
  pfVar5 = (float *)&(*(uint *)&gen_args[1]);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(int *)&gen_args[0]) + 0x30) + (float10)fVar1)));
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
  if (!((float10)fVar1 < (float10)*(float *)((*(int *)&gen_args[0]) + 0x28))) {
    pfVar5 = (float *)((*(int *)&gen_args[0]) + 0x28);
  }
  *(float *)((*(int *)&gen_args[0]) + 0x38) =
       ((float)GEN_TOF((((float10)*pfVar5 / (float10)*(float *)((*(int *)&gen_args[0]) + 0x28)) * (float10)REFG(double, 0x1088108))));
  return (uint)pfVar5;
}

/* ref: FUN_005eb760 */
unsigned int F_005eb760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5eb760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  
  if (*(int *)(param_1 + 0xc) == 8) {
    bVar1 = F_005d6e10(param_1 + 0x98U,param_2,0);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0x98U,*(float *)(param_1 + 0x70),*(float *)(param_1 + 0x84),
                   *(float *)(param_1 + 0x78),*(float *)(param_1 + 0x8c));
    }
    bVar1 = F_005d6e10(param_1 + 0xa8U,param_2,0);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0xa8U,*(float *)(param_1 + 0x74),*(float *)(param_1 + 0x88),
                   *(float *)(param_1 + 0x78),*(float *)(param_1 + 0x8c));
    }
    bVar1 = F_005d6e10(param_1 + 0xb8U,param_2,1);
    if (bVar1 != 0) {
      F_005dd120(param_1 + 0xb8U,*(float *)(param_1 + 0x7c),*(float *)(param_1 + 0x90),
                   *(float *)(param_1 + 0x80),*(float *)(param_1 + 0x94));
    }
  }
  return 0;
}

/* ref: FUN_005eb850 */
byte F_005eb850(unsigned int gen_a0)
{
  GEN_ENTER(0x5eb850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20);
  puVar3 = (undefined4 *)*puVar2;
  while( true ) {
    if (puVar3 == puVar2) {
      return 1;
    }
    piVar4 = (int *)puVar3[4];
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4);
    if (((char)uVar7 != '\0') &&
       (uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x58))(piVar4), (char)uVar7 == '\0')) break;
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x15);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf47 */
uint F_005eb8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5eb8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  if (uVar2 != 0) {
    return *(byte *)(uVar2 + 100) & 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar2 != 0xffffffff) {
    uVar2 = *(uint *)(this + 0x30);
    piVar1 = *(int * PTR32 *)(uVar2 + 0xf0);
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf67 */
uint F_005eb930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eb930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if ((uVar2 != 0xffffffff) &&
     (piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), piVar1 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10c))(piVar1,param_1);
    return param_1;
  }
  F_005ea570((undefined *)this,param_1);
  return param_1;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf47 */
uint F_005eb980(unsigned int gen_a0)
{
  GEN_ENTER(0x5eb980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 local_8;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))();
  if (uVar2 != 0) {
    return *(byte *)(uVar2 + 100) & 1;
  }
  uVar2 = *(uint *)(this + 0x38);
  if (uVar2 != 0xffffffff) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),this[0x11]);
    uVar2 = F_00a1b870(local_8,uVar2);
    if (((uVar2 != 0) && (*(int *)(uVar2 + 0x7c) == 0)) &&
       (piVar1 = *(int * PTR32 *)(uVar2 + 0xf0), uVar2 = 0, piVar1 != (int *)0x0)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xbc))(piVar1);
      return uVar2;
    }
  }
  return uVar2 & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf7 */
uint F_005eb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5eb9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint * puVar2;
  
  if (*(int *)(in_ecx + 0x30) == 0) {
    puVar2 = (uint *)&REFG(undefined, 0x10a258a);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x70)));
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_005eba10 */
byte F_005eba10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eba10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  byte bVar2;
  byte * pbVar3;
  int iVar4;
  byte * pbVar5;
  bool bVar6;
  
  bVar6 = *(int *)(param_1 + 0x38) == 2;
  if (bVar6 == (*(int *)((int)this + 0x3c) != 0)) {
    if (((bVar6) && (*(int *)((int)this + 0x3c) != 0)) &&
       (F_005ea6d0(((undefined1 *)(gen_frame + 0x0)),*(int *)(param_1 + 0x44) + param_1),
       *(int *)((int)this + 0x3c) != (*(int *)(gen_frame + 0x4)))) {
      return 1;
    }
    bVar6 = *(int *)(param_1 + 0x38) == 1;
    piVar1 = (int *)((int)this + 0x38);
    (*(int * PTR32 *)(gen_frame + 0x7c)) = piVar1;
    if (bVar6 == (*piVar1 != 0)) {
      if ((bVar6) && (*piVar1 != 0)) {
        (*(byte * PTR32 *)(gen_frame + 0x78)) = ((byte *)GEN_TOP((*(int *)(param_1 + 0x34) + param_1)));
        if (*(int *)((int)this + 8) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
        }
        pbVar3 = (byte *)F_00507260((undefined *)(iVar4 + 0x14c),piVar1);
        pbVar5 = (*(byte * PTR32 *)(gen_frame + 0x78));
        do {
          bVar2 = *pbVar5;
          bVar6 = bVar2 < *pbVar3;
          if (bVar2 != *pbVar3) {
LAB_005ebae0: ;
            iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
            goto LAB_005ebae5;
          }
          if (bVar2 == 0) break;
          bVar2 = pbVar5[1];
          bVar6 = bVar2 < pbVar3[1];
          if (bVar2 != pbVar3[1]) goto LAB_005ebae0;
          pbVar5 = pbVar5 + 2;
          pbVar3 = pbVar3 + 2;
        } while (bVar2 != 0);
        iVar4 = 0;
LAB_005ebae5: ;
        if (iVar4 != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf56 */
uint F_005ebb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x30);
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 3 ^ (byte)this[0x2b]) & 8);
  if (iVar1 != 0) {
    *(byte *)(iVar1 + 100) = (char)param_1 != '\0' | *(byte *)(iVar1 + 100) & 0xfe;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,param_1);
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf7 */
uint F_005ebbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_ecx + 0x30);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x70);
    if (iVar2 != 0) {
      if (*(uint *)(iVar2 + 0x50) < 0x10) {
        return (uint)(uint *)(iVar2 + 0x3c);
      }
      return *(uint *)(iVar2 + 0x3c);
    }
    iVar1 = *(int *)(iVar1 + 0x74);
    if (iVar1 != 0) {
      if (*(uint *)(iVar1 + 0x50) < 0x10) {
        return (uint)(uint *)(iVar1 + 0x3c);
      }
      return *(uint *)(iVar1 + 0x3c);
    }
  }
  return 0x10a267e;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf7 */
uint F_005ebc20(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebc20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint * puVar2;
  
  if ((*(int *)(in_ecx + 0x30) == 0) ||
     (iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x70))), iVar1 == 0)) {
    puVar2 = (uint *)&REFG(undefined, 0x10a267f);
  }
  else {
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf47 */
uint F_005ebc40(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  
  if ((((*(byte *)(in_ecx + 0x2b) & 8) != 0) && (in_EAX = *(uint *)(in_ecx + 0x30), in_EAX != 0)) &&
     (!(*((float *)GEN_TOP((*(int *)(in_EAX + 0x70) + 0x20))) <= 0.0))) {
    return *(byte *)(in_EAX + 100) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf47 */
uint F_005ebc70(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint in_EAX = 0;
  
  if (((*(byte *)(in_ecx + 0x2b) & 8) != 0) && (in_EAX = 0, *(int *)(in_ecx + 0x30) != 0)) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x30) + 100))) & 1;
  }
  return in_EAX & 0xffffff00;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf56 */
byte F_005ebc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ ((byte)param_1 * '\b' ^ (byte)this[0x2b]) & 8)
  ;
  iVar1 = *(int *)(this + 0x30);
  bVar2 = (byte)param_1;
  if (iVar1 != 0) {
    bVar2 = (byte)param_1 != 0 | *(byte *)(iVar1 + 100) & 0xfe;
    *(byte *)(iVar1 + 100) = bVar2;
  }
  return bVar2;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf28 */
uint F_005ebd10(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if (piVar1 == (int *)0x0) {
    if (((byte)this[0x94] & 0x10) == 0) goto LAB_005ebd48;
    this[0x94] = (undefined1)((byte)this[0x94] & 0xef);
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)(this + 0x34) = 0;
  }
  F_005e1000(this);
LAB_005ebd48: ;
  uVar2 = 0;
  if (*(int *)(this + 0x3c) != 0) {
    uVar2 = F_0050c620(*(int *)(this + 0x3c),0,0);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf4 */
uint F_005ebd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  uint uVar2;
  undefined * this_00;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar2 != 0) {
    F_00a1fa60(this + 0x10,uVar2,param_1);
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x60);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x60) = 0;
  }
  this_00 = (undefined *)F_00406b90(0x18,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
    uVar2 = F_00b7c8d0(this_00,uVar2,param_1);
  }
  *(uint *)(this + 0x60) = uVar2;
  if (this[100] != (undefined1)0x0) {
    *(ushort *)(uVar2 + 0xe) = *(ushort *)(uVar2 + 0xe) | 2;
    return uVar2;
  }
  *(ushort *)(uVar2 + 0xe) = *(ushort *)(uVar2 + 0xe) & 0xfffd;
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf4 */
uint F_005ebe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebe50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  this[100] = (undefined1)(*(char *)(param_1 + 0x40) != '\0');
  uVar1 = F_005ebd70((undefined *)this,param_1);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf4 */
uint F_005ebe70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebe70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005ebd70((undefined *)this,param_1);
  return uVar1;
}

/* ref: FUN_005ebe80 */
uint F_005ebe80(unsigned int gen_a0)
{
  GEN_ENTER(0x5ebe80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * in_EAX = 0;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x34);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    in_EAX = (undefined4 *)puVar3[4];
    *(undefined1 *)((int)in_EAX + 0x12) = 1;
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x15);
        puVar3 = puVar4;
        in_EAX = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*in_EAX + 0x15);
          puVar3 = in_EAX;
          in_EAX = (undefined4 *)*in_EAX;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, in_EAX = puVar3, cVar1 == '\0' &&
               (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_005ebee0 */
unsigned int F_005ebee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5ebee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  bool bVar7;
  
  piVar2 = *(int * PTR32 *)(param_1 + 0x34);
  piVar6 = (int *)*piVar2;
  if (piVar6 != piVar2) {
    do {
      iVar3 = piVar6[4];
      bVar7 = GEN_ISNAN((float10)*(float *)(iVar3 + 0x24)) || GEN_ISNAN((float10)param_2);
      if (bVar7 == (bVar7 || (float10)*(float *)(iVar3 + 0x24) == (float10)param_2)) {
        *(float *)(iVar3 + 0x24) = param_2;
        *(undefined1 *)(iVar3 + 0x12) = 1;
      }
      if (*(char *)((int)piVar6 + 0x15) == '\0') {
        piVar4 = (int *)piVar6[2];
        if (*(char *)((int)piVar4 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x15);
          piVar6 = piVar4;
          piVar4 = (int *)*piVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar4 + 0x15);
            piVar6 = piVar4;
            piVar4 = (int *)*piVar4;
          }
        }
        else {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar5 = (int *)piVar6[1];
          piVar4 = piVar6;
          while ((piVar6 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar6[2]))) {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar4 = piVar6;
          }
        }
      }
    } while (piVar6 != piVar2);
  }
  return 0;
}

/* ref: FUN_005ebf60 */
unsigned int F_005ebf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ebf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x34);
  puVar4 = (undefined4 *)*puVar3;
  do {
    if (puVar4 == puVar3) {
      return 0;
    }
    iVar5 = puVar4[4];
    iVar8 = 0;
    uVar7 = 0;
    do {
      if ((uint)*(byte *)(iVar5 + 0x10) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar7)) {
        puVar9 = &REFG(undefined4, 0x10a2810) + iVar8 * 10;
        goto LAB_005ebfa8;
      }
      uVar7 = uVar7 + 0x28;
      iVar8 = iVar8 + 1;
    } while (uVar7 < 0x208);
    puVar9 = &REFG(undefined4, 0x10a2810);
LAB_005ebfa8: ;
    uVar7 = (uint)((char)param_1 == '\0');
    uVar1 = puVar9[uVar7 + 4];
    *(undefined4 *)(iVar5 + 0x28) = uVar1;
    *(undefined4 *)(iVar5 + 0x24) = uVar1;
    *(undefined4 *)(iVar5 + 0x2c) = puVar9[uVar7 + 6];
    *(undefined4 *)(iVar5 + 0x30) = puVar9[uVar7 + 8];
    *(undefined4 *)(iVar5 + 0x20) = puVar9[3];
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar9 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar9 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar9 + 0x15);
        puVar4 = puVar9;
        puVar9 = (undefined4 *)*puVar9;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar9 + 0x15);
          puVar4 = puVar9;
          puVar9 = (undefined4 *)*puVar9;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar4[1] + 0x15);
        puVar6 = (undefined4 *)puVar4[1];
        puVar9 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar9 == (undefined4 *)puVar4[2]))) {
          cVar2 = *(char *)((int)puVar4[1] + 0x15);
          puVar6 = (undefined4 *)puVar4[1];
          puVar9 = puVar4;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005ec040 */
uint F_005ec040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (REFG(void * PTR32, 0x1379694) != (undefined *)0x0) {
    puVar2 = (undefined4 *)F_00a5feb0(REFG(void * PTR32, 0x1379694));
    *(undefined4 *)((int)this + 0x20) = *puVar2;
    *(undefined4 *)((int)this + 0x24) = puVar2[1];
    *(undefined4 *)((int)this + 0x28) = puVar2[2];
    return (uint)puVar2;
  }
  *(undefined1 *)((int)this + 0x18) = 1;
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x1371298) + 0x34 + *(int *)(REFG(int, 0x1371298) + 0x30) * 4)));
  *param_1 = *(undefined4 *)(iVar1 + 0x30);
  param_1[1] = *(undefined4 *)(iVar1 + 0x34);
  param_1[2] = *(undefined4 *)(iVar1 + 0x38);
  uVar3 = F_00a1c7d0(param_1,0,0,0);
  return uVar3;
}

/* ref: FUN_005ec0b0 */
byte F_005ec0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 4)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)(param_1 + 4)) {
      return 0;
    }
    if (param_2 == puVar2[4]) break;
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x15);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x15);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_005ec120 */
unsigned int F_005ec120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[4];
    if (iVar4 != 0) {
      *(byte *)(iVar4 + 0x20) =
           (*(byte *)(iVar4 + 0x20) & 2 | (byte)param_2 & 1) * '\x02' |
           *(byte *)(iVar4 + 0x20) & 0xf9;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x15);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec1b0 */
unsigned int F_005ec1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar3 = *(undefined4 * PTR32 *)(param_2 + 4);
  puVar4 = (undefined4 *)*puVar3;
  while (puVar4 != puVar3) {
    iVar5 = puVar4[4];
    if ((iVar5 != 0) && (bVar1 = *(byte *)(iVar5 + 0x20), ((bVar1 >> 1 ^ bVar1) & 2) != 0)) {
      *(byte *)(iVar5 + 0x20) = (bVar1 * '\x02' ^ bVar1) & 4 ^ bVar1;
      *(undefined1 *)(in_ecx + 0x1c) = 1;
    }
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar6 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar6 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar6 + 0x15);
        puVar4 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar6 + 0x15);
          puVar4 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar4[1] + 0x15);
        puVar7 = (undefined4 *)puVar4[1];
        puVar6 = puVar4;
        while ((puVar4 = puVar7, cVar2 == '\0' && (puVar6 == (undefined4 *)puVar4[2]))) {
          cVar2 = *(char *)((int)puVar4[1] + 0x15);
          puVar7 = (undefined4 *)puVar4[1];
          puVar6 = puVar4;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec240 */
unsigned int F_005ec240(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[4];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) != 0)) {
      uVar5 = piVar4[9];
      if ((uVar5 & 1) != 0) {
        ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4);
      }
      if ((uVar5 & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar4 + 0x7c))(piVar4);
      }
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar6 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar6 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x15);
        puVar3 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x15);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar7 = (undefined4 *)puVar3[1];
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar7 = (undefined4 *)puVar3[1];
          puVar6 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec2e0 */
unsigned int F_005ec2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec2e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 4);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[4];
    if ((piVar4 != (int *)0x0) && ((*(byte *)(piVar4 + 8) & 2) == 0)) {
      uVar5 = piVar4[9];
      if ((uVar5 & 1) != 0) {
        ((code *)*(gen_code32 *)(*piVar4 + 0x70))(piVar4);
      }
      if ((uVar5 & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar4 + 0x80))(piVar4);
      }
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar6 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar6 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x15);
        puVar3 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x15);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar7 = (undefined4 *)puVar3[1];
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar7 = (undefined4 *)puVar3[1];
          puVar6 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf4 */
unsigned int F_005ec380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0x10))))(*(int * PTR32 *)(this + 0x10),param_1);
  puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
  puVar3 = (undefined4 *)*puVar2;
  do {
    do {
      while( true ) {
        do {
          puVar5 = puVar3;
          if (puVar5 == puVar2) {
            return 0;
          }
          ((code *)*(gen_code32 *)(*(int *)puVar5[6] + 0x10))((int *)puVar5[6],param_1);
          puVar3 = puVar5;
        } while (*(char *)((int)puVar5 + 0x21) != '\0');
        puVar3 = (undefined4 *)puVar5[2];
        if (*(char *)((int)puVar3 + 0x21) != '\0') break;
        cVar1 = *(char *)((int)*puVar3 + 0x21);
        puVar5 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      puVar3 = (undefined4 *)puVar5[1];
    } while (*(char *)((int)puVar3 + 0x21) != '\0');
    do {
      puVar4 = puVar3;
      puVar3 = puVar4;
      if (puVar5 != (undefined4 *)puVar4[2]) break;
      puVar3 = (undefined4 *)puVar4[1];
      puVar5 = puVar4;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  } while( true );
}

/* ref: FUN_005ec400 */
unsigned int F_005ec400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (*(int *)((int)this + 0x34) != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x30);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      piVar4 = (int *)puVar3[6];
      ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
      ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
    F_00614620((undefined *)((int)this + 0x2c));
    *(undefined4 *)((int)this + 0x14) = 0;
    *(undefined4 *)((int)this + 0x1c) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  if ((char)param_1 != '\0') {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 8))))(*(int * PTR32 *)((int)this + 0x10));
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x10);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
  }
  return 0;
}

/* ref: FUN_005ec4c0 */
uint F_005ec4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x40);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[6];
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    ((code *)*(gen_code32 *)*piVar4)(piVar4,1);
    if (*(char *)((int)puVar3 + 0x21) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x21) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x21);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x21);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  uVar7 = F_00614620((undefined *)((int)this + 0x3c));
  return uVar7;
}

/* ref: FUN_005ec540 */
unsigned int F_005ec540(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if (*(int *)((int)this + 0x180) == 0) {
    return 0;
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x17c);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    F_0050c620(puVar3[3],0,0);
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x11);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x11);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x11);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  F_00614680((undefined *)((int)this + 0x178));
  return 0;
}

/* ref: FUN_005ec5e0 */
unsigned int F_005ec5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar1 = *(int *)((int)this + 0x14);
  puVar3 = (undefined4 *)((int)this + 0x4c);
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 1;
  }
  if (iVar1 != 0) {
    F_005ebf60(*(undefined * PTR32 *)(iVar1 + 0x44),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_005ec610 */
byte F_005ec610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5ec610u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  byte * pbVar1;
  byte * pbVar2;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[5]);
  pbVar1 = (*(byte * PTR32 *)&gen_args[4]);
  *(*(byte * PTR32 *)&gen_args[5]) = 1;
  *(*(byte * PTR32 *)&gen_args[4]) = 1;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x184))) != 0) {
    switch((unsigned int)(uintptr_t)((byte)(*(undefined4 *)&gen_args[1]))) {
    case 5: ;
    case 8: ;
    case 9: ;
    case 0xc: ;
    case 0xe: ;
    case 0x10: ;
    case 0x28: ;
    case 0x29: ;
    case 0x2b: ;
    case 0x2c: ;
    case 0x2d: ;
    case 0x31: ;
    case 0x33: ;
    case 0x3a: ;
    case 0x3b: ;
    case 0x42: ;
    case 0x43: ;
    case 0x44: ;
    case 0x45: ;
    case 0x46: ;
    case 0x47: ;
    case 0x48: ;
      *(*(byte * PTR32 *)&gen_args[5]) = 0;
      *(*(byte * PTR32 *)&gen_args[4]) = 0;
      return 1;
    }
    F_00615690(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))),&(*(byte * PTR32 *)&gen_args[5]),&(*(undefined4 *)&gen_args[3]));
    if ((((*(byte * PTR32 *)&gen_args[5]) != *((byte * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x180)))) && ((byte)(*(undefined4 *)&gen_args[1]) == (*(byte * PTR32 *)&gen_args[5])[0x11])) &&
       ((short)(*(undefined4 *)&gen_args[2]) == *((short *)GEN_TOP(((*(byte * PTR32 *)&gen_args[5]) + 0x12))))) {
      *pbVar1 = (*(byte * PTR32 *)&gen_args[5])[0x10] & 1;
      *pbVar2 = (*(byte * PTR32 *)&gen_args[5])[0x10] >> 1 & 1;
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005ec700 */
unsigned int F_005ec700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  undefined * this_00;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  *(char *)((int)this + 0x51) = (char)param_1;
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x100);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[4];
    iVar5 = *(int *)(iVar4 + 0x10);
    if (iVar5 != 0) {
      *(byte *)(iVar5 + 100) = (char)param_1 != '\0' | *(byte *)(iVar5 + 100) & 0xfe;
    }
    this_00 = *(undefined * PTR32 *)(iVar4 + 0x14);
    if (this_00 != (undefined *)0x0) {
      F_00c9f290(this_00,param_1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar6 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar6 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x15);
        puVar3 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x15);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar7 = (undefined4 *)puVar3[1];
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar7 = (undefined4 *)puVar3[1];
          puVar6 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec7a0 */
uint F_005ec7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec7a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00615550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x170)))) {
    return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  }
  return 0;
}

/* ref: FUN_005ec7e0 */
uint F_005ec7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ec7e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_006154e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x16c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x170)))) {
    return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  }
  return 0;
}

/* ref: FUN_005ec820 */
byte F_005ec820(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x100)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x100)) {
      return 1;
    }
    if ((*(int *)(puVar2[4] + 0x11c) != 5) && (*(int *)(puVar2[4] + 0x11c) != 3)) break;
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x15);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x15);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec8a0 */
byte F_005ec8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  byte bVar7;
  int * piVar8;
  
  if (*(int *)((int)this + 0x1ac) != 0) {
    piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x88)));
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8;
    UNLOCK();
    if (iVar1 != 2) {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x1b0) != 0) {
    piVar8 = ((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x88)));
    LOCK();
    iVar1 = *piVar8;
    *piVar8 = *piVar8;
    UNLOCK();
    if (iVar1 != 2) {
      return 0;
    }
  }
  puVar3 = *(undefined4 * PTR32 *)((int)this + 0x110);
  puVar4 = (undefined4 *)*puVar3;
  while( true ) {
    if (puVar4 == puVar3) {
      return 1;
    }
    bVar7 = F_005eb850((undefined *)puVar4[4]);
    if (bVar7 == 0) break;
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar2 = *(char *)((int)*puVar5 + 0x15);
        puVar4 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)((int)*puVar5 + 0x15);
          puVar4 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar2 = *(char *)((int)puVar4[1] + 0x15);
        puVar6 = (undefined4 *)puVar4[1];
        puVar5 = puVar4;
        while ((puVar4 = puVar6, cVar2 == '\0' && (puVar5 == (undefined4 *)puVar4[2]))) {
          cVar2 = *(char *)((int)puVar4[1] + 0x15);
          puVar6 = (undefined4 *)puVar4[1];
          puVar5 = puVar4;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ec950 */
unsigned int F_005ec950(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x100);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0xc))((int *)puVar3[4],0);
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

/* ref: FUN_005ec9c0 */
uint F_005ec9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ec9c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x170);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (puVar3[4] != 0) {
      F_00406ad0(puVar3[4]);
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
  uVar6 = F_00615480((undefined *)((int)this + 0x16c));
  return uVar6;
}

/* ref: FUN_005eca50 */
uint F_005eca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x170)));
  while( true ) {
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 0x170)) {
      return 0;
    }
    if (*(int *)(puVar2[4] + 4) == param_1) break;
    if (*(char *)((int)puVar2 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x15);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x15);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return puVar2[4];
}

/* ref: FUN_005ecac0 */
byte F_005ecac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecac0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar1 = (*(uint *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) & 0xffff;
  F_00615310(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
    return 1;
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 300)));
  uVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x130))) - (int)((int)(uintptr_t)piVar4) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*(ushort *)(*piVar4 + 8) == uVar1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return 0;
}

/* ref: FUN_005ecb30 */
byte F_005ecb30(unsigned int gen_a0)
{
  GEN_ENTER(0x5ecb30u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  uint local_8;
  
  uVar8 = param_1[1] - *param_1 >> 2;
  local_8 = 0;
  if (uVar8 != 0) {
    do {
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)(*param_1 + local_8 * 4) + 0x20)));
      puVar3 = (undefined4 *)*puVar2;
      while (puVar3 != puVar2) {
        piVar4 = (int *)puVar3[4];
        uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x54))(piVar4);
        if (((char)uVar7 != '\0') &&
           (uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0x58))(piVar4), (char)uVar7 == '\0')) {
          return 0;
        }
        if (*(char *)((int)puVar3 + 0x15) == '\0') {
          puVar5 = (undefined4 *)puVar3[2];
          if (*(char *)((int)puVar5 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x15);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
            while (cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar5 + 0x15);
              puVar3 = puVar5;
              puVar5 = (undefined4 *)*puVar5;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar3[1] + 0x15);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
            while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
              cVar1 = *(char *)((int)puVar3[1] + 0x15);
              puVar6 = (undefined4 *)puVar3[1];
              puVar5 = puVar3;
            }
          }
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < uVar8);
  }
  return 1;
}

/* ref: FUN_005ecc00 */
unsigned int F_005ecc00(unsigned int gen_a0)
{
  GEN_ENTER(0x5ecc00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x110);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0xc))((int *)puVar3[4],0);
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

/* ref: FUN_005ecc70 */
uint F_005ecc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecc70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00615410(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    return 0;
  }
  return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
}

/* ref: FUN_005eccb0 */
uint F_005eccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x18c);
  if (piVar1 != *(int * PTR32 *)((int)this + 400)) {
    while (*piVar1 != param_1) {
      piVar1 = piVar1 + 1;
      if (piVar1 == *(int * PTR32 *)((int)this + 400)) {
        return (uint)piVar1;
      }
    }
    piVar1 = (int *)F_00c46e20(piVar1,piVar1 + 1,
                               (*(int *)((int)this + 400) - (int)(piVar1 + 1) >> 2) * 4);
    *(int *)((int)this + 400) = *(int *)((int)this + 400) + -4;
  }
  return (uint)piVar1;
}

/* ref: FUN_005ecd20 */
unsigned int F_005ecd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  undefined4 * puVar5;
  int * piVar6;
  int * piVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x1a4) != 0) {
    piVar7 = *(int * PTR32 *)((int)this + 0x1a0);
    piVar6 = (int *)*piVar7;
    if (piVar6 != piVar7) {
      do {
        if ((piVar6[3] == 0) || (bVar4 = F_005e3950(piVar6[3],param_1), bVar4 != 0)) {
          puVar5 = (undefined4 *)F_00615780((undefined *)((int)this + 0x19c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar6);
          piVar6 = (int *)*puVar5;
          piVar7 = *(int * PTR32 *)((int)this + 0x1a0);
          if (piVar6 == piVar7) {
            return 0;
          }
        }
        if (*(char *)((int)piVar6 + 0x11) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x11);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x11);
            piVar3 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x11);
              piVar3 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != piVar7);
    }
  }
  return 0;
}

/* ref: FUN_005ecdd0 */
uint F_005ecdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ecdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short * psVar1;
  char cVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  int * piVar9;
  undefined4 * puVar10;
  short * psVar11;
  
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    uVar5 = 0;
    if (*(int *)((int)this + 0x1c) != 0) {
      (*(int *)(gen_frame + 0xc)) = *(int *)((int)this + 0x1c);
      F_006154e0((undefined *)((int)this + 0x16c),&(*(uint *)(gen_frame + 0x10)),&(*(int *)(gen_frame + 0xc)));
      uVar5 = (*(uint *)(gen_frame + 0x10));
      if ((*(uint *)(gen_frame + 0x10)) == *(uint *)((int)this + 0x170)) {
        (*(uint *)(gen_frame + 0x14)) = 0;
      }
      else {
        (*(uint *)(gen_frame + 0x14)) = *(uint *)((*(uint *)(gen_frame + 0x10)) + 0x10);
      }
    }
  }
  else {
    uVar5 = F_005eca50(this,*(int *)((int)this + 0x18));
    (*(uint *)(gen_frame + 0x14)) = uVar5;
  }
  (*(uint *)(gen_frame + 0x10)) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar6 = *(int *)(param_1 + 8) + param_1;
      psVar11 = ((short *)GEN_TOP((*(int *)(iVar6 + (*(uint *)(gen_frame + 0x10)) * 4) + iVar6)));
      uVar5 = F_005d93f0((*(uint *)(gen_frame + 0x14)),psVar11);
      if (((char)uVar5 != '\0') && ((*(int *)(gen_frame + 0xc)) = 0, 0 < *(int *)(psVar11 + 6))) {
        do {
          iVar6 = *(int *)(psVar11 + 4);
          iVar3 = *(int *)((int)psVar11 + (*(int *)(gen_frame + 0xc)) * 4 + iVar6);
          uVar5 = *(uint *)((int)psVar11 + iVar3 + 4 + iVar6);
          piVar9 = (int *)((int)psVar11 + iVar3 + iVar6);
          if (*(int *)((int)this + 0x184) == 0) {
LAB_005ecef7: ;
            psVar1 = (short *)((int)this + *piVar9 * 0xc + 0x1be);
            *psVar1 = *psVar1 + 1;
          }
          else {
            switch((unsigned int)(uintptr_t)((char)*piVar9)) {
            case '\x05': ;
            case '\b': ;
            case '\t': ;
            case '\f': ;
            case '\x0e': ;
            case '\x10': ;
            case '(': ;
            case ')': ;
            case '+': ;
            case ',': ;
            case '-': ;
            case '1': ;
            case '3': ;
            case ':':
            case ';': ;
            case 'B': ;
            case 'C': ;
            case 'D': ;
            case 'E': ;
            case 'F': ;
            case 'G': ;
            case 'H': ;
              break;
            default: ;
              puVar10 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x180))[1]));
              cVar2 = *(char *)((int)puVar10 + 0x19);
              puVar4 = *(undefined4 * PTR32 *)((int)this + 0x180);
              while (cVar2 == '\0') {
                if ((uint)puVar10[3] < uVar5) {
                  puVar7 = (undefined4 *)puVar10[2];
                  puVar10 = puVar4;
                }
                else {
                  puVar7 = (undefined4 *)*puVar10;
                }
                puVar4 = puVar10;
                puVar10 = puVar7;
                cVar2 = *(char *)((int)puVar7 + 0x19);
              }
              (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar4;
              if ((puVar4 == *(undefined4 * PTR32 *)((int)this + 0x180)) || (uVar5 < (uint)puVar4[3])) {
                (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = *(undefined4 * PTR32 *)((int)this + 0x180);
                ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x4));
              }
              else {
                ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
              }
              puVar10 = *ppuVar8;
              if ((((puVar10 == *(undefined4 * PTR32 *)((int)this + 0x180)) ||
                   ((char)*piVar9 != *(char *)((int)puVar10 + 0x11))) ||
                  (*psVar11 != *(short *)((int)puVar10 + 0x12))) ||
                 ((*(byte *)(puVar10 + 4) & 1) != 0)) goto LAB_005ecef7;
            }
          }
          iVar6 = (*(int *)(gen_frame + 0xc)) + 1;
          (*(int *)(gen_frame + 0xc)) = iVar6;
        } while (iVar6 < *(int *)(psVar11 + 6));
      }
      uVar5 = (*(uint *)(gen_frame + 0x10)) + 1;
      (*(uint *)(gen_frame + 0x10)) = uVar5;
    } while ((int)uVar5 < *(int *)(param_1 + 0xc));
  }
  return uVar5;
}

/* ref: FUN_005ecf90 */
unsigned int F_005ecf90(void)
{
  GEN_ENTER(0x5ecf90u, 0u, 0u, 0u, 0u);
  F_005ec400(REFG(void * PTR32, 0x1379cb0),0);
  return 0;
}

/* ref: FUN_005ecfa0 */
unsigned int F_005ecfa0(void)
{
  GEN_ENTER(0x5ecfa0u, 0u, 0u, 0u, 0u);
  F_005ec400(REFG(void * PTR32, 0x1379cb0),0);
  return 0;
}

/* ref: FUN_005ecfb0 */
byte F_005ecfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ecfb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) == 1) {
    bVar1 = F_005e9e00(this);
    uVar2 = (uint)bVar1;
    if (bVar1 != 0) {
      bVar1 = F_005e9e80(this);
      return bVar1;
    }
  }
  else {
    uVar2 = *(int *)((int)this + 8) - 2;
    if (uVar2 == 0) {
      bVar1 = F_005e9f00(this);
      uVar2 = (uint)bVar1;
      if (bVar1 != 0) {
        *(undefined4 *)((int)this + 8) = 3;
      }
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005ecfe0 */
byte F_005ecfe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ecfe0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  if ((((REFG(int, 0x1379cb0) != 0) && (iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x20), iVar1 != 0)) &&
      (2 < *(int *)(iVar1 + 4))) && (*(int *)(iVar1 + 0x14) != 0)) {
    F_00615aa0((undefined *)(iVar1 + 0xc),&(*(int *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[0]));
    if ((*(int *)(gen_frame + 0x8)) != *(int *)(iVar1 + 0x10)) {
      return *(byte *)((*(int *)(gen_frame + 0x8)) + 0x10);
    }
  }
  return 0xff;
}

/* ref: FUN_005ed040 */
uint F_005ed040(void)
{
  GEN_ENTER(0x5ed040u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_005ec4c0(REFG(void * PTR32, 0x1379cb0));
  return uVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf1 */
uint F_005ed050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ed050u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)&gen_args[0])[0x20] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x20] & 0xfe);
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))) = *(*(undefined4 * PTR32 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(undefined4 * PTR32 *)&gen_args[1])[8];
  (*(undefined * PTR32 *)&gen_args[0])[0x28] = (undefined1)
               ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] ^ (*((byte *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 6))) ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0x28]) & 0xf);
  (*(undefined * PTR32 *)&gen_args[0])[0x28] = (undefined1)(*((char *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 7))) << 4 | (byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf);
  (*(undefined * PTR32 *)&gen_args[0])[0x2a] = *((undefined *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[1]) + 0x1d)));
  puVar1 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)&gen_args[1])[4]));
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = *puVar1;
  *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = puVar1[1];
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))))((*(undefined * PTR32 *)&gen_args[0]));
  if ((char)uVar4 != '\0') {
    (*(undefined * PTR32 *)&gen_args[0])[0x20] = (undefined1)((byte)(*(undefined * PTR32 *)&gen_args[0])[0x20] & 0xf9);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))))((*(undefined * PTR32 *)&gen_args[0]),puVar2[5]);
  if ((*(undefined * PTR32 *)&gen_args[0])[0x2a] == (undefined1)0xff) {
    uVar4 = F_00a1b490((*(undefined * PTR32 *)&gen_args[0]) + 0x10);
    if (((uVar4 == 0xffffffff) && (uVar4 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8))), uVar4 != 0)) &&
       (*(undefined * PTR32 *)(uVar4 + 4) != (undefined *)0x0)) {
      bVar3 = F_005ec610(*(undefined * PTR32 *)(uVar4 + 4),(uint)(byte)(*(undefined * PTR32 *)&gen_args[0])[0x11],
                           (uint)*((ushort *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x12))),*((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x14))),
                           (int)&(*(undefined * PTR32 *)(gen_frame + 0x8)) + 3,(int)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3);
      uVar4 = CONCAT31(extraout_var,bVar3);
      if (bVar3 != 0) {
        (*(undefined * PTR32 *)&gen_args[0])[0x2b] = (undefined1)
                     ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b] ^ ((*((undefined1 *)GEN_TOP(((char *)&(*(undefined4 * PTR32 *)&gen_args[1]) + 3)))) << 6 ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b]) & 0x40);
      }
    }
  }
  return uVar4;
}

/* ref: FUN_005ed120 */
uint F_005ed120(unsigned int gen_a0)
{
  GEN_ENTER(0x5ed120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_0060f280(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar1 = *(uint *)((int)this + 4);
  *(uint *)(uVar1 + 8) = uVar1;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_005ed150 */
uint F_005ed150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed150u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614a80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return (int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20;
  }
  return 0;
}

/* ref: FUN_005ed2f0 */
byte F_005ed2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed2f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 4);
  F_00614a80((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    return (*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0xffffffe0;
  }
  return 0;
}

/* ref: FUN_005ed340 */
uint F_005ed340(unsigned int gen_a0)
{
  GEN_ENTER(0x5ed340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,900);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_005ed3a0 */
byte F_005ed3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed3a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_004ff470(&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[1]),0,0);
  F_00615ec0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  return (*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
}

/* ref: FUN_005ed3e0 */
byte F_005ed3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed3e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_2 + 4);
  while( true ) {
    if (piVar1 == *(int * PTR32 *)(param_2 + 8)) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = piVar1 + 1;
  }
  F_00c46e20(piVar1,piVar1 + 1,(*(int *)(param_2 + 8) - (int)(piVar1 + 1) >> 2) * 4);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -4;
  return 1;
}

/* ref: FUN_005ed650 */
uint F_005ed650(unsigned int gen_a0)
{
  GEN_ENTER(0x5ed650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *(int *)((int)this + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0x10) - iVar1 >> 2) * 4,0x385);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  return uVar2;
}

/* ref: FUN_005ed6a0 */
uint F_005ed6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ed6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined * this_00;
  
  if (*(int *)((int)this + 8) == 0) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  if ((*(int *)((int)this + 0x9c) != 0) && (this_00 != (undefined *)0x0)) {
    this_00 = (undefined *)F_005eccb0(this_00,*(int *)((int)this + 0x9c));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9c);
  if (puVar1 != (undefined4 *)0x0) {
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)*puVar1)(puVar1,1)));
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  return (uint)this_00;
}

/* ref: FUN_005ed6f0 */
unsigned int F_005ed6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ed6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  char * pcVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  
  F_005ed050(this,param_1,0);
  *(undefined4 *)((int)this + 0x34) = param_2;
  *(byte *)((int)this + 0x44) =
       *(byte *)((int)this + 0x44) ^
       (*(char *)(param_3 + 0x20) != '\0' ^ *(byte *)((int)this + 0x44)) & 1;
  *(byte *)((int)this + 0x44) =
       ((*(char *)(param_3 + 0x21) != '\0') * '\x02' ^ *(byte *)((int)this + 0x44)) & 2 ^
       *(byte *)((int)this + 0x44);
  pcVar1 = ((char *)GEN_TOP((*(int *)(param_3 + 0x10) + param_3)));
  if (*pcVar1 != '\0') {
    if (*(int *)((int)this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    puVar2 = (undefined4 *)F_00509330((undefined *)(iVar4 + 0x14c),pcVar1);
    *(undefined4 *)((int)this + 0x38) = *puVar2;
  }
  F_00c4d9ef((int)this + 0x4c,0x10,*(int *)(param_3 + 4) + param_3,0xffffffff);
  *(int *)((int)this + 0x3c) = param_3;
  *(undefined4 *)((int)this + 0x40) = param_4;
  F_005dbde0(this,param_3,param_4);
  if ((*(byte *)((int)this + 0x44) & 1) != 0) {
    if (*(int *)((int)this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    if (*(int *)(iVar4 + 0x10) == 7) {
      *(byte *)((int)this + 0x44) = *(byte *)((int)this + 0x44) & 0xfe;
      if ((*(char *)((int)this + 0x48) == '\x05') || (*(char *)((int)this + 0x48) == '\x06')) {
        if ((*(uint *)((int)this + 0x30) & 0xc0000000) != 0) {
          F_00b5b550(REFG(void * PTR32, 0x14c4e84),(undefined4 *)((int)this + 0x30));
          *(undefined4 *)((int)this + 0x30) = 0;
        }
        F_005dbde0(this,*(undefined4 *)((int)this + 0x3c),*(undefined4 *)((int)this + 0x40));
      }
      uVar3 = ~(uint)(*(byte *)((int)this + 0x44) >> 1) & 1;
      *(char *)((int)this + 0x48) = (uVar3 == 0) + '\x01';
      if ((*(uint *)((int)this + 0x30) & 0xc0000000) != 0) {
        F_00b5b3e0(REFG(void * PTR32, 0x14c4e84),(int)this + 0x30,uVar3,0xffffffff);
      }
    }
  }
  return 0;
}

/* ref: FUN_005ed810 */
uint F_005ed810(unsigned int gen_a0)
{
  GEN_ENTER(0x5ed810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  iVar1 = *(int *)((int)this + 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 0xc) - iVar1 >> 2) * 4,0x385);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar2;
}

/* ref: FUN_005ed860 */
uint F_005ed860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  uVar7 = F_005dc4f0(this);
  if (*param_1 != '\0') {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0xc) = 3;
    *(undefined4 *)((int)this + 0x1c) = 3;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 4);
    iVar2 = *(int *)(param_1 + 0x18);
    *(int *)((int)this + 0x24) = iVar2;
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x10);
    if (4 < iVar2) {
      *(undefined4 *)((int)this + 0x24) = 1;
    }
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x20)));
    puVar8 = puVar3;
    puVar5 = (undefined4 *)*puVar3;
    while (puVar5 != puVar3) {
      puVar8 = (undefined4 *)F_005e39e0(this,puVar5[4],param_1);
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        puVar4 = (undefined4 *)puVar5[2];
        if (*(char *)((int)puVar4 + 0x15) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x15);
          puVar8 = (undefined4 *)*puVar4;
          while (puVar5 = puVar4, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x15);
            puVar4 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar5[1] + 0x15);
          puVar6 = (undefined4 *)puVar5[1];
          puVar4 = puVar5;
          while ((puVar8 = puVar6, puVar5 = puVar8, cVar1 == '\0' &&
                 (puVar4 == (undefined4 *)puVar8[2]))) {
            cVar1 = *(char *)((int)puVar8[1] + 0x15);
            puVar6 = (undefined4 *)puVar8[1];
            puVar4 = puVar8;
          }
        }
      }
    }
    return (uint)puVar8;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar7;
}

/* ref: FUN_005ed940 */
uint F_005ed940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  
  uVar6 = F_005d6be0(this);
  if (*param_1 == '\0') {
    *(undefined4 *)((int)this + 0xc) = 0;
    return uVar6;
  }
  F_005d6c60(this,(uint)param_1);
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 0x20)));
  puVar7 = puVar2;
  puVar4 = (undefined4 *)*puVar2;
  while (puVar4 != puVar2) {
    puVar7 = (undefined4 *)F_005e3b70(this,puVar4[4],param_1);
    if (*(char *)((int)puVar4 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar4[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar7 = (undefined4 *)*puVar3;
        while (puVar4 = puVar3, cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar7 + 0x15);
          puVar3 = puVar7;
          puVar7 = (undefined4 *)*puVar7;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar4[1] + 0x15);
        puVar5 = (undefined4 *)puVar4[1];
        puVar3 = puVar4;
        while ((puVar7 = puVar5, puVar4 = puVar7, cVar1 == '\0' &&
               (puVar3 == (undefined4 *)puVar7[2]))) {
          cVar1 = *(char *)((int)puVar7[1] + 0x15);
          puVar5 = (undefined4 *)puVar7[1];
          puVar3 = puVar7;
        }
      }
    }
  }
  return (uint)puVar7;
}

/* ref: FUN_005ed9e0 */
uint F_005ed9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ed9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar1 = *(undefined4 *)((int)this + 0x10);
  uVar4 = *(undefined4 *)((int)this + 0x1c);
  uVar2 = *(undefined4 *)((int)this + 0x2c);
  uVar5 = *(undefined4 *)((int)this + 0xc);
  uVar3 = *(undefined4 *)((int)this + 0x30);
  uVar6 = F_005ed940(this,param_1);
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0xc) = uVar5;
  *(undefined4 *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar4;
  *(undefined4 *)((int)this + 0x30) = uVar3;
  return uVar6;
}

/* ref: FUN_005eda50 */
unsigned int F_005eda50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eda50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x20);
  *(byte *)((int)this + 0x16) =
       *(byte *)((int)this + 0x16) ^ (*(byte *)((int)this + 0x16) ^ (byte)param_1) & 1;
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[4];
    uVar7 = ((code *)*(gen_code32 *)(*piVar4 + 0xcc))(piVar4);
    if ((char)uVar7 != '\0') {
      ((code *)*(gen_code32 *)(*piVar4 + 0xe0))(piVar4,param_1);
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x15);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x15);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005edaf0 */
unsigned int F_005edaf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5edaf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x20);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0xd8))((undefined4)gen_fl2bits(param_2));
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

/* ref: FUN_005edb70 */
unsigned int F_005edb70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5edb70u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x20);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0x98))(param_2,(undefined4)gen_fl2bits(param_3));
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

/* ref: FUN_005edbf0 */
ushort F_005edbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5edbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  
  F_005eda50(this,(uint)(*(char *)(param_1 + 0x10) != '\0'));
  *(byte *)((int)this + 0x16) =
       *(byte *)((int)this + 0x16) ^
       ((*(char *)(param_1 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)this + 0x16)) & 2;
  uVar1 = *(ushort *)(param_1 + 0x18);
  *(ushort *)((int)this + 0x12) = uVar1;
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(param_1 + 0x1a);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf1 */
uint F_005edc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edc40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  this[0x8c] = (undefined1)
               ((byte)this[0x8c] ^
               ((*((char *)GEN_TOP((*(int *)(param_1 + 4) + 0x41))) != '\0') * '\x02' ^ (byte)this[0x8c]) & 2);
  F_005ed050((undefined *)this,param_1,param_2);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(this + 8) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
  }
  puVar3 = (uint *)F_00509330((undefined *)(iVar2 + 0x14c),param_2);
  uVar1 = *puVar3;
  *(uint *)(this + 0x70) = uVar1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ExitRangeLayoutInstance::vf1 */
uint F_005edcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PrefetchRangeLayoutInstance::vf1 */
uint F_005edce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::MapRangeLayoutInstance::vf1 */
uint F_005edd10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edd10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::EventRangeLayoutInstance::vf1 */
uint F_005edd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edd40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CollisionBoxLayoutInstance::vf1 */
uint F_005edd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(uint *)(this + 0x74) = *(uint *)(this + 0x74) & 0xfffffff1 | 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf1 */
uint F_005edda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edda0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 3;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::NaviMeshRangeLayoutInstance::vf1 */
uint F_005eddd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eddd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::DoorRangeLayoutInstance::vf1 */
uint F_005ede00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ede00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::GimmickRangeLayoutInstance::vf1 */
uint F_005ede30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ede30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ClickableRangeLayoutInstance::vf1 */
uint F_005ede60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ede60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::FateRangeLayoutInstance::vf1 */
uint F_005ede90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ede90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x60) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf1 */
uint F_005edec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 1;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf1 */
uint F_005edef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 2;
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf1 */
uint F_005edf20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edf20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  *(undefined4 *)(this + 0x40) = 4;
  *(undefined4 *)(this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 0x34)));
  return uVar1;
}

/* ref: FUN_005edf50 */
uint F_005edf50(unsigned int gen_a0)
{
  GEN_ENTER(0x5edf50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5884));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a586c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *(int *)((int)this + 0xa0);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0xa8) - iVar1 >> 2) * 4,0x385);
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  uVar2 = F_005095f0((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::ClientPathLayoutInstance::vf1 */
uint F_005edfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::ServerPathLayoutInstance::vf1 */
uint F_005edfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5edfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ed050((undefined *)this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005edff0 */
uint F_005edff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5edff0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    *((undefined1 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x12))) = 1;
  }
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
}

/* ref: FUN_005ee020 */
uint F_005ee020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    pvVar1 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    *(int *)((int)pvVar1 + 0x14U) = *(int *)((int)pvVar1 + 0x14U) + 1;
    *(undefined1 *)((int)pvVar1 + 0x12) = 1;
  }
  return (uint)pvVar1;
}

/* ref: FUN_005ee0a0 */
byte F_005ee0a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5ee0a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[0]);
  F_00614c10((undefined *)((*(uint *)&gen_args[0]) + 0x30),&(*(uint *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) != *(uint *)((*(uint *)&gen_args[0]) + 0x34)) {
    iVar1 = *(int *)((*(uint *)(gen_frame + 0x8)) + 0x10);
    bVar3 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x24)) || GEN_ISNAN((float10)(*(float *)&gen_args[2]));
    uVar2 = (*(uint *)(gen_frame + 0x8)) & 0xff;
    if (bVar3 == (bVar3 || (float10)*(float *)(iVar1 + 0x24) == (float10)(*(float *)&gen_args[2]))) {
      *(float *)(iVar1 + 0x24) = (*(float *)&gen_args[2]);
      *(undefined1 *)(iVar1 + 0x12) = 1;
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005ee0f0 */
double F_005ee0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee0f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return (double)*((float *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x24)));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return ((double)GEN_TOD((&REFG(float, 0x10a2824))[iVar2 * 10]));
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return (double)REFG(float, 0x10a2824);
}

/* ref: FUN_005ee160 */
uint F_005ee160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee160u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return *((uint *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x18)));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (&REFG(undefined4, 0x10a2818))[iVar2 * 10];
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return REFG(undefined4, 0x10a2818);
}

/* ref: FUN_005ee1d0 */
uint F_005ee1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee1d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 100)));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (&REFG(undefined4, 0x10a2814))[iVar2 * 10];
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return REFG(undefined4, 0x10a2814);
}

/* ref: FUN_005ee240 */
uint F_005ee240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee240u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    *(*(undefined1 * PTR32 *)&gen_args[2]) = *(undefined1 *)(iVar1 + 0x1c);
    return iVar1 + 0x68;
  }
  return 0;
}

/* ref: FUN_005ee280 */
uint F_005ee280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (uint)(&REFG(undefined4, 0x10a2810) + iVar2 * 10);
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return 0x10a2810;
}

/* ref: FUN_005ee2f0 */
uint F_005ee2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee2f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (uint)(&REFG(undefined4, 0x10a2810) + iVar2 * 10);
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return 0x10a2810;
}

/* ref: FUN_005ee360 */
uint F_005ee360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00614c80(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (((*(uint *)&gen_args[1]) & 0xff) == *(uint *)((int)&REFG(undefined4, 0x10a2810) + uVar1)) {
      return (uint)(&REFG(undefined4, 0x10a2810) + iVar2 * 10);
    }
    uVar1 = uVar1 + 0x28;
    iVar2 = iVar2 + 1;
  } while (uVar1 < 0x208);
  return 0x10a2810;
}

/* ref: FUN_005ee3d0 */
unsigned int F_005ee3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  undefined4 uVar2;
  undefined * this_00;
  double dVar3;
  double dVar4;
  undefined4 * puVar5;
  float * pfVar6;
  float * pfVar7;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  *(undefined1 *)((int)this + 0x18) = 0;
  if (*(char *)((int)this_00 + 0x55) != '\0') {
    return 0;
  }
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x10))) {
  case 0: ;
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)((int)this_00 + 0x60);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this_00 + 100);
    uVar2 = *(undefined4 *)((int)this_00 + 0x68);
    goto LAB_005ee448;
  case 1: ;
    F_005ec040(this,(int)this + 0x20);
    break;
  case 2: ;
    *(undefined1 *)((int)this + 0x18) = 1;
    F_005e99d0((int)this + 0x20);
    break;
  case 3: ;
    F_005d8d70((int)this + 0x20);
    break;
  case 4: ;
  case 5: ;
    puVar5 = (undefined4 *)F_005d5c20(this_00);
    *(undefined4 *)((int)this + 0x20) = *puVar5;
    *(undefined4 *)((int)this + 0x24) = puVar5[1];
    uVar2 = puVar5[2];
LAB_005ee448: ;
    *(undefined4 *)((int)this + 0x28) = uVar2;
  }
  dVar4 = *(double *)&REFG(undefined, 0x10a5998);
  dVar3 = *(double *)&REFG(undefined, 0x10912a8);
  pfVar1 = (float *)((int)this + 0x20);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094724);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10a59a0);
  pfVar7 = pfVar1;
  if (!((double)*(float *)((int)this + 0x20) < *(double *)&REFG(undefined, 0x10912a8))) {
    pfVar7 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(*(double *)&REFG(undefined, 0x10a5998) < (double)*pfVar7)) {
    pfVar7 = &(*(float *)(gen_frame + 0x4));
  }
  pfVar6 = (float *)((int)this + 0x24);
  *pfVar1 = *pfVar7;
  if (!((double)*(float *)((int)this + 0x24) < dVar3)) {
    pfVar6 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(dVar4 < (double)*pfVar6)) {
    pfVar6 = &(*(float *)(gen_frame + 0x4));
  }
  pfVar7 = (float *)((int)this + 0x28);
  *(float *)((int)this + 0x24) = *pfVar6;
  if (!((double)*(float *)((int)this + 0x28) < dVar3)) {
    pfVar7 = &(*(float *)(gen_frame + 0x8));
  }
  if (!(dVar4 < (double)*pfVar7)) {
    pfVar7 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)((int)this + 0x28) = *pfVar7;
  F_005e1470(*(undefined * PTR32 *)((int)this + 4),pfVar1,param_1);
  return 0;
}

/* ref: FUN_005ee510 */
unsigned int F_005ee510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x6c)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x6c)) {
    do {
      if (param_1 == piVar4[4]) {
        piVar4[4] = 0;
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x6c));
  }
  piVar4 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x7c)));
  if (piVar4 != *(int * PTR32 *)((int)this + 0x7c)) {
    do {
      if (param_1 == piVar4[4]) {
        piVar4[4] = 0;
      }
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x15);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != *(int * PTR32 *)((int)this + 0x7c));
  }
  return 0;
}

/* ref: FUN_005ee5c0 */
unsigned int F_005ee5c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ee5c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 * puVar9;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x8c);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    puVar4 = (undefined4 *)puVar3[6];
    puVar5 = (undefined4 *)*puVar4;
    while (puVar5 != puVar4) {
      piVar6 = (int *)puVar5[3];
      uVar7 = piVar6[9];
      if ((uVar7 & 1) != 0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0x70))(piVar6);
      }
      if ((uVar7 & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0x80))(piVar6);
      }
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        puVar8 = (undefined4 *)puVar5[2];
        if (*(char *)((int)puVar8 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar8 + 0x11);
          puVar5 = puVar8;
          puVar8 = (undefined4 *)*puVar8;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar8 + 0x11);
            puVar5 = puVar8;
            puVar8 = (undefined4 *)*puVar8;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar5[1] + 0x11);
          puVar9 = (undefined4 *)puVar5[1];
          puVar8 = puVar5;
          while ((puVar5 = puVar9, cVar1 == '\0' && (puVar8 == (undefined4 *)puVar5[2]))) {
            cVar1 = *(char *)((int)puVar5[1] + 0x11);
            puVar9 = (undefined4 *)puVar5[1];
            puVar8 = puVar5;
          }
        }
      }
    }
    if (*(char *)((int)puVar3 + 0x25) == '\0') {
      puVar4 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar4 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar4 + 0x25);
        puVar3 = puVar4;
        puVar4 = (undefined4 *)*puVar4;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x25);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x25);
        puVar5 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x25);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ee6d0 */
byte F_005ee6d0(void)
{
  GEN_ENTER(0x5ee6d0u, 0u, 0u, 0u, 0u);
  if ((REFG(void * PTR32, 0x1379cb0) != (undefined *)0x0) && (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x10))) != 0)) {
    F_005ec540(REFG(void * PTR32, 0x1379cb0));
    F_005ec400(REFG(void * PTR32, 0x1379cb0),1);
  }
  return 1;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf3 */
byte F_005ee700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  byte bVar5;
  undefined4 * puVar6;
  
  if (((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x180) != 0)) &&
     (4 < *((int *)GEN_TOP((*(int *)(this + 0x14) + 0x10))))) {
    F_005ec540(this);
  }
  puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x10) + 0xc))))(*(int * PTR32 *)(this + 0x10),param_1)));
  if (*(int *)(this + 0x44) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x40);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)puVar3[6] + 0xc))((int *)puVar3[6],param_1)));
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar6 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar6 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x21);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar6 + 0x21);
            puVar3 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar6, puVar6 = puVar3, cVar1 == '\0' &&
                 (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    puVar2 = *(undefined4 * PTR32 *)(this + 0x30);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)puVar3[6] + 0xc))((int *)puVar3[6],param_1)));
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar6 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar6 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x21);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar6 + 0x21);
            puVar3 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar6, puVar6 = puVar3, cVar1 == '\0' &&
                 (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  this_00 = *(undefined * PTR32 *)(this + 0x20);
  if (*(int *)((int)this_00 + 0x14) != 0) {
    if (*(int *)((int)this_00 + 8) == 1) {
      bVar5 = F_005e9e00(this_00);
      puVar6 = (undefined4 *)(uint)bVar5;
      if (bVar5 != 0) {
        bVar5 = F_005e9e80(this_00);
        puVar6 = (undefined4 *)(uint)bVar5;
      }
    }
    else {
      puVar6 = ((undefined4 *)GEN_TOP((*(int *)((int)this_00 + 8) + -2)));
      if (puVar6 == (undefined4 *)0x0) {
        bVar5 = F_005e9f00(this_00);
        puVar6 = (undefined4 *)(uint)bVar5;
        if (bVar5 != 0) {
          *(undefined4 *)((int)this_00 + 8) = 3;
          return bVar5;
        }
      }
    }
  }
  return (byte)puVar6;
}

/* ref: FUN_005ee840 */
unsigned int F_005ee840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee840u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  uVar3 = (*(uint *)&gen_args[2]);
  uVar1 = (uint)(*(undefined * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[2]);
    (*(uint *)(gen_frame + 0x8)) = (uint)(*(undefined * PTR32 *)&gen_args[1]);
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c)));
    uVar4 = F_0060aeb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)(gen_frame + 0x4)));
    (*(uint *)&gen_args[2]) = uVar4;
    if (((uVar4 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 4)))) || (uVar1 < *(uint *)(uVar4 + 0x14))) ||
       ((uVar1 <= *(uint *)(uVar4 + 0x14) && (uVar3 < *(uint *)(uVar4 + 0x10))))) {
      (*(uint *)(gen_frame + 0x8)) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[1]) + 4)));
      puVar5 = &(*(uint *)(gen_frame + 0x8));
    }
    else {
      puVar5 = &(*(uint *)&gen_args[2]);
    }
    uVar1 = *puVar5;
    if (uVar1 != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) {
      piVar2 = *(int * PTR32 *)(uVar1 + 0x18);
      if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) == piVar2) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
      }
      if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) == piVar2) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
      }
      if (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) == piVar2) {
        *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      ((code *)*(gen_code32 *)*piVar2)(piVar2,1);
      F_006143c0((*(undefined * PTR32 *)&gen_args[1]),&(*(undefined * PTR32 *)&gen_args[1]),uVar1);
    }
  }
  return 0;
}

/* ref: FUN_005ee8f0 */
uint F_005ee8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ee8f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar2 = (*(uint *)&gen_args[2]);
  uVar1 = (*(uint *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(uint *)&gen_args[1]) == 0xffff) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  }
  if ((*(uint *)&gen_args[1]) == 0xffffffff) {
    return *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  }
  (*(uint *)(gen_frame + 0x0)) = (*(uint *)&gen_args[2]);
  (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[1]);
  uVar3 = F_0060aeb0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))),&(*(uint *)(gen_frame + 0x0)));
  (*(uint *)&gen_args[1]) = uVar3;
  if (((uVar3 == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)))) || (uVar1 < *(uint *)(uVar3 + 0x14))) ||
     ((uVar1 <= *(uint *)(uVar3 + 0x14) && (uVar2 < *(uint *)(uVar3 + 0x10))))) {
    (*(uint *)&gen_args[2]) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    piVar4 = (int *)&(*(uint *)&gen_args[2]);
  }
  else {
    piVar4 = (int *)&(*(uint *)&gen_args[1]);
  }
  if (*piVar4 != *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x30)) {
    return *(uint *)(*piVar4 + 0x18);
  }
  return 0;
}

/* ref: FUN_005ee980 */
unsigned int F_005ee980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ee980u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = (*(int *)&gen_args[1]);
  if (((*(int *)&gen_args[1]) != 0) &&
     (F_006146e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))),&(*(int *)(gen_frame + 0x8)),&(*(int *)&gen_args[1])),
     (*(int *)(gen_frame + 0x8)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c))))) {
    F_00513f60(iVar1,0,0);
    puVar2 = (undefined4 *)F_004296a0(0x14,0,900);
    *puVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c)));
    puVar2[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c)));
    puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x17c)));
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != (int *)0x0) {
      puVar2[3] = iVar1;
    }
    F_00617d20(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))),((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  }
  return 0;
}

/* ref: FUN_005eea10 */
unsigned int F_005eea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eea10u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  if ((*(int * PTR32 *)&gen_args[1]) != (int *)0x0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x20))))((*(int * PTR32 *)&gen_args[1]));
    if (uVar3 != 0) {
      F_005ee980((*(undefined * PTR32 *)&gen_args[0]),uVar3);
      return 0;
    }
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
    if (uVar3 != 0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
      bVar2 = F_005e9bb0((*(undefined * PTR32 *)&gen_args[0]),uVar3);
      if (bVar2 != 0) {
        (*(int * PTR32 *)&gen_args[1]) = (int *)F_00513dc0(uVar3,0,0,0);
        F_00619c50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))),((undefined1 *)(gen_frame + 0x4)),&(*(int * PTR32 *)&gen_args[1]));
      }
    }
  }
  return 0;
}

/* ref: FUN_005eea90 */
unsigned int F_005eea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eea90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  (*(uint *)(gen_frame + 0x14)) = uVar5;
  (*(uint *)(gen_frame + 0x18)) = 0;
  if (uVar5 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x78) + (*(uint *)(gen_frame + 0x18)) * 4))) + 0x10)));
      if (piVar1 != (int *)0x0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1);
        if (uVar3 == 0) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1);
          if (uVar3 != 0) {
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
            bVar2 = F_005e9bb0(this,uVar3);
            if (bVar2 != 0) {
              uVar5 = F_00513dc0(uVar3,0,0,0);
              puVar4 = (undefined4 *)F_004296a0(0x14,0,900);
              *puVar4 = *(undefined4 *)((int)this + 0x17c);
              puVar4[1] = *(undefined4 *)((int)this + 0x17c);
              puVar4[2] = *(undefined4 *)((int)this + 0x17c);
              *(undefined2 *)(puVar4 + 4) = 0;
              if (puVar4 + 3 != (uint *)0x0) {
                puVar4[3] = uVar5;
              }
              F_00617d20((undefined *)((int)this + 0x178),((undefined1 *)(gen_frame + 0xc)),puVar4,0);
              uVar5 = (*(uint *)(gen_frame + 0x14));
            }
          }
        }
        else {
          F_005ee980(this,uVar3);
        }
      }
      uVar3 = (*(uint *)(gen_frame + 0x18)) + 1;
      (*(uint *)(gen_frame + 0x18)) = uVar3;
    } while (uVar3 < uVar5);
  }
  return 0;
}

/* ref: FUN_005eeb90 */
uint F_005eeb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eeb90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 0x44)));
    F_00614c80((undefined *)(iVar1 + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x34)) {
      iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      *(*(undefined1 * PTR32 *)&gen_args[2]) = *(undefined1 *)(iVar1 + 0x1c);
      return iVar1 + 0x68;
    }
  }
  return 0;
}

/* ref: FUN_005eebe0 */
uint F_005eebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eebe0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined * pvVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  pvVar2 = (undefined *)0x0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0) {
    iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) + 0x44)));
    F_00614c10((undefined *)(iVar1 + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x34)) {
      pvVar2 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
      *(undefined1 *)((int)pvVar2 + 0x12) = 1;
    }
  }
  return (uint)pvVar2;
}

/* ref: FUN_005eec20 */
double F_005eec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eec20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  double dVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    dVar1 = F_005ee0f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x44))),param_1);
    return dVar1;
  }
  return (double)*((float *)GEN_TOP(((int)this + (param_1 & 0xff) * 4 + 0x4c)));
}

/* ref: FUN_005eec40 */
byte F_005eec40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5eec40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[0]);
  *((float *)GEN_TOP(((*(uint *)&gen_args[0]) + 0x4c + ((*(uint *)&gen_args[1]) & 0xff) * 4))) = (*(float *)&gen_args[2]);
  uVar2 = 0;
  if (*(int *)((*(uint *)&gen_args[0]) + 0x14) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)((*(uint *)&gen_args[0]) + 0x14) + 0x44)));
    F_00614c10((undefined *)(iVar1 + 0x30),&(*(uint *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
    uVar2 = (*(uint *)(gen_frame + 0x8));
    if ((*(uint *)(gen_frame + 0x8)) != *(uint *)(iVar1 + 0x34)) {
      iVar1 = *(int *)((*(uint *)(gen_frame + 0x8)) + 0x10);
      bVar3 = GEN_ISNAN((float10)*(float *)(iVar1 + 0x24)) || GEN_ISNAN((float10)(*(float *)&gen_args[2]));
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0xff;
      if (bVar3 == (bVar3 || (float10)*(float *)(iVar1 + 0x24) == (float10)(*(float *)&gen_args[2]))) {
        *(float *)(iVar1 + 0x24) = (*(float *)&gen_args[2]);
        *(undefined1 *)(iVar1 + 0x12) = 1;
      }
    }
  }
  return (byte)uVar2;
}

/* ref: FUN_005eecb0 */
uint F_005eecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_005ee280(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x44))),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005eecd0 */
uint F_005eecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eecd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_005ee2f0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x44))),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005eecf0 */
uint F_005eecf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_005ee360(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x44))),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005eed10 */
uint F_005eed10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eed10u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    piVar6 = (int *)(*(int * PTR32 *)(gen_frame + 0x8))[4];
    piVar2 = (int *)piVar6[1];
    piVar4 = (int *)*piVar2;
    while (piVar4 != piVar2) {
      piVar3 = (int *)piVar4[6];
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0xcc))(piVar3)));
      if ((char)piVar6 != '\0') {
        ((code *)*(gen_code32 *)(*piVar3 + 0xe0))(piVar3,(*(undefined4 *)&gen_args[2]));
        piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 200))(piVar3,(*(undefined4 *)&gen_args[2]))));
      }
      if (*(char *)((int)piVar4 + 0x21) == '\0') {
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar6 = (int *)*piVar3;
          while (piVar4 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x21);
            piVar3 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x21);
          piVar5 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar6 = piVar5, piVar4 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar6[2])))
          {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005eede0 */
unsigned int F_005eede0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5eede0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x110);
  *(undefined1 *)((int)this + 0x50) = (undefined1)param_1;
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    if (((char)param_2 == '\0') || (*(int *)((int)puVar3[4] + 8) != 0xffff)) {
      F_005eda50((undefined *)puVar3[4],param_1);
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

/* ref: FUN_005eee70 */
uint F_005eee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eee70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar1 = (int *)F_00619470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar1 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_005eeeb0 */
unsigned int F_005eeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5eeeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0xf0) - *(int *)((int)this + 0xec) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xec) + uVar3 * 4))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + uVar3 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xec) + uVar3 * 4))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  iVar1 = *(int *)((int)this + 0xec);
  if (iVar1 != *(int *)((int)this + 0xf0)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0xf0),0);
    *(int *)((int)this + 0xf0) = iVar1;
  }
  return 0;
}

/* ref: FUN_005eef40 */
unsigned int F_005eef40(unsigned int gen_a0)
{
  GEN_ENTER(0x5eef40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))) != 0) {
        F_0050c620(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))),0,0);
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar3 * 4))) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  iVar1 = *(int *)((int)this + 0xdc);
  if (iVar1 != *(int *)((int)this + 0xe0)) {
    F_00c46e20(iVar1,*(int *)((int)this + 0xe0),0);
    *(int *)((int)this + 0xe0) = iVar1;
  }
  return 0;
}

/* ref: FUN_005eefd0 */
uint F_005eefd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eefd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[1]) != -1) {
    uVar7 = F_00619400(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 8))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar5 + 0x10);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)pvVar5 + 0x10) = 0;
      }
      uVar7 = F_00614d60(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))),&(*(int *)&gen_args[1]),pvVar5);
    }
    return uVar7;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)));
  puVar3 = (undefined4 *)*puVar2;
  (*(int *)&gen_args[1]) = 0xffffffff;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 8))((int *)puVar3[4]);
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
        puVar6 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar7 = F_00614fc0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0xfc));
  return uVar7;
}

/* ref: FUN_005ef0c0 */
unsigned int F_005ef0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef0c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((*(int *)&gen_args[2]) == -1) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)));
    puVar3 = (undefined4 *)*puVar2;
    (*(int *)&gen_args[2]) = 0xffffffff;
    while (puVar3 != puVar2) {
      ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0x10))((int *)puVar3[4],(*(undefined4 *)&gen_args[1]));
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
  }
  else {
    F_00619400(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xfc))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[2]));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x100)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 0x10))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10),(*(undefined4 *)&gen_args[1]));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_005ef180 */
uint F_005ef180(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5ef180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  byte bVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 in_EAX = 0;
  uint3 uVar8;
  undefined4 * puVar7;
  uint uVar9;
  uint uVar10;
  
  uVar8 = (uint3)((uint)in_EAX >> 8);
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    puVar7 = ((undefined4 *)GEN_TOP(CONCAT31(uVar8,1)));
  }
  else {
    puVar7 = (undefined4 *)((uint)uVar8 << 8);
  }
  uVar9 = param_1[1] - *param_1 >> 2;
  uVar10 = 0;
  if (uVar9 != 0) {
    bVar4 = (byte)puVar7;
    do {
      puVar7 = *(undefined4 * PTR32 *)(*param_1 + uVar10 * 4);
      puVar2 = (undefined4 *)puVar7[8];
      *(byte *)((int)puVar7 + 0x16) = *(byte *)((int)puVar7 + 0x16) & 0xfe | bVar4;
      puVar5 = (undefined4 *)*puVar2;
      while (puVar5 != puVar2) {
        puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)puVar5[4] + 0xd8))((undefined4)gen_fl2bits(param_2))));
        if (*(char *)((int)puVar5 + 0x15) == '\0') {
          puVar3 = (undefined4 *)puVar5[2];
          if (*(char *)((int)puVar3 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x15);
            puVar7 = (undefined4 *)*puVar3;
            while (puVar5 = puVar3, cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x15);
              puVar3 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar5[1] + 0x15);
            puVar6 = (undefined4 *)puVar5[1];
            puVar3 = puVar5;
            while ((puVar7 = puVar6, puVar5 = puVar7, cVar1 == '\0' &&
                   (puVar3 == (undefined4 *)puVar7[2]))) {
              cVar1 = *(char *)((int)puVar7[1] + 0x15);
              puVar6 = (undefined4 *)puVar7[1];
              puVar3 = puVar7;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar9);
  }
  return (uint)puVar7;
}

/* ref: FUN_005ef260 */
unsigned int F_005ef260(unsigned int gen_a0)
{
  GEN_ENTER(0x5ef260u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[1] - *param_1 >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      piVar1 = *(int * PTR32 *)(*param_1 + uVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar2 = *param_1;
  if (iVar2 != param_1[1]) {
    F_00c46e20(iVar2,param_1[1],0);
    param_1[1] = iVar2;
  }
  return 0;
}

/* ref: FUN_005ef2d0 */
uint F_005ef2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  if ((short)(*(undefined4 *)&gen_args[1]) != 0) {
    uVar7 = F_00619470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
    pvVar5 = (*(undefined * PTR32 *)(gen_frame + 0x8));
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 8))))(*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
      puVar2 = *(undefined4 * PTR32 *)((int)pvVar5 + 0x10);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)pvVar5 + 0x10) = 0;
      }
      uVar7 = F_00615050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(undefined4 *)&gen_args[1]),pvVar5);
    }
    return uVar7;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)));
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 8))((int *)puVar3[4]);
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
        puVar6 = (undefined4 *)puVar3[1];
        puVar4 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar6 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
        }
      }
    }
  }
  uVar7 = F_006152b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10c));
  return uVar7;
}

/* ref: FUN_005ef3c0 */
uint F_005ef3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef3c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  uint uVar7;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  piVar6 = (int *)0x0;
  if ((short)(*(undefined4 *)&gen_args[2]) == 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)));
    piVar4 = (int *)*piVar2;
    while (piVar4 != piVar2) {
      piVar6 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)piVar4[4] + 0x10))((int *)piVar4[4],(*(undefined4 *)&gen_args[1]))));
      if (*(char *)((int)piVar4 + 0x15) == '\0') {
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x15) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x15);
          piVar6 = (int *)*piVar3;
          while (piVar4 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0x15);
            piVar3 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar5 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar6 = piVar5, piVar4 = piVar6, cVar1 == '\0' && (piVar3 == (int *)piVar6[2])))
          {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
          }
        }
      }
    }
  }
  else {
    F_00619470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[2]));
    piVar6 = (*(int * PTR32 *)(gen_frame + 0x8));
    if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
      uVar7 = ((code *)*(gen_code32 *)(*(int *)(*(int * PTR32 *)(gen_frame + 0x8))[4] + 0x10))((int *)(*(int * PTR32 *)(gen_frame + 0x8))[4],(*(undefined4 *)&gen_args[1]));
      return uVar7;
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005ef480 */
uint F_005ef480(unsigned int gen_a0)
{
  GEN_ENTER(0x5ef480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0x3b;
  F_00619550((undefined *)((int)this + 0x13c),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  puVar6 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x4)) != *(undefined4 * PTR32 *)((int)this + 0x140)) {
    puVar6 = (undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x4))[4];
    puVar2 = (undefined4 *)puVar6[1];
    puVar4 = (undefined4 *)*puVar2;
    while (puVar4 != puVar2) {
      puVar6 = (undefined4 *)F_005dfab0((undefined *)puVar4[6]);
      if (*(char *)((int)puVar4 + 0x21) == '\0') {
        puVar3 = (undefined4 *)puVar4[2];
        if (*(char *)((int)puVar3 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x21);
          puVar6 = (undefined4 *)*puVar3;
          while (puVar4 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar6 + 0x21);
            puVar3 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar4[1] + 0x21);
          puVar5 = (undefined4 *)puVar4[1];
          puVar3 = puVar4;
          while ((puVar6 = puVar5, puVar4 = puVar6, cVar1 == '\0' &&
                 (puVar3 == (undefined4 *)puVar6[2]))) {
            cVar1 = *(char *)((int)puVar6[1] + 0x21);
            puVar5 = (undefined4 *)puVar6[1];
            puVar3 = puVar6;
          }
        }
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_005ef520 */
byte F_005ef520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef520u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  undefined * this_00;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint * puVar6;
  
  iVar4 = (*(uint *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x144))) == 0) {
    return 1;
  }
  (*(uint *)&gen_args[1]) = CONCAT13(*(undefined1 *)((*(uint *)&gen_args[1]) + 0x11),(undefined3)(*(uint *)&gen_args[1]));
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(uint *)(gen_frame + 0x8)),(int)&(*(uint *)&gen_args[1]) + 3);
  if ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    uVar1 = *(uint *)(iVar4 + 0x14);
    uVar2 = *(uint *)(iVar4 + 0x18);
    this_00 = *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x8)) + 0x10);
    (*(uint *)(gen_frame + 0x4)) = uVar2;
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    uVar5 = F_0060b410(this_00,&(*(uint *)(gen_frame + 0x4)));
    uVar3 = *(uint *)((int)this_00 + 4);
    (*(uint *)&gen_args[1]) = uVar5;
    if (((uVar5 == uVar3) || (uVar1 < *(uint *)(uVar5 + 0x14))) ||
       ((uVar1 <= *(uint *)(uVar5 + 0x14) && (uVar2 < *(uint *)(uVar5 + 0x10))))) {
      (*(uint *)(gen_frame + 0x8)) = uVar3;
      puVar6 = &(*(uint *)(gen_frame + 0x8));
    }
    else {
      puVar6 = &(*(uint *)&gen_args[1]);
    }
    if (*puVar6 != uVar3) {
      F_00615fa0(this_00,&(*(uint *)&gen_args[1]),*puVar6);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005ef5d0 */
unsigned int F_005ef5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ef5d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  char cVar4;
  int * piVar5;
  int * piVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10) + 4)));
    piVar6 = (int *)*piVar2;
    if (piVar6 != piVar2) {
      cVar4 = (char)(*(undefined4 *)&gen_args[3]);
      do {
        piVar3 = (int *)piVar6[6];
        if (((cVar4 == '\0') || ((*(byte *)(piVar3 + 8) & 2) == 0)) &&
           (((char)(*(undefined4 *)&gen_args[2]) == '\0' || (*(short *)((int)piVar3 + 0x12) != -1)))) {
          ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
        }
        if (*(char *)((int)piVar6 + 0x21) == '\0') {
          piVar3 = (int *)piVar6[2];
          if (*(char *)((int)piVar3 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar3 + 0x21);
              piVar6 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x21);
            piVar5 = (int *)piVar6[1];
            piVar3 = piVar6;
            while ((piVar6 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x21);
              piVar5 = (int *)piVar6[1];
              piVar3 = piVar6;
            }
          }
        }
      } while (piVar6 != piVar2);
    }
  }
  return 0;
}

/* ref: FUN_005ef690 */
uint F_005ef690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ef690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(uint *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  uVar3 = (*(uint *)&gen_args[3]);
  uVar2 = (*(uint *)&gen_args[2]);
  if ((*(uint *)(gen_frame + 0x8)) != *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    this_00 = *(undefined * PTR32 *)((*(uint *)(gen_frame + 0x8)) + 0x10);
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)&gen_args[3]);
    (*(uint *)(gen_frame + 0x8)) = (*(uint *)&gen_args[2]);
    uVar4 = F_0060b410(this_00,&(*(uint *)(gen_frame + 0x4)));
    uVar1 = *(uint *)((int)this_00 + 4);
    (*(uint *)&gen_args[1]) = uVar4;
    if (((uVar4 == uVar1) || (uVar2 < *(uint *)(uVar4 + 0x14))) ||
       ((uVar2 <= *(uint *)(uVar4 + 0x14) && (uVar3 < *(uint *)(uVar4 + 0x10))))) {
      (*(uint *)&gen_args[2]) = uVar1;
      puVar5 = &(*(uint *)&gen_args[2]);
    }
    else {
      puVar5 = &(*(uint *)&gen_args[1]);
    }
    if (*puVar5 != uVar1) {
      return *(uint *)(*puVar5 + 0x18);
    }
  }
  return 0;
}

/* ref: FUN_005ef720 */
uint F_005ef720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if (*(int *)(param_2 + 0x40) != 0x3000) {
    return 0;
  }
  uVar1 = F_005ef690(this,param_1,*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                       1);
  return uVar1;
}

/* ref: FUN_005ef750 */
uint F_005ef750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ef750u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    return 0;
  }
  return *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
}

/* ref: FUN_005ef790 */
byte F_005ef790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ef790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = F_005ef690(this,0x34,param_1,param_2,1);
  if (uVar1 == 0) {
    return 0;
  }
  F_005dbf70(uVar1,param_3,0);
  return 1;
}

/* ref: FUN_005ef7d0 */
byte F_005ef7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5ef7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ef690(this,0x34,param_1,param_2,1);
  if (uVar1 == 0) {
    return 0;
  }
  *(undefined1 *)(uVar1 + 0x48) = 3;
  if ((*(uint *)(uVar1 + 0x30) & 0xc0000000) != 0) {
    F_00b5b440(REFG(void * PTR32, 0x14c4e84),(uint *)(uVar1 + 0x30),0);
  }
  return 1;
}

/* ref: FUN_005ef820 */
unsigned int F_005ef820(unsigned int gen_a0)
{
  GEN_ENTER(0x5ef820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint * puVar7;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0x34;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this + 0x140)) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      *(undefined1 *)(iVar4 + 0x48) = 3;
      puVar7 = (uint *)(iVar4 + 0x30);
      if ((*puVar7 & 0xc0000000) != 0) {
        F_00b5b440(REFG(void * PTR32, 0x14c4e84),puVar7,0);
      }
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ef8e0 */
unsigned int F_005ef8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ef8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  char cVar2;
  int * piVar3;
  undefined * this_00;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 0x34;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)((int)this + 0x140)) {
    piVar3 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x4))[4] + 4);
    piVar6 = (int *)*piVar3;
    (*(int * PTR32 *)(gen_frame + 0x4)) = piVar3;
    if (piVar6 != piVar3) {
      do {
        this_00 = (undefined *)piVar6[6];
        if ((*(byte *)((int)this_00 + 0x44) & 1) != 0) {
          puVar1 = (uint *)((int)this_00 + 0x30);
          *(undefined1 *)((int)this_00 + 0x48) = 3;
          if ((*(uint *)((int)this_00 + 0x30) & 0xc0000000) != 0) {
            F_00b5b440(REFG(void * PTR32, 0x14c4e84),puVar1,0);
          }
          *(byte *)((int)this_00 + 0x44) = *(byte *)((int)this_00 + 0x44) & 0xfe;
          if ((*(char *)((int)this_00 + 0x48) == '\x05') ||
             (*(char *)((int)this_00 + 0x48) == '\x06')) {
            if ((*puVar1 & 0xc0000000) != 0) {
              F_00b5b550(REFG(void * PTR32, 0x14c4e84),puVar1);
              *puVar1 = 0;
            }
            F_005dbde0(this_00,*(undefined4 *)((int)this_00 + 0x3c),
                         *(undefined4 *)((int)this_00 + 0x40));
          }
          uVar5 = ~(uint)(*(byte *)((int)this_00 + 0x44) >> 1) & 1;
          *(char *)((int)this_00 + 0x48) = (uVar5 == 0) + '\x01';
          if ((*puVar1 & 0xc0000000) != 0) {
            F_00b5b3e0(REFG(void * PTR32, 0x14c4e84),puVar1,uVar5,0xffffffff);
          }
        }
        if (*(char *)((int)piVar6 + 0x21) == '\0') {
          piVar3 = (int *)piVar6[2];
          if (*(char *)((int)piVar3 + 0x21) == '\0') {
            cVar2 = *(char *)(*piVar3 + 0x21);
            piVar6 = piVar3;
            piVar3 = (int *)*piVar3;
            while (cVar2 == '\0') {
              cVar2 = *(char *)(*piVar3 + 0x21);
              piVar6 = piVar3;
              piVar3 = (int *)*piVar3;
            }
          }
          else {
            cVar2 = *(char *)(piVar6[1] + 0x21);
            piVar4 = (int *)piVar6[1];
            piVar3 = piVar6;
            while ((piVar6 = piVar4, cVar2 == '\0' && (piVar3 == (int *)piVar6[2]))) {
              cVar2 = *(char *)(piVar6[1] + 0x21);
              piVar4 = (int *)piVar6[1];
              piVar3 = piVar6;
            }
          }
        }
      } while (piVar6 != (*(int * PTR32 *)(gen_frame + 0x4)));
    }
  }
  return 0;
}

/* ref: FUN_005efa20 */
byte F_005efa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5efa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  this_00 = (undefined *)F_005ef690(this,6,param_1,0,1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_005dbaf0(this_00,param_2,param_3,0);
  return 1;
}

/* ref: FUN_005efa60 */
uint F_005efa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5efa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  byte bVar6;
  undefined3 extraout_var = 0;
  int * piVar7;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 6;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int * PTR32 *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)((int)this + 0x140)) {
    piVar7 = (int *)(*(int * PTR32 *)(gen_frame + 0x4))[4];
    piVar2 = (int *)piVar7[1];
    piVar4 = (int *)*piVar2;
    while (piVar4 != piVar2) {
      bVar6 = F_005dbaf0((undefined *)piVar4[6],param_1,param_2,0);
      piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
      if (*(char *)((int)piVar4 + 0x21) == '\0') {
        piVar3 = (int *)piVar4[2];
        if (*(char *)((int)piVar3 + 0x21) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x21);
          piVar7 = (int *)*piVar3;
          while (piVar4 = piVar3, cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0x21);
            piVar3 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x21);
          piVar5 = (int *)piVar4[1];
          piVar3 = piVar4;
          while ((piVar7 = piVar5, piVar4 = piVar7, cVar1 == '\0' && (piVar3 == (int *)piVar7[2])))
          {
            cVar1 = *(char *)(piVar7[1] + 0x21);
            piVar5 = (int *)piVar7[1];
            piVar3 = piVar7;
          }
        }
      }
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005efb00 */
unsigned int F_005efb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5efb00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 6;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this + 0x140)) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      if (((*(int *)(iVar4 + 0x9c) != 0) &&
          (uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x10))))(*(int * PTR32 *)(iVar4 + 0x9c)),
          (char)uVar7 != '\0')) && (*(int *)(iVar4 + 0x9c) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x20))))
                  (*(int * PTR32 *)(iVar4 + 0x9c),param_1 & 0xff,param_2);
      }
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005efbe0 */
unsigned int F_005efbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5efbe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 6;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this + 0x140)) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      if (((*(int *)(iVar4 + 0x9c) != 0) &&
          (uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x14))))(*(int * PTR32 *)(iVar4 + 0x9c)),
          (char)uVar7 != '\0')) && (*(int *)(iVar4 + 0x9c) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x20))))
                  (*(int * PTR32 *)(iVar4 + 0x9c),param_1 & 0xff,param_2);
      }
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005efcc0 */
unsigned int F_005efcc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5efcc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  
  (*(undefined1 *)(gen_frame + 0xb)) = 6;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this + 0x140)) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x4)) + 0x10) + 4)));
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      iVar4 = puVar3[6];
      if (((*(int *)(iVar4 + 0x9c) != 0) &&
          (uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x18))))(*(int * PTR32 *)(iVar4 + 0x9c)),
          (char)uVar7 != '\0')) && (*(int *)(iVar4 + 0x9c) != 0)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar4 + 0x9c) + 0x20))))
                  (*(int * PTR32 *)(iVar4 + 0x9c),param_1 & 0xff,param_2);
      }
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar5 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x21);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x21);
            puVar3 = puVar5;
            puVar5 = (undefined4 *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar6 = (undefined4 *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005efda0 */
byte F_005efda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5efda0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  this_00 = (undefined *)F_005ef690(this,6,param_1,0,1);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  F_005e34a0(this_00,param_2,param_3,0);
  return 1;
}

/* ref: FUN_005efde0 */
uint F_005efde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5efde0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined * this_00;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  undefined3 uVar9;
  uint uVar7;
  int * piVar8;
  undefined3 extraout_var = 0;
  int iVar10;
  int * piVar11;
  bool bVar12;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)&gen_args[3]);
  uVar3 = (*(uint *)&gen_args[2]);
  piVar8 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    piVar8 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x8))[4] + 4);
    piVar11 = (int *)*piVar8;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar8;
    if (piVar11 != piVar8) {
      do {
        uVar9 = (undefined3)((uint)((int)(uintptr_t)piVar8) >> 8);
        piVar8 = ((int *)GEN_TOP(CONCAT31(uVar9,(char)(*(undefined4 *)&gen_args[1]))));
        if ((char)(*(undefined4 *)&gen_args[1]) == '\x06') {
          this_00 = (undefined *)piVar11[6];
          if (((uVar3 < 0x10) && (*(int *)((int)this_00 + 0x78) != *(int *)((int)this_00 + 0x7c)))
             && (bVar12 = *(char *)((int)this_00 + uVar3 + 0xc5) != '\0',
                piVar8 = ((int *)GEN_TOP(CONCAT31(uVar9,bVar12))), bVar12)) {
            bVar6 = F_005e34a0(this_00,uVar3,uVar4,0);
            piVar8 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
          }
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '\x10') {
          piVar8 = (int *)piVar11[6];
          iVar10 = piVar8[0xe];
          if (iVar10 != -1) {
            (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(undefined1 *)((int)piVar8 + 0x11));
            uVar7 = (*(uint *)&gen_args[2]);
LAB_005efe47: ;
            piVar8 = (int *)F_00a1b870(uVar7,iVar10);
            if ((piVar8 != (int *)0x0) && (piVar8[0x3c] != 0)) {
              piVar8 = (int *)F_00a5f860(piVar8,uVar3,uVar4);
            }
          }
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '-') {
          piVar8 = (int *)piVar11[6];
          iVar10 = piVar8[0xe];
          if (iVar10 != -1) {
            (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),*(undefined1 *)((int)piVar8 + 0x11));
            uVar7 = (*(uint *)&gen_args[3]);
            goto LAB_005efe47;
          }
        }
        if (*(char *)((int)piVar11 + 0x21) == '\0') {
          piVar8 = (int *)piVar11[2];
          if (*(char *)((int)piVar8 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x21);
            piVar11 = piVar8;
            piVar8 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x21);
              piVar11 = piVar8;
              piVar8 = (int *)*piVar8;
            }
          }
          else {
            cVar1 = *(char *)(piVar11[1] + 0x21);
            piVar5 = (int *)piVar11[1];
            piVar2 = piVar11;
            while ((piVar8 = piVar5, piVar11 = piVar8, cVar1 == '\0' && (piVar2 == (int *)piVar8[2])
                   )) {
              cVar1 = *(char *)(piVar8[1] + 0x21);
              piVar5 = (int *)piVar8[1];
              piVar2 = piVar8;
            }
          }
        }
      } while (piVar11 != (*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return (uint)piVar8;
}

/* ref: FUN_005eff00 */
unsigned int F_005eff00(unsigned int gen_a0)
{
  GEN_ENTER(0x5eff00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18c);
  if (iVar1 != *(int *)((int)this + 400)) {
    F_00c46e20(iVar1,*(int *)((int)this + 400),0);
    *(int *)((int)this + 400) = iVar1;
  }
  return 0;
}

/* ref: FUN_005eff40 */
uint F_005eff40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5eff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,900);
  *puVar1 = *(undefined4 *)((int)this + 0x1a0);
  puVar1[1] = *(undefined4 *)((int)this + 0x1a0);
  puVar1[2] = *(undefined4 *)((int)this + 0x1a0);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
  }
  uVar2 = F_00618430((undefined *)((int)this + 0x19c),((undefined1 *)(gen_frame + 0x4)),puVar1,0);
  return uVar2;
}

/* ref: FUN_005effa0 */
uint F_005effa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5effa0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  F_006105d0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)&gen_args[1]));
  uVar1 = F_00616e70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x19c))),&(*(undefined4 *)&gen_args[1]),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return uVar1;
}

/* ref: FUN_005effe0 */
uint F_005effe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5effe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  if (*(int *)(REFG(int, 0x1379cb0) + 0x14) != 0) {
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1379cb0) + 0x14) + 0x44)));
    ((undefined1 *)(gen_frame + 0x8))[0] = (undefined1)param_1;
    F_00614c80((undefined *)(iVar1 + 0x30),&(*(int *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0x34)) {
      iVar1 = *(int *)((*(int *)(gen_frame + 0x4)) + 0x10);
      *param_2 = *(undefined1 *)(iVar1 + 0x1c);
      return iVar1 + 0x68;
    }
  }
  return 0;
}

/* ref: FUN_005f0030 */
uint F_005f0030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5f0030u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  undefined * pvVar2;
  
  (*(undefined2 *)(gen_frame + 0x24)) = 0x34fe;
  (*(undefined2 *)(gen_frame + 0x26)) = *(undefined2 *)(param_1 + 8);
  (*(undefined4 *)(gen_frame + 0x28)) = param_3;
  if (param_2 == (int *)0x0) {
    puVar1 = &REFG(float, 0x1302df0);
  }
  else {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0xfc))(param_2)));
  }
  (*(undefined2 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined2 *)(gen_frame + 0x24));
  (*(undefined4 * PTR32 *)(gen_frame + 0x14)) = puVar1;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  ((int *)(gen_frame + 0x0))[1] = 0;
  (*(undefined1 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 3;
  (*(undefined1 *)(gen_frame + 0x1c)) = (undefined1)param_5;
  (*(undefined1 *)(gen_frame + 0x1d)) = (undefined1)param_6;
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  pvVar2 = (undefined *)F_00406b90(0x60,0,0);
  if (pvVar2 == (undefined *)0x0) {
    pvVar2 = (undefined *)0x0;
  }
  else {
    pvVar2 = (undefined *)F_005dbd00(pvVar2);
  }
  F_005ed6f0(pvVar2,((int *)(gen_frame + 0x0)),param_2,param_7,param_8);
  return (uint)pvVar2;
}

/* ref: FUN_005f00e0 */
byte F_005f00e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619280((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
    *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) + -1;
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x20) < 1) {
      F_00614760((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    }
    return 1;
  }
  return 0;
}

/* ref: FUN_005f0130 */
unsigned int F_005f0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f0130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined * this_00;
  undefined4 * puVar2;
  byte bVar3;
  char * pcVar4;
  char * pcVar5;
  int * piVar6;
  uint uVar7;
  undefined1 * puVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  uint local_10;
  uint local_c;
  int local_8;
  
  if (*(int *)((int)this + 8) != 0) {
    iVar9 = *(int *)(param_1 + 0xc);
    *(int *)((int)this + 0x10) = iVar9;
    local_10 = 0;
    if (iVar9 != 0) {
      local_8 = 0;
      do {
        iVar9 = *(int *)(param_1 + 8) + local_8;
        uVar7 = *(uint *)(iVar9 + 4 + param_1);
        iVar10 = iVar9 + param_1;
        pcVar4 = ((char *)GEN_TOP((*(int *)(iVar9 + param_1) + iVar10)));
        pcVar5 = ((char *)GEN_TOP((*(int *)(iVar10 + 0xc) + iVar10)));
        if (uVar7 < 8) {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + local_10 * 4))) = *(undefined4 *)(iVar10 + 8);
          iVar9 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_10 * 4)));
          local_c = 0;
          if ((iVar9 != 0) &&
             (piVar6 = (int *)F_005ef690(*(undefined * PTR32 *)((int)this + 4),0x2f,iVar9,0,1),
             piVar6 != (int *)0x0)) {
            local_c = ((code *)*(gen_code32 *)(*piVar6 + 0x5c))(piVar6);
          }
          this_00 = *(undefined * PTR32 *)((int)this + 8);
          iVar9 = uVar7 * 0xa0;
          *(uint *)(iVar9 + 0x100 + (int)this_00) = local_c;
          F_0068b4a0(this_00,local_c);
          if ((((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) &&
              (bVar3 = F_006a4d60(*(undefined * PTR32 *)((int)this + 8),uVar7,pcVar4), bVar3 == 0)) ||
             (((pcVar5 != (char *)0x0 && (*pcVar5 != '\0')) &&
              (bVar3 = F_006a4d90(*(undefined * PTR32 *)((int)this + 8),uVar7,pcVar5), bVar3 == 0)))) {
            F_0068fa50(*(undefined * PTR32 *)((int)this + 8));
            puVar2 = *(undefined4 * PTR32 *)((int)this + 8);
            if (puVar2 != (undefined4 *)0x0) {
              ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
              *(undefined4 *)((int)this + 8) = 0;
            }
            if (*(int *)((int)this + 0xc) == 0) {
              return 0;
            }
            F_00406b30(*(int *)((int)this + 0xc));
            *(undefined4 *)((int)this + 0xc) = 0;
            return 0;
          }
          *((undefined4 *)GEN_TOP((iVar9 + 0x10c + *(int *)((int)this + 8)))) = *(undefined4 *)(iVar10 + 0x10);
          *((undefined4 *)GEN_TOP((iVar9 + 0x110 + *(int *)((int)this + 8)))) = *(undefined4 *)(iVar10 + 0x14);
        }
        local_8 = local_8 + 0x18;
        local_10 = local_10 + 1;
      } while (local_10 < *(uint *)((int)this + 0x10));
    }
    *((float *)GEN_TOP((*(int *)((int)this + 8) + 0x4c))) = (float)*(int *)(param_1 + 0x10);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x50))) = *(undefined4 *)(param_1 + 0x1c);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x54))) = *(undefined4 *)(param_1 + 0x20);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x58))) = *(undefined4 *)(param_1 + 0x18);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x5c))) = *(undefined4 *)(param_1 + 0x24);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x60))) = *(undefined4 *)(param_1 + 0x28);
    iVar9 = *(int *)(param_1 + 0x30);
    bVar3 = *(byte *)(iVar9 + 1 + param_1);
    bVar1 = *(byte *)(iVar9 + 2 + param_1);
    fVar11 = (float10)*(double *)&REFG(undefined, 0x1088100);
    iVar10 = *(int *)((int)this + 8);
    *(float *)(iVar10 + 100) = ((float)GEN_TOF(((float10)*(byte *)(iVar9 + param_1) / fVar11)));
    *(float *)(iVar10 + 0x68) = (float)((float10)bVar3 / fVar11);
    *(float *)(iVar10 + 0x6c) = (float)((float10)bVar1 / fVar11);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x70))) = *(undefined4 *)(param_1 + 0x2c);
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x74))) = *(undefined4 *)(param_1 + 0x3c);
    *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x78))) = *(char *)(param_1 + 2) != '\0';
    *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x79))) = *(char *)(param_1 + 0x3a) != '\0';
    *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x7a))) = *(char *)(param_1 + 0x38) != '\0';
    *((bool *)GEN_TOP((*(int *)((int)this + 8) + 0x7b))) = *(char *)(param_1 + 0x39) != '\0';
    F_00697f80(((undefined *)GEN_TOP((*(int *)((int)this + 8) + 0x2c))));
    uVar7 = 0;
    puVar8 = ((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x40) + param_1 + 4)));
    do {
      *((undefined1 *)GEN_TOP((uVar7 + 0x2c + *(int *)((int)this + 8)))) = puVar8[-4];
      *((undefined1 *)GEN_TOP((uVar7 + 0x2d + *(int *)((int)this + 8)))) = puVar8[-2];
      *((undefined1 *)GEN_TOP((uVar7 + 0x2e + *(int *)((int)this + 8)))) = *puVar8;
      *((undefined1 *)GEN_TOP((uVar7 + 0x2f + *(int *)((int)this + 8)))) = puVar8[2];
      uVar7 = uVar7 + 4;
      puVar8 = puVar8 + 8;
    } while (uVar7 < 0x20);
  }
  return 0;
}

/* ref: FUN_005f03c0 */
uint F_005f03c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f03c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar1 = F_00513dc0(param_1,0,0,0);
  *(uint *)this = uVar1;
  return (uint)this;
}

/* ref: FUN_005f03f0 */
uint F_005f03f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f03f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint uVar8;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    piVar4 = (int *)puVar3[4];
    if (piVar4 != (int *)0x0) {
      if (*piVar4 != 0) {
        F_0050c620(*piVar4,0,0);
        *piVar4 = 0;
      }
      iVar5 = piVar4[1];
      if (iVar5 != 0) {
        F_00429760(iVar5,(piVar4[3] - iVar5 >> 2) * 4,900);
      }
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[3] = 0;
      F_00406ad0(piVar4);
      puVar3[4] = 0;
    }
    if (*(char *)((int)puVar3 + 0x15) == '\0') {
      puVar6 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar6 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x15);
        puVar3 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x15);
          puVar3 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x15);
        puVar7 = (undefined4 *)puVar3[1];
        puVar6 = puVar3;
        while ((puVar3 = puVar7, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x15);
          puVar7 = (undefined4 *)puVar3[1];
          puVar6 = puVar3;
        }
      }
    }
  }
  uVar8 = F_00615df0((undefined *)((int)this + 8));
  return uVar8;
}

/* ref: FUN_005f04c0 */
byte F_005f04c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f04c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int * piVar8;
  int * piVar9;
  
  *(byte *)((*(int *)&gen_args[1]) + 0x2b) = *(byte *)((*(int *)&gen_args[1]) + 0x2b) & 0xfe;
  bVar5 = 0;
  if ((*(int *)&gen_args[2]) == 0) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    piVar9 = (int *)*piVar2;
    if (piVar9 != piVar2) {
      do {
        iVar3 = piVar9[4];
        for (piVar8 = *(int * PTR32 *)(iVar3 + 4); piVar8 != *(int * PTR32 *)(iVar3 + 8); piVar8 = piVar8 + 1) {
          if (*piVar8 == (*(int *)&gen_args[1])) {
            F_00c46e20(piVar8,piVar8 + 1,((int)*(int * PTR32 *)(iVar3 + 8) - (int)(piVar8 + 1) >> 2) * 4);
            *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + -4;
            bVar5 = 1;
            goto LAB_005f05c2;
          }
        }
        if (*(char *)((int)piVar9 + 0x15) == '\0') {
          piVar8 = (int *)piVar9[2];
          if (*(char *)((int)piVar8 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar8 + 0x15);
            piVar9 = piVar8;
            piVar8 = (int *)*piVar8;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar8 + 0x15);
              piVar9 = piVar8;
              piVar8 = (int *)*piVar8;
            }
          }
          else {
            cVar1 = *(char *)(piVar9[1] + 0x15);
            piVar4 = (int *)piVar9[1];
            piVar8 = piVar9;
            while ((piVar9 = piVar4, cVar1 == '\0' && (piVar8 == (int *)piVar9[2]))) {
              cVar1 = *(char *)(piVar9[1] + 0x15);
              piVar4 = (int *)piVar9[1];
              piVar8 = piVar9;
            }
          }
        }
        if (piVar9 == piVar2) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    F_004ff470(&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]),0,0);
    F_00615e50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[2]));
    if (((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) &&
       (bVar5 = F_005ed3e0((*(int *)&gen_args[1]),(*(int * PTR32 *)(gen_frame + 0x8))[4]), piVar9 = (*(int * PTR32 *)(gen_frame + 0x8)), bVar5 != 0)) {
LAB_005f05c2: ;
      piVar2 = (int *)piVar9[4];
      uVar7 = 0;
      uVar6 = piVar2[2] - piVar2[1] >> 2;
      if (uVar6 != 0) {
        piVar8 = (int *)piVar2[1];
        do {
          if (*piVar8 != 0) {
            return bVar5;
          }
          uVar7 = uVar7 + 1;
          piVar8 = piVar8 + 1;
        } while (uVar7 < uVar6);
      }
      if (*piVar2 != 0) {
        F_0050c620(*piVar2,0,0);
        *piVar2 = 0;
      }
      iVar3 = piVar2[1];
      if (iVar3 != 0) {
        F_00429760(iVar3,(piVar2[3] - iVar3 >> 2) * 4,900);
      }
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
      F_00406ad0(piVar2);
      F_00615b90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(int *)&gen_args[1]),piVar9);
    }
  }
  return bVar5;
}

/* ref: FUN_005f07a0 */
unsigned int F_005f07a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f07a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(int *)((int)this + 0xc) - *(int *)((int)this + 8) >> 2;
  uVar4 = 0;
  if (uVar3 != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar4 * 4))) = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  iVar2 = *(int *)((int)this + 8);
  if (iVar2 != *(int *)((int)this + 0xc)) {
    F_00c46e20(iVar2,*(int *)((int)this + 0xc),0);
    *(int *)((int)this + 0xc) = iVar2;
  }
  return 0;
}

/* ref: FUN_005f0810 */
uint F_005f0810(unsigned int gen_a0)
{
  GEN_ENTER(0x5f0810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a59c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a59a8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  iVar1 = *(int *)((int)this + 0x8c);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x94) - iVar1 >> 2) * 4,0x385);
  }
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  iVar1 = *(int *)((int)this + 0x78);
  if (iVar1 != 0) {
    F_00429760(iVar1,(*(int *)((int)this + 0x80) - iVar1 >> 2) * 4,0x385);
  }
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  uVar2 = F_005095f0((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return uVar2;
}

/* ref: FUN_005f08c0 */
uint F_005f08c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f08c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0xa4);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_005ef690(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))),0x41,iVar1,0,1);
    return uVar2;
  }
  uVar2 = F_005ef690((undefined *)0x0,0x41,iVar1,0,1);
  return uVar2;
}

/* ref: FUN_005f08f0 */
uint F_005f08f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f08f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar3 = 0, iVar1 != 0)) {
    puVar2 = (undefined4 *)F_004296a0(0x14,0,900);
    *puVar2 = *(undefined4 *)(iVar1 + 0x1a0);
    puVar2[1] = *(undefined4 *)(iVar1 + 0x1a0);
    puVar2[2] = *(undefined4 *)(iVar1 + 0x1a0);
    *(undefined2 *)(puVar2 + 4) = 0;
    if (puVar2 + 3 != (undefined4 *)0x0) {
      puVar2[3] = this;
    }
    uVar3 = F_00618430((undefined *)(iVar1 + 0x19c),((undefined1 *)(gen_frame + 0x4)),puVar2,0);
  }
  return uVar3;
}

/* ref: FUN_005f0960 */
uint F_005f0960(unsigned int gen_a0)
{
  GEN_ENTER(0x5f0960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((*(int *)((int)this + 8) != 0) &&
     (iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), uVar2 = 0, iVar1 != 0)) {
    this_00 = (undefined *)(iVar1 + 0x19c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_006105d0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    uVar2 = F_00616e70(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  }
  return uVar2;
}

/* ref: FUN_005f09d0 */
unsigned int F_005f09d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f09d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2;
  uVar5 = 0;
  if (uVar4 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4)));
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) != 0) {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4)));
        if (puVar2 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + uVar5 * 4))) = 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 != *(int *)((int)this + 8)) {
    F_00c46e20(iVar3,*(int *)((int)this + 8),0);
    *(int *)((int)this + 8) = iVar3;
  }
  return 0;
}

/* ref: FUN_005f0a50 */
byte F_005f0a50(unsigned int gen_a0)
{
  GEN_ENTER(0x5f0a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * piVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined * this_00;
  uint uVar5;
  undefined4 * puVar6;
  double dVar7;
  
  (*(uint *)(gen_frame + 0x16c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x170);
  piVar1 = *(int * PTR32 *)((int)this + 0x4c);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 4) != 0) {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 8)));
      if ((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 4), iVar2 == 0)) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *(undefined * PTR32 *)(iVar2 + 0x44);
      }
      (*(double *)(gen_frame + 0x38)) = (double)*(float *)((int)this + 0x18);
      dVar7 = F_005ee0f0(this_00,9);
      if ((!GEN_ISNAN((*(double *)(gen_frame + 0x38))) && !GEN_ISNAN(dVar7)) && !((*(double *)(gen_frame + 0x38)) <= dVar7)) goto LAB_005f0a81;
    }
    iVar2 = piVar1[0x18];
    bVar4 = 0;
    if (iVar2 == 1) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1);
      F_0054fa20(((undefined1 *)(gen_frame + 0xd0)),uVar5);
      F_005feb80(((undefined1 *)(gen_frame + 0x110)),((undefined1 *)(gen_frame + 0xd0)),&REFG(float, 0x1302c60));
      bVar4 = F_0060d1b0(((undefined1 *)(gen_frame + 0x110)));
    }
    else if (iVar2 == 2) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x104))(piVar1,&(*(undefined4 *)(gen_frame + 0x40)));
      bVar4 = F_0060d300(&(*(undefined4 *)(gen_frame + 0x40)));
    }
    else if (iVar2 == 3) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1);
      F_00607160(((undefined1 *)(gen_frame + 0x130)),uVar5);
      (*(undefined4 *)(gen_frame + 0x150)) = REFG(float, 0x1302c60);
      (*(undefined4 *)(gen_frame + 0x154)) = REFG(float, 0x1302c64);
      (*(undefined4 *)(gen_frame + 0x158)) = REFG(float, 0x1302c68);
      puVar6 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x4c) + 0xf4))))(*(int * PTR32 *)((int)this + 0x4c))));
      (*(undefined4 *)(gen_frame + 0x24)) = puVar6[1];
      (*(undefined4 *)(gen_frame + 0x20)) = 0;
      (*(undefined4 *)(gen_frame + 0x28)) = 0;
      (*(undefined4 *)(gen_frame + 0x40)) = 0;
      (*(uint *)(gen_frame + 0x44)) = puVar6[1] ^ REFG(uint, 0x10920d0);
      (*(undefined4 *)(gen_frame + 0x48)) = 0;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4)) = *puVar6;
      uVar3 = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 0));
      F_0054fa20(((undefined1 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x130)));
      F_004ee670(&(*(undefined4 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x20)),(uint)((undefined1 *)(gen_frame + 0x90)));
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)),((undefined1 *)(gen_frame + 0x130)));
      F_004ee670(&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(undefined4 *)(gen_frame + 0x40)),(uint)((undefined1 *)(gen_frame + 0x50)));
      (*(undefined4 *)(gen_frame + 0x0)) = (*(undefined4 *)(gen_frame + 0x20));
      (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)(gen_frame + 0x24));
      (*(undefined4 *)(gen_frame + 0x8)) = (*(undefined4 *)(gen_frame + 0x28));
      (*(undefined4 *)(gen_frame + 0xc)) = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x38)) + 4));
      (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x40));
      (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x44));
      (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
      bVar4 = F_0060d3e0(&(*(undefined4 *)(gen_frame + 0x0)));
      F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
      return bVar4;
    }
    F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
    return bVar4;
  }
LAB_005f0a81: ;
  F_00c47745((*(uint *)(gen_frame + 0x16c)) ^ (uint)(uint)(gen_frame + 0x170));
  return 0;
}

/* ref: FUN_005f0cd0 */
uint F_005f0cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f0cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  float fVar1;
  uint uVar2;
  uint uVar3;
  float * pfVar4;
  undefined * this_00;
  float10 fVar5;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(uint *)(gen_frame + 0x9c)) = uVar2;
  if (*(int *)((int)this + 0xc) == 8) {
    uVar2 = *(uint *)((int)this + 4);
    if (*(int *)(uVar2 + 0xa4) != 0) {
      if (*(int *)(uVar2 + 8) == 0) {
        this_00 = (undefined *)0x0;
      }
      else {
        this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4)));
      }
      uVar3 = F_005ef690(this_00,0x41,*(int *)(uVar2 + 0xa4),0,1);
      uVar2 = 0;
      if (uVar3 != 0) {
        if (*(int *)((int)this + 0x20) == 1) {
          F_005d89f0(uVar3,&(*(undefined4 *)(gen_frame + 0x10)),*(float *)((int)this + 0x24),
                       (uint)*(byte *)((int)this + 0x1d));
        }
        else if (*(int *)((int)this + 0x20) == 2) {
          F_005d89f0(uVar3,&(*(float *)(gen_frame + 0x20)),*(float *)((int)this + 0x24),
                       (uint)*(byte *)((int)this + 0x1d));
          F_005d9480(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x48)));
          (*(undefined4 *)(gen_frame + 0x10)) = 0;
          fVar1 = (float)((float10)(*(float *)(gen_frame + 0x48)) * (float10)REFG(double, 0x1088108));
          (*(float *)(gen_frame + 0x48)) = fVar1;
          fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar5;
          (*(float *)(gen_frame + 0x14)) = (float)fVar5;
          (*(undefined4 *)(gen_frame + 0x18)) = 0;
          fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar5;
          (*(float *)(gen_frame + 0x1c)) = (float)fVar5;
        }
        else {
          (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x50);
          (*(float *)(gen_frame + 0x14)) = *(float *)((int)this + 0x54);
          (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this + 0x58);
          (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x5c);
        }
        fVar1 = *(float *)((int)this + 0xc0);
        (*(float *)(gen_frame + 0x30)) = REFG(undefined4, 0x1302cf0);
        (*(float *)(gen_frame + 0x3c)) = REFG(undefined4, 0x1302cfc);
        (*(float *)(gen_frame + 0x34)) = gen_bits2f(REFG(undefined4, 0x1302cf4));
        (*(float *)(gen_frame + 0x38)) = REFG(undefined4, 0x1302cf8);
        if (GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) {
          (*(float *)(gen_frame + 0x30)) = 0.0;
          (*(float *)(gen_frame + 0x4c)) = *(float *)((int)this + 0xbc);
          (*(float *)(gen_frame + 0x34)) = 0.0;
          fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xbc) * (float10)REFG(double, 0x1088108))));
          (*(float *)(gen_frame + 0x48)) = fVar1;
          fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar5;
          (*(float *)(gen_frame + 0x38)) = (float)fVar5;
          fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
          (*(float *)(gen_frame + 0x4c)) = (float)fVar5;
          (*(float *)(gen_frame + 0x3c)) = (float)fVar5;
        }
        pfVar4 = (float *)F_004f6d80(&(*(float *)(gen_frame + 0x20)),(uint)&(*(float *)(gen_frame + 0x30)),(uint)&(*(undefined4 *)(gen_frame + 0x10)));
        (*(float *)(gen_frame + 0x30)) = *pfVar4;
        (*(float *)(gen_frame + 0x34)) = pfVar4[1];
        (*(float *)(gen_frame + 0x38)) = pfVar4[2];
        (*(float *)(gen_frame + 0x3c)) = pfVar4[3];
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xf0))))(*(int * PTR32 *)((int)this + 4),&(*(float *)(gen_frame + 0x30)));
        (*(float *)(gen_frame + 0x0)) = *(float *)((int)this + 0xac);
        (*(float *)(gen_frame + 0x4)) = *(float *)((int)this + 0x9c);
        (*(float *)(gen_frame + 0x8)) = (float)(float10)0;
        F_004ef0c0(((undefined1 *)(gen_frame + 0x50)),(uint)&(*(undefined4 *)(gen_frame + 0x10)));
        F_004eea10(&(*(float *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x50)));
        F_005d8960(uVar3,&(*(float *)(gen_frame + 0x20)),*(float *)((int)this + 0x24),(uint)*(byte *)((int)this + 0x1d))
        ;
        (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x8)));
        (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x0)));
        (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x4)));
        (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x28)) + (float10)(*(float *)(gen_frame + 0x8)));
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0xe8))))(*(int * PTR32 *)((int)this + 4),&(*(float *)(gen_frame + 0x20)));
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return uVar2;
}

/* ref: FUN_005f0f60 */
byte F_005f0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f0f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  if (param_1 == (ushort *)0x0) {
    *(uint *)((int)this + 8) = (uint)(ushort)param_2;
    *(ushort *)((int)this + 0x10) = (ushort)param_2;
    return (byte)(ushort)param_2;
  }
  *(uint *)((int)this + 8) = (uint)*param_1;
  *(ushort *)((int)this + 0x10) = (ushort)param_2;
  F_005eda50(this,(uint)((char)param_1[8] != '\0'));
  bVar1 = ((*(char *)((int)param_1 + 0x11) != '\0') * '\x02' ^ *(byte *)((int)this + 0x16)) & 2;
  *(byte *)((int)this + 0x16) = *(byte *)((int)this + 0x16) ^ bVar1;
  *(ushort *)((int)this + 0x12) = param_1[0xc];
  *(ushort *)((int)this + 0x14) = param_1[0xd];
  return bVar1;
}

/* ref: FUN_005f0fd0 */
byte F_005f0fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f0fd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined * pvVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x14);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    F_00616230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(int *)&gen_args[1]),(*(undefined * PTR32 *)(gen_frame + 0x8)));
    bVar2 = F_005ef520(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1);
    pvVar3 = (undefined *)(uint)bVar2;
  }
  return (byte)pvVar3;
}

/* ref: FUN_005f1020 */
uint F_005f1020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 0x54))) == '\0') {
    F_005ef520(*(undefined * PTR32 *)((int)this + 4),*param_1);
    F_005f04c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))),*param_1,0);
  }
  piVar1 = (int *)*param_1;
  if (*(int *)((int)this + 8) == 0xffff) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,0);
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    puVar2 = (undefined4 *)*param_1;
    if (puVar2[7] == -1) {
      if (puVar2 == (undefined4 *)0x0) {
        return uVar3;
      }
      uVar3 = ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *param_1 = 0;
      return uVar3;
    }
  }
  *param_1 = 0;
  return uVar3;
}

/* ref: FUN_005f1090 */
byte F_005f1090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1090u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    (*(undefined4 *)&gen_args[1]) = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    F_005f1020((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)&gen_args[1]));
    F_00616230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined4 *)&gen_args[1]),pvVar1);
    return 1;
  }
  return 0;
}

/* ref: FUN_005f10f0 */
uint F_005f10f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f10f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    if ((*(int *)&gen_args[2]) != -1) {
      if (*(char *)(uVar1 + 0x11) == '\x06') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x78) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
      if (*(char *)(uVar1 + 0x11) == '\a') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0xa0) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005f1150 */
uint F_005f1150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f1150u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    if ((*(int *)&gen_args[2]) != -1) {
      if (*(char *)(uVar1 + 0x11) == '\x06') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0x78) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
      if (*(char *)(uVar1 + 0x11) == '\a') {
        return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(uVar1 + 0xa0) + (*(int *)&gen_args[2]) * 4))) + 0x10)));
      }
    }
  }
  return uVar1;
}

/* ref: FUN_005f11c0 */
byte F_005f11c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5f11c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  float10 fVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x11c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x120);
  (*(undefined4 *)(gen_frame + 0x7c)) = param_2;
  (*(undefined4 *)(gen_frame + 0x74)) = param_3;
  (*(undefined4 *)(gen_frame + 0x70)) = param_4;
  iVar2 = param_5;
  if (param_5 == 0) {
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    (*(undefined4 *)(gen_frame + 0x78)) = *(undefined4 *)((int)this + 0x3c);
    F_00614a80((undefined *)(iVar2 + 0x15c),&(*(int *)(gen_frame + 0x6c)),&(*(undefined4 *)(gen_frame + 0x78)));
    if ((*(int *)(gen_frame + 0x6c)) == *(int *)(iVar2 + 0x160)) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*(int *)(gen_frame + 0x6c)) + 0x20;
    }
  }
  fVar1 = (float10)0;
  (*(float *)(gen_frame + 0x100)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0xd0)) = *(undefined4 *)(iVar2 + 0x40);
  (*(float *)(gen_frame + 0x104)) = (float)fVar1;
  (*(float *)(gen_frame + 0x108)) = (float)fVar1;
  (*(undefined4 *)(gen_frame + 0xd4)) = 0;
  (*(undefined4 *)(gen_frame + 0xd8)) = 0;
  (*(undefined4 *)(gen_frame + 0xe0)) = 0;
  (*(undefined4 *)(gen_frame + 0xe8)) = 0;
  (*(undefined4 *)(gen_frame + 0xf0)) = 0;
  (*(undefined4 *)(gen_frame + 0xf4)) = 0;
  (*(undefined4 *)(gen_frame + 0xe4)) = *(undefined4 *)(iVar2 + 0x44);
  (*(undefined4 *)(gen_frame + 0xf8)) = *(undefined4 *)(iVar2 + 0x48);
  F_004efe70(&(*(undefined4 *)(gen_frame + 0xd0)),iVar2 + 0x30);
  (*(float *)(gen_frame + 0x100)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x20) + (float10)(*(float *)(gen_frame + 0x100)))));
  (*(float *)(gen_frame + 0x104)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x24) + (float10)(*(float *)(gen_frame + 0x104)))));
  (*(float *)(gen_frame + 0x108)) = ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x28) + (float10)(*(float *)(gen_frame + 0x108)))));
  F_005fec10(((undefined1 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0xd0)),iVar2 + 0x50);
  F_005fe8d0(((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x80)));
  (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0xc0));
  (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0xc4));
  (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0xc8));
  F_00a1ec40(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x30)),(*(undefined4 *)(gen_frame + 0x70)));
  F_00a1f090(param_1,(*(undefined4 *)(gen_frame + 0x7c)),(*(undefined4 *)(gen_frame + 0x74)),((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x11c)) ^ (uint)(uint)(gen_frame + 0x120));
  return 1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf58 */
unsigned int F_005f1360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x30) != 0) {
    iVar1 = *(int *)(this + 0x30);
    *(undefined4 *)(iVar1 + 0x30) = *param_1;
    *(undefined4 *)(iVar1 + 0x34) = param_1[1];
    *(undefined4 *)(iVar1 + 0x38) = param_1[2];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar2 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar5 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = bVar5;
        (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),bVar5);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x5c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3) << 8;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,(*(int *)(gen_frame + 0x5c)));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    if (*(int *)(this + 0x3c) == 0) {
      (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar4[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[7];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar4[8];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar4[9];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar4[10];
      (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
      bVar3 = F_005f11c0(this,&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x44)),&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      if (bVar3 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x50)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x44)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x38)));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf60 */
uint F_005f1520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  int * piVar4;
  undefined4 * puVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(this + 0x30);
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x40) = *param_1;
    *(undefined4 *)(iVar1 + 0x44) = param_1[1];
    *(undefined4 *)(iVar1 + 0x48) = param_1[2];
    uVar2 = param_1[3];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    *(undefined4 *)(iVar1 + 0x4c) = uVar2;
    piVar4 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar4 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar7 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x6c)) + 0)) = bVar7;
        (*(int *)(gen_frame + 0x6c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x6c)), 1, 3),bVar7);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x6c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x6c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x6c)), 1, 3) << 8;
      }
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,(*(int *)(gen_frame + 0x6c)))));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x5c)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(undefined4 *)(gen_frame + 0x68)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    if (*(int *)(this + 0x3c) == 0) {
      F_00a1e0f0(&(*(undefined4 *)(gen_frame + 0x30)),param_1);
      (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0x38));
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))
                                (*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x60)))));
    }
    else {
      puVar5 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar5;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar5[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar5[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar5[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar5[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar5[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar5[7];
      (*(undefined4 *)(gen_frame + 0x20)) = puVar5[8];
      (*(undefined4 *)(gen_frame + 0x24)) = puVar5[9];
      (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_1[3];
      (*(undefined4 *)(gen_frame + 0x28)) = puVar5[10];
      bVar3 = F_005f11c0(this,&(*(undefined4 *)(gen_frame + 0x54)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x48)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x54)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x60)));
        uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x48)));
        return uVar6;
      }
    }
  }
  return (uint)piVar4;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf62 */
unsigned int F_005f16e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f16e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  int iVar1;
  int * piVar2;
  byte bVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  if (*(int *)(this + 0x30) != 0) {
    iVar1 = *(int *)(this + 0x30);
    *(undefined4 *)(iVar1 + 0x50) = *param_1;
    *(undefined4 *)(iVar1 + 0x54) = param_1[1];
    *(undefined4 *)(iVar1 + 0x58) = param_1[2];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar2 = *(int * PTR32 *)(this + 0x30);
    if (*(char *)((int)piVar2 + 0x65) == '\x03') {
      if (((byte)this[0x29] & 4) == 0) {
        bVar5 = ((byte)this[0x28] & 0xf) == 0;
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = bVar5;
        (*(int *)(gen_frame + 0x5c)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3),bVar5);
      }
      else {
        (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x5c)) + 0)) = 0;
        (*(int *)(gen_frame + 0x5c)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x5c)), 1, 3) << 8;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,(*(int *)(gen_frame + 0x5c)));
    }
  }
  if (*(int *)(this + 0x34) != 0) {
    (*(undefined4 *)(gen_frame + 0x44)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    (*(undefined4 *)(gen_frame + 0x4c)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(undefined4 *)(gen_frame + 0x54)) = 0;
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    if (*(int *)(this + 0x3c) == 0) {
      (*(undefined4 *)(gen_frame + 0x50)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x54)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x58)) = param_1[2];
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x50)));
    }
    else {
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar4;
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[1];
      (*(undefined4 *)(gen_frame + 0x8)) = puVar4[2];
      (*(undefined4 *)(gen_frame + 0x10)) = puVar4[4];
      (*(undefined4 *)(gen_frame + 0x14)) = puVar4[5];
      (*(undefined4 *)(gen_frame + 0x18)) = puVar4[6];
      (*(undefined4 *)(gen_frame + 0x1c)) = puVar4[7];
      (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
      bVar3 = F_005f11c0(this,&(*(undefined4 *)(gen_frame + 0x44)),&(*(undefined4 *)(gen_frame + 0x38)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x0)),0);
      if (bVar3 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x20))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x44)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x2c))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x38)));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x34))))(*(int * PTR32 *)(this + 0x34),&(*(undefined4 *)(gen_frame + 0x50)));
        return 0;
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf64 */
uint F_005f1880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1880u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  byte bVar3;
  int * piVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
  piVar4 = (int *)0x0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(*(undefined4 * PTR32 *)&gen_args[1]);
    *(undefined4 *)(iVar1 + 0x34) = (*(undefined4 * PTR32 *)&gen_args[1])[1];
    *(undefined4 *)(iVar1 + 0x38) = (*(undefined4 * PTR32 *)&gen_args[1])[2];
    *(undefined4 *)(iVar1 + 0x40) = (*(undefined4 * PTR32 *)&gen_args[1])[4];
    *(undefined4 *)(iVar1 + 0x44) = (*(undefined4 * PTR32 *)&gen_args[1])[5];
    *(undefined4 *)(iVar1 + 0x48) = (*(undefined4 * PTR32 *)&gen_args[1])[6];
    *(undefined4 *)(iVar1 + 0x4c) = (*(undefined4 * PTR32 *)&gen_args[1])[7];
    *(undefined4 *)(iVar1 + 0x50) = (*(undefined4 * PTR32 *)&gen_args[1])[8];
    *(undefined4 *)(iVar1 + 0x54) = (*(undefined4 * PTR32 *)&gen_args[1])[9];
    *(undefined4 *)(iVar1 + 0x58) = (*(undefined4 * PTR32 *)&gen_args[1])[10];
    *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    piVar4 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x30)));
    if (*(char *)((int)piVar4 + 0x65) == '\x03') {
      if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x29] & 4) == 0) {
        (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3),((byte)(*(undefined * PTR32 *)&gen_args[0])[0x28] & 0xf) == 0)));
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[1]), 1, 3) << 8)));
      }
      piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x1c))(piVar4,(*(undefined4 * PTR32 *)&gen_args[1]))));
    }
  }
  if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    if (*((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) == 0) {
      F_00a1f090(&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),puVar2);
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x20)));
      ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x14)));
      piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))))
                                (*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x8)))));
    }
    else {
      bVar3 = F_005f11c0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),puVar2,0);
      piVar4 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
      if (bVar3 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x20))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x20)));
        ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x14)));
        uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))) + 0x34))))(*((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34))),&(*(undefined4 *)(gen_frame + 0x8)));
        return uVar5;
      }
    }
  }
  return (uint)piVar4;
}

/* ref: FUN_005f1a10 */
unsigned int F_005f1a10(unsigned int gen_a0)
{
  GEN_ENTER(0x5f1a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  iVar1 = *(int *)((int)this + 0x30);
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    if (*(int *)((int)this + 8) == 0) {
      this_00 = (undefined *)0x0;
    }
    else {
      this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    piVar2 = (int *)F_005ef690(this_00,0x2f,*(int *)((int)this + 0x34),0,1);
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))(piVar2);
      *((uint *)GEN_TOP((*(int *)((int)this + 0x30) + 0x80))) = uVar3;
      return 0;
    }
  }
  *(undefined4 *)(iVar1 + 0x80) = 0;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf4 */
unsigned int F_005f1a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  undefined * this_00;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  bVar3 = *(char *)(param_1 + 0x41) != '\0';
  (*(bool *)(gen_frame + 0x3d)) = (bool)((byte)this[0x8c] >> 1 & 1) != bVar3;
  (*(bool *)(gen_frame + 0x3f)) = bVar3;
  if ((*(int *)(this + 8) == 0) || (iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar2 == 0)) {
    this_00 = (undefined *)0x0;
  }
  else {
    this_00 = *(undefined * PTR32 *)(iVar2 + 0x44);
  }
  fVar7 = *(float *)(param_1 + 0x50);
  if (((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) !=
       ((GEN_ISNAN(fVar7) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar7 == *(float *)&REFG(undefined, 0x1088114))) &&
     (fVar7 = *(float *)&REFG(undefined, 0x10a2760), !bVar3)) {
    dVar8 = F_005ee0f0(this_00,4);
    fVar7 = (float)dVar8;
    (*(float *)(gen_frame + 0x38)) = fVar7;
  }
  *(float *)(this + 0x7c) = fVar7;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1088118);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x44) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x74) = (short)iVar2;
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x48) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x76) = (short)iVar2;
  iVar2 = (int)((((float10)*(float *)(param_1 + 0x4c) + fVar4) * fVar5) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x78) = (short)iVar2;
  iVar2 = (int)((fVar5 * ((float10)*(float *)(param_1 + 0x50) + fVar4)) / fVar6);
  if (iVar2 < 0x10000) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xffff;
  }
  *(short *)(this + 0x7a) = (short)iVar2;
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x80) = *(undefined4 *)(param_1 + 0x54);
  this[0x8c] = (undefined1)(((*(bool *)(gen_frame + 0x3f)) * '\x02' ^ (byte)this[0x8c]) & 2 ^ (byte)this[0x8c]);
  this[0x88] = *(undefined *)(param_1 + 0x3c);
  this[0x89] = *(undefined *)(param_1 + 0x3d);
  this[0x8a] = *(undefined *)(param_1 + 0x3e);
  this[0x8b] = *(undefined *)(param_1 + 0x3f);
  if ((*(bool *)(gen_frame + 0x3d)) != false) {
    (*(float *)(gen_frame + 0x38)) = *(float *)this;
    uVar1 = ((code *)*(gen_code32 *)((int)gen_fl2bits(*(float *)this) + 0xfc))(this);
    ((code *)*(gen_code32 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x38))) + 0x48))(this,uVar1);
  }
  if ((((byte)this[0x2b] & 0x40) != 0) &&
     ((iVar2 = *(int *)(this + 8), iVar2 == 0 ||
      (((*(int *)(iVar2 + 4) == 0 || (*((char *)GEN_TOP((*(int *)(iVar2 + 4) + 0x50))) != '\0')) &&
       ((iVar2 == 0 || ((*(byte *)(iVar2 + 0x16) & 1) != 0)))))))) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x38)) + 0)) = 1;
    (*(float *)(gen_frame + 0x38)) = gen_bits2f(CONCAT31(GEN_PIECE(&(*(float *)(gen_frame + 0x38)), 1, 3),1));
    if ((char)uVar1 != '\0') goto LAB_005f1c8b;
  }
  fVar7 = (*(float *)(gen_frame + 0x38));
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x38)) + 0)) = 0;
  (*(float *)(gen_frame + 0x38)) = gen_bits2f((uint)gen_fl2bits(fVar7) & 0xffffff00);
LAB_005f1c8b: ;
  bVar3 = *(char *)(param_1 + 0x40) != '\0';
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = bVar3;
  (*(undefined4 *)(gen_frame + 0x34)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x34)), 1, 3),bVar3);
  this[0x2b] = (undefined1)((byte)this[0x2b] ^ (bVar3 << 4 ^ (byte)this[0x2b]) & 0x10);
  ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x38))));
  ((code *)*(gen_code32 *)(*(int *)this + 200))(this,(*(undefined4 *)(gen_frame + 0x34)));
  F_005de400(this,*(uint *)(this + 0x30));
  return 0;
}

/* ref: FUN_005f1ce0 */
uint F_005f1ce0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f1ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00509590((undefined *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5884));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a586c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1302e18);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x76) = 0;
  *(undefined2 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x80) = 0;
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) & 0xc0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(uint *)((int)this + 0x90) = *(uint *)((int)this + 0x90) & 0xfffffcff;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x84) = uVar1;
  *(undefined2 *)((int)this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x98) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined * PTR32 *)((int)this + 0x9c) = this;
  return (uint)this;
}

/* ref: FUN_005f1e60 */
uint F_005f1e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1e60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var_00 = 0;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  bVar1 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
  if ((((bVar1 != 0) || (bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0])), bVar2 != 0)) || (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) == 0))
     || ((iVar5 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar5 == 0 ||
         (*(int *)(iVar5 + 0x20) < 0x3c)))) {
    bVar2 = F_005e0e90((*(undefined * PTR32 *)&gen_args[0]));
    uVar4 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      piVar3 = (int *)F_004e8110(REFG(void * PTR32, 0x1375a64),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))),
                                   *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))),
                                   (int)*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))));
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = piVar3;
      uVar4 = 0;
      if (piVar3 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,(*(undefined4 *)&gen_args[1]));
        uVar4 = F_005e0f90((*(undefined * PTR32 *)&gen_args[0]));
      }
      if (bVar1 != 0) {
        bVar1 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
        uVar4 = CONCAT31(extraout_var_00,bVar1);
        if (bVar1 == 0) {
          uVar4 = 0;
          if (((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) &&
              (uVar4 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), uVar4 != 0)) &&
             (0x3b < *(int *)(uVar4 + 0x20))) {
            if (uVar4 != 0) {
              uVar4 = F_005ee020(*(undefined * PTR32 *)(uVar4 + 0x44),(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
              return uVar4;
            }
            uVar4 = F_005ee020((undefined *)0x0,(uint)*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
          }
        }
      }
    }
    return uVar4;
  }
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar5 + 0x44);
  }
  (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))));
  F_00614c10((undefined *)(iVar5 + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *(undefined * PTR32 *)(iVar5 + 0x34)) {
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  uVar4 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  *(int *)(uVar4 + 0x14) = *(int *)(uVar4 + 0x14) + 1;
  *(undefined1 *)(uVar4 + 0x12) = 1;
  return uVar4;
}

/* ref: FUN_005f1f80 */
byte F_005f1f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f1f80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  
  bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0]));
  iVar5 = 0;
  (*(byte *)(gen_frame + 0x3a)) = bVar3;
  if ((((bVar3 == 0) && (bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0])), bVar3 == 0)) && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0))
     && ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar2 != 0 &&
         (0x3b < *(int *)(iVar2 + 0x20))))) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x44);
    }
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))))));
    F_00614c10((undefined *)(iVar5 + 0x30),&(*(int *)(gen_frame + 0x34)),&(*(char * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x34)) != *(int *)(iVar5 + 0x34)) {
      iVar5 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x10);
      piVar1 = (int *)(iVar5 + 0x14);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(iVar5 + 0x12) = 1;
    }
    return 0;
  }
  (*(byte *)(gen_frame + 0x3b)) = 1;
  switch((unsigned int)(uintptr_t)(*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))))) {
  case '\b': ;
  case '\t': ;
  case '\v': ;
  case '\f': ;
switchD_005f2005_caseD_0: ;
    bVar3 = F_005e0f00((*(undefined * PTR32 *)&gen_args[0]));
    (*(byte *)(gen_frame + 0x3b)) = bVar3;
    if (bVar3 == 0) goto LAB_005f2088;
    break;
  default: ;
    if (*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) == '\r') goto switchD_005f2005_caseD_0;
    if (*(*(char * PTR32 *)&gen_args[1]) == '\0') {
      return 0;
    }
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) == 0) {
      ((int *)(gen_frame + 0xc))[0] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30;
      ((int *)(gen_frame + 0xc))[1] = 0;
      ((int *)(gen_frame + 0xc))[3] = 0;
      ((int *)(gen_frame + 0xc))[2] = 0;
      ((int *)(gen_frame + 0xc))[4] = 5;
      (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
      (*(undefined2 *)(gen_frame + 0x2d)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x24)) = 5000;
      (*(undefined1 *)(gen_frame + 0x28)) = 0;
      uVar4 = F_00513dc0((*(char * PTR32 *)&gen_args[1]),((int *)(gen_frame + 0xc)),0,0);
      *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) | 0x10;
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = uVar4;
    }
    else if ((*((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x94))) & 0x10) == 0) goto switchD_005f2005_caseD_0;
  }
  F_005e0f90((*(undefined * PTR32 *)&gen_args[0]));
LAB_005f2088: ;
  if ((((*(byte *)(gen_frame + 0x3a)) != 0) && (bVar3 = F_005d9c60((*(undefined * PTR32 *)&gen_args[0])), bVar3 == 0)) &&
     ((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0 &&
      ((iVar2 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4))), iVar2 != 0 && (0x3b < *(int *)(iVar2 + 0x20))
       ))))) {
    if (iVar2 != 0) {
      iVar5 = *(int *)(iVar2 + 0x44);
    }
    (*(char * PTR32 *)&gen_args[1]) = ((char *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(char * PTR32 *)&gen_args[1]), 1, 3),*((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x11))))));
    F_00614c10((undefined *)(iVar5 + 0x30),&(*(int *)(gen_frame + 0x34)),&(*(char * PTR32 *)&gen_args[1]));
    if ((*(int *)(gen_frame + 0x34)) != *(int *)(iVar5 + 0x34)) {
      iVar5 = *(int *)((*(int *)(gen_frame + 0x34)) + 0x10);
      piVar1 = (int *)(iVar5 + 0x14);
      *piVar1 = *piVar1 + 1;
      *(undefined1 *)(iVar5 + 0x12) = 1;
    }
  }
  return (*(byte *)(gen_frame + 0x3b));
}

/* ref: FUN_005f2100 */
uint F_005f2100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = param_1;
  F_005ee3d0(this,1);
  uVar1 = F_005ebe80(this);
  return uVar1;
}

/* ref: FUN_005f2120 */
byte F_005f2120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * PTR32 * ppuVar7;
  
  uVar4 = (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  puVar2 = ((undefined4 *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)))));
  while( true ) {
    if (puVar2 == *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)))) {
      return 0;
    }
    puVar6 = ((undefined4 *)GEN_TOP(((undefined4 *)puVar2[6])[1]));
    cVar1 = *(char *)((int)puVar6 + 0x11);
    puVar3 = (undefined4 *)puVar2[6];
    while (cVar1 == '\0') {
      if ((uint)puVar6[3] < uVar4) {
        puVar5 = (undefined4 *)puVar6[2];
        puVar6 = puVar3;
      }
      else {
        puVar5 = (undefined4 *)*puVar6;
      }
      puVar3 = puVar6;
      puVar6 = puVar5;
      cVar1 = *(char *)((int)puVar5 + 0x11);
    }
    puVar6 = (undefined4 *)puVar2[6];
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar3;
    if ((puVar3 == puVar6) || (uVar4 < (uint)puVar3[3])) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar6;
      ppuVar7 = &(*(undefined4 * PTR32 *)(gen_frame + 0x8));
    }
    else {
      ppuVar7 = &(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    if (*ppuVar7 != puVar6) break;
    if (*(char *)((int)puVar2 + 0x25) == '\0') {
      puVar6 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar6 + 0x25) == '\0') {
        cVar1 = *(char *)((int)*puVar6 + 0x25);
        puVar2 = puVar6;
        puVar6 = (undefined4 *)*puVar6;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar6 + 0x25);
          puVar2 = puVar6;
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0x25);
        puVar3 = (undefined4 *)puVar2[1];
        puVar6 = puVar2;
        while ((puVar2 = puVar3, cVar1 == '\0' && (puVar6 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0x25);
          puVar3 = (undefined4 *)puVar2[1];
          puVar6 = puVar2;
        }
      }
    }
  }
  F_00616510(puVar2 + 5,&(*(undefined4 * PTR32 *)&gen_args[1]),*ppuVar7);
  F_005ee510((*(undefined * PTR32 *)&gen_args[0]),uVar4);
  return 1;
}

/* ref: FUN_005f2200 */
unsigned int F_005f2200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  int local_8;
  
  local_8 = *(int *)((int)this + 0x14);
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)(param_1 + 4)));
  piVar5 = *(int * PTR32 *)(param_1 + 4);
  while ((piVar5 != piVar2 && (local_8 != 0))) {
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar7 = (int *)*piVar5;
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        cVar1 = *(char *)(piVar7[2] + 0x15);
        piVar6 = (int *)piVar7[2];
        while (cVar1 == '\0') {
          cVar1 = *(char *)(piVar6[2] + 0x15);
          piVar7 = piVar6;
          piVar6 = (int *)piVar6[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar6 = (int *)piVar5[1];
        piVar7 = piVar5;
        while ((piVar4 = piVar6, cVar1 == '\0' && (piVar7 == (int *)*piVar4))) {
          cVar1 = *(char *)(piVar4[1] + 0x15);
          piVar6 = (int *)piVar4[1];
          piVar7 = piVar4;
        }
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
          piVar7 = piVar4;
        }
      }
    }
    else {
      piVar7 = (int *)piVar5[2];
    }
    piVar7 = (int *)piVar7[4];
    if ((piVar7 != (int *)0x0) && ((*(byte *)(piVar7 + 8) & 2) != 0)) {
      uVar3 = piVar7[9];
      if ((uVar3 & 1) != 0) {
        ((code *)*(gen_code32 *)(*piVar7 + 0x70))(piVar7);
      }
      if ((uVar3 & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar7 + 0x80))(piVar7);
      }
      local_8 = local_8 + -1;
    }
    if (*(char *)((int)piVar5 + 0x15) == '\0') {
      piVar7 = (int *)*piVar5;
      if (*(char *)((int)piVar7 + 0x15) == '\0') {
        cVar1 = *(char *)(piVar7[2] + 0x15);
        piVar6 = (int *)piVar7[2];
        while (piVar5 = piVar7, cVar1 == '\0') {
          cVar1 = *(char *)(piVar6[2] + 0x15);
          piVar7 = piVar6;
          piVar6 = (int *)piVar6[2];
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x15);
        piVar7 = (int *)piVar5[1];
        while ((piVar6 = piVar7, cVar1 == '\0' && (piVar5 == (int *)*piVar6))) {
          cVar1 = *(char *)(piVar6[1] + 0x15);
          piVar7 = (int *)piVar6[1];
          piVar5 = piVar6;
        }
        if (*(char *)((int)piVar5 + 0x15) == '\0') {
          piVar5 = piVar6;
        }
      }
    }
    else {
      piVar5 = (int *)piVar5[2];
    }
  }
  return 0;
}

/* ref: FUN_005f2320 */
unsigned int F_005f2320(unsigned int gen_a0)
{
  GEN_ENTER(0x5f2320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    F_005ee840(this,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return 0;
}

/* ref: FUN_005f2350 */
unsigned int F_005f2350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005eed10(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2370 */
uint F_005f2370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_005ee8f0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_005f2380 */
uint F_005f2380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2380u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  char * pcVar4;
  byte bVar5;
  char * pcVar6;
  uint uVar7;
  char * pcVar8;
  undefined3 extraout_var = 0;
  char * pcVar9;
  
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  F_00619550((undefined *)(iVar2 + 0x13c),&(*(char * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  pcVar6 = (*(char * PTR32 *)(gen_frame + 0x8));
  if ((*(char * PTR32 *)(gen_frame + 0x8)) != *(char * PTR32 *)(iVar2 + 0x140)) {
    pcVar6 = (char *)0x0;
    if (*(int *)((*(char * PTR32 *)(gen_frame + 0x8)) + 0x10) != 0) {
      pcVar6 = *((char * PTR32 *)GEN_TOP((*(int *)((*(char * PTR32 *)(gen_frame + 0x8)) + 0x10) + 4)));
      pcVar9 = *(char * PTR32 *)pcVar6;
      (*(char * PTR32 *)(gen_frame + 0x8)) = pcVar6;
      if (pcVar9 != pcVar6) {
        do {
          piVar3 = *(int * PTR32 *)(pcVar9 + 0x18);
          F_005eea10((*(undefined * PTR32 *)&gen_args[0]),piVar3);
          if (*(char *)((int)piVar3 + 0x11) == '\x06') {
            F_005eea90((*(undefined * PTR32 *)&gen_args[0]),piVar3);
          }
          pcVar6 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x74))(piVar3)));
          if ((char)pcVar6 != '\0') {
            uVar7 = ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3);
            pcVar6 = (char *)0x0;
            if (((uVar7 != 0) &&
                (pcVar8 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3))), pcVar6 = pcVar8,
                pcVar8 != (char *)0x0)) && (*pcVar8 != '\0')) {
              bVar5 = F_005e9bb0((*(undefined * PTR32 *)&gen_args[0]),pcVar8);
              pcVar6 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar5)));
              if (bVar5 != 0) {
                (*(uint *)&gen_args[1]) = F_00513dc0(pcVar8,0,0,0);
                pcVar6 = (char *)F_00619c50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x178))),((undefined1 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
              }
            }
          }
          if (pcVar9[0x21] == '\0') {
            pcVar8 = *(char * PTR32 *)(pcVar9 + 8);
            if (pcVar8[0x21] == '\0') {
              cVar1 = (*(char * PTR32 *)pcVar8)[0x21];
              pcVar6 = *(char * PTR32 *)pcVar8;
              while (pcVar9 = pcVar8, cVar1 == '\0') {
                cVar1 = (*(char * PTR32 *)pcVar6)[0x21];
                pcVar8 = pcVar6;
                pcVar6 = *(char * PTR32 *)pcVar6;
              }
            }
            else {
              cVar1 = (*(char * PTR32 *)(pcVar9 + 4))[0x21];
              pcVar4 = *(char * PTR32 *)(pcVar9 + 4);
              pcVar8 = pcVar9;
              while ((pcVar6 = pcVar4, pcVar9 = pcVar6, cVar1 == '\0' &&
                     (pcVar8 == *(char * PTR32 *)(pcVar6 + 8)))) {
                cVar1 = (*(char * PTR32 *)(pcVar6 + 4))[0x21];
                pcVar4 = *(char * PTR32 *)(pcVar6 + 4);
                pcVar8 = pcVar6;
              }
            }
          }
        } while (pcVar9 != (*(char * PTR32 *)(gen_frame + 0x8)));
      }
    }
  }
  return (uint)pcVar6;
}

/* ref: FUN_005f24b0 */
uint F_005f24b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f24b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f24e0 */
uint F_005f24e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f24e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f2520 */
byte F_005f2520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f2520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),0x34,param_1,param_2,1);
    if (uVar1 != 0) {
      F_005dbf70(uVar1,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f2560 */
byte F_005f2560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),0x34,param_1,param_2,1);
    if (uVar1 != 0) {
      *(undefined1 *)(uVar1 + 0x48) = 3;
      if ((*(uint *)(uVar1 + 0x30) & 0xc0000000) != 0) {
        F_00b5b440(REFG(void * PTR32, 0x14c4e84),(uint *)(uVar1 + 0x30),0);
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f25c0 */
byte F_005f25c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f25c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),6,param_1,0,1);
    if (this_00 != (undefined *)0x0) {
      F_005dbaf0(this_00,param_2,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f2600 */
unsigned int F_005f2600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efa60(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2620 */
unsigned int F_005f2620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efb00(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2640 */
unsigned int F_005f2640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efbe0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2660 */
unsigned int F_005f2660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efcc0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2680 */
byte F_005f2680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f2680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    this_00 = (undefined *)F_005ef690(*(undefined * PTR32 *)((int)this + 0x14),6,param_1,0,1);
    if (this_00 != (undefined *)0x0) {
      F_005e34a0(this_00,param_2,param_3,0);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f26c0 */
unsigned int F_005f26c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f26c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005efde0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: Client::LayoutEngine::LayoutManager::vf4 */
uint F_005f26e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f26e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)(this + 0x100);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    ((code *)*(gen_code32 *)(*(int *)puVar3[4] + 0x10))((int *)puVar3[4],param_1);
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
  uVar6 = F_005ef3c0(this,param_1,0);
  return uVar6;
}

/* ref: FUN_005f2770 */
uint F_005f2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(char *)((int)this + 0x53) = (char)param_1;
  if (((char)param_1 == '\0') &&
     (this_00 = *(undefined * PTR32 *)((int)this + 0x44), *(int *)((int)this_00 + 0x10) == 0)) {
    *(undefined4 *)((int)this_00 + 0x10) = 1;
    F_005ee3d0(this_00,1);
    F_005ebe80(this_00);
  }
  uVar1 = ((char)param_1 != '\0') + 5;
  *(uint *)((int)this + 0xa4) = uVar1;
  return uVar1;
}

/* ref: FUN_005f27c0 */
uint F_005f27c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f27c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x60) = *param_1;
  *(undefined4 *)((int)this + 100) = param_1[1];
  *(undefined4 *)((int)this + 0x68) = param_1[2];
  if (*(char *)((int)this + 0x52) == '\0') {
    *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined1 *)((int)this + 0x52) = 1;
  *(undefined4 *)((int)this_00 + 0x10) = 0;
  F_005ee3d0(this_00,1);
  uVar1 = F_005ebe80(this_00);
  return uVar1;
}

/* ref: FUN_005f2810 */
unsigned int F_005f2810(unsigned int gen_a0)
{
  GEN_ENTER(0x5f2810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x52) != '\0') {
    this_00 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined1 *)((int)this + 0x52) = 0;
    *(undefined4 *)((int)this_00 + 0x10) = *(undefined4 *)((int)this + 0x5c);
    F_005ee3d0(this_00,1);
    F_005ebe80(this_00);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f2840 */
uint F_005f2840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  int * piVar3;
  
  if (*param_1 == 2) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined4 *)((int)pvVar1 + 0x10) = 4;
    F_005ee3d0(pvVar1,1);
    F_005ebe80(pvVar1);
    piVar3 = (int *)F_0052ed20(REFG(undefined4, 0x1375b00),param_1[1],0,0);
    *(int * PTR32 *)((int)this + 0x90) = piVar3;
    uVar2 = 0;
    if (piVar3 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
      uVar2 = F_005f27c0(this,uVar2);
    }
    return uVar2;
  }
  if (*param_1 != 3) {
    pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
    *(undefined4 *)((int)pvVar1 + 0x10) = 2;
    F_005ee3d0(pvVar1,1);
    uVar2 = F_005ebe80(pvVar1);
    return uVar2;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined4 *)((int)pvVar1 + 0x10) = 5;
  F_005ee3d0(pvVar1,1);
  F_005ebe80(pvVar1);
  *(int *)((int)this + 0x70) = param_1[2];
  *(int *)((int)this + 0x74) = param_1[3];
  *(int *)((int)this + 0x78) = param_1[4];
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)((int)this + 0x70);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)((int)this + 0x74);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)((int)this + 0x78);
  if (*(char *)((int)this + 0x52) == '\0') {
    *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
  }
  *(undefined1 *)((int)this + 0x52) = 1;
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  *(undefined4 *)((int)pvVar1 + 0x10) = 0;
  F_005ee3d0(pvVar1,1);
  uVar2 = F_005ebe80(pvVar1);
  return uVar2;
}

/* ref: FUN_005f2940 */
uint F_005f2940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  char * pcVar4;
  undefined4 * puVar5;
  byte bVar6;
  int iVar7;
  
  uVar3 = F_006155c0((undefined *)((int)this + 0x17c));
  iVar7 = 0;
  if (0 < param_1[1]) {
    do {
      pcVar4 = (char *)(*param_1 + iVar7 * 8 + (int)param_1);
      bVar6 = *pcVar4 != '\0' | ((byte *)(gen_frame + 0xc))[8] & 0xfc;
      uVar1 = *(undefined2 *)(pcVar4 + 2);
      ((byte *)(gen_frame + 0xc))[8] = bVar6;
      uVar2 = *(undefined4 *)(pcVar4 + 4);
      ((byte *)(gen_frame + 0xc))[9] = pcVar4[1];
      ((byte *)(gen_frame + 0xc))[10] = (byte)uVar1;
      ((byte *)(gen_frame + 0xc))[0xb] = SUB21(uVar1,1);
      ((byte *)(gen_frame + 0xc))[10] = (byte)uVar1;
      ((byte *)(gen_frame + 0xc))[0xb] = SUB21(uVar1,1);
      puVar5 = (undefined4 *)F_004296a0(0x1c,0,900);
      *puVar5 = *(undefined4 *)((int)this + 0x180);
      puVar5[1] = *(undefined4 *)((int)this + 0x180);
      puVar5[2] = *(undefined4 *)((int)this + 0x180);
      *(undefined2 *)(puVar5 + 6) = 0;
      if (puVar5 + 3 != (undefined4 *)0x0) {
        puVar5[3] = uVar2;
        puVar5[4] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 8));
        puVar5[5] = (*(undefined4 *)((char *)((byte *)(gen_frame + 0xc)) + 12));
      }
      uVar3 = F_00618350((undefined *)((int)this + 0x17c),((byte *)(gen_frame + 0xc)),puVar5,0);
      iVar7 = iVar7 + 1;
    } while (iVar7 < param_1[1]);
  }
  return uVar3;
}

/* ref: FUN_005f2a00 */
unsigned int F_005f2a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  byte bVar5;
  int * PTR32 * ppiVar6;
  int * piVar7;
  undefined4 * puVar8;
  undefined4 * PTR32 * ppuVar9;
  undefined4 * puVar10;
  int * piVar11;
  int * piVar12;
  int iVar13;
  char * pcVar14;
  bool bVar15;
  
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      pcVar14 = ((char *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x28)) * 8 + *(int *)(param_1 + 0x10))));
      uVar2 = *(uint *)(pcVar14 + 4);
      bVar15 = *pcVar14 != '\0';
      (*(uint *)(gen_frame + 0x34)) = uVar2;
      piVar11 = ((int *)GEN_TOP((*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140))[1]));
      (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x2c)) + 0)) = bVar15;
      (*(undefined4 *)(gen_frame + 0x2c)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x2c)), 1, 3),bVar15);
      cVar1 = *(char *)((int)piVar11 + 0x15);
      piVar12 = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140);
      while (cVar1 == '\0') {
        if (*(byte *)(piVar11 + 3) < (byte)pcVar14[1]) {
          piVar7 = (int *)piVar11[2];
          piVar11 = piVar12;
        }
        else {
          piVar7 = (int *)*piVar11;
        }
        piVar12 = piVar11;
        piVar11 = piVar7;
        cVar1 = *(char *)((int)piVar7 + 0x15);
      }
      (*(int * PTR32 *)(gen_frame + 0x38)) = piVar12;
      if ((piVar12 == *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140)) ||
         ((byte)pcVar14[1] < *(byte *)(piVar12 + 3))) {
        (*(int * PTR32 *)(gen_frame + 0x24)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140);
        ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x24));
      }
      else {
        ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x38));
      }
      if (*ppiVar6 == *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x140)) {
        (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
      }
      else {
        iVar13 = (*ppiVar6)[4];
        piVar11 = *(int * PTR32 *)(iVar13 + 4);
        piVar12 = (int *)piVar11[1];
        cVar1 = *(char *)((int)piVar12 + 0x21);
        while (cVar1 == '\0') {
          if ((uVar2 < (uint)piVar12[5]) || (uVar2 <= (uint)piVar12[5])) {
            piVar7 = (int *)*piVar12;
          }
          else {
            piVar7 = (int *)piVar12[2];
            piVar12 = piVar11;
          }
          piVar11 = piVar12;
          piVar12 = piVar7;
          cVar1 = *(char *)((int)piVar7 + 0x21);
        }
        piVar12 = *(int * PTR32 *)(iVar13 + 4);
        (*(int * PTR32 *)(gen_frame + 0x38)) = piVar11;
        if (((piVar11 == piVar12) || (uVar2 < (uint)piVar11[5])) ||
           ((uVar2 == piVar11[5] && (piVar11[4] != 0)))) {
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar12;
          ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x20));
        }
        else {
          ppiVar6 = &(*(int * PTR32 *)(gen_frame + 0x38));
        }
        if (*ppiVar6 == piVar12) {
          (*(int * PTR32 *)(gen_frame + 0x38)) = (int *)0x0;
        }
        else {
          (*(int * PTR32 *)(gen_frame + 0x38)) = ((int *)GEN_TOP((*ppiVar6)[6]));
        }
      }
      puVar10 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180))[1]));
      cVar1 = *(char *)((int)puVar10 + 0x19);
      puVar3 = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
      while (cVar1 == '\0') {
        if ((uint)puVar10[3] < uVar2) {
          puVar8 = (undefined4 *)puVar10[2];
          puVar10 = puVar3;
        }
        else {
          puVar8 = (undefined4 *)*puVar10;
        }
        puVar3 = puVar10;
        puVar10 = puVar8;
        cVar1 = *(char *)((int)puVar8 + 0x19);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar3;
      if ((puVar3 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180)) || (uVar2 < (uint)puVar3[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x18));
      }
      else {
        ppuVar9 = &(*(undefined4 * PTR32 *)(gen_frame + 0x1c));
      }
      puVar10 = *ppuVar9;
      if (puVar10 == *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180)) {
        bVar5 = bVar15 * '\x02' | (byte)(*(uint *)(gen_frame + 0x10)) & 0xfd;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = bVar5 | 1;
        (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = pcVar14[1];
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = *(undefined2 *)(pcVar14 + 2);
        (*(uint *)(gen_frame + 0x10)) = CONCAT22(*(undefined2 *)(pcVar14 + 2),CONCAT11(pcVar14[1],bVar5)) | 1;
        puVar10 = (undefined4 *)F_004296a0(0x1c,0,900);
        *puVar10 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        puVar10[1] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        puVar10[2] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x180);
        *(undefined2 *)(puVar10 + 6) = 0;
        if (puVar10 + 3 != (uint *)0x0) {
          puVar10[3] = (*(uint *)(gen_frame + 0x34));
          puVar10[4] = (*(uint *)(gen_frame + 0x10));
          puVar10[5] = (*(undefined4 *)(gen_frame + 0x14));
        }
        F_00618350((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x17c),((undefined1 *)(gen_frame + 0x8)),puVar10,0);
      }
      else {
        *(byte *)(puVar10 + 4) = bVar15 * '\x02' | *(byte *)(puVar10 + 4) & 0xfd;
      }
      uVar4 = (*(undefined4 *)(gen_frame + 0x2c));
      if ((*(int * PTR32 *)(gen_frame + 0x38)) != (int *)0x0) {
        *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x2b) = *(byte *)((int)(*(int * PTR32 *)(gen_frame + 0x38)) + 0x2b) & 0xbf | bVar15 << 6;
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0xe0))((*(int * PTR32 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x2c)));
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 200))((*(int * PTR32 *)(gen_frame + 0x38)),uVar4);
      }
      iVar13 = (*(int *)(gen_frame + 0x28)) + 1;
      (*(int *)(gen_frame + 0x28)) = iVar13;
    } while (iVar13 < *(int *)(param_1 + 0x14));
  }
  return 0;
}

/* ref: FUN_005f2c40 */
unsigned int F_005f2c40(unsigned int gen_a0)
{
  GEN_ENTER(0x5f2c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  uint * puVar2;
  uint * puVar3;
  code * pcVar4;
  uint * puVar5;
  uint * puVar6;
  int * piVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  
  if (*(int *)((int)this + 0x184) != 0) {
    puVar2 = *(uint * PTR32 *)((int)this + 0x180);
    puVar3 = (uint *)*puVar2;
    while (puVar3 != puVar2) {
      if (((puVar3[4] & 1) != 0) &&
         (piVar7 = (int *)F_005ef690(this,(uint)*(byte *)((int)puVar3 + 0x11),puVar3[3],0,1),
         piVar7 != (int *)0x0)) {
        iVar10 = *piVar7;
        pcVar4 = *(gen_code32 *)(iVar10 + 0xcc);
        *(byte *)((int)piVar7 + 0x2b) = *(byte *)((int)piVar7 + 0x2b) | 0x40;
        uVar8 = (*pcVar4)(piVar7);
        ((code *)*(gen_code32 *)(iVar10 + 0xe0))(piVar7,uVar8 & 0xff);
        iVar10 = *piVar7;
        uVar8 = ((code *)*(gen_code32 *)(iVar10 + 0xcc))(piVar7);
        ((code *)*(gen_code32 *)(iVar10 + 200))(piVar7,uVar8 & 0xff);
      }
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        puVar5 = (uint *)puVar3[2];
        if (*(char *)((int)puVar5 + 0x19) == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x19);
          puVar3 = puVar5;
          puVar5 = (uint *)*puVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar5 + 0x19);
            puVar3 = puVar5;
            puVar5 = (uint *)*puVar5;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x19);
          puVar6 = (uint *)puVar3[1];
          puVar5 = puVar3;
          while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (uint *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x19);
            puVar6 = (uint *)puVar3[1];
            puVar5 = puVar3;
          }
        }
      }
    }
    bVar9 = 0;
    (*(uint *)(gen_frame + 0x4)) = (uint)puVar2 & 0xffffff00;
    iVar10 = -5;
    do {
      switch((unsigned int)(uintptr_t)(iVar10)) {
      case 0: ;
      case 3: ;
      case 4: ;
      case 7: ;
      case 9: ;
      case 0xb: ;
      case 0x23: ;
      case 0x24: ;
      case 0x26: ;
      case 0x27: ;
      case 0x28: ;
      case 0x2c: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x36: ;
      case 0x3d: ;
      case 0x3e: ;
      case 0x3f: ;
      case 0x40: ;
      case 0x41: ;
      case 0x42: ;
      case 0x43: ;
        F_005eed10(this,(*(uint *)(gen_frame + 0x4)),1);
      }
      bVar9 = bVar9 + 1;
      iVar10 = iVar10 + 1;
      (*(uint *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x4)), 1, 3),bVar9);
    } while (bVar9 < 0x4b);
  }
  return 0;
}

/* ref: FUN_005f2da0 */
unsigned int F_005f2da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  int * piVar6;
  byte bVar7;
  int iVar8;
  
  if (*(int *)((int)this + 0x184) != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x180);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      piVar6 = (int *)F_005ef690(this,(uint)*(byte *)((int)puVar3 + 0x11),puVar3[3],0,1);
      if (piVar6 != (int *)0x0) {
        *(byte *)((int)piVar6 + 0x2b) =
             *(byte *)((int)piVar6 + 0x2b) ^
             ((char)param_1 << 6 ^ *(byte *)((int)piVar6 + 0x2b)) & 0x40;
        ((code *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6,param_1);
        ((code *)*(gen_code32 *)(*piVar6 + 200))(piVar6,param_1);
      }
      if (*(char *)((int)puVar3 + 0x19) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x19) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x19);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x19);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x19);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x19);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    bVar7 = 0;
    (*(uint *)(gen_frame + 0x8)) = (uint)this & 0xffffff00;
    iVar8 = -5;
    do {
      switch((unsigned int)(uintptr_t)(iVar8)) {
      case 0: ;
      case 3: ;
      case 4: ;
      case 7: ;
      case 9: ;
      case 0xb: ;
      case 0x23: ;
      case 0x24: ;
      case 0x26: ;
      case 0x27: ;
      case 0x28: ;
      case 0x2c: ;
      case 0x2e: ;
      case 0x35: ;
      case 0x36: ;
      case 0x3d: ;
      case 0x3e: ;
      case 0x3f: ;
      case 0x40: ;
      case 0x41: ;
      case 0x42: ;
      case 0x43: ;
        F_005eed10(this,(*(uint *)(gen_frame + 0x8)),param_1);
      }
      bVar7 = bVar7 + 1;
      iVar8 = iVar8 + 1;
      (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar7);
    } while (bVar7 < 0x4b);
  }
  return 0;
}

/* ref: FUN_005f2f00 */
unsigned int F_005f2f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f2f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_005ec700(this,param_1);
  F_005eede0(this,param_1,param_2);
  return 0;
}

/* ref: FUN_005f2f30 */
uint F_005f2f30(unsigned int gen_a0)
{
  GEN_ENTER(0x5f2f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffff;
  piVar1 = (int *)F_00619470((undefined *)((int)this + 0x10c),((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if (*piVar1 != *(int *)((int)this + 0x110)) {
    return *(uint *)(*piVar1 + 0x10);
  }
  return 0;
}

/* ref: FUN_005f2f70 */
unsigned int F_005f2f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f2f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = ((int *)GEN_TOP((*(int *)(param_1 + 0xc) + param_1)));
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < piVar5[1]) {
    param_1 = 0;
    do {
      uVar1 = *(undefined4 *)(*piVar5 + param_1 + 0x10 + (int)piVar5);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(*piVar5 + param_1 + 4 + (int)piVar5);
      puVar2 = (undefined4 *)F_00406b90(8,0,0);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        puVar2[1] = uVar1;
        *puVar2 = (*(undefined4 *)(gen_frame + 0x18));
      }
      puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar3 = *(undefined4 *)((int)this + 0x170);
      puVar3[1] = *(undefined4 *)((int)this + 0x170);
      puVar3[2] = *(undefined4 *)((int)this + 0x170);
      *(undefined2 *)(puVar3 + 5) = 0;
      if (puVar3 + 3 != (undefined4 *)0x0) {
        puVar3[3] = (*(undefined4 *)(gen_frame + 0x18));
        puVar3[4] = puVar2;
      }
      F_00618270((undefined *)((int)this + 0x16c),((undefined1 *)(gen_frame + 0xc)),puVar3,0);
      param_1 = param_1 + 0x18;
      iVar4 = (*(int *)(gen_frame + 0x14)) + 1;
      (*(int *)(gen_frame + 0x14)) = iVar4;
    } while (iVar4 < piVar5[1]);
  }
  return 0;
}

/* ref: FUN_005f3030 */
byte F_005f3030(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = 0;
  if (*(int *)((int)this + 0x1ac) != 0) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0x8c)));
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3;
    UNLOCK();
    if (7 < iVar1) {
      if (*(int *)((int)this + 0x1ac) != 0) {
        F_0050c620(*(int *)((int)this + 0x1ac),0,0);
        *(undefined4 *)((int)this + 0x1ac) = 0;
      }
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x1ac) + 0xa0)));
    for (iVar1 = *(int *)(iVar2 + 8); iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar6 = *(int *)(iVar2 + 4) + iVar5;
      uVar7 = 0;
      uVar4 = F_00a1b6b0(iVar6 + 4 + iVar2);
      uVar4 = F_005ef690(this,1,*(undefined4 *)(iVar6 + iVar2),uVar4,uVar7);
      if ((uVar4 != 0) && (*(int *)(uVar4 + 0x30) != 0)) {
        F_0060b6a0(*(int *)(uVar4 + 0x30),*(float *)(iVar6 + 8 + iVar2));
      }
      iVar5 = iVar5 + 0xc;
    }
  }
  return 1;
}

/* ref: FUN_005f30f0 */
byte F_005f30f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f30f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int * piVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 uVar10;
  int local_c;
  int local_8;
  
  if (*(int *)((int)this + 0x1b0) != 0) {
    piVar7 = ((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0x8c)));
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7;
    UNLOCK();
    if (7 < iVar1) {
      if (*(int *)((int)this + 0x1b0) != 0) {
        F_0050c620(*(int *)((int)this + 0x1b0),0,0);
        *(undefined4 *)((int)this + 0x1b0) = 0;
      }
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1b0) + 0xa0)));
    local_c = *(int *)(iVar1 + 8);
    if (local_c != 0) {
      local_8 = 0;
      do {
        uVar10 = 0;
        puVar9 = ((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + local_8 + iVar1)));
        uVar8 = F_00a1b6b0(puVar9 + 1);
        uVar8 = F_005ef690(this,3,*puVar9,uVar8,uVar10);
        if (uVar8 != 0) {
          uVar10 = puVar9[5];
          uVar2 = puVar9[6];
          uVar3 = puVar9[7];
          uVar4 = puVar9[3];
          uVar5 = puVar9[4];
          if (*(int *)(uVar8 + 0x30) != 0) {
            iVar6 = *((int *)GEN_TOP((*(int *)(uVar8 + 0x30) + 0x70)));
            *(undefined4 *)(iVar6 + 0x30) = puVar9[2];
            *(undefined4 *)(iVar6 + 0x34) = uVar4;
            *(undefined4 *)(iVar6 + 0x38) = uVar5;
            *(undefined4 *)(iVar6 + 0x40) = uVar10;
            *(undefined4 *)(iVar6 + 0x44) = uVar2;
            *(undefined4 *)(iVar6 + 0x48) = uVar3;
          }
        }
        local_8 = local_8 + 0x20;
        local_c = local_c + -1;
      } while (local_c != 0);
    }
  }
  return 1;
}

/* ref: FUN_005f31f0 */
uint F_005f31f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f31f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619470(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10c))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x110)))) {
    uVar1 = F_005f10f0(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f3240 */
unsigned int F_005f3240(void)
{
  GEN_ENTER(0x5f3240u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x1c)));
  puVar1 = ((undefined4 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x1c)));
  if (iVar2 != 0) {
    F_005ee840(REFG(void * PTR32, 0x1379cb0),*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0x18));
    *puVar1 = 0;
  }
  return 0;
}

/* ref: FUN_005f3270 */
uint F_005f3270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f32a0 */
uint F_005f32a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f32a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f32e0 */
uint F_005f32e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f32e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    uVar1 = F_005f2840(*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x14),param_1);
    F_004ff5f0(REFG(undefined4, 0x1375aec));
    return uVar1;
  }
  return REFG(undefined4, 0x1379cb0);
}

/* ref: FUN_005f3310 */
unsigned int F_005f3310(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3310u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    F_005f2a00(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1);
  }
  return 0;
}

/* ref: FUN_005f3330 */
unsigned int F_005f3330(void)
{
  GEN_ENTER(0x5f3330u, 0u, 0u, 0u, 0u);
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) {
    F_005f2c40(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14));
    return 0;
  }
  return 0;
}

/* ref: FUN_005f3350 */
uint F_005f3350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f3380 */
uint F_005f3380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  int * piVar5;
  int iVar6;
  bool bVar7;
  
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this;
  (*(int * PTR32 *)(gen_frame + 0x44)) = (int *)0x0;
  piVar5 = param_1;
  if (0 < param_1[1]) {
    do {
      iVar1 = *param_1 + (int)((int)(uintptr_t)(*(int * PTR32 *)(gen_frame + 0x44))) * 8;
      iVar6 = (int)param_1 + *(int *)(iVar1 + (int)param_1) + iVar1;
      (*(undefined4 *)(gen_frame + 0xc)) = 0;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      (*(undefined4 *)(gen_frame + 0x18)) = 0;
      (*(undefined4 *)(gen_frame + 0x14)) = 0;
      (*(undefined4 *)(gen_frame + 0x1c)) = 5;
      (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
      (*(undefined4 *)(gen_frame + 0x24)) = 5000;
      (*(undefined4 *)(gen_frame + 0x28)) = 0x10100;
      (*(undefined2 *)(gen_frame + 0x2c)) = 0;
      (*(undefined1 *)(gen_frame + 0x2e)) = 0;
      (*(undefined4 *)(gen_frame + 0x30)) = 0;
      (*(uint *)(gen_frame + 0x40)) = 0;
      F_004ff3e0(&(*(uint *)(gen_frame + 0x40)),iVar6);
      if (((*(uint *)(gen_frame + 0x40)) == 0x746578) || ((*(uint *)(gen_frame + 0x40)) == 0x6d74726c)) {
        (*(undefined1 *)(gen_frame + 0x2e)) = 1;
      }
      uVar3 = F_00513dc0(iVar6,&(*(undefined4 *)(gen_frame + 0xc)),0,0);
      pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
      (*(uint *)(gen_frame + 0x40)) = uVar3;
      (*(undefined1 *)(gen_frame + 0x4b)) = *(undefined1 *)((int)param_1 + iVar1 + 4);
      switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 4))) {
      default: ;
switchD_005f342d_caseD_2: ;
        (*(undefined1 *)(gen_frame + 0x4b)) = 0xff;
        break;
      case 3: ;
        bVar7 = *(short *)(uVar3 + 4) == 4;
LAB_005f3449: ;
        if (bVar7) goto switchD_005f342d_caseD_2;
        break;
      case 4: ;
        if (*(short *)(uVar3 + 4) == 4) {
          bVar7 = *(int *)(uVar3 + 8) == 0x746578;
          goto LAB_005f3449;
        }
        break;
      case 5: ;
        break;
      }
      puVar4 = (undefined4 *)F_004296a0(0x18,0,900);
      *puVar4 = *(undefined4 *)((int)pvVar2 + 0x10);
      puVar4[1] = *(undefined4 *)((int)pvVar2 + 0x10);
      puVar4[2] = *(undefined4 *)((int)pvVar2 + 0x10);
      *(undefined2 *)(puVar4 + 5) = 0;
      if (puVar4 + 3 != (uint *)0x0) {
        puVar4[3] = (*(uint *)(gen_frame + 0x40));
        *(undefined1 *)(puVar4 + 4) = (*(undefined1 *)(gen_frame + 0x4b));
      }
      F_00618510((undefined *)((int)pvVar2 + 0xc),((undefined1 *)(gen_frame + 0x34)),puVar4,0);
      piVar5 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x44)) + 1);
      (*(int * PTR32 *)(gen_frame + 0x44)) = piVar5;
    } while ((int)piVar5 < param_1[1]);
  }
  return (uint)piVar5;
}

/* ref: FUN_005f34c0 */
uint F_005f34c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f34c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1,param_2,param_3,1);
  return uVar1;
}

/* ref: FUN_005f34f0 */
uint F_005f34f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f34f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14) != (undefined *)0x0) && (*(int *)(param_2 + 0x40) == 0x3000)) {
    uVar1 = F_005ef690(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x14),param_1,*(undefined4 *)(param_2 + 0x38),
                         *(undefined4 *)(param_2 + 0x3c),1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_005f3530 */
uint F_005f3530(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3530u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),7);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0xc0,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005f1ce0(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005f35e0 */
uint F_005f35e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f35e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  undefined * pvVar7;
  int iVar8;
  int * piVar9;
  uint uVar10;
  
  if ((*(int *)((int)this + 8) != 0) && (uVar10 = 0, *(int *)((int)this + 0x10) != 0)) {
    iVar8 = 0;
    do {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar10 * 4)));
      if ((iVar2 != 0) &&
         (piVar5 = (int *)F_005ef690(*(undefined * PTR32 *)((int)this + 4),0x2f,iVar2,0,1),
         piVar5 != (int *)0x0)) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5);
        pvVar7 = *(undefined * PTR32 *)((int)this + 8);
        *(uint *)(iVar8 + 0x100 + (int)pvVar7) = uVar6;
        F_0068b4a0(pvVar7,uVar6);
      }
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 0xa0;
    } while (uVar10 < *(uint *)((int)this + 0x10));
  }
  iVar8 = *(int *)((int)this + 4);
  ((undefined1 *)(gen_frame + 0x8))[0] = 0xd;
  F_00619550((undefined *)(iVar8 + 0x13c),&(*(int * PTR32 *)(gen_frame + 0x4)),((undefined1 *)(gen_frame + 0x8)));
  piVar5 = (*(int * PTR32 *)(gen_frame + 0x4));
  if ((*(int * PTR32 *)(gen_frame + 0x4)) != *(int * PTR32 *)(iVar8 + 0x140)) {
    piVar5 = (int *)0x0;
    if ((*(int * PTR32 *)(gen_frame + 0x4))[4] != 0) {
      piVar5 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x4))[4] + 4);
      piVar9 = (int *)*piVar5;
      (*(int * PTR32 *)(gen_frame + 0x4)) = piVar5;
      if (piVar9 != piVar5) {
        do {
          iVar8 = piVar9[6];
          iVar2 = *(int *)(iVar8 + 0x30);
          if (iVar2 != 0) {
            if (*(int *)(iVar8 + 0x34) != 0) {
              if (*(int *)(iVar8 + 8) == 0) {
                pvVar7 = (undefined *)0x0;
              }
              else {
                pvVar7 = *((undefined * PTR32 *)GEN_TOP((*(int *)(iVar8 + 8) + 4)));
              }
              piVar5 = (int *)F_005ef690(pvVar7,0x2f,*(int *)(iVar8 + 0x34),0,1);
              if (piVar5 != (int *)0x0) {
                piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x5c))(piVar5)));
                *((int * PTR32 *)GEN_TOP((*(int *)(iVar8 + 0x30) + 0x80))) = piVar5;
                goto LAB_005f36d3;
              }
            }
            piVar5 = (int *)0x0;
            *(undefined4 *)(iVar2 + 0x80) = 0;
          }
LAB_005f36d3: ;
          if (*(char *)((int)piVar9 + 0x21) == '\0') {
            piVar5 = (int *)piVar9[2];
            if (*(char *)((int)piVar5 + 0x21) == '\0') {
              cVar1 = *(char *)(*piVar5 + 0x21);
              piVar9 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar1 == '\0') {
                cVar1 = *(char *)(*piVar5 + 0x21);
                piVar9 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar1 = *(char *)(piVar9[1] + 0x21);
              piVar4 = (int *)piVar9[1];
              piVar3 = piVar9;
              while ((piVar5 = piVar4, piVar9 = piVar5, cVar1 == '\0' &&
                     (piVar3 == (int *)piVar5[2]))) {
                cVar1 = *(char *)(piVar5[1] + 0x21);
                piVar4 = (int *)piVar5[1];
                piVar3 = piVar5;
              }
            }
          }
        } while (piVar9 != (*(int * PTR32 *)(gen_frame + 0x4)));
      }
    }
  }
  REFG(undefined1, 0x1301314) = 1;
  return (uint)piVar5;
}

/* ref: FUN_005f3790 */
uint F_005f3790(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  *(byte *)((int)this + 0x20) = *(byte *)((int)this + 0x20) | 7;
  *(byte *)((int)this + 0x29) = *(byte *)((int)this + 0x29) & 0xf8 | 8;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0xffffffff;
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined1 *)((int)this + 0x2a) = 0xff;
  *(byte *)((int)this + 0x2b) = *(byte *)((int)this + 0x2b) & 0xfa | 0x7a;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00509590((undefined *)((int)this + 0x30));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a59c4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x30) = (*(undefined * PTR32 (*)[5])REFP(0x10a59a8));
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = REFG(float, 0x1302df0);
  *(undefined4 *)((int)this + 0x44) = REFG(float, 0x1302df4);
  *(undefined4 *)((int)this + 0x48) = REFG(float, 0x1302df8);
  *(undefined4 *)((int)this + 0x50) = REFG(undefined4, 0x1302e00);
  *(undefined4 *)((int)this + 0x54) = REFG(undefined4, 0x1302e04);
  *(undefined4 *)((int)this + 0x58) = REFG(undefined4, 0x1302e08);
  *(undefined4 *)((int)this + 0x5c) = REFG(undefined4, 0x1302e0c);
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1302e10);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1302e14);
  uVar1 = REFG(float, 0x1302e18);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x70) = (*(undefined * PTR32 (*)[1])REFP(0x10a585c));
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x88) = (*(undefined * PTR32 (*)[1])REFP(0x10a5864));
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfff00000;
  *(uint *)((int)this + 0xb0) = *(uint *)((int)this + 0xb0) & 0xffffffc0;
  *(byte *)((int)this + 0xb4) = *(byte *)((int)this + 0xb4) & 0xfc;
  *(uint *)((int)this + 0xb8) = *(uint *)((int)this + 0xb8) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) & 0xfb | 3;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xc5) = 0;
  *(undefined4 *)((int)this + 0xc9) = 0;
  *(undefined4 *)((int)this + 0xcd) = 0;
  *(undefined4 *)((int)this + 0xd1) = 0;
  *(undefined * PTR32 *)((int)this + 0x74) = this;
  return (uint)this;
}

/* ref: FUN_005f3940 */
byte F_005f3940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f3940u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this;
  code * pcVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  
  if ((*(int * PTR32 *)&gen_args[0])[0x1e] == (*(int * PTR32 *)&gen_args[0])[0x1f]) {
    *((undefined1 *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x36))) = 2;
    *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x37))) =
         ((byte)(*(uint *)&gen_args[2]) & 1) * '\x02' | *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x37))) & 0xfc | (byte)(*(undefined4 *)&gen_args[1]) & 1;
    return 1;
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xd0)));
  (*(byte *)(gen_frame + 0xb)) = 0;
  (*(int * PTR32 *)&gen_args[0])[0x2c] = (*(int * PTR32 *)&gen_args[0])[0x2c] ^ (((byte)(*(undefined4 *)&gen_args[1]) == 0) + 1 ^ (*(int * PTR32 *)&gen_args[0])[0x2c]) & 7;
  (*pcVar1)((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  if ((byte)(*(uint *)&gen_args[2]) == '\0') {
    *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b))) =
         *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b))) ^ ((byte)(*(undefined4 *)&gen_args[1]) << 3 ^ *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0x2b)))) & 8;
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      (*(uint *)&gen_args[2]) = 0;
    }
    F_005e38e0((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
    if (((*(int * PTR32 *)&gen_args[0])[2] != 0) && (iVar2 = *((int *)GEN_TOP(((*(int * PTR32 *)&gen_args[0])[2] + 4))), iVar2 != 0)) {
      this = (undefined *)(iVar2 + 0x19c);
      (*(uint *)&gen_args[2]) = (uint)(*(int * PTR32 *)&gen_args[0]);
      F_006105d0(this,&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[2]));
      F_00616e70(this,&(*(uint *)&gen_args[2]),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
      (*(byte *)(gen_frame + 0xb)) = 1;
      return 1;
    }
  }
  else {
    if ((byte)(*(undefined4 *)&gen_args[1]) == 0) {
      *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) = *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) & 0xfe;
      bVar3 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xc3)));
    }
    else {
      *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) = *((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 0x2d))) | 1;
      bVar3 = *((byte *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[0]) + 0xc2)));
    }
    if (bVar3 != 0) {
      uVar4 = F_005dc030((*(int * PTR32 *)&gen_args[0]) + 0x22,
                           (uint)bVar3 <<
                           (('\x04' - ((*((byte *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 10))) >> 4) + 1)) * '\b' & 0x1f) |
                           (*(int * PTR32 *)&gen_args[0])[6]);
      if (uVar4 != 0) {
        F_005dbf70(uVar4,0xffffffff,0);
        (*(byte *)(gen_frame + 0xb)) = 1;
      }
      F_005f0960((*(int * PTR32 *)&gen_args[0]));
      return (*(byte *)(gen_frame + 0xb));
    }
    (*(int * PTR32 *)&gen_args[0])[0x2f] = 0;
    F_005f08f0((*(int * PTR32 *)&gen_args[0]));
    (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(REFG(float, 0x1087f04));
    if ((byte)(*(undefined4 *)&gen_args[1]) != 0) {
      (*(uint *)&gen_args[2]) = 0;
    }
    F_005e38e0((*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),GEN_TOF(gen_bits2f((*(uint *)&gen_args[2]))));
  }
  (*(byte *)(gen_frame + 0xb)) = 1;
  return 1;
}

/* ref: FUN_005f3b00 */
uint F_005f3b00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f3b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((*(byte *)((int)this + 0x20) & 1) == 0) &&
       (bVar2 = *(byte *)((int)this + 0x28) & 0xf, bVar2 != 9)) && (bVar2 != 8)) &&
     ((*(int *)((int)this + 8) != 0 &&
      (this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))), this_00 != (undefined *)0x0)))) {
    uVar3 = *(int *)((int)this + 0x90) - *(int *)((int)this + 0x8c) >> 2;
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        F_005ef520(this_00,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + uVar4 * 4))));
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
  }
  F_005f09d0((undefined *)((int)this + 0x88));
  uVar3 = 0;
  if (*(int *)((int)this + 0x3c) != 0) {
    uVar3 = F_00b5bab0(REFG(void * PTR32, 0x14c4e84),*(int *)((int)this + 0x3c));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3c);
    if (puVar1 != (undefined4 *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Group::SGMovePathActionController::vf9 */
uint F_005f3bb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f3bb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)param_1 + 0xc) == 8) || (*(int *)((int)param_1 + 0xc) == 9)) {
    F_005e3e30(param_1,param_2);
  }
  F_005eb760(param_1,param_2);
  uVar1 = F_005f0cd0(param_1);
  return uVar1;
}

/* ref: FUN_005f3bf0 */
uint F_005f3bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  code * pcVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  
  puVar7 = *(undefined4 * PTR32 *)((int)this + 0x20);
  if ((char)param_1 != '\0') {
    puVar8 = (undefined4 *)*puVar7;
    if (puVar8 != puVar7) {
      do {
        puVar7 = (undefined4 *)puVar8[4];
        (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar7;
        if (*(char *)((int)puVar7 + 0x11) == (char)param_1) {
          F_005f1020(this,&(*(undefined4 * PTR32 *)(gen_frame + 0x8)));
          puVar7 = (undefined4 *)F_00616230((undefined *)((int)this + 0x1c),((undefined1 *)(gen_frame + 0x4)),puVar8);
          puVar8 = (undefined4 *)*puVar7;
        }
        if (*(char *)((int)puVar8 + 0x15) == '\0') {
          puVar3 = (undefined4 *)puVar8[2];
          if (*(char *)((int)puVar3 + 0x15) == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x15);
            puVar7 = (undefined4 *)*puVar3;
            while (puVar8 = puVar3, cVar1 == '\0') {
              cVar1 = *(char *)((int)*puVar7 + 0x15);
              puVar3 = puVar7;
              puVar7 = (undefined4 *)*puVar7;
            }
          }
          else {
            cVar1 = *(char *)((int)puVar8[1] + 0x15);
            puVar4 = (undefined4 *)puVar8[1];
            puVar3 = puVar8;
            while ((puVar7 = puVar4, puVar8 = puVar7, cVar1 == '\0' &&
                   (puVar3 == (undefined4 *)puVar7[2]))) {
              cVar1 = *(char *)((int)puVar7[1] + 0x15);
              puVar4 = (undefined4 *)puVar7[1];
              puVar3 = puVar7;
            }
          }
        }
      } while (puVar8 != *(undefined4 * PTR32 *)((int)this + 0x20));
    }
    return (uint)puVar7;
  }
  puVar8 = (undefined4 *)*puVar7;
  do {
    if (puVar8 == puVar7) {
      uVar6 = F_00616490((undefined *)((int)this + 0x1c));
      return uVar6;
    }
    piVar2 = (int *)puVar8[4];
    if (*((char *)GEN_TOP(((int)*(undefined * PTR32 *)((int)this + 4) + 0x54))) == '\0') {
      F_005ef520(*(undefined * PTR32 *)((int)this + 4),piVar2);
      F_005f04c0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0x4c))),piVar2,0);
    }
    if (*(int *)((int)this + 8) == 0xffff) {
      pcVar5 = *(gen_code32 *)(*piVar2 + 0x14);
      uVar9 = 0;
override_prt_5f3c5c_4169d910: ;
      (*pcVar5)(piVar2,uVar9);
    }
    else {
      ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
      if (piVar2[7] == -1) {
        pcVar5 = *(gen_code32 *)*piVar2;
        uVar9 = 1;
        goto override_prt_5f3c5c_4169d910;
      }
    }
    if (*(char *)((int)puVar8 + 0x15) == '\0') {
      puVar3 = (undefined4 *)puVar8[2];
      if (*(char *)((int)puVar3 + 0x15) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0x15);
        puVar8 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x15);
          puVar8 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar8[1] + 0x15);
        puVar4 = (undefined4 *)puVar8[1];
        puVar3 = puVar8;
        while ((puVar8 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar8[2]))) {
          cVar1 = *(char *)((int)puVar8[1] + 0x15);
          puVar4 = (undefined4 *)puVar8[1];
          puVar3 = puVar8;
        }
      }
    }
  } while( true );
}

/* ref: FUN_005f3d40 */
uint F_005f3d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  iVar3 = param_1;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
  F_005f11c0(this,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),uVar2,iVar3);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25e0);
  uVar2 = *(int *)(param_1 + 0x10) - 1;
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 0: ;
    uVar2 = F_00551cd0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 1: ;
    uVar2 = F_00551da0(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 2: ;
    uVar2 = F_00551d20(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  case 3: ;
    uVar2 = F_00551e10(this_00,&(*(undefined4 *)(gen_frame + 0x8)),&(*(undefined4 *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x20)),1);
    break;
  default: ;
    goto switchD_005f3db0_default;
  }
  *(uint *)((int)this + 0x34) = uVar2;
switchD_005f3db0_default: ;
  piVar1 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))
                      (piVar1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf4 */
unsigned int F_005f3e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f3e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  iVar1 = *(int *)(this + 0x34);
  iVar2 = *(int *)(param_1 + 0x34);
  *(int *)(this + 0x34) = iVar2;
  if (iVar1 != iVar2) {
    F_005f1a10(this);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf1 */
uint F_005f3ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  this[0x90] = (undefined1)0x0;
  if (*(int *)(this + 0x88) != 0) {
    F_005e9920(this);
    if (*(int *)(this + 0x88) != 0) {
      F_00406b30(*(int *)(this + 0x88));
      *(undefined4 *)(this + 0x88) = 0;
    }
    if (*(int *)(this + 0xa0) != *(int *)(this + 0xa4)) {
      F_005f07a0(this + 0x98);
    }
  }
  F_005ed050((undefined *)this,param_1,param_2);
  uVar1 = F_006039f0(this + 0x70,*(undefined4 *)(param_1 + 0x14));
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf27 */
unsigned int F_005f3f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f3f40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x20] & 2) != 0) {
    F_005f1f80((*(undefined * PTR32 *)&gen_args[0]),*(*(undefined4 * PTR32 *)&gen_args[2]));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x100))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    if (((byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b] & 0x40) == 0) {
      (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)(*(undefined4 * PTR32 *)&gen_args[2]) & 0xffffff00)));
    }
    else {
      iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 8)));
      if (((iVar1 == 0) || (*(int *)(iVar1 + 4) == 0)) ||
         (*((char *)GEN_TOP((*(int *)(iVar1 + 4) + 0x50))) != '\0')) {
        if ((iVar1 == 0) ||
           ((*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3) << 8))), (*(byte *)(iVar1 + 0x16) & 1) != 0))
        {
          (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3),1)));
        }
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[2]) = ((undefined4 *)GEN_TOP(((uint)GEN_PIECE(&(*(undefined4 * PTR32 *)&gen_args[2]), 1, 3) << 8)));
      }
    }
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xe0))))((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 * PTR32 *)&gen_args[2]));
  }
  return 0;
}

/* ref: FUN_005f3fc0 */
uint F_005f3fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f3fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xe0);
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) | 4;
  (*pcVar1)(this,1);
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))
                      (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar3;
  }
  uVar3 = F_005f1e60(this,param_1);
  return uVar3;
}

/* ref: FUN_005f4000 */
uint F_005f4000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xe0);
  *(byte *)((int)this + 0x94) = *(byte *)((int)this + 0x94) | 4;
  (*pcVar1)(this,1);
  piVar2 = *(int * PTR32 *)((int)this + 0x34);
  if (piVar2 == (int *)0x0) {
    uVar3 = F_005f1e60(this,param_1);
  }
  else {
    ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,500);
    piVar2 = (int *)F_004e8110(REFG(void * PTR32, 0x1375a64),*(undefined4 *)((int)this + 0x3c),
                                 *(undefined4 *)((int)this + 0x88),(int)*(short *)((int)this + 0x8c)
                                );
    *(int * PTR32 *)((int)this + 0x34) = piVar2;
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,param_1);
      return uVar3;
    }
  }
  return uVar3;
}

/* ref: FUN_005f4070 */
uint F_005f4070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f4070u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  int iVar2;
  uint uVar3;
  
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = (*(int *)&gen_args[1]);
  iVar2 = *(int *)((*(int *)&gen_args[1]) + 8);
  if (iVar2 == 0) {
    iVar2 = *(int *)(REFG(int, 0x1379cb0) + 0x10);
    (*(int *)&gen_args[1]) = 0xffff;
    piVar1 = (int *)F_00619470((undefined *)(iVar2 + 0x10c),((undefined1 *)(gen_frame + 0x28)),&(*(int *)&gen_args[1]));
    if (*piVar1 == *(int *)(iVar2 + 0x110)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar1 + 0x10);
    }
  }
  ((int *)(gen_frame + 0x4))[0] = iVar2;
  (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)&gen_args[3]);
  ((int *)(gen_frame + 0x4))[1] = 0;
  (*(undefined1 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined2 *)(gen_frame + 0x20)) = 0xff00;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar3 = F_005ed050((*(undefined * PTR32 *)&gen_args[0]),((int *)(gen_frame + 0x4)),0);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 1;
  return uVar3;
}

/* ref: FUN_005f4100 */
byte F_005f4100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4100u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * this_00;
  int iVar1;
  byte bVar2;
  
  F_006192f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x88))),&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  iVar1 = (*(int *)&gen_args[2]);
  if ((*(int *)&gen_args[2]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c)))) {
    bVar2 = F_005f2120((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    return bVar2;
  }
  this_00 = (undefined *)((*(int *)&gen_args[2]) + 0x14);
  F_00616770(this_00,&(*(int *)&gen_args[2]),&(*(undefined4 *)&gen_args[1]));
  if ((*(int *)&gen_args[2]) == *(int *)(iVar1 + 0x18)) {
    bVar2 = F_005f2120((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
    return bVar2;
  }
  F_00616510(this_00,&(*(int *)&gen_args[2]),(*(int *)&gen_args[2]));
  F_005ee510((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  return 1;
}

/* ref: FUN_005f4180 */
byte F_005f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  short sVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * PTR32 * ppuVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  ((code *)*(gen_code32 *)(*param_1 + 0x34))(param_1,((float *)(gen_frame + 0x0)));
  uVar11 = (uint)*(ushort *)((int)this + 100);
  bVar4 = 0;
  (*(uint *)(gen_frame + 0x48)) = uVar11;
  for (uVar5 = uVar11; 1 < uVar5; uVar5 = uVar5 >> 1) {
    bVar4 = bVar4 + 1;
  }
  (*(undefined2 *)((char *)&(*(int *)(gen_frame + 0x4c)) + 2)) = ((undefined2)0x27f);
  (*(ushort *)(gen_frame + 0x22)) = (short)(int)(*(float *)(gen_frame + 0x8)) >> (bVar4 & 0x1f);
  (*(uint *)(gen_frame + 0x40)) = ((undefined2)0x27f) | 0xc00;
  (*(short *)(gen_frame + 0x20)) = (short)(int)((float *)(gen_frame + 0x0))[0] >> (bVar4 & 0x1f);
  (*(longlong *)(gen_frame + 0x18)) = (longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  lVar3 = (*(longlong *)(gen_frame + 0x18));
  (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = (uint)(longlong)TRUNC((float10)(*(float *)(gen_frame + 0xc)));
  uVar5 = ((((uint)(*(longlong *)(gen_frame + 0x18)) + uVar11) * 2 - 2) / uVar11 & 0xff) >> 1;
  (*(uint *)(gen_frame + 0x40)) = -uVar5;
  (*(uint *)(gen_frame + 0x44)) = uVar5;
  (*(int *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x40));
  (*(longlong *)(gen_frame + 0x18)) = lVar3;
  if (-uVar5 != uVar5 && SBORROW4((*(uint *)(gen_frame + 0x40)),uVar5) == (int)(uVar5 * -2) < 0) {
    return 1;
  }
  do {
    (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x3c));
    if ((*(int *)(gen_frame + 0x3c)) <= (int)uVar5) {
      (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x40)) + (*(ushort *)(gen_frame + 0x22)) & 0xffff;
      do {
        lVar3 = (*(longlong *)(gen_frame + 0x18));
        sVar2 = (short)(*(int *)(gen_frame + 0x4c)) + (*(short *)(gen_frame + 0x20));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = 0;
        for (uVar5 = uVar11; 1 < uVar5; uVar5 = uVar5 >> 1) {
        }
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = sVar2;
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 4)) = SUB84(lVar3,4);
        (*(undefined2 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 2)) = (undefined2)(*(uint *)(gen_frame + 0x38));
        (*(undefined4 *)((char *)&(*(longlong *)(gen_frame + 0x18)) + 0)) = CONCAT22((undefined2)(*(uint *)(gen_frame + 0x38)),sVar2);
        puVar9 = ((undefined4 *)GEN_TOP((*(undefined4 * PTR32 *)((int)this + 0x8c))[1]));
        cVar1 = *(char *)((int)puVar9 + 0x25);
        puVar10 = *(undefined4 * PTR32 *)((int)this + 0x8c);
        while (cVar1 == '\0') {
          if ((uint)puVar9[3] < (uint)(*(longlong *)(gen_frame + 0x18))) {
            puVar6 = (undefined4 *)puVar9[2];
            puVar9 = puVar10;
          }
          else {
            puVar6 = (undefined4 *)*puVar9;
          }
          puVar10 = puVar9;
          puVar9 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0x25);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar10;
        if ((puVar10 == *(undefined4 * PTR32 *)((int)this + 0x8c)) || ((uint)(*(longlong *)(gen_frame + 0x18)) < (uint)puVar10[3]))
        {
          (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = *(undefined4 * PTR32 *)((int)this + 0x8c);
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x30));
        }
        else {
          ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x34));
        }
        puVar9 = *ppuVar8;
        if (puVar9 == *(undefined4 * PTR32 *)((int)this + 0x8c)) {
          bVar4 = F_005f2120(this,param_1);
LAB_005f42d6: ;
          if (bVar4 == 0) {
            return 0;
          }
        }
        else {
          puVar10 = ((undefined4 *)GEN_TOP(((undefined4 *)puVar9[6])[1]));
          cVar1 = *(char *)((int)puVar10 + 0x11);
          puVar6 = (undefined4 *)puVar9[6];
          while (cVar1 == '\0') {
            if ((int *)puVar10[3] < param_1) {
              puVar7 = (undefined4 *)puVar10[2];
              puVar10 = puVar6;
            }
            else {
              puVar7 = (undefined4 *)*puVar10;
            }
            puVar6 = puVar10;
            puVar10 = puVar7;
            cVar1 = *(char *)((int)puVar7 + 0x11);
          }
          puVar10 = (undefined4 *)puVar9[6];
          (*(undefined4 * PTR32 *)(gen_frame + 0x34)) = puVar6;
          if ((puVar6 == puVar10) || (param_1 < (int *)puVar6[3])) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar10;
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x2c));
          }
          else {
            ppuVar8 = &(*(undefined4 * PTR32 *)(gen_frame + 0x34));
          }
          if (*ppuVar8 == puVar10) {
            bVar4 = F_005f2120(this,param_1);
            uVar11 = (*(uint *)(gen_frame + 0x48));
            goto LAB_005f42d6;
          }
          F_00616510(puVar9 + 5,((undefined1 *)(gen_frame + 0x28)),*ppuVar8);
          F_005ee510(this,param_1);
          uVar11 = (*(uint *)(gen_frame + 0x48));
        }
        (*(int *)(gen_frame + 0x4c)) = (*(int *)(gen_frame + 0x4c)) + 1;
        uVar5 = (*(uint *)(gen_frame + 0x44));
      } while ((*(int *)(gen_frame + 0x4c)) <= (int)(*(uint *)(gen_frame + 0x44)));
    }
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x40)) + 1;
    if ((int)uVar5 < (int)(*(uint *)(gen_frame + 0x40))) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_005f43a0 */
uint F_005f43a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f43a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5ad8));
  F_00617260((undefined *)((int)this + 0x178),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x17c),
               *(undefined4 * PTR32 *)((int)this + 0x17c));
  F_00429760(*(undefined4 *)((int)this + 0x17c),0x14,900);
  F_006171c0((undefined *)((int)this + 0x3c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x40),
               *(undefined4 * PTR32 *)((int)this + 0x40));
  F_00429760(*(undefined4 *)((int)this + 0x40),0x28,900);
  F_006171c0((undefined *)((int)this + 0x2c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x30),
               *(undefined4 * PTR32 *)((int)this + 0x30));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x30),0x28,900);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: FUN_005f4440 */
uint F_005f4440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  uVar2 = 0;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this_00 = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    F_005ee3d0(this_00,1);
    uVar2 = F_005ebe80(this_00);
  }
  return uVar2;
}

/* ref: FUN_005f44a0 */
uint F_005f44a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f44a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_005ee8f0(this,param_2,param_3);
  uVar2 = 0;
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0x60) = *param_1;
    *(undefined4 *)(uVar1 + 100) = param_1[1];
    *(undefined4 *)(uVar1 + 0x68) = param_1[2];
    if (*(char *)(uVar1 + 0x52) == '\0') {
      *(undefined4 *)(uVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(uVar1 + 0x44) + 0x10)));
    }
    this_00 = *(undefined * PTR32 *)(uVar1 + 0x44);
    *(undefined1 *)(uVar1 + 0x52) = 1;
    *(undefined4 *)((int)this_00 + 0x10) = 0;
    F_005ee3d0(this_00,1);
    uVar2 = F_005ebe80(this_00);
  }
  return uVar2;
}

/* ref: FUN_005f4500 */
unsigned int F_005f4500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (this_00 != (undefined *)0x0) {
    F_005ec700(this_00,param_1);
    F_005eede0(this_00,param_1,0);
  }
  return 0;
}

/* ref: FUN_005f4530 */
unsigned int F_005f4530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  byte bVar6;
  uint uVar7;
  undefined4 * puVar8;
  
  if ((*(int *)((int)this + 0x14) != 0) && (bVar6 = F_004ff640(), bVar6 != 0)) {
    F_005f2380(this,1);
    F_005f2380(this,4);
    F_005f2380(this,0xd);
    F_005f2380(this,7);
    F_005f2380(this,6);
    iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x4c)));
    if (iVar2 != 0) {
      puVar8 = *(undefined4 * PTR32 *)(iVar2 + 0xc);
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (undefined4 *)*puVar8;
      while ((*(undefined4 * PTR32 *)(gen_frame + 0x18)) != puVar8) {
        F_005ee980(this,*(undefined4 *)(*(undefined4 * PTR32 *)(gen_frame + 0x18))[4]);
        F_00601220(&(*(undefined4 * PTR32 *)(gen_frame + 0x18)));
      }
    }
    if ((char)param_1 != '\0') {
      puVar8 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x100)));
      puVar3 = (undefined4 *)*puVar8;
      while (puVar3 != puVar8) {
        uVar7 = 0;
        if (*(undefined * PTR32 *)(puVar3[4] + 0x10) != (undefined *)0x0) {
          (*(int *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          ((int *)(gen_frame + 0x10))[0] = 0;
          F_006aa1a0(*(undefined * PTR32 *)(puVar3[4] + 0x10),&(*(int *)(gen_frame + 0x8)));
          if ((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 2 != 0) {
            do {
              F_005ee980(this,*(undefined4 *)((*(int *)(gen_frame + 0x8)) + uVar7 * 4));
              uVar7 = uVar7 + 1;
            } while (uVar7 < (uint)((*(int *)(gen_frame + 0xc)) - (*(int *)(gen_frame + 0x8)) >> 2));
          }
          if ((*(int *)(gen_frame + 0x8)) != 0) {
            F_00429760((*(int *)(gen_frame + 0x8)),(((int *)(gen_frame + 0x10))[0] - (*(int *)(gen_frame + 0x8)) >> 2) * 4,0xd4);
          }
          (*(int *)(gen_frame + 0x8)) = 0;
          (*(int *)(gen_frame + 0xc)) = 0;
          ((int *)(gen_frame + 0x10))[0] = 0;
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
      puVar8 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0xc4)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = puVar8;
      param_1 = 0;
      uVar7 = F_00500f10(puVar8);
      if (uVar7 != 0) {
        do {
          uVar7 = F_00500f20(puVar8,param_1);
          bVar6 = F_005e9bb0(this,uVar7);
          if (bVar6 != 0) {
            uVar7 = F_00513dc0(uVar7,0,0,0);
            puVar8 = (undefined4 *)F_004296a0(0x14,0,900);
            *puVar8 = *(undefined4 *)((int)this + 0x17c);
            puVar8[1] = *(undefined4 *)((int)this + 0x17c);
            puVar8[2] = *(undefined4 *)((int)this + 0x17c);
            *(undefined2 *)(puVar8 + 4) = 0;
            if (puVar8 + 3 != (uint *)0x0) {
              puVar8[3] = uVar7;
            }
            F_00617d20((undefined *)((int)this + 0x178),((int *)(gen_frame + 0x10)),puVar8,0);
            puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x18));
          }
          param_1 = param_1 + 1;
          uVar7 = F_00500f10(puVar8);
        } while (param_1 < uVar7);
      }
      F_005ee980(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x1ac))));
      F_005ee980(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x1b0))));
    }
  }
  return 0;
}

/* ref: FUN_005f4770 */
uint F_005f4770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f4770u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  if (iVar1 == 0) {
    return 0;
  }
  (*(uint *)&gen_args[1]) = (uint)(ushort)(*(uint *)&gen_args[1]);
  F_00619470((undefined *)(iVar1 + 0x10c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *(undefined * PTR32 *)(iVar1 + 0x110)) {
    iVar1 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
    (*(uint *)&gen_args[1]) = (*(int *)&gen_args[2]);
    F_00619760((undefined *)(iVar1 + 0x1c),&(*(int *)&gen_args[2]),&(*(uint *)&gen_args[1]));
    if ((*(int *)&gen_args[2]) != *(int *)(iVar1 + 0x20)) {
      return *(uint *)((*(int *)&gen_args[2]) + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_005f47f0 */
uint F_005f47f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f47f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  ushort uVar2;
  undefined * this_00;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x14);
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_1 + 4);
  cVar1 = *(char *)(param_1 + 1);
  uVar2 = *(ushort *)(param_1 + 2);
  (*(undefined1 *)((char *)&(*(int *)(gen_frame + 0x4)) + 0)) = cVar1;
  (*(int *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x4)), 1, 3),cVar1);
  uVar4 = F_00a1b490(param_1);
  if (uVar2 != 0) {
    (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
    uVar5 = 0;
    F_00619470((undefined *)((int)this_00 + 0x10c),&(*(int *)(gen_frame + 0x4)),&(*(uint *)(gen_frame + 0x8)));
    if ((*(int *)(gen_frame + 0x4)) != *(int *)((int)this_00 + 0x110)) {
      uVar5 = F_005f10f0(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10),uVar3,uVar4);
    }
    return uVar5;
  }
  if ((cVar1 != '\0') && (cVar1 != '\x0f')) {
    uVar4 = F_005ef690(this_00,(*(int *)(gen_frame + 0x4)),uVar3,0,1);
    return uVar4;
  }
  return 0;
}

/* ref: FUN_005f48a0 */
unsigned int F_005f48a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f48a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 0x4c);
  if ((*(int *)((int)this_00 + 0x10) != 0) && (*((char *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x55))) == '\0')
     ) {
    if (REFG(int, 0x1375554) != 0) {
      F_004b6160(REFG(int, 0x1375554),(uint)*(byte *)(REFG(int, 0x1371290) + 0x22),*(float *)(REFG(int, 0x1371290) + 0xc),
                   (uint)REFG(undefined1, 0x1301314));
      REFG(undefined1, 0x1301314) = 0;
    }
    if (*(char *)((int)this_00 + 0x18) == '\0') {
      F_005f0650(this_00);
    }
    else {
      F_005ea8d0(this_00);
    }
  }
  F_005d9500(this,param_1);
  F_005ecd20(this,param_1);
  *(undefined4 *)((int)this + 0xbc) = *param_1;
  *(uint *)((int)this + 0xc0) = *(int *)((int)this + 0xc0) - 1U & 1;
  return 0;
}

/* ref: FUN_005f4930 */
unsigned int F_005f4930(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint local_8;
  
  F_005f3030(this);
  F_005f30f0(this);
  F_005ef480(this);
  F_005f35e0(*(undefined * PTR32 *)((int)this + 0x48));
  *(undefined1 *)(REFG(int, 0x1371280) + 0x4f) = 1;
  F_00625960();
  iVar1 = *(int *)((int)this + 0x44);
  uVar2 = *(int *)((int)this + 400) - *(int *)((int)this + 0x18c) >> 2;
  if (uVar2 != 0) {
    local_8 = 0;
    do {
      F_005dc3a0(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18c) + local_8 * 4))),
                   (undefined4 *)(iVar1 + 0x20));
      local_8 = local_8 + 1;
    } while (local_8 < uVar2);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(iVar1 + 0x20);
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(iVar1 + 0x24);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(iVar1 + 0x28);
  }
  F_005ef8e0(this);
  F_00ae12b0(&REFG(undefined, 0x14c0878));
  F_00b7a320(&REFG(undefined, 0x14c5798));
  *(undefined4 *)((int)this + 0x10) = 7;
  return 0;
}

/* ref: FUN_005f4a00 */
uint F_005f4a00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4a00u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this;
  uint uVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    F_005ee3d0(this,1);
    uVar2 = F_005ebe80(this);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005f4a60 */
uint F_005f4a60(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5af4));
  F_00617830((undefined *)((int)this + 0xc),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x10),
               *(undefined4 * PTR32 *)((int)this + 0x10));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x10),0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_005f4aa0 */
uint F_005f4aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 4) == 0)) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    return param_1;
  }
  uVar1 = *(uint *)(param_1 + 0x10);
  if (((uVar1 < 0x1f400000) && (*(uint *)(param_1 + 0x14) < 0x1f400000)) ||
     ((uVar1 < 0x1f400000 && (*(uint *)(param_1 + 0x14) < 0x32000000)))) {
    *(undefined4 *)((int)this + 4) = 4;
  }
  else if ((uVar1 < 0x32000000) && (*(uint *)(param_1 + 0x14) < 0x32000000)) {
    *(undefined4 *)((int)this + 4) = 3;
  }
  else {
    if ((0x3e7fffff < uVar1) || (0x3e7fffff < *(uint *)(param_1 + 0x14))) {
      *(undefined4 *)((int)this + 4) = 1;
      return param_1;
    }
    *(undefined4 *)((int)this + 4) = 2;
  }
  uVar1 = F_005f3380(this,param_1);
  F_004ff5f0(REFG(undefined4, 0x1375aec));
  *(undefined4 *)((int)this + 8) = 1;
  return uVar1;
}

/* ref: FUN_005f4b50 */
uint F_005f4b50(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4b50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int * piVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  int * piVar5;
  uint in_EAX = 0;
  int * piVar6;
  ulonglong uVar7;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    piVar2 = *(int * PTR32 *)((int)this + 0x10);
    piVar6 = (int *)*piVar2;
    (*(int * PTR32 *)(gen_frame + 0x18)) = piVar2;
    if (piVar6 != piVar2) {
      do {
        F_0050c620(piVar6[3],0,0);
        if (*(char *)((int)piVar6 + 0x15) == '\0') {
          piVar2 = (int *)piVar6[2];
          if (*(char *)((int)piVar2 + 0x15) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x15);
            piVar6 = piVar2;
            piVar2 = (int *)*piVar2;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar2 + 0x15);
              piVar6 = piVar2;
              piVar2 = (int *)*piVar2;
            }
          }
          else {
            cVar1 = *(char *)(piVar6[1] + 0x15);
            piVar5 = (int *)piVar6[1];
            piVar2 = piVar6;
            while ((piVar6 = piVar5, cVar1 == '\0' && (piVar2 == (int *)piVar6[2]))) {
              cVar1 = *(char *)(piVar6[1] + 0x15);
              piVar5 = (int *)piVar6[1];
              piVar2 = piVar6;
            }
          }
        }
      } while (piVar6 != (*(int * PTR32 *)(gen_frame + 0x18)));
    }
    F_00615a40((undefined1 *)((int)this + 0xc));
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)F_004296a0(0x18,0,900);
    *(*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc))[1] = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc))[2] = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
    *(undefined1 *)((*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 5) = 1;
    *(undefined1 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0xc)) + 0x15) = 1;
    if ((undefined1 *)((int)this + 0xc) != ((undefined1 *)(gen_frame + 0x8))) {
      puVar3 = *(undefined4 * PTR32 *)((int)this + 0x10);
      *(undefined4 * PTR32 *)((int)this + 0x10) = (*(undefined4 * PTR32 *)(gen_frame + 0xc));
      uVar4 = *(undefined4 *)((int)this + 0x14);
      (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar3;
      *(undefined4 *)((int)this + 0x14) = (*(undefined4 *)(gen_frame + 0x10));
      (*(undefined4 *)(gen_frame + 0x10)) = uVar4;
    }
    F_00617830(((undefined1 *)(gen_frame + 0x8)),&(*(int * PTR32 *)(gen_frame + 0x18)),*(*(undefined4 * PTR32 *)(gen_frame + 0xc)),(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    uVar7 = F_00429760((*(undefined4 * PTR32 *)(gen_frame + 0xc)),0x18,900);
    in_EAX = (uint)uVar7;
  }
  return in_EAX;
}

/* ref: FUN_005f4c70 */
uint F_005f4c70(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4c70u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this;
  uint uVar2;
  
  iVar1 = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x60) = *param_1;
    *(undefined4 *)(iVar1 + 100) = param_1[1];
    *(undefined4 *)(iVar1 + 0x68) = param_1[2];
    if (*(char *)(iVar1 + 0x52) == '\0') {
      *(undefined4 *)(iVar1 + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x44) + 0x10)));
    }
    this = *(undefined * PTR32 *)(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0x52) = 1;
    *(undefined4 *)((int)this + 0x10) = 0;
    F_005ee3d0(this,1);
    uVar2 = F_005ebe80(this);
    return uVar2;
  }
  return 0;
}

/* ref: FUN_005f4cd0 */
uint F_005f4cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4cd0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int * piVar3;
  undefined * this;
  
  iVar1 = param_1[1];
  if (param_1[3] == 0) {
    iVar2 = *param_1;
    if ((((iVar2 == 0) || (*(short *)(iVar2 + 0x12) == 0)) && (param_1[6] == 2)) &&
       ((char)param_1[2] != '\0')) {
      piVar3 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar2 + 4),6);
    }
    else {
      this = (undefined *)F_00406b90(0xf0,0,0);
      if (this == (undefined *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)F_005f3790(this);
      }
    }
  }
  else {
    piVar3 = (int *)F_00a1b570(param_1[3]);
  }
  ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,param_1,*(int *)(iVar1 + 0x30) + iVar1);
  return (uint)piVar3;
}

/* ref: FUN_005f4d50 */
uint F_005f4d50(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_0060f280(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))));
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  F_00617300(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_005f4db0 */
uint F_005f4db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f4db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  char cVar1;
  char * pcVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  (*(uint *)(gen_frame + 0x18c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x190);
  (*(undefined4 *)(gen_frame + 0x8)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0xc)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x0)) = 1;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x50)) = param_1[0xc];
  (*(undefined4 *)(gen_frame + 0x54)) = param_1[0xd];
  (*(undefined4 *)(gen_frame + 0x58)) = param_1[0xe];
  (*(undefined4 *)(gen_frame + 0x60)) = param_1[0xf];
  (*(undefined4 *)(gen_frame + 0x64)) = param_1[0x10];
  (*(undefined4 *)(gen_frame + 0x68)) = param_1[0x11];
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x20)),param_1 + 3);
  F_005da4e0(&(*(undefined4 *)(gen_frame + 0x0)),((char *)(gen_frame + 0x80)),0x100);
  pcVar2 = ((char *)(gen_frame + 0x80));
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_0040b1a0(&(*(int *)(gen_frame + 0x78)),((char *)(gen_frame + 0x80)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x80)) + 1));
  uVar3 = F_00408810(&(*(int *)(gen_frame + 0x78)));
  F_004087f0(&(*(int *)(gen_frame + 0x78)));
  (*(uint *)(gen_frame + 0x4)) = uVar3;
  F_00619280(this,&(*(int *)(gen_frame + 0x7c)),&(*(uint *)(gen_frame + 0x4)));
  if ((*(int *)(gen_frame + 0x7c)) == *(int *)((int)this + 4)) {
    (*(uint *)(gen_frame + 0x100)) = uVar3;
    F_005da450(((undefined1 *)(gen_frame + 0x110)),&(*(undefined4 *)(gen_frame + 0x0)));
    puVar4 = (undefined4 *)F_004296a0(0xa0,0,0x385);
    *puVar4 = *(undefined4 *)((int)this + 4);
    puVar4[1] = *(undefined4 *)((int)this + 4);
    puVar4[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar4 + 0x24) = 0;
    if (puVar4 + 4 != (uint *)0x0) {
      puVar4[4] = (*(uint *)(gen_frame + 0x100));
      F_005da450(puVar4 + 8,((undefined1 *)(gen_frame + 0x110)));
    }
    F_00617e00(this,&(*(int *)(gen_frame + 0x78)),puVar4,0);
    iVar5 = (*(int *)(gen_frame + 0x78));
  }
  else {
    *(int *)((*(int *)(gen_frame + 0x7c)) + 0x20) = *(int *)((*(int *)(gen_frame + 0x7c)) + 0x20) + 1;
    iVar5 = (*(int *)(gen_frame + 0x7c));
  }
  uVar3 = *(uint *)(iVar5 + 0x10);
  F_00c47745((*(uint *)(gen_frame + 0x18c)) ^ (uint)(uint)(gen_frame + 0x190));
  return uVar3;
}

/* ref: FUN_005f4f80 */
uint F_005f4f80(unsigned int gen_a0)
{
  GEN_ENTER(0x5f4f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
  F_005f03f0(this);
  F_006178d0((undefined *)((int)this + 8),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0xc),
               *(undefined4 * PTR32 *)((int)this + 0xc));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0xc),0x18,900);
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf38 */
unsigned int F_005f4fc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5f4fc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x9c);
  cVar3 = (char)param_2;
  if ((piVar1 != (int *)0x0) && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1), (char)uVar2 == '\0')
     ) {
    if (cVar3 == '\0') {
      if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 0x38) == 0x10) {
        return 0;
      }
    }
    else if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 0x38) == 8) {
      return 0;
    }
    F_005dbaf0(param_1,param_2,1,1);
    *(byte *)((int)param_1 + 0x2b) =
         *(byte *)((int)param_1 + 0x2b) ^ (cVar3 << 5 ^ *(byte *)((int)param_1 + 0x2b)) & 0x20;
    return 0;
  }
  if ((*(char *)((int)param_1 + 0xc2) != '\0') && (*(char *)((int)param_1 + 0xc3) != '\0')) {
    if (cVar3 == '\0') {
      if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 7) == 2) {
        return 0;
      }
    }
    else if (((byte)*(undefined4 *)((int)param_1 + 0xb0) & 7) == 1) {
      return 0;
    }
    F_005f3940(param_1,param_2,1,1);
    *(byte *)((int)param_1 + 0x2b) =
         *(byte *)((int)param_1 + 0x2b) ^ (cVar3 << 5 ^ *(byte *)((int)param_1 + 0x2b)) & 0x20;
    return 0;
  }
  *(byte *)((int)param_1 + 0x2b) =
       *(byte *)((int)param_1 + 0x2b) ^
       (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
        (!(param_3 < *(float *)&REFG(undefined, 0x1088114)) && param_3 != *(float *)&REFG(undefined, 0x1088114))) << 5 ^
       *(byte *)((int)param_1 + 0x2b)) & 0x20;
  uVar2 = 0;
  uVar4 = *(int *)((int)param_1 + 0x7c) - *(int *)((int)param_1 + 0x78) >> 2;
  if (uVar4 != 0) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)param_1 + 0x78) + uVar2 * 4))) + 0x10)));
      if (*(char *)((int)piVar1 + 0x11) == '\x01') {
        if ((*(byte *)((int)piVar1 + 0x2b) & 6) != 0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x98))(param_2,(undefined4)gen_fl2bits(param_3));
        }
      }
      else if ((*(byte *)((int)piVar1 + 0x2b) & 2) != 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x98))(param_2,(undefined4)gen_fl2bits(param_3));
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  return 0;
}

/* ref: FUN_005f5110 */
unsigned int F_005f5110(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)((int)this + 8) == 0) {
    pvVar3 = (undefined *)0x0;
  }
  else {
    pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4)));
  }
  if ((*(int *)((int)this + 0x9c) != 0) && (pvVar3 != (undefined *)0x0)) {
    F_005eccb0(pvVar3,*(int *)((int)this + 0x9c));
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x9c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_005f3b00(this);
  if (((((*(byte *)((int)this + 0x20) & 1) == 0) &&
       (bVar2 = *(byte *)((int)this + 0x28) & 0xf, bVar2 != 9)) && (bVar2 != 8)) &&
     (((*(int *)((int)this + 8) != 0 &&
       (pvVar3 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 8) + 4))), pvVar3 != (undefined *)0x0)) &&
      (uVar4 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2, uVar4 != 0)))) {
    do {
      F_005ef520(pvVar3,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar5 * 4))) + 0x10))));
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  F_005f07a0((undefined *)((int)this + 0x70));
  *(uint *)((int)this + 0xa8) = *(uint *)((int)this + 0xa8) & 0xfffffff0;
  return 0;
}

/* ref: FUN_005f51d0 */
uint F_005f51d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f51d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  if ((*(char *)((int)this + 0xc2) != '\0') && (*(char *)((int)this + 0xc3) != '\0')) {
    bVar1 = F_005f3940(this,param_1,1,0);
    return CONCAT31(extraout_var,bVar1);
  }
  bVar1 = F_005f3940(this,param_1,param_2,0);
  return CONCAT31(extraout_var_00,bVar1);
}

/* ref: FUN_005f5210 */
unsigned int F_005f5210(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int iVar3;
  int * piVar4;
  int local_10;
  
  piVar4 = (int *)((int)this + 0x5c);
  iVar3 = 4;
  do {
    if (*piVar4 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 0x90))((int *)*piVar4,0);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x50);
  if (pvVar2 != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x30);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    local_10 = (int)(longlong)TRUNC((float10)fVar1);
    piVar4 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,(uint)(local_10 * 1000) / 0x1e);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x54),0);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x58);
  if (pvVar2 != (undefined *)0x0) {
    piVar4 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x78))(piVar4,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2);
    }
  }
  return 0;
}

/* ref: FUN_005f52e0 */
unsigned int F_005f52e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f52e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int * piVar1;
  int local_10;
  
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    local_10 = (int)(longlong)TRUNC((float10)*(float *)((int)this + 0x30));
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x50),(uint)(local_10 * 1000) / 0x1e);
  }
  if (*(undefined * PTR32 *)((int)this + 0x58) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x58),0);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x54);
  if (this_00 != (undefined *)0x0) {
    piVar1 = *(int * PTR32 *)((int)this_00 + 0x34);
    *(byte *)((int)this_00 + 0x94) = *(byte *)((int)this_00 + 0x94) & 0xfb;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
      *(undefined4 *)((int)this_00 + 0x34) = 0;
      F_005e1000(this_00);
    }
  }
  return 0;
}

/* ref: FUN_005f5370 */
uint F_005f5370(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  *(undefined4 *)((int)this + 0x1c) = 3;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_005dc670(this,1);
  piVar3 = (int *)((int)this + 0x5c);
  iVar2 = 4;
  do {
    if (*piVar3 != 0) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)*piVar3 + 0x90))((int *)*piVar3,1);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (*(undefined * PTR32 *)((int)this + 0x50) != (undefined *)0x0) {
    uVar1 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x50),500);
  }
  this_00 = *(undefined * PTR32 *)((int)this + 0x54);
  if (this_00 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)this_00 + 0x34);
    *(byte *)((int)this_00 + 0x94) = *(byte *)((int)this_00 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,500);
      *(undefined4 *)((int)this_00 + 0x34) = 0;
      uVar1 = F_005e1000(this_00);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_005f5400 */
uint F_005f5400(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int * piVar3;
  code * pcVar4;
  uint uVar5;
  int local_10;
  
  if (*(undefined * PTR32 *)((int)this + 0x44) == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) && (*(undefined * PTR32 *)((int)this + 0x48) != (undefined *)0x0)) {
      local_10 = (int)(longlong)TRUNC((float10)*(float *)((int)this + 0x28));
      uVar5 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x48),(uint)(local_10 * 1000) / 0x1e);
      goto LAB_005f54b8;
    }
    uVar5 = 0;
  }
  else {
    uVar5 = F_005f4000(*(undefined * PTR32 *)((int)this + 0x44),0);
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x48);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,0);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      uVar5 = F_005e1000(pvVar2);
    }
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x4c);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,0);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      uVar5 = F_005e1000(pvVar2);
    }
  }
LAB_005f54b8: ;
  piVar3 = *(int * PTR32 *)((int)this + 0x3c);
  if (piVar3 != (int *)0x0) {
    fVar1 = *(float *)((int)this + 0x28);
    pcVar4 = *(gen_code32 *)(*piVar3 + 0xe0);
    *(byte *)(piVar3 + 0x23) = *(byte *)(piVar3 + 0x23) | 1;
    uVar5 = (*pcVar4)(piVar3,1);
    if (piVar3[0xc] != 0) {
      F_0068b7c0(piVar3[0xc],(float)(float10)1);
      uVar5 = F_00699cb0(piVar3[0xc],fVar1);
    }
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x40);
  if (piVar3 != (int *)0x0) {
    fVar1 = *(float *)((int)this + 0x28);
    pcVar4 = *(gen_code32 *)(*piVar3 + 0xe0);
    *(byte *)(piVar3 + 0x23) = *(byte *)(piVar3 + 0x23) | 1;
    uVar5 = (*pcVar4)(piVar3,1);
    if (piVar3[0xc] != 0) {
      F_0068b7c0(piVar3[0xc],(float)(float10)1);
      uVar5 = F_00699cb0(piVar3[0xc],fVar1);
    }
  }
  return uVar5;
}

/* ref: FUN_005f5550 */
unsigned int F_005f5550(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x44);
  if (pvVar1 == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) && (*(int *)((int)this + 0x48) != 0)) {
      uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x48) + 0xc0))))(*(int * PTR32 *)((int)this + 0x48));
      if ((char)uVar4 == '\0') {
        F_005f4000(*(undefined * PTR32 *)((int)this + 0x48),0);
      }
      goto LAB_005f55e8;
    }
  }
  else {
    piVar2 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,500);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      F_005e1000(pvVar1);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x48) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x48),0);
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0x4c);
  if (pvVar1 != (undefined *)0x0) {
    piVar2 = *(int * PTR32 *)((int)pvVar1 + 0x34);
    *(byte *)((int)pvVar1 + 0x94) = *(byte *)((int)pvVar1 + 0x94) & 0xfb;
    if (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,0);
      *(undefined4 *)((int)pvVar1 + 0x34) = 0;
      F_005e1000(pvVar1);
    }
  }
LAB_005f55e8: ;
  if ((*(int *)((int)this + 0x3c) != 0) &&
     (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x3c) + 0xc0))))(*(int * PTR32 *)((int)this + 0x3c)),
     (char)uVar4 == '\0')) {
    piVar2 = *(int * PTR32 *)((int)this + 0x3c);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0xe0);
    *(byte *)(piVar2 + 0x23) = *(byte *)(piVar2 + 0x23) | 1;
    (*pcVar3)(piVar2,1);
    if (piVar2[0xc] != 0) {
      F_0068b7c0(piVar2[0xc],(float)(float10)1);
      F_00699cb0(piVar2[0xc],(float)(float10)0);
    }
  }
  if ((*(int *)((int)this + 0x40) != 0) &&
     (uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x40) + 0xc0))))(*(int * PTR32 *)((int)this + 0x40)),
     (char)uVar4 == '\0')) {
    piVar2 = *(int * PTR32 *)((int)this + 0x40);
    pcVar3 = *(gen_code32 *)(*piVar2 + 0xe0);
    *(byte *)(piVar2 + 0x23) = *(byte *)(piVar2 + 0x23) | 1;
    (*pcVar3)(piVar2,1);
    if (piVar2[0xc] != 0) {
      F_0068b7c0(piVar2[0xc],(float)(float10)1);
      F_00699cb0(piVar2[0xc],(float)(float10)0);
    }
  }
  return 0;
}

/* ref: FUN_005f5690 */
unsigned int F_005f5690(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  int * piVar3;
  int iVar4;
  int local_10;
  
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x44);
  if (pvVar2 == (undefined *)0x0) {
    if ((*(int *)((int)this + 0x4c) == 0) &&
       (pvVar2 = *(undefined * PTR32 *)((int)this + 0x48), pvVar2 != (undefined *)0x0)) {
      fVar1 = *(float *)((int)this + 0x28);
      *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
      local_10 = (int)(longlong)TRUNC((float10)fVar1);
      piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,(uint)(local_10 * 1000) / 0x1e);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2);
      return 0;
    }
  }
  else {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2);
    }
  }
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x48);
  if (pvVar2 != (undefined *)0x0) {
    piVar3 = *(int * PTR32 *)((int)pvVar2 + 0x34);
    *(byte *)((int)pvVar2 + 0x94) = *(byte *)((int)pvVar2 + 0x94) & 0xfb;
    if (piVar3 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3,500);
      *(undefined4 *)((int)pvVar2 + 0x34) = 0;
      F_005e1000(pvVar2);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x4c) != (undefined *)0x0) {
    F_005f4000(*(undefined * PTR32 *)((int)this + 0x4c),0);
  }
  iVar4 = *(int *)((int)this + 0x3c);
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x30) != 0) && ((*(byte *)(iVar4 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar4 + 0x30),*(float *)((int)this + 0x28));
    }
    *(byte *)(iVar4 + 0x8c) = *(byte *)(iVar4 + 0x8c) & 0xfe;
  }
  iVar4 = *(int *)((int)this + 0x40);
  if (iVar4 != 0) {
    if ((*(int *)(iVar4 + 0x30) != 0) && ((*(byte *)(iVar4 + 0x8c) & 1) != 0)) {
      F_0068b730(*(int *)(iVar4 + 0x30),*(float *)((int)this + 0x28));
    }
    *(byte *)(iVar4 + 0x8c) = *(byte *)(iVar4 + 0x8c) & 0xfe;
  }
  return 0;
}

/* ref: FUN_005f57d0 */
uint F_005f57d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f57d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5b04));
  F_00617970((undefined *)((int)this + 0x1c),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x20),
               *(undefined4 * PTR32 *)((int)this + 0x20));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x20),0x18,0x385);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: Client::LayoutEngine::Layer::LayerManager::vf2 */
uint F_005f5810(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_005f3bf0(this,0);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf56 */
uint F_005f5820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f5820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  this[0x2b] = (undefined1)
               ((byte)this[0x2b] ^ ((char)param_1 << 3 ^ (byte)this[0x2b]) & 8);
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
  if (uVar3 != 0xffffffff) {
    F_00a5f030(*(undefined * PTR32 *)(this + 0x30),4,param_1,0);
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x11c))(this);
    if ((uVar3 != 0xffffffff) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 0x30) + 0xf0))), iVar1 != 0)) {
      if ((*(char *)(iVar1 + 0xc2) != '\0') && (*(char *)(iVar1 + 0xc3) != '\0')) {
        bVar2 = F_005f3940(iVar1,param_1,1,0);
        return CONCAT31(extraout_var,bVar2);
      }
      bVar2 = F_005f3940(iVar1,param_1,0,0);
      uVar3 = CONCAT31(extraout_var_00,bVar2);
    }
  }
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf56 */
uint F_005f58b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f58b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = (*(undefined4 *)&gen_args[1]);
  (*(undefined * PTR32 *)&gen_args[0])[0x2b] = (undefined1)
               ((byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b] ^ ((char)(*(undefined4 *)&gen_args[1]) << 3 ^ (byte)(*(undefined * PTR32 *)&gen_args[0])[0x2b]) & 8);
  uVar4 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (uVar4 != 0xffffffff) {
    (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11]);
    this_00 = (undefined *)F_00a1b870((*(undefined4 *)&gen_args[1]),uVar4);
    uVar4 = 0;
    if (this_00 != (undefined *)0x0) {
      F_00a5f030(this_00,4,uVar2,0);
      uVar4 = *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
      if (uVar4 != 0xffffffff) {
        (*(undefined4 *)&gen_args[1]) = CONCAT31(GEN_PIECE(&(*(undefined4 *)&gen_args[1]), 1, 3),(*(undefined * PTR32 *)&gen_args[0])[0x11]);
        uVar4 = F_00a1b870((*(undefined4 *)&gen_args[1]),uVar4);
        if (((uVar4 != 0) && (*(int *)(uVar4 + 0x7c) == 0)) &&
           (iVar1 = *(int *)(uVar4 + 0xf0), iVar1 != 0)) {
          if ((*(char *)(iVar1 + 0xc2) != '\0') && (*(char *)(iVar1 + 0xc3) != '\0')) {
            bVar3 = F_005f3940(iVar1,uVar2,1,0);
            return CONCAT31(extraout_var,bVar3);
          }
          bVar3 = F_005f3940(iVar1,uVar2,0,0);
          uVar4 = CONCAT31(extraout_var_00,bVar3);
        }
      }
    }
  }
  return uVar4;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf31 */
unsigned int F_005f5960(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5960u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((*(int *)(this + 0x34) == 0) && (((byte)this[0x20] & 2) != 0)) {
    if (*(int *)(this + 0x3c) == 0) {
      if (*(int *)(this + 0x38) != 0) {
        if (*(int *)(this + 8) == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
        }
        uVar2 = F_00507260((undefined *)(iVar1 + 0x14c),this + 0x38);
        uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))(this,((undefined1 *)(gen_frame + 0x0)));
        F_005ddd80(this,uVar3,uVar2);
      }
    }
    else {
      if (*(int *)(this + 8) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
      }
      (*(int *)(gen_frame + 0x3c)) = *(int *)(this + 0x3c);
      F_00614a80((undefined *)(iVar1 + 0x15c),&(*(int *)(gen_frame + 0x38)),&(*(int *)(gen_frame + 0x3c)));
      if ((*(int *)(gen_frame + 0x38)) == *(int *)(iVar1 + 0x160)) {
        F_005f3d40(this,0);
      }
      else {
        F_005f3d40(this,(*(int *)(gen_frame + 0x38)) + 0x20);
      }
    }
    if (*(int *)(this + 0x34) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x34) + 0x1c))))
                (*(int * PTR32 *)(this + 0x34),*(undefined4 *)(this + 0x40),*(undefined4 *)(this + 0x44));
      ((code *)*(gen_code32 *)(*(int *)this + 0x90))(this,(uint)((byte)this[0x2b] >> 3 & 1));
    }
  }
  return 0;
}

/* ref: FUN_005f5a60 */
unsigned int F_005f5a60(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5b24));
  iVar1 = *(int *)((int)this + 0x7c);
  if (iVar1 != 0) {
    F_00429760(iVar1,((*(int *)((int)this + 0x84) - iVar1) / 0xc) * 0xc,0x385);
  }
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a2a84));
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf2 */
uint F_005f5ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f5ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x7c) != *(int *)(this + 0x80)) {
    *(int *)(this + 0x80) = *(int *)(this + 0x7c);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf39 */
unsigned int F_005f5b10(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5f5b10u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int local_c;
  
  if ((char)param_2 != '\0') {
    local_c = (int)(longlong)TRUNC((float10)param_3);
    F_005f4000(param_1,(uint)(local_c * 1000) / 0x1e);
    return 0;
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x34);
  *(byte *)((int)param_1 + 0x94) = *(byte *)((int)param_1 + 0x94) & 0xfb;
  if (piVar1 != (int *)0x0) {
    local_c = (int)(longlong)TRUNC((float10)param_3);
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,(uint)(local_c * 1000) / 0x1e);
    *(undefined4 *)((int)param_1 + 0x34) = 0;
    F_005e1000(param_1);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf50 */
uint F_005f5bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f5bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 SVar1;
  int * piVar2;
  undefined4 in_EAX = 0;
  undefined3 uVar4;
  uint uVar3;
  
  SVar1 = this[0x94];
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar3 = CONCAT31(uVar4,SVar1);
  if (((byte)SVar1 >> 2 & 1) != (byte)param_1) {
    if ((byte)param_1 == 0) {
      piVar2 = *(int * PTR32 *)(this + 0x34);
      uVar3 = CONCAT31(uVar4,SVar1) & 0xfffffffb;
      this[0x94] = SUB41(uVar3,0);
      if (piVar2 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar2 + 0x78))(piVar2,0);
        *(undefined4 *)(this + 0x34) = 0;
        uVar3 = F_005e1000(this);
      }
    }
    else {
      this[0x94] = (undefined1)((byte)SVar1 | 4);
      ((code *)*(gen_code32 *)(*(int *)this + 0xe0))(this,1);
      piVar2 = *(int * PTR32 *)(this + 0x34);
      if (piVar2 == (int *)0x0) {
        uVar3 = F_005f1e60(this,0);
      }
      else {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x4c))(piVar2,0);
      }
    }
  }
  this[0x94] = (undefined1)
               ((byte)this[0x94] ^ ((byte)param_1 * '\x04' ^ (byte)this[0x94]) & 4);
  return uVar3;
}

/* ref: FUN_005f5c50 */
uint F_005f5c50(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c38));
  F_00617470((undefined *)((int)this + 0x30),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x34),
               *(undefined4 * PTR32 *)((int)this + 0x34));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 0x34),0x18,900);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return (uint)uVar1;
}

/* ref: FUN_005f5c90 */
byte F_005f5c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f5c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  uint uVar2;
  short sVar3;
  short sVar4;
  
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))(param_1);
  if ((char)uVar2 != '\0') {
    bVar1 = F_005f4180(this,param_1,param_2);
    return bVar1;
  }
  uVar2 = (uint)*(ushort *)((int)this + 100);
  sVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(ushort *)(gen_frame + 0x8)) = *(ushort *)((int)this + 100);
  (*(short *)(gen_frame + 0xa)) = 0;
  if (1 < uVar2) {
    do {
      uVar2 = uVar2 >> 1;
      sVar3 = sVar3 + 1;
    } while (1 < uVar2);
    (*(short *)(gen_frame + 0xa)) = sVar3;
  }
  sVar4 = (short)(int)*param_2 >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  sVar3 = (short)(int)param_2[2] >> ((byte)(*(short *)(gen_frame + 0xa)) & 0x1f);
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 0)) = sVar4;
  (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x4)) + 2)) = sVar3;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT22(sVar3,sVar4);
  bVar1 = F_005f4100(this,param_1,&(*(undefined4 *)(gen_frame + 0x4)));
  return bVar1;
}

/* ref: FUN_005f5d20 */
uint F_005f5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x5f5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  char cVar1;
  int * piVar2;
  int * piVar3;
  byte bVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar6;
  int * piVar7;
  int * piVar8;
  
  (*(int *)(gen_frame + 0x2c)) = param_1;
  F_006192f0((undefined *)(param_1 + 0x88),&(*(int * PTR32 *)(gen_frame + 0x28)),param_3);
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x28));
  if ((*(int * PTR32 *)(gen_frame + 0x28)) != *(int * PTR32 *)(param_1 + 0x8c)) {
    piVar7 = (int *)(*(int * PTR32 *)(gen_frame + 0x28))[6];
    piVar8 = (int *)*piVar7;
    (*(int * PTR32 *)(gen_frame + 0x24)) = piVar7;
    if (piVar8 != piVar7) {
      do {
        piVar2 = (int *)piVar8[3];
        if (piVar2 != (int *)0x0) {
          uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x2c))(piVar2);
          if ((char)uVar5 != '\0') {
            bVar4 = F_005ec0b0(param_2,piVar2);
            piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar4)));
            if (bVar4 != 0) goto LAB_005f5e24;
          }
          ((code *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2,((undefined1 *)(gen_frame + 0x0)));
          bVar4 = F_005d8fa0(piVar2,((undefined1 *)(gen_frame + 0x0)),param_4,param_5,&(*(int * PTR32 *)(gen_frame + 0x28)));
          piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var_00,bVar4)));
          if (bVar4 != 0) {
            (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x28));
            puVar6 = (undefined4 *)F_004296a0(0x18,0,0x385);
            *puVar6 = *(undefined4 *)((int)param_2 + 4);
            puVar6[1] = *(undefined4 *)((int)param_2 + 4);
            puVar6[2] = *(undefined4 *)((int)param_2 + 4);
            *(undefined2 *)(puVar6 + 5) = 0;
            if (puVar6 + 3 != (undefined4 *)0x0) {
              puVar6[3] = (*(int * PTR32 *)(gen_frame + 0x1c));
              puVar6[4] = piVar2;
            }
            piVar7 = (int *)F_00618a20(param_2,((undefined1 *)(gen_frame + 0x14)),puVar6,0);
            *(byte *)(piVar2 + 8) = *(byte *)(piVar2 + 8) | 2;
          }
        }
LAB_005f5e24: ;
        if (*(char *)((int)piVar8 + 0x11) == '\0') {
          piVar7 = (int *)piVar8[2];
          if (*(char *)((int)piVar7 + 0x11) == '\0') {
            cVar1 = *(char *)(*piVar7 + 0x11);
            piVar8 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x11);
              piVar8 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x11);
            piVar3 = (int *)piVar8[1];
            piVar2 = piVar8;
            while ((piVar7 = piVar3, piVar8 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x11);
              piVar3 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x24)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005f5e80 */
uint F_005f5e80(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5ad8));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined2 *)((int)this + 0x24) = 0x100;
  *(undefined1 *)((int)this + 0x26) = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  uVar1 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x30) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 4))) = *(int *)((int)this + 0x30);
  *((int *)GEN_TOP((*(int *)((int)this + 0x30) + 8))) = *(int *)((int)this + 0x30);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x30) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  uVar1 = F_004296a0(0x28,0,900);
  *(uint *)((int)this + 0x40) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 4))) = *(int *)((int)this + 0x40);
  *((int *)GEN_TOP((*(int *)((int)this + 0x40) + 8))) = *(int *)((int)this + 0x40);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x20))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x21))) = 1;
  *(undefined4 *)((int)this + 0x180) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0x17c) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 4))) = *(int *)((int)this + 0x17c);
  *((int *)GEN_TOP((*(int *)((int)this + 0x17c) + 8))) = *(int *)((int)this + 0x17c);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x17c) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x17c) + 0x11))) = 1;
  puVar3 = (undefined4 *)((int)this + 0x4c);
  for (iVar2 = 0x4b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0xbf800000;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_005f5f70 */
unsigned int F_005f5f70(void)
{
  GEN_ENTER(0x5f5f70u, 0u, 0u, 0u, 0u);
  undefined * this;
  
  this = (undefined *)F_00406b90(0x188,0,0);
  if (this == (undefined *)0x0) {
    REFG(int * PTR32, 0x1379cb0) = (int *)0x0;
  }
  else {
    REFG(int * PTR32, 0x1379cb0) = (int *)F_005f5e80(this);
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x1379cb0) + 4))))(REFG(int * PTR32, 0x1379cb0));
  return 0;
}

/* ref: FUN_005f5fa0 */
unsigned int F_005f5fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f5fa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  if ((*(char *)(REFG(int, 0x137104c) + 8) == '\0') && (REFG(int, 0x1379cb0) != 0)) {
    F_005f48a0(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10),param_1);
    puVar2 = *(undefined4 * PTR32 *)(REFG(int, 0x1379cb0) + 0x30);
    puVar3 = (undefined4 *)*puVar2;
    while (puVar3 != puVar2) {
      F_005f48a0((undefined *)puVar3[6],param_1);
      if (*(char *)((int)puVar3 + 0x21) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x21) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x21);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x21);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x21);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x21);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005f6030 */
uint F_005f6030(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6030u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int iVar2;
  int * piVar3;
  uint uVar4;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c54));
  F_00616e70((undefined *)((int)this + 0x19c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x1a0),
               *(undefined4 * PTR32 *)((int)this + 0x1a0));
  F_00429760(*(undefined4 *)((int)this + 0x1a0),0x14,900);
  iVar2 = *(int *)((int)this + 0x18c);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x194) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  F_00617790((undefined *)((int)this + 0x17c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x180),
               *(undefined4 * PTR32 *)((int)this + 0x180));
  F_00429760(*(undefined4 *)((int)this + 0x180),0x1c,900);
  F_006176f0((undefined *)((int)this + 0x16c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x170),
               *(undefined4 * PTR32 *)((int)this + 0x170));
  F_00429760(*(undefined4 *)((int)this + 0x170),0x18,900);
  piVar3 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x160) + 4)));
  cVar1 = *(char *)((int)piVar3 + 0x91);
  (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
  while ((*(int * PTR32 *)(gen_frame + 0x8)) = piVar3, cVar1 == '\0') {
    F_0060f280((undefined *)((int)this + 0x15c),piVar3[2]);
    piVar3 = (int *)*piVar3;
    F_00429760((*(int * PTR32 *)(gen_frame + 0x8)),0xa0,0x385);
    cVar1 = *(char *)((int)piVar3 + 0x91);
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar3;
  }
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 4))) = *(int *)((int)this + 0x160);
  *(undefined4 *)*(undefined4 *)((int)this + 0x160) = *(undefined4 *)((int)this + 0x160);
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 8))) = *(int *)((int)this + 0x160);
  *(undefined4 *)((int)this + 0x164) = 0;
  F_00617300((undefined *)((int)this + 0x15c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x160),
               *(undefined4 * PTR32 *)((int)this + 0x160));
  F_00429760(*(undefined4 *)((int)this + 0x160),0xa0,0x385);
  F_00509b60((undefined *)((int)this + 0x14c));
  F_00617650((undefined *)((int)this + 0x13c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x140),
               *(undefined4 * PTR32 *)((int)this + 0x140));
  F_00429760(*(undefined4 *)((int)this + 0x140),0x18,0x385);
  iVar2 = *(int *)((int)this + 300);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x134) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  iVar2 = *(int *)((int)this + 0x11c);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0x124) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  F_006175b0((undefined *)((int)this + 0x10c),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x110),
               *(undefined4 * PTR32 *)((int)this + 0x110));
  F_00429760(*(undefined4 *)((int)this + 0x110),0x18,900);
  F_00617510((undefined *)((int)this + 0xfc),&(*(int * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x100),
               *(undefined4 * PTR32 *)((int)this + 0x100));
  F_00429760(*(undefined4 *)((int)this + 0x100),0x18,900);
  iVar2 = *(int *)((int)this + 0xec);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0xf4) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  iVar2 = *(int *)((int)this + 0xdc);
  if (iVar2 != 0) {
    F_00429760(iVar2,(*(int *)((int)this + 0xe4) - iVar2 >> 2) * 4,900);
  }
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  uVar4 = F_00509440((undefined *)((int)this + 0xc4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  return uVar4;
}

/* ref: FUN_005f6340 */
uint F_005f6340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * pvVar1;
  byte bVar2;
  uint * puVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  byte * pbVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint * puVar9;
  ushort * puVar10;
  byte * pbVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x0;
  if (*(int *)((int)this + 0x18) == 0) {
    puVar3 = (uint *)0x0;
    if (*(int *)((int)this + 0x1c) != 0) {
      (*(int *)(gen_frame + 0x4)) = *(int *)((int)this + 0x1c);
      F_006154e0((undefined *)((int)this + 0x16c),&(*(uint * PTR32 *)(gen_frame + 0x8)),&(*(int *)(gen_frame + 0x4)));
      puVar3 = (*(uint * PTR32 *)(gen_frame + 0x8));
      if ((*(uint * PTR32 *)(gen_frame + 0x8)) == *(uint * PTR32 *)((int)this + 0x170)) {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)0x0;
      }
      else {
        (*(uint * PTR32 *)(gen_frame + 0x14)) = (uint *)(*(uint * PTR32 *)(gen_frame + 0x8))[4];
      }
    }
  }
  else {
    puVar3 = (uint *)F_005eca50(this,*(int *)((int)this + 0x18));
    (*(uint * PTR32 *)(gen_frame + 0x14)) = puVar3;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar7 = (*(int *)(gen_frame + 0x4));
      iVar4 = *(int *)(param_1 + 8) + param_1;
      puVar10 = ((ushort *)GEN_TOP((*(int *)(iVar4 + (*(int *)(gen_frame + 0x4)) * 4) + iVar4)));
      puVar3 = (uint *)F_005d93f0((*(uint * PTR32 *)(gen_frame + 0x14)),puVar10);
      if (((char)puVar3 != '\0') && ((*(uint * PTR32 *)(gen_frame + 0x8)) = (uint *)0x0, 0 < *(int *)(puVar10 + 6))) {
        do {
          puVar3 = ((uint *)GEN_TOP((*(int *)(puVar10 + 4) + (int)puVar10)));
          iVar7 = *(int *)(puVar3[(int)(*(uint * PTR32 *)(gen_frame + 0x8))] + (int)puVar3);
          pbVar11 = (byte *)(puVar3[(int)(*(uint * PTR32 *)(gen_frame + 0x8))] + (int)puVar3);
          if ((iVar7 == 1) || (iVar7 == 6)) {
            bVar2 = F_005ec610((*(undefined * PTR32 *)(gen_frame + 0xc)),(uint)*pbVar11,(uint)*puVar10,*(undefined4 *)(pbVar11 + 4)
                                 ,&(*(char *)(gen_frame + 0x1b)),&(*(undefined1 *)(gen_frame + 0x1a)));
            pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0xc));
            puVar3 = ((uint *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
            if ((*(char *)(gen_frame + 0x1b)) != '\0') {
              pbVar5 = (byte *)0x0;
              if ((iVar7 == 1) || (iVar7 == 6)) {
                pbVar5 = pbVar11 + *(int *)(pbVar11 + 0x30);
              }
              uVar6 = F_00513dc0(pbVar5,(int)(*(undefined * PTR32 *)(gen_frame + 0xc)) + 0x94,0,0);
              (*(uint *)(gen_frame + 0x10)) = uVar6;
              puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
              if (&(*(uint *)(gen_frame + 0x10)) < puVar3) {
                puVar9 = *(uint * PTR32 *)((int)pvVar1 + 0xec);
                if (&(*(uint *)(gen_frame + 0x10)) < puVar9) goto LAB_005f64c2;
                if (puVar3 == *(uint * PTR32 *)((int)pvVar1 + 0xf4)) {
                  iVar7 = (int)puVar3 - (int)((int)(uintptr_t)puVar9) >> 2;
                  if (iVar7 == -1) goto LAB_005f654c;
                  uVar8 = iVar7 + 1;
                  uVar6 = (int)*(uint * PTR32 *)((int)pvVar1 + 0xf4) - (int)((int)(uintptr_t)puVar9) >> 2;
                  if (uVar6 < uVar8) {
                    if (-(uVar6 >> 1) - 1 < uVar6) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = uVar6 + (uVar6 >> 1);
                    }
                    if (uVar6 < uVar8) {
                      uVar6 = uVar8;
                    }
                    F_0061ab40((undefined *)((int)pvVar1 + 0xec),uVar6);
                  }
                }
                puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
                if (puVar3 != (uint *)0x0) {
                  *puVar3 = *((uint *)GEN_TOP((*(int *)((int)pvVar1 + 0xec) +
                                     ((int)&(*(uint *)(gen_frame + 0x10)) - (int)((int)(uintptr_t)puVar9) >> 2) * 4)));
                }
              }
              else {
LAB_005f64c2: ;
                if (puVar3 == *(uint * PTR32 *)((int)pvVar1 + 0xf4)) {
                  iVar7 = (int)puVar3 - *(int *)((int)pvVar1 + 0xec) >> 2;
                  if (iVar7 == -1) {
LAB_005f654c: ;
                    
                    F_00c4579a("vector<T> too long");
                  }
                  uVar8 = iVar7 + 1;
                  uVar6 = (int)*(uint * PTR32 *)((int)pvVar1 + 0xf4) - *(int *)((int)pvVar1 + 0xec) >> 2;
                  if (uVar6 < uVar8) {
                    if (-(uVar6 >> 1) - 1 < uVar6) {
                      uVar6 = 0;
                    }
                    else {
                      uVar6 = uVar6 + (uVar6 >> 1);
                    }
                    if (uVar6 < uVar8) {
                      uVar6 = uVar8;
                    }
                    F_0061ab40((undefined *)((int)pvVar1 + 0xec),uVar6);
                  }
                }
                puVar3 = *(uint * PTR32 *)((int)pvVar1 + 0xf0);
                if (puVar3 != (uint *)0x0) {
                  *puVar3 = (*(uint *)(gen_frame + 0x10));
                }
              }
              *(int *)((int)pvVar1 + 0xf0) = *(int *)((int)pvVar1 + 0xf0) + 4;
            }
          }
          puVar9 = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x8)) + 1);
          (*(uint * PTR32 *)(gen_frame + 0x8)) = puVar9;
          iVar7 = (*(int *)(gen_frame + 0x4));
        } while ((int)puVar9 < *(int *)(puVar10 + 6));
      }
      (*(int *)(gen_frame + 0x4)) = iVar7 + 1;
    } while (iVar7 + 1 < *(int *)(param_1 + 0xc));
  }
  return (uint)puVar3;
}

/* ref: FUN_005f6560 */
byte F_005f6560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f6560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  
  uVar1 = F_005ef690(this,6,param_1,0,1);
  if (uVar1 == 0) {
    return 0;
  }
  if ((*(char *)(uVar1 + 0xc2) != '\0') && (*(char *)(uVar1 + 0xc3) != '\0')) {
    F_005f3940(uVar1,param_2,1,0);
    return 1;
  }
  F_005f3940(uVar1,param_2,param_3,0);
  return 1;
}

/* ref: FUN_005f65c0 */
uint F_005f65c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f65c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  byte bVar6;
  int * piVar7;
  undefined3 extraout_var = 0;
  int * piVar8;
  uint uVar9;
  int iVar10;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  F_00619550(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x13c))),&(*(int * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  uVar4 = (*(uint *)&gen_args[3]);
  uVar3 = (*(uint *)&gen_args[2]);
  piVar7 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(int * PTR32 *)(gen_frame + 0x8)) != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x140)))) {
    piVar7 = *(int * PTR32 *)((*(int * PTR32 *)(gen_frame + 0x8))[4] + 4);
    piVar8 = (int *)*piVar7;
    (*(int * PTR32 *)(gen_frame + 0x8)) = piVar7;
    if (piVar8 != piVar7) {
      do {
        piVar7 = ((int *)GEN_TOP(CONCAT31((int3)((uint)((int)(uintptr_t)piVar7) >> 8),(char)(*(undefined4 *)&gen_args[1]))));
        if ((char)(*(undefined4 *)&gen_args[1]) == '\x06') {
          iVar10 = piVar8[6];
          uVar9 = uVar4;
          if ((*(char *)(iVar10 + 0xc2) != '\0') && (*(char *)(iVar10 + 0xc3) != '\0')) {
            uVar9 = 1;
          }
          bVar6 = F_005f3940(iVar10,uVar3,uVar9,0);
          piVar7 = ((int *)GEN_TOP(CONCAT31(extraout_var,bVar6)));
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '\x10') {
          piVar7 = (int *)piVar8[6];
          *(byte *)((int)piVar7 + 0x2b) =
               *(byte *)((int)piVar7 + 0x2b) ^
               ((char)uVar3 << 3 ^ *(byte *)((int)piVar7 + 0x2b)) & 8;
          iVar10 = piVar7[0xe];
          if (iVar10 != -1) {
            (*(uint *)&gen_args[2]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[2]), 1, 3),*(undefined1 *)((int)piVar7 + 0x11));
            uVar9 = (*(uint *)&gen_args[2]);
LAB_005f6646: ;
            piVar7 = (int *)F_00a1b870(uVar9,iVar10);
            if ((piVar7 != (int *)0x0) && (piVar7[0x3c] != 0)) {
              piVar7 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xbc))(piVar7,uVar3,uVar4)));
            }
          }
        }
        else if ((char)(*(undefined4 *)&gen_args[1]) == '-') {
          piVar7 = (int *)piVar8[6];
          iVar10 = piVar7[0xe];
          *(byte *)((int)piVar7 + 0x2b) =
               *(byte *)((int)piVar7 + 0x2b) ^
               ((char)uVar3 << 3 ^ *(byte *)((int)piVar7 + 0x2b)) & 8;
          if (iVar10 != -1) {
            (*(uint *)&gen_args[3]) = CONCAT31(GEN_PIECE(&(*(uint *)&gen_args[3]), 1, 3),*(undefined1 *)((int)piVar7 + 0x11));
            uVar9 = (*(uint *)&gen_args[3]);
            goto LAB_005f6646;
          }
        }
        if (*(char *)((int)piVar8 + 0x21) == '\0') {
          piVar2 = (int *)piVar8[2];
          if (*(char *)((int)piVar2 + 0x21) == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x21);
            piVar7 = (int *)*piVar2;
            while (piVar8 = piVar2, cVar1 == '\0') {
              cVar1 = *(char *)(*piVar7 + 0x21);
              piVar2 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar1 = *(char *)(piVar8[1] + 0x21);
            piVar5 = (int *)piVar8[1];
            piVar2 = piVar8;
            while ((piVar7 = piVar5, piVar8 = piVar7, cVar1 == '\0' && (piVar2 == (int *)piVar7[2]))
                  ) {
              cVar1 = *(char *)(piVar7[1] + 0x21);
              piVar5 = (int *)piVar7[1];
              piVar2 = piVar7;
            }
          }
        }
      } while (piVar8 != (*(int * PTR32 *)(gen_frame + 0x8)));
    }
  }
  return (uint)piVar7;
}

/* ref: FUN_005f6710 */
uint F_005f6710(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6710u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  undefined * this;
  
  if (REFG(int, 0x1379cb0) == 0) {
    this = (undefined *)0x0;
  }
  else {
    this = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x20);
  }
  F_005f4b50(this);
  if (REFG(int, 0x1379cb0) != 0) {
    uVar1 = F_005f4aa0(*(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x20),param_1);
    return uVar1;
  }
  uVar1 = F_005f4aa0((undefined *)0x0,param_1);
  return uVar1;
}

/* ref: FUN_005f6750 */
uint F_005f6750(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6750u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = REFG(undefined4, 0x1379cb0);
    *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 1;
    return uVar1;
  }
  if (*(int *)(REFG(undefined4, 0x1379cb0) + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(REFG(undefined4, 0x1379cb0) + 0x14) + 0x90))) = 0;
  }
  if (REFG(undefined4, 0x1379cb0) != 0) {
    uVar1 = F_005f4b50(*(undefined * PTR32 *)(REFG(undefined4, 0x1379cb0) + 0x20));
    *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 0;
    return uVar1;
  }
  uVar1 = F_005f4b50((undefined *)0x0);
  *(undefined1 *)(REFG(undefined4, 0x1379cb0) + 0x24) = 0;
  return uVar1;
}

/* ref: FUN_005f6850 */
uint F_005f6850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0xc) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 4))) = *(int *)((int)this + 0xc);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(int *)((int)this + 0xc);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x15))) = 1;
  *(undefined1 *)((int)this + 0x18) = 0;
  return (uint)this;
}

/* ref: FUN_005f68b0 */
uint F_005f68b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f68b0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061ce70(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf2 */
uint F_005f68d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f68d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) {
    this_00 = (undefined *)(iVar1 + 0x19c);
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
    F_006105d0(this_00,&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    F_00616e70(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x0)),(*(undefined4 *)(gen_frame + 0x4)));
  }
  if (*(int *)(this + 0xa0) != 0) {
    F_00406b30(*(int *)(this + 0xa0));
    *(undefined4 *)(this + 0xa0) = 0;
  }
  this[0xc0] = (undefined1)0x0;
  F_005f5110(this);
  if (*(int *)(this + 0x34) != 0) {
    F_0050c620(*(int *)(this + 0x34),0,0);
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar1 + 0x14c),this + 0x38);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar2;
}

/* ref: FUN_005f69a0 */
uint F_005f69a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f69a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061cd90(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_005f69c0 */
uint F_005f69c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f69c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_005f5370(this);
  uVar1 = F_005ed860(this,param_1);
  return uVar1;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf8 */
byte F_005f69e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f69e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 1) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 1;
LAB_005f6a70: ;
      F_005f5370(this);
      return 1;
    }
  }
  else if (param_1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 2;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 3;
        *(undefined4 *)(this + 0x10) = 0;
        return 1;
      }
      F_005eb230(this);
      return 1;
    }
  }
  else if (param_1 == 3) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 3;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 1;
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x30);
        return 1;
      }
      goto LAB_005f6a70;
    }
  }
  return 0;
}

/* ref: FUN_005f6a90 */
unsigned int F_005f6a90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f6a90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  uint uVar3;
  
  if ((float10)*(float *)((int)param_1 + 0x10) < (float10)*(float *)((int)param_1 + 0x30)) {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      F_005f5210(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    fVar1 = ((float)GEN_TOF(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                   (float10)*(float *)((int)param_1 + 0x10))));
    *(float *)((int)param_1 + 0x10) = fVar1;
    if ((float10)*(float *)((int)param_1 + 0x30) < (float10)fVar1) {
      *(float *)((int)param_1 + 0x10) = *(float *)((int)param_1 + 0x30);
    }
    F_005dc670(param_1,0);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x1c) != 1) {
    F_005eb230(param_1);
  }
  piVar2 = *(int * PTR32 *)((int)param_1 + 0x54);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x54) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x54));
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x54),0);
      }
    }
  }
  return 0;
}

/* ref: FUN_005f6b40 */
unsigned int F_005f6b40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f6b40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  uint uVar3;
  
  if ((!GEN_ISNAN(*(float *)((int)param_1 + 0x10)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)param_1 + 0x10) <= *(float *)&REFG(undefined, 0x1088114))) {
    if (*(int *)((int)param_1 + 0x1c) != 2) {
      F_005f52e0(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 2;
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) -
                   (float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)((int)param_1 + 0x10) = fVar1;
    if ((float10)fVar1 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x10) = 0;
    }
    F_005dc670(param_1,1);
    return 0;
  }
  if (*(int *)((int)param_1 + 0x1c) != 3) {
    F_005f5370(param_1);
  }
  piVar2 = *(int * PTR32 *)((int)param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x58) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x58));
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x58),0);
      }
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf8 */
byte F_005f6be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f6be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 4) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 4;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 3;
        *(undefined4 *)(this + 0x10) = 0;
        F_005eb390(this);
        return 1;
      }
      *(undefined4 *)(this + 0x1c) = 1;
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x28);
      F_005f5550(this);
      F_005dcf40(this);
      return 1;
    }
  }
  else if (param_1 == 5) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
    if ((char)uVar1 != '\0') {
      *(undefined4 *)(this + 0xc) = 5;
      if ((char)param_2 != '\0') {
        *(undefined4 *)(this + 0x1c) = 1;
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 0x28);
        F_005f5550(this);
        return 1;
      }
      *(undefined4 *)(this + 0x1c) = 3;
      *(undefined4 *)(this + 0x10) = 0;
      F_005eb390(this);
      F_005dcf40(this);
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_005f6cb0 */
uint F_005f6cb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f6cb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  local_8 = REFG(float, 0x1087f04);
  if ((float10)*(float *)((int)param_1 + 0x10) < (float10)*(float *)((int)param_1 + 0x28)) {
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      F_005f5400(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 0;
    fVar3 = ((float)GEN_TOF(((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070) +
                   (float10)*(float *)((int)param_1 + 0x10))));
    *(float *)((int)param_1 + 0x10) = fVar3;
    fVar2 = (float10)*(float *)((int)param_1 + 0x28);
    if (fVar2 < (float10)fVar3) {
      *(float *)((int)param_1 + 0x10) = *(float *)((int)param_1 + 0x28);
    }
    local_8 = ((float)GEN_TOF((((float10)1 / fVar2) * (float10)*(float *)((int)param_1 + 0x10))));
  }
  else {
    if (*(int *)((int)param_1 + 0x1c) != 1) {
      F_005f5550(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 1;
  }
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x1088070)) *
                                   ((float10)*(float *)&REFG(undefined, 0x131f3dc) /
                                   (float10)*(float *)((int)param_1 + 0x24))) * (float10)local_8))) *
                 (float10)*(float *)((int)param_1 + 0x14))));
  if (*(char *)((int)param_1 + 0x34) == '\0') {
    fVar3 = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
  }
  *(float *)((int)param_1 + 0x30) = fVar3;
  uVar1 = F_005dcd90(param_1);
  return uVar1;
}

/* ref: FUN_005f6d80 */
uint F_005f6d80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f6d80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  float10 fVar2;
  uint uVar3;
  float fVar4;
  
  if ((!GEN_ISNAN(*(float *)((int)param_1 + 0x10)) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(*(float *)((int)param_1 + 0x10) <= *(float *)&REFG(undefined, 0x1088114))) {
    if (*(int *)((int)param_1 + 0x1c) != 2) {
      F_005f5690(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x1c) = 2;
    fVar2 = (float10)*(double *)&REFG(undefined, 0x1088070);
    fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x10) - (float10)param_2 * fVar2)));
    *(float *)((int)param_1 + 0x10) = fVar4;
    if ((float10)fVar4 < (float10)0) {
      *(undefined4 *)((int)param_1 + 0x10) = 0;
    }
    fVar4 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x131f3dc) /
                                      (float10)*(float *)((int)param_1 + 0x24)) *
                                     ((float10)param_2 * fVar2)) *
                                    (float10)((float)GEN_TOF((((float10)1 /
                                                     (float10)*(float *)((int)param_1 + 0x28)) *
                                                    (float10)*(float *)((int)param_1 + 0x10))))))) *
                   (float10)*(float *)((int)param_1 + 0x14))));
    if (*(char *)((int)param_1 + 0x34) == '\0') {
      fVar4 = gen_bits2f((uint)gen_fl2bits(fVar4) ^ REFG(uint, 0x10920d0));
    }
    *(float *)((int)param_1 + 0x30) = fVar4;
    uVar3 = F_005dcd90(param_1);
    return uVar3;
  }
  if (*(int *)((int)param_1 + 0x1c) != 3) {
    F_005eb390(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x4c);
  *(undefined4 *)((int)param_1 + 0x1c) = 3;
  *(undefined4 *)((int)param_1 + 0x30) = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1);
    if ((char)uVar3 != '\0') {
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)param_1 + 0x4c) + 0xc0))))(*(int * PTR32 *)((int)param_1 + 0x4c));
      if ((char)uVar3 == '\0') {
        F_005e98e0(*(undefined * PTR32 *)((int)param_1 + 0x4c),0);
      }
    }
  }
  uVar3 = F_005dcd90(param_1);
  return uVar3;
}

/* ref: FUN_005f6e80 */
uint F_005f6e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(ushort *)((int)this + 0x18) = *(ushort *)((int)this + 0x18) & 0xc000;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5b04));
  *(byte *)((int)this + 0x16) = *(byte *)((int)this + 0x16) & 0xfd | 1;
  *(undefined4 *)((int)this + 0x24) = 0;
  uVar1 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x20) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 4))) = *(int *)((int)this + 0x20);
  *((int *)GEN_TOP((*(int *)((int)this + 0x20) + 8))) = *(int *)((int)this + 0x20);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_005f6f00 */
uint F_005f6f00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f6f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_005df720(this);
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[68])REFP(0x10a5b24));
  *(undefined4 *)((int)this + 0x70) = 1;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  return (uint)this;
}

/* ref: Client::LayoutEngine::Layer::PopRangeLayoutInstance::vf4 */
uint F_005f6f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f6f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  int iVar2;
  int iVar3;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar1 != 0) {
    F_00a1fa60(this + 0x10,uVar1,param_1);
  }
  *(undefined4 *)(this + 0x70) = *(undefined4 *)(param_1 + 0x30);
  if (*(int *)(this + 0x7c) != *(int *)(this + 0x80)) {
    *(int *)(this + 0x80) = *(int *)(this + 0x7c);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = 0;
  *(int *)(this + 0x74) = iVar2;
  if (0 < iVar2) {
    (*(int *)(gen_frame + 0x3c)) = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x34) + (*(int *)(gen_frame + 0x3c));
      (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(iVar2 + 0x34 + param_1);
      (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(iVar2 + 0x38 + param_1);
      (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(iVar2 + 0x3c + param_1);
      F_0061cf20(this + 0x7c,&(*(undefined4 *)(gen_frame + 0x30)));
      (*(int *)(gen_frame + 0x3c)) = (*(int *)(gen_frame + 0x3c)) + 0xc;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(this + 0x74));
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
  *(float *)(this + 0x78) =
       ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0x20) * (float10)*(float *)(param_1 + 0x3c))));
  return uVar1;
}

/* ref: FUN_005f7060 */
unsigned int F_005f7060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f7060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int * piVar13;
  int iVar14;
  undefined4 * this_00;
  undefined4 * puVar15;
  
  iVar14 = *(int *)((int)this + 8);
  if (iVar14 == 0) {
    iVar14 = *(int *)(REFG(int, 0x1379cb0) + 0x10);
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (undefined4 *)0xffff;
    piVar13 = (int *)F_00619470((undefined *)(iVar14 + 0x10c),((undefined1 *)(gen_frame + 0x8)),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
    if (*piVar13 == *(int *)(iVar14 + 0x110)) {
      iVar14 = 0;
    }
    else {
      iVar14 = *(int *)(*piVar13 + 0x10);
    }
  }
  (*(undefined2 *)(gen_frame + 0x2)) = *(undefined2 *)(iVar14 + 8);
  (*(ushort *)(gen_frame + 0x0)) = ((ushort)*(byte *)((int)this + 0x11) << 6 | (ushort)param_2 & 0x3f) * 4 | 2;
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this + 0x14);
  this_00 = (undefined4 *)F_00406b90(0x80,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    F_005db190(this_00);
    *this_00 = (*(undefined * PTR32 (*)[68])REFP(0x10a550c));
    this_00[0x1c] = 0;
  }
  F_005f4070(this_00,this,&(*(ushort *)(gen_frame + 0x0)),param_1);
  puVar15 = (undefined4 *)F_00406b90(0x50,0,0);
  if (puVar15 == (undefined4 *)0x0) {
    puVar15 = (undefined4 *)0x0;
  }
  else {
    puVar15[4] = this_00;
    *puVar15 = (*(undefined * PTR32 (*)[1])REFP(0x10a2bac));
    puVar15[8] = GEN_FLT_TO(puVar15[8], REFG(float, 0x1302df0));
    puVar15[9] = GEN_FLT_TO(puVar15[9], REFG(float, 0x1302df4));
    puVar15[10] = GEN_FLT_TO(puVar15[10], REFG(float, 0x1302df8));
    puVar15[0xc] = REFG(undefined4, 0x1302e00);
    puVar15[0xd] = REFG(undefined4, 0x1302e04);
    puVar15[0xe] = REFG(undefined4, 0x1302e08);
    puVar15[0xf] = REFG(undefined4, 0x1302e0c);
    puVar15[0x10] = GEN_FLT_TO(puVar15[0x10], REFG(float, 0x1302e10));
    puVar15[0x11] = GEN_FLT_TO(puVar15[0x11], REFG(float, 0x1302e14));
    puVar15[0x12] = GEN_FLT_TO(puVar15[0x12], REFG(float, 0x1302e18));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar15;
  F_0061ce70((undefined *)((int)this + 0xa0),&(*(undefined4 * PTR32 *)(gen_frame + 0xc)));
  uVar12 = REFG(float, 0x1302e18);
  uVar11 = REFG(float, 0x1302e14);
  uVar10 = REFG(float, 0x1302e10);
  uVar9 = REFG(undefined4, 0x1302e0c);
  uVar8 = REFG(undefined4, 0x1302e08);
  uVar7 = REFG(undefined4, 0x1302e04);
  fVar1 = *param_1;
  fVar2 = *(float *)((int)this + 0x40);
  fVar3 = param_1[1];
  fVar4 = *(float *)((int)this + 0x44);
  fVar5 = param_1[2];
  fVar6 = *(float *)((int)this + 0x48);
  puVar15[0xc] = REFG(undefined4, 0x1302e00);
  puVar15[0xd] = uVar7;
  puVar15[0xe] = uVar8;
  puVar15[8] = (undefined4)gen_fl2bits((float)((float10)fVar1 - (float10)fVar2));
  puVar15[0xf] = uVar9;
  puVar15[9] = (undefined4)gen_fl2bits((float)((float10)fVar3 - (float10)fVar4));
  puVar15[10] = (undefined4)gen_fl2bits((float)((float10)fVar5 - (float10)fVar6));
  puVar15[0x10] = uVar10;
  puVar15[0x11] = uVar11;
  puVar15[0x12] = uVar12;
  return 0;
}

/* ref: FUN_005f7260 */
uint F_005f7260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c38));
  *(undefined4 *)((int)this + 0x10) = 1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x24) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x28) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x38) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x34) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 4))) = *(int *)((int)this + 0x34);
  *((int *)GEN_TOP((*(int *)((int)this + 0x34) + 8))) = *(int *)((int)this + 0x34);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x15))) = 1;
  return (uint)this;
}

/* ref: FUN_005f72f0 */
byte F_005f72f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f72f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  byte bVar2;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  bVar2 = F_005d9c60((*(undefined * PTR32 *)&gen_args[1]));
  if (bVar2 == 0) {
    (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(CONCAT13(*(undefined1 *)((int)pvVar1 + 0x11),GEN_PIECE(&(*(undefined * PTR32 *)&gen_args[1]), 0, 3))));
    F_00614c10(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))),&(*(undefined * PTR32 *)(gen_frame + 0x8)),(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3);
    if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34)))) {
      bVar2 = F_005f5c90(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10),pvVar1,(*(undefined4 *)&gen_args[2]));
      return bVar2;
    }
  }
  return 0;
}

/* ref: FUN_005f7350 */
unsigned int F_005f7350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5f7350u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  short * param_6 = (short *)(uintptr_t)gen_a5;
  byte * param_7 = (byte *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ushort uVar13;
  
  fVar1 = param_3[2];
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)) = param_1;
  *param_6 = (short)(int)*param_3 >> ((byte)param_6[3] & 0x1f);
  param_6[1] = (short)(int)fVar1 >> ((byte)param_6[3] & 0x1f);
  if (!(param_4 <= 0.0)) {
    uVar6 = ((undefined2)0x27f) | 0xc00;
    ((byte *)(gen_frame + 0x8))[0xc] = (char)uVar6;
    ((byte *)(gen_frame + 0x8))[0xd] = (char)(uVar6 >> 8);
    ((byte *)(gen_frame + 0x8))[0xe] = (char)(uVar6 >> 0x10);
    ((byte *)(gen_frame + 0x8))[0xf] = (char)(uVar6 >> 0x18);
    lVar2 = (longlong)TRUNC((float10)param_4);
    ((byte *)(gen_frame + 0x8))[0] = (char)lVar2;
    ((byte *)(gen_frame + 0x8))[1] = (char)((ulonglong)lVar2 >> 8);
    ((byte *)(gen_frame + 0x8))[2] = (char)((ulonglong)lVar2 >> 0x10);
    ((byte *)(gen_frame + 0x8))[3] = (char)((ulonglong)lVar2 >> 0x18);
    ((byte *)(gen_frame + 0x8))[4] = (char)((ulonglong)lVar2 >> 0x20);
    ((byte *)(gen_frame + 0x8))[5] = (char)((ulonglong)lVar2 >> 0x28);
    ((byte *)(gen_frame + 0x8))[6] = (char)((ulonglong)lVar2 >> 0x30);
    ((byte *)(gen_frame + 0x8))[7] = (char)((ulonglong)lVar2 >> 0x38);
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (undefined4)lVar2;
    bVar4 = (byte)(((*(int *)(param_1 + 0x18) + (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) + param_5) * 2 - 2) / param_5);
    uVar6 = (uint)(bVar4 >> 1);
    iVar10 = -uVar6;
    *param_7 = bVar4 | 1;
    (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12)) = iVar10;
    iVar12 = iVar10;
    if (-uVar6 == uVar6 || SBORROW4(iVar10,uVar6) != (int)(uVar6 * -2) < 0) {
      do {
        if (iVar12 <= (int)uVar6) {
          uVar13 = (ushort)param_5;
          ((byte *)(gen_frame + 0x8))[4] = (char)uVar13;
          ((byte *)(gen_frame + 0x8))[5] = (char)(uVar13 >> 8);
          (*(undefined8 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = (ulonglong)uVar13 << 0x20;
          iVar11 = iVar12;
          do {
            uVar3 = (*(undefined8 *)((char *)((byte *)(gen_frame + 0x8)) + 0));
            sVar8 = param_6[1] + (short)iVar10;
            sVar5 = *param_6 + (short)iVar11;
            sVar9 = 0;
            ((byte *)(gen_frame + 0x8))[0] = 0;
            ((byte *)(gen_frame + 0x8))[1] = 0;
            ((byte *)(gen_frame + 0x8))[2] = 0;
            ((byte *)(gen_frame + 0x8))[3] = 0;
            ((byte *)(gen_frame + 0x8))[6] = 0;
            ((byte *)(gen_frame + 0x8))[7] = 0;
            (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = SUB84(uVar3,4) & 0xffff;
            uVar7 = param_5;
            if (1 < param_5) {
              do {
                uVar7 = uVar7 >> 1;
                sVar9 = sVar9 + 1;
              } while (1 < uVar7);
              (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 6)) = sVar9;
              (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 4)) = (undefined4)(CONCAT26(sVar9,(int6)uVar3) >> 0x20);
            }
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 2)) = sVar8;
            (*(undefined2 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = sVar5;
            F_005f5d20((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 8)),param_2,((byte *)(gen_frame + 0x8)),param_3,param_4);
            iVar11 = iVar11 + 1;
            iVar12 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 12));
          } while (iVar11 <= (int)uVar6);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 <= (int)uVar6);
    }
  }
  return 0;
}

/* ref: FUN_005f7470 */
byte F_005f7470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f7470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x14) == (undefined *)0x0) {
    return 0;
  }
  bVar1 = F_005f6560(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_005f7490 */
unsigned int F_005f7490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f7490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_005f65c0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: FUN_005f74b0 */
uint F_005f74b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f74b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0xffffffff;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a5c54));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x32) = 0;
  *(undefined4 *)((int)this + 0x36) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0x101;
  *(undefined2 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x56) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 1;
  *(undefined4 *)((int)this + 0x60) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 100) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x68) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x74) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x78) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x80) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x84) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x88) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa4) = 5;
  *(undefined1 *)((int)this + 0xa8) = 0xff;
  *(undefined4 *)((int)this + 0xac) = 5000;
  *(undefined4 *)((int)this + 0xb0) = 0x10100;
  *(undefined2 *)((int)this + 0xb4) = 0;
  *(undefined1 *)((int)this + 0xb6) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  F_005077a0((int)this + 0xc4);
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x100) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 4))) = *(int *)((int)this + 0x100);
  *((int *)GEN_TOP((*(int *)((int)this + 0x100) + 8))) = *(int *)((int)this + 0x100);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x100) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x114) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x110) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 4))) = *(int *)((int)this + 0x110);
  *((int *)GEN_TOP((*(int *)((int)this + 0x110) + 8))) = *(int *)((int)this + 0x110);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x110) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  uVar1 = F_004296a0(0x18,0,0x385);
  *(uint *)((int)this + 0x140) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 4))) = *(int *)((int)this + 0x140);
  *((int *)GEN_TOP((*(int *)((int)this + 0x140) + 8))) = *(int *)((int)this + 0x140);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x140) + 0x15))) = 1;
  F_0050b680((undefined *)((int)this + 0x14c));
  *(undefined4 *)((int)this + 0x164) = 0;
  uVar1 = F_004296a0(0xa0,0,0x385);
  *(uint *)((int)this + 0x160) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 4))) = *(int *)((int)this + 0x160);
  *((int *)GEN_TOP((*(int *)((int)this + 0x160) + 8))) = *(int *)((int)this + 0x160);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x160) + 0x90))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x160) + 0x91))) = 1;
  *(undefined4 *)((int)this + 0x174) = 0;
  uVar1 = F_004296a0(0x18,0,900);
  *(uint *)((int)this + 0x170) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 4))) = *(int *)((int)this + 0x170);
  *((int *)GEN_TOP((*(int *)((int)this + 0x170) + 8))) = *(int *)((int)this + 0x170);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x170) + 0x14))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x170) + 0x15))) = 1;
  *(undefined4 *)((int)this + 0x184) = 0;
  uVar1 = F_004296a0(0x1c,0,900);
  *(uint *)((int)this + 0x180) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 4))) = *(int *)((int)this + 0x180);
  *((int *)GEN_TOP((*(int *)((int)this + 0x180) + 8))) = *(int *)((int)this + 0x180);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x18))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x180) + 0x19))) = 1;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  uVar1 = F_004296a0(0x14,0,900);
  *(uint *)((int)this + 0x1a0) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a0) + 4))) = *(int *)((int)this + 0x1a0);
  *((int *)GEN_TOP((*(int *)((int)this + 0x1a0) + 8))) = *(int *)((int)this + 0x1a0);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x10))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x1a0) + 0x11))) = 1;
  *(undefined4 *)((int)this + 0x1ac) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  F_00c48350((undefined *)((int)this + 0x1b4),0,900);
  *(undefined4 *)((int)this + 0x538) = 0;
  *(undefined4 *)((int)this + 0x53c) = 0;
  *(undefined4 *)((int)this + 0x540) = 0;
  *(undefined4 *)((int)this + 0x544) = 0;
  this_00 = (undefined *)F_00406b90(0x40,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_005f7260(this_00,this);
  }
  *(int * PTR32 *)((int)this + 0x44) = piVar2;
  ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a5afc));
    puVar3[1] = this;
    puVar3[4] = 0;
    uVar1 = F_004296a0(0x18,0,900);
    puVar3[3] = uVar1;
    *(uint *)uVar1 = uVar1;
    *(undefined4 *)(puVar3[3] + 4) = puVar3[3];
    *(undefined4 *)(puVar3[3] + 8) = puVar3[3];
    *(undefined1 *)(puVar3[3] + 0x14) = 1;
    *(undefined1 *)(puVar3[3] + 0x15) = 1;
    *(undefined1 *)(puVar3 + 6) = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x4c) = puVar3;
  puVar3 = (undefined4 *)F_00406b90(0x14,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = this;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a2ba4));
    *(undefined4 * PTR32 *)((int)this + 0x48) = puVar3;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x48) = 0;
  return (uint)this;
}

/* ref: FUN_005f7940 */
uint F_005f7940(unsigned int gen_a0)
{
  GEN_ENTER(0x5f7940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if ((*(char *)((int)this + 0x56) != '\0') && (*(int *)((int)this + 0x58) != 0)) {
    uVar5 = 0;
    uVar3 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
    if (uVar3 != 0) {
      do {
        uVar4 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar5 * 4))));
        uVar4 = F_005d9950((uint)*(byte *)((int)this + 0x56),0,*(undefined4 *)((int)this + 0x58),
                             uVar4);
        if (uVar4 != 0) {
          uVar1 = *(undefined4 *)(uVar4 + 0x10);
          uVar2 = *(undefined4 *)(uVar4 + 0x14);
          *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(uVar4 + 0xc);
          *(undefined4 *)((int)this + 100) = uVar1;
          *(undefined4 *)((int)this + 0x68) = uVar2;
          if (*(char *)((int)this + 0x52) == '\0') {
            *(undefined4 *)((int)this + 0x5c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x10)));
          }
          this_00 = *(undefined * PTR32 *)((int)this + 0x44);
          *(undefined1 *)((int)this + 0x52) = 1;
          *(undefined4 *)((int)this_00 + 0x10) = 0;
          F_005ee3d0(this_00,1);
          F_005ebe80(this_00);
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar3);
    }
  }
  uVar4 = 0;
  uVar5 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      uVar3 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar4 * 4))));
      uVar3 = F_005f6340(this,uVar3);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  *(undefined4 *)((int)this + 0x10) = 4;
  return uVar3;
}

/* ref: FUN_005f7a50 */
uint F_005f7a50(unsigned int gen_a0)
{
  GEN_ENTER(0x5f7a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  
  ((int *)(gen_frame + 0x4))[1] = 0xffff;
  uVar1 = F_00619470((undefined *)((int)this + 0x10c),((int *)(gen_frame + 0x4)),((int *)(gen_frame + 0x4)) + 1);
  if (((int *)(gen_frame + 0x4))[0] == *(int *)((int)this + 0x110)) {
    this_00 = (undefined *)F_00406b90(0x2c,0,0);
    if (this_00 == (undefined *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)F_005f6e80(this_00,this);
    }
    puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
    *puVar3 = *(undefined4 *)((int)this + 0x110);
    puVar3[1] = *(undefined4 *)((int)this + 0x110);
    puVar3[2] = *(undefined4 *)((int)this + 0x110);
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      *(undefined2 *)(puVar3 + 3) = 0xffff;
      puVar3[4] = piVar2;
    }
    F_006180b0((undefined *)((int)this + 0x10c),((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  }
  return uVar1;
}

/* ref: FUN_005f7b00 */
byte F_005f7b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined * this_00;
  uint uVar4;
  undefined4 * puVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 0x11);
  (*(undefined1 *)(gen_frame + 0xb)) = uVar1;
  F_00619550((undefined *)((int)this + 0x13c),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
  if ((*(int *)(gen_frame + 0x4)) == *(int *)((int)this + 0x140)) {
    this_00 = (undefined *)F_00406b90(0x10,0,0);
    if (this_00 == (undefined *)0x0) {
      this_00 = (undefined *)0x0;
    }
    else {
      *(undefined4 *)((int)this_00 + 8) = 0;
      uVar4 = F_004296a0(0x28,0,0x385);
      *(uint *)((int)this_00 + 4) = uVar4;
      *(uint *)uVar4 = uVar4;
      *((int *)GEN_TOP((*(int *)((int)this_00 + 4) + 4))) = *(int *)((int)this_00 + 4);
      *((int *)GEN_TOP((*(int *)((int)this_00 + 4) + 8))) = *(int *)((int)this_00 + 4);
      *((undefined1 *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x20))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this_00 + 4) + 0x21))) = 1;
    }
    puVar5 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar5 = *(undefined4 *)((int)this + 0x140);
    puVar5[1] = *(undefined4 *)((int)this + 0x140);
    puVar5[2] = *(undefined4 *)((int)this + 0x140);
    *(undefined2 *)(puVar5 + 5) = 0;
    if (puVar5 + 3 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar5 + 3) = uVar1;
      puVar5[4] = this_00;
    }
    F_00618190((undefined *)((int)this + 0x13c),((undefined1 *)(gen_frame + 0x0)),puVar5,0);
  }
  else {
    this_00 = *(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  }
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar5 = (undefined4 *)F_004296a0(0x28,0,0x385);
  *puVar5 = *(undefined4 *)((int)this_00 + 4);
  puVar5[1] = *(undefined4 *)((int)this_00 + 4);
  puVar5[2] = *(undefined4 *)((int)this_00 + 4);
  *(undefined2 *)(puVar5 + 8) = 0;
  if (puVar5 + 4 != (undefined4 *)0x0) {
    puVar5[4] = uVar3;
    puVar5[5] = uVar2;
    puVar5[6] = param_1;
  }
  F_006186d0(this_00,((undefined1 *)(gen_frame + 0x0)),puVar5,0);
  return 1;
}

/* ref: FUN_005f7c40 */
uint F_005f7c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f7c40u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = F_0061d520(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18c))),&(*(undefined4 *)&gen_args[1]));
  return uVar1;
}

/* ref: FUN_005f7c60 */
uint F_005f7c60(unsigned int gen_a0)
{
  GEN_ENTER(0x5f7c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  ushort * puVar4;
  int local_8;
  
  iVar3 = 0;
  puVar4 = (ushort *)((int)this + 0x1ca);
  local_8 = 0x4a;
  do {
    uVar1 = (uint)*puVar4;
    if (*puVar4 == 0) goto LAB_005f7e2d;
    switch((unsigned int)(uintptr_t)(iVar3)) {
    case 0: ;
      uVar1 = F_0060c450(uVar1);
      *(uint *)(puVar4 + -5) = uVar1;
      piVar2 = (int *)F_00603eb0((uint)*puVar4);
      *(int * PTR32 *)((int)this + 0x540) = piVar2;
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(uint *)((int)this + 0x538) = uVar1;
    default: ;
      goto switchD_005f7c9c_caseD_1;
    case 2: ;
      uVar1 = F_00603f40(uVar1);
      *(uint *)(puVar4 + -5) = uVar1;
      piVar2 = (int *)F_00604040((uint)*puVar4);
      *(int * PTR32 *)((int)this + 0x544) = piVar2;
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(uint *)((int)this + 0x53c) = uVar1;
      goto switchD_005f7c9c_caseD_1;
    case 3: ;
      uVar1 = F_0060c630(uVar1);
      break;
    case 4: ;
      uVar1 = F_00604350(uVar1);
      break;
    case 5: ;
    case 0xe: ;
      uVar1 = F_0061c320(uVar1);
      break;
    case 6: ;
      uVar1 = F_0061afa0(uVar1);
      break;
    case 7: ;
      uVar1 = F_0060c530(uVar1);
      break;
    case 8: ;
      uVar1 = F_0060c5b0(uVar1);
      break;
    case 0xb: ;
      uVar1 = F_0060c7d0(uVar1);
      break;
    case 0xc: ;
      uVar1 = F_00604190(uVar1);
      break;
    case 0xd: ;
      uVar1 = F_0060c8d0(uVar1);
      break;
    case 0xf: ;
      uVar1 = F_0060c850(uVar1);
      break;
    case 0x26: ;
      uVar1 = F_006040b0(uVar1);
      break;
    case 0x27: ;
      uVar1 = F_0061d660(uVar1);
      break;
    case 0x28: ;
      uVar1 = F_0060c9d0(uVar1);
      break;
    case 0x2a: ;
      uVar1 = F_0060cb00(uVar1);
      break;
    case 0x2b: ;
      uVar1 = F_0060cbc0(uVar1);
      break;
    case 0x2c: ;
      uVar1 = F_0060c950(uVar1);
      break;
    case 0x2e: ;
      uVar1 = F_00604270(uVar1);
      break;
    case 0x30: ;
      uVar1 = F_0060cc40(uVar1);
      break;
    case 0x32: ;
      uVar1 = F_006043d0(uVar1);
      break;
    case 0x38: ;
      uVar1 = F_0060cd50(uVar1);
      break;
    case 0x39: ;
      uVar1 = F_0060ce00(uVar1);
      break;
    case 0x3a: ;
      uVar1 = F_0060ccc0(uVar1);
      break;
    case 0x40: ;
      uVar1 = F_0060d030(uVar1);
      break;
    case 0x41: ;
      uVar1 = F_0060d0b0(uVar1);
      break;
    case 0x42: ;
      uVar1 = F_0060ce80(uVar1);
      break;
    case 0x43: ;
      uVar1 = F_00604450(uVar1);
      break;
    case 0x44: ;
      uVar1 = F_006044d0(uVar1);
      break;
    case 0x45: ;
      uVar1 = F_0060cf30(uVar1);
      break;
    case 0x46: ;
      uVar1 = F_0060ca80(uVar1);
      break;
    case 0x47: ;
      uVar1 = F_0060cfb0(uVar1);
    }
    *(uint *)(puVar4 + -5) = uVar1;
switchD_005f7c9c_caseD_1: ;
    piVar2 = *(int * PTR32 *)(puVar4 + -5);
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      *(uint *)(puVar4 + -3) = uVar1;
    }
LAB_005f7e2d: ;
    puVar4 = puVar4 + 6;
    iVar3 = iVar3 + 1;
    local_8 = local_8 + -1;
    if (local_8 == 0) {
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_005f7f10 */
uint F_005f7f10(unsigned int gen_a0)
{
  GEN_ENTER(0x5f7f10u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined * this;
  
  if (param_1[3] != 0) {
    piVar2 = (int *)F_00a1b570(param_1[3]);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  iVar1 = *param_1;
  if ((((iVar1 == 0) || (*(short *)(iVar1 + 0x12) == 0)) && (param_1[6] == 0)) &&
     ((char)param_1[2] != '\0')) {
    piVar2 = (int *)F_005d5c60(*(undefined * PTR32 *)(iVar1 + 4),0x28);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  this = (undefined *)F_00406b90(0x90,0,0);
  if (this != (undefined *)0x0) {
    piVar2 = (int *)F_005f6f00(this);
    ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,param_1,0);
    return (uint)piVar2;
  }
  ((code *)*(gen_code32 *)(*(int *)&REFG(undefined, 0x0) + 4))(0,param_1,0);
  return 0;
}

/* ref: FUN_005f7fc0 */
byte F_005f7fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f7fc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  F_004ff470(&(*(undefined4 *)(gen_frame + 0x8)),(*(uint * PTR32 *)&gen_args[2]),0,0);
  F_00615e50(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),&(*(int *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  if ((*(int *)(gen_frame + 0x4)) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)))) {
    puVar1 = (uint *)F_00406b90(0x18,0,0);
    if (puVar1 == (uint *)0x0) {
      (*(uint * PTR32 *)&gen_args[2]) = (uint *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      uVar2 = F_00513dc0((*(uint * PTR32 *)&gen_args[2]),0,0,0);
      *puVar1 = uVar2;
      (*(uint * PTR32 *)&gen_args[2]) = puVar1;
    }
    puVar3 = (undefined4 *)F_004296a0(0x18,0,900);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(undefined4 *)(gen_frame + 0x8));
      puVar3[4] = (*(uint * PTR32 *)&gen_args[2]);
    }
    F_006185f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),((undefined1 *)(gen_frame + 0x0)),puVar3,0);
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 1;
  }
  else {
    (*(uint * PTR32 *)&gen_args[2]) = *(uint * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10);
  }
  F_0061d590((*(uint * PTR32 *)&gen_args[2]) + 1,&(*(int *)&gen_args[1]));
  *(byte *)((*(int *)&gen_args[1]) + 0x2b) = *(byte *)((*(int *)&gen_args[1]) + 0x2b) | 1;
  return 1;
}

/* ref: FUN_005f80b0 */
byte F_005f80b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5f80b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  undefined4 * PTR32 * ppuVar2;
  byte bVar3;
  char * pcVar4;
  undefined * this_00;
  uint in_ecx;
  undefined4 * PTR32 * PTR32 * pppuVar5;
  
  ppuVar2 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 *)((uint)ppuVar2 & 0xffffff00);
  pcVar4 = param_1;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,(int)pcVar4 - (int)(param_1 + 1));
  F_004e5a40(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc)),"/bgplate/terrain.tera",0x15);
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x1b0,0x10)));
  if (this_00 == (undefined *)0x0) {
    in_ecx = 0;
  }
  else {
    in_ecx = F_006946f0(this_00);
  }
  *(uint *)((int)this + 0x10) = in_ecx;
  bVar3 = F_00694790(in_ecx);
  if (bVar3 != 0) {
    F_0068bd00(REFG(void * PTR32, 0x1371294),*(undefined4 *)((int)this + 0x10));
    F_0068bd00(REFG(void * PTR32, 0x1371294),*(undefined4 *)((int)this + 0x10));
    F_00690620(*(undefined * PTR32 *)((int)this + 0x10));
    F_004ff300(((undefined1 *)(gen_frame + 0x8)),2);
    pppuVar5 = (undefined4 * PTR32 * PTR32 *)((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
    if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
      pppuVar5 = ((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc));
    }
    F_00694870(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x8)),pppuVar5,
                 (*((char *)GEN_TOP((*(int *)((int)this + 4) + 0x53))) != '\0') + 5,param_2);
    if (0xf < (*(uint *)(gen_frame + 0x20))) {
      F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    }
    F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
    return 1;
  }
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00429760(((undefined4 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_005f81f0 */
uint F_005f81f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f81f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  int iVar2;
  char * pcVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar4;
  uint uVar5;
  ulonglong uVar6;
  
  pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  iVar2 = REFG(int, 0x137104c);
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(uint *)(gen_frame + 0x20)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] + 0)) = 0;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar4 & 0xffffff00);
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  F_004e5c20(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1,(int)pcVar3 - (int)(param_1 + 1));
  F_004e5a40(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc)),"/collision/list.pcb",0x13);
  pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0];
  if ((*(uint *)(gen_frame + 0x20)) < 0x10) {
    pppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc));
  }
  uVar5 = F_00551b20(*(undefined * PTR32 *)(iVar2 + 0x25e0),pppppppuVar4,1);
  *(uint *)((int)this + 0x14) = uVar5;
  uVar5 = (*(uint *)(gen_frame + 0x20));
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    uVar6 = F_00429760(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0xc))[0],(*(uint *)(gen_frame + 0x20)) + 1,0x32);
    uVar5 = (uint)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar5;
}

/* ref: FUN_005f82b0 */
unsigned int F_005f82b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f82b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  undefined * pvVar3;
  uint uVar4;
  bool bVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0xa4) != 0) {
    if (*(int *)((int)this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
    }
    if (((*(char *)(iVar2 + 0x55) == '\0') && (*param_1 != 0)) && (*param_1 != 2)) {
      bVar5 = false;
      if (*(int *)((int)this + 0x9c) == 0) {
        pvVar3 = (undefined *)F_00406b90(0xd0,0,0);
        if (pvVar3 == (undefined *)0x0) {
          pvVar3 = (undefined *)0x0;
        }
        else {
          pvVar3 = (undefined *)F_005dd040(pvVar3,this);
        }
        *(undefined * PTR32 *)((int)this + 0x9c) = pvVar3;
        if ((*(int *)((int)this + 8) != 0) &&
           (iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar2 != 0)) {
          (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar3;
          F_0061d520((undefined *)(iVar2 + 0x18c),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
        }
        uVar4 = ((code *)*(gen_code32 *)(*(int *)this + 0xfc))(this);
        F_00607a80(pvVar3,uVar4);
        bVar5 = (char)param_1[1] != '\0';
      }
      piVar1 = *(int * PTR32 *)((int)this + 0x9c);
      if (((piVar1 != (int *)0x0) &&
          (uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1), (char)uVar4 != '\0')) &&
         (F_005eb510(*(undefined4 *)((int)this + 0x9c),(uint)param_1), bVar5)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x9c) + 0x20))))(*(int * PTR32 *)((int)this + 0x9c),8,0);
      }
    }
  }
  return 0;
}

/* ref: FUN_005f83b0 */
uint F_005f83b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f83b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pvVar1;
  uint * puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  int * piVar6;
  int iVar7;
  uint uVar8;
  
  *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) & 0xfb;
  piVar6 = param_1;
  if ((param_1[1] != 0) && ((*(byte *)((int)this + 0x20) & 1) == 0)) {
    uVar5 = F_00b61cc0(this);
    *(uint *)((int)this + 0x3c) = uVar5;
    piVar6 = (int *)0x0;
    if (uVar5 != 0) {
      uVar5 = *(int *)((int)this + 0x7c) - *(int *)((int)this + 0x78) >> 2;
      uVar8 = 0;
      if (uVar5 != 0) {
        do {
          F_00b7cce0(*(undefined * PTR32 *)((int)this + 0x3c),
                       *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x78) + uVar8 * 4))) + 0x10))));
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar5);
      }
      iVar7 = *(int *)((int)this + 8);
      if (iVar7 == 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)0x0;
      }
      else {
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = *(undefined * PTR32 *)(iVar7 + 4);
      }
      (*(int *)(gen_frame + 0x18)) = iVar7;
      if (iVar7 == 0) {
        pvVar1 = *(undefined * PTR32 *)(REFG(int, 0x1379cb0) + 0x10);
        (*(undefined * PTR32 *)(gen_frame + 0x24)) = pvVar1;
        (*(int *)(gen_frame + 0x18)) = 0xffff;
        piVar6 = (int *)F_00619470((undefined *)((int)pvVar1 + 0x10c),((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x18)));
        if (*piVar6 == *(int *)((int)pvVar1 + 0x110)) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(*piVar6 + 0x10);
        }
        (*(int *)(gen_frame + 0x18)) = iVar7;
      }
      iVar7 = param_1[1];
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this + 0x14);
      (*(int *)(gen_frame + 0x8)) = iVar7;
      F_0061ba50((undefined *)((int)this + 0x8c),iVar7);
      piVar6 = (int *)0x0;
      (*(int * PTR32 *)(gen_frame + 0x20)) = (int *)0x0;
      if (0 < iVar7) {
        (*(int *)(gen_frame + 0x1c)) = 0;
        do {
          piVar6 = (int *)(*param_1 + (*(int *)(gen_frame + 0x1c)) + (int)param_1);
          if (*((char *)GEN_TOP(((int)piVar6 + *(int *)(*param_1 + (*(int *)(gen_frame + 0x1c)) + 0x10 + (int)param_1)))) == '\0')
          {
            *(byte *)((int)this + 0xac) = *(byte *)((int)this + 0xac) | 4;
          }
          cVar3 = (*(byte *)((int)this + 0x28) >> 4) + 1;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x14)) + 0)) = cVar3;
          (*(undefined4 *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x14)), 1, 3),cVar3);
          uVar5 = F_005f0030((*(int *)(gen_frame + 0x18)),this,(*(undefined4 *)(gen_frame + 0x10)),
                               *piVar6 << (('\x04' - cVar3) * '\b' & 0x1fU) |
                               *(uint *)((int)this + 0x18),(*(undefined4 *)(gen_frame + 0x14)),(*(int * PTR32 *)(gen_frame + 0x20)),piVar6,
                               *(undefined4 *)((int)this + 0x3c));
          *(byte *)(uVar5 + 0x20) =
               *(byte *)(uVar5 + 0x20) ^ (*(byte *)(uVar5 + 0x20) ^ *(byte *)((int)this + 0x20)) & 1
          ;
          puVar2 = *(uint * PTR32 *)((int)this + 0x90);
          (*(uint *)(gen_frame + 0x28)) = uVar5;
          if ((&(*(uint *)(gen_frame + 0x28)) < puVar2) && (*(uint * PTR32 *)((int)this + 0x8c) <= &(*(uint *)(gen_frame + 0x28)))) {
            (*(int *)(gen_frame + 0xc)) = (int)&(*(uint *)(gen_frame + 0x28)) - (int)*(uint * PTR32 *)((int)this + 0x8c) >> 2;
            if (puVar2 == *(uint * PTR32 *)((int)this + 0x94)) {
              F_0061bef0((undefined *)((int)this + 0x8c),1);
            }
            if (*(undefined4 * PTR32 *)((int)this + 0x90) != (undefined4 *)0x0) {
              **(undefined4 * PTR32 *)((int)this + 0x90) =
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x8c) + (*(int *)(gen_frame + 0xc)) * 4)));
            }
          }
          else {
            if (puVar2 == *(uint * PTR32 *)((int)this + 0x94)) {
              F_0061bef0((undefined *)((int)this + 0x8c),1);
            }
            if (*(uint * PTR32 *)((int)this + 0x90) != (uint *)0x0) {
              **(uint * PTR32 *)((int)this + 0x90) = uVar5;
            }
          }
          *(int *)((int)this + 0x90) = *(int *)((int)this + 0x90) + 4;
          bVar4 = F_005d6770(this);
          if (bVar4 != 0) {
            F_005f7b00((*(undefined * PTR32 *)(gen_frame + 0x24)),uVar5);
          }
          (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x1c)) + 0x2c;
          piVar6 = (int *)((int)(*(int * PTR32 *)(gen_frame + 0x20)) + 1);
          (*(int * PTR32 *)(gen_frame + 0x20)) = piVar6;
        } while ((int)piVar6 < (*(int *)(gen_frame + 0x8)));
      }
    }
  }
  return (uint)piVar6;
}

/* ref: FUN_005f85c0 */
uint F_005f85c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f85c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  byte bVar1;
  uint uVar2;
  undefined * this_00;
  int * piVar3;
  int * piVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  int iVar8;
  
  pcVar5 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x28))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  pcVar6 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x24))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  pcVar7 = ((char *)GEN_TOP((*((int *)GEN_TOP(((int)(*(char * PTR32 *)&gen_args[1]) + 0x1c))) + (int)(*(char * PTR32 *)&gen_args[1]))));
  uVar2 = (uint)*pcVar6;
  iVar8 = (int)*pcVar5 + uVar2 + (int)*pcVar7;
  if ((iVar8 != 0) &&
     (((piVar3 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))), (*(char * PTR32 *)&gen_args[1]) = pcVar6, piVar3 == (int *)0x0 ||
       (uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3), (char)uVar2 == '\0')) && (iVar8 == 1)))) {
    if (*pcVar7 != '\0') {
      this_00 = (undefined *)F_00406b90(0xb4,0,0);
      if (this_00 == (undefined *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = (int *)F_005dc450(this_00,(*(undefined * PTR32 *)&gen_args[0]));
      }
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,pcVar7);
      iVar8 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) << 0x14) >> 0x18;
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if (iVar8 != 0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,iVar8,0);
      }
    }
    if (*(*(char * PTR32 *)&gen_args[1]) != '\0') {
      piVar4 = (int *)F_00406b90(0x80,0,0);
      iVar8 = REFG(float, 0x1087f04);
      piVar3 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[1] = (int)(*(undefined * PTR32 *)&gen_args[0]);
        piVar4[4] = 0;
        piVar4[5] = iVar8;
        piVar4[6] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[10])REFP(0x10a2be0));
        piVar3 = piVar4;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,(*(char * PTR32 *)&gen_args[1]));
      iVar8 = (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xa8))) << 0xc) >> 0x18;
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if (iVar8 != 0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,iVar8,0);
      }
    }
    if (*pcVar5 != '\0') {
      piVar4 = (int *)F_00406b90(0x78,0,0);
      iVar8 = REFG(float, 0x1087f04);
      piVar3 = (int *)0x0;
      if (piVar4 != (int *)0x0) {
        piVar4[2] = 0;
        piVar4[3] = 0;
        piVar4[1] = (int)(*(undefined * PTR32 *)&gen_args[0]);
        piVar4[4] = 0;
        piVar4[5] = iVar8;
        piVar4[6] = 0;
        *piVar4 = (int)(*(undefined * PTR32 (*)[10])REFP(0x10a2c0c));
        piVar3 = piVar4;
      }
      F_005e3c50(piVar3,pcVar5);
      bVar1 = *((byte *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac)));
      *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c))) = piVar3;
      if ((bVar1 & 1) != 0) {
        ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3,(byte)~bVar1 & 1 | 6,(uint)(bVar1 >> 1 & 1));
      }
    }
    uVar2 = 0;
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 4)));
      uVar2 = 0;
      if (iVar8 != 0) {
        (*(char * PTR32 *)&gen_args[1]) = *((char * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x9c)));
        uVar2 = F_0061d520((undefined *)(iVar8 + 0x18c),&(*(char * PTR32 *)&gen_args[1]));
      }
    }
  }
  return uVar2;
}

/* ref: FUN_005f87a0 */
unsigned int F_005f87a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f87a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  
  if (*(int *)((int)param_1 + 0x1c) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = F_005f0a50(param_1);
  }
  if (*(int *)((int)param_1 + 0x24) - 3U < 2) {
    if ((*(int *)((int)param_1 + 0x1c) != 0) || (bVar1 != 0)) {
      if (*(int *)((int)param_1 + 0x1c) != 2) goto LAB_005f87d8;
      if (bVar1 == 0) goto LAB_005f87ef;
    }
    *(undefined1 *)((int)param_1 + 0x2c) = 1;
  }
LAB_005f87d8: ;
  if (bVar1 != 0) {
    F_005f6a90(param_1,param_2);
    return 0;
  }
LAB_005f87ef: ;
  F_005f6b40(param_1,param_2);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf9 */
uint F_005f8810(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f8810u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*(int *)(param_1 + 0xc) == 4) {
    uVar1 = F_005f6cb0(param_1,param_2);
  }
  else {
    uVar1 = *(int *)(param_1 + 0xc) - 5;
    if (uVar1 == 0) {
      uVar1 = F_005f6d80(param_1,param_2);
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_005f8840 */
byte F_005f8840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f8840u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  iVar1 = (*(int *)&gen_args[1]);
  (*(int *)&gen_args[1]) = *(undefined4 *)((*(int *)&gen_args[1]) + 0x14);
  F_00619760(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),&(*(uint *)(gen_frame + 0x8)),&(*(int *)&gen_args[1]));
  uVar4 = (*(uint *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x8)) == *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    puVar3 = (undefined4 *)F_004296a0(0x18,0,0x385);
    *puVar3 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[1] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    puVar3[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)));
    *(undefined2 *)(puVar3 + 5) = 0;
    if (puVar3 + 3 != (undefined4 *)0x0) {
      puVar3[3] = (*(int *)&gen_args[1]);
      puVar3[4] = iVar1;
    }
    F_006187f0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),((undefined1 *)(gen_frame + 0x4)),puVar3,0);
    bVar2 = F_005f7b00(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),iVar1);
    uVar4 = (uint)bVar2;
  }
  return (byte)uVar4;
}

/* ref: Client::LayoutEngine::Layer::CharacterLayoutInstance::vf2 */
uint F_005f88d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f88d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30),&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10),this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::GameObjectLayoutInstance::vf2 */
uint F_005f8970(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30),&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10),this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: FUN_005f8a00 */
unsigned int F_005f8a00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(int *)((int)this + 0x38) != 0) || (*(int *)((int)this + 0x3c) != 0)) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xfffffffd | 1;
    if ((*(int *)((int)this + 8) != 0) &&
       ((iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4))), iVar3 != 0 &&
        (iVar3 = *(int *)(iVar3 + 0x44), iVar3 != 0)))) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
      (*(uint *)(gen_frame + 0x14)) = uVar2;
      bVar1 = F_005d9c60(this);
      if (bVar1 == 0) {
        (*(undefined1 *)(gen_frame + 0x1f)) = *(undefined1 *)((int)this + 0x11);
        F_00614c10((undefined *)(iVar3 + 0x30),&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
        if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar3 + 0x34)) {
          F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10),this,(*(uint *)(gen_frame + 0x14)));
        }
      }
    }
    if (*(int *)((int)this + 0x38) != 0) {
      if (*(int *)((int)this + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
      }
      F_00507740((undefined *)(iVar3 + 0x14c),(int)this + 0x38);
      *(undefined4 *)((int)this + 0x38) = 0;
    }
    if (*(uint *)((int)this + 0x3c) != 0) {
      if (*(int *)((int)this + 8) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 4)));
      }
      (*(uint *)(gen_frame + 0x14)) = *(uint *)((int)this + 0x3c);
      F_00619280((undefined *)(iVar3 + 0x15c),&(*(int *)(gen_frame + 0x18)),&(*(uint *)(gen_frame + 0x14)));
      if (((*(int *)(gen_frame + 0x18)) != *(int *)(iVar3 + 0x160)) &&
         (*(int *)((*(int *)(gen_frame + 0x18)) + 0x20) = *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) + -1, *(int *)((*(int *)(gen_frame + 0x18)) + 0x20) < 1)
         ) {
        F_00614760((undefined *)(iVar3 + 0x15c),&(*(uint *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x18)));
      }
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf2 */
uint F_005f8b30(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  if ((((((byte)this[0x8c] & 4) != 0) && (*(int *)(this + 8) != 0)) &&
      (iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar2 != 0)) &&
     (this_00 = *(undefined * PTR32 *)(iVar2 + 0x44), this_00 != (undefined *)0x0)) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
    F_005f72f0(this_00,this,uVar1);
    this[0x8c] = (undefined1)((byte)this[0x8c] & 0xfb);
  }
  if (*(int *)(this + 0x70) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar2 + 0x14c),this + 0x70);
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf2 */
uint F_005f8bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8bc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    bVar2 = F_005d9c60(this);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0xb)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
      if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10),this,uVar3);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf2 */
uint F_005f8c30(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  if (((*(int *)(this + 8) != 0) && (iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar1 != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xe4))(this);
    bVar2 = F_005d9c60(this);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0xb)) = this[0x11];
      F_00614c10((undefined *)(iVar1 + 0x30),&(*(int *)(gen_frame + 0x4)),&(*(undefined1 *)(gen_frame + 0xb)));
      if ((*(int *)(gen_frame + 0x4)) != *(int *)(iVar1 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x4)) + 0x10),this,uVar3);
      }
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: Client::LayoutEngine::Layer::SoundLayoutInstance::vf2 */
uint F_005f8ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int * piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  
  if (*(int *)(this + 0xa0) != *(int *)(this + 0xa4)) {
    F_005f07a0(this + 0x98);
  }
  if (((*(int *)(this + 8) != 0) && (iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4))), iVar4 != 0)) &&
     (iVar4 = *(int *)(iVar4 + 0x44), iVar4 != 0)) {
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x14)) = uVar3;
    bVar2 = F_005d9c60(this);
    if (bVar2 == 0) {
      (*(undefined1 *)(gen_frame + 0x1f)) = this[0x11];
      F_00614c10((undefined *)(iVar4 + 0x30),&(*(int *)(gen_frame + 0x18)),&(*(undefined1 *)(gen_frame + 0x1f)));
      if ((*(int *)(gen_frame + 0x18)) != *(int *)(iVar4 + 0x34)) {
        F_005f5c90(*(undefined * PTR32 *)((*(int *)(gen_frame + 0x18)) + 0x10),this,(*(uint *)(gen_frame + 0x14)));
      }
    }
  }
  if (*(int *)(this + 0x38) != 0) {
    if (*(int *)(this + 8) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    F_00507740((undefined *)(iVar4 + 0x14c),this + 0x38);
  }
  piVar1 = *(int * PTR32 *)(this + 0x34);
  if (piVar1 == (int *)0x0) {
    if (((byte)this[0x94] & 0x10) == 0) goto LAB_005f8d89;
    this[0x94] = (undefined1)((byte)this[0x94] & 0xef);
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1,500);
    *(undefined4 *)(this + 0x34) = 0;
  }
  F_005e1000(this);
LAB_005f8d89: ;
  if (*(int *)(this + 0x3c) != 0) {
    F_0050c620(*(int *)(this + 0x3c),0,0);
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(int *)(this + 0x88) != 0) {
    F_00406b30(*(int *)(this + 0x88));
    *(undefined4 *)(this + 0x88) = 0;
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))(this);
  return uVar3;
}

/* ref: FUN_005f8de0 */
uint F_005f8de0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  (*(undefined4 *)(gen_frame + 0x0)) = REFG(float, 0x1302df0);
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(undefined4, 0x1302e00);
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1302df4);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(undefined4, 0x1302e0c);
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1302df8);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x1302e10);
  uVar2 = (int)*(char *)((int)this + 0x90) - 3;
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1302e14);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(undefined4, 0x1302e04);
  (*(undefined4 *)(gen_frame + 0x18)) = REFG(undefined4, 0x1302e08);
  (*(undefined4 *)(gen_frame + 0x28)) = REFG(float, 0x1302e18);
  switch((unsigned int)(uintptr_t)(uVar2)) {
  case 2: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0),2);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 2);
    return uVar2;
  case 3: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x144)));
    (*(uint *)(gen_frame + 0x38)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x34)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0),uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x38)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x34)));
      return uVar2;
    }
    break;
  case 4: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0),4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 5: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0),4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 6: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0),4);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 4);
    return uVar2;
  case 8: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x131)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0),uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
    break;
  case 9: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x229)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0),uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x28);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
    break;
  case 10: ;
    iVar1 = *(int *)((int)this + 0x88);
    F_0061bcf0((undefined *)((int)this + 0xa0),2);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x28);
    do {
      (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
      (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
      F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
      uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
      puVar4 = puVar4 + 4;
      (*(uint *)(gen_frame + 0x3c)) = uVar2;
    } while ((int)uVar2 < 2);
    break;
  case 0xb: ;
    uVar3 = (uint)*((byte *)GEN_TOP((*(int *)((int)this + 0x88) + 0x4e)));
    (*(uint *)(gen_frame + 0x34)) = *(int *)((int)this + 0x88);
    (*(uint *)(gen_frame + 0x38)) = uVar3;
    uVar2 = F_0061bcf0((undefined *)((int)this + 0xa0),uVar3);
    (*(uint *)(gen_frame + 0x3c)) = 0;
    if (uVar3 != 0) {
      puVar4 = (undefined4 *)((*(uint *)(gen_frame + 0x34)) + 0x68);
      do {
        (*(undefined4 *)(gen_frame + 0x0)) = puVar4[-2];
        (*(undefined4 *)(gen_frame + 0x4)) = puVar4[-1];
        (*(undefined4 *)(gen_frame + 0x8)) = *puVar4;
        F_005f7060(this,&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x3c)));
        uVar2 = (*(uint *)(gen_frame + 0x3c)) + 1;
        puVar4 = puVar4 + 4;
        (*(uint *)(gen_frame + 0x3c)) = uVar2;
      } while ((int)uVar2 < (int)(*(uint *)(gen_frame + 0x38)));
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: FUN_005f9280 */
unsigned int F_005f9280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x5f9280u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  
  pvVar1 = (*(undefined * PTR32 *)&gen_args[1]);
  F_00614b20((*(undefined * PTR32 *)&gen_args[1]));
  uVar2 = (uint)*(ushort *)((*(int *)&gen_args[0]) + 100);
  sVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(ushort *)(gen_frame + 0x8)) = *(ushort *)((*(int *)&gen_args[0]) + 100);
  (*(short *)(gen_frame + 0xa)) = 0;
  uVar3 = uVar2;
  if (1 < uVar2) {
    do {
      uVar3 = uVar3 >> 1;
      sVar4 = sVar4 + 1;
    } while (1 < uVar3);
    (*(short *)(gen_frame + 0xa)) = sVar4;
  }
  (*(undefined * PTR32 *)&gen_args[1]) = ((undefined *)GEN_TOP(((uint)(*(undefined * PTR32 *)&gen_args[1]) & 0xffffff)));
  F_005f7350((*(int *)&gen_args[0]),pvVar1,(*(undefined4 *)&gen_args[2]),(*(float *)&gen_args[3]),uVar2,&(*(undefined4 *)(gen_frame + 0x4)),(int)&(*(undefined * PTR32 *)&gen_args[1]) + 3);
  return 0;
}

/* ref: FUN_005f92f0 */
float F_005f92f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f92f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  undefined * this_00;
  undefined4 uVar2;
  float10 fVar3;
  
  pvVar1 = (undefined *)((int)this + 0x78);
  this_00 = (undefined *)((int)this + 0x68);
  if (this_00 != pvVar1) {
    uVar2 = *(undefined4 *)((int)this + 0x6c);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)((int)this + 0x7c);
    *(undefined4 *)((int)this + 0x7c) = uVar2;
    uVar2 = *(undefined4 *)((int)this + 0x70);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)((int)this + 0x80);
    *(undefined4 *)((int)this + 0x80) = uVar2;
  }
  F_00614b20(this_00);
  F_005ec120(pvVar1,0);
  F_005f7350(this,this_00,(int)this + 0x40,*(float *)((int)this + 0x24),
               (uint)*(ushort *)((int)this + 100),(int)this + 0x60,(int)this + 0x11);
  F_005ec2e0(pvVar1);
  F_005ec240(this_00);
  if (*(int *)((int)this + 0x14) != 0) {
    F_005f2200(this,pvVar1);
    F_005ec240(this_00);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  F_005ec1b0(this,pvVar1);
  fVar3 = (float10)F_005ec1b0(this,this_00);
  return (float)fVar3;
}

/* ref: Client::LayoutEngine::LayoutWorld::vf1 */
uint F_005f9390(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  this_00 = (undefined *)F_00406b90(0x550,0,0);
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_005f74b0(this_00,this);
  }
  *(int * PTR32 *)(this + 0x10) = piVar2;
  ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
  puVar3 = (undefined4 *)F_00406b90(0x1c,0,0);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10a5af4));
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[5] = 0;
    uVar4 = F_004296a0(0x18,0,900);
    puVar3[4] = uVar4;
    *(uint *)uVar4 = uVar4;
    *(undefined4 *)(puVar3[4] + 4) = puVar3[4];
    iVar1 = puVar3[4];
    *(int *)(iVar1 + 8) = iVar1;
    *(undefined1 *)(puVar3[4] + 0x14) = 1;
    *(undefined1 *)(puVar3[4] + 0x15) = 1;
    *(undefined4 * PTR32 *)(this + 0x20) = puVar3;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  *(undefined4 *)(this + 0x20) = 0;
  return 0;
}

/* ref: FUN_005f9420 */
uint F_005f9420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5f9420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * pvVar1;
  undefined * PTR32 * ppvVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x0)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = (undefined *)((int)param_1 >> 0x1f);
  pvVar1 = (undefined *)F_0060aeb0((undefined *)((int)this + 0x2c),&(*(uint *)(gen_frame + 0x0)));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
  if (pvVar1 != *(undefined * PTR32 *)((int)this + 0x30)) {
    if ((*(undefined * PTR32 *)((int)pvVar1 + 0x14) <= (*(undefined * PTR32 *)(gen_frame + 0x4))) &&
       (((*(undefined * PTR32 *)(gen_frame + 0x4)) != *(undefined * PTR32 *)((int)pvVar1 + 0x14) || (*(uint *)((int)pvVar1 + 0x10) <= param_1))))
    {
      ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
      goto LAB_005f946b;
    }
  }
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = *(undefined * PTR32 *)((int)this + 0x30);
  ppvVar2 = &(*(undefined * PTR32 *)(gen_frame + 0x4));
LAB_005f946b: ;
  if (*ppvVar2 == *(undefined * PTR32 *)((int)this + 0x30)) {
    pvVar1 = (undefined *)F_00406b90(0x550,0,0);
    if (pvVar1 == (undefined *)0x0) {
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    }
    else {
      pvVar1 = (undefined *)F_005f74b0(pvVar1,this);
      (*(undefined * PTR32 *)(gen_frame + 0x8)) = pvVar1;
    }
    F_005d5b90((*(undefined * PTR32 *)(gen_frame + 0x8)),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    puVar3 = (undefined4 *)F_004296a0(0x28,0,900);
    *puVar3 = *(undefined4 *)((int)this + 0x30);
    puVar3[1] = *(undefined4 *)((int)this + 0x30);
    puVar3[2] = *(undefined4 *)((int)this + 0x30);
    *(undefined2 *)(puVar3 + 8) = 0;
    if (puVar3 + 4 != (undefined4 *)0x0) {
      puVar3[4] = param_4;
      puVar3[5] = param_1;
      puVar3[6] = (*(undefined * PTR32 *)(gen_frame + 0x8));
    }
    F_00617c00((undefined *)((int)this + 0x2c),&(*(uint *)(gen_frame + 0x0)),puVar3,0);
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  return *(uint *)((int)*ppvVar2 + 0x18);
}

/* ref: FUN_005f9530 */
uint F_005f9530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5f9530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"bg/%s.lvb",param_2);
  F_004ff470(&(*(uint *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),0,0);
  F_00625940();
  uVar3 = (*(uint *)(gen_frame + 0x0));
  if ((*(int *)((int)this + 0x14) == 0) ||
     ((*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 1, (*(uint *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x0)), 1, 3),1),
     *((uint *)GEN_TOP((*(int *)((int)this + 0x14) + 8))) != uVar3)) {
    uVar2 = (*(uint *)(gen_frame + 0x0));
    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x0)) + 0)) = 0;
    (*(uint *)(gen_frame + 0x0)) = uVar2 & 0xffffff00;
  }
  *(uint *)(REFG(int, 0x13712a4) + 0x30) = *(uint *)(REFG(int, 0x13712a4) + 0x30) & 0xfffffffe;
  F_005f4530(this,(*(uint *)(gen_frame + 0x0)));
  F_00510e20(1);
  F_00510e20(2);
  iVar1 = *(int *)((int)this + 0x1c);
  if (iVar1 != 0) {
    if ((*(uint *)(iVar1 + 8) == uVar3) && (*(int *)(iVar1 + 0x18) == param_3)) {
      F_005ee840(this,*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 8))),
                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 0x18))));
      iVar1 = *(int *)((int)this + 0x1c);
      *(int *)((int)this + 0x14) = iVar1;
      *(undefined4 *)((int)this + 0x1c) = 0;
      uVar3 = *(uint *)(iVar1 + 8);
      this_00 = *(undefined * PTR32 *)(iVar1 + 0x44);
      *(undefined1 *)(iVar1 + 0x53) = 0;
      if (*(int *)((int)this_00 + 0x10) == 0) {
        *(undefined4 *)((int)this_00 + 0x10) = 1;
        F_005ee3d0(this_00,1);
        F_005ebe80(this_00);
      }
      *(undefined4 *)(iVar1 + 0xa4) = 5;
      goto LAB_005f967f;
    }
    F_005ee840(this,*(uint *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0x18));
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  F_005ec400(this,0);
  uVar2 = F_005f9420(this,uVar3,((undefined1 *)(gen_frame + 0x4)),param_2,param_3,param_4,param_1,param_5);
  *(uint *)((int)this + 0x14) = uVar2;
  F_005d9190(param_2);
LAB_005f967f: ;
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar3;
}

/* ref: FUN_005f96a0 */
uint F_005f96a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5f96a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int param_5 = (int)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  uint uVar2;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  (*(uint *)(gen_frame + 0x108)) = uVar2;
  if (*(int *)((int)this + 0x14) == 0) {
    F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x10c));
    return 0xffffffff;
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x14) + 0x18))) != param_5) {
    iVar1 = *(int *)((int)this + 0x1c);
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x18) == param_5) goto LAB_005f96ed;
      F_005ee840(this,*(undefined4 *)(iVar1 + 8),*(int *)(iVar1 + 0x18));
      *(undefined4 *)((int)this + 0x1c) = 0;
    }
    F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x104,"bg/%s.lvb",param_2);
    F_004ff470(&(*(uint *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),0,0);
    uVar2 = F_005f9420(this,(*(uint *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x4)),param_2,param_5,0,param_1,param_6);
    *(uint *)((int)this + 0x1c) = uVar2;
    *(undefined1 *)(uVar2 + 0x53) = 1;
    *(undefined4 *)(uVar2 + 0xa4) = 6;
    iVar1 = *(int *)((int)this + 0x1c);
    *(undefined4 *)(iVar1 + 0x58) = param_4;
    *(undefined1 *)(iVar1 + 0x56) = (undefined1)param_3;
    F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
    return (*(uint *)(gen_frame + 0x0));
  }
LAB_005f96ed: ;
  F_00c47745(uVar2 ^ (uint)(uint)(gen_frame + 0x10c));
  return 0xffffffff;
}

/* ref: FUN_005f97a0 */
uint F_005f97a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x130];
  uint uVar1;
  uint uVar2;
  uint * puVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x128)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x12c);
  F_00c472af(((undefined1 *)(gen_frame + 0x24)),0x104,"bg/%s.lvb",param_1);
  F_004ff470(&(*(uint *)(gen_frame + 0x20)),((undefined1 *)(gen_frame + 0x24)),0,0);
  uVar1 = (*(uint *)(gen_frame + 0x20));
  (*(uint *)(gen_frame + 0x1c)) = (int)(*(uint *)(gen_frame + 0x20)) >> 0x1f;
  (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x20));
  uVar2 = F_0060aeb0((undefined *)((int)this + 0x3c),&(*(uint *)(gen_frame + 0x18)));
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  if (uVar2 != *(uint *)((int)this + 0x40)) {
    if ((*(uint *)(uVar2 + 0x14) <= (*(uint *)(gen_frame + 0x1c))) &&
       (((*(uint *)(gen_frame + 0x1c)) != *(uint *)(uVar2 + 0x14) || (*(uint *)(uVar2 + 0x10) <= uVar1)))) {
      puVar3 = &(*(uint *)(gen_frame + 0x14));
      goto LAB_005f9846;
    }
  }
  (*(uint *)(gen_frame + 0x1c)) = *(uint *)((int)this + 0x40);
  puVar3 = &(*(uint *)(gen_frame + 0x1c));
LAB_005f9846: ;
  if (*puVar3 == *(uint *)((int)this + 0x40)) {
    this_00 = (undefined *)F_00406b90(0x550,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = F_005f74b0(this_00,this);
    }
    *(uint *)(uVar2 + 8) = (*(uint *)(gen_frame + 0x20));
    *(undefined4 *)(uVar2 + 0x14) = 5;
    *(undefined4 *)(uVar2 + 0x18) = 0;
    *(undefined4 *)(uVar2 + 0x1c) = 0;
    uVar4 = F_00513dc0(((undefined1 *)(gen_frame + 0x24)),uVar2 + 0x94,0,0);
    *(uint *)(uVar2 + 0xd8) = uVar4;
    F_0050b6c0((undefined *)(uVar2 + 0xc4),((undefined1 *)(gen_frame + 0x24)));
    *(undefined4 *)(uVar2 + 0x10) = 1;
    *(undefined1 *)(uVar2 + 0x53) = 1;
    *(undefined4 *)(uVar2 + 0xa4) = 6;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(uint *)(gen_frame + 0x8)) = uVar1;
    (*(uint *)(gen_frame + 0xc)) = uVar2;
    F_0061ad00((undefined *)((int)this + 0x3c),&(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x128)) ^ (uint)(uint)(gen_frame + 0x12c));
  return (*(uint *)(gen_frame + 0x20));
}

/* ref: Client::LayoutEngine::LayoutManager::vf1 */
uint F_005f9920(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)(this + 8) = 0xffff;
  *(undefined4 *)(this + 0x14) = 1;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = F_005f7a50(this);
  *(undefined4 *)(this + 0x10) = 7;
  return uVar1;
}

/* ref: FUN_005f9950 */
uint F_005f9950(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined * this_00;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x140);
  puVar3 = (undefined4 *)*puVar2;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  while (puVar3 != puVar2) {
    this_00 = (undefined *)puVar3[4];
    if (this_00 != (undefined *)0x0) {
      F_00619b00(this_00,((undefined1 *)(gen_frame + 0x4)),**(undefined4 * PTR32 *)((int)this_00 + 4),
                   *(undefined4 * PTR32 *)((int)this_00 + 4));
      F_00429760(*(undefined4 *)((int)this_00 + 4),0x28,0x385);
      F_00406ad0(this_00);
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
  uVar6 = F_006153b0((undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x13c));
  return uVar6;
}

/* ref: FUN_005f9a00 */
uint F_005f9a00(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9a00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(REFG(undefined4, 0x1379cb0) + 0x26) == '\0') {
    return REFG(undefined4, 0x1379cb0);
  }
  uVar2 = 0;
  uVar3 = *(int *)((int)this + 0xe0) - *(int *)((int)this + 0xdc) >> 2;
  if (uVar3 != 0) {
    do {
      uVar1 = F_005d5ea0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + uVar2 * 4))));
      F_005ecdd0(this,uVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar3);
  }
  uVar2 = F_005f7c60(this);
  return uVar2;
}

/* ref: FUN_005f9a60 */
uint F_005f9a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = REFG(undefined4, 0x1379cb0);
  if (*(char *)(REFG(undefined4, 0x1379cb0) + 0x26) != '\0') {
    iVar2 = param_1[1];
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        F_005ecdd0(this,*param_1 + iVar3 + (int)param_1);
        iVar3 = iVar3 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    uVar1 = F_005f7c60(this);
  }
  return uVar1;
}

/* ref: FUN_005f9ab0 */
uint F_005f9ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_005f9530(REFG(void * PTR32, 0x1379cb0),2,param_1,param_2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005f9ae0 */
uint F_005f9ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_005f96a0(REFG(void * PTR32, 0x1379cb0),2,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_005f9b10 */
uint F_005f9b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint uVar1;
  
  F_005f9530(REFG(void * PTR32, 0x1379cb0),3,param_1,param_2,param_3,0);
  uVar1 = param_4;
  if ((param_4 != 0) && (*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x14))) != (undefined *)0x0)) {
    uVar1 = F_005f2940(*((undefined * PTR32 *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x14))),param_4);
  }
  return uVar1;
}

/* ref: FUN_005f9b50 */
uint F_005f9b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_005f96a0(REFG(void * PTR32, 0x1379cb0),3,param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_005f9b80 */
uint F_005f9b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5f9b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_005f9530(REFG(void * PTR32, 0x1379cb0),param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: FUN_005f9bb0 */
uint F_005f9bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5f9bb0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_005f97a0(REFG(void * PTR32, 0x1379cb0),param_1);
  return uVar1;
}

/* ref: FUN_005f9bd0 */
uint F_005f9bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5f9bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  iVar1 = (int)this + 0x18;
  *(undefined4 *)((int)this + 0x11c) = 1;
  *(undefined4 *)((int)this + 8) = param_1;
  F_00c49908(iVar1,0x104,param_2);
  bVar2 = F_005f80b0(this,iVar1,param_3);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 == 0) {
    *(undefined4 *)((int)this + 0x11c) = 5;
    return uVar3;
  }
  if ((char)param_4 == '\0') {
    uVar3 = F_005f81f0(this,iVar1);
  }
  *(undefined4 *)((int)this + 0x11c) = 2;
  return uVar3;
}

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf3 */
uint F_005f9c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (((*(int *)(this + 0x11c) == 2) && (4 < *((int *)GEN_TOP((*(int *)(this + 4) + 0x10))))) &&
     ((*(int *)(this + 0x10) == 0 || (*((char *)GEN_TOP((*(int *)(this + 0x10) + 0x65))) == '\x03')))) {
    if (*((int *)GEN_TOP(((int)REFG(void * PTR32, 0x1379cb0) + 0x18))) != *(int *)(this + 4)) {
      F_005d5b00(REFG(void * PTR32, 0x1379cb0));
    }
    piVar1 = *(int * PTR32 *)(this + 0x10);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
    }
    if (*(int *)(this + 0x14) == 0) {
      F_005f81f0(this,this + 0x18);
    }
    *(undefined4 *)(this + 0x11c) = 3;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x14))(this);
  if ((char)uVar2 != '\0') {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,0);
  }
  return uVar2;
}

/* ref: Client::LayoutEngine::Group::SharedGroupLayoutInstance::vf4 */
uint F_005f9cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5f9cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  byte bVar1;
  int * piVar2;
  uint uVar3;
  byte * pbVar4;
  byte * pbVar5;
  int iVar6;
  bool bVar7;
  
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),param_1 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x100))(this,((undefined1 *)(gen_frame + 0x0)));
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x5c))(this);
  if (uVar3 != 0) {
    F_00a1fa60(this + 0x10,uVar3,param_1);
  }
  this[0xb4] = (undefined1)
               ((byte)this[0xb4] ^
               ((*(char *)(param_1 + 0x46) != '\0') * '\x02' ^ (byte)this[0xb4]) & 2);
  iVar6 = *(int *)(param_1 + 0x34);
  if (iVar6 == 1) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff01f | 0x10;
  }
  else if (iVar6 == 2) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff02f | 0x20;
  }
  else if (iVar6 == 3) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfffff03f | 0x30;
  }
  if (*(int *)(param_1 + 0x40) == 1) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfff04fff | 0x4000;
  }
  else if (*(int *)(param_1 + 0x40) == 2) {
    *(uint *)(this + 0xa8) = *(uint *)(this + 0xa8) & 0xfff05fff | 0x5000;
  }
  this[0xac] = (undefined1)
               ((byte)this[0xac] ^ (*(char *)(param_1 + 0x44) != '\0' ^ (byte)this[0xac]) & 1);
  this[0xac] = (undefined1)
               (((*(char *)(param_1 + 0x45) != '\0') * '\x02' ^ (byte)this[0xac]) & 2 ^
               (byte)this[0xac]);
  piVar2 = *(int * PTR32 *)(this + 0x9c);
  if (piVar2 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    if ((char)uVar3 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c),(*(int *)(this + 0xa8) << 0x14) >> 0x18,0);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x14))))(*(int * PTR32 *)(this + 0x9c));
    if ((char)uVar3 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c),(*(int *)(this + 0xa8) << 0xc) >> 0x18,0);
    }
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x18))))(*(int * PTR32 *)(this + 0x9c));
    if ((char)uVar3 != '\0') {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x9c) + 0x20))))
                (*(int * PTR32 *)(this + 0x9c),(byte)~(byte)this[0xac] & 1 | 6,
                 (uint)((byte)this[0xac] >> 1 & 1));
    }
  }
  pbVar4 = ((byte *)GEN_TOP((*(int *)(param_1 + 0x30) + param_1)));
  (*(byte * PTR32 *)(gen_frame + 0x3c)) = pbVar4;
  if ((*(int *)(this + 0x78) == *(int *)(this + 0x7c)) && (*(int *)(this + 0x34) == 0)) {
    F_005e2b50(this,pbVar4);
  }
  else {
    if (*(int *)(this + 8) == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *((int *)GEN_TOP((*(int *)(this + 8) + 4)));
    }
    pbVar5 = (byte *)F_00507260((undefined *)(iVar6 + 0x14c),this + 0x38);
    pbVar4 = (*(byte * PTR32 *)(gen_frame + 0x3c));
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_005f9ef1: ;
        iVar6 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_005f9ef6;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_005f9ef1;
      pbVar4 = pbVar4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar6 = 0;
LAB_005f9ef6: ;
    if (iVar6 != 0) {
      F_005f5110(this);
      if (*(int *)(this + 0x34) != 0) {
        F_0050c620(*(int *)(this + 0x34),0,0);
        *(undefined4 *)(this + 0x34) = 0;
      }
      F_005e2b50(this,(*(byte * PTR32 *)(gen_frame + 0x3c)));
    }
  }
  *(undefined4 *)(this + 0xa4) = *(undefined4 *)(param_1 + 0x48);
  F_005f82b0(this,*(int *)(param_1 + 0x4c) + param_1);
  uVar3 = F_005db2a0(this,param_1);
  return uVar3;
}

/* ref: Client::LayoutEngine::Group::SGDoorActionController::vf9 */
unsigned int F_005f9f60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5f9f60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 1) {
    F_005f87a0(param_1,param_2);
  }
  else {
    if (iVar1 == 2) {
      F_005f6a90(param_1,param_2);
      return 0;
    }
    if (iVar1 == 3) {
      F_005f6b40(param_1,param_2);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf2 */
uint F_005f9fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x5f9fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  F_005f8a00(this);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x70))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

