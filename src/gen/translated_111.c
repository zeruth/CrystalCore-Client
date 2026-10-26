#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a4f840 */
uint F_00a4f840(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f840u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a6af20(&REFG(undefined, 0x14ab440),param_1);
  return uVar1;
}

/* ref: FUN_00a4f860 */
uint F_00a4f860(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a6b070(&REFG(undefined, 0x14ab464),param_1,param_1 + 0x100);
  return uVar1;
}

/* ref: FUN_00a4f880 */
uint F_00a4f880(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f880u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * pcVar1;
  
  pcVar1 = param_1;
  if (*param_1 == '\0') {
    pcVar1 = (char *)F_00a7ed80(&REFG(undefined, 0x14ab584),param_1 + 1);
  }
  return (uint)pcVar1;
}

/* ref: FUN_00a4f8a0 */
uint F_00a4f8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f8a0u, gen_a0, 0u, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  uVar3 = *(ushort *)(param_1 + 4);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 2));
  uVar4 = *(ushort *)(param_1 + 6);
  fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar3);
  uVar6 = *(undefined4 *)(param_1 + 0xc);
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
  uVar5 = *(ushort *)(param_1 + 8);
  fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
  (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)*(ushort *)(param_1 + 2) * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar4);
  (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar3 * fVar8) * fVar9 - fVar10)));
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(param_1 + 10));
  (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((((float10)uVar4 * fVar8) * fVar9 - fVar10)));
  fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 10) / (float10)*(double *)&REFG(undefined, 0x1088118))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)uVar5);
  fVar2 = ((float)GEN_TOF((((float10)uVar5 *
                  (((float10)*(double *)&REFG(undefined, 0x1088118) * (float10)*(float *)&REFG(undefined, 0x1334840)) /
                  (float10)REFG(double, 0x109cab0))) * fVar9 - (float10)*(double *)&REFG(undefined, 0x1080228))));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  F_00ac3a00(&REFG(undefined, 0x14bcf40),(uint)*param_1,&(*(float *)(gen_frame + 0x0)),fVar2,fVar1,uVar6);
  uVar7 = F_00a6fbc0(&REFG(undefined, 0x14ab740),1,1);
  return uVar7;
}

/* ref: FUN_00a4f990 */
uint F_00a4f990(unsigned int gen_a0)
{
  GEN_ENTER(0xa4f990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  F_00c48350((undefined *)((int)this + 8),0,0x48);
  return (uint)this;
}

/* ref: FUN_00a4fa10 */
uint F_00a4fa10(unsigned int gen_a0)
{
  GEN_ENTER(0xa4fa10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  int local_8;
  
  puVar1 = (undefined4 *)F_00406bb0(0x44c8,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar1 + 2;
    *puVar1 = 200;
    local_8 = 199;
    puVar1 = puVar3;
    do {
      *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
      puVar1[0x14] = 0;
      puVar1[0x15] = 0;
      F_00c48350(puVar1 + 2,0,0x48);
      puVar1 = puVar1 + 0x16;
      local_8 = local_8 + -1;
    } while (-1 < local_8);
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  iVar2 = 0x58;
  do {
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x54 + iVar2))) = *(int *)((int)this + 4) + 0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x50 + iVar2))) = *(int *)((int)this + 4) + -0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0xac + iVar2))) = *(int *)((int)this + 4) + 0xb0 + iVar2;
    iVar4 = *(int *)((int)this + 4) + iVar2;
    *(int *)(iVar4 + 0xa8) = iVar4;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x104 + iVar2))) = *(int *)((int)this + 4) + 0x108 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x100 + iVar2))) = *(int *)((int)this + 4) + 0x58 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x15c + iVar2))) = *(int *)((int)this + 4) + 0x160 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x158 + iVar2))) = *(int *)((int)this + 4) + 0xb0 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x1b4 + iVar2))) = *(int *)((int)this + 4) + 0x1b8 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x1b0 + iVar2))) = *(int *)((int)this + 4) + 0x108 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x20c + iVar2))) = *(int *)((int)this + 4) + 0x210 + iVar2;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x208 + iVar2))) = *(int *)((int)this + 4) + 0x160 + iVar2;
    iVar2 = iVar2 + 0x210;
  } while (iVar2 < 0x4468);
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 8) = iVar2;
  *(int *)(iVar2 + 0x54) = iVar2 + 0x58;
  iVar2 = *(int *)((int)this + 4);
  *(int *)((int)this + 0xc) = iVar2 + 0x4468;
  *(int *)(iVar2 + 0x44b8) = iVar2 + 0x4410;
  puVar1 = (undefined4 *)F_00406bb0(0x1e4,0,0);
  if (puVar1 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 10;
    puVar3 = puVar1 + 1;
    *puVar3 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0xffffffff;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0xffffffff;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xd] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0xffffffff;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    puVar1[0x14] = 0;
    puVar1[0x15] = 0xffffffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x19] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x1b] = 0;
    puVar1[0x1c] = 0;
    puVar1[0x1d] = 0xffffffff;
    puVar1[0x1e] = 0;
    puVar1[0x1f] = 0;
    puVar1[0x20] = 0;
    puVar1[0x21] = 0xffffffff;
    puVar1[0x22] = 0;
    puVar1[0x23] = 0;
    puVar1[0x25] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x27] = 0;
    puVar1[0x28] = 0;
    puVar1[0x29] = 0xffffffff;
    puVar1[0x2a] = 0;
    puVar1[0x2b] = 0;
    puVar1[0x2c] = 0;
    puVar1[0x2d] = 0xffffffff;
    puVar1[0x2e] = 0;
    puVar1[0x2f] = 0;
    puVar1[0x31] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x33] = 0;
    puVar1[0x34] = 0;
    puVar1[0x35] = 0xffffffff;
    puVar1[0x36] = 0;
    puVar1[0x37] = 0;
    puVar1[0x38] = 0;
    puVar1[0x39] = 0xffffffff;
    puVar1[0x3a] = 0;
    puVar1[0x3b] = 0;
    puVar1[0x3d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x3f] = 0;
    puVar1[0x40] = 0;
    puVar1[0x41] = 0xffffffff;
    puVar1[0x42] = 0;
    puVar1[0x43] = 0;
    puVar1[0x44] = 0;
    puVar1[0x45] = 0xffffffff;
    puVar1[0x46] = 0;
    puVar1[0x47] = 0;
    puVar1[0x49] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x4b] = 0;
    puVar1[0x4c] = 0;
    puVar1[0x4d] = 0xffffffff;
    puVar1[0x4e] = 0;
    puVar1[0x4f] = 0;
    puVar1[0x50] = 0;
    puVar1[0x51] = 0xffffffff;
    puVar1[0x52] = 0;
    puVar1[0x53] = 0;
    puVar1[0x55] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x57] = 0;
    puVar1[0x58] = 0;
    puVar1[0x59] = 0xffffffff;
    puVar1[0x5a] = 0;
    puVar1[0x5b] = 0;
    puVar1[0x5c] = 0;
    puVar1[0x5d] = 0xffffffff;
    puVar1[0x5e] = 0;
    puVar1[0x5f] = 0;
    puVar1[0x61] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[99] = 0;
    puVar1[100] = 0;
    puVar1[0x65] = 0xffffffff;
    puVar1[0x66] = 0;
    puVar1[0x67] = 0;
    puVar1[0x68] = 0;
    puVar1[0x69] = 0xffffffff;
    puVar1[0x6a] = 0;
    puVar1[0x6b] = 0;
    puVar1[0x6d] = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    puVar1[0x6f] = 0;
    puVar1[0x70] = 0;
    puVar1[0x71] = 0xffffffff;
    puVar1[0x72] = 0;
    puVar1[0x73] = 0;
    puVar1[0x74] = 0;
    puVar1[0x75] = 0xffffffff;
    puVar1[0x76] = 0;
    puVar1[0x77] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x10) = puVar3;
  puVar3[0x16] = puVar3 + 0x18;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x54))) = *(int *)((int)this + 0x10);
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x88))) = *(int *)((int)this + 0x10) + 0x90;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x84))) = *(int *)((int)this + 0x10) + 0x30;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb8))) = *(int *)((int)this + 0x10) + 0xc0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xb4))) = *(int *)((int)this + 0x10) + 0x60;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe8))) = *(int *)((int)this + 0x10) + 0xf0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0xe4))) = *(int *)((int)this + 0x10) + 0x90;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x118))) = *(int *)((int)this + 0x10) + 0x120;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x114))) = *(int *)((int)this + 0x10) + 0xc0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x148))) = *(int *)((int)this + 0x10) + 0x150;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x144))) = *(int *)((int)this + 0x10) + 0xf0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x178))) = *(int *)((int)this + 0x10) + 0x180;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x174))) = *(int *)((int)this + 0x10) + 0x120;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a8))) = *(int *)((int)this + 0x10) + 0x1b0;
  *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a4))) = *(int *)((int)this + 0x10) + 0x150;
  iVar2 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x14) = iVar2;
  *(int *)(iVar2 + 0x28) = iVar2 + 0x30;
  iVar2 = *(int *)((int)this + 0x10);
  *(int *)((int)this + 0x18) = iVar2 + 0x1b0;
  *(uint *)(iVar2 + 0x1d4) = iVar2 + 0x180U;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  return iVar2 + 0x180U;
}

/* ref: FUN_00a4fea0 */
unsigned int F_00a4fea0(void)
{
  GEN_ENTER(0xa4fea0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a4feb0 */
uint F_00a4feb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa4feb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  while( true ) {
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 0x10) == param_2) break;
    uVar1 = *(uint *)(uVar1 + 0x28);
  }
  return uVar1;
}

/* ref: FUN_00a4fee0 */
uint F_00a4fee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4fee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != 0) {
    uVar1 = *(uint *)((int)this + 8);
    if (uVar1 != 0) {
      iVar2 = *(int *)(uVar1 + 0x54);
      *(int *)((int)this + 8) = iVar2;
      if (iVar2 != 0) {
        *(undefined4 *)(iVar2 + 0x50) = 0;
      }
      iVar2 = *(int *)(param_1 + 0x18);
      *(undefined4 *)(uVar1 + 0x54) = 0;
      if (iVar2 == 0) {
        *(undefined4 *)(uVar1 + 0x50) = 0;
        *(uint *)(param_1 + 0x14) = uVar1;
      }
      else {
        *(int *)(uVar1 + 0x50) = iVar2;
        *((uint *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x54))) = uVar1;
      }
      *(uint *)(param_1 + 0x18) = uVar1;
      puVar3 = param_2;
      puVar4 = (undefined4 *)(uVar1 + 8);
      for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00a4ff40 */
unsigned int F_00a4ff40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa4ff40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (param_2 == *(int *)(param_1 + 0x14)) {
      iVar1 = *(int *)(param_2 + 0x54);
      *(int *)(param_1 + 0x14) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x50) = 0;
      }
    }
    if (param_2 == *(int *)(param_1 + 0x18)) {
      iVar1 = *(int *)(param_2 + 0x50);
      *(int *)(param_1 + 0x18) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x54) = 0;
      }
    }
    if (*(int *)(param_2 + 0x50) != 0) {
      *(undefined4 *)(param_2 + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x50) + 0x50)));
    }
    if (*(int *)(param_2 + 0x54) != 0) {
      *(undefined4 *)(param_2 + 0x54) = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x54) + 0x54)));
    }
    iVar1 = *(int *)((int)this + 0xc);
    *(undefined4 *)(param_2 + 0x54) = 0;
    if (iVar1 != 0) {
      *(int *)(param_2 + 0x50) = iVar1;
      *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x54))) = param_2;
      *(int *)((int)this + 0xc) = param_2;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      return 0;
    }
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(int *)((int)this + 8) = param_2;
    *(int *)((int)this + 0xc) = param_2;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  return 0;
}

/* ref: FUN_00a4ffd0 */
uint F_00a4ffd0(void)
{
  GEN_ENTER(0xa4ffd0u, 0u, 0u, 0u, 0u);
  return 0x14a7470;
}

/* ref: FUN_00a4ffe0 */
byte F_00a4ffe0(void)
{
  GEN_ENTER(0xa4ffe0u, 0u, 0u, 0u, 0u);
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = &REFG(undefined2, 0x14a8828);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  puVar1 = &REFG(undefined2, 0x14a8af8);
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 8;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  REFG(undefined1, 0x14a73d2) = 0;
  REFG(undefined1, 0x14a73d9) = 0;
  REFG(undefined1, 0x14a73d3) = 0;
  REFG(undefined1, 0x14a73d8) = 0;
  REFG(undefined1, 0x14a73da) = 0;
  return 0;
}

/* ref: FUN_00a50030 */
unsigned int F_00a50030(void)
{
  GEN_ENTER(0xa50030u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a50040 */
uint F_00a50040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50040u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*(uint *)(gen_frame + 0x18)) = uVar2;
  uVar3 = param_1 & 0xffff;
  if (0x1d < uVar3) goto LAB_00a5014c;
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8824) + iVar4;
  F_00f00b60(((undefined1 *)(gen_frame + 0x8)),puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0xc)) == 0) {
    if (uVar1 != 0) {
LAB_00a500a1: ;
      (&REFG(undefined2, 0x14a8828))[uVar3 * 8] = uVar1;
      (&REFG(undefined1, 0x14a882a))[iVar4] = (char)param_2[1];
      (&REFG(undefined1, 0x14a882b))[iVar4] = *(undefined1 *)((int)param_2 + 3);
      (&REFG(undefined1, 0x14a882c))[iVar4] = (char)param_2[2];
      (&REFG(undefined1, 0x14a882d))[iVar4] = *(undefined1 *)((int)param_2 + 5);
      (&REFG(undefined1, 0x14a882e))[iVar4] = (char)param_2[3];
      (&REFG(undefined1, 0x14a882f))[iVar4] = *(undefined1 *)((int)param_2 + 7);
      (&REFG(undefined1, 0x14a8830))[iVar4] = (char)param_2[4];
      puVar6 = ((undefined1 *)(gen_frame + 0x8));
      (&REFG(undefined1, 0x14a8831))[iVar4] = *(undefined1 *)((int)param_2 + 9);
      this = (undefined *)F_006b8c00();
      uVar2 = F_00703900(this,puVar5,puVar6,uVar3);
      if ((*(ushort *)(gen_frame + 0xc)) == 0) {
        *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
      }
      else if (*param_2 == 0) {
        *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + -1;
      }
      if ((char)param_3 != '\0') {
        REFG(undefined4, 0x14a458f) = 1;
      }
      if ((char)param_5 != '\0') {
        REFG(undefined4, 0x14b0ee0) = 1;
      }
      if ((char)param_4 != '\0') {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
        *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
        uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
        *(undefined4 *)&REFG(undefined, 0x14afd30) = 1;
      }
    }
  }
  else if (((*(ushort *)(gen_frame + 0xc)) == uVar1) || (uVar1 == 0)) goto LAB_00a500a1;
  F_00ef87b0(((undefined1 *)(gen_frame + 0x8)));
LAB_00a5014c: ;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_00a50160 */
uint F_00a50160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  undefined * this;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a875a),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73d3) == '\0') {
      REFG(char, 0x14a73d3) = 1;
      this = (undefined *)F_006b8c00();
      uVar1 = F_006e5e50(this);
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a501b0 */
uint F_00a501b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa501b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined * this;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a875a))[uVar1] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a875a))[uVar1] | bVar2;
    }
    (&REFG(undefined, 0x14a875a))[uVar1] = bVar2;
    this = (undefined *)F_006b8c00();
    uVar1 = F_006e5ea0(this,param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00a50210 */
uint F_00a50210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  ulonglong uVar1;
  
  if (param_2 == 0x28) {
    uVar1 = F_00c46aa0(&REFG(undefined, 0x14a8a04),param_1,0x28);
    in_EAX = (uint)uVar1;
    if (REFG(char, 0x14a73d8) == '\0') {
      REFG(char, 0x14a73d8) = '\x01';
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50240 */
uint F_00a50240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa50240u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  uint in_EAX = 0;
  uint uVar2;
  undefined * this;
  uint uVar3;
  int iVar4;
  undefined * puVar5;
  undefined1 * puVar6;
  
  if (0xf < (ushort)param_1) {
    return in_EAX;
  }
  uVar3 = param_1 & 0xffff;
  iVar4 = uVar3 * 0x10;
  puVar5 = &REFG(undefined, 0x14a8af4) + iVar4;
  F_00e781d0(((undefined1 *)(gen_frame + 0xc)),puVar5);
  uVar1 = *param_2;
  uVar2 = (uint)uVar1;
  if ((*(ushort *)(gen_frame + 0x10)) == 0) {
    if (uVar1 == 0) {
      F_00e6ced0(((undefined1 *)(gen_frame + 0xc)));
      return 0;
    }
  }
  else if (((*(ushort *)(gen_frame + 0x10)) != uVar1) && (uVar1 != 0)) goto LAB_00a5031d;
  (&REFG(undefined2, 0x14a8af8))[uVar3 * 8] = uVar1;
  (&REFG(undefined1, 0x14a8afa))[iVar4] = (char)param_2[1];
  (&REFG(undefined2, 0x14a8afc))[uVar3 * 8] = param_2[2];
  (&REFG(undefined2, 0x14a8afe))[uVar3 * 8] = param_2[3];
  puVar6 = ((undefined1 *)(gen_frame + 0xc));
  (&REFG(undefined1, 0x14a8b00))[iVar4] = (char)param_2[4];
  this = (undefined *)F_006b8c00();
  F_0070e450(this,puVar5,puVar6,param_1);
  uVar2 = 1;
  if ((*(ushort *)(gen_frame + 0x10)) == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
  }
  else if (*param_2 == 0) {
    *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + -1;
  }
  if ((char)param_4 != '\0') {
    REFG(undefined4, 0x14b0ee0) = 1;
  }
  if ((char)param_3 != '\0') {
    *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
    *(ushort *)&REFG(undefined, 0x14afd34) = *param_2;
    uVar2 = (uint)*(ushort *)&REFG(undefined, 0x14afd34);
    *(undefined4 *)&REFG(undefined, 0x14afd30) = 2;
  }
LAB_00a5031d: ;
  F_00e6ced0(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00a50330 */
uint F_00a50330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 == 200) {
    uVar2 = F_00c46aa0(&REFG(undefined, 0x14a8a2c),param_1,200);
    in_EAX = (uint)uVar2;
    if (REFG(char, 0x14a73da) == '\0') {
      REFG(char, 0x14a73da) = 1;
      uVar1 = F_006b8c00();
      return uVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a50380 */
uint F_00a50380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50380u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  byte bVar2;
  
  uVar1 = (param_1 & 0xffff) >> 3;
  if (uVar1 < 200) {
    bVar2 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 == '\0') {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[uVar1] & ~bVar2;
    }
    else {
      bVar2 = (&REFG(undefined, 0x14a8a2c))[uVar1] | bVar2;
    }
    (&REFG(undefined, 0x14a8a2c))[uVar1] = bVar2;
    uVar1 = F_006b8c00();
    F_006b8cf0(param_1);
  }
  return uVar1;
}

/* ref: FUN_00a503e0 */
uint F_00a503e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xa503e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;
  int param_10 = (int)gen_a9;
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a94f8),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9514) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9518) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a951c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9520) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9524) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9526) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a952a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a952e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9530) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9534) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9536) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a504a0 */
uint F_00a504a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xa504a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  undefined2 * param_9 = (undefined2 *)(uintptr_t)gen_a8;
  int param_10 = (int)gen_a9;
  undefined2 * in_EAX = 0;
  
  if ((((param_2 == 0x1c) && (param_4 == 0x12)) && (param_6 == 10)) &&
     ((param_8 == 6 && (param_10 == 2)))) {
    F_00c46aa0(&REFG(undefined, 0x14a9538),param_1,0x1c);
    *(undefined4 *)&REFG(undefined, 0x14a9554) = *param_3;
    *(undefined4 *)&REFG(undefined, 0x14a9558) = param_3[1];
    *(undefined4 *)&REFG(undefined, 0x14a955c) = param_3[2];
    *(undefined4 *)&REFG(undefined, 0x14a9560) = param_3[3];
    *(undefined2 *)&REFG(undefined, 0x14a9564) = *(undefined2 *)(param_3 + 4);
    *(undefined4 *)&REFG(undefined, 0x14a9566) = *param_5;
    *(undefined4 *)&REFG(undefined, 0x14a956a) = param_5[1];
    *(undefined2 *)&REFG(undefined, 0x14a956e) = *(undefined2 *)(param_5 + 2);
    *(undefined4 *)&REFG(undefined, 0x14a9570) = *param_7;
    *(undefined2 *)&REFG(undefined, 0x14a9574) = *(undefined2 *)(param_7 + 1);
    *(undefined2 *)&REFG(undefined, 0x14a9576) = *param_9;
    in_EAX = param_9;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a50560 */
uint F_00a50560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa50560u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined * this;
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    puVar1 = &REFG(undefined1, 0x14a8d05);
    do {
      puVar1[-1] = *(undefined1 *)(param_1 + uVar2 * 2);
      *puVar1 = *(undefined1 *)(param_1 + 1 + uVar2 * 2);
      F_00a705f0(&REFG(undefined, 0x14ac288),(uint)*(byte *)(param_1 + uVar2 * 2),
                   (uint)*(byte *)(param_1 + 1 + uVar2 * 2),1,0);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 8;
    } while (uVar2 < param_2);
  }
  this = (undefined *)F_006b8c00();
  uVar2 = F_0070e6a0(this);
  REFG(undefined4, 0x14b0ee0) = 1;
  *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
  return uVar2;
}

/* ref: FUN_00a505f0 */
byte F_00a505f0(void)
{
  GEN_ENTER(0xa505f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d2);
}

/* ref: FUN_00a50610 */
byte F_00a50610(void)
{
  GEN_ENTER(0xa50610u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d3);
}

/* ref: FUN_00a50620 */
byte F_00a50620(void)
{
  GEN_ENTER(0xa50620u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14a73d8);
}

/* ref: FUN_00a50640 */
uint F_00a50640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * PTR32 * param_4 = (undefined * PTR32 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * puVar1;
  undefined * puVar2;
  undefined * puVar3;
  undefined4 * puVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar5;
  int iVar6;
  undefined * PTR32 * ppuVar7;
  uint uVar8;
  undefined * PTR32 * ppuVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar8 = (uint)(ushort)param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(byte)param_5);
  if (param_4 == (undefined * PTR32 *)0x0) {
    bVar5 = 0;
    ppuVar7 = &REFG(undefined * PTR32, 0x10e5ccc);
  }
  else {
    ppuVar7 = param_4;
    bVar5 = (byte)param_5;
    if (2 < (byte)param_5) {
      if ((byte)param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        puVar1 = param_4[1];
        uVar11 = 0;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        puVar2 = param_4[2];
        ((undefined * PTR32 *)(gen_frame + 0x28))[0] = *param_4;
        puVar3 = param_4[3];
        ((undefined * PTR32 *)(gen_frame + 0x28))[1] = puVar1;
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1d8;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        ((undefined * PTR32 *)(gen_frame + 0x28))[2] = puVar2;
        ((undefined * PTR32 *)(gen_frame + 0x28))[3] = puVar3;
      }
      else if ((byte)param_5 < 9) {
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        uVar11 = 0;
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1d9;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        ppuVar7 = param_4;
        ppuVar9 = ((undefined * PTR32 *)(gen_frame + 0x28));
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *ppuVar9 = *ppuVar7;
          ppuVar7 = ppuVar7 + 1;
          ppuVar9 = ppuVar9 + 1;
        }
        uVar10 = 0;
        puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
      }
      else if ((byte)param_5 < 0x11) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5d9c0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x21) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5da10(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x41) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5da60(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else if ((byte)param_5 < 0x81) {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5dab0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      else {
        uVar11 = 0;
        uVar10 = 0;
        puVar4 = (undefined4 *)F_00a5db00(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar8,param_3,(*(undefined4 *)(gen_frame + 0x4)),param_4);
      }
      goto LAB_00a5084c;
    }
  }
  puVar1 = ppuVar7[1];
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(byte *)(gen_frame + 0x27)) = bVar5;
  puVar2 = *ppuVar7;
  uVar11 = 0;
  (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1d7;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
  ((undefined * PTR32 *)(gen_frame + 0x28))[0] = puVar2;
  ((undefined * PTR32 *)(gen_frame + 0x28))[1] = puVar1;
  uVar10 = 0;
  puVar4 = &(*(undefined4 *)(gen_frame + 0x8));
LAB_00a5084c: ;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar5 = F_00974e00(this,puVar4,uVar10,uVar11);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar5);
}

/* ref: FUN_00a50880 */
uint F_00a50880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  byte bVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint uVar7;
  undefined4 * puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar7 = (uint)(ushort)param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x4)), 1, 3),(undefined1)param_3);
  (*(undefined4 *)(gen_frame + 0x0)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x0)), 1, 3),(byte)param_5);
  if (param_4 == (undefined4 *)0x0) {
    bVar3 = 0;
    puVar5 = &REFG(undefined4, 0x10e5cd0);
  }
  else {
    puVar5 = param_4;
    bVar3 = (byte)param_5;
    if (2 < (byte)param_5) {
      if ((byte)param_5 < 5) {
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        uVar9 = param_4[1];
        uVar10 = 0;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        uVar1 = param_4[2];
        ((undefined4 *)(gen_frame + 0x28))[0] = *param_4;
        uVar2 = param_4[3];
        ((undefined4 *)(gen_frame + 0x28))[1] = uVar9;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1e1;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        ((undefined4 *)(gen_frame + 0x28))[2] = uVar1;
        ((undefined4 *)(gen_frame + 0x28))[3] = uVar2;
      }
      else if ((byte)param_5 < 9) {
        uVar10 = 0;
        (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
        (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
        (*(byte *)(gen_frame + 0x27)) = (byte)param_5;
        uVar9 = 0;
        puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1e2;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
        (*(undefined4 *)(gen_frame + 0x20)) = param_1;
        puVar6 = param_4;
        puVar8 = ((undefined4 *)(gen_frame + 0x28));
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else if ((byte)param_5 < 0x11) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dc30(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x21) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dc80(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x41) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dcd0(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else if ((byte)param_5 < 0x81) {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dd20(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      else {
        uVar10 = 0;
        uVar9 = 0;
        puVar5 = (undefined4 *)F_00a5dd70(&(*(undefined4 *)(gen_frame + 0x8)),param_1,uVar7,(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x0)),param_4);
      }
      goto LAB_00a50a9d;
    }
  }
  uVar10 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar1 = *puVar5;
  (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
  (*(byte *)(gen_frame + 0x27)) = bVar3;
  uVar2 = puVar5[1];
  uVar9 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1e0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(ushort *)(gen_frame + 0x24)) = (ushort)param_2;
  ((undefined4 *)(gen_frame + 0x28))[0] = uVar1;
  ((undefined4 *)(gen_frame + 0x28))[1] = uVar2;
LAB_00a50a9d: ;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar3 = F_00974e00(this,puVar5,uVar9,uVar10);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar3);
}

/* ref: FUN_00a50ad0 */
uint F_00a50ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa50ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char * param_4 = (char *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  char * pcVar4;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar4 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30));
  (*(char * PTR32 *)(gen_frame + 0xc2c)) = pcVar4;
  if (param_4 != (char *)0x0) {
    pcVar4 = param_4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (1 - (int)(param_4 + 1));
    if (pcVar4 < (char *)0x9) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      uVar7 = *(undefined4 *)param_4;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      uVar8 = *(undefined4 *)(param_4 + 4);
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1eb;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      ((undefined4 *)(gen_frame + 0x27))[0] = uVar7;
      ((undefined4 *)(gen_frame + 0x27))[1] = uVar8;
    }
    else if (pcVar4 < (char *)0x11) {
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      uVar7 = *(undefined4 *)(param_4 + 4);
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      uVar8 = *(undefined4 *)(param_4 + 8);
      ((undefined4 *)(gen_frame + 0x27))[0] = *(undefined4 *)param_4;
      uVar2 = *(undefined4 *)(param_4 + 0xc);
      ((undefined4 *)(gen_frame + 0x27))[1] = uVar7;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ec;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
      ((undefined4 *)(gen_frame + 0x27))[2] = uVar8;
      ((undefined4 *)(gen_frame + 0x27))[3] = uVar2;
    }
    else {
      if ((char *)0x20 < pcVar4) goto LAB_00a50c24;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ed;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x38;
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      pcVar4 = param_4;
      puVar6 = ((undefined4 *)(gen_frame + 0x27));
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar6 = *(undefined4 *)pcVar4;
        pcVar4 = pcVar4 + 4;
        puVar6 = puVar6 + 1;
      }
    }
    puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
    (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
    (*(undefined4 *)(gen_frame + 0x20)) = param_1;
    uVar8 = 0;
    uVar7 = 0;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    bVar3 = F_00974e00(this,puVar6,uVar7,uVar8);
    pcVar4 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar3)));
  }
LAB_00a50c24: ;
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return (uint)pcVar4;
}

/* ref: FUN_00a50c40 */
uint F_00a50c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa50c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  char * param_6 = (char *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  char cVar1;
  byte bVar2;
  char * pcVar3;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  pcVar3 = (char *)(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30));
  (*(char * PTR32 *)(gen_frame + 0xc2c)) = pcVar3;
  if (param_6 != (char *)0x0) {
    pcVar3 = param_6;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    pcVar3 = pcVar3 + (1 - (int)(param_6 + 1));
    if (pcVar3 < (char *)0x21) {
      (*(undefined2 *)(gen_frame + 0x24)) = (undefined2)param_2;
      (*(undefined4 *)(gen_frame + 0x20)) = param_1;
      (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
      uVar8 = 0;
      (*(undefined1 *)(gen_frame + 0x26)) = (undefined1)param_3;
      (*(undefined4 *)(gen_frame + 0x8)) = 0x1ee;
      (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
      (*(undefined4 *)(gen_frame + 0x28)) = param_4;
      uVar7 = 0;
      puVar6 = &(*(undefined4 *)(gen_frame + 0x8));
      pcVar3 = param_6;
      puVar5 = ((undefined4 *)(gen_frame + 0x30));
      for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        puVar5 = puVar5 + 1;
      }
      this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
      bVar2 = F_00974e00(this,puVar6,uVar7,uVar8);
      pcVar3 = ((char *)GEN_TOP(CONCAT31(extraout_var,bVar2)));
    }
  }
  F_00c47745((uint)(*(char * PTR32 *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return (uint)pcVar3;
}

/* ref: FUN_00a50d10 */
uint F_00a50d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa50d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  uint uVar1;
  undefined * this;
  
  if (param_1 == -0x20000000) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,param_2);
  }
  this = (undefined *)F_006b8c00();
  uVar1 = F_006fcf60(this,uVar1,param_3,param_4,param_5,param_6,param_7);
  return uVar1;
}

/* ref: FUN_00a50d60 */
uint F_00a50d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50d60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x180];
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  byte * pbVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x178)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x17c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    pbVar3 = (byte *)(param_4 + 3);
    do {
      ((undefined1 *)(gen_frame + 0x148))[0] = 0;
      uVar1 = 0;
      do {
        F_00c472af(((undefined1 *)(gen_frame + 0x170)),5,&REFG(undefined, 0x10e5b08),(uint)pbVar3[uVar1 + 1]);
        F_00c473c8(((undefined1 *)(gen_frame + 0x148)),0x28,((undefined1 *)(gen_frame + 0x170)));
        uVar1 = uVar1 + 1;
      } while (uVar1 < 6);
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"quest[%02u] : id=%u, seq=%u, flags=0x%02x, vars=%s",uVar2,
                 (uint)*(ushort *)(pbVar3 + -3),(uint)pbVar3[-1],(uint)*pbVar3,((undefined1 *)(gen_frame + 0x148)));
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),&REFG(undefined, 0x10e539a),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x8));
      puVar6 = ((undefined1 *)(gen_frame + 0x5c));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
      F_00459b00(this,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 10;
    } while (uVar2 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x178)) ^ (uint)(uint)(gen_frame + 0x17c));
  return uVar1;
}

/* ref: FUN_00a50eb0 */
uint F_00a50eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if (((byte)param_4 == 0) && ((char)param_3 != '\0')) {
    pcVar4 = "quest : id=%u, seq=completed";
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"quest : id=%u, seq=%u",param_2 & 0xffff,(uint)(byte)param_4);
      goto LAB_00a50f57;
    }
    pcVar4 = "quest : id=%u, seq=not accepted";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a50f57: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e539b),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x5c));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
  F_00459b00(this,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)uVar1;
}

/* ref: FUN_00a50fd0 */
uint F_00a50fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa50fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint uVar1;
  undefined * this;
  uint uVar2;
  ushort * puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined4 uVar8;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar1 = F_00a4e340(uVar1,in_esi,param_1);
  uVar2 = 0;
  if (param_5 != 0) {
    puVar3 = (ushort *)(param_4 + 6);
    do {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"Leve[%02u] : id=%u, seq=%u, flags=0x%02x, seed=%u, class=%u",uVar2,
                 (uint)puVar3[-3],(uint)(byte)puVar3[-2],(uint)puVar3[-1],(uint)*puVar3,
                 (uint)(byte)puVar3[1]);
      F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
      F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e5452),REFG(undefined4, 0x108cc50));
      uVar8 = 0;
      puVar7 = ((undefined1 *)(gen_frame + 0x5c));
      puVar6 = ((undefined1 *)(gen_frame + 0x8));
      uVar5 = 1;
      this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
      F_00459b00(this,uVar5,puVar6,puVar7,uVar8);
      F_0042c880(((undefined1 *)(gen_frame + 0x8)));
      uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
      uVar1 = (uint)uVar4;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 5;
    } while (uVar2 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return uVar1;
}

/* ref: FUN_00a510e0 */
uint F_00a510e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa510e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  int * in_esi;
  uint in_ecx;
  undefined * this;
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 * puVar3;
  char * pcVar4;
  undefined1 * puVar5;
  undefined4 uVar6;
  
  (*(uint *)(gen_frame + 0x148)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  in_esi = (int *)F_00424750(REFG(undefined4, 0x137104c));
  in_ecx = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  F_00a4e340(in_ecx,in_esi,param_1);
  if (((byte)param_4 == 0) && ((char)param_3 != '\0')) {
    pcVar4 = "leve : id=%u, seq=completed";
  }
  else {
    if (-1 < param_5) {
      F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,"leve : id=%u, seq=%u",param_2 & 0xffff,(uint)(byte)param_4);
      goto LAB_00a51187;
    }
    pcVar4 = "leve : id=%u, seq=not accepted";
  }
  F_00c472af(((undefined1 *)(gen_frame + 0xb0)),0x96,pcVar4,param_2 & 0xffff);
LAB_00a51187: ;
  F_0042cc20(((undefined1 *)(gen_frame + 0x5c)),((undefined1 *)(gen_frame + 0xb0)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x8)),&REFG(undefined, 0x10e5453),REFG(undefined4, 0x108cc50));
  uVar6 = 0;
  puVar5 = ((undefined1 *)(gen_frame + 0x5c));
  puVar3 = ((undefined1 *)(gen_frame + 0x8));
  uVar2 = 1;
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*in_esi + 0x28))(in_esi)));
  F_00459b00(this,uVar2,puVar3,puVar5,uVar6);
  F_0042c880(((undefined1 *)(gen_frame + 0x8)));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x5c)));
  F_00c47745((*(uint *)(gen_frame + 0x148)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)uVar1;
}

/* ref: Global::SendClientTrigger */
uint F_00a51200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa51200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_4;
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a512b0 */
uint F_00a512b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa512b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x191;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51360 */
uint F_00a51360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa51360u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_6;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2[1];
  uVar1 = param_2[2];
  (*(undefined4 *)(gen_frame + 0x8)) = 0x195;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x3c)) = uVar1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar2 = F_00974e00(this,puVar3,uVar4,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51420 */
uint F_00a51420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = param_7;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x197;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined4 *)(gen_frame + 0x38)) = param_2;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a514d0 */
uint F_00a514d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa514d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x30)) = param_6;
  uVar7 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x198;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x48;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_5;
  uVar6 = 0;
  puVar5 = &(*(undefined4 *)(gen_frame + 0x8));
  puVar3 = param_2;
  puVar4 = ((undefined4 *)(gen_frame + 0x34));
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar5,uVar6,uVar7);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51580 */
uint F_00a51580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa51580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 8;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51650 */
uint F_00a51650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x16;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51720 */
uint F_00a51720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x17;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a517f0 */
uint F_00a517f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa517f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x2b;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a518c0 */
uint F_00a518c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa518c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xe;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51990 */
uint F_00a51990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa51990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xf;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51a60 */
uint F_00a51a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x10;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51b20 */
uint F_00a51b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x11;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51be0 */
uint F_00a51be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51be0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x12;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ca0 */
uint F_00a51ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa51ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x13;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51d60 */
uint F_00a51d60(void)
{
  GEN_ENTER(0xa51d60u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x262;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x20)) = REFG(undefined2, 0x14b4eb8);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51de0 */
uint F_00a51de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa51de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined1 * param_8 = (undefined1 *)(uintptr_t)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined1 *)(gen_frame + 0x20)) = *param_8;
  (*(undefined4 *)(gen_frame + 0x24)) = param_4;
  (*(undefined1 *)(gen_frame + 0x21)) = (undefined1)param_3;
  (*(undefined4 *)(gen_frame + 0x28)) = param_5;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x2e)) = (undefined2)param_7;
  (*(undefined2 *)(gen_frame + 0x2c)) = (undefined2)param_6;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x30)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x196;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a51ea0 */
uint F_00a51ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51ea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined1 * param_7 = (undefined1 *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x24)) = param_3;
  (*(undefined1 *)(gen_frame + 0x20)) = *param_7;
  (*(undefined2 *)(gen_frame + 0x2e)) = (undefined2)param_6;
  uVar5 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = param_4;
  (*(undefined4 *)(gen_frame + 0x30)) = *param_1;
  uVar4 = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined1 *)(gen_frame + 0x21)) = (undefined1)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_1[1];
  uVar1 = param_1[2];
  (*(undefined4 *)(gen_frame + 0x8)) = 0x199;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x30;
  (*(undefined2 *)(gen_frame + 0x2c)) = (undefined2)param_5;
  (*(undefined4 *)(gen_frame + 0x38)) = uVar1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar2 = F_00974e00(this,puVar3,uVar4,uVar5);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar2);
}

/* ref: FUN_00a51f70 */
uint F_00a51f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa51f70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 9;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52040 */
uint F_00a52040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52040u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xc;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52110 */
uint F_00a52110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_6;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 10;
  (*(undefined4 *)(gen_frame + 0x48)) = param_5;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a521e0 */
uint F_00a521e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa521e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_6;
  (*(undefined4 *)(gen_frame + 0x20)) = param_8;
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = param_5;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x4c)) = param_7;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xb;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a522b0 */
uint F_00a522b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa522b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x28)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined1 *)(gen_frame + 0x24)) = 1;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52340 */
uint F_00a52340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined1 *)(gen_frame + 0x24)) = (undefined1)param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1b3;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a523d0 */
uint F_00a523d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa523d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x40)) = param_3;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1a;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_4;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a524a0 */
uint F_00a524a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa524a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_1;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1c;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = param_2;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52560 */
uint F_00a52560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1b;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52620 */
uint F_00a52620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x34)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x18;
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a526e0 */
uint F_00a526e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa526e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x20)) = param_5;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 7;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x34)) = param_4;
  (*(undefined4 *)(gen_frame + 0x38)) = param_3;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  (*(undefined4 *)(gen_frame + 0x48)) = param_4;
  (*(undefined4 *)(gen_frame + 0x4c)) = param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a527b0 */
uint F_00a527b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa527b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0xd;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52870 */
uint F_00a52870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 4;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52930 */
uint F_00a52930(unsigned int gen_a0)
{
  GEN_ENTER(0xa52930u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = 0;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x14;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a529f0 */
uint F_00a529f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa529f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1e;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52ab0 */
uint F_00a52ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa52ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  (*(undefined4 *)(gen_frame + 0x20)) = param_6;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_5;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x1f;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52b80 */
uint F_00a52b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa52b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_7;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_3;
  uVar4 = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_4;
  (*(undefined4 *)(gen_frame + 0x3c)) = param_5;
  uVar3 = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x21;
  (*(undefined4 *)(gen_frame + 0x48)) = param_6;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52c50 */
uint F_00a52c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa52c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x20)) = param_3;
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = param_1;
  (*(undefined4 *)(gen_frame + 0x40)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1ae;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x40;
  (*(undefined1 *)(gen_frame + 0x24)) = 0x20;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined2 *)(gen_frame + 0x30)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined2 *)(gen_frame + 0x44)) = (undefined2)param_2;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974e00(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00a52d10 */
uint F_00a52d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  byte bVar4;
  int * this;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  this = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (int *)0x0;
  if (this == (int *)0x0) {
    return 0;
  }
  bVar4 = F_00a9f620(this);
  if (bVar4 != 0) {
    *(undefined4 *)&REFG(undefined, 0x14bcf64) = *(undefined4 *)(param_2 + 4);
    fVar13 = *(float *)(param_2 + 4);
    uVar7 = (uint)*param_2;
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    uVar5 = F_00ac3e10(uVar5,uVar7,fVar13);
    return uVar5;
  }
  uVar5 = F_00ab1ed0((uint)*param_2);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  if (uVar5 == 0) {
    return 0;
  }
  F_00b5ae60(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(this + 0x22),0);
  uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
  if (*(int *)(uVar5 + 0x4c) != 0) {
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    F_00ac99b0(this,*(undefined4 *)(uVar5 + 0x4c));
    uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
    if (uVar5 != 0) {
      uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
      F_00ac3da0(uVar5);
    }
  }
  if (*(int *)(param_2 + 6) != -0x20000000) {
    piVar6 = (int *)F_00a35490(&REFG(undefined4, 0x14a31f0),*(int *)(param_2 + 6));
    (*(int * PTR32 *)(gen_frame + 0x14)) = piVar6;
    if ((piVar6 != (int *)0x0) &&
       (uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xb8))(piVar6), (char)uVar5 != '\0')) {
      (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)(gen_frame + 0x14));
    }
  }
  if ((*(int *)(param_2 + 6) == REFG(int, 0x1379690)) && (*(char *)((*(uint *)(gen_frame + 0x18)) + 0x3a) == '\x01')) {
    F_0053f190(&REFG(undefined4, 0x1375bc0),this);
  }
  if ((*param_2 != 0x2dd) && (*param_2 != 0x2de)) {
    cVar1 = *(char *)((*(uint *)(gen_frame + 0x18)) + 0x1c);
    if (cVar1 == '\x02') {
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f6;
    }
    else if (cVar1 == '\x05') {
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f7;
    }
    else {
      if (cVar1 == '\b') goto LAB_00a52f0a;
      uVar5 = (uint)(byte)param_2[1];
      uVar12 = *(undefined4 *)(param_2 + 2);
      uVar11 = 0x1f5;
    }
    F_00a7d4b0(uVar11,this,(*(int * PTR32 *)(gen_frame + 0x1c)),uVar5,uVar12,0,0,0,0,REFG(float, 0x10916ec));
  }
LAB_00a52f0a: ;
  uVar12 = *(undefined4 *)(param_2 + 6);
  fVar13 = *(float *)(param_2 + 4);
  uVar7 = (uint)*param_2;
  uVar15 = 0;
  uVar14 = 0;
  uVar11 = 1;
  uVar5 = ((code *)*(gen_code32 *)(*this + 0xd8))(this);
  F_00ac3dd0(uVar5,uVar11,uVar7,fVar13,uVar12,uVar14,uVar15);
  F_00aa58e0(this,*(undefined4 *)(param_2 + 6));
  F_00aa46b0(this,(uint)(byte)param_2[1],*(undefined4 *)(param_2 + 2),param_2 + 0xc,
               *(float *)(param_2 + 8));
  uVar5 = (*(uint *)(gen_frame + 0x18));
  if (*(char *)((*(uint *)(gen_frame + 0x18)) + 0x1c) == '\v') {
    uVar2 = param_2[0xd];
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)param_2[0xc];
    uVar3 = param_2[0xe];
    fVar8 = (float10)*(double *)&REFG(undefined, 0x10a3960);
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)uVar2;
    uVar12 = *(undefined4 *)(param_2 + 10);
    fVar9 = (float10)*(double *)&REFG(undefined, 0x10928e8);
    fVar10 = (float10)*(double *)&REFG(undefined, 0x10912a8);
    (*(float *)(gen_frame + 0x0)) = ((float)GEN_TOF((((float10)param_2[0xc] * fVar8) * fVar9 - fVar10)));
    (*(int * PTR32 *)(gen_frame + 0x14)) = (int *)(uint)uVar3;
    (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF((((float10)uVar2 * fVar8) * fVar9 - fVar10)));
    (*(float *)(gen_frame + 0x8)) = ((float)GEN_TOF((fVar9 * ((float10)uVar3 * fVar8) - fVar10)));
    uVar5 = F_00ac3a60(&REFG(undefined, 0x14bcf40),uVar12,&(*(float *)(gen_frame + 0x0)),0);
  }
  return uVar5;
}

/* ref: FUN_00a52fd0 */
uint F_00a52fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa52fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int * piVar2;
  int * piVar3;
  ushort * puVar4;
  uint uVar5;
  undefined * pvVar6;
  undefined * this;
  int iVar7;
  int * piVar8;
  undefined4 * puVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_10;
  
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (1 < *(byte *)(param_2 + 0xe11)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x4e,0,0);
  }
  if (3 < *(byte *)(param_2 + 0xe11)) {
    F_00a6e080(&REFG(undefined, 0x14a9e40),0x5c,0,0);
  }
  bVar1 = *(byte *)(param_2 + 0xe11);
  if (REFG(undefined1, 0x1338ad4) == 8) {
    if ((bVar1 < 4) || (7 < bVar1)) goto LAB_00a5306e;
LAB_00a53057: ;
    uVar11 = 0x1d528;
  }
  else {
    if (bVar1 != 8) {
      if ((3 < REFG(undefined1, 0x1338ad4)) || (bVar1 < 4)) goto LAB_00a5306e;
      goto LAB_00a53057;
    }
    uVar11 = 0x1d529;
  }
  ((code *)*(gen_code32 *)(*piVar2 + 0xd8))(piVar2,uVar11,1,0,0xffffffff);
LAB_00a5306e: ;
  bVar10 = REFG(undefined1, 0x1338ad4) != *(byte *)(param_2 + 0xe11);
  REFG(undefined4, 0x1338ac0) = *(undefined4 *)(param_2 + 0xe00);
  REFG(undefined4, 0x1338ac4) = *(undefined4 *)(param_2 + 0xe04);
  REFG(undefined4, 0x1338ac8) = *(undefined4 *)(param_2 + 0xe08);
  REFG(undefined4, 0x1338acc) = *(undefined4 *)(param_2 + 0xe0c);
  REFG(undefined1, 0x1338ad4) = *(undefined1 *)(param_2 + 0xe11);
  REFG(undefined4, 0x1338ad0) = (uint)*(byte *)(param_2 + 0xe10);
  local_10 = 0;
  if (*(char *)(param_2 + 0xe11) != '\0') {
    piVar8 = (int *)(param_2 + 0x28);
    do {
      piVar3 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),local_10);
      if (*piVar8 != *piVar3) {
        bVar10 = true;
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      *piVar3 = *piVar8;
      piVar3[1] = piVar8[1];
      piVar3[2] = piVar8[-2];
      piVar3[3] = piVar8[-1];
      F_00c4d9ef(piVar3 + 4,0x40,piVar8 + -10,0x3f);
      *(undefined1 *)((int)piVar3 + 0x51) = *(undefined1 *)((int)piVar8 + 9);
      *(undefined1 *)(piVar3 + 0x14) = *(undefined1 *)((int)piVar8 + 10);
      *(undefined1 *)((int)piVar3 + 0x52) = *(undefined1 *)((int)piVar8 + 0xb);
      *(char *)((int)piVar3 + 0x53) = (char)piVar8[3];
      *(undefined1 *)(piVar3 + 0x15) = *(undefined1 *)((int)piVar8 + 0xd);
      piVar3[0x16] = piVar8[5];
      *(short *)(piVar3 + 0x18) = (short)piVar8[7];
      *(short *)(piVar3 + 0x19) = (short)piVar8[8];
      piVar3[0x17] = piVar8[6];
      *(undefined2 *)((int)piVar3 + 0x62) = *(undefined2 *)((int)piVar8 + 0x1e);
      *(undefined2 *)((int)piVar3 + 0x66) = *(undefined2 *)((int)piVar8 + 0x22);
      *(undefined1 *)(piVar3 + 0x1a) = *(undefined1 *)((int)piVar8 + 0xe);
      *(char *)((int)piVar3 + 0x69) = (char)piVar8[4];
      *(bool *)((int)piVar3 + 0x6a) = (char)piVar8[2] != '\0';
      *(undefined1 *)(piVar3 + 0x81) = *(undefined1 *)((int)piVar8 + 0xf);
      piVar3[0x82] = piVar8[9];
      piVar3[0x83] = piVar8[10];
      puVar4 = (ushort *)(piVar8 + 0xc);
      piVar3[0x84] = piVar8[0xb];
      iVar7 = 0;
      do {
        F_00b7b840(piVar3 + 0x1b,iVar7,(uint)*puVar4,(float)(float10)0,(uint)puVar4[1],0);
        puVar4 = puVar4 + 6;
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      iVar7 = 0;
      do {
        F_00b7b8a0(piVar3 + 0x85,iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1e);
      if ((char)piVar8[3] == '\0') {
        piVar3[0xe2] = 0;
        piVar3[0xe3] = 0;
      }
      local_10 = local_10 + 1;
      piVar8 = piVar8 + 0x70;
    } while (local_10 < (int)(uint)*(byte *)(param_2 + 0xe11));
  }
  uVar5 = F_00ae0850(&REFG(undefined, 0x1336e40),param_1);
  if (uVar5 != 0) {
    iVar7 = 0;
    puVar4 = (ushort *)(param_2 + 0xe16);
    do {
      F_00b7b840(uVar5 + 0x214,iVar7,(uint)puVar4[-1],(float)(float10)0,(uint)*puVar4,
                   *(undefined4 *)(puVar4 + 3));
      iVar7 = iVar7 + 1;
      puVar4 = puVar4 + 6;
    } while (iVar7 < 0x1e);
  }
  puVar9 = &REFG(undefined4, 0x14a9a1c);
  do {
    pvVar6 = (undefined *)*puVar9;
    if (pvVar6 != (undefined *)0x0) {
      bVar1 = F_00ae0910(&REFG(undefined, 0x1336e40),*(undefined4 *)((int)pvVar6 + 0x74));
      F_00aa6a30(pvVar6,(uint)bVar1);
    }
    puVar9 = puVar9 + 1;
  } while ((int)puVar9 < 0x14a9bac);
  if (bVar10) {
    pvVar6 = (undefined *)F_006b8c00();
    F_006de6b0(pvVar6);
  }
  uVar11 = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar2 + 0x44))(piVar2);
  this = (undefined *)F_00435440(uVar5,uVar11);
  pvVar6 = this;
  if ((this != (undefined *)0x0) && (iVar7 = 0, *(char *)(param_2 + 0xe11) != '\0')) {
    puVar9 = (undefined4 *)(param_2 + 0x20);
    do {
      F_00455780(this,*puVar9,puVar9[1],(uint)*(byte *)((int)puVar9 + 0x12),puVar9 + -8);
      pvVar6 = (undefined *)(uint)*(byte *)(param_2 + 0xe11);
      iVar7 = iVar7 + 1;
      puVar9 = puVar9 + 0x70;
    } while (iVar7 < (int)pvVar6);
  }
  return (uint)pvVar6;
}

/* ref: FUN_00a53340 */
uint F_00a53340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  ushort uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  int * in_EAX = 0;
  uint uVar6;
  int * this;
  float10 fVar7;
  float10 fVar8;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar6 = (uint)param_2[1];
    if (uVar6 == 6) {
      F_00ae3230(&REFG(undefined, 0x14c0878),*(undefined4 *)(param_2 + 4),0,0,(uint)*param_2);
      this = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      if (this == (int *)0x0) {
        return 0;
      }
      iVar2 = *(int *)(param_2 + 0x2c);
      in_EAX = (int *)this[0x6a];
      in_EAX[2] = *(int *)(param_2 + 0x28);
      in_EAX[3] = iVar2;
    }
    else if (uVar6 == 7) {
      F_00ae3330(&REFG(undefined, 0x14c0878),*(undefined4 *)(param_2 + 4),0,*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x18),(uint)*param_2);
      this = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      if (this == (int *)0x0) {
        return 0;
      }
      F_00a5f570(this,(uint)param_2[0x26]);
      F_00a5f530(this,*(undefined4 *)(param_2 + 0x10));
      this[0x21] = *(int *)(param_2 + 0x14);
      F_00a5f550(this,(uint)*(ushort *)(param_2 + 0x24));
      in_EAX = (int *)F_00ae2030(this,(uint)*(ushort *)(param_2 + 0x28));
      if (*(int *)(param_2 + 0x18) == 0) {
        in_EAX = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*this + 0x4c))(this,*(undefined4 *)(param_2 + 0x1c))));
      }
    }
    else {
      if (uVar6 - 0xb != 0) {
        return uVar6 - 0xb;
      }
      F_00ae39b0(&REFG(undefined, 0x14c0878),(uint)*param_2);
      in_EAX = (int *)F_00ae1300(&REFG(undefined, 0x14c0878),(uint)*param_2);
      this = in_EAX;
    }
    if (this != (int *)0x0) {
      fVar7 = (float10)*(float *)&REFG(undefined, 0x1334840);
      uVar1 = *(ushort *)(param_2 + 0x22);
      fVar4 = (float10)*(double *)&REFG(undefined, 0x1088118);
      fVar3 = (float10)REFG(double, 0x109cab0);
      fVar8 = (float10)*(double *)&REFG(undefined, 0x10928e8);
      fVar5 = (float10)*(double *)&REFG(undefined, 0x1080228);
      ((code *)*(gen_code32 *)(*this + 0x40))(this);
      ((code *)*(gen_code32 *)(*this + 0x48))
                (this,(undefined4)
                      gen_fl2bits(((float)GEN_TOF((((float10)uVar1 * ((fVar7 * fVar4) / fVar3)) * fVar8 -
                                         fVar5)))));
      F_00a5f450(this,*(undefined4 *)(param_2 + 8));
      F_00a5f430(this,*(undefined4 *)(param_2 + 0xc));
      *(byte *)((int)this + 0x8a) = param_2[1];
      in_EAX = *(int * PTR32 *)(param_2 + 4);
      this[0x20] = (int)in_EAX;
      if (param_2[1] == 0xb) {
        in_EAX = (int *)F_00ae22b0(this,*(float *)(param_2 + 0x1c));
      }
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a53550 */
uint F_00a53550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  undefined * this;
  undefined4 uVar3;
  
  F_00a7f520(&REFG(undefined1, 0x14ab070),param_2);
  F_00a7f9c0(&REFG(undefined, 0x14ab584),param_2);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
  this = (undefined *)F_00763050(uVar2,uVar3);
  uVar2 = 0;
  if (this != (undefined *)0x0) {
    uVar2 = F_00781660(this,*param_2,param_2[1]);
  }
  return uVar2;
}

/* ref: FUN_00a535a0 */
uint F_00a535a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa535a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  byte * pbVar3;
  int iVar4;
  
  iVar4 = REFG(int, 0x1379694);
  F_00a7e4e0(&REFG(undefined1, 0x14ab070),(uint)*param_2);
  F_00a7e510(&REFG(undefined1, 0x14ab070),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  if (iVar4 != 0) {
    F_00a7d290(0x231,iVar4,(uint)*param_2,0,0,REFG(float, 0x10916ec));
  }
  F_00a7e5a0(&REFG(undefined1, 0x14ab070),(uint)REFG(undefined2, 0x14ab148));
  iVar4 = 0;
  pbVar3 = param_2 + 8;
  do {
    F_00ac3300(&REFG(undefined, 0x14bcf40),iVar4,*(undefined4 *)pbVar3,(uint)(param_2[1] != 0),0);
    iVar4 = iVar4 + 1;
    pbVar3 = pbVar3 + 4;
  } while (iVar4 < 10);
  if (param_2[1] != 0) {
    F_00ac3520(&REFG(undefined, 0x14bcf40),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1,2,(uint)*param_2,0);
  }
  iVar4 = 0;
  do {
    uVar2 = F_00a68680(&REFG(undefined1, 0x14ab070),iVar4,(uint)param_2[iVar4 + 0x30]);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 6);
  if (param_2[1] != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xec))(piVar1,(uint)*param_2);
  }
  if (param_2[2] == 0) {
    uVar2 = F_00a6e4a0(&REFG(undefined, 0x14a9e40),(uint)*param_2,(uint)*(ushort *)(param_2 + 4));
  }
  return uVar2;
}

/* ref: FUN_00a536c0 */
uint F_00a536c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa536c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this;
  uint uVar2;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
    uVar2 = F_0045a500(this,param_2);
  }
  return uVar2;
}

/* ref: FUN_00a536f0 */
uint F_00a536f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa536f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  
  if (param_1 == -0x20000000) {
    uVar2 = 0;
  }
  else {
    uVar2 = F_00a354d0(&REFG(undefined4, 0x14a31f0),param_1,0);
  }
  if (REFG(int, 0x1379c70) != 3) {
    this = (undefined *)F_006b8c00();
    bVar1 = F_006b8c30(this,uVar2,param_2,param_3,param_4);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a53740 */
uint F_00a53740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa53740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  uint param_5 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1d0];
  byte bVar1;
  int * piVar2;
  int * piVar3;
  undefined * this;
  uint uVar4;
  char * pcVar5;
  int iVar6;
  ulonglong uVar7;
  
  (*(uint *)(gen_frame + 0x1c8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1cc);
  piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  piVar3 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2)));
  if (piVar3 == (int *)0x0) {
    F_00c472af(((undefined1 *)(gen_frame + 0xbc)),0x72,"Unknown(%llu)",param_2,param_3);
  }
  else {
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(param_2,param_3);
    F_00c472af(((undefined1 *)(gen_frame + 0xbc)),0x72,"%s(%llu)",uVar4);
  }
  F_00c472af(((undefined1 *)(gen_frame + 0x130)),0x96,"Name : %s",((undefined1 *)(gen_frame + 0xbc)));
  F_0042cc20(((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x130)),REFG(undefined4, 0x108cc50));
  F_0042cc20(((undefined1 *)(gen_frame + 0x68)),&REFG(undefined, 0x10e5472),REFG(undefined4, 0x108cc50));
  F_00459b00(this,1,((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x14)),0);
  F_0042c880(((undefined1 *)(gen_frame + 0x68)));
  uVar7 = F_0042c880(((undefined1 *)(gen_frame + 0x14)));
  uVar4 = (uint)uVar7;
  iVar6 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  if (param_5 != 0) {
    do {
      bVar1 = *(byte *)((*(uint *)(gen_frame + 0xc)) + param_4);
      uVar4 = 0;
      do {
        pcVar5 = "true";
        if ((bVar1 >> ((byte)uVar4 & 0x1f) & 1) == 0) {
          pcVar5 = "false";
        }
        F_00c472af(((undefined1 *)(gen_frame + 0x130)),0x96,"reward[%03u] : %s",iVar6,pcVar5);
        F_0042cc20(((undefined1 *)(gen_frame + 0x68)),((undefined1 *)(gen_frame + 0x130)),REFG(undefined4, 0x108cc50));
        F_0042cc20(((undefined1 *)(gen_frame + 0x14)),&REFG(undefined, 0x10e5473),REFG(undefined4, 0x108cc50));
        F_00459b00(this,1,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x68)),0);
        F_0042c880(((undefined1 *)(gen_frame + 0x14)));
        F_0042c880(((undefined1 *)(gen_frame + 0x68)));
        uVar4 = uVar4 + 1;
        iVar6 = iVar6 + 1;
      } while (uVar4 < 8);
      uVar4 = (*(uint *)(gen_frame + 0xc)) + 1;
      (*(uint *)(gen_frame + 0xc)) = uVar4;
    } while (uVar4 < param_5);
  }
  F_00c47745((*(uint *)(gen_frame + 0x1c8)) ^ (uint)(uint)(gen_frame + 0x1cc));
  return uVar4;
}

/* ref: FUN_00a53940 */
unsigned int F_00a53940(unsigned int gen_a0)
{
  GEN_ENTER(0xa53940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-2] == 0) {
      F_00406b30(puVar1 + -2);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 4) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 4) = 0;
  if (puVar1 != (undefined4 *)0x0) {
    if (puVar1[-1] == 0) {
      F_00406b30(puVar1 + -1);
    }
    else {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,3);
    }
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x298 + *(int *)((int)this + 0x24)))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x2a0;
    } while (uVar2 < *(uint *)((int)this + 0x28));
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((iVar3 + 0x20 + *(int *)((int)this + 0x34)))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *(uint *)((int)this + 0x38));
  }
  uVar2 = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  if (*(int *)((int)this + 0x48) != 0) {
    iVar3 = 0;
    do {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x44) + 0x20 + iVar3))) = 0;
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x28;
    } while (uVar2 < *(uint *)((int)this + 0x48));
  }
  return 0;
}

/* ref: FUN_00a53a10 */
uint F_00a53a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)((int)this + 0x14);
  if (uVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(uVar1 + 0x28);
  *(int *)((int)this + 0x14) = iVar2;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x24) = 0;
  }
  if (uVar1 != 0) {
    iVar2 = *(int *)((int)this + 0x20);
    *(undefined4 *)(uVar1 + 0x28) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(uVar1 + 0x24) = 0;
      *(uint *)((int)this + 0x1c) = uVar1;
    }
    else {
      *(int *)(uVar1 + 0x24) = iVar2;
      *((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x28))) = uVar1;
    }
    *(uint *)((int)this + 0x20) = uVar1;
    *(undefined4 *)(uVar1 + 0x10) = param_1;
    uVar3 = F_0046ff40();
    *(ulonglong *)(uVar1 + 8) = uVar3;
    *(undefined4 *)(uVar1 + 0x14) = 0;
    *(undefined4 *)(uVar1 + 0x18) = 0;
    *(undefined4 *)(uVar1 + 0x1c) = 0;
    *(undefined4 *)(uVar1 + 0x20) = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a53a80 */
uint F_00a53a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa53a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX = 0;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    while (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x54);
        *(int *)(param_1 + 0x14) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar2 + 0x50) = 0;
        }
        if (iVar1 == *(int *)(param_1 + 0x18)) {
          iVar2 = *(int *)(iVar1 + 0x50);
          *(int *)(param_1 + 0x18) = iVar2;
          if (iVar2 != 0) {
            *(undefined4 *)(iVar2 + 0x54) = 0;
          }
        }
        if (*(int *)(iVar1 + 0x50) != 0) {
          *(undefined4 *)(iVar1 + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x50) + 0x50)));
        }
        if (*(int *)(iVar1 + 0x54) != 0) {
          *(undefined4 *)(iVar1 + 0x54) = *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 0x54) + 0x54)));
        }
        iVar2 = *(int *)((int)this + 0xc);
        *(undefined4 *)(iVar1 + 0x54) = 0;
        if (iVar2 == 0) {
          *(undefined4 *)(iVar1 + 0x50) = 0;
          *(int *)((int)this + 8) = iVar1;
        }
        else {
          *(int *)(iVar1 + 0x50) = iVar2;
          *((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0x54))) = iVar1;
        }
        *(int *)((int)this + 0xc) = iVar1;
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
      }
      iVar1 = *(int *)(param_1 + 0x14);
    }
    if (param_1 == *(int *)((int)this + 0x1c)) {
      iVar1 = *(int *)(param_1 + 0x28);
      *(int *)((int)this + 0x1c) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x24) = 0;
      }
    }
    if (param_1 == *(int *)((int)this + 0x20)) {
      iVar1 = *(int *)(param_1 + 0x24);
      *(int *)((int)this + 0x20) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x28) = 0;
      }
    }
    if (*(int *)(param_1 + 0x24) != 0) {
      *(undefined4 *)(param_1 + 0x24) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x24) + 0x24)));
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      *(undefined4 *)(param_1 + 0x28) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x28) + 0x28)));
    }
    iVar1 = *(int *)((int)this + 0x18);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(int *)(param_1 + 0x24) = iVar1;
      uVar3 = *(uint *)((int)this + 0x18);
      *(int *)(uVar3 + 0x28) = param_1;
      *(int *)((int)this + 0x18) = param_1;
      return uVar3;
    }
    *(int *)((int)this + 0x18) = param_1;
    *(int *)((int)this + 0x14) = param_1;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    in_EAX = 0;
  }
  return in_EAX;
}

/* ref: FUN_00a53b70 */
byte F_00a53b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa53b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar4 = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  uVar3 = 0;
  puVar2 = &(*(undefined4 *)(gen_frame + 0x8));
  (*(undefined4 *)(gen_frame + 0x24)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 300;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
  (*(undefined1 *)(gen_frame + 0x28)) = (undefined1)param_3;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  bVar1 = F_00974dd0(this,puVar2,uVar3,uVar4);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar1;
}

/* ref: FUN_00a53c00 */
uint F_00a53c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa53c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x15ff0];
  uint * puVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  int * piVar5;
  uint uVar6;
  uint uVar7;
  undefined * pvVar8;
  undefined4 uVar9;
  
  (*(uint *)(gen_frame + 0x15fdc)) = 0xa53c20;
  (*(uint *)(gen_frame + 0x15fdc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  piVar3 = (int *)F_00e83c50();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e7b0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00f3d350(((undefined1 *)(gen_frame + 0x10010)));
    piVar3 = (int *)F_00e83c20(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x10010)));
    piVar3 = (int *)F_00e83c60();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar3 != (int *)0x0) {
      piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,0x16);
      piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 0x1c))(piVar3)));
      uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x28))(piVar3,0x14);
      if ((uVar4 != 0) && (uVar6 != 0)) {
        uVar7 = F_00aadfc0(&REFG(undefined, 0x14b5ef0),param_1);
        puVar1 = *(uint * PTR32 *)(uVar6 + 0x20);
        if (uVar7 != *puVar1) {
          *(undefined1 *)(uVar6 + 0x1d) = 1;
        }
        *puVar1 = uVar7;
        if (**(int * PTR32 *)(uVar4 + 0x20) != 0) {
          **(int * PTR32 *)(uVar4 + 0x20) = 0;
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) != (*(int *)(gen_frame + 0x15ab8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 4))) = (*(int *)(gen_frame + 0x15ab8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) != (*(int *)(gen_frame + 0x15abc))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 8))) = (*(int *)(gen_frame + 0x15abc));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) != (*(int *)(gen_frame + 0x15ac0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0xc))) = (*(int *)(gen_frame + 0x15ac0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) != (*(int *)(gen_frame + 0x15aa0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x10))) = (*(int *)(gen_frame + 0x15aa0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) != (*(int *)(gen_frame + 0x15aa8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x14))) = (*(int *)(gen_frame + 0x15aa8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) != (*(int *)(gen_frame + 0x15aa4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x18))) = (*(int *)(gen_frame + 0x15aa4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1c))) != (*(int *)(gen_frame + 0x15aac))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x1c))) = (*(int *)(gen_frame + 0x15aac));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20))) != (*(int *)(gen_frame + 0x15ab0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x20))) = (*(int *)(gen_frame + 0x15ab0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x24))) != (*(int *)(gen_frame + 0x15ab4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x24))) = (*(int *)(gen_frame + 0x15ab4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x28))) != (*(int *)(gen_frame + 0x15b30))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x28))) = (*(int *)(gen_frame + 0x15b30));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c))) != (*(int *)(gen_frame + 0x15b44))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x2c))) = (*(int *)(gen_frame + 0x15b44));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) != (*(int *)(gen_frame + 0x15b40))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x30))) = (*(int *)(gen_frame + 0x15b40));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x34))) != (*(int *)(gen_frame + 0x15b38))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x34))) = (*(int *)(gen_frame + 0x15b38));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x38))) != (*(int *)(gen_frame + 0x15b3c))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x38))) = (*(int *)(gen_frame + 0x15b3c));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x3c))) != (*(int *)(gen_frame + 0x15b34))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x3c))) = (*(int *)(gen_frame + 0x15b34));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40))) != (*(int *)(gen_frame + 0x15aec))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x40))) = (*(int *)(gen_frame + 0x15aec));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) != (*(int *)(gen_frame + 0x15af4))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x48))) = (*(int *)(gen_frame + 0x15af4));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x44))) != (*(int *)(gen_frame + 0x15af0))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x44))) = (*(int *)(gen_frame + 0x15af0));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x4c))) != (*(int *)(gen_frame + 0x15af8))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x4c))) = (*(int *)(gen_frame + 0x15af8));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x50))) != (*(int *)(gen_frame + 0x15b20))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x50))) = (*(int *)(gen_frame + 0x15b20));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5c))) != (*(int *)(gen_frame + 0x15b2c))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x5c))) = (*(int *)(gen_frame + 0x15b2c));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x54))) != (*(int *)(gen_frame + 0x15b24))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x54))) = (*(int *)(gen_frame + 0x15b24));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
        if (*((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58))) != (*(int *)(gen_frame + 0x15b28))) {
          *((int *)GEN_TOP((*(int *)(uVar4 + 0x20) + 0x58))) = (*(int *)(gen_frame + 0x15b28));
          *(undefined1 *)(uVar4 + 0x1d) = 1;
        }
      }
    }
    F_00f104c0(((undefined1 *)(gen_frame + 0x10010)));
    uVar4 = F_00e9e800(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84c10();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ef30(((undefined1 *)(gen_frame + 0x15ca8)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84be0(((undefined1 *)(gen_frame + 0x15ca8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84c20();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15ca8)));
    if (REFG(int, 0x14a7404) != (*(int *)(gen_frame + 0x15f64))) {
      REFG(int, 0x14a7404) = (*(int *)(gen_frame + 0x15f64));
    }
    if (REFG(int, 0x14a7408) != (*(int *)(gen_frame + 0x15f68))) {
      REFG(int, 0x14a7408) = (*(int *)(gen_frame + 0x15f68));
    }
    if (REFG(int, 0x14a740c) != (*(int *)(gen_frame + 0x15f6c))) {
      REFG(int, 0x14a740c) = (*(int *)(gen_frame + 0x15f6c));
    }
    if (REFG(int, 0x14a7414) != (*(int *)(gen_frame + 0x15f74))) {
      REFG(int, 0x14a7414) = (*(int *)(gen_frame + 0x15f74));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9ef90(((undefined1 *)(gen_frame + 0x15ca8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84d60();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9efe0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84d30(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84d70();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    if (REFG(int, 0x14a7418) != (*(int *)(gen_frame + 0x15f78))) {
      REFG(int, 0x14a7418) = (*(int *)(gen_frame + 0x15f78));
    }
    if (REFG(int, 0x14a741c) != (*(int *)(gen_frame + 0x15f7c))) {
      REFG(int, 0x14a741c) = (*(int *)(gen_frame + 0x15f7c));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9f030(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84eb0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9f080(((undefined1 *)(gen_frame + 0x15d48)));
    F_00edfd00(((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84e80(((undefined1 *)(gen_frame + 0x15d48)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,((undefined1 *)(gen_frame + 0x15f50)));
    piVar3 = (int *)F_00e84ec0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15d48)));
    if (REFG(int, 0x14a7420) != (*(int *)(gen_frame + 0x15f80))) {
      REFG(int, 0x14a7420) = (*(int *)(gen_frame + 0x15f80));
    }
    if (REFG(int, 0x14a7424) != (*(int *)(gen_frame + 0x15f84))) {
      REFG(int, 0x14a7424) = (*(int *)(gen_frame + 0x15f84));
    }
    F_00edfd30(((undefined1 *)(gen_frame + 0x15f50)));
    uVar4 = F_00e9f0d0(((undefined1 *)(gen_frame + 0x15d48)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84ac0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ee90(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e84a90(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84ad0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    bVar2 = REFG(undefined1, 0x14a9260);
    if ((char)REFG(undefined1, 0x14a9260) < '\0') {
      bVar2 = 0;
    }
    (*(undefined4 *)(gen_frame + 0x10008)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x10008)), 1, 3),bVar2);
    (*(uint *)(gen_frame + 0x1000c)) = param_1 & 0xffffff00;
    if (bVar2 != 0) {
      (*(uint *)(gen_frame + 0x1000c)) = CONCAT31((int3)(param_1 >> 8),(&REFG(undefined1, 0x14a9260))[bVar2]);
    }
    F_00a68910(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0x10008)));
    F_00a7e790(&REFG(undefined1, 0x14ab070),(*(undefined4 *)(gen_frame + 0x10008)),(*(uint *)(gen_frame + 0x1000c)));
    uVar9 = 0xc0;
    pvVar8 = (undefined *)F_006b8c00();
    F_006de4e0(pvVar8,uVar9);
    uVar4 = F_00e9eee0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e83da0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e850(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e83d70(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e83db0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    uVar4 = F_00e9e8a0(((undefined1 *)(gen_frame + 0x15e08)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84970();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9edf0(((undefined1 *)(gen_frame + 0x15c88)));
    piVar3 = (int *)F_00e84940(((undefined1 *)(gen_frame + 0x15c88)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84980();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15c88)));
    pvVar8 = (undefined *)F_006b8c00();
    F_0070f520(pvVar8);
    uVar4 = F_00e9ee40(((undefined1 *)(gen_frame + 0x15c88)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84820();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ed50(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e847f0(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84830();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    uVar4 = F_00e9eda0(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e83ef0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e8f0(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e83ec0(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e83f00();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    uVar4 = F_00e9e940(((undefined1 *)(gen_frame + 0x15e08)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84430();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9eb70(((undefined1 *)(gen_frame + 0x15dd8)));
    piVar3 = (int *)F_00e84400(((undefined1 *)(gen_frame + 0x15dd8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84440();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15dd8)));
    uVar4 = F_00e9ebc0(((undefined1 *)(gen_frame + 0x15dd8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e842e0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ead0(((undefined1 *)(gen_frame + 0x15dd8)));
    piVar3 = (int *)F_00e842b0(((undefined1 *)(gen_frame + 0x15dd8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e842f0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15dd8)));
    uVar4 = F_00e9eb20(((undefined1 *)(gen_frame + 0x15dd8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e846d0();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ecb0(((undefined1 *)(gen_frame + 0x15cb8)));
    piVar3 = (int *)F_00e846a0(((undefined1 *)(gen_frame + 0x15cb8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e846e0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15cb8)));
    uVar4 = F_00e9ed00(((undefined1 *)(gen_frame + 0x15cb8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84580();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ec10(((undefined1 *)(gen_frame + 0x15da8)));
    piVar3 = (int *)F_00e84550(((undefined1 *)(gen_frame + 0x15da8)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84590();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15da8)));
    uVar4 = F_00e9ec60(((undefined1 *)(gen_frame + 0x15da8)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84190();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9ea30(((undefined1 *)(gen_frame + 0x15d18)));
    piVar3 = (int *)F_00e84160(((undefined1 *)(gen_frame + 0x15d18)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e841a0();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15d18)));
    uVar4 = F_00e9ea80(((undefined1 *)(gen_frame + 0x15d18)));
    F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
    return uVar4;
  }
  piVar3 = (int *)F_00e84040();
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
  if (param_2 == uVar4) {
    F_00e9e990(((undefined1 *)(gen_frame + 0x15e08)));
    piVar3 = (int *)F_00e84010(((undefined1 *)(gen_frame + 0x15e08)));
    ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3,&REFG(undefined, 0x14a7470));
    piVar3 = (int *)F_00e84050();
    ((code *)*(gen_code32 *)(*piVar3 + 0x24))(piVar3,param_4,((undefined1 *)(gen_frame + 0x15e08)));
    F_00a66c00(&REFG(undefined, 0x14ab744),2);
    uVar4 = F_00e9e9e0(((undefined1 *)(gen_frame + 0x15e08)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x15fdc)) ^ (uint)(uint)(gen_frame + 0x0));
  return uVar4;
}

/* ref: FUN_00a54690 */
uint F_00a54690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  short sVar1;
  short sVar2;
  undefined * pvVar3;
  uint uVar4;
  undefined1 * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  undefined1 * puVar8;
  int iVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  puVar6 = (undefined1 *)(param_1 + 3);
  (*(int *)(gen_frame + 0x4)) = 0;
  puVar5 = &REFG(undefined1, 0x14a882a);
  do {
    puVar7 = puVar5 + -6;
    F_00f00b60(((undefined1 *)(gen_frame + 0x8)),puVar7);
    sVar2 = (*(short *)(gen_frame + 0xc));
    sVar1 = *(short *)(puVar6 + -3);
    if ((*(short *)(gen_frame + 0xc)) == 0) {
      if (sVar1 != 0) {
LAB_00a546ed: ;
        *(short *)(puVar5 + -2) = sVar1;
        *puVar5 = puVar6[-1];
        puVar5[1] = *puVar6;
        puVar5[2] = puVar6[1];
        puVar5[3] = puVar6[2];
        puVar5[4] = puVar6[3];
        puVar5[5] = puVar6[4];
        puVar5[6] = puVar6[5];
        puVar8 = ((undefined1 *)(gen_frame + 0x8));
        puVar5[7] = puVar6[6];
        iVar9 = (*(int *)(gen_frame + 0x4));
        pvVar3 = (undefined *)F_006b8c00();
        F_00703900(pvVar3,puVar7,puVar8,iVar9);
        if (sVar2 == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + 1;
        }
        else if (*(short *)(puVar6 + -3) == 0) {
          *(int *)&REFG(undefined, 0x14a73d4) = *(int *)&REFG(undefined, 0x14a73d4) + -1;
        }
      }
    }
    else if (((*(short *)(gen_frame + 0xc)) == sVar1) || (sVar1 == 0)) goto LAB_00a546ed;
    F_00ef87b0(((undefined1 *)(gen_frame + 0x8)));
    (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
    puVar6 = puVar6 + 10;
    puVar5 = puVar5 + 0x10;
    if (0x1d < (ushort)(*(int *)(gen_frame + 0x4))) {
      if (REFG(char, 0x14a73d2) == '\0') {
        REFG(char, 0x14a73d2) = '\x01';
        pvVar3 = (undefined *)F_006b8c00();
        F_006e5e00(pvVar3);
      }
      REFG(undefined4, 0x14a458f) = 1;
      uVar4 = F_00a679e0(&REFG(undefined, 0x14ac288));
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar4 == 1) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 1;
      }
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00a547d0 */
uint F_00a547d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa547d0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  ushort uVar1;
  undefined * this;
  int iVar2;
  uint uVar3;
  undefined1 * puVar4;
  ushort * puVar5;
  undefined1 * puVar6;
  undefined1 * puVar7;
  
  (*(int *)(gen_frame + 0x18)) = 0;
  puVar4 = &REFG(undefined1, 0x14a8afa);
  puVar5 = param_1;
  do {
    puVar6 = puVar4 + -6;
    F_00e781d0(((undefined1 *)(gen_frame + 0x4)),puVar6);
    (*(uint *)(gen_frame + 0x14)) = (uint)(*(ushort *)(gen_frame + 0x8));
    uVar1 = *puVar5;
    if ((*(ushort *)(gen_frame + 0x8)) == 0) {
      if (uVar1 != 0) {
LAB_00a5481f: ;
        *(ushort *)(puVar4 + -2) = uVar1;
        *puVar4 = (char)puVar5[1];
        *(ushort *)(puVar4 + 2) = puVar5[2];
        *(ushort *)(puVar4 + 4) = puVar5[3];
        puVar7 = ((undefined1 *)(gen_frame + 0x4));
        puVar4[6] = (char)puVar5[4];
        iVar2 = (*(int *)(gen_frame + 0x18));
        this = (undefined *)F_006b8c00();
        F_0070e450(this,puVar6,puVar7,iVar2);
        if ((short)(*(uint *)(gen_frame + 0x14)) == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + 1;
        }
        else if (*puVar5 == 0) {
          *(int *)&REFG(undefined, 0x14a73dc) = *(int *)&REFG(undefined, 0x14a73dc) + -1;
        }
      }
    }
    else if (((*(ushort *)(gen_frame + 0x8)) == uVar1) || (uVar1 == 0)) goto LAB_00a5481f;
    F_00e6ced0(((undefined1 *)(gen_frame + 0x4)));
    iVar2 = (*(int *)(gen_frame + 0x18)) + 1;
    puVar5 = puVar5 + 5;
    puVar4 = puVar4 + 0x10;
    (*(int *)(gen_frame + 0x18)) = iVar2;
    if (0xf < (ushort)iVar2) {
      if (REFG(char, 0x14a73d9) == '\0') {
        REFG(char, 0x14a73d9) = '\x01';
        F_006b8c00();
        F_006b8cd0();
      }
      uVar3 = F_00a679e0(&REFG(undefined, 0x14ac288));
      REFG(undefined4, 0x14b0ee0) = 1;
      if (uVar3 == 2) {
        *(undefined4 *)&REFG(undefined, 0x14afd2c) = 2;
      }
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_00a548d0 */
uint F_00a548d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa548d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined1 gen_out[0x4];
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  uVar2 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  this = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
  uVar3 = 0;
  if (this != (undefined *)0x0) {
    F_00aa39d0(this,(uint)(*param_2 & 1));
    F_00aa9000(this,(uint)(*param_2 >> 1 & 1));
    F_00aa1720(this,(uint)(*param_2 >> 2 & 1));
    bVar1 = F_00a9f620(this);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined2, 0x14b4eb8) = *(undefined2 *)param_2;
      uVar3 = CONCAT22((short)((uint3)extraout_var >> 8),REFG(undefined2, 0x14b4eb8));
    }
  }
  F_00c47745(uVar2 ^ (uint)(uint)(gen_out + 0x0));
  return uVar3;
}

/* ref: FUN_00a54950 */
uint F_00a54950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint * puVar5;
  uint * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1aa) {
    uVar3 = *(uint *)((int)this + 0x1c);
    if (uVar3 != 0) {
      do {
        if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54a40;
        uVar3 = *(uint *)(uVar3 + 0x28);
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54a40: ;
      uVar2 = *(uint *)(param_2 + 0x10);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      uVar1 = *(uint *)(param_2 + 0x14);
      ((uint *)(gen_frame + 0x8))[0] = uVar2;
      ((uint *)(gen_frame + 0x8))[1] = uVar1;
      *(uint *)(uVar3 + 0x20) = uVar1 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar3 + 0x20) <= *(int *)(uVar3 + 0x1c)) {
        F_00a3b630(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
        uVar2 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3);
      }
    }
  }
  else {
    uVar2 = *(ushort *)(param_2 + 2) - 0x1ab;
    if (uVar2 == 0) {
      uVar3 = *(uint *)((int)this + 0x1c);
      if (uVar3 != 0) {
        do {
          if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) {
            (*(uint *)(gen_frame + 0x4c)) = uVar3;
            goto LAB_00a549b7;
          }
          uVar3 = *(uint *)(uVar3 + 0x28);
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a549b7: ;
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
        puVar5 = (uint *)(param_2 + 0x10);
        puVar6 = ((uint *)(gen_frame + 0x8));
        for (iVar4 = 0x10; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar3,((uint *)(gen_frame + 0x0)));
        uVar3 = (*(uint *)(gen_frame + 0x4c));
        uVar2 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c))) {
          F_00a3b630(&REFG(undefined, 0x14a4230),*(undefined4 *)((*(uint *)(gen_frame + 0x4c)) + 0x14));
          uVar3 = F_00a53a80(this_00,uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00a54a90 */
uint F_00a54a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1ac) {
    uVar3 = *(uint *)((int)this + 0x1c);
    if (uVar3 != 0) {
      do {
        if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54b8b;
        uVar3 = *(uint *)(uVar3 + 0x28);
      } while (uVar3 != 0);
    }
    uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar2 = 0;
    if (uVar3 != 0) {
LAB_00a54b8b: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar2 = *(uint *)(param_2 + 0x14);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x10);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      (*(uint *)(gen_frame + 0xc)) = uVar2;
      *(uint *)(uVar3 + 0x20) = uVar2 & 0xff;
      uVar2 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar3 + 0x20) <= *(int *)(uVar3 + 0x1c)) {
        F_00a3b5a0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
        uVar2 = F_00a53a80(this_00,uVar3);
      }
    }
  }
  else {
    uVar2 = *(ushort *)(param_2 + 2) - 0x1ad;
    if (uVar2 == 0) {
      uVar3 = *(uint *)((int)this + 0x1c);
      if (uVar3 != 0) {
        do {
          if (*(int *)(uVar3 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54af3;
          uVar3 = *(uint *)(uVar3 + 0x28);
        } while (uVar3 != 0);
      }
      uVar3 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
      uVar2 = 0;
      if (uVar3 != 0) {
LAB_00a54af3: ;
        (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x10);
        uVar1 = *(undefined4 *)(param_2 + 0x18);
        ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
        (*(undefined4 *)(gen_frame + 0x10)) = uVar1;
        (*(uint *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0x14);
        (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0x20);
        (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x1c);
        (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 + 0x24);
        F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3,((uint *)(gen_frame + 0x0)));
        uVar2 = *(uint *)(uVar3 + 0x20);
        if ((uVar2 != 0xffffffff) && ((int)uVar2 <= *(int *)(uVar3 + 0x1c))) {
          F_00a3b5a0(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar3 + 0x14));
          uVar3 = F_00a53a80((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar3);
          return uVar3;
        }
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Network::PacketQue::vf1 */
uint F_00a54be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  undefined * this_00;
  uint uVar11;
  
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  if (*(ushort *)(param_2 + 2) == 0x1b1) {
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a54cdb;
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54cdb: ;
    this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48));
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    ((undefined4 *)(gen_frame + 0x8))[0] = uVar2;
    ((undefined4 *)(gen_frame + 0x8))[2] = uVar4;
    ((undefined4 *)(gen_frame + 0x8))[1] = uVar3;
    ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_2 + 0x1c);
    *(uint *)(uVar5 + 0x20) = (uint)*(byte *)(param_2 + 0x1a);
    uVar7 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    if (*(int *)(uVar5 + 0x1c) < *(int *)(uVar5 + 0x20)) {
      return uVar7;
    }
    uVar11 = *(uint *)(uVar5 + 0x14);
  }
  else {
    uVar5 = *(ushort *)(param_2 + 2) - 0x1b2;
    if (uVar5 != 0) {
      return uVar5;
    }
    uVar5 = *(uint *)(this + 0x1c);
    if (uVar5 != 0) {
      do {
        if (*(int *)(uVar5 + 0x10) == *(int *)(param_2 + 0x10)) {
          (*(uint *)(gen_frame + 0x4c)) = uVar5;
          goto LAB_00a54c47;
        }
        uVar5 = *(uint *)(uVar5 + 0x28);
      } while (uVar5 != 0);
    }
    uVar5 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    (*(uint *)(gen_frame + 0x4c)) = uVar5;
    if (uVar5 == 0) {
      return 0;
    }
LAB_00a54c47: ;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
    puVar9 = (undefined4 *)(param_2 + 0x10);
    puVar10 = ((undefined4 *)(gen_frame + 0x8));
    for (iVar8 = 0xc; this_00 = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x48)),uVar5,((uint *)(gen_frame + 0x0)));
    uVar5 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
    if (uVar5 == 0xffffffff) {
      return 0xffffffff;
    }
    if (*(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c) < (int)uVar5) {
      return uVar5;
    }
    uVar11 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x14);
    uVar6 = uVar11;
    uVar5 = (*(uint *)(gen_frame + 0x4c));
    uVar7 = 0;
    if (uVar11 != 0) {
      do {
        uVar7 = uVar6;
        if (*(int *)(uVar6 + 8) == 0x1b1) goto LAB_00a54d1d;
        puVar1 = (uint *)(uVar6 + 0x54);
        uVar6 = *puVar1;
      } while (*puVar1 != 0);
      uVar7 = 0;
    }
  }
LAB_00a54d1d: ;
  F_00a47b20(&REFG(undefined, 0x14a4230),uVar11,uVar7);
  uVar5 = F_00a53a80(this_00,uVar5);
  return uVar5;
}

/* ref: FUN_00a54d40 */
uint F_00a54d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa54d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  uVar3 = *(uint *)((int)this + 0x1c);
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = this;
  for (; uVar3 != 0; uVar3 = *(uint *)(uVar3 + 0x28)) {
    if (*(int *)(uVar3 + 0x10) == param_2) {
      (*(uint *)(gen_frame + 0x4c)) = uVar3;
      goto LAB_00a54d8f;
    }
  }
  uVar3 = F_00a53a10(this,param_2);
  (*(uint *)(gen_frame + 0x4c)) = uVar3;
  if (uVar3 == 0) {
    return 0;
  }
LAB_00a54d8f: ;
  uVar3 = (uint)*(ushort *)(param_3 + 2);
  ((uint *)(gen_frame + 0x0))[0] = uVar3;
  if (uVar3 == 0x1af) {
    puVar5 = (undefined4 *)(param_3 + 0x10);
    iVar4 = 0x10;
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  else {
    if (uVar3 != 0x1b3) {
      if (uVar3 == 0x1b7) {
        uVar1 = *(undefined4 *)(param_3 + 0x14);
        ((undefined4 *)(gen_frame + 0x8))[0] = *(undefined4 *)(param_3 + 0x10);
        ((undefined4 *)(gen_frame + 0x8))[1] = uVar1;
        ((undefined4 *)(gen_frame + 0x8))[2] = *(undefined4 *)(param_3 + 0x18);
        ((undefined4 *)(gen_frame + 0x8))[3] = *(undefined4 *)(param_3 + 0x1c);
      }
      goto LAB_00a54de6;
    }
    iVar4 = 8;
    puVar5 = (undefined4 *)(param_3 + 0x10);
    puVar6 = ((undefined4 *)(gen_frame + 0x8));
  }
  for (; this = (*(undefined * PTR32 *)(gen_frame + 0x48)), iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
LAB_00a54de6: ;
  F_00a4fee0(this,(*(uint *)(gen_frame + 0x4c)),((uint *)(gen_frame + 0x0)));
  uVar2 = (*(uint *)(gen_frame + 0x4c));
  uVar3 = *(uint *)((*(uint *)(gen_frame + 0x4c)) + 0x20);
  if ((uVar3 != 0xffffffff) && ((int)uVar3 <= *(int *)((*(uint *)(gen_frame + 0x4c)) + 0x1c))) {
    F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)((*(uint *)(gen_frame + 0x4c)) + 0x14),param_1);
    uVar3 = F_00a53a80(this,uVar2);
  }
  return uVar3;
}

/* ref: FUN_00a54e30 */
unsigned int F_00a54e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  undefined4 * in_edi;
  uint local_8;
  
  local_8 = 0;
  if (param_1 != 0) {
    do {
      if (*(uint *)((int)this + 0x2c) == *(uint *)((int)this + 0x30)) {
        return 0;
      }
      uVar1 = *(uint *)((int)this + 0x2c);
      while( true ) {
        uVar2 = (*(int *)((int)this + 0x2c) + 1U) % *(uint *)((int)this + 0x28);
        *(uint *)((int)this + 0x2c) = uVar2;
        if (*((char *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) != '\0') break;
        uVar1 = uVar2;
        if (uVar2 == *(uint *)((int)this + 0x30)) {
          return 0;
        }
      }
      *((undefined1 *)GEN_TOP((uVar1 * 0x2a0 + 0x298 + *(int *)((int)this + 0x24)))) = 0;
      in_edi = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + uVar1 * 0x2a0)));
      if (REFG(int, 0x1379c70) == 3) {
        return 0;
      }
      this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),in_edi,*in_edi,(uint)*(byte *)((int)in_edi + 0x3b))
      ;
      if (this_00 != (undefined *)0x0) {
        F_00aac200(this_00,in_edi + 4);
      }
      local_8 = local_8 + 1;
    } while (local_8 < param_1);
  }
  return 0;
}

/* ref: FUN_00a54f07 */
byte F_00a54f07(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa54f07u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int in_ebp = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * this;
  uint * puVar1;
  undefined * this_00;
  uint uVar2;
  int * in_edi;
  
  this = (int *)(in_ecx + 0x24);
  F_00a5e350(this,in_ebp + -8);
  uVar2 = *(uint *)(in_ebp + -8);
  if (uVar2 != 0xffffffff) {
    in_edi = *(int * PTR32 *)(in_ebp + -4);
    do {
      if (*in_edi == *(int *)(in_ebp + 8)) {
        this_00 = (undefined *)F_00a64860(&REFG(undefined, 0x14a9a18),in_edi,*in_edi,
                                     (uint)*(byte *)((int)in_edi + 0x3b));
        if (this_00 != (undefined *)0x0) {
          F_00aac200(this_00,in_edi + 4);
        }
        if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(in_ecx + 0x28))) {
          *(undefined1 *)(uVar2 * 0x2a0 + 0x298 + *this) = 0;
        }
        return 1;
      }
      puVar1 = (uint *)F_00a5e3d0(this,in_ebp + -0x10,in_ebp + -8);
      uVar2 = *puVar1;
      in_edi = (int *)puVar1[1];
      *(uint *)(in_ebp + -8) = uVar2;
      *(int * PTR32 *)(in_ebp + -4) = in_edi;
    } while (uVar2 != 0xffffffff);
  }
  return 0;
}

/* ref: FUN_00a54fa0 */
uint F_00a54fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa54fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  uint uVar1;
  int * piVar2;
  
  this_00 = (int *)((int)this + 0x24);
  F_00a5e350(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar1 = (*(uint *)(gen_frame + 0x4));
  piVar2 = (*(int * PTR32 *)(gen_frame + 0x8));
  if ((*(uint *)(gen_frame + 0x4)) != 0xffffffff) {
    do {
      if (((*piVar2 == param_1) && (-1 < (int)uVar1)) && (uVar1 < *(uint *)((int)this + 0x28))) {
        *(undefined1 *)(uVar1 * 0x2a0 + 0x298 + *this_00) = 0;
      }
      if (uVar1 != *(uint *)((int)this + 0x30)) {
        do {
          uVar1 = (uVar1 + 1) % *(uint *)((int)this + 0x28);
          if (*(char *)(uVar1 * 0x2a0 + 0x298 + *this_00) != '\0') {
            piVar2 = (int *)(uVar1 * 0x2a0 + *this_00);
            goto LAB_00a55014;
          }
        } while (uVar1 != *(uint *)((int)this + 0x30));
      }
      uVar1 = 0xffffffff;
      piVar2 = (int *)0x0;
LAB_00a55014: ;
    } while (uVar1 != 0xffffffff);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00a55030 */
unsigned int F_00a55030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte * pbVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  undefined4 * puVar9;
  byte bVar10;
  undefined * this_00;
  uint uVar11;
  uint uVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x28)) = 0;
  if (param_1 != 0) {
    (*(undefined * PTR32 *)(gen_frame + 0x24)) = (undefined *)((int)this + 0x34);
    do {
      F_00a5e4b0((*(undefined * PTR32 *)(gen_frame + 0x24)),&(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
      puVar9 = (*(undefined4 * PTR32 *)(gen_frame + 0x14));
      if ((*(char *)(gen_frame + 0x18)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x19)) != '\0') {
        pbVar1 = (byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x14)) + 4);
        this_00 = (undefined *)F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x14)));
        if (this_00 != (undefined *)0x0) {
          uVar11 = puVar9[2];
          (*(uint *)(gen_frame + 0xc)) = uVar11;
          (*(int *)(gen_frame + 0x10)) = puVar9[3];
          uVar8 = *(uint *)((int)this_00 + 0xf8);
          uVar12 = (puVar9[3] - *(int *)((int)this_00 + 0xfc)) -
                   (uint)(uVar11 < *(uint *)((int)this_00 + 0xf8));
          bVar10 = F_00a611f0(this_00,0,&(*(uint *)(gen_frame + 0xc)));
          if (bVar10 != 0) {
            fVar2 = ((float)GEN_TOF(((-(float10)(longlong)(((ulonglong)uVar12 & 0x80000000) << 0x20) +
                            ((float10)GEN_TOD((CONCAT44(uVar12,uVar11 - uVar8) & 0x7fffffffffffffff)))) /
                           (float10)*(double *)&REFG(undefined, 0x10912a8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            fVar13 = F_00a9f650(this_00,fVar2,pbVar1);
            (*(float *)(gen_frame + 0x1c)) = (float)fVar13;
            (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)*(byte *)(puVar9 + 5));
            fVar14 = ((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                     (float10)*(double *)&REFG(undefined, 0x1088100);
            fVar2 = ((float)GEN_TOF(((float10)*(byte *)(puVar9 + 5) / (float10)REFG(double, 0x10944b8))));
            (*(float *)(gen_frame + 0x20)) = fVar2;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(byte *)((int)puVar9 + 0x11));
            uVar11 = (uint)*pbVar1;
            fVar15 = (float10)*(double *)&REFG(undefined, 0x10928e8);
            fVar3 = ((float)GEN_TOF((((float10)*(byte *)((int)puVar9 + 0x11) * fVar14) * fVar15 -
                           (float10)*(double *)&REFG(undefined, 0x1080228))));
            (*(float *)(gen_frame + 0x1c)) = fVar3;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f(uVar11);
            fVar4 = ((float)GEN_TOF((((float10)uVar11 * fVar14) * fVar15 - (float10)*(double *)&REFG(undefined, 0x1080228))))
            ;
            (*(float *)(gen_frame + 0x1c)) = fVar4;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x1a));
            fVar14 = (float10)*(double *)&REFG(undefined, 0x10a3960);
            fVar16 = (float10)*(double *)&REFG(undefined, 0x10912a8);
            fVar5 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x1a) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar5;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)(puVar9 + 6));
            fVar6 = ((float)GEN_TOF((((float10)*(ushort *)(puVar9 + 6) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar6;
            (*(float *)(gen_frame + 0x1c)) = gen_bits2f((uint)*(ushort *)((int)puVar9 + 0x16));
            fVar7 = ((float)GEN_TOF((((float10)*(ushort *)((int)puVar9 + 0x16) * fVar14) * fVar15 - fVar16)));
            (*(float *)(gen_frame + 0x1c)) = fVar7;
            F_00a9f6d0(this_00,fVar7,fVar6,fVar5,fVar4,fVar3,(uint)*(byte *)((int)puVar9 + 0x12),
                         (uint)*(byte *)((int)puVar9 + 0x13),(float)fVar13,fVar2);
          }
        }
      }
      uVar11 = (*(uint *)(gen_frame + 0x28)) + 1;
      (*(uint *)(gen_frame + 0x28)) = uVar11;
    } while (uVar11 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55210 */
unsigned int F_00a55210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      F_00a5e680((undefined *)((int)this + 0x44),&(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
      puVar1 = (*(undefined4 * PTR32 *)(gen_frame + 0x4));
      if ((*(char *)(gen_frame + 0x8)) == '\0') {
        return 0;
      }
      if ((*(char *)(gen_frame + 0x9)) != '\0') {
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a));
        fVar4 = (float10)*(double *)&REFG(undefined, 0x10a3960);
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7));
        fVar5 = (float10)*(double *)&REFG(undefined, 0x10928e8);
        fVar6 = (float10)*(double *)&REFG(undefined, 0x10912a8);
        (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1a) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e));
        (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 7) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = gen_bits2f((uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4));
        (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((float10)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 0x1e) * fVar4) * fVar5 - fVar6)));
        (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((((float10)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x4)) + 4) *
                          (((float10)*(float *)&REFG(undefined, 0x1334840) * (float10)*(double *)&REFG(undefined, 0x1088118)) /
                          (float10)REFG(double, 0x109cab0))) * fVar5 - (float10)*(double *)&REFG(undefined, 0x1080228))));
        uVar2 = F_00a64450(&REFG(undefined, 0x14a9a18),*(*(undefined4 * PTR32 *)(gen_frame + 0x4)));
        if (uVar2 != 0) {
          F_00a9f750(uVar2,(*(float *)(gen_frame + 0xc)),(*(float *)(gen_frame + 0x10)),(*(float *)(gen_frame + 0x14)),(*(float *)(gen_frame + 0x18)),GEN_TOF(gen_bits2f(puVar1[5])),
                       (uint)*(byte *)(puVar1 + 6));
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return 0;
}

/* ref: FUN_00a55330 */
uint F_00a55330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  F_00a5e350((int *)((int)this + 0x24),&(*(uint *)(gen_frame + 0x4)));
  uVar2 = (*(uint *)(gen_frame + 0x4));
  piVar3 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5534d: ;
  do {
    if (uVar2 == 0xffffffff) {
      return 0;
    }
    if (*piVar3 == param_1) {
      return (uint)(piVar3 + 4);
    }
    if (uVar2 != *(uint *)((int)this + 0x30)) {
      iVar1 = *(int *)((int)this + 0x24);
      do {
        uVar2 = (uVar2 + 1) % *(uint *)((int)this + 0x28);
        if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
          piVar3 = (int *)(uVar2 * 0x2a0 + iVar1);
          goto joined_r0x00a5534d;
        }
      } while (uVar2 != *(uint *)((int)this + 0x30));
    }
    uVar2 = 0xffffffff;
    piVar3 = (int *)0x0;
  } while( true );
}

/* ref: FUN_00a553c0 */
uint F_00a553c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa553c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x34);
  piVar2 = (int *)F_00a5e530(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a553db: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x38))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x40)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x38);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a553db;
        }
      } while (uVar3 != *(uint *)((int)this + 0x40));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a55440 */
uint F_00a55440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  this_00 = (int *)((int)this + 0x44);
  piVar2 = (int *)F_00a5e700(this_00,&(*(uint *)(gen_frame + 0x4)));
  uVar3 = (*(uint *)(gen_frame + 0x4));
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x8));
joined_r0x00a5545b: ;
  do {
    if (uVar3 == 0xffffffff) {
      return (uint)piVar2;
    }
    if (((*piVar1 == param_1) && (-1 < (int)uVar3)) && (uVar3 < *(uint *)((int)this + 0x48))) {
      *(undefined1 *)(*this_00 + 0x20 + uVar3 * 0x28) = 0;
    }
    if (uVar3 != *(uint *)((int)this + 0x50)) {
      do {
        uVar3 = (uVar3 + 1) % *(uint *)((int)this + 0x48);
        if (*(char *)(*this_00 + 0x20 + uVar3 * 0x28) != '\0') {
          piVar2 = (int *)(*this_00 + uVar3 * 0x28);
          piVar1 = piVar2;
          goto joined_r0x00a5545b;
        }
      } while (uVar3 != *(uint *)((int)this + 0x50));
    }
    uVar3 = 0xffffffff;
    piVar2 = (int *)0x0;
    piVar1 = piVar2;
  } while( true );
}

/* ref: FUN_00a554c0 */
uint F_00a554c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa554c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  uint uVar2;
  
  if (REFG(int, 0x1379c70) != 3) {
    uVar1 = F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    if (uVar1 == 0) {
      uVar1 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar1 != 0) {
        *(undefined4 *)(uVar1 + 0x6c) = *param_2;
        *(undefined2 *)(uVar1 + 0x72) = *(undefined2 *)((int)param_2 + 6);
        uVar2 = F_00ab21a0((uint)*(byte *)(uVar1 + 0x6b));
        if (*(int *)(uVar2 + 0x10) == 0x20) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 2);
        }
        else if (*(int *)(uVar2 + 0x10) != 0x21) {
          *(undefined2 *)(uVar1 + 0x70) = *(undefined2 *)(param_2 + 1);
        }
      }
    }
    else {
      *(undefined4 *)(uVar1 + 0x1690) = *param_2;
      *(uint *)(uVar1 + 0x1698) = (uint)*(ushort *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 0x16a2) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(uVar1 + 0x16a0) = *(undefined2 *)((int)param_2 + 6);
    }
    uVar1 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar1 != 0) {
      *(undefined4 *)(uVar1 + 0x58) = *param_2;
      *(undefined2 *)(uVar1 + 0x60) = *(undefined2 *)(param_2 + 1);
      *(undefined2 *)(uVar1 + 100) = *(undefined2 *)((int)param_2 + 6);
    }
    in_EAX = F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != 0) {
      *(undefined4 *)(in_EAX + 0x20c) = *param_2;
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *param_2;
    }
  }
  return in_EAX;
}

/* ref: FUN_00a555b0 */
uint F_00a555b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa555b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte bVar4;
  int * in_EAX = 0;
  int * piVar5;
  uint uVar6;
  undefined * this;
  byte * pbVar7;
  undefined4 * puVar8;
  undefined2 uVar9;
  int iVar10;
  ushort * puVar11;
  uint local_c;
  uint local_8;
  
  if (REFG(int, 0x1379c70) != 3) {
    piVar5 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),param_1);
    uVar9 = 0;
    uVar2 = 0;
    uVar1 = 0;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    uVar6 = F_00ab21a0((uint)*param_2);
    if (*(int *)(uVar6 + 0x10) == 0x20) {
      uVar3 = *(undefined2 *)(param_2 + 0xe);
      uVar9 = *(undefined2 *)(param_2 + 0xc);
    }
    else if (*(int *)(uVar6 + 0x10) == 0x21) {
      uVar1 = *(undefined2 *)(param_2 + 0xc);
      uVar2 = *(undefined2 *)(param_2 + 0xe);
    }
    else {
      local_8 = (uint)*(ushort *)(param_2 + 0xc);
      local_c = (uint)*(ushort *)(param_2 + 0xe);
    }
    if (piVar5 == (int *)0x0) {
      uVar6 = F_00a55330(&REFG(undefined * PTR32, 0x1334920),param_1);
      if (uVar6 != 0) {
        *(byte *)(uVar6 + 0x6a) = param_2[1];
        *(byte *)(uVar6 + 0x6b) = *param_2;
        *(undefined4 *)(uVar6 + 0x6c) = *(undefined4 *)(param_2 + 4);
        *(undefined4 *)(uVar6 + 0x74) = *(undefined4 *)(param_2 + 8);
        *(undefined2 *)(uVar6 + 0x70) = *(undefined2 *)(param_2 + 0xc);
        *(undefined2 *)(uVar6 + 0x78) = *(undefined2 *)(param_2 + 0xe);
        *(undefined2 *)(uVar6 + 0x72) = *(undefined2 *)(param_2 + 0x10);
        puVar8 = (undefined4 *)(uVar6 + 0x98);
        pbVar7 = param_2 + 0x14;
        iVar10 = 0x1e;
        do {
          *puVar8 = *(undefined4 *)pbVar7;
          puVar8[1] = *(undefined4 *)(pbVar7 + 4);
          puVar8[2] = *(undefined4 *)(pbVar7 + 8);
          pbVar7 = pbVar7 + 0xc;
          puVar8 = puVar8 + 3;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    else {
      *(byte *)(piVar5 + 0x5a2) = *param_2;
      *(byte *)((int)piVar5 + 0x1689) = param_2[1];
      piVar5[0x5a4] = *(int *)(param_2 + 4);
      piVar5[0x5a5] = *(int *)(param_2 + 8);
      piVar5[0x5a6] = local_8;
      piVar5[0x5a7] = local_c;
      *(undefined2 *)(piVar5 + 0x5a9) = uVar3;
      *(undefined2 *)((int)piVar5 + 0x16a2) = uVar9;
      *(undefined2 *)((int)piVar5 + 0x16a6) = uVar1;
      *(undefined2 *)(piVar5 + 0x5aa) = uVar2;
      *(undefined2 *)(piVar5 + 0x5a8) = *(undefined2 *)(param_2 + 0x10);
      bVar4 = F_00a9f620(piVar5);
      if (bVar4 == 0) {
        pbVar7 = param_2 + 0x14;
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0xd4))(piVar5)));
        F_00b7b8e0(this,pbVar7);
      }
    }
    uVar6 = F_00ae0810(&REFG(undefined, 0x1336e40),param_1);
    if (uVar6 != 0) {
      *(byte *)(uVar6 + 0x51) = *param_2;
      *(byte *)(uVar6 + 0x53) = param_2[2];
      *(byte *)(uVar6 + 0x54) = param_2[3];
      *(undefined4 *)(uVar6 + 0x58) = *(undefined4 *)(param_2 + 4);
      *(undefined4 *)(uVar6 + 0x5c) = *(undefined4 *)(param_2 + 8);
      *(undefined2 *)(uVar6 + 0x60) = (undefined2)local_8;
      *(undefined2 *)(uVar6 + 0x62) = (undefined2)local_c;
      *(undefined2 *)(uVar6 + 100) = *(undefined2 *)(param_2 + 0x10);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        F_00b7b840(uVar6 + 0x6c,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),(uint)*puVar11,
                     *(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
    in_EAX = (int *)F_00ae0880(&REFG(undefined, 0x1336e40),param_1);
    if (in_EAX != (int *)0x0) {
      in_EAX[0x83] = *(int *)(param_2 + 4);
      in_EAX[0x84] = *(int *)(param_2 + 8);
      if (*in_EAX == REFG(int, 0x1379690)) {
        iVar10 = 0;
        piVar5 = in_EAX + 0x85;
        puVar11 = (ushort *)(param_2 + 0x16);
        do {
          in_EAX = (int *)F_00b7b840(piVar5,iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                       (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
          iVar10 = iVar10 + 1;
          puVar11 = puVar11 + 6;
        } while (iVar10 < 0x1e);
      }
    }
    if (param_1 == REFG(int, 0x14ab5bc)) {
      REFG(undefined4, 0x14ab5c0) = *(undefined4 *)(param_2 + 4);
      REFG(undefined4, 0x14ab5c4) = *(undefined4 *)(param_2 + 8);
      iVar10 = 0;
      puVar11 = (ushort *)(param_2 + 0x16);
      do {
        in_EAX = (int *)F_00b7b840(&REFG(undefined, 0x14ab5c8),iVar10,(uint)puVar11[-1],*(float *)(puVar11 + 1),
                                     (uint)*puVar11,*(undefined4 *)(puVar11 + 3));
        iVar10 = iVar10 + 1;
        puVar11 = puVar11 + 6;
      } while (iVar10 < 0x1e);
    }
  }
  return (uint)in_EAX;
}

/* ref: FUN_00a55860 */
uint F_00a55860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54be0((undefined *)&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55880 */
uint F_00a55880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54a90(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558a0 */
uint F_00a558a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a54950(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a558c0 */
byte F_00a558c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa558c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  
  uVar2 = param_1;
  if (param_1 != REFG(undefined4, 0x1379690)) {
    bVar1 = F_00a54ef0(param_1);
    uVar2 = (uint)bVar1;
  }
  return (byte)uVar2;
}

/* ref: FUN_00a55930 */
uint F_00a55930(unsigned int gen_a0)
{
  GEN_ENTER(0xa55930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cd8));
  if (*(int *)((int)this + 0x44) != 0) {
    F_00406b30(*(int *)((int)this + 0x44) + -8);
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  if (*(int *)((int)this + 0x34) != 0) {
    F_00406b30(*(int *)((int)this + 0x34) + -8);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x24) + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  return uVar1;
}

/* ref: FUN_00a55990 */
uint F_00a55990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  int iVar2;
  undefined * this_00;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(ushort *)(param_2 + 2) - 0x1af;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = this;
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 0: ;
  case 4: ;
  case 8: ;
    uVar3 = F_00a54d40(this,param_1,*(undefined4 *)(param_2 + 0x10),param_2);
    break;
  case 1: ;
    uVar4 = *(uint *)((int)this + 0x1c);
    if (uVar4 != 0) {
      do {
        if (*(int *)(uVar4 + 0x10) == *(int *)(param_2 + 0x10)) goto LAB_00a559ef;
        uVar4 = *(uint *)(uVar4 + 0x28);
      } while (uVar4 != 0);
    }
    uVar4 = F_00a53a10(this,*(undefined4 *)(param_2 + 0x10));
    uVar3 = 0;
    if (uVar4 != 0) {
LAB_00a559ef: ;
      this_00 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
      uVar1 = *(undefined4 *)(param_2 + 0x10);
      iVar2 = *(int *)(param_2 + 0x14);
      ((uint *)(gen_frame + 0x0))[0] = (uint)*(ushort *)(param_2 + 2);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 0x18);
      (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
      (*(int *)(gen_frame + 0xc)) = iVar2;
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0x1c);
      *(int *)(uVar4 + 0x20) = iVar2 + 1;
      uVar3 = F_00a4fee0((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar4,((uint *)(gen_frame + 0x0)));
      if (*(int *)(uVar4 + 0x20) <= *(int *)(uVar4 + 0x1c)) {
        F_00a49c10(&REFG(undefined, 0x14a4230),*(undefined4 *)(uVar4 + 0x14),param_1);
        uVar3 = F_00a53a80(this_00,uVar4);
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00a55a90 */
uint F_00a55a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(this,5);
    bVar1 = F_00a5d350((undefined *)((int)this + 0x24),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ae0 */
uint F_00a55ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined4 * puVar3;
  uint uVar2;
  
  puVar3 = &(*(undefined4 *)(gen_frame + 0xc));
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
  this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  F_009755f0(this_00,puVar3);
  bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,(*(undefined4 *)(gen_frame + 0x34)),(*(undefined4 *)(gen_frame + 0x38)));
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55030(this,1);
    bVar1 = F_00a5d450((undefined *)((int)this + 0x34),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55b70 */
uint F_00a55b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa55b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(this,10);
    bVar1 = F_00a5d540((undefined *)((int)this + 0x44),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: Global::HandleSpawn */
uint F_00a55c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a54e30(&REFG(undefined * PTR32, 0x1334920),5);
    bVar1 = F_00a5d350(&REFG(undefined, 0x1334944),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55c40 */
uint F_00a55c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55ae0(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55c60 */
uint F_00a55c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55c60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar2;
  
  bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1 == 0) {
    F_00a55210(&REFG(undefined * PTR32, 0x1334920),10);
    bVar1 = F_00a5d540(&REFG(undefined, 0x1334964),param_1,param_2,0,0);
    uVar2 = CONCAT31(extraout_var_00,bVar1);
  }
  return uVar2;
}

/* ref: FUN_00a55ca0 */
uint F_00a55ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa55ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a55990(&REFG(undefined * PTR32, 0x1334920),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a55cc0 */
uint F_00a55cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004296a0(0x10,0,800);
  *(uint *)((int)this + 4) = uVar1;
  *(uint *)uVar1 = uVar1;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  return (uint)this;
}

/* ref: FUN_00a55cf0 */
unsigned int F_00a55cf0(unsigned int gen_a0)
{
  GEN_ENTER(0xa55cf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)));
  if (piVar2 != *(int * PTR32 *)((int)this + 4)) {
    do {
      F_009bc530((undefined *)piVar2[2],1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  piVar2 = *(int * PTR32 *)((int)this + 4);
  piVar1 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar1 != *(int * PTR32 *)((int)this + 4)) {
    do {
      piVar2 = (int *)*piVar1;
      F_00429760(piVar1,0x10,800);
      piVar1 = piVar2;
    } while (piVar2 != (int *)*(int *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00a55d60 */
unsigned int F_00a55d60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa55d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  piVar3 = (int *)*piVar2;
  while (piVar4 = piVar3, piVar4 != piVar2) {
    fVar1 = gen_bits2f(piVar4[3]);
    if ((GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0)) &&
       (piVar4[3] = (int)gen_fl2bits((float)(((float10)GEN_TOD(gen_bits2f(piVar4[3]))) - (float10)param_2)),
       gen_bits2f(piVar4[3]) <= 0.0)) {
      F_009bc530((undefined *)piVar4[2],1);
      piVar3 = (int *)*piVar4;
      if (piVar4 != *(int * PTR32 *)(param_1 + 4)) {
        *(int * PTR32 *)piVar4[1] = piVar3;
        *(int *)(*piVar4 + 4) = piVar4[1];
        F_00429760(piVar4,0x10,800);
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      }
    }
    else {
      piVar3 = (int *)*piVar4;
    }
  }
  return 0;
}

/* ref: FUN_00a55df0 */
uint F_00a55df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0xa55df0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  uint in_ecx;
  undefined * this;
  float * pfVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(int *)(gen_frame + 0xc)) = param_1;
  in_ecx = F_00ab44e0(param_2,param_3,(float)(float10)1,0);
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    (*(float *)(gen_frame + 0x40)) = (float)fVar1;
    (*(float *)(gen_frame + 0x44)) = (float)fVar1;
    (*(float *)(gen_frame + 0x48)) = (float)fVar1;
    ((float *)(gen_frame + 0x10))[0] = param_5;
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = param_5;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x38)) = param_5;
    F_0065ed60(((float *)(gen_frame + 0x10)),param_6);
    pfVar2 = ((float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)*param_3);
    (*(float *)(gen_frame + 0x44)) = (float)((float10)param_3[1] + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x48)) = (float)((float10)param_3[2] + (float10)(*(float *)(gen_frame + 0x48)));
    this = (undefined *)F_00983160(in_ecx);
    F_009bc130(this,pfVar2);
    if ((!GEN_ISNAN(param_4) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_4 <= *(float *)&REFG(undefined, 0x1088114))) {
      (*(uint *)(gen_frame + 0x4)) = in_ecx;
      (*(float *)(gen_frame + 0x8)) = param_4;
      F_00a5ed60((undefined *)((*(int *)(gen_frame + 0xc)) + 4),&(*(uint *)(gen_frame + 0x4)));
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return in_ecx;
}

/* ref: FUN_00a55f00 */
uint F_00a55f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0xa55f00u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  uVar1 = F_00ab4370(param_2,param_3,param_4,0,0);
  if ((uVar1 != 0) &&
     ((!GEN_ISNAN(param_5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    (*(uint *)(gen_frame + 0x4)) = uVar1;
    (*(float *)(gen_frame + 0x8)) = param_5;
    F_00a5ed60((undefined *)(param_1 + 4),&(*(uint *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00a55f60 */
uint F_00a55f60(unsigned int gen_a0)
{
  GEN_ENTER(0xa55f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this);
  uVar1 = F_00a5ec40((undefined *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00a5c400 */
ushort F_00a5c400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *(undefined4 *)((int)this + 0x166c) = *param_1;
  uVar1 = *(ushort *)(param_1 + 1);
  *(ushort *)((int)this + 0x1670) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5c430 */
byte F_00a5c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd4)) & 2;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c450 */
byte F_00a5c450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c450u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0x2dd4)) & 8;
  *(byte *)(in_ecx + 0x2dd4) = *(byte *)(in_ecx + 0x2dd4) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c470 */
byte F_00a5c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x196) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c480 */
uint F_00a5c480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x198) = param_1;
  *(undefined4 *)((int)this + 0x19c) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4a0 */
uint F_00a5c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1a0) = param_1;
  *(undefined4 *)((int)this + 0x1a4) = param_2;
  return param_1;
}

/* ref: FUN_00a5c4c0 */
byte F_00a5c4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1688) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4d0 */
byte F_00a5c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1689) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c4e0 */
uint F_00a5c4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1690) = param_2;
  return param_2;
}

/* ref: FUN_00a5c4f0 */
uint F_00a5c4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c4f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1694) = param_2;
  return param_2;
}

/* ref: FUN_00a5c500 */
uint F_00a5c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1698) = param_2;
  return param_2;
}

/* ref: FUN_00a5c510 */
uint F_00a5c510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x169c) = param_2;
  return param_2;
}

/* ref: FUN_00a5c520 */
ushort F_00a5c520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a0) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c540 */
ushort F_00a5c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a2) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c560 */
ushort F_00a5c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a4) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c580 */
ushort F_00a5c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5a0 */
ushort F_00a5c5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x16a8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5c5c0 */
uint F_00a5c5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5c5c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  uint uVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xd4))(param_1);
    uVar2 = F_00b7b840(uVar2,param_2,param_3,param_4,param_5,param_6);
  }
  return uVar2;
}

/* ref: FUN_00a5c610 */
byte F_00a5c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c620 */
byte F_00a5c620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2dd2)) & 2;
  *(byte *)(in_ecx + 0x2dd2) = *(byte *)(in_ecx + 0x2dd2) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5c670 */
byte F_00a5c670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c680 */
unsigned int F_00a5c680(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5c680u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00a5c6a0 */
uint F_00a5c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6b0 */
byte F_00a5c6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22e) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6c0 */
uint F_00a5c6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x254) = param_2;
  return param_2;
}

/* ref: FUN_00a5c6d0 */
byte F_00a5c6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c6d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c6e0 */
uint F_00a5c6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((-1 < (int)param_1) && (param_1 < 3)) {
    *(undefined1 *)(param_1 + 0x22f + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c700 */
uint F_00a5c700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c700u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 4) {
    *(undefined1 *)(param_1 + 600 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c720 */
uint F_00a5c720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  uint uVar2;
  byte bVar3;
  
  uVar2 = param_1 >> 3;
  if (uVar2 < 4) {
    bVar3 = (byte)(0x80 >> ((byte)param_1 & 7));
    if ((char)param_2 != '\0') {
      pbVar1 = (byte *)(uVar2 + 600 + (int)this);
      *pbVar1 = *pbVar1 | bVar3;
      return uVar2;
    }
    pbVar1 = (byte *)(uVar2 + 600 + (int)this);
    *pbVar1 = *pbVar1 & ~bVar3;
  }
  return uVar2;
}

/* ref: FUN_00a5c760 */
uint F_00a5c760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 3) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x25c) = param_2;
  }
  return param_1;
}

/* ref: FUN_00a5c780 */
uint F_00a5c780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x268) = param_2;
  return param_2;
}

/* ref: FUN_00a5c790 */
uint F_00a5c790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5c790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined2 *)((int)this + param_1 * 2 + 0x272) = (undefined2)param_2;
  *(undefined2 *)((int)this + param_1 * 2 + 0x296) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_00a5c7c0 */
byte F_00a5c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x2d3 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5c7e0 */
uint F_00a5c7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c7e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x308) = param_2;
  return param_2;
}

/* ref: FUN_00a5c7f0 */
uint F_00a5c7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c7f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x3aa8) = param_1;
  *(undefined2 *)((int)this + 0x3aac) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00a5c810 */
float10 F_00a5c810(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return (float10)((float)GEN_TOF((((float10)(param_1 & 0xffff) * (float10)*(double *)&REFG(undefined, 0x10a3960)) *
                          (float10)*(double *)&REFG(undefined, 0x10928e8) - (float10)*(double *)&REFG(undefined, 0x10912a8))));
}

/* ref: FUN_00a5c840 */
uint F_00a5c840(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xffff;
}

/* ref: FUN_00a5c880 */
uint F_00a5c880(unsigned int gen_a0)
{
  GEN_ENTER(0xa5c880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1 & 0xff;
}

/* ref: FUN_00a5c8c0 */
uint F_00a5c8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8e0 */
uint F_00a5c8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c8f0 */
uint F_00a5c8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 7) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c900 */
uint F_00a5c900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5c900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 8 + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5c920 */
uint F_00a5c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c940 */
uint F_00a5c940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 6) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c950 */
uint F_00a5c950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 8) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c970 */
uint F_00a5c970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 10) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c990 */
uint F_00a5c990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0xc) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9a0 */
uint F_00a5c9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 4) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9b0 */
uint F_00a5c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 5) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5c9d0 */
uint F_00a5c9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5c9f0 */
uint F_00a5c9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5c9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1df1 + in_ecx;
}

/* ref: FUN_00a5ca10 */
uint F_00a5ca10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x12ea + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca30 */
uint F_00a5ca30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ca30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined1 *)(param_1 + 0x15bc + (int)this) = *param_2;
  return param_1;
}

/* ref: FUN_00a5ca50 */
uint F_00a5ca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x12ea + in_ecx;
}

/* ref: FUN_00a5ca70 */
uint F_00a5ca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x1594 + in_ecx;
}

/* ref: FUN_00a5ca90 */
uint F_00a5ca90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ca90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x15bc + in_ecx;
}

/* ref: FUN_00a5cab0 */
uint F_00a5cab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x1890 + param_2 * 8;
}

/* ref: FUN_00a5cad0 */
uint F_00a5cad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2088 + in_ecx;
}

/* ref: FUN_00a5caf0 */
uint F_00a5caf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5caf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20a4 + in_ecx;
}

/* ref: FUN_00a5cb10 */
uint F_00a5cb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20b6 + in_ecx;
}

/* ref: FUN_00a5cb30 */
uint F_00a5cb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c0 + in_ecx;
}

/* ref: FUN_00a5cb50 */
uint F_00a5cb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c6 + in_ecx;
}

/* ref: FUN_00a5cb70 */
uint F_00a5cb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20c8 + in_ecx;
}

/* ref: FUN_00a5cb90 */
uint F_00a5cb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20e4 + in_ecx;
}

/* ref: FUN_00a5cbb0 */
uint F_00a5cbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x20f6 + in_ecx;
}

/* ref: FUN_00a5cbd0 */
uint F_00a5cbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2100 + in_ecx;
}

/* ref: FUN_00a5cbf0 */
uint F_00a5cbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cbf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + 0x2106 + in_ecx;
}

/* ref: FUN_00a5cc10 */
uint F_00a5cc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00a5cc20 */
uint F_00a5cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00a5cc30 */
uint F_00a5cc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5cc50 */
uint F_00a5cc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c4d9ef((int)this + 0x10,0x40,param_1,0x3f);
  return uVar1;
}

/* ref: FUN_00a5cc70 */
byte F_00a5cc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x50) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc80 */
byte F_00a5cc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x51) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cc90 */
byte F_00a5cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cc90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x52) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cca0 */
byte F_00a5cca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x53) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccb0 */
byte F_00a5ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x54) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ccc0 */
uint F_00a5ccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_00a5ccd0 */
uint F_00a5ccd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cce0 */
ushort F_00a5cce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x60) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5ccf0 */
ushort F_00a5ccf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ccf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x62) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd00 */
ushort F_00a5cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 100) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd10 */
ushort F_00a5cd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x66) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5cd20 */
byte F_00a5cd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x68) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd30 */
byte F_00a5cd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x69) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd40 */
byte F_00a5cd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x6a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd50 */
uint F_00a5cd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x1f0) = *param_2;
  *(undefined4 *)(in_ecx + 500) = param_2[1];
  *(undefined4 *)(in_ecx + 0x1f8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a5cd80 */
byte F_00a5cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cd90 */
byte F_00a5cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x204) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cda0 */
uint F_00a5cda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x208) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdb0 */
uint F_00a5cdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cdc0 */
uint F_00a5cdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cdc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x210) = param_2;
  return param_2;
}

/* ref: FUN_00a5cde0 */
uint F_00a5cde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5cde0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x388) = param_1;
  *(undefined4 *)((int)this + 0x38c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce00 */
uint F_00a5ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c90) = param_2;
  return param_2;
}

/* ref: FUN_00a5ce10 */
byte F_00a5ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce20 */
uint F_00a5ce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c80) = param_1;
  *(undefined4 *)((int)this + 0x1c84) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce40 */
uint F_00a5ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ce40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x1c88) = param_1;
  *(undefined4 *)((int)this + 0x1c8c) = param_2;
  return param_1;
}

/* ref: FUN_00a5ce60 */
byte F_00a5ce60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c95) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce70 */
byte F_00a5ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ce70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5ce80 */
unsigned int F_00a5ce80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ce80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return 0;
}

/* ref: FUN_00a5cea0 */
unsigned int F_00a5cea0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cea0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00a5cec0 */
uint F_00a5cec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00a5ced0 */
byte F_00a5ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ced0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x30) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cee0 */
byte F_00a5cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x31) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cef0 */
byte F_00a5cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x35) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf00 */
uint F_00a5cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3c) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf10 */
uint F_00a5cf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_00a5cf20 */
byte F_00a5cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf30 */
byte F_00a5cf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cf30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5cf60 */
unsigned int F_00a5cf60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00a5cf80 */
unsigned int F_00a5cf80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x7cc) = param_2;
  return 0;
}

/* ref: FUN_00a5cfa0 */
unsigned int F_00a5cfa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cfa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x184) = param_2;
  return 0;
}

/* ref: FUN_00a5cfc0 */
unsigned int F_00a5cfc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5cfc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18c) = param_2;
  return 0;
}

/* ref: FUN_00a5cfe0 */
uint F_00a5cfe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cfe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1ec) = param_2;
  return param_2;
}

/* ref: FUN_00a5cff0 */
uint F_00a5cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5cff0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1d0) = param_2;
  return param_2;
}

/* ref: FUN_00a5d000 */
byte F_00a5d000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e2) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d010 */
uint F_00a5d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1e4) = param_2;
  return param_2;
}

/* ref: FUN_00a5d020 */
uint F_00a5d020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_00a5d040 */
ushort F_00a5d040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d040u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x18a) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5d070 */
uint F_00a5d070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b07230((undefined *)((int)this + 0x10),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a5d090 */
uint F_00a5d090(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0x90) = 1;
  uVar1 = F_008edf60(this);
  return uVar1;
}

/* ref: Client::Game::Network::PacketElement::vf0 */
uint F_00a5d0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this + -8);
  pPVar2 = this + iVar1 * 0x58;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    pPVar2 = pPVar2 + -0x58;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cb4));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this + -8);
  }
  return (uint)(this + -8);
}

/* ref: Client::Game::Network::PacketContext::vf0 */
uint F_00a5d110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  undefined * pPVar2;
  
  if ((param_1 & 2) == 0) {
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
    return (uint)this;
  }
  iVar1 = *(int *)(this + -4);
  pPVar2 = this + iVar1 * 0x30;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    pPVar2 = pPVar2 + -0x30;
    *(undefined * PTR32 * PTR32 *)pPVar2 = (*(undefined * PTR32 (*)[1])REFP(0x10e5cbc));
  }
  if ((param_1 & 1) != 0) {
    F_00406b30(this + -4);
  }
  return (uint)(this + -4);
}

/* ref: FUN_00a5d1c0 */
uint F_00a5d1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_00a5d1d0 */
uint F_00a5d1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1e0 */
uint F_00a5d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x18) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d1f0 */
uint F_00a5d1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x1c) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d200 */
uint F_00a5d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d210 */
uint F_00a5d210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x24) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a5d220 */
uint F_00a5d220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5d220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + param_1 * 4 + 4) = *param_2;
  return param_1;
}

/* ref: FUN_00a5d240 */
unsigned int F_00a5d240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d240u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((ushort)param_1 <= (ushort)param_2) {
    puVar1 = (undefined4 *)((int)this + (uint)(ushort)param_1 * 4 + 4);
    uVar2 = (uint)(ushort)(((ushort)param_2 - (ushort)param_1) + 1);
    do {
      *puVar1 = *((undefined4 *)GEN_TOP((param_3 + (uVar3 & 0xffff) * 4)));
      puVar1 = puVar1 + 1;
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00a5d290 */
byte F_00a5d290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x271) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2a0 */
byte F_00a5d2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3a6d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2b0 */
byte F_00a5d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5d2c0 */
uint F_00a5d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x5a8c + param_2 * 4;
}

/* ref: FUN_00a5d2f0 */
uint F_00a5d2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 gen_out[0x4];
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_out + 0x0);
  F_00edfd00(this);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_out + 0x0));
  return (uint)this;
}

/* ref: Global::QueueSpawn */
byte F_00a5d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar3 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + *(int *)this))) = param_1;
  puVar4 = param_2;
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x10 + *(int *)this)));
  for (iVar2 = 0xa2; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar2 = *(int *)this;
  iVar1 = *(int *)((int)this + 0xc) * 0x2a0;
  *(undefined4 *)(iVar1 + 8 + iVar2) = param_3;
  *(undefined4 *)(iVar1 + 0xc + iVar2) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x2a0 + 0x298 + *(int *)this))) = 1;
  *(uint *)((int)this + 0xc) = uVar3;
  return 1;
}

/* ref: FUN_00a5d400 */
byte F_00a5d400(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d400u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d420 */
uint F_00a5d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d420u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *param_2;
  if ((-1 < (int)uVar1) && (uVar1 < (uint)in_ecx[1])) {
    uVar1 = uVar1 * 0x2a0;
    *(undefined1 *)(uVar1 + 0x298 + *in_ecx) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5d450 */
byte F_00a5d450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d500 */
byte F_00a5d500(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d500u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d520 */
uint F_00a5d520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d540 */
byte F_00a5d540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5d540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = (*(int *)((int)this + 0xc) + 1U) % *(uint *)((int)this + 4);
  if (uVar4 == *(uint *)((int)this + 8)) {
    return 0;
  }
  *((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 0xc) * 0x28))) = param_1;
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + 0x10 + *(int *)((int)this + 0xc) * 0x28)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  iVar2 = *(int *)((int)this + 0xc);
  iVar3 = *(int *)this;
  *(undefined4 *)(iVar3 + 8 + iVar2 * 0x28) = param_3;
  *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x28) = param_4;
  *((undefined1 *)GEN_TOP((*(int *)this + 0x20 + *(int *)((int)this + 0xc) * 0x28))) = 1;
  *(uint *)((int)this + 0xc) = uVar4;
  return 1;
}

/* ref: FUN_00a5d5f0 */
byte F_00a5d5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5d5f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  return *param_1 == -1;
}

/* ref: FUN_00a5d610 */
uint F_00a5d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = uVar1;
  if ((-1 < (int)uVar1) && (uVar1 < *(uint *)((int)this + 4))) {
    uVar2 = *(uint *)this;
    *(undefined1 *)(uVar2 + 0x20 + uVar1 * 0x28) = 0;
  }
  return uVar2;
}

/* ref: FUN_00a5d630 */
uint F_00a5d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 300;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5d660 */
uint F_00a5d660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d660u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x191;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d6a0 */
uint F_00a5d6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xa5d6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  param_1[6] = param_2;
  param_1[0xb] = (undefined4)gen_fl2bits(param_7);
  param_1[7] = param_3;
  param_1[8] = param_4;
  param_1[0xc] = (undefined4)gen_fl2bits(param_8);
  *param_1 = 0x195;
  param_1[1] = 0x30;
  param_1[9] = param_5;
  param_1[10] = param_6;
  param_1[0xd] = (undefined4)gen_fl2bits(param_9);
  return (uint)param_1;
}

/* ref: FUN_00a5d700 */
uint F_00a5d700(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xa5d700u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x19) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_4;
  *(undefined2 *)((int)this + 0x24) = (undefined2)param_5;
  *(undefined2 *)((int)this + 0x26) = (undefined2)param_6;
  *(undefined4 *)this = 0x196;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined4 *)((int)this + 0x28) = param_7;
  *(undefined4 *)((int)this + 0x2c) = param_8;
  return (uint)this;
}

/* ref: FUN_00a5d750 */
uint F_00a5d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5d750u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x197;
  *(undefined4 *)((int)this + 4) = 0x30;
  *(undefined4 *)((int)this + 0x30) = param_6;
  *(undefined4 *)((int)this + 0x34) = param_7;
  return (uint)this;
}

/* ref: FUN_00a5d790 */
uint F_00a5d790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5d790u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)((int)this + 0x28) = param_5;
  *(undefined4 *)this = 0x198;
  *(undefined4 *)((int)this + 4) = 0x48;
  *(undefined4 *)((int)this + 0x24) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x2c);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d7e0 */
uint F_00a5d7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xa5d7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  *(undefined1 *)(param_1 + 6) = (undefined1)param_2;
  *(undefined1 *)((int)param_1 + 0x19) = (undefined1)param_3;
  param_1[10] = (undefined4)gen_fl2bits(param_8);
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[0xb] = (undefined4)gen_fl2bits(param_9);
  *param_1 = 0x199;
  param_1[1] = 0x30;
  *(undefined2 *)(param_1 + 9) = (undefined2)param_6;
  *(undefined2 *)((int)param_1 + 0x26) = (undefined2)param_7;
  param_1[0xc] = (undefined4)gen_fl2bits(param_10);
  return (uint)param_1;
}

/* ref: FUN_00a5d840 */
unsigned int F_00a5d840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0xa5d840u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  undefined4 param_12 = (undefined4)gen_a12;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  *(undefined4 *)((int)this + 0x24) = param_4;
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_5;
  *(undefined4 *)((int)this + 0x2c) = param_6;
  *(undefined4 *)((int)this + 0x30) = param_7;
  *(undefined4 *)((int)this + 0x34) = param_8;
  *(undefined4 *)((int)this + 0x38) = param_9;
  *(undefined2 *)((int)this + 0x3c) = (undefined2)param_10;
  *(undefined4 *)this = 0x1ae;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x40) = param_11;
  *(undefined4 *)((int)this + 0x44) = param_12;
  return 0;
}

/* ref: FUN_00a5d8b0 */
uint F_00a5d8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5d8b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1b3;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  *(undefined4 *)((int)this + 0x20) = param_3;
  return (uint)this;
}

/* ref: FUN_00a5d8e0 */
uint F_00a5d8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d8e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d7;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5d920 */
uint F_00a5d920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d8;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5d970 */
uint F_00a5d970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1d9;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5d9c0 */
uint F_00a5d9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5d9c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1da;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da10 */
uint F_00a5da10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1db;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5da60 */
uint F_00a5da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5da60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dc;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dab0 */
uint F_00a5dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1dd;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db00 */
uint F_00a5db00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1de;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5db50 */
uint F_00a5db50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e0;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  return (uint)this;
}

/* ref: FUN_00a5db90 */
uint F_00a5db90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5db90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e1;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  *(undefined4 *)((int)this + 0x20) = *param_5;
  *(undefined4 *)((int)this + 0x24) = param_5[1];
  *(undefined4 *)((int)this + 0x28) = param_5[2];
  *(undefined4 *)((int)this + 0x2c) = param_5[3];
  return (uint)this;
}

/* ref: FUN_00a5dbe0 */
uint F_00a5dbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dbe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e2;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc30 */
uint F_00a5dc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e3;
  *(undefined4 *)((int)this + 4) = 0x58;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dc80 */
uint F_00a5dc80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dc80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e4;
  *(undefined4 *)((int)this + 4) = 0x98;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dcd0 */
uint F_00a5dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dcd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e5;
  *(undefined4 *)((int)this + 4) = 0x118;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd20 */
uint F_00a5dd20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e6;
  *(undefined4 *)((int)this + 4) = 0x218;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dd70 */
uint F_00a5dd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa5dd70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1e7;
  *(undefined4 *)((int)this + 4) = 0x418;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_4;
  puVar2 = param_5;
  puVar3 = (undefined4 *)((int)this + 0x20);
  for (iVar1 = 0xff; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5ddc0 */
uint F_00a5ddc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5ddd0 */
uint F_00a5ddd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ddd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a5de00 */
uint F_00a5de00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5de00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a5de20 */
uint F_00a5de20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1eb;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  return (uint)this;
}

/* ref: FUN_00a5de60 */
uint F_00a5de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5de60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ec;
  *(undefined4 *)((int)this + 4) = 0x28;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x1f) = *param_4;
  *(undefined4 *)((int)this + 0x23) = param_4[1];
  *(undefined4 *)((int)this + 0x27) = param_4[2];
  *(undefined4 *)((int)this + 0x2b) = param_4[3];
  return (uint)this;
}

/* ref: FUN_00a5deb0 */
uint F_00a5deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5deb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5ded0 */
uint F_00a5ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa5ded0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined4 *)this = 0x1ed;
  *(undefined4 *)((int)this + 4) = 0x38;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  puVar2 = param_4;
  puVar3 = (undefined4 *)((int)this + 0x1f);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5df40 */
uint F_00a5df40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5df40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5df60 */
uint F_00a5df60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5df60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5df80 */
uint F_00a5df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xa5df80u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_3;
  *(undefined2 *)((int)this + 0x1c) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x24) = param_5;
  *(undefined4 *)this = 0x1ee;
  *(undefined4 *)((int)this + 4) = 0x40;
  *(undefined4 *)((int)this + 0x20) = param_4;
  puVar2 = param_6;
  puVar3 = (undefined4 *)((int)this + 0x28);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: FUN_00a5dff0 */
uint F_00a5dff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5dff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined1 *)((int)this + 4) = (undefined1)param_2;
  *(undefined1 *)((int)this + 5) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00a5e030 */
uint F_00a5e030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e050 */
uint F_00a5e050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a5e070 */
uint F_00a5e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x262;
  in_ecx[1] = 0x18;
  *(undefined2 *)(in_ecx + 6) = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: Client::Network::Protocol::Zone::PacketReceiverCallbackInterface::vf0 */
uint F_00a5e0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e5cc4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5e0e0 */
uint F_00a5e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e100 */
byte F_00a5e100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a5e130 */
uint F_00a5e130(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a5e160 */
uint F_00a5e160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a5e180 */
uint F_00a5e180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5e1a0 */
uint F_00a5e1a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00a5e1c0 */
unsigned int F_00a5e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e1f0 */
uint F_00a5e1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a5e200 */
uint F_00a5e200(unsigned int gen_a0)
{
  GEN_ENTER(0xa5e200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  uVar1 = F_00a35490(&REFG(undefined4, 0x14a31f0),param_1);
  return uVar1;
}

/* ref: FUN_00a5e220 */
uint F_00a5e220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1a8);
  *(undefined4 *)(uVar1 + 8) = param_1;
  *(undefined4 *)(uVar1 + 0xc) = param_2;
  return uVar1;
}

/* ref: FUN_00a5e240 */
uint F_00a5e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x2a0 >> 0x20) != 0) |
          (uint)((ulonglong)param_1 * 0x2a0);
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 0xa6) = 0;
    puVar2 = puVar2 + 0xa8;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e2c0 */
uint F_00a5e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar1) != '\0') {
      *(undefined1 *)(uVar3 * 0x2a0 + 0x298 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x2a0;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e350 */
uint F_00a5e350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(uVar3 * 0x2a0 + 0x298 + iVar2) != '\0') {
        *param_1 = uVar3;
        param_1[1] = uVar3 * 0x2a0 + iVar2;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e3d0 */
uint F_00a5e3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(uVar2 * 0x2a0 + 0x298 + iVar1) != '\0') {
        *param_1 = uVar2;
        param_1[1] = uVar2 * 0x2a0 + iVar1;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e430 */
uint F_00a5e430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e4b0 */
uint F_00a5e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e530 */
uint F_00a5e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e5a0 */
uint F_00a5e5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e5a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e600 */
uint F_00a5e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  
  *(undefined4 *)this = 0;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x28 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x28)
  ;
  puVar1 = (uint *)F_00406bb0(-(uint)(0xfffffff7 < uVar3) | uVar3 + 8,0,0);
  if (puVar1 == (uint *)0x0) {
    *(undefined4 *)this = 0;
    return (uint)this;
  }
  *puVar1 = param_1;
  puVar2 = puVar1 + 2;
  uVar3 = param_1;
  while (uVar3 = uVar3 - 1, -1 < (int)uVar3) {
    *puVar2 = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined1 *)(puVar2 + 8) = 0;
    puVar2 = puVar2 + 10;
  }
  *(uint * PTR32 *)this = puVar1 + 2;
  return (uint)this;
}

/* ref: FUN_00a5e680 */
uint F_00a5e680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(uint *)((int)this + 8) == *(uint *)((int)this + 0xc)) {
    *param_1 = *(int *)this;
    *(undefined2 *)(param_1 + 1) = 0;
    return (uint)param_1;
  }
  iVar1 = *(int *)this;
  uVar3 = *(uint *)((int)this + 8);
  do {
    uVar2 = (*(int *)((int)this + 8) + 1U) % *(uint *)((int)this + 4);
    *(uint *)((int)this + 8) = uVar2;
    if (*(char *)(iVar1 + 0x20 + uVar3 * 0x28) != '\0') {
      *(undefined1 *)(uVar3 * 0x28 + 0x20 + iVar1) = 0;
      *param_1 = *(int *)this + uVar3 * 0x28;
      *(undefined2 *)(param_1 + 1) = 0x101;
      return (uint)param_1;
    }
    uVar3 = uVar2;
  } while (uVar2 != *(uint *)((int)this + 0xc));
  *param_1 = iVar1;
  *(undefined2 *)(param_1 + 1) = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e700 */
uint F_00a5e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar3 == uVar1) {
    *param_1 = 0xffffffff;
    param_1[1] = 0;
    return (uint)param_1;
  }
  if (uVar3 != uVar1) {
    iVar2 = *(int *)this;
    do {
      if (*(char *)(iVar2 + 0x20 + uVar3 * 0x28) != '\0') {
        *param_1 = uVar3;
        param_1[1] = iVar2 + uVar3 * 0x28;
        return (uint)param_1;
      }
      uVar3 = (uVar3 + 1) % *(uint *)((int)this + 4);
    } while (uVar3 != uVar1);
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e770 */
uint F_00a5e770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  if (uVar2 != *(uint *)((int)this + 0xc)) {
    iVar1 = *(int *)this;
    do {
      uVar2 = (uVar2 + 1) % *(uint *)((int)this + 4);
      if (*(char *)(iVar1 + 0x20 + uVar2 * 0x28) != '\0') {
        *param_1 = uVar2;
        param_1[1] = iVar1 + uVar2 * 0x28;
        return (uint)param_1;
      }
    } while (uVar2 != *(uint *)((int)this + 0xc));
  }
  *param_1 = 0xffffffff;
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_00a5e7e0 */
uint F_00a5e7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e7e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00a5e800 */
byte F_00a5e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a5e820 */
uint F_00a5e820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e860 */
uint F_00a5e860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e8a0 */
uint F_00a5e8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 8);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_00a5e910 */
uint F_00a5e910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00a5e940 */
unsigned int F_00a5e940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00a5e960 */
uint F_00a5e960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5e960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this_00;
  undefined3 extraout_var = 0;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = CONCAT22((short)((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30)) >> 0x10),(undefined2)param_1);
  *(undefined2 *)((int)this + 0xb078) = (undefined2)param_1;
  if ((char)param_2 != '\0') {
    uVar5 = 0;
    uVar4 = 0;
    puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
    (*(undefined2 *)(gen_frame + 0x20)) = REFG(undefined2, 0x14b4eb8);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x262;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    bVar1 = F_00974e00(this_00,puVar3,uVar4,uVar5);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2;
}

/* ref: FUN_00a5e9f0 */
uint F_00a5e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5e9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 0x1148) & 0xfffffffe;
  *(uint *)((int)this + 0x1148) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea10 */
uint F_00a5ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ea10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(char *)((int)this + 0xe9fd) = (char)param_1;
  *(char *)((int)this + 0xaf81) = (char)param_1;
  *(char *)((int)this + 0xebe0) = (char)param_1;
  uVar1 = *(uint *)((int)this + 0xff78) & 0xfffffffe;
  *(uint *)((int)this + 0xff78) = (char)param_1 != '\0' | uVar1;
  return uVar1;
}

/* ref: FUN_00a5ea50 */
uint F_00a5ea50(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea70 */
uint F_00a5ea70(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5ea90 */
uint F_00a5ea90(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ea90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar2 = F_00406b30(*(int *)this + -8);
    uVar1 = (uint)uVar2;
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00a5eb90 */
uint F_00a5eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5eb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a5eba0 */
uint F_00a5eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00a5ebd0 */
uint F_00a5ebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x10,0,800);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00a5ec40 */
uint F_00a5ec40(unsigned int gen_a0)
{
  GEN_ENTER(0xa5ec40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  ulonglong uVar3;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0x10,800);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  uVar3 = F_00429760(*(undefined4 *)this,0x10,800);
  return (uint)uVar3;
}

/* ref: FUN_00a5ec90 */
uint F_00a5ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ec90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5eca0 */
uint F_00a5eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00a5ecb0 */
uint F_00a5ecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00a5ecc0 */
uint F_00a5ecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5ecc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)F_004296a0(0x10,0,800);
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
    piVar2[3] = param_2[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: Client::Game::Network::PacketQue::vf0 */
uint F_00a5ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00a55930(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ed60 */
uint F_00a5ed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004296a0(0x10,0,800);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
    piVar3[3] = param_1[1];
  }
  if (*(int *)((int)this + 4) == -2) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00a5edd0 */
uint F_00a5edd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5edd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00429760(param_2,0x10,800);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: Client::Game::Network::PacketVFX::vf0 */
uint F_00a5ee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ee20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e5ce4));
  F_00a55cf0(this);
  F_00a5ec40(this + 4);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a5ee80 */
unsigned int F_00a5ee80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ee80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc0) = param_2;
  return 0;
}

/* ref: FUN_00a5eed0 */
byte F_00a5eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x8f) & 0x7f | (char)param_1 << 7;
  *(byte *)((int)this + 0x8f) = bVar1;
  return bVar1;
}

/* ref: FUN_00a5eef0 */
uint F_00a5eef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5eef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf0) = param_2;
  return param_2;
}

/* ref: FUN_00a5ef00 */
unsigned int F_00a5ef00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa5ef00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00a5ef40 */
uint F_00a5ef40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5ef40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0xf8) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xfc) = param_3;
  return param_1;
}

/* ref: FUN_00a5ef80 */
byte F_00a5ef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5ef80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x8f)) & 0x10;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a5efe0 */
uint F_00a5efe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5efe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x118) = param_2;
  return param_2;
}

/* ref: FUN_00a5f000 */
uint F_00a5f000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x170) = param_2;
  return param_2;
}

/* ref: FUN_00a5f010 */
unsigned int F_00a5f010(float gen_a0)
{
  GEN_ENTER(0xa5f010u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a5f030 */
uint F_00a5f030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa5f030u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,param_1,param_3);
    return uVar1;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,param_1,param_3);
  return uVar1;
}

/* ref: FUN_00a5f060 */
byte F_00a5f060(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f060u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x98))(this);
  if ((char)uVar1 == '\0') {
    return 0;
  }
  return *(byte *)((int)this + 0x8e) >> 1 & 1;
}

/* ref: Client::Game::Object::GameObject::vf0 */
uint F_00a5f080(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f080u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(uint *)(this + 0x74) != 0xe0000000) {
    return *(uint *)(this + 0x74);
  }
  if (*(uint *)(this + 0x78) == 0) {
    return (uint)*(ushort *)(this + 0x88);
  }
  return *(uint *)(this + 0x78);
}

/* ref: FUN_00a5f0b0 */
uint F_00a5f0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f0b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0xe0000000;
  if ((param_2 < 2) && (uVar1 = param_1, param_2 != 0)) {
    uVar1 = 0xe0000000;
  }
  return uVar1;
}

/* ref: FUN_00a5f0d0 */
unsigned int F_00a5f0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f0d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xec);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  if (*(int *)((int)this + 0x7c) == 0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xec);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00a5f106;
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
  }
  *(undefined4 *)((int)this + 0xec) = 0;
LAB_00a5f106: ;
  ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0xb,0);
  return 0;
}

/* ref: FUN_00a5f120 */
unsigned int F_00a5f120(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  
  if (*(int *)((int)this + 0xf0) != 0) {
    if (*(int *)((int)this + 0x7c) == 0) {
      F_00a1b5a0((undefined4 *)((int)this + 0xf0));
    }
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
    *(undefined4 *)((int)this + 0xf0) = 0;
    (*pcVar1)(this,0xb,0);
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf17 */
uint F_00a5f160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  float fVar2;
  
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  fVar2 = F_00aae7a0(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this);
  return uVar1;
}

/* ref: FUN_00a5f1d0 */
float10 F_00a5f1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xb4);
}

/* ref: FUN_00a5f1e0 */
uint F_00a5f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f1e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xd0);
  param_2[2] = *(undefined4 *)(in_ecx + 0xd8);
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(in_ecx + 0xc4) +
                                  (float10)*(float *)(in_ecx + 0xd4)))));
  return (uint)param_2;
}

/* ref: Client::Game::Object::GameObject::vf22 */
unsigned int F_00a5f210(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x20) = *(undefined4 *)(in_ecx + 0xb0);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf23 */
unsigned int F_00a5f220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00a5f230 */
byte F_00a5f230(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x70);
  if (((bVar1 & 1) != 0) &&
     ((REFG(int, 0x1379694) == 0 ||
      (((((bVar1 & 2) != 0 || (*(int *)(REFG(int, 0x1379694) + 0xe4) == 0)) ||
        (*(int *)(REFG(int, 0x1379694) + 0xe4) != *(int *)((int)this + 0xe4))) &&
       ((((bVar1 & 4) != 0 || (*(int *)((int)this + 0x84) == -0x20000000)) ||
        (*(int *)(REFG(int, 0x1379694) + 0x74) != *(int *)((int)this + 0x84))))))))) {
    return *(byte *)((int)this + 0x8f) >> 4 & 1;
  }
  return 1;
}

/* ref: FUN_00a5f290 */
uint F_00a5f290(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xb8))(this);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)this;
}

/* ref: FUN_00a5f2b0 */
uint F_00a5f2b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f2b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  return -(uint)((uVar1 & 0xff) != 0) & (uint)param_1;
}

/* ref: FUN_00a5f310 */
uint F_00a5f310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xa5f310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xe0000000;
  }
  uVar1 = ((code *)*(gen_code32 *)*param_1)
                    (param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00a5f330 */
uint F_00a5f330(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f330u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0xe0000000;
  }
  return *(uint *)(param_1 + 0x74);
}

/* ref: Client::Game::Object::GameObject::vf24 */
uint F_00a5f350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  if (*(int *)(in_ecx + 0x178) != 0) {
    *param_2 = *(int *)(in_ecx + 0x178);
    return 1;
  }
  return 0;
}

/* ref: FUN_00a5f380 */
uint F_00a5f380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      return 1;
    }
    return 0;
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1);
  return uVar1;
}

/* ref: FUN_00a5f3d0 */
uint F_00a5f3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)((int)this + 0xe4);
  iVar2 = 0;
  if ((uVar1 != 0) && ((uVar1 & 0x80000000) == 0x80000000)) {
    this_00 = (undefined *)F_006b8c00();
    uVar1 = F_006da050(this_00,uVar1);
    if (uVar1 != 0) {
      *param_1 = uVar1;
      iVar2 = 1;
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,param_1 + iVar2);
  return uVar1 + iVar2;
}

/* ref: FUN_00a5f430 */
uint F_00a5f430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x78) != param_1) {
    *(uint *)((int)this + 0x78) = param_1;
    uVar1 = F_00a35710(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00a5f450 */
uint F_00a5f450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(uint *)((int)this + 0x74) != param_1) {
    *(uint *)((int)this + 0x74) = param_1;
    uVar1 = F_00a35720(&REFG(undefined, 0x14a31e0),this);
  }
  return uVar1;
}

/* ref: FUN_00a5f470 */
byte F_00a5f470(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f470u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 8: ;
    return 3;
  case 9: ;
    return 2;
  default: ;
    return 0;
  case 0xc: ;
    return 5;
  case 0xe: ;
    return 6;
  case 0x10: ;
    return 4;
  case 0x2d: ;
    return 7;
  }
}

/* ref: FUN_00a5f500 */
uint F_00a5f500(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0xec) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xec) + 8))))(*(int * PTR32 *)((int)this + 0xec));
    if (uVar1 == 3) {
      return *(uint *)((int)this + 0xec);
    }
  }
  return 0;
}

/* ref: FUN_00a5f530 */
uint F_00a5f530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(uint *)(in_ecx + 0xe4) = param_2;
  return param_2;
}

/* ref: FUN_00a5f550 */
ushort F_00a5f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 0xc;
  *(ushort *)(in_ecx + 0xe8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a5f570 */
byte F_00a5f570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) | 8;
  *(byte *)(in_ecx + 0x70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a5f590 */
unsigned int F_00a5f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if ((*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) && (*(int *)((int)this + 0x7c) == 0)) {
    F_005db410(*(undefined * PTR32 *)((int)this + 0xf0),param_1,param_2);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf25 */
uint F_00a5f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  undefined * this_00;
  uint uVar2;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x94);
  this[0x8f] = (undefined1)((byte)this[0x8f] | 8);
  (*pcVar1)(this);
  this_00 = (undefined *)F_006b8c00();
  uVar2 = F_006e5cf0(this_00,this);
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf26 */
byte F_00a5f5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f5e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 2 & 1;
}

/* ref: Client::Game::Object::GameObject::vf29 */
unsigned int F_00a5f5f0(void)
{
  GEN_ENTER(0xa5f5f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf30 */
byte F_00a5f600(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x8e) >> 3 & 1;
}

/* ref: Client::Game::Object::GameObject::vf34 */
unsigned int F_00a5f610(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f610u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(byte *)(in_ecx + 0x90) = *(byte *)(in_ecx + 0x90) & 0xf3;
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf35 */
byte F_00a5f620(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f620u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 4) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 4;
    return (bVar1 & 8) >> 3;
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf36 */
byte F_00a5f650(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((*(int *)(in_ecx + 0x7c) != 0) && (bVar1 = *(byte *)(in_ecx + 0x90), (bVar1 & 8) == 0)) {
    *(byte *)(in_ecx + 0x90) = bVar1 | 8;
    return (bVar1 & 4) >> 2;
  }
  return 0;
}

/* ref: FUN_00a5f680 */
unsigned int F_00a5f680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(this,1,(*(int *)(gen_frame + 0x8)));
    ((code *)*(gen_code32 *)(*(int *)this + 0xd0))(this);
  }
  return 0;
}

/* ref: FUN_00a5f6d0 */
unsigned int F_00a5f6d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa5f6d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  if (*(int *)((int)this + 0xf0) != 0) {
    gen_piece_set(&(*(int *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((uint3)((uint)((int)(uintptr_t)this) >> 8)));
    (*(int *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3),1);
    if ((char)param_1 == '\x01') {
      (*(int *)(gen_frame + 0x8)) = (uint)GEN_PIECE(&(*(int *)(gen_frame + 0x8)), 1, 3) << 8;
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xbc))(0,(*(int *)(gen_frame + 0x8)));
  }
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf47 */
unsigned int F_00a5f710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa5f710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  int iVar1;
  char cVar2;
  
  if ((((byte)this[0x8f] & 2) == 0) && (this_00 = *(undefined * PTR32 *)(this + 0xf0), this_00 != (undefined *)0x0))
  {
    cVar2 = (char)param_1;
    if (*(int *)((int)this_00 + 0x9c) != 0) {
      iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1a) >> 0x1d;
      if (iVar1 != 0) {
        if (iVar1 == 1) {
          if (cVar2 != '\0') {
            return 0;
          }
        }
        else {
          if (iVar1 != 2) {
            return 0;
          }
          if (cVar2 != '\x01') {
            return 0;
          }
        }
      }
      F_005e3480(this_00,param_1,param_2);
      return 0;
    }
    iVar1 = (*(int *)((int)this_00 + 0xb0) << 0x1d) >> 0x1d;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        if (cVar2 != '\0') {
          return 0;
        }
      }
      else {
        if (iVar1 != 2) {
          return 0;
        }
        if (cVar2 != '\x01') {
          return 0;
        }
      }
    }
    F_005f51d0(this_00,param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00a5f7a0 */
uint F_00a5f7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa5f7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
  if (((char)uVar2 != '\0') && (REFG(char, 0x1379c96) == '\0')) {
    bVar1 = F_005e1600();
    uVar2 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 1) {
      uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this);
      if ((char)uVar2 == '\0') {
        if ((((*(byte *)((int)this + 0x8e) & 0x80) != 0) && (*(int *)((int)this + 0x7c) == 0)) &&
           (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0)) {
          bVar1 = F_005d5fe0(*(undefined * PTR32 *)((int)this + 0xf0));
          uVar2 = CONCAT31(extraout_var_00,bVar1);
          if (bVar1 == 1) {
            uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xf0) + 0xbc))))(*(int * PTR32 *)((int)this + 0xf0));
            if ((char)uVar2 == '\0') {
              uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this);
              return uVar2;
            }
          }
        }
      }
      else if ((*(byte *)((int)this + 0x8e) & 0x80) == 0) {
        uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        return uVar2;
      }
    }
  }
  return uVar2;
}

/* ref: Client::Game::Object::GameObject::vf49 */
byte F_00a5f830(void)
{
  GEN_ENTER(0xa5f830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GameObject::vf50 */
byte F_00a5f840(void)
{
  GEN_ENTER(0xa5f840u, 0u, 0u, 0u, 0u);
  return 0;
}

