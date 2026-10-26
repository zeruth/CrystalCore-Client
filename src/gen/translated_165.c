#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: hkaPredictiveCompressedAnimation::vf16 */
byte F_00d6eb30(void)
{
  GEN_ENTER(0xd6eb30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkaPredictiveCompressedAnimation::vf17 */
uint F_00d6eb40(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x8c);
}

/* ref: hkaPredictiveCompressedAnimation::vf18 */
uint F_00d6eb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd6eb50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x8c) = param_2;
  return param_2;
}

/* ref: FUN_00d6eb70 */
unsigned int F_00d6eb70(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd6eb70u, 0u, 0u, 0u, 0u);
  float in_xmm0 = (float)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00d6eb90 */
unsigned int F_00d6eb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6eb90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  if ((in_ecx != 0) && (0 < in_eax)) {
    iVar3 = (in_eax - 1U >> 4) + 1;
    do {
      uVar2 = (uint)*(ushort *)*param_3;
      *param_3 = (ushort *)*param_3 + 1;
      iVar4 = in_eax;
      if (0xf < in_eax) {
        iVar4 = 0x10;
      }
      iVar1 = 0;
      if (0 < iVar4) {
        do {
          *(byte *)(in_ecx + iVar1) = *(byte *)(in_ecx + iVar1) & -((byte)uVar2 & 1);
          iVar1 = iVar1 + 1;
          uVar2 = (int)uVar2 >> 1;
        } while (iVar1 < iVar4);
      }
      in_eax = in_eax + -0x10;
      in_ecx = in_ecx + 0x10;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d6ec00 */
unsigned int F_00d6ec00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ec00u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
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
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  fVar5 = *param_3;
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_4;
  fVar10 = param_4[1];
  fVar11 = param_4[2];
  fVar12 = param_4[3];
  *in_eax = fVar5 * fVar9;
  in_eax[1] = fVar6 * fVar10;
  in_eax[2] = fVar7 * fVar11;
  in_eax[3] = fVar8 * fVar12;
  fVar13 = param_5[1];
  fVar14 = param_5[2];
  fVar15 = param_5[3];
  *in_eax = *param_5 * fVar1 + fVar5 * fVar9;
  in_eax[1] = fVar13 * fVar2 + fVar6 * fVar10;
  in_eax[2] = fVar14 * fVar3 + fVar7 * fVar11;
  in_eax[3] = fVar15 * fVar4 + fVar8 * fVar12;
  return 0;
}

/* ref: hkaPredictiveCompressedAnimation::vf10 */
uint F_00d6ec30(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ec30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x68) * 4 + 0xfU & 0xfffffff0) +
         (*(int *)(this + 0x38) * 2 + 0xfU & 0xfffffff0) + 0xa0 +
         (*(int *)(this + 0x90) + 0x1fU & 0xfffffff0);
}

/* ref: hkaPredictiveCompressedAnimation::vf11 */
uint F_00d6ec60(unsigned int gen_a0)
{
  GEN_ENTER(0xd6ec60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x1c))) + 3U & 0xfffffffc;
  uVar1 = *((int *)GEN_TOP((*(int *)(this + 0x8c) + 0x40))) + 3U & 0xfffffffc;
  return (uVar1 + 0xf & 0xfffffff0) + 0x100 + (uVar1 + uVar2 * 0x24) * 4 +
         (uVar2 + 0xf & 0xfffffff0);
}

/* ref: FUN_00d6eca0 */
uint F_00d6eca0(unsigned int gen_a0)
{
  GEN_ENTER(0xd6eca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return *(int *)((int)this + 0x2c) +
         (*(int *)((int)this + 0x38) + 0x4a + *(int *)((int)this + 0x68) * 2) * 2;
}

/* ref: FUN_00d6ecc0 */
uint F_00d6ecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd6ecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  short * in_eax = (short *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  sVar1 = in_eax[1];
  sVar2 = in_eax[2];
  sVar3 = in_eax[3];
  sVar4 = in_eax[4];
  sVar5 = in_eax[5];
  sVar6 = in_eax[6];
  sVar7 = in_eax[7];
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  fVar11 = param_4[1];
  fVar12 = param_4[2];
  fVar13 = param_4[3];
  *param_6 = (float)(int)*in_eax * *in_ecx + *param_4;
  param_6[1] = (float)(int)sVar1 * fVar8 + fVar11;
  param_6[2] = (float)(int)sVar2 * fVar9 + fVar12;
  param_6[3] = (float)(int)sVar3 * fVar10 + fVar13;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_5[1];
  fVar12 = param_5[2];
  fVar13 = param_5[3];
  *param_7 = (float)(int)sVar4 * *param_3 + *param_5;
  param_7[1] = (float)(int)sVar5 * fVar8 + fVar11;
  param_7[2] = (float)(int)sVar6 * fVar9 + fVar12;
  param_7[3] = (float)(int)sVar7 * fVar10 + fVar13;
  return (uint)param_7;
}

/* ref: FUN_00d6ed20 */
uint F_00d6ed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd6ed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 / 0xf;
  *param_2 = 0;
  if (uVar2 != 0) {
    iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
    *param_2 = CONCAT22(*(undefined2 *)(iVar1 + -2 + uVar2 * 4),
                        *(undefined2 *)(iVar1 + -4 + uVar2 * 4));
  }
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
  *param_3 = CONCAT22(*(undefined2 *)(iVar1 + 2 + uVar2 * 4),*(undefined2 *)(iVar1 + uVar2 * 4));
  return (uint)param_3;
}

/* ref: hkaPredictiveCompressedAnimation::vf9 */
unsigned int F_00d6ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd6ed80u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  
  puVar2 = (*(undefined4 * PTR32 *)&gen_args[3]);
  *(*(undefined4 * PTR32 *)&gen_args[3]) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[3])[1] = 0x94;
  F_00d6ed20((*(undefined * PTR32 *)&gen_args[0]),(*(int *)&gen_args[1]),&(*(undefined4 * PTR32 *)&gen_args[3]),&(*(int *)&gen_args[1]));
  puVar2[2] = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  puVar2[3] = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[3]);
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x34)));
  }
  puVar2[4] = uVar3;
  puVar2[5] = iVar1 * 2;
  iVar1 = *((int *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x68)));
  if (iVar1 == 0) {
    puVar2[6] = 0;
    puVar2[7] = 0;
    return 0;
  }
  puVar2[6] = *((undefined4 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 100)));
  puVar2[7] = iVar1 * 4;
  return 0;
}

/* ref: FUN_00d6f5e0 */
uint F_00d6f5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd6f5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 0xc);
  uVar1 = *(undefined4 *)(param_1 + 8);
  *(uint *)((int)this + 0x2c) = uVar2;
  *(undefined4 *)((int)this + 0x28) = uVar1;
  *(uint *)((int)this + 0x30) = uVar2 | 0x80000000;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(uint *)(param_1 + 0x14) >> 1;
  *(uint *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(uint *)((int)this + 0x3c) = uVar2 | 0x80000000;
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar3 = *(uint *)(param_1 + 0x1c) >> 2;
  *(uint *)((int)this + 0x68) = uVar3;
  *(uint *)((int)this + 100) = uVar2;
  *(uint *)((int)this + 0x6c) = uVar3 | 0x80000000;
  return uVar2;
}

/* ref: FUN_00d6f630 */
uint F_00d6f630(unsigned int gen_a0)
{
  GEN_ENTER(0xd6f630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  puVar1 = (undefined8 *)F_00d6eaa0(((undefined1 *)(gen_frame + 0xc)));
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar2 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    puVar2[3] = puVar1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)this;
}

/* ref: FUN_00d6f6c0 */
uint F_00d6f6c0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8)
{
  GEN_ENTER(0xd6f6c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = ((int)0x80000000);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = ((int)0x80000000);
  param_1[8] = ((int)0x80000000);
  param_1[6] = 0;
  param_1[7] = 0;
  F_00d6eaa0(&(*(float *)(gen_frame + 0xc)));
  (*(float *)(gen_frame + 0xc)) = param_2;
  (*(float *)(gen_frame + 0x10)) = param_3;
  (*(float *)(gen_frame + 0x14)) = param_4;
  (*(float *)(gen_frame + 0x18)) = param_5;
  (*(float *)(gen_frame + 0x1c)) = param_6;
  (*(float *)(gen_frame + 0x20)) = param_7;
  (*(float *)(gen_frame + 0x24)) = param_8;
  (*(float *)(gen_frame + 0x28)) = param_9;
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_1,0x20);
  }
  puVar1 = (undefined8 *)(param_1[1] * 0x20 + *param_1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))),(uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
    puVar1[1] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x14))));
    puVar1[2] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x20))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))));
    puVar1[3] = CONCAT44((uint)gen_fl2bits((*(float *)(gen_frame + 0x28))),(uint)gen_fl2bits((*(float *)(gen_frame + 0x24))));
  }
  param_1[1] = param_1[1] + 1;
  return (uint)param_1;
}

/* ref: FUN_00d721f0 */
uint F_00d721f0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd721f0u, gen_a0, 0u, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 * local_1c;
  uint local_18;
  uint local_14;
  uint local_c;
  uint local_8;
  
  iVar11 = *param_7;
  iVar1 = *(int *)(iVar11 + 0x80);
  iVar12 = *(int *)(iVar11 + 0x7c);
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *(uint *)((int)pvVar5 + 0xc);
  uVar13 = (iVar12 + 3U & 0xfffffffc) * 0x30 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar13) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_18 + uVar13)) {
    local_18 = F_00d94390(pvVar5,uVar13);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_18 + uVar13;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(uint *)((int)pvVar5 + 0xc);
  uVar9 = (iVar1 + 3U & 0xfffffffc) * 4 + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (*(uint *)((int)pvVar5 + 0x10) < local_14 + uVar9)
     ) {
    local_14 = F_00d94390(pvVar5,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_14 + uVar9;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar5 + 0xc);
  uVar10 = (iVar12 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_c + uVar10)) {
    local_c = F_00d94390(pvVar5,uVar10);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_c + uVar10;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar5 + 0xc);
  uVar14 = (iVar1 + 0xfU & 0xfffffff0) + 0x7f & 0xffffff80;
  if ((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
     (*(uint *)((int)pvVar5 + 0x10) < local_8 + uVar14)) {
    local_8 = F_00d94390(pvVar5,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_8 + uVar14;
  }
  F_00da1030(local_c,0xff,iVar12);
  F_00da1030(local_8,0xff,iVar1);
  F_00d6f800(iVar11,param_1,param_2,param_7[2],param_5,param_6,iVar12,iVar1,local_18,local_14,
               local_c,local_8);
  iVar11 = 0;
  param_7 = (int *)0x0;
  puVar8 = param_9;
  if (3 < iVar12) {
    puVar6 = (undefined4 *)(local_18 + 0x50);
    do {
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_c + (int)param_7)) {
        uVar2 = puVar6[-0x13];
        uVar3 = puVar6[-0x12];
        uVar4 = puVar6[-0x11];
        *puVar8 = puVar6[-0x14];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[-0xf];
        uVar3 = puVar6[-0xe];
        uVar4 = puVar6[-0xd];
        puVar8[4] = puVar6[-0x10];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[-0xb];
        uVar3 = puVar6[-10];
        uVar4 = puVar6[-9];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[-0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_c + 1 + (int)param_7)) {
        uVar2 = puVar6[-7];
        uVar3 = puVar6[-6];
        uVar4 = puVar6[-5];
        *puVar7 = puVar6[-8];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[-3];
        uVar3 = puVar6[-2];
        uVar4 = puVar6[-1];
        puVar7[4] = puVar6[-4];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[1];
        uVar3 = puVar6[2];
        uVar4 = puVar6[3];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = *puVar6;
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_c + 2 + (int)param_7)) {
        uVar2 = puVar6[5];
        uVar3 = puVar6[6];
        uVar4 = puVar6[7];
        *puVar8 = puVar6[4];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = puVar6[9];
        uVar3 = puVar6[10];
        uVar4 = puVar6[0xb];
        puVar8[4] = puVar6[8];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = puVar6[0xd];
        uVar3 = puVar6[0xe];
        uVar4 = puVar6[0xf];
        puVar7 = puVar8 + 0xc;
        puVar8[8] = puVar6[0xc];
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      if (param_3 <= iVar11) goto LAB_00d72508;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_c + 3 + (int)param_7)) {
        uVar2 = puVar6[0x11];
        uVar3 = puVar6[0x12];
        uVar4 = puVar6[0x13];
        *puVar7 = puVar6[0x10];
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        uVar2 = puVar6[0x15];
        uVar3 = puVar6[0x16];
        uVar4 = puVar6[0x17];
        puVar7[4] = puVar6[0x14];
        puVar7[5] = uVar2;
        puVar7[6] = uVar3;
        puVar7[7] = uVar4;
        uVar2 = puVar6[0x19];
        uVar3 = puVar6[0x1a];
        uVar4 = puVar6[0x1b];
        puVar8 = puVar7 + 0xc;
        puVar7[8] = puVar6[0x18];
        puVar7[9] = uVar2;
        puVar7[10] = uVar3;
        puVar7[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = (int *)((int)param_7 + 4);
      puVar6 = puVar6 + 0x30;
    } while ((int)param_7 < iVar12 + -3);
  }
  if ((int)param_7 < iVar12) {
    local_1c = (undefined4 *)(local_18 + 0x20 + (int)((int)(uintptr_t)param_7) * 0x30);
    do {
      if (param_3 <= iVar11) break;
      puVar6 = puVar8;
      if (0.0 < (float)*(byte *)(local_c + (int)param_7)) {
        uVar2 = local_1c[-7];
        uVar3 = local_1c[-6];
        uVar4 = local_1c[-5];
        *puVar8 = local_1c[-8];
        puVar8[1] = uVar2;
        puVar8[2] = uVar3;
        puVar8[3] = uVar4;
        uVar2 = local_1c[-3];
        uVar3 = local_1c[-2];
        uVar4 = local_1c[-1];
        puVar8[4] = local_1c[-4];
        puVar8[5] = uVar2;
        puVar8[6] = uVar3;
        puVar8[7] = uVar4;
        uVar2 = local_1c[1];
        uVar3 = local_1c[2];
        uVar4 = local_1c[3];
        puVar6 = puVar8 + 0xc;
        puVar8[8] = *local_1c;
        puVar8[9] = uVar2;
        puVar8[10] = uVar3;
        puVar8[0xb] = uVar4;
        iVar11 = iVar11 + 1;
      }
      param_7 = (int *)((int)param_7 + 1);
      local_1c = local_1c + 0xc;
      puVar8 = puVar6;
    } while ((int)param_7 < iVar12);
  }
LAB_00d72508: ;
  iVar11 = 0;
  iVar12 = 0;
  puVar8 = param_10;
  if (3 < iVar1) {
    puVar6 = (undefined4 *)(local_14 + 8);
    do {
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_8 + iVar12)) {
        puVar7 = puVar8 + 1;
        *puVar8 = puVar6[-2];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_8 + 1 + iVar12)) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[-1];
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar7 = puVar8;
      if (0.0 < (float)*(byte *)(local_8 + 2 + iVar12)) {
        puVar7 = puVar8 + 1;
        *puVar8 = *puVar6;
        iVar11 = iVar11 + 1;
      }
      if (param_4 <= iVar11) goto LAB_00d725fc;
      puVar8 = puVar7;
      if (0.0 < (float)*(byte *)(local_8 + 3 + iVar12)) {
        puVar8 = puVar7 + 1;
        *puVar7 = puVar6[1];
        iVar11 = iVar11 + 1;
      }
      iVar12 = iVar12 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar12 < iVar1 + -3);
  }
  while ((iVar12 < iVar1 && (iVar11 < param_4))) {
    puVar6 = puVar8;
    if (0.0 < (float)*(byte *)(local_8 + iVar12)) {
      puVar6 = puVar8 + 1;
      *puVar8 = *(undefined4 *)(local_14 + iVar12 * 4);
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar12 + 1;
    puVar8 = puVar6;
  }
LAB_00d725fc: ;
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar14) ||
      (uVar14 + local_8 != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_8)) {
    F_00d945c0(pvVar5,local_8,uVar14);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_8;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar10) ||
      (uVar10 + local_c != *(int *)((int)pvVar5 + 0xc))) ||
     (*(uint *)((int)pvVar5 + 0x14) == local_c)) {
    F_00d945c0(pvVar5,local_c,uVar10);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_c;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar5 + 8) < (int)uVar9) || (uVar9 + local_14 != *(int *)((int)pvVar5 + 0xc))
      ) || (*(uint *)((int)pvVar5 + 0x14) == local_14)) {
    F_00d945c0(pvVar5,local_14,uVar9);
  }
  else {
    *(uint *)((int)pvVar5 + 0xc) = local_14;
  }
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar13 <= *(int *)((int)pvVar5 + 8)) &&
      (uVar13 + local_18 == *(int *)((int)pvVar5 + 0xc))) &&
     (*(uint *)((int)pvVar5 + 0x14) != local_18)) {
    *(uint *)((int)pvVar5 + 0xc) = local_18;
    return (uint)pvVar5;
  }
  uVar13 = F_00d945c0(pvVar5,local_18,uVar13);
  return uVar13;
}

/* ref: hkaPredictiveCompressedAnimation::vf3 */
uint F_00d726e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd726e0u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  uint uVar5;
  undefined4 * puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  uint local_30;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  int local_8;
  
  iVar13 = *(int *)(param_1[0x23] + 0x28);
  iVar14 = param_1[0x1f];
  if (iVar13 <= param_1[0x1f]) {
    iVar14 = iVar13;
  }
  iVar13 = *(int *)(param_1[0x23] + 0x34);
  local_8 = param_1[0x20];
  if (iVar13 <= param_1[0x20]) {
    local_8 = iVar13;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_18 = *(uint *)((int)pvVar4 + 0xc);
  uVar7 = iVar14 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar7) || (*(uint *)((int)pvVar4 + 0x10) < uVar7 + local_18)
     ) {
    local_18 = F_00d94390(pvVar4,uVar7);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar7 + local_18;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_10 = *(uint *)((int)pvVar4 + 0xc);
  uVar11 = local_8 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
     (*(uint *)((int)pvVar4 + 0x10) < uVar11 + local_10)) {
    local_10 = F_00d94390(pvVar4,uVar11);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar11 + local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(uint *)((int)pvVar4 + 0xc);
  uVar8 = iVar14 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (*(uint *)((int)pvVar4 + 0x10) < uVar8 + local_c))
  {
    local_c = F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar8 + local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_14 = *(uint *)((int)pvVar4 + 0xc);
  uVar12 = local_8 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
     (*(uint *)((int)pvVar4 + 0x10) < uVar12 + local_14)) {
    local_14 = F_00d94390(pvVar4,uVar12);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = uVar12 + local_14;
  }
  F_00da1030(local_c,0xff,iVar14);
  F_00da1030(local_14,0xff,local_8);
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar15 = (float10)(int)(uVar5 - 1);
  if ((int)(uVar5 - 1) < 0) {
    fVar15 = fVar15 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar15 = fVar15 * ((float10)param_2 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  uVar5 = uVar5 - 2;
  local_30 = (uint)(longlong)TRUNC(fVar15);
  fVar17 = REFG(float, 0x1087f04);
  if (local_30 <= uVar5) {
    fVar16 = (float10)(int)local_30;
    if ((int)local_30 < 0) {
      fVar16 = fVar16 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar15 = fVar15 - fVar16;
    fVar17 = (float)fVar15;
    uVar5 = local_30;
    if (fVar15 < (float10)0) {
      fVar17 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar17) {
      fVar17 = REFG(float, 0x1087f04);
    }
  }
  F_00d6f800(param_1,uVar5,fVar17,0,*(undefined4 *)(param_1[0x23] + 0x24),
               *(undefined4 *)(param_1[0x23] + 0x30),iVar14,local_8,local_18,local_10,local_c,
               local_14);
  iVar13 = 0;
  if (0 < iVar14) {
    puVar6 = (undefined4 *)(local_18 + 0x20);
    puVar10 = param_3;
    do {
      puVar9 = puVar10;
      if (*(char *)(local_c + iVar13) != '\0') {
        uVar1 = puVar6[-7];
        uVar2 = puVar6[-6];
        uVar3 = puVar6[-5];
        *puVar10 = puVar6[-8];
        puVar10[1] = uVar1;
        puVar10[2] = uVar2;
        puVar10[3] = uVar3;
        uVar1 = puVar6[-3];
        uVar2 = puVar6[-2];
        uVar3 = puVar6[-1];
        puVar10[4] = puVar6[-4];
        puVar10[5] = uVar1;
        puVar10[6] = uVar2;
        puVar10[7] = uVar3;
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        puVar9 = puVar10 + 0xc;
        puVar10[8] = *puVar6;
        puVar10[9] = uVar1;
        puVar10[10] = uVar2;
        puVar10[0xb] = uVar3;
      }
      iVar13 = iVar13 + 1;
      puVar6 = puVar6 + 0xc;
      puVar10 = puVar9;
    } while (iVar13 < iVar14);
  }
  iVar13 = 0;
  puVar10 = param_4;
  if (3 < local_8) {
    puVar6 = (undefined4 *)(local_10 + 8);
    do {
      puVar9 = puVar10;
      if (*(char *)(local_14 + iVar13) != '\0') {
        puVar9 = puVar10 + 1;
        *puVar10 = puVar6[-2];
      }
      puVar10 = puVar9;
      if (*(char *)(local_14 + 1 + iVar13) != '\0') {
        puVar10 = puVar9 + 1;
        *puVar9 = puVar6[-1];
      }
      puVar9 = puVar10;
      if (*(char *)(local_14 + 2 + iVar13) != '\0') {
        puVar9 = puVar10 + 1;
        *puVar10 = *puVar6;
      }
      puVar10 = puVar9;
      if (*(char *)(local_14 + 3 + iVar13) != '\0') {
        puVar10 = puVar9 + 1;
        *puVar9 = puVar6[1];
      }
      iVar13 = iVar13 + 4;
      puVar6 = puVar6 + 4;
    } while (iVar13 < local_8 + -3);
  }
  for (; iVar13 < local_8; iVar13 = iVar13 + 1) {
    puVar6 = puVar10;
    if (*(char *)(local_14 + iVar13) != '\0') {
      puVar6 = puVar10 + 1;
      *puVar10 = *(undefined4 *)(local_10 + iVar13 * 4);
    }
    puVar10 = puVar6;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar12) ||
      (uVar12 + local_14 != *(int *)((int)pvVar4 + 0xc))) ||
     (*(uint *)((int)pvVar4 + 0x14) == local_14)) {
    F_00d945c0(pvVar4,local_14,uVar12);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_14;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (uVar8 + local_c != *(int *)((int)pvVar4 + 0xc)))
     || (*(uint *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar11) ||
      (uVar11 + local_10 != *(int *)((int)pvVar4 + 0xc))) ||
     (*(uint *)((int)pvVar4 + 0x14) == local_10)) {
    F_00d945c0(pvVar4,local_10,uVar11);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_10;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar7 <= *(int *)((int)pvVar4 + 8)) &&
      (uVar7 + local_18 == *(int *)((int)pvVar4 + 0xc))) &&
     (*(uint *)((int)pvVar4 + 0x14) != local_18)) {
    *(uint *)((int)pvVar4 + 0xc) = local_18;
    return (uint)pvVar4;
  }
  uVar7 = F_00d945c0(pvVar4,local_18,uVar7);
  return uVar7;
}

/* ref: FUN_00d72ac0 */
unsigned int F_00d72ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xd72ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  uint local_c;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x1c))(param_1);
  fVar2 = (float10)(int)(uVar1 - 1);
  if ((int)(uVar1 - 1) < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = fVar2 * ((float10)param_4 / ((float10)GEN_TOD(gen_bits2f(param_1[3]))));
  uVar1 = uVar1 - 2;
  local_c = (uint)(longlong)TRUNC(fVar2);
  fVar4 = REFG(float, 0x1087f04);
  if (local_c <= uVar1) {
    fVar3 = (float10)(int)local_c;
    if ((int)local_c < 0) {
      fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    fVar2 = fVar2 - fVar3;
    fVar4 = (float)fVar2;
    uVar1 = local_c;
    if (fVar2 < (float10)0) {
      fVar4 = 0.0;
    }
    else if (REFG(float, 0x1087f04) < fVar4) {
      fVar4 = REFG(float, 0x1087f04);
    }
  }
  F_00d6f800(param_1,uVar1,fVar4,0,*(undefined4 *)(param_1[0x23] + 0x24),
               *(undefined4 *)(param_1[0x23] + 0x30),param_1[0x1f],param_1[0x20],param_2,param_3,0,0
              );
  return 0;
}

/* ref: FUN_00d72bf0 */
uint F_00d72bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_minps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c10 */
uint F_00d72c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a1;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  
  gen_maxps(&(auVar1), &(*param_1), &(*param_2));
  memcpy(&(*(gen_v16 *)this), &(auVar1), sizeof(auVar1) < sizeof(*(gen_v16 *)this) ? sizeof(auVar1) : sizeof(*(gen_v16 *)this));
  return (uint)param_1;
}

/* ref: FUN_00d72c30 */
uint F_00d72c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d72c50 */
uint F_00d72c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72c50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d72c60 */
uint F_00d72c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd72c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d72c90 */
uint F_00d72c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd72c90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d72cb0 */
uint F_00d72cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = in_ecx[1];
  iVar2 = in_ecx[2];
  iVar3 = in_ecx[3];
  *param_2 = (float)*in_ecx;
  param_2[1] = (float)iVar1;
  param_2[2] = (float)iVar2;
  param_2[3] = (float)iVar3;
  return (uint)param_2;
}

/* ref: FUN_00d72cf0 */
uint F_00d72cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72cf0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined1 auVar1 [16];
  
  (*(undefined2 *)((char *)&auVar1 + 2)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 0)) = *(ushort *)(param_2 + 8);
  (*(undefined2 *)((char *)&auVar1 + 4)) = *(undefined2 *)(param_2 + 10);
  (*(undefined2 *)((char *)&auVar1 + 6)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 8)) = *(undefined2 *)(param_2 + 0xc);
  (*(undefined2 *)((char *)&auVar1 + 10)) = 0;
  (*(undefined2 *)((char *)&auVar1 + 12)) = *(undefined2 *)(param_2 + 0xe);
  (*(undefined2 *)((char *)&auVar1 + 14)) = 0;
  memcpy(&(*in_ecx), &(auVar1), sizeof(auVar1) < sizeof(*in_ecx) ? sizeof(auVar1) : sizeof(*in_ecx));
  return param_2;
}

/* ref: FUN_00d72d10 */
unsigned int F_00d72d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar2;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar1;
  return 0;
}

/* ref: FUN_00d72d30 */
uint F_00d72d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *in_ecx = *param_2 & 0x7fffffff;
  in_ecx[1] = uVar1 & 0x7fffffff;
  in_ecx[2] = uVar2 & 0x7fffffff;
  in_ecx[3] = uVar3 & 0x7fffffff;
  return (uint)param_2;
}

/* ref: FUN_00d72d50 */
uint F_00d72d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 << 0x10;
  in_ecx[1] = iVar1 << 0x10;
  in_ecx[2] = iVar2 << 0x10;
  in_ecx[3] = iVar3 << 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d70 */
uint F_00d72d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72d70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *in_ecx = *param_2 >> 0x10;
  in_ecx[1] = iVar1 >> 0x10;
  in_ecx[2] = iVar2 >> 0x10;
  in_ecx[3] = iVar3 >> 0x10;
  return (uint)param_2;
}

/* ref: FUN_00d72d90 */
uint F_00d72d90(unsigned int gen_a0)
{
  GEN_ENTER(0xd72d90u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae8) + 4));
  uVar2 = (undefined4)REFG(undefined8, 0x1138ae8);
  uVar1 = (*(undefined4 *)((char *)&REFG(undefined8, 0x1138ae0) + 4));
  *param_1 = (undefined4)REFG(undefined8, 0x1138ae0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00d72db0 */
uint F_00d72db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x34) + *(int *)((int)this + param_1 * 4 + 0x40) * 2;
}

/* ref: FUN_00d72dd0 */
uint F_00d72dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 100) + *(int *)((int)this + param_1 * 4 + 0x70) * 4;
}

/* ref: FUN_00d72df0 */
uint F_00d72df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x40);
  if (param_1 == 8) {
    return (*(int *)((int)this + 0x38) + -8) - iVar1;
  }
  return *(int *)((int)this + param_1 * 4 + 0x44) - iVar1;
}

/* ref: FUN_00d72e40 */
uint F_00d72e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72e70 */
uint F_00d72e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x44) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72ea0 */
unsigned int F_00d72ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ea0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return 0;
}

/* ref: FUN_00d72ed0 */
uint F_00d72ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x94;
  return param_2;
}

/* ref: FUN_00d72ef0 */
uint F_00d72ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 2;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d72f20 */
uint F_00d72f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1[1] == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  uVar1 = param_1[1] * 4;
  *(undefined4 *)this = *param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00d72f50 */
uint F_00d72f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd72f50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d72f60 */
unsigned int F_00d72f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd72f60u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d72fb0 */
uint F_00d72fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd72fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d72fd0 */
uint F_00d72fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd72fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d73000 */
uint F_00d73000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd73000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d73040 */
uint F_00d73040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73040u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = param_2[1];
  sVar2 = param_2[2];
  sVar3 = param_2[3];
  *in_ecx = (int)*param_2;
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return (uint)param_2;
}

/* ref: FUN_00d73070 */
uint F_00d73070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73070u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  short sVar1;
  short sVar2;
  short sVar3;
  
  sVar1 = *(short *)(param_2 + 10);
  sVar2 = *(short *)(param_2 + 0xc);
  sVar3 = *(short *)(param_2 + 0xe);
  *in_ecx = (int)*(short *)(param_2 + 8);
  in_ecx[1] = (int)sVar1;
  in_ecx[2] = (int)sVar2;
  in_ecx[3] = (int)sVar3;
  return param_2;
}

/* ref: FUN_00d730a0 */
unsigned int F_00d730a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd730a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return 0;
}

/* ref: FUN_00d730d0 */
unsigned int F_00d730d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd730d0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  
  fVar1 = ABS(*param_1);
  fVar2 = ABS(param_1[1]);
  fVar3 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar4 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar2 + fVar1) + fVar3));
  (*(undefined4 *)((char *)&auVar4 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar2 + fVar1) + fVar3));
  gen_maxps(&(auVar4), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar4));
  gen_minps(&(auVar4), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar4));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar4 + 12));
  return 0;
}

/* ref: FUN_00d73130 */
unsigned int F_00d73130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73130u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  
  fVar4 = ABS(*param_1);
  fVar5 = ABS(param_1[1]);
  fVar6 = ABS(param_1[2]);
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar7));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_1 = *param_1;
  param_1[1] = param_1[1];
  param_1[2] = param_1[2];
  param_1[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_2);
  fVar5 = ABS(param_2[1]);
  fVar6 = ABS(param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar1));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_2 = *param_2;
  param_2[1] = param_2[1];
  param_2[2] = param_2[2];
  param_2[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_3);
  fVar5 = ABS(param_3[1]);
  fVar6 = ABS(param_3[2]);
  (*(undefined4 *)((char *)&auVar2 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar2 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar2));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_3 = *param_3;
  param_3[1] = param_3[1];
  param_3[2] = param_3[2];
  param_3[3] = (*(float *)((char *)&auVar7 + 12));
  fVar4 = ABS(*param_4);
  fVar5 = ABS(param_4[1]);
  fVar6 = ABS(param_4[2]);
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 4)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits((float)REFG(float, 0x1138af0) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 8)) - ((fVar5 + fVar4) + fVar6));
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&REFG(float, 0x1138af0) + 12)) - ((fVar5 + fVar4) + fVar6));
  gen_maxps(&(auVar7), &(*(gen_v16 *)&REFG(undefined8, 0x1138ae0)), &(auVar3));
  gen_minps(&(auVar7), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar7));
  *param_4 = *param_4;
  param_4[1] = param_4[1];
  param_4[2] = param_4[2];
  param_4[3] = (*(float *)((char *)&auVar7 + 12));
  return 0;
}

/* ref: FUN_00d73290 */
uint F_00d73290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x44) * 2;
  return CONCAT22(*((undefined2 *)GEN_TOP((iVar1 + 2 + (param_1 / 0xf) * 4))),
                  *((undefined2 *)GEN_TOP((iVar1 + (param_1 / 0xf) * 4))));
}

/* ref: FUN_00d732c0 */
unsigned int F_00d732c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd732c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d73320 */
uint F_00d73320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73340 */
uint F_00d73340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73340u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d73360 */
uint F_00d73360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d733a0 */
uint F_00d733a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd733a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00d733c0 */
unsigned int F_00d733c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd733c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d73420 */
uint F_00d73420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 1;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d73440 */
uint F_00d73440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = *(undefined4 *)this;
  uVar2 = *(uint *)((int)this + 4) >> 2;
  param_1[1] = uVar2;
  uVar2 = uVar2 | 0x80000000;
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return uVar2;
}

/* ref: FUN_00d73460 */
uint F_00d73460(unsigned int gen_a0)
{
  GEN_ENTER(0xd73460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d734a0 */
uint F_00d734a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd734a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d73540 */
uint F_00d73540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d91540((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: hkaAnimation::vf8 */
uint F_00d73560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaAnimation::vf10 */
uint F_00d73570(void)
{
  GEN_ENTER(0xd73570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf11 */
uint F_00d73580(void)
{
  GEN_ENTER(0xd73580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf16 */
byte F_00d73590(void)
{
  GEN_ENTER(0xd73590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf17 */
uint F_00d735a0(void)
{
  GEN_ENTER(0xd735a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf18 */
unsigned int F_00d735b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd735b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaAnimation::vf14 */
int F_00d735c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd735c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  
  fVar2 = param_2;
  fVar9 = param_2 + param_3;
  fVar10 = REFG(float, 0x1136e98);
  if (*(float *)(param_1 + 0xc) < fVar9) {
    fVar10 = fVar9 - *(float *)(param_1 + 0xc);
  }
  param_2 = *(float *)(param_1 + 0x20);
  iVar3 = 0;
  if (0 < (int)gen_fl2bits(param_2)) {
    iVar6 = *(int *)(param_1 + 0x1c);
    do {
      iVar7 = *(int *)(iVar6 + 8);
      iVar8 = 0;
      if (3 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*(int *)(iVar6 + 4) + 0x10)));
        iVar4 = (iVar7 - 4U >> 2) + 1;
        iVar8 = iVar4 * 4;
        do {
          fVar1 = pfVar5[-4];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[-2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          fVar1 = pfVar5[2];
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 8;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (iVar8 < iVar7) {
        pfVar5 = ((float *)GEN_TOP((*(int *)(iVar6 + 4) + iVar8 * 8)));
        iVar7 = iVar7 - iVar8;
        do {
          fVar1 = *pfVar5;
          if (((fVar2 <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            iVar3 = iVar3 + 1;
          }
          pfVar5 = pfVar5 + 2;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar6 = iVar6 + 0x10;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  return iVar3;
}

/* ref: hkaAnimation::vf15 */
uint F_00d736c0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd736c0u, gen_a0, 0u, 0u, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 * puVar8;
  float fVar9;
  float fVar10;
  int local_c;
  
  uVar5 = 0;
  if ((*(uint *)&gen_args[4]) == 0) {
    return uVar5;
  }
  fVar9 = (*(float *)&gen_args[1]) + (*(float *)&gen_args[2]);
  fVar10 = REFG(float, 0x1136e98);
  if (*(float *)((*(int *)&gen_args[0]) + 0xc) < fVar9) {
    fVar10 = fVar9 - *(float *)((*(int *)&gen_args[0]) + 0xc);
  }
  iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x20);
  uVar7 = 0;
  (*(float *)&gen_args[2]) = 0.0;
  if (0 < iVar2) {
    do {
      iVar6 = uVar5 * 0x10 + *(int *)((*(int *)&gen_args[0]) + 0x1c);
      iVar3 = *(int *)(iVar6 + 8);
      local_c = 0;
      if (0 < iVar3) {
        puVar8 = (undefined4 *)((*(int *)&gen_args[3]) + 4 + uVar7 * 0xc);
        do {
          fVar1 = *((float *)GEN_TOP((*(int *)(iVar6 + 4) + local_c * 8)));
          if ((((*(float *)&gen_args[1]) <= fVar1) && ((!GEN_ISNAN(fVar9) && !GEN_ISNAN(fVar1)) && !(fVar9 <= fVar1))) ||
             (fVar1 < fVar10)) {
            *(undefined2 *)(puVar8 + -1) = (*(undefined2 *)((char *)&(*(float *)&gen_args[2]) + 0));
            iVar4 = *(int *)(iVar6 + 4);
            *puVar8 = *(undefined4 *)(iVar4 + local_c * 8);
            F_00d91540(puVar8 + 1,iVar4 + local_c * 8 + 4);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 3;
            if (uVar7 == (*(uint *)&gen_args[4])) {
              return uVar7;
            }
          }
          local_c = local_c + 1;
        } while (local_c < iVar3);
      }
      (*(float *)&gen_args[2]) = gen_bits2f((int)gen_fl2bits((*(float *)&gen_args[2])) + 1);
      uVar5 = (uint)gen_fl2bits((*(float *)&gen_args[2])) & 0xffff;
    } while ((int)uVar5 < iVar2);
  }
  return uVar7;
}

/* ref: hkaAnimation::vf9 */
uint F_00d737c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd737c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  code * pcVar1;
  uint uVar2;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)),((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)),"getDataChunks not implemented for this type of animation");
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(undefined4, 0x15dff78),3,0x54e32124,((undefined1 *)(gen_frame + 0x0)),"Animation\\hkaAnimation.cpp",0x77);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)));
  return uVar2;
}

/* ref: hkaAnimation::vf4 */
uint F_00d73820(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd73820u, gen_a0, 0u, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 * local_c;
  uint local_8;
  
  iVar7 = param_1[4];
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_8 = *(uint *)((int)pvVar4 + 0xc);
  uVar8 = iVar7 * 0x30 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar8) || (*(uint *)((int)pvVar4 + 0x10) < local_8 + uVar8))
  {
    local_8 = F_00d94390(pvVar4,uVar8);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = local_8 + uVar8;
  }
  iVar7 = param_1[5];
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  local_c = *(undefined4 * PTR32 *)((int)pvVar4 + 0xc);
  uVar9 = iVar7 * 4 + 0x7fU & 0xffffff80;
  if ((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
     (*(uint *)((int)pvVar4 + 0x10) < (int)local_c + uVar9)) {
    local_c = (undefined4 *)F_00d94390(pvVar4,uVar9);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_c + uVar9;
  }
  ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,(undefined4)gen_fl2bits(param_2),local_8,local_c);
  param_2 = gen_bits2f(param_3 * 3);
  if (0 < (int)gen_fl2bits(param_2)) {
    puVar6 = (undefined4 *)(local_8 + 0xc);
    puVar5 = (undefined4 *)(param_4 + 8);
    do {
      uVar1 = puVar6[-2];
      uVar2 = *((undefined4 *)GEN_TOP(((local_8 - param_4) + (int)puVar5)));
      uVar3 = *puVar6;
      puVar5[-2] = puVar6[-3];
      puVar5[-1] = uVar1;
      *puVar5 = uVar2;
      puVar5[1] = uVar3;
      puVar6 = puVar6 + 4;
      puVar5 = puVar5 + 4;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) + -1);
    } while (param_2 != 0.0);
  }
  if (0 < param_5) {
    puVar6 = local_c;
    iVar7 = param_5;
    do {
      *((undefined4 *)GEN_TOP(((param_6 - (int)local_c) + (int)puVar6))) = *puVar6;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4,local_c,uVar9);
  }
  else {
    *(undefined4 * PTR32 *)((int)pvVar4 + 0xc) = local_c;
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar8 <= *(int *)((int)pvVar4 + 8)) && (uVar8 + local_8 == *(int *)((int)pvVar4 + 0xc))
      ) && (*(uint *)((int)pvVar4 + 0x14) != local_8)) {
    *(uint *)((int)pvVar4 + 0xc) = local_8;
    return (uint)pvVar4;
  }
  uVar8 = F_00d945c0(pvVar4,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d739c0 */
uint F_00d739c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd739c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined * pvVar6;
  int * piVar7;
  int iVar8;
  int local_10;
  int local_8;
  
  iVar5 = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x11353cc));
  *(undefined2 *)((int)this + 6) = 1;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  if (*(undefined * PTR32 *)(param_1 + 0x18) != (undefined *)0x0) {
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 0x18));
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18));
  }
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  iVar8 = *(int *)((int)this + 0x20);
  iVar1 = *(int *)(param_1 + 0x20);
  local_8 = iVar8;
  if (iVar1 <= iVar8) {
    local_8 = iVar1;
  }
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar2 = uVar4 * 2;
    iVar3 = iVar1;
    if (iVar1 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x1c),iVar3,0x10);
  }
  local_10 = (iVar8 - iVar1) + -1;
  if (-1 < local_10) {
    piVar7 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)((int)this + 0x1c) + 4 + local_10 * 0x10)));
    do {
      iVar8 = piVar7[1] + -1;
      if (-1 < iVar8) {
        pvVar6 = (undefined *)(*piVar7 + 4 + iVar8 * 8);
        do {
          F_00d91510(pvVar6);
          pvVar6 = (undefined *)((int)pvVar6 + -8);
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      piVar7[1] = 0;
      if (-1 < piVar7[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar7,piVar7[2] * 8);
      }
      *piVar7 = 0;
      piVar7[2] = ((int)0x80000000);
      F_00d91510(piVar7 + -1);
      local_10 = local_10 + -1;
      piVar7 = piVar7 + -4;
    } while (-1 < local_10);
  }
  pvVar6 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (0 < local_8) {
    iVar8 = *(int *)(param_1 + 0x1c) - (int)pvVar6;
    param_1 = local_8;
    do {
      F_00d73fe0(pvVar6,iVar8 + (int)pvVar6);
      pvVar6 = (undefined *)((int)pvVar6 + 0x10);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  pvVar6 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x1c) + local_8 * 0x10)));
  iVar8 = iVar1 - local_8;
  if (iVar8 < 1) {
    *(int *)((int)this + 0x20) = iVar1;
    return (uint)this;
  }
  iVar5 = (*(int *)(iVar5 + 0x1c) + local_8 * 0x10) - (int)pvVar6;
  do {
    if (pvVar6 != (undefined *)0x0) {
      F_00d87850(pvVar6,iVar5 + (int)pvVar6);
    }
    pvVar6 = (undefined *)((int)pvVar6 + 0x10);
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  *(int *)((int)this + 0x20) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73b90 */
unsigned int F_00d73b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
    *(undefined4 *)this = *param_1;
    return 0;
  }
  *(undefined4 *)this = *param_1;
  return 0;
}

/* ref: FUN_00d73bd0 */
uint F_00d73bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73bd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d73bf0 */
unsigned int F_00d73bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73bf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    this = (undefined *)(param_1 + 4);
    do {
      *(undefined4 *)((int)this + -4) = *(undefined4 *)(param_2 + iVar1 * 8);
      F_00d91540(this,(param_2 - param_1) + (int)this);
      iVar1 = iVar1 + 1;
      this = (undefined *)((int)this + 8);
    } while (iVar1 < param_3);
  }
  return 0;
}

/* ref: FUN_00d73c40 */
uint F_00d73c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d914e0((undefined *)((int)this + 4),param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00d73c90 */
uint F_00d73c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73c90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d73cd0 */
unsigned int F_00d73cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * this;
  int iVar1;
  
  if (0 < param_2) {
    this = param_1;
    iVar1 = param_2;
    do {
      if (this != (undefined *)0x0) {
        F_00d87850(this,(param_3 - (int)param_1) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d73d00 */
uint F_00d73d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73d00u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,8);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d73d40 */
unsigned int F_00d73d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  if (0 < param_2) {
    iVar1 = param_2;
    puVar2 = param_1;
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar2)));
        F_00d914e0(puVar2 + 1,(param_3 - (int)param_1) + (int)(puVar2 + 1));
      }
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d73da0 */
uint F_00d73da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd73da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_2[1];
  iVar4 = *(int *)((int)this + 4);
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(param_1,this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_2;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 + -4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
    } while (iVar6 < local_8);
  }
  puVar2 = (undefined4 *)(*(int *)this + local_8 * 8);
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_2 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(iVar7 + (int)puVar2);
      F_00d914e0(puVar2 + 1,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73ec0 */
uint F_00d73ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  undefined * pvVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  iVar1 = param_1[1];
  iVar4 = *(int *)((int)this + 4);
  local_8 = iVar4;
  if (iVar1 <= iVar4) {
    local_8 = iVar1;
  }
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar7 = uVar3 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,8);
  }
  iVar4 = (iVar4 - iVar1) + -1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5);
      pvVar5 = (undefined *)((int)pvVar5 + -8);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_1;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 + -4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5,(iVar4 - iVar7) + (int)pvVar5);
      iVar6 = iVar6 + 1;
      pvVar5 = (undefined *)((int)pvVar5 + 8);
    } while (iVar6 < local_8);
  }
  puVar2 = (undefined4 *)(*(int *)this + local_8 * 8);
  iVar4 = iVar1 - local_8;
  if (iVar4 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar7 = (*param_1 + local_8 * 8) - (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(iVar7 + (int)puVar2);
      F_00d914e0(puVar2 + 1,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73fe0 */
uint F_00d73fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd73fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  F_00d91540(this,param_1);
  iVar5 = *(int *)((int)this + 8);
  iVar1 = *(int *)(param_1 + 8);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar7 = uVar2 * 2;
    iVar6 = iVar1;
    if (iVar1 < iVar7) {
      iVar6 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar6,8);
  }
  iVar5 = (iVar5 - iVar1) + -1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar1 * 8 + 4 + iVar5 * 8)));
    do {
      F_00d91510(pvVar4);
      pvVar4 = (undefined *)((int)pvVar4 + -8);
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = *(int *)((int)this + 4);
  iVar7 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (0 < local_8) {
    pvVar4 = (undefined *)(iVar5 + 4);
    do {
      *(undefined4 *)((int)pvVar4 + -4) = *(undefined4 *)(iVar7 + iVar6 * 8);
      F_00d91540(pvVar4,(iVar7 - iVar5) + (int)pvVar4);
      iVar6 = iVar6 + 1;
      pvVar4 = (undefined *)((int)pvVar4 + 8);
    } while (iVar6 < local_8);
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + local_8 * 8)));
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 8) = iVar1;
    return (uint)this;
  }
  iVar7 = (*(int *)(param_1 + 4) + local_8 * 8) - (int)puVar3;
  do {
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *(undefined4 *)(iVar7 + (int)puVar3);
      F_00d914e0(puVar3 + 1,iVar7 + (int)(puVar3 + 1));
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 8) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74100 */
unsigned int F_00d74100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74100u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  int * piVar5;
  undefined * this;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_14;
  int local_10;
  undefined * local_8;
  
  if (0 < param_3) {
    local_10 = param_2;
    iVar6 = param_2 - param_1;
    piVar5 = (int *)(param_1 + 4);
    local_14 = param_3;
    do {
      F_00d91540(piVar5 + -1,local_10);
      piVar1 = (int *)(iVar6 + 4 + (int)piVar5);
      iVar7 = *((int *)GEN_TOP(((int)piVar1 + (param_1 - param_2))));
      iVar2 = *piVar1;
      param_3 = iVar7;
      if (iVar2 <= iVar7) {
        param_3 = iVar2;
      }
      if ((int)(piVar5[2] & 0x3fffffffU) < iVar2) {
        iVar3 = (piVar5[2] & 0x3fffffffU) * 2;
        if (iVar3 <= iVar2) {
          iVar3 = iVar2;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar5,iVar3,8);
      }
      iVar7 = (iVar7 - iVar2) + -1;
      if (-1 < iVar7) {
        local_8 = (undefined *)(*piVar5 + iVar2 * 8 + 4 + iVar7 * 8);
        do {
          F_00d91510(local_8);
          local_8 = (undefined *)((int)local_8 + -8);
          iVar7 = iVar7 + -1;
        } while (-1 < iVar7);
      }
      iVar7 = *(int *)(iVar6 + (int)piVar5);
      iVar3 = *piVar5;
      iVar8 = 0;
      if (0 < param_3) {
        this = (undefined *)(iVar3 + 4);
        do {
          *(undefined4 *)((int)this + -4) = *(undefined4 *)(iVar7 + iVar8 * 8);
          F_00d91540(this,(iVar7 - iVar3) + (int)this);
          iVar8 = iVar8 + 1;
          this = (undefined *)((int)this + 8);
        } while (iVar8 < param_3);
      }
      iVar7 = param_3 * 8;
      puVar4 = (undefined4 *)(*piVar5 + iVar7);
      param_3 = iVar2 - param_3;
      if (0 < param_3) {
        iVar7 = (*(int *)(iVar6 + (int)piVar5) + iVar7) - (int)puVar4;
        do {
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = *(undefined4 *)(iVar7 + (int)puVar4);
            F_00d914e0(puVar4 + 1,iVar7 + (int)(puVar4 + 1));
          }
          puVar4 = puVar4 + 2;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      local_10 = local_10 + 0x10;
      piVar5[1] = iVar2;
      piVar5 = piVar5 + 4;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  return 0;
}

/* ref: FUN_00d74250 */
uint F_00d74250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar1 = param_2[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(param_1,this,iVar6,0x10);
  }
  param_1 = (iVar5 - iVar1) + -1;
  if (-1 < param_1) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + param_1 * 0x10);
    do {
      iVar5 = piVar4[1] + -1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3);
          pvVar3 = (undefined *)((int)pvVar3 + -8);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      piVar4[1] = 0;
      if (-1 < piVar4[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[2] * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 + -1);
      param_1 = param_1 + -1;
      piVar4 = piVar4 + -4;
    } while (-1 < param_1);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_2 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar3 = (undefined *)(*(int *)this + local_8 * 0x10);
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_2 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != (undefined *)0x0) {
      F_00d87850(pvVar3,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d743b0 */
uint F_00d743b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd743b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int local_14;
  int local_8;
  
  iVar1 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  local_8 = iVar5;
  if (iVar1 <= iVar5) {
    local_8 = iVar1;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar6 = uVar2 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar6,0x10);
  }
  local_14 = (iVar5 - iVar1) + -1;
  if (-1 < local_14) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + local_14 * 0x10);
    do {
      iVar5 = piVar4[1] + -1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3);
          pvVar3 = (undefined *)((int)pvVar3 + -8);
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
      piVar4[1] = 0;
      if (-1 < piVar4[2]) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,piVar4[2] * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 + -1);
      local_14 = local_14 + -1;
      piVar4 = piVar4 + -4;
    } while (-1 < local_14);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_1 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  pvVar3 = (undefined *)(*(int *)this + local_8 * 0x10);
  iVar5 = iVar1 - local_8;
  if (iVar5 < 1) {
    *(int *)((int)this + 4) = iVar1;
    return (uint)this;
  }
  iVar6 = (*param_1 + local_8 * 0x10) - (int)pvVar3;
  do {
    if (pvVar3 != (undefined *)0x0) {
      F_00d87850(pvVar3,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74510 */
uint F_00d74510(unsigned int gen_a0)
{
  GEN_ENTER(0xd74510u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0x100;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d74590 */
uint F_00d74590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74590u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_3 << 4 | param_2) * 4 | param_1;
}

/* ref: FUN_00d745b0 */
byte F_00d745b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd745b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (char)param_2 * '\x02' | (byte)param_1;
}

/* ref: FUN_00d745d0 */
uint F_00d745d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd745d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512dc))[param_1])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d745f0 */
byte F_00d745f0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd745f0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (byte)(int)(((param_3 - param_1) / (param_2 - param_1)) * REFG(float, 0x10a0d8c));
}

/* ref: FUN_00d74620 */
ushort F_00d74620(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd74620u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (ushort)(int)(((param_3 - param_1) / (param_2 - param_1)) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d74650 */
uint F_00d74650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512f4))[param_1])))(param_2);
  return uVar1;
}

/* ref: FUN_00d74670 */
unsigned int F_00d74670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74670u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  if ((byte)param_1 != 0) {
    uVar1 = (*param_4 - 1) + *(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) &
            ~(*(int *)(&REFG(undefined, 0x1137300) + param_3 * 4) - 1U);
    *param_4 = uVar1;
    if (((byte)param_1 & 0xf0) == 0) {
      F_00d74650(param_3,uVar1);
      *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
    }
    else if (-1 < param_2) {
      iVar2 = param_2 + 1;
      do {
        F_00d74650(param_3,*param_4);
        *param_4 = *param_4 + *(int *)(&REFG(undefined, 0x1137318) + param_3 * 4);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00d74700 */
uint F_00d74700(unsigned int gen_a0)
{
  GEN_ENTER(0xd74700u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10947f8);
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10947f8));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  in_ecx[5] = 0x30003;
  in_ecx[4] = 0x30003;
  in_ecx[6] = 0x1010101;
  return (uint)in_ecx;
}

/* ref: FUN_00d74740 */
unsigned int F_00d74740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd74740u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 * puVar6;
  int iVar7;
  int iVar8;
  
  if (0 < param_3) {
    iVar7 = 0;
    puVar6 = ((undefined4 *)GEN_TOP((param_1 + 8 + (param_2 * param_4 + param_5) * 0x30)));
    iVar8 = param_3;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[-1];
      iVar7 = iVar7 + 0x10;
      puVar1 = (undefined4 *)(*param_6 + -0x10 + iVar7);
      *puVar1 = puVar6[-2];
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = 0;
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      uVar5 = puVar6[5];
      puVar1 = (undefined4 *)(*param_7 + -0x10 + iVar7);
      *puVar1 = puVar6[2];
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = puVar6 + 6;
      uVar3 = puVar6[7];
      uVar4 = puVar6[8];
      puVar6 = puVar6 + param_2 * 0xc;
      iVar8 = iVar8 + -1;
      puVar2 = (undefined4 *)(*param_8 + -0x10 + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = 0;
    } while (iVar8 != 0);
  }
  return 0;
}

/* ref: FUN_00d747f0 */
unsigned int F_00d747f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd747f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  if (0 < param_3) {
    iVar4 = 0;
    puVar3 = ((undefined4 *)GEN_TOP((param_1 + (param_2 * param_4 + param_5) * 4)));
    iVar5 = param_3;
    do {
      uVar2 = *puVar3;
      puVar3 = puVar3 + param_2;
      iVar4 = iVar4 + 0x10;
      iVar5 = iVar5 + -1;
      puVar1 = (undefined4 *)(*param_6 + -0x10 + iVar4);
      *puVar1 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    } while (iVar5 != 0);
  }
  return 0;
}

/* ref: FUN_00d74850 */
byte F_00d74850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd74850u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float * pfVar1;
  int iVar2;
  int iVar3;
  float * pfVar4;
  float fVar5;
  byte local_11;
  
  iVar3 = 0;
  local_11 = 0;
  pfVar4 = param_1;
  do {
    fVar5 = *pfVar4;
    pfVar1 = ((float *)GEN_TOP(((param_3 - (int)param_1) + (int)pfVar4)));
    if ((ABS(fVar5 - *((float *)GEN_TOP(((int)pfVar1 + (param_2 - param_3))))) <= param_4) &&
       (ABS(fVar5 - *pfVar1) <= param_4)) {
      fVar5 = ABS(fVar5 - *((float *)GEN_TOP(((param_5 - (int)param_1) + (int)pfVar4))));
      iVar2 = iVar3;
      if ((!(fVar5 <= param_4)) || (!(fVar5 <= param_4))) goto LAB_00d74917;
    }
    else {
      iVar2 = iVar3 + 4;
LAB_00d74917: ;
      local_11 = local_11 | '\x01' << ((byte)iVar2 & 0x1f);
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
    if (3 < iVar3) {
      return local_11;
    }
  } while( true );
}

/* ref: FUN_00d74940 */
unsigned int F_00d74940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74940u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  float fVar2;
  float * pfVar3;
  float * pfVar4;
  float * pfVar5;
  float * pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar1 = param_2[1];
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  if (0 < iVar1) {
    pfVar6 = (float *)*param_2;
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = param_1[3];
    iVar7 = iVar1;
    do {
      fVar2 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar4 = pfVar6 + 2;
      pfVar5 = pfVar6 + 3;
      pfVar6 = pfVar6 + 4;
      iVar7 = iVar7 + -1;
      fVar8 = fVar2 + fVar8;
      fVar9 = *pfVar3 + fVar9;
      fVar10 = *pfVar4 + fVar10;
      fVar11 = *pfVar5 + fVar11;
    } while (iVar7 != 0);
    *param_1 = fVar8;
    param_1[1] = fVar9;
    param_1[2] = fVar10;
    param_1[3] = fVar11;
  }
  fVar8 = REFG(float, 0x1087f04) / (float)iVar1;
  *param_1 = fVar8 * *param_1;
  param_1[1] = fVar8 * param_1[1];
  param_1[2] = fVar8 * param_1[2];
  param_1[3] = fVar8 * param_1[3];
  return 0;
}

/* ref: FUN_00d749a0 */
uint F_00d749a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd749a0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = (gen_v16 *)*param_2;
  iVar2 = param_2[1];
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar1;
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*pauVar1 + 8);
  if (1 < iVar2) {
    iVar2 = iVar2 + -1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_minps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 + -1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d749f0 */
uint F_00d749f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd749f0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  gen_v16 * pauVar1;
  int iVar2;
  undefined1 auVar3 [16];
  
  pauVar1 = (gen_v16 *)*param_2;
  iVar2 = param_2[1];
  *(undefined8 *)*param_1 = *(undefined8 *)*pauVar1;
  *(undefined8 *)(*param_1 + 8) = *(undefined8 *)(*pauVar1 + 8);
  if (1 < iVar2) {
    iVar2 = iVar2 + -1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_maxps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 + -1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d74a40 */
uint F_00d74a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74a40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  uint uVar3;
  
  if (param_1 == 1) {
    *param_2 = *param_2 + 1;
    return (uint)param_2;
  }
  if (param_1 == 2) {
    puVar2 = (undefined1 *)*param_2;
    uVar1 = *puVar2;
    *puVar2 = puVar2[1];
    puVar2[1] = uVar1;
    *param_2 = *param_2 + 2;
    return (uint)puVar2;
  }
  if (param_1 == 4) {
    puVar2 = (undefined1 *)*param_2;
    uVar1 = *puVar2;
    *puVar2 = puVar2[3];
    puVar2[3] = uVar1;
    uVar3 = *param_2;
    uVar1 = *(undefined1 *)(uVar3 + 1);
    *(undefined1 *)(uVar3 + 1) = *(undefined1 *)(uVar3 + 2);
    *(undefined1 *)(uVar3 + 2) = uVar1;
    *param_2 = *param_2 + 4;
    return uVar3;
  }
  *param_2 = *param_2 + param_1;
  return (uint)param_2;
}

/* ref: FUN_00d74ab0 */
uint F_00d74ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74ab0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  byte * pbVar2;
  
  if ((param_1 & 0xf0) != 0) {
    F_00d74a40(2,param_2);
    pbVar2 = (byte *)*param_2;
    uVar1 = *(ushort *)(pbVar2 + -2);
    *param_2 = (int)(pbVar2 + (uint)uVar1 + *pbVar2 + 3);
    return (uint)uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d74af0 */
uint F_00d74af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_8;
  
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 != 0) {
    uVar1 = (uint)(byte)param_1;
    iVar3 = 0;
    *param_4 = *param_4 + 3 & 0xfffffffc;
    uVar4 = 1;
    param_1 = 3;
    do {
      if ((uVar1 & (uVar4 << 4 | uVar4 >> 0x1c)) == 0) {
        uVar2 = uVar1;
        if ((uVar4 & uVar1) != 0) {
          uVar2 = F_00d74a40(4,param_4);
        }
      }
      else {
        F_00d74a40(4,param_4);
        uVar2 = F_00d74a40(4,param_4);
        iVar3 = iVar3 + 1;
      }
      uVar4 = uVar4 << 1 | (uint)((int)uVar4 < 0);
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    if ((iVar3 != 0) && (uVar2 = param_2, -1 < (int)param_2)) {
      uVar2 = param_2 + 1;
      local_8 = uVar2;
      do {
        iVar5 = iVar3;
        if (0 < iVar3) {
          do {
            uVar2 = F_00d74a40((param_3 != 0) + 1,param_4);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00d74ba0 */
unsigned int F_00d74ba0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd74ba0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  pfVar3 = (float *)*param_2;
  iVar1 = 1;
  *pfVar3 = param_3;
  pfVar3[param_1] = param_4;
  if (1 < param_1) {
    if (3 < param_1 + -1) {
      fVar6 = (float)param_1;
      fVar5 = param_4 - param_3;
      iVar4 = 3;
      pfVar2 = pfVar3 + 3;
      do {
        pfVar2[-2] = ((float)iVar1 / fVar6) * fVar5 + param_3;
        pfVar2[-1] = ((float)(iVar4 + -1) / fVar6) * fVar5 + param_3;
        *pfVar2 = ((float)iVar4 / fVar6) * fVar5 + param_3;
        pfVar2[1] = ((float)(iVar4 + 1) / fVar6) * fVar5 + param_3;
        iVar1 = iVar1 + 4;
        pfVar2 = pfVar2 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar1 < param_1 + -3);
    }
    if (iVar1 < param_1) {
      pfVar3 = pfVar3 + iVar1;
      do {
        *pfVar3 = ((float)iVar1 / (float)param_1) * (param_4 - param_3) + param_3;
        iVar1 = iVar1 + 1;
        pfVar3 = pfVar3 + 1;
      } while (iVar1 < param_1);
    }
  }
  return 0;
}

/* ref: FUN_00d74cb0 */
unsigned int F_00d74cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0(param_1,param_3);
    F_00d74af0(param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return 0;
}

/* ref: FUN_00d74cf0 */
unsigned int F_00d74cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    uVar1 = F_00d74ab0(param_1,param_3);
    F_00d74670(param_1,uVar1,param_2,param_3);
    *param_3 = *param_3 + 3 & 0xfffffffc;
  }
  return 0;
}

/* ref: FUN_00d74d30 */
uint F_00d74d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
  }
  iVar1 = *param_2;
  iVar2 = param_2[1];
  *(undefined1 *)(iVar1 + iVar2) = (undefined1)param_1;
  param_2[1] = param_2[1] + 1;
  return (uint)(iVar1 + iVar2);
}

/* ref: FUN_00d74d70 */
unsigned int F_00d74d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74d70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
      }
      *(undefined1 *)(param_2[1] + *param_2) = 0;
      param_2[1] = param_2[1] + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d74db0 */
unsigned int F_00d74db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74db0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  
  uVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  while ((uVar1 & (*(int *)&gen_args[0]) - 1U) != 0) {
    if ((*(int * PTR32 *)&gen_args[1])[1] == ((*(int * PTR32 *)&gen_args[1])[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(*(int * PTR32 *)&gen_args[1]),1);
    }
    *((undefined1 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + (*(int * PTR32 *)&gen_args[1])[1]))) = 0;
    (*(int * PTR32 *)&gen_args[1])[1] = (*(int * PTR32 *)&gen_args[1])[1] + 1;
    uVar1 = (*(int * PTR32 *)&gen_args[1])[1];
  }
  return 0;
}

/* ref: FUN_00d74e00 */
unsigned int F_00d74e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74e00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  while (uVar1 != 0) {
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,1);
    }
    *(undefined1 *)(*param_2 + param_2[1]) = 0;
    param_2[1] = param_2[1] + 1;
    uVar1 = param_2[1] & *(uint *)(&REFG(undefined, 0x11377e4) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00d74e60 */
unsigned int F_00d74e60(unsigned int gen_a0)
{
  GEN_ENTER(0xd74e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  byte * pbVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x80) != 0) {
    (*(int *)(gen_frame + 0x0)) = 0;
    if (0 < *(int *)((int)this + 0x2c)) {
      do {
        pbVar2 = ((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x44) + (*(int *)(gen_frame + 0x0)) * 4))) +
                         *(int *)((int)this + 0x74))));
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar2 + *(int *)((int)this + 0x34);
        (*(int *)(gen_frame + 0x4)) = 0;
        if (0 < *(int *)((int)this + 0x10)) {
          do {
            bVar1 = *pbVar2;
            F_00d74cb0((uint)pbVar2[1],bVar1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cf0((uint)pbVar2[2],bVar1 >> 2 & 0xf,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            F_00d74cb0((uint)pbVar2[3],(uint)(bVar1 >> 6),&(*(byte * PTR32 *)(gen_frame + 0x8)));
            (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + 1;
            pbVar2 = pbVar2 + 4;
          } while ((*(int *)(gen_frame + 0x4)) < *(int *)((int)this + 0x10));
        }
        iVar3 = 0;
        if (0 < *(int *)((int)this + 0x14)) {
          do {
            bVar1 = *pbVar2;
            pbVar2 = pbVar2 + 1;
            F_00d74cb0((uint)(bVar1 & 0xf9),bVar1 >> 1 & 3,&(*(byte * PTR32 *)(gen_frame + 0x8)));
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)((int)this + 0x14));
        }
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      } while ((*(int *)(gen_frame + 0x0)) < *(int *)((int)this + 0x2c));
    }
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return 0;
}

/* ref: FUN_00d74f50 */
uint F_00d74f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd74f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * param_5 = (int *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float * pfVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_EAX = 0;
  uint uVar8;
  int * piVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar17;
  float fVar18;
  undefined1 in_XMM3 [16] = {0};
  float fVar19;
  undefined1 auVar16 [16];
  
  uVar8 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  if (((byte)param_1 & 0xf0) == 0) {
    if (((byte)param_1 & 0xf) != 0) {
      piVar9 = (int *)((int)this + 0x74);
      F_00d74e00(param_2,piVar9);
      fVar4 = *param_3;
      fVar5 = param_3[1];
      fVar6 = param_3[2];
      fVar7 = param_3[3];
      fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
      fVar12 = fVar7 * fVar7 + fVar5 * fVar5;
      fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
      fVar14 = fVar5 * fVar5 + fVar7 * fVar7;
      fVar15 = fVar12 + fVar11;
      fVar11 = fVar11 + fVar12;
      fVar12 = fVar14 + fVar13;
      fVar13 = fVar13 + fVar14;
      (*(undefined4 *)((char *)&auVar16 + 4)) = (undefined4)gen_fl2bits(fVar11);
      (*(undefined4 *)((char *)&auVar16 + 0)) = (undefined4)gen_fl2bits(fVar15);
      (*(undefined4 *)((char *)&auVar16 + 8)) = (undefined4)gen_fl2bits(fVar12);
      (*(undefined4 *)((char *)&auVar16 + 12)) = (undefined4)gen_fl2bits(fVar13);
      gen_rsqrtps(&(auVar16), &(in_XMM3), &(auVar16));
      fVar14 = (*(float *)((char *)&auVar16 + 0));
      fVar17 = (*(float *)((char *)&auVar16 + 4));
      fVar18 = (*(float *)((char *)&auVar16 + 8));
      fVar19 = (*(float *)((char *)&auVar16 + 12));
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)*(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
      (*(float *)(gen_frame + 0x0)) = ((*(float *)&REFG(undefined, 0x1137790) - (fVar14 * fVar15) * fVar14) *
                 (*(float *)&REFG(undefined, 0x11377a0) * fVar14)) * fVar4;
      (*(float *)(gen_frame + 0x4)) = ((*(float *)&REFG(undefined, 0x1137794) - (fVar17 * fVar11) * fVar17) *
                  (*(float *)&REFG(undefined, 0x11377a4) * fVar17)) * fVar5;
      (*(float *)(gen_frame + 0x8)) = ((*(float *)&REFG(undefined, 0x1137798) - (fVar18 * fVar12) * fVar18) *
                  (*(float *)&REFG(undefined, 0x11377a8) * fVar18)) * fVar6;
      (*(float *)(gen_frame + 0xc)) = ((*(float *)&REFG(undefined, 0x113779c) - (fVar19 * fVar13) * fVar19) *
                  (*(float *)&REFG(undefined, 0x11377ac) * fVar19)) * fVar7;
      F_00d74d70(*(int *)(&REFG(undefined, 0x1137318) + param_2 * 4),piVar9);
      uVar8 = F_00d745d0(param_2,&(*(float *)(gen_frame + 0x0)),(*(int *)((int)this + 0x78) - (int)(*(undefined * PTR32 *)(gen_frame + 0x34))) + *piVar9)
      ;
    }
  }
  else {
    piVar9 = (int *)((int)this + 0x74);
    F_00d74e00(param_2,piVar9);
    (*(int *)(gen_frame + 0x3c)) = *(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
    uVar8 = param_4;
    if (-1 < (int)param_4) {
      iVar10 = 0;
      (*(float *)(gen_frame + 0x20)) = *(float *)&REFG(undefined, 0x1137790);
      (*(float *)(gen_frame + 0x24)) = *(float *)&REFG(undefined, 0x1137794);
      (*(float *)(gen_frame + 0x28)) = *(float *)&REFG(undefined, 0x1137798);
      (*(float *)(gen_frame + 0x2c)) = *(float *)&REFG(undefined, 0x113779c);
      (*(float *)(gen_frame + 0x10)) = *(float *)&REFG(undefined, 0x11377a0);
      (*(float *)(gen_frame + 0x14)) = *(float *)&REFG(undefined, 0x11377a4);
      (*(float *)(gen_frame + 0x18)) = *(float *)&REFG(undefined, 0x11377a8);
      (*(float *)(gen_frame + 0x1c)) = *(float *)&REFG(undefined, 0x11377ac);
      (*(int *)(gen_frame + 0x38)) = param_4 + 1;
      do {
        pfVar1 = (float *)(*param_5 + iVar10);
        fVar4 = *pfVar1;
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        fVar11 = fVar6 * fVar6 + fVar4 * fVar4;
        fVar12 = fVar7 * fVar7 + fVar5 * fVar5;
        fVar13 = fVar4 * fVar4 + fVar6 * fVar6;
        fVar14 = fVar5 * fVar5 + fVar7 * fVar7;
        fVar15 = fVar12 + fVar11;
        fVar11 = fVar11 + fVar12;
        fVar12 = fVar14 + fVar13;
        fVar13 = fVar13 + fVar14;
        (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits(fVar11);
        (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits(fVar15);
        (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(fVar12);
        (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(fVar13);
        gen_rsqrtps(&(in_XMM3), &(in_XMM3), &(auVar3));
        fVar14 = (*(float *)((char *)&in_XMM3 + 0));
        fVar17 = (*(float *)((char *)&in_XMM3 + 4));
        fVar18 = (*(float *)((char *)&in_XMM3 + 8));
        fVar19 = (*(float *)((char *)&in_XMM3 + 12));
        (*(float *)(gen_frame + 0x0)) = (((*(float *)(gen_frame + 0x20)) - (fVar14 * fVar15) * fVar14) * ((*(float *)(gen_frame + 0x10)) * fVar14)) * fVar4;
        (*(float *)(gen_frame + 0x4)) = (((*(float *)(gen_frame + 0x24)) - (fVar17 * fVar11) * fVar17) * ((*(float *)(gen_frame + 0x14)) * fVar17)) * fVar5;
        (*(float *)(gen_frame + 0x8)) = (((*(float *)(gen_frame + 0x28)) - (fVar18 * fVar12) * fVar18) * ((*(float *)(gen_frame + 0x18)) * fVar18)) * fVar6;
        (*(float *)(gen_frame + 0xc)) = (((*(float *)(gen_frame + 0x2c)) - (fVar19 * fVar13) * fVar19) * ((*(float *)(gen_frame + 0x1c)) * fVar19)) * fVar7;
        F_00d74d70((*(int *)(gen_frame + 0x3c)),piVar9);
        uVar8 = F_00d745d0(param_2,&(*(float *)(gen_frame + 0x0)),(*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 0x78) - (*(int *)(gen_frame + 0x3c))) + *piVar9
                            );
        iVar10 = iVar10 + 0x10;
        iVar2 = (*(int *)(gen_frame + 0x38)) + -1;
        (*(int *)(gen_frame + 0x38)) = iVar2;
      } while (iVar2 != 0);
      return uVar8;
    }
  }
  return uVar8;
}

/* ref: FUN_00d750e0 */
uint F_00d750e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd750e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d74d70(2,param_2);
  uVar1 = param_2[1];
  *((undefined2 *)GEN_TOP(((uVar1 - 2) + *param_2))) = (undefined2)param_1;
  return uVar1;
}

/* ref: FUN_00d75110 */
uint F_00d75110(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd75110u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d74d70(4,param_2);
  uVar1 = param_2[1];
  *((float *)GEN_TOP(((uVar1 - 4) + *param_2))) = param_1;
  return uVar1;
}

/* ref: FUN_00d75140 */
uint F_00d75140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd75140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  float * param_5 = (float *)(uintptr_t)gen_a5;
  int param_6 = (int)gen_a6;
  int * param_7 = (int *)(uintptr_t)gen_a7;
  int iVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float * pfVar8;
  float fVar9;
  int iVar10;
  
  iVar1 = (int)this + 0x74;
  F_00d74db0(4,iVar1);
  uVar5 = param_1 & 0xff;
  iVar6 = param_3 - (int)param_5;
  uVar7 = 1;
  param_3 = 3;
  pfVar8 = param_5;
  do {
    if ((uVar5 & (uVar7 << 4 | uVar7 >> 0x1c)) == 0) {
      uVar4 = (int)param_4 - (int)param_5;
      if ((uVar7 & uVar5) != 0) {
        fVar9 = *(float *)(iVar6 + (int)pfVar8);
        goto LAB_00d751b5;
      }
    }
    else {
      F_00d75110(GEN_TOF(*((float *)GEN_TOP((((int)param_4 - (int)param_5) + (int)pfVar8)))),iVar1);
      fVar9 = *pfVar8;
LAB_00d751b5: ;
      uVar4 = F_00d75110(fVar9,iVar1);
    }
    pfVar8 = pfVar8 + 1;
    uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
    param_3 = param_3 + -1;
    if (param_3 == 0) {
      if ((param_1 & 0xf0) != 0) {
        uVar4 = 0;
        param_3 = 0;
        if (-1 < param_6) {
          do {
            iVar6 = 0;
            param_1 = 1;
            pfVar8 = param_4;
            do {
              if ((uVar5 & (param_1 << 4 | param_1 >> 0x1c)) != 0) {
                if (param_2 == 0) {
                  iVar10 = iVar1;
                  bVar2 = F_00d745f0(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))));
                  F_00d74d30((uint)bVar2,iVar10);
                }
                else {
                  iVar10 = iVar1;
                  uVar3 = F_00d74620(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))));
                  F_00d750e0((uint)uVar3,iVar10);
                }
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 1;
              param_1 = param_1 << 1 | (uint)((int)param_1 < 0);
            } while (iVar6 < 3);
            uVar4 = param_3 + 1;
            param_3 = uVar4;
          } while ((int)uVar4 <= param_6);
        }
      }
      return uVar4;
    }
  } while( true );
}

/* ref: FUN_00d752d0 */
uint F_00d752d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd752d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int * piVar1;
  int iVar2;
  undefined1 * puVar3;
  int iVar4;
  float fVar5;
  
  piVar1 = (int *)((int)this + 0x74);
  iVar2 = param_1 + 1 + param_2;
  F_00d750e0(param_1,piVar1);
  puVar3 = (undefined1 *)F_00d74d30(param_2,piVar1);
  iVar4 = 0;
  if (-1 < iVar2) {
    do {
      fVar5 = (*(float *)(*param_3 + iVar4 * 4) / *(float *)((int)this + 0xc)) *
              ((float)GEN_TOF((*(int *)((int)this + 0x28) + -1))) + REFG(float, 0x1088068);
      if (*(uint *)((int)this + 0x78) == (*(uint *)((int)this + 0x7c) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar3 = ((undefined1 *)GEN_TOP((*(int *)((int)this + 0x78) + *piVar1)));
      *puVar3 = (char)(int)fVar5;
      *(int *)((int)this + 0x78) = *(int *)((int)this + 0x78) + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 <= iVar2);
  }
  return (uint)puVar3;
}

/* ref: FUN_00d75ff0 */
uint F_00d75ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd75ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  (*(undefined4 *)(gen_frame + 0xc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x18)) = 0x80000000;
  (*(uint *)(gen_frame + 0x24)) = 0x80000000;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(int *)(gen_frame + 0x8)) = 0;
  (*(int *)(gen_frame + 0x10)) = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  (*(int *)(gen_frame + 0x1c)) = 0;
  (*(int *)(gen_frame + 0x20)) = 0;
  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x4)),0x1c);
  puVar1 = (undefined8 *)((*(int *)(gen_frame + 0x4)) + (*(int *)(gen_frame + 0x8)) * 0x1c);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  (*(int *)(gen_frame + 0x8)) = (*(int *)(gen_frame + 0x8)) + 1;
  iVar3 = *(int *)(param_1 + 0x10);
  if ((int)((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x18)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x10)),iVar2,4);
  }
  (*(int *)(gen_frame + 0x14)) = iVar3;
  iVar3 = *(int *)(param_1 + 0x14);
  if ((int)((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) < iVar3) {
    iVar2 = ((*(uint *)(gen_frame + 0x24)) & 0x3fffffff) * 2;
    if (iVar2 <= iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x1c)),iVar2,4);
  }
  iVar2 = 0;
  (*(int *)(gen_frame + 0x20)) = iVar3;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      *(undefined4 *)((*(int *)(gen_frame + 0x10)) + iVar2 * 4) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      *(undefined4 *)((*(int *)(gen_frame + 0x1c)) + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  F_00d75370((*(undefined * PTR32 *)(gen_frame + 0x28)),param_1,&(*(int *)(gen_frame + 0x4)),param_3);
  uVar4 = F_00d76ae0(&(*(int *)(gen_frame + 0x4)));
  return uVar4;
}

/* ref: FUN_00d76120 */
uint F_00d76120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = 0;
  F_00d74700(((undefined1 *)(gen_frame + 0x0)));
  F_00d74510(&(*(undefined4 *)&gen_args[1]));
  F_00d75ff0((*(undefined * PTR32 *)&gen_args[0]),uVar1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d761a0 */
uint F_00d761a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd761a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  F_00d75ff0(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76210 */
uint F_00d76210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x113541c));
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  F_00d75370(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76290 */
byte F_00d76290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76290u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762b0 */
byte F_00d762b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd762b0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762f0 */
uint F_00d762f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd762f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d76340 */
uint F_00d76340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76350 */
uint F_00d76350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76350u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76380 */
unsigned int F_00d76380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_00d763b0 */
unsigned int F_00d763b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd763b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d763e0 */
unsigned int F_00d763e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd763e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined1 *)(iVar1 + param_1) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76410 */
uint F_00d76410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76410u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d76440 */
uint F_00d76440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76440u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d76480 */
uint F_00d76480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d764b0 */
uint F_00d764b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd764b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d76530 */
uint F_00d76530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76530u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d76586;
  }
  iVar3 = ((int)0x80000000);
LAB_00d76586: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d765a0 */
uint F_00d765a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd765a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d765e0 */
uint F_00d765e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd765e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76620 */
uint F_00d76620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76620u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar3 != 0) goto LAB_00d76675;
  }
  iVar3 = ((int)0x80000000);
LAB_00d76675: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d76690 */
unsigned int F_00d76690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76690u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_3 + 3);
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0x1c);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d766d0 */
uint F_00d766d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd766d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76710 */
uint F_00d76710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76710u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76760 */
uint F_00d76760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76760u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d767a0 */
uint F_00d767a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd767a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,1);
  }
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4))));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d767e0 */
unsigned int F_00d767e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd767e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x1c)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_2 + 3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d76850 */
uint F_00d76850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76850u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d76890 */
uint F_00d76890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76890u, gen_a0, gen_a1, gen_a2, 0u);
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
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d768d0 */
uint F_00d768d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd768d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1,*(undefined4 *)this,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76920 */
unsigned int F_00d76920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x1c);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0x1c)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 3);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d76990 */
uint F_00d76990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76990u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d769d0 */
uint F_00d769d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd769d0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x10);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d76a10 */
uint F_00d76a10(unsigned int gen_a0)
{
  GEN_ENTER(0xd76a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76a60 */
uint F_00d76a60(unsigned int gen_a0)
{
  GEN_ENTER(0xd76a60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76ae0 */
uint F_00d76ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((*(uint *)((int)this + 0x20) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(uint *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               *(uint *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,
                       (uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d76bb0 */
unsigned int F_00d76bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = param_1 + 0x28;
  *(int *)((int)this + 4) = param_1 + 0x34;
  *(int *)((int)this + 8) = param_1 + 0x38;
  *(int *)((int)this + 0xc) = param_1 + 8;
  return 0;
}

/* ref: FUN_00d76be0 */
unsigned int F_00d76be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd76be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
  pfVar2 = param_3;
  fVar5 = REFG(float, 0x1136e98);
  fVar6 = REFG(float, 0x1136c54);
  if (3 < param_5) {
    iVar3 = (param_5 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 2];
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      fVar1 = pfVar2[param_4 * 3];
      pfVar2 = pfVar2 + param_4 * 4;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_5) {
    iVar4 = param_5 - iVar4;
    do {
      fVar1 = *pfVar2;
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
      if (fVar5 < fVar1) {
        fVar5 = fVar1;
      }
      pfVar2 = pfVar2 + param_4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *param_1 = fVar6;
  *param_2 = fVar5 - fVar6;
  return 0;
}

/* ref: FUN_00d76cc0 */
uint F_00d76cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd76cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x10abe98);
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10abe98));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d76ce0 */
unsigned int F_00d76ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ce0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = (*param_1 - 1) + param_2 & ~(param_2 - 1U);
  return 0;
}

/* ref: FUN_00d76d00 */
ushort F_00d76d00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d00u, 0u, gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (ushort)(int)(((param_1 - *param_2) / param_2[1]) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d76d30 */
unsigned int F_00d76d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d87f90(param_2,param_1);
  return 0;
}

/* ref: FUN_00d76d50 */
unsigned int F_00d76d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_00d76be0(param_1,param_1 + 4,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00d76d80 */
unsigned int F_00d76d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = *(undefined1 *)(param_1 + iVar2 * 2);
      *(undefined1 *)(param_1 + iVar2 * 2) = *(undefined1 *)(param_1 + 1 + iVar2 * 2);
      *(undefined1 *)(param_1 + 1 + iVar2 * 2) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00d76db0 */
unsigned int F_00d76db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76db0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  undefined1 * puVar2;
  int iVar3;
  
  if (0 < param_2) {
    puVar2 = (undefined1 *)(param_1 + 2);
    iVar3 = param_2;
    do {
      uVar1 = puVar2[-2];
      puVar2[-2] = puVar2[1];
      puVar2[1] = uVar1;
      uVar1 = puVar2[-1];
      puVar2[-1] = *puVar2;
      *puVar2 = uVar1;
      puVar2 = puVar2 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d76e00 */
byte F_00d76e00(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 uVar1;
  byte bVar2;
  
  F_00d76d80(this,0x14);
  uVar1 = *(undefined1 *)((int)this + 8);
  *(undefined1 *)((int)this + 8) = *(undefined1 *)((int)this + 10);
  *(undefined1 *)((int)this + 10) = uVar1;
  bVar2 = *(byte *)((int)this + 9);
  *(undefined1 *)((int)this + 9) = *(undefined1 *)((int)this + 0xb);
  *(byte *)((int)this + 0xb) = bVar2;
  return bVar2;
}

/* ref: FUN_00d76e30 */
unsigned int F_00d76e30(unsigned int gen_a0)
{
  GEN_ENTER(0xd76e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x34) != 0) {
    F_00d76e00(*(undefined * PTR32 *)((int)this + 0x28));
    iVar3 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar3 + 0x1e) + iVar3,
                 (uint)*(ushort *)(iVar3 + 0x12) + (uint)*(ushort *)(iVar3 + 0x10) +
                 (uint)*(ushort *)(iVar3 + 0xe) + (uint)*(ushort *)(iVar3 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x20) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x1a) + (uint)*(ushort *)(iVar1 + 0x18) +
                 (uint)*(ushort *)(iVar1 + 0x16) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76d80((uint)*(ushort *)(iVar1 + 0x22) + iVar3 +
                 ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4,
                 (uint)*(ushort *)(iVar1 + 0xe) * 3);
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x22) +
                 ((uint)*(ushort *)(iVar1 + 0xe) * 6 + 0xf +
                  ((uint)*(ushort *)(iVar1 + 0x10) + (uint)*(ushort *)(iVar1 + 0xc)) * 4 &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x12));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x24) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) + iVar3,
                 (uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14));
    iVar1 = *(int *)((int)this + 0x28);
    F_00d76db0((uint)*(ushort *)(iVar1 + 0x26) +
                 (((uint)*(ushort *)(iVar1 + 0x18) + (uint)*(ushort *)(iVar1 + 0x14)) * 4 + 0xf &
                 0xfffffff0) + iVar3,(uint)*(ushort *)(iVar1 + 0x1a));
    iVar3 = 0;
    if (*((short *)GEN_TOP((*(int *)((int)this + 0x28) + 6))) != 0) {
      do {
        puVar2 = *(ushort * PTR32 *)((int)this + 0x28);
        F_00d76d80((int)puVar2 + (uint)*puVar2 + (uint)puVar2[0xe] * iVar3,
                     (uint)puVar2[0xb] * 3 + (uint)puVar2[0xd] + (uint)puVar2[0xc] +
                     (uint)puVar2[10]);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0x28) + 6))));
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  return 0;
}

/* ref: FUN_00d76ff0 */
unsigned int F_00d76ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_1[1]) {
    do {
      piVar1 = *(int * PTR32 *)this;
      iVar2 = *param_1;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      *(undefined1 *)(*piVar1 + piVar1[1]) = *(undefined1 *)(iVar2 + iVar3);
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d77050 */
uint F_00d77050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)this + 4);
  puVar2 = ((undefined1 *)GEN_TOP((iVar3 + -1 + param_1 & ~(param_1 - 1U))));
  if (iVar3 < (int)puVar2) {
    iVar3 = (int)puVar2 - iVar3;
    do {
      piVar1 = *(int * PTR32 *)this;
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,1);
      }
      puVar2 = (undefined1 *)(*piVar1 + piVar1[1]);
      *puVar2 = 0;
      piVar1[1] = piVar1[1] + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)puVar2;
}

/* ref: FUN_00d770b0 */
unsigned int F_00d770b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd770b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  undefined8 * puVar2;
  undefined8 uVar3;
  int * piVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = *(float *)(param_3 + 4 + (uint)(ushort)param_1 * 8);
  pfVar1 = (float *)(param_3 + (uint)(ushort)param_1 * 8);
  if (fVar7 <= param_5 * REFG(float, 0x10928e4)) {
    if (param_4 != 0) {
      fVar5 = *(float *)(param_4 + (uint)(ushort)param_2 * 4);
      if ((fVar5 - param_5 <= *pfVar1) &&
         (fVar6 = *pfVar1 + fVar7, fVar5 = fVar5 + param_5,
         (!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar6)) && !(fVar5 < fVar6))) {
        return 0;
      }
    }
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar5 = *pfVar1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)),(ushort)param_2));
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
    }
    pfVar1 = (float *)(*param_6 + param_6[1] * 8);
    piVar4 = param_6;
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fVar7 + fVar5;
      pfVar1[1] = (*(float *)(gen_frame + 0x8));
      param_6[1] = param_6[1] + 1;
      return 0;
    }
  }
  else {
    uVar3 = *(undefined8 *)pfVar1;
    if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,0xc);
    }
    puVar2 = (undefined8 *)(*param_7 + param_7[1] * 0xc);
    piVar4 = param_7;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = uVar3;
      *(uint *)(puVar2 + 1) = CONCAT22((ushort)param_2,(ushort)param_1);
    }
  }
  piVar4[1] = piVar4[1] + 1;
  return 0;
}

/* ref: FUN_00d771d0 */
uint F_00d771d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd771d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00d77050(this,param_2);
  iVar1 = *(int *)this;
  iVar4 = *(int *)(iVar1 + 4) + param_2;
  uVar2 = *(uint *)(iVar1 + 8) & 0x3fffffff;
  if ((int)uVar2 < iVar4) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar4) {
      iVar3 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  *(int *)(iVar1 + 4) = iVar4;
  uVar2 = F_00da1010(((*(int * PTR32 *)this)[1] - param_2) + **(int * PTR32 *)this,param_1,param_2);
  return uVar2;
}

/* ref: FUN_00d77240 */
uint F_00d77240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00d77050(this,4);
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d77260 */
uint F_00d77260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,2);
  return uVar1;
}

/* ref: FUN_00d77280 */
uint F_00d77280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this,param_1,4);
  return uVar1;
}

/* ref: FUN_00d774d0 */
uint F_00d774d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd774d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77510 */
uint F_00d77510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 0x10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77560 */
uint F_00d77560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this,*param_1 + 10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775b0 */
uint F_00d775b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this,*param_1 + 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775f0 */
uint F_00d775f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this,4);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77630 */
unsigned int F_00d77630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  int iVar2;
  
  piVar1 = param_1;
  iVar2 = 0;
  if (0 < param_1[1]) {
    param_1 = (int *)0x0;
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),*piVar1 + (int)param_1);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      param_1 = (int *)((int)param_1 + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77690 */
uint F_00d77690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd77690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this,4);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77280(this,*param_1 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d776d0 */
uint F_00d776d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd776d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = F_00d77050((*(undefined * PTR32 *)&gen_args[0]),4);
  uVar1 = (*(uint *)&gen_args[1]);
  iVar4 = 0;
  if (0 < *(int *)((*(uint *)&gen_args[1]) + 4)) {
    iVar3 = 0;
    do {
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*(float *)(*(int *)uVar1 + 4 + iVar3) * REFG(float, 0x1137338));
      uVar2 = F_00d77280((*(undefined * PTR32 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(uVar1 + 4));
  }
  return uVar2;
}

/* ref: FUN_00d77730 */
unsigned int F_00d77730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77730u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  iVar5 = 0;
  if (0 < (*(int * PTR32 *)&gen_args[1])[1]) {
    iVar4 = 0;
    do {
      iVar3 = *piVar1 + iVar4;
      uVar2 = F_00d76d00(GEN_TOF(*((float *)GEN_TOP(((*(int *)&gen_args[2]) + (uint)*(ushort *)(iVar3 + 8) * 4)))),iVar3);
      (*(int * PTR32 *)&gen_args[1]) = (int *)(uint)uVar2;
      F_00d77260((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return 0;
}

/* ref: FUN_00d77790 */
unsigned int F_00d77790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd77790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_1[1]) {
    do {
      F_00d76d30(((undefined1 *)(gen_frame + 0x4)),(uint)*(ushort *)(*param_1 + iVar1 * 4) * 0x10 + param_2);
      F_00d77260(this,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this,((undefined1 *)(gen_frame + 0x8)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return 0;
}

/* ref: FUN_00d777f0 */
uint F_00d777f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd777f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x2d0];
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  float * pfVar4;
  int iVar5;
  undefined * pvVar6;
  uint uVar7;
  int iVar8;
  int * _Size;
  float fVar9;
  int iVar10;
  undefined * puVar11;
  undefined4 uVar12;
  
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 4;
  **((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (uint)(*(undefined * PTR32 *)&gen_args[2]);
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0xc)));
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1);
  (*(uint *)(gen_frame + 0x294)) = uVar3;
  (*(int *)(gen_frame + 0x24c)) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x1c)));
  (*(undefined4 *)(gen_frame + 0x260)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  (*(uint *)(gen_frame + 0x268)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x254)) = 0;
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(int *)(gen_frame + 0x288)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(int *)(gen_frame + 0x27c)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(int *)(gen_frame + 0x2ac)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x298)) = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x40)));
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0x80000000;
  if (piVar1[4] * 0xc == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = (float *)0x0;
LAB_00d778e9: ;
    (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x240)) = piVar1[4] * 0x60;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)))));
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = pfVar4;
    iVar5 = (int)((*(int *)(gen_frame + 0x240)) + ((*(int *)(gen_frame + 0x240)) >> 0x1f & 7U)) >> 3;
    (*(int *)(gen_frame + 0x274)) = iVar5;
    if (iVar5 == 0) goto LAB_00d778e9;
  }
  if (piVar1[5] == 0) {
    (*(uint *)(gen_frame + 0x26c)) = 0;
LAB_00d77940: ;
    (*(int *)(gen_frame + 0x270)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x244)) = piVar1[5] * 8;
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x244)));
    (*(uint *)(gen_frame + 0x26c)) = uVar3;
    iVar5 = (int)((*(int *)(gen_frame + 0x244)) + ((*(int *)(gen_frame + 0x244)) >> 0x1f & 7U)) >> 3;
    if (iVar5 == 0) goto LAB_00d77940;
    (*(int *)(gen_frame + 0x270)) = iVar5;
  }
  (*(uint *)(gen_frame + 0x25c)) = piVar1[0xd];
  iVar5 = piVar1[4] * 0xc;
  (*(undefined4 *)(gen_frame + 0x248)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x24)));
  if (0 < iVar5) {
    (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b4));
    (*(int *)(gen_frame + 0x2bc)) = iVar5;
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)piVar1[10];
    do {
      F_00d76d50((*(float * PTR32 *)(gen_frame + 0x2b8)),(*(undefined * PTR32 *)&gen_args[2]),iVar5,(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 4)));
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = (*(float * PTR32 *)(gen_frame + 0x2b8)) + 2;
      iVar10 = (*(int *)(gen_frame + 0x2bc)) + -1;
      (*(int *)(gen_frame + 0x2bc)) = iVar10;
    } while (iVar10 != 0);
  }
  if (0 < piVar1[5]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)(*(uint *)(gen_frame + 0x26c));
    (*(int *)(gen_frame + 0x2bc)) = piVar1[5];
    uVar3 = (*(uint *)(gen_frame + 0x25c));
    do {
      F_00d76d50((*(undefined * PTR32 *)&gen_args[2]),uVar3,piVar1[5],(*(uint *)(gen_frame + 0x294)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 8)));
      uVar3 = uVar3 + 4;
      iVar5 = (*(int *)(gen_frame + 0x2bc)) + -1;
      (*(int *)(gen_frame + 0x2bc)) = iVar5;
    } while (iVar5 != 0);
  }
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (0 < piVar1[4]) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
    do {
      uVar7 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + uVar3 * 2)));
      iVar5 = 0;
      (*(float * PTR32 *)(gen_frame + 0x2b8)) = ((float *)GEN_TOP((uVar3 * 0x10 + *(*(int * PTR32 *)&gen_args[3]))));
      (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)uVar7;
      (*(int *)(gen_frame + 0x2bc)) = uVar7 * 0xc;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar5,iVar5 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[1],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < 3);
      iVar5 = 8;
      do {
        F_00d770b0((int)(*(undefined * PTR32 *)&gen_args[2]) + iVar5,iVar5 + (*(int *)(gen_frame + 0x2bc)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),(*(float * PTR32 *)(gen_frame + 0x2b8))[2],&(*(undefined4 *)(gen_frame + 0x260)),
                     &(*(undefined4 *)(gen_frame + 0x29c)));
        uVar7 = (*(uint *)(gen_frame + 0x25c));
        iVar5 = iVar5 + 1;
      } while ((ushort)iVar5 < 0xb);
      F_00d772a0((*(uint *)(gen_frame + 0x25c)),(*(int * PTR32 *)(gen_frame + 0x290)),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(undefined4 *)(gen_frame + 0x248)),*(*(float * PTR32 *)(gen_frame + 0x2b8)),&(*(undefined4 *)(gen_frame + 0x250)),&(*(undefined4 *)(gen_frame + 0x278)));
      (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0xc)));
      uVar3 = uVar7 + 1 & 0xffff;
      (*(uint *)(gen_frame + 0x25c)) = uVar7 + 1;
    } while ((int)uVar3 < piVar1[4]);
  }
  uVar3 = 0;
  if (0 < piVar1[5]) {
    uVar7 = 0;
    do {
      F_00d770b0(uVar3,(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + uVar7 * 2))),(*(uint *)(gen_frame + 0x26c)),0,GEN_TOF(*((float *)GEN_TOP((uVar7 * 0x10 + 0xc + *(*(int * PTR32 *)&gen_args[4]))))),&(*(undefined4 *)(gen_frame + 0x284)),&(*(undefined4 *)(gen_frame + 0x2a8)));
      uVar3 = uVar3 + 1;
      uVar7 = uVar3 & 0xffff;
    } while ((int)uVar7 < piVar1[5]);
  }
  if (-1 < (*(int *)(gen_frame + 0x270))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x26c)),(*(int *)(gen_frame + 0x270)) * 8);
  }
  if (-1 < (*(int *)(gen_frame + 0x274))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2b4)),(*(int *)(gen_frame + 0x274)) * 8);
  }
  _Size = (int *)((*(uint *)(gen_frame + 0x298)) + (*(int *)(gen_frame + 0x24c)));
  (*(int * PTR32 *)(gen_frame + 0x290)) = _Size;
  if (_Size == (int *)0x0) {
    (*(undefined * PTR32 *)&gen_args[2]) = (undefined *)0x0;
  }
  else {
    (*(int * PTR32 *)&gen_args[3]) = _Size;
    (*(undefined * PTR32 *)&gen_args[2]) = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[3]))));
    if ((*(int * PTR32 *)&gen_args[3]) != (int *)0x0) {
      (*(int * PTR32 *)&gen_args[4]) = (*(int * PTR32 *)&gen_args[3]);
      goto LAB_00d77bb3;
    }
  }
  (*(int * PTR32 *)&gen_args[4]) = (int *)0x80000000;
LAB_00d77bb3: ;
  (*(undefined * PTR32 *)(gen_frame + 0x2c0)) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(int * PTR32 *)(gen_frame + 0x2c4)) = _Size;
  (*(int * PTR32 *)(gen_frame + 0x2c8)) = (*(int * PTR32 *)&gen_args[4]);
  if (0 < (int)_Size) {
    F_00c48350((*(undefined * PTR32 *)&gen_args[2]),0,(gen_size32)_Size);
  }
  (*(int * PTR32 *)&gen_args[3]) = (int *)0x0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14)))) {
    do {
      *((undefined1 *)GEN_TOP(((int)*((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x10))) + (int)(*(int * PTR32 *)&gen_args[3]) * 2))) + (int)(*(undefined * PTR32 *)&gen_args[2])))) = 0xff;
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + 1)));
    } while ((int)(*(int * PTR32 *)&gen_args[3]) < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x14))));
  }
  iVar5 = 0;
  if (0 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20)))) {
    do {
      iVar10 = iVar5 * 2;
      iVar5 = iVar5 + 1;
      *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + (*(int *)(gen_frame + 0x24c)) + *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x1c))) + iVar10))))))
           = 0xff;
      _Size = (*(int * PTR32 *)(gen_frame + 0x290));
    } while (iVar5 < *((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + 0x20))));
  }
  (*(undefined2 *)(gen_frame + 0x210)) = (undefined2)(*(uint *)(gen_frame + 0x298));
  (*(undefined2 *)(gen_frame + 0x20e)) = (undefined2)(*(int *)(gen_frame + 0x24c));
  (*(undefined2 *)(gen_frame + 0x212)) = (undefined2)(*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x21a)) = (undefined2)(*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x21c)) = 0;
  (*(undefined2 *)(gen_frame + 0x218)) = (undefined2)(*(int *)(gen_frame + 0x264));
  (*(undefined2 *)(gen_frame + 0x220)) = (undefined2)(*(int *)(gen_frame + 0x2a0));
  (*(undefined2 *)(gen_frame + 0x222)) = (undefined2)(*(int *)(gen_frame + 0x27c));
  (*(undefined2 *)(gen_frame + 0x21e)) = (undefined2)(*(int *)(gen_frame + 0x288));
  (*(int * PTR32 *)&gen_args[1]) = _Size + 10;
  (*(int *)(gen_frame + 0x214)) = piVar1[3];
  (*(undefined2 *)(gen_frame + 0x224)) = 0;
  (*(undefined2 *)(gen_frame + 0x226)) = (undefined2)(*(int *)(gen_frame + 0x2ac));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  iVar5 = (*(int *)(gen_frame + 0x254));
  (*(undefined2 *)(gen_frame + 0x22a)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x264)) + (*(int *)(gen_frame + 0x288)) + (*(int *)(gen_frame + 0x254))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),2);
  (*(undefined2 *)(gen_frame + 0x22c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + ((*(int *)(gen_frame + 0x2ac)) + (*(int *)(gen_frame + 0x27c)) + (*(int *)(gen_frame + 0x2a0))) * 2)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x22e)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x264)) * 4 + iVar5 * 6)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x288)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  iVar5 = (*(int *)(gen_frame + 0x2a0)) * 4;
  (*(undefined2 *)(gen_frame + 0x230)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar5)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(undefined2 *)(gen_frame + 0x232)) = (short)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + iVar5)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x2ac)) * 4)));
  F_00d76ce0(&(*(int * PTR32 *)&gen_args[1]),0x10);
  uVar3 = (*(uint *)(gen_frame + 0x294));
  (*(undefined2 *)(gen_frame + 0x20c)) = (short)(*(int * PTR32 *)&gen_args[1]);
  uVar2 = ((short)(*(int *)(gen_frame + 0x2a0)) + (short)(*(int *)(gen_frame + 0x27c)) * 3 + (short)(*(int *)(gen_frame + 0x2ac))) * 2 + 0xfU & 0xfff0;
  (*(ushort *)(gen_frame + 0x228)) = uVar2;
  iVar5 = (uint)uVar2 * ((*(uint *)(gen_frame + 0x294)) & 0xffff) + ((uint)(*(int * PTR32 *)&gen_args[1]) & 0xffff);
  uVar7 = *((uint *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar7 < iVar5) {
    iVar10 = uVar7 * 2;
    if (iVar5 < iVar10) {
      iVar5 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),*(int *)(*(undefined * PTR32 *)&gen_args[0]),iVar5,1);
  }
  F_00d771d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined2 *)(gen_frame + 0x20c)),0x28);
  F_00d76ff0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77510((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d775b0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77630((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  if (uVar3 != 0) {
    uVar3 = piVar1[10];
    (*(int *)(gen_frame + 0x274)) = piVar1[4] * 0x30;
    (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)(piVar1[4] * 0x30);
    (*(int * PTR32 *)&gen_args[3]) = (int *)piVar1[0xd];
    (*(int *)(gen_frame + 0x270)) = piVar1[5] * 4;
    (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x294));
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    do {
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x29c)),uVar3);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x234)),uVar3);
      F_00d77790((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x278)),(*(int * PTR32 *)&gen_args[1]));
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x2a8)),(*(int * PTR32 *)&gen_args[3]));
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
      uVar3 = uVar3 + (int)(*(int * PTR32 *)(gen_frame + 0x290));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x274)))));
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + (*(int *)(gen_frame + 0x270)))));
      uVar7 = (*(uint *)(gen_frame + 0x298)) - 1;
      (*(uint *)(gen_frame + 0x298)) = uVar7;
    } while (uVar7 != 0);
  }
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x10);
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]),0x40);
  iVar5 = ((piVar1[0xb] + 1) * 0x10 + piVar1[0xe]) * 4;
  iVar8 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c;
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(undefined4, 0x15dff78),0x1e663ab1,"Compression");
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar5;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Original Size ");
  F_00d9ff40(pvVar6,iVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar8;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0))," Compressed Size ");
  F_00d9ff40(pvVar6,iVar10);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  puVar11 = &REFG(undefined, 0x1137a30);
  fVar9 = (float)iVar5 / (float)iVar8;
  uVar3 = F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Compression Ratio: ");
  pvVar6 = (undefined *)F_00d9ffe0(uVar3,fVar9);
  F_00d9fe80(pvVar6,puVar11);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18d);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x264))) - (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Translations: ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",399);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x27c))) - (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Rotations:    ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",400);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = piVar1[0xb] * 3;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Scales:       ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x191);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xe] - (*(int *)(gen_frame + 0x2ac))) - (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Reference Floats:       ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x192);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x264));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Translations:   ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x194);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Rotations:      ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x195);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Scales:         ");
  F_00d9ff40(pvVar6,uVar12);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x196);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Static Floats:         ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x197);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Translations:  ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x199);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x27c));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Rotations:     ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19a);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Scales:        ");
  F_00d9ff40(pvVar6,uVar12);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2ac));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)),"Dynamic Floats:        ");
  F_00d9ff40(pvVar6,iVar5);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(undefined4, 0x15dff78));
  if (((uint)(*(int * PTR32 *)&gen_args[4]) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined * PTR32 *)&gen_args[2]),(uint)(*(int * PTR32 *)&gen_args[4]) & 0x3fffffff);
  }
  (*(int *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x2a8)),((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(int *)(gen_frame + 0x27c)) = 0;
  if (((*(uint *)(gen_frame + 0x280)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x278)),(*(uint *)(gen_frame + 0x280)) * 4);
  }
  (*(undefined4 *)(gen_frame + 0x278)) = 0;
  (*(uint *)(gen_frame + 0x280)) = 0x80000000;
  (*(int *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 0xc);
  }
  (*(undefined4 *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(int *)(gen_frame + 0x288)) = 0;
  if (((*(uint *)(gen_frame + 0x28c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x284)),(*(uint *)(gen_frame + 0x28c)) * 8);
  }
  (*(undefined4 *)(gen_frame + 0x284)) = 0;
  (*(uint *)(gen_frame + 0x28c)) = 0x80000000;
  (*(int *)(gen_frame + 0x254)) = 0;
  if (((*(uint *)(gen_frame + 0x258)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x250)),(*(uint *)(gen_frame + 0x258)) << 5);
  }
  (*(uint *)(gen_frame + 0x258)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x264)) = 0;
  uVar3 = (*(uint *)(gen_frame + 0x268));
  if (((*(uint *)(gen_frame + 0x268)) & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)(gen_frame + 0x260)),(*(uint *)(gen_frame + 0x268)) * 8);
  }
  return uVar3;
}

/* ref: FUN_00d78690 */
uint F_00d78690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78690u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = (undefined8 *)0x0;
LAB_00d786fb: ;
    (*(int *)(gen_frame + 0x34)) = ((int)0x80000000);
  }
  else {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)(iVar3 << 4);
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined8 * PTR32 *)(gen_frame + 0x38)))))
    ;
    iVar2 = (int)((int)(*(undefined8 * PTR32 *)(gen_frame + 0x38)) + ((int)((int)(uintptr_t)(*(undefined8 * PTR32 *)(gen_frame + 0x38))) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x30)) = puVar1;
    (*(int *)(gen_frame + 0x34)) = iVar2;
    if (iVar2 == 0) goto LAB_00d786fb;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x14)) = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  (*(int *)(gen_frame + 0x18)) = iVar3;
  (*(int *)(gen_frame + 0x1c)) = (*(int *)(gen_frame + 0x34));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x30));
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_1 + 0x20);
  if (iVar3 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x2c)) = iVar3 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x2c)) + ((*(int *)(gen_frame + 0x2c)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x38)) = puVar1;
    if (iVar2 != 0) goto LAB_00d78776;
  }
  iVar2 = ((int)0x80000000);
LAB_00d78776: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x20)) = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  (*(int *)(gen_frame + 0x24)) = iVar3;
  (*(int *)(gen_frame + 0x28)) = iVar2;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x38));
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x4)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x4)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x14)),&(*(undefined8 * PTR32 *)(gen_frame + 0x20)));
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x38)),iVar2 << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78830 */
uint F_00d78830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  int iVar5;
  int iVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = this;
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  iVar6 = *(int *)(param_1 + 0x14);
  if (iVar6 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = (undefined8 *)0x0;
LAB_00d7889e: ;
    (*(int *)(gen_frame + 0x3c)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x40)) = iVar6 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x40)))));
    iVar2 = (int)((*(int *)(gen_frame + 0x40)) + ((*(int *)(gen_frame + 0x40)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x44)) = puVar1;
    (*(int *)(gen_frame + 0x3c)) = iVar2;
    if (iVar2 == 0) goto LAB_00d7889e;
  }
  (*(undefined8 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  (*(int *)(gen_frame + 0x20)) = iVar6;
  (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x3c));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  iVar2 = iVar6;
  if (0 < iVar6) {
    do {
      iVar3 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        F_00d76cc0(puVar1);
        iVar3 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar3 + 0x10);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 == 0) {
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = (undefined8 *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x38)) = iVar2 << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x38)))));
    iVar3 = (int)((*(int *)(gen_frame + 0x38)) + ((*(int *)(gen_frame + 0x38)) >> 0x1f & 0xfU)) >> 4;
    (*(undefined8 * PTR32 *)(gen_frame + 0x48)) = puVar1;
    (*(int *)(gen_frame + 0x40)) = iVar3;
    if (iVar3 != 0) goto LAB_00d7890c;
  }
  (*(int *)(gen_frame + 0x40)) = ((int)0x80000000);
LAB_00d7890c: ;
  (*(undefined8 * PTR32 *)(gen_frame + 0x28)) = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x40));
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  iVar3 = iVar2;
  if (0 < iVar2) {
    do {
      iVar5 = 0;
      if (puVar1 != (undefined8 *)0x0) {
        F_00d76cc0(puVar1);
        iVar5 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar5 + 0x10);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x44));
  if (0 < iVar6) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_3[3] + iVar3 * 4) * 0x10 + *param_3)));
      iVar3 = iVar3 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
    } while (iVar3 < iVar6);
  }
  iVar6 = 0;
  puVar1 = (*(undefined8 * PTR32 *)(gen_frame + 0x48));
  if (0 < iVar2) {
    do {
      puVar4 = ((undefined8 *)GEN_TOP((*(int *)(param_3[6] + iVar6 * 4) * 0x10 + *param_3)));
      iVar6 = iVar6 + 1;
      *puVar1 = *puVar4;
      puVar1[1] = puVar4[1];
      puVar1 = puVar1 + 2;
      this = (*(undefined * PTR32 *)(gen_frame + 0x34));
    } while (iVar6 < iVar2);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),this);
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)),&(*(undefined8 * PTR32 *)(gen_frame + 0x28)));
  if (-1 < (*(int *)(gen_frame + 0x40))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)) << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x3c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x3c)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78a30 */
uint F_00d78a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd78a30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0x80000000;
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)),(*(undefined * PTR32 *)&gen_args[0]));
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)),(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[6]));
  (*(undefined4 *)&gen_args[4]) = 0;
  if (-1 < (*(int *)&gen_args[5])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[3]),(*(int *)&gen_args[5]) << 4);
  }
  (*(undefined4 *)&gen_args[3]) = 0;
  (*(int *)&gen_args[5]) = 0x80000000;
  (*(undefined4 *)&gen_args[7]) = 0;
  if (-1 < (*(int *)&gen_args[8])) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 *)&gen_args[6]),(*(int *)&gen_args[8]) << 4);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d78ae0 */
uint F_00d78ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd78ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(uint *)((int)this + 0x30) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: FUN_00d78b30 */
uint F_00d78b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78b40 */
uint F_00d78b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78bb0 */
uint F_00d78bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78c00 */
uint F_00d78c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d78c50 */
uint F_00d78c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d78cb0 */
uint F_00d78cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d78cd0 */
uint F_00d78cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78cf0 */
unsigned int F_00d78cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_00d78d40 */
uint F_00d78d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78d40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78d60 */
uint F_00d78d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78d60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d78da0 */
unsigned int F_00d78da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78da0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int in_ecx;
  int iVar2;
  int iVar1;
  
  in_ecx = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d78de0 */
uint F_00d78de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[1]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  return uVar2;
}

/* ref: FUN_00d78e80 */
uint F_00d78e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd78e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d78ea0 */
uint F_00d78ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78ea0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d78f00 */
uint F_00d78f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d78f20 */
uint F_00d78f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f30 */
uint F_00d78f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d78f50 */
uint F_00d78f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f60 */
uint F_00d78f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d78f80 */
uint F_00d78f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f90 */
uint F_00d78f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d78fb0 */
uint F_00d78fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78fc0 */
uint F_00d78fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d78fe0 */
uint F_00d78fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d79000 */
uint F_00d79000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d79110 */
uint F_00d79110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79110u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint in_ecx;
  int iVar1;
  int iVar2;
  
  iVar2 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    in_ecx = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    in_ecx = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar1 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar1 != 0) goto LAB_00d79165;
  }
  iVar1 = ((int)0x80000000);
LAB_00d79165: ;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = in_ecx;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar1;
  if (0 < iVar2) {
    do {
      iVar1 = 0;
      if (in_ecx != 0) {
        F_00d76cc0(in_ecx);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79190 */
uint F_00d79190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79190u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d791d0 */
uint F_00d791d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd791d0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_00d79210 */
uint F_00d79210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79210u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (*(int *)&gen_args[1]);
    if ((*(int *)&gen_args[1]) != 0) goto LAB_00d79255;
  }
  iVar3 = ((int)0x80000000);
LAB_00d79255: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined1 *)(iVar3 + uVar2) = *(*(undefined1 * PTR32 *)&gen_args[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79280 */
uint F_00d79280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79280u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 8;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
    if (iVar3 != 0) goto LAB_00d792d8;
  }
  iVar3 = ((int)0x80000000);
LAB_00d792d8: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d792f0 */
unsigned int F_00d792f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd792f0u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79320 */
unsigned int F_00d79320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
        puVar1[1] = param_3[1];
      }
      puVar1 = puVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79350 */
unsigned int F_00d79350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79350u, gen_a0, gen_a1, gen_a2, 0u);
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
        puVar1[1] = param_3[1];
        puVar1[2] = param_3[2];
        puVar1[3] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d793a0 */
unsigned int F_00d793a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d793d0 */
unsigned int F_00d793d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd793d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d79460 */
uint F_00d79460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79460u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d794a0 */
uint F_00d794a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd794a0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_00d794e0 */
uint F_00d794e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd794e0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) << 4;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
    if (iVar2 != 0) goto LAB_00d79535;
  }
  iVar2 = ((int)0x80000000);
LAB_00d79535: ;
  *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(*(undefined8 * PTR32 *)&gen_args[2]);
        puVar1[1] = (*(undefined8 * PTR32 *)&gen_args[2])[1];
      }
      puVar1 = puVar1 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79570 */
unsigned int F_00d79570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d795c0 */
unsigned int F_00d795c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd795c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a2;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
    puVar1[3] = param_2[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d79620 */
unsigned int F_00d79620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79620u, gen_a0, gen_a1, gen_a2, 0u);
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
  return 0;
}

/* ref: FUN_00d79670 */
unsigned int F_00d79670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d796b0 */
uint F_00d796b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d796f0 */
uint F_00d796f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd796f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79730 */
uint F_00d79730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79770 */
uint F_00d79770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d797b0 */
uint F_00d797b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd797b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d797f0 */
uint F_00d797f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd797f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d79830 */
unsigned int F_00d79830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,8);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 8)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d79880 */
unsigned int F_00d79880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar1 = ((undefined8 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d798e0 */
unsigned int F_00d798e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd798e0u, gen_a0, gen_a1, 0u, 0u);
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
  return 0;
}

/* ref: FUN_00d79930 */
unsigned int F_00d79930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00d79970 */
uint F_00d79970(unsigned int gen_a0)
{
  GEN_ENTER(0xd79970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d799b0 */
uint F_00d799b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd799b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d799f0 */
uint F_00d799f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd799f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79a30 */
uint F_00d79a30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79a30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79a70 */
uint F_00d79a70(unsigned int gen_a0)
{
  GEN_ENTER(0xd79a70u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79ab0 */
uint F_00d79ab0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79ab0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79af0 */
uint F_00d79af0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79b30 */
uint F_00d79b30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79b30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79b70 */
uint F_00d79b70(unsigned int gen_a0)
{
  GEN_ENTER(0xd79b70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79bb0 */
uint F_00d79bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79bb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79bf0 */
uint F_00d79bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79bf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79c30 */
uint F_00d79c30(unsigned int gen_a0)
{
  GEN_ENTER(0xd79c30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d79c70 */
uint F_00d79c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c80 */
uint F_00d79c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c90 */
uint F_00d79c90(unsigned int gen_a0)
{
  GEN_ENTER(0xd79c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 0x10;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 2;
  return (uVar1 >> 1 | uVar1) + 1;
}

/* ref: FUN_00d79cc0 */
uint F_00d79cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ((1 << ((byte)param_1 & 0x1f)) - (param_1 >> 5 & 1U)) - 1;
}

/* ref: FUN_00d79ce0 */
uint F_00d79ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79ce0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 2) && (param_1 != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d79d20 */
uint F_00d79d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79d20u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_2 = in_ecx[2] * REFG(float, 0x10928e4);
  *param_3 = (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068);
  return (uint)param_2;
}

/* ref: FUN_00d79d60 */
unsigned int F_00d79d60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd79d60u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * pfVar1;
  
  pfVar1 = in_ecx + 1;
  if ((!GEN_ISNAN(param_2) && !GEN_ISNAN(*pfVar1)) && (!(param_2 < *pfVar1) && param_2 != *pfVar1)) {
    in_ecx[1] = param_2;
  }
  if (param_2 < *in_ecx) {
    *in_ecx = param_2;
  }
  return 0;
}

/* ref: FUN_00d79da0 */
uint F_00d79da0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 9;
}

/* ref: FUN_00d79dc0 */
uint F_00d79dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 % 9) / 3 + param_1 % 9 + (param_1 / 9) * 0xc;
}

/* ref: FUN_00d79e40 */
uint F_00d79e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79e40u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_edx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (((int)in_eax <= (int)param_3) && (in_eax = in_edx, (int)param_3 <= (int)in_edx)) {
    in_eax = param_3;
  }
  return in_eax;
}

/* ref: FUN_00d79e80 */
unsigned int F_00d79e80(unsigned int gen_a0)
{
  GEN_ENTER(0xd79e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(undefined4 *)((int)this + 0x90) = 0;
  iVar1 = (*(int *)((int)this + 0x44) - *(int *)((int)this + 0x40)) / 2;
  iVar5 = 0;
  if (0 < iVar1) {
    iVar2 = 0;
    iVar4 = 0;
    do {
      iVar3 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
      iVar3 = CONCAT22(*(undefined2 *)(iVar3 + 2 + iVar5 * 4),*(undefined2 *)(iVar3 + iVar5 * 4));
      iVar4 = iVar3 - iVar4;
      if (iVar2 < iVar4) {
        *(int *)((int)this + 0x90) = iVar4;
        iVar2 = iVar4;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar3;
    } while (iVar5 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d79ee0 */
unsigned int F_00d79ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + param_2 * 4 + 0x40) = *(undefined4 *)((int)this + 0x38);
  F_00d7cd40((undefined *)((int)this + 0x34),&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return 0;
}

/* ref: FUN_00d79f10 */
uint F_00d79f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + param_2 * 4 + 0x70) = *(undefined4 *)((int)this + 0x68);
  uVar1 = F_00d7cad0((undefined *)((int)this + 100),&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00d79f40 */
uint F_00d79f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd79f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  undefined * pvVar1;
  int iVar2;
  float * pfVar3;
  int iVar4;
  uint uVar5;
  undefined * pvVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int * piVar12;
  uint * puVar13;
  ushort uVar14;
  bool bVar15;
  float fVar16;
  float * pfVar17;
  float fVar18;
  float * pfVar19;
  char * pcVar20;
  undefined * puVar21;
  char * pcVar22;
  undefined * puVar23;
  float fVar24;
  undefined * puVar25;
  char * pcVar26;
  char * pcVar27;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = this;
  *(undefined4 *)((int)this + 8) = 5;
  F_00d7dbd0(((int *)(gen_frame + 0x264)),param_2,param_1,param_3);
  iVar4 = ((int *)(gen_frame + 0x264))[0];
  iVar2 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136c54)));
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136e98))));
  if (iVar2 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = (float *)0x0;
LAB_00d79ff7: ;
    (*(uint *)(gen_frame + 0x21c)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x218)) = iVar2 * 0xc;
    pfVar3 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x218)))));
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = pfVar3;
    (*(uint *)(gen_frame + 0x21c)) = (*(int *)(gen_frame + 0x218)) / 0xc;
    if ((*(int *)(gen_frame + 0x218)) / 0xc == 0) goto LAB_00d79ff7;
  }
  pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2d4));
  if (0 < iVar2) {
    do {
      if (pfVar3 != (float *)0x0) {
        *pfVar3 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x314)))));
        pfVar3[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
        pfVar3[2] = (*(float *)(gen_frame + 0x31c));
      }
      pfVar3 = pfVar3 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar4 = *(int *)(iVar4 + 0x1c) * 9 + *(int *)(iVar4 + 0x40);
  if (iVar4 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = (float *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x214)) = iVar4 * 4;
    pfVar3 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x214)))));
    uVar5 = (int)((*(int *)(gen_frame + 0x214)) + ((*(int *)(gen_frame + 0x214)) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = pfVar3;
    (*(uint *)(gen_frame + 0x210)) = uVar5;
    if (uVar5 != 0) goto LAB_00d7a07d;
  }
  (*(uint *)(gen_frame + 0x210)) = 0x80000000;
LAB_00d7a07d: ;
  piVar12 = (*(int * PTR32 *)(gen_frame + 0x26c));
  pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2d8));
  if (0 < iVar4) {
    do {
      if (pfVar3 != (float *)0x0) {
        *pfVar3 = 1.4013e-45;
      }
      pfVar3 = pfVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  if ((*(int *)(param_2 + 0x34) == 0) && (0 < (*(int * PTR32 *)(gen_frame + 0x26c))[5])) {
    F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)),
                 "Your skeleton does not have reference floats but your animation does have float tracks.  Predictive compression requires reference floats.  You must re-export your assets.  Compression will proceed assuming zero for all reference floats."
                );
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(undefined4, 0x15dff78),1,0xabbad892,((float *)(gen_frame + 0x0)),
               "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x144);
    F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  }
  iVar4 = 0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar12 + 0x1c))(piVar12);
  if (0 < (int)uVar5) {
    do {
      iVar4 = iVar4 + 1;
      uVar5 = ((code *)*(gen_code32 *)(*piVar12 + 0x1c))(piVar12);
    } while (iVar4 < (int)uVar5);
  }
  (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x0;
  uVar5 = ((code *)*(gen_code32 *)(*piVar12 + 0x1c))(piVar12);
  if (0 < (int)uVar5) {
    do {
      iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar2 = 0;
      if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar4) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2d4));
        do {
          if (iVar2 < iVar4) {
            iVar10 = iVar2 / 9;
            iVar8 = (*(int *)(gen_frame + 0x274));
          }
          else {
            iVar10 = iVar2 - iVar4;
            iVar8 = (*(int *)(gen_frame + 0x280));
          }
          pfVar3 = (*(float * PTR32 *)(gen_frame + 0x304));
          if (*(int *)(iVar8 + iVar10 * 4) != -1) {
            if (iVar2 < iVar4) {
              pfVar17 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7c7b0((piVar12[4] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) +
                                              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar2 / 9) * 4)))) * 0x30 +
                                              piVar12[10],iVar2 % 9))));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar17;
            }
            else {
              pfVar17 = *((float * PTR32 *)GEN_TOP((piVar12[0xd] +
                         (piVar12[5] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar2 - iVar4) * 4)))) * 4
                         )));
            }
            pfVar3 = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
            if ((!GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)))) && !GEN_ISNAN(*pfVar3)) &&
                (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) < *pfVar3) && ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) != *pfVar3)) {
              (*(float * PTR32 *)(gen_frame + 0x304))[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)));
            }
            pfVar3 = (*(float * PTR32 *)(gen_frame + 0x304));
            if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) < *(*(float * PTR32 *)(gen_frame + 0x304))) {
              *(*(float * PTR32 *)(gen_frame + 0x304)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)));
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar3 + 3;
          iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar4);
      }
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x30c)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x30c)) = pfVar3;
      uVar5 = ((code *)*(gen_code32 *)(*piVar12 + 0x1c))(piVar12);
    } while ((int)pfVar3 < (int)uVar5);
  }
  iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
  iVar10 = 0;
  iVar2 = ((int *)(gen_frame + 0x264))[0];
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar4) {
    pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
    do {
      if (iVar10 < iVar4) {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar10 / 9) * 4)));
      }
      else {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar10 - iVar4) * 4)));
      }
      if (iVar4 != -1) {
        fVar18 = F_00d7cff0(((int *)(gen_frame + 0x264)),iVar10);
        (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar18)));
        fVar16 = ((pfVar3[-1] - pfVar3[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
        if (fVar16 < fVar18) {
          fVar16 = fVar18;
        }
        *pfVar3 = fVar16;
        if (iVar10 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) {
          fVar16 = F_00d7c7b0((iVar10 / 9) * 0x30 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x24),iVar10 % 9);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar16)));
        }
        else {
          iVar4 = iVar10 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
          if (iVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x34)) {
            fVar16 = *((float *)GEN_TOP((*(int *)(((int *)(gen_frame + 0x264))[0] + 0x30) + iVar4 * 4)));
          }
          else {
            fVar16 = 0.0;
          }
        }
        if (pfVar3[-1] - pfVar3[-2] < *pfVar3 * REFG(float, 0x10928e4)) {
          fVar18 = ABS(pfVar3[-1] - fVar16);
          fVar16 = ABS(pfVar3[-2] - fVar16);
          ((float *)(gen_frame + 0x200))[0] = fVar18;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[3] = 0.0;
          (*(float *)(gen_frame + 0x310)) = fVar16;
          (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
          (*(float *)(gen_frame + 0x31c)) = 0.0;
          if (fVar16 < fVar18) {
            fVar16 = fVar18;
          }
          if (fVar16 < *pfVar3) {
            fVar16 = 1.4013e-45;
          }
          else {
            fVar16 = 0.0;
          }
        }
        else {
          fVar16 = 2.8026e-45;
        }
        (*(float * PTR32 *)(gen_frame + 0x2d8))[iVar10] = fVar16;
        pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7d0e0(((int *)(gen_frame + 0x264)),iVar10))));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
        pfVar17 = ((float *)GEN_TOP((((pfVar3[-1] - pfVar3[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c))));
        if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))) {
          pfVar17 = pfVar19;
        }
        *pfVar3 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar17)));
        iVar2 = ((int *)(gen_frame + 0x264))[0];
      }
      iVar4 = *(int *)(iVar2 + 0x1c) * 9;
      iVar10 = iVar10 + 1;
      pfVar3 = pfVar3 + 3;
    } while (iVar10 < *(int *)(iVar2 + 0x40) + iVar4);
  }
  fVar16 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
  iVar4 = *(int *)(iVar2 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar4) {
    iVar10 = 0;
    pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2d8)) + 3;
    do {
      if (iVar10 < iVar4 * 9) {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar10 / 9) * 4)));
      }
      else {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar10 + iVar4 * -9) * 4)));
      }
      if (iVar4 != -1) {
        uVar5 = (uint)(*pfVar3 == 1.4013e-45);
        if (pfVar3[1] == 1.4013e-45) {
          uVar5 = uVar5 + 1;
        }
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar10 + 5] == 1.4013e-45) {
          uVar5 = uVar5 + 1;
        }
        if (uVar5 - 1 < 2) {
          iVar4 = 3;
          pfVar17 = pfVar3;
          do {
            if (*pfVar17 == 1.4013e-45) {
              *pfVar17 = 0.0;
            }
            pfVar17 = pfVar17 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      iVar4 = *(int *)(iVar2 + 0x1c);
      iVar8 = (int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1;
      iVar10 = iVar10 + 9;
      pfVar3 = pfVar3 + 9;
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar8);
    } while (iVar8 < iVar4);
  }
  iVar10 = 0;
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)((uint)gen_fl2bits(fVar16) & 0xffff0000);
  iVar4 = *(int *)(iVar2 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar4) {
    iVar8 = 0;
    iVar2 = iVar10;
    do {
      if (iVar8 < iVar4 * 9) {
        iVar4 = iVar8 / 9;
        iVar9 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar4 = iVar8 + iVar4 * -9;
        iVar9 = (*(int *)(gen_frame + 0x280));
      }
      iVar10 = iVar2 + 1;
      uVar14 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) |
               (ushort)(*(int *)(iVar9 + iVar4 * 4) != -1) << ((byte)iVar2 & 0x1f);
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
      if (iVar10 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
        }
        uVar5 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar5 & 0xffff0000);
        iVar10 = 0;
      }
      iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      fVar16 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      iVar8 = iVar8 + 9;
      (*(float *)(gen_frame + 0x308)) = fVar16;
      iVar2 = iVar10;
    } while ((int)gen_fl2bits(fVar16) < iVar4);
    if (0 < iVar10) {
      if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
      }
      uVar5 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
      *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
      (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar5 & 0xffff0000);
      iVar10 = 0;
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)0x0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    iVar4 = ((int *)(gen_frame + 0x264))[0];
    uVar14 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    do {
      iVar2 = *(int *)(iVar4 + 0x1c) * 9;
      iVar8 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + iVar2;
      if (iVar8 < iVar2) {
        iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar8 / 9) * 4)));
        iVar4 = ((int *)(gen_frame + 0x264))[0];
      }
      else {
        iVar2 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar8 + *(int *)(iVar4 + 0x1c) * -9) * 4)));
      }
      bVar7 = (byte)iVar10;
      iVar10 = iVar10 + 1;
      uVar14 = uVar14 | (ushort)(iVar2 != -1) << (bVar7 & 0x1f);
      if (iVar10 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
          iVar4 = ((int *)(gen_frame + 0x264))[0];
        }
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = uVar14;
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        uVar14 = 0;
        iVar10 = 0;
      }
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x304)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar3;
    } while ((int)pfVar3 < *(int *)(iVar4 + 0x40));
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
  }
  if (0 < iVar10) {
    if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
    }
    *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
  }
  uVar5 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x250)) = 0;
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x238)) = 0;
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x244)) = 0;
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88) = 0;
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  uVar11 = 0;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar5 & 0xffff0000);
  (*(float *)(gen_frame + 0x31c)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)0x0;
  if (0 < iVar4) {
    (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
    (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2d8));
    (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 1;
    do {
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) < iVar4 * 9) {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) / 9) * 4)));
      }
      else {
        iVar4 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + iVar4 * -9) * 4)));
      }
      if (iVar4 != -1) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x2dc));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)0x9;
        pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2f4));
        do {
          pfVar19 = (*(float * PTR32 *)(gen_frame + 0x304));
          pfVar17 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x304)))));
          (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar17;
          if (pfVar17 == (float *)0x2) {
            if ((((int)pfVar3 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar3) % 9 - 3U < 3)) &&
               (fVar18 = F_00d7d0e0(((int *)(gen_frame + 0x264)),pfVar3), fVar16 = REFG(float, 0x1090708),
               bVar15 = GEN_ISNAN((float10)fVar18) || GEN_ISNAN((float10)0),
               bVar15 != (bVar15 || (float10)fVar18 == (float10)0))) {
              *pfVar19 = 4.2039e-45;
              (*(float * PTR32 *)(gen_frame + 0x30c))[-1] = fVar16;
              fVar16 = REFG(float, 0x1087f04);
              *(*(float * PTR32 *)(gen_frame + 0x30c)) = GEN_FLT_TO(*(*(float * PTR32 *)(gen_frame + 0x30c)), REFG(float, 0x1087f04));
              fVar16 = ((fVar16 - (*(float * PTR32 *)(gen_frame + 0x30c))[-1]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = (float *)0x3;
              if (fVar16 < 0.0) {
                fVar16 = 0.0;
              }
              bVar7 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar4 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float * PTR32 *)(gen_frame + 0x30c))[1] = fVar16;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar4);
              uVar14 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 1 << (bVar7 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
              if (iVar4 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
LAB_00d7a9f0: ;
                uVar5 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(float *)(gen_frame + 0x31c)) = 0.0;
                (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
                (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar5 & 0xffff0000);
              }
            }
            else {
              (*(float *)(gen_frame + 0x220)) = (*(float * PTR32 *)(gen_frame + 0x30c))[1] * REFG(float, 0x10928e4);
              (*(float *)(gen_frame + 0x308)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
              if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
              }
              *(float *)((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4) = (*(float *)(gen_frame + 0x220));
              (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
              if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
              }
              *(float *)((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4) = (*(float *)(gen_frame + 0x308));
              (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
              bVar7 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar4 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar4);
              uVar14 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar7 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
              if (iVar4 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
                goto LAB_00d7a9f0;
              }
            }
            if ((*(uint *)(gen_frame + 0x250)) == ((*(uint *)(gen_frame + 0x254)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x24c)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x24c)) + (*(uint *)(gen_frame + 0x250)) * 2) =
                 (short)(((int)((int)(uintptr_t)pfVar3) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar3) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar3) / 9) * 0xc;
            uVar5 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar5;
            uVar5 = uVar5 & 0x8000000f;
            bVar15 = uVar5 == 0;
            if ((int)uVar5 < 0) {
              bVar15 = (uVar5 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar15) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88) = (*(uint *)(gen_frame + 0x2c4));
            }
LAB_00d7aa89: ;
            if ((*(float * PTR32 *)(gen_frame + 0x2d0)) != (float *)0x1) goto LAB_00d7aa93;
          }
          else {
            if (pfVar17 != (float *)0x0) goto LAB_00d7aa89;
            (*(float *)(gen_frame + 0x28c)) = ((*(float * PTR32 *)(gen_frame + 0x30c))[-1] + *(*(float * PTR32 *)(gen_frame + 0x30c))) * REFG(float, 0x1088068);
            if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
            }
            *(float *)((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4) = (*(float *)(gen_frame + 0x28c));
            (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
            if ((*(uint *)(gen_frame + 0x22c)) == ((*(uint *)(gen_frame + 0x230)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x228)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x228)) + (*(uint *)(gen_frame + 0x22c)) * 2) =
                 (short)(((int)((int)(uintptr_t)pfVar3) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar3) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar3) / 9) * 0xc;
            (*(uint *)(gen_frame + 0x22c)) = (*(uint *)(gen_frame + 0x22c)) + 1;
LAB_00d7aa93: ;
            if ((((int)pfVar3 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar3) % 9 - 3U < 3)) &&
               (((*(uint *)(gen_frame + 0x25c)) == 0 ||
                ((float *)(uint)*(ushort *)((*(int *)(gen_frame + 0x258)) + -2 + (*(uint *)(gen_frame + 0x25c)) * 2) != (*(float * PTR32 *)(gen_frame + 0x2f0)))))) {
              if ((*(uint *)(gen_frame + 0x25c)) == ((*(uint *)(gen_frame + 0x260)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x258)),2);
              }
              *(undefined2 *)((*(int *)(gen_frame + 0x258)) + (*(uint *)(gen_frame + 0x25c)) * 2) = (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x2f0)) + 0));
              (*(uint *)(gen_frame + 0x25c)) = (*(uint *)(gen_frame + 0x25c)) + 1;
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x30c)) + 3;
          pfVar3 = (float *)((int)pfVar3 + 1);
          pfVar17 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar17;
        } while (pfVar17 != (float *)0x0);
      }
      iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 9);
      (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 9;
      (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2dc)) + 0x1b;
      pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar3;
    } while ((int)pfVar3 < iVar4);
    uVar11 = (uint)(*(float * PTR32 *)(gen_frame + 0x318)) & 0xffff;
  }
  (*(uint *)(gen_frame + 0x224)) = (*(uint *)(gen_frame + 0x250));
  fVar16 = (*(float *)(gen_frame + 0x31c));
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    do {
      bVar7 = (byte)(uint)gen_fl2bits(fVar16);
      fVar16 = gen_bits2f((int)gen_fl2bits(fVar16) + 1);
      uVar14 = (ushort)uVar11 | 1 << (bVar7 & 0x1f);
      uVar11 = (uint)uVar14;
      if (fVar16 == 2.24208e-44) {
        (*(float *)(gen_frame + 0x31c)) = fVar16;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
        if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
        }
        *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = uVar14;
        (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)) << 0x10)));
        (*(float *)(gen_frame + 0x31c)) = 0.0;
        goto LAB_00d7ab93;
      }
    } while (0 < (int)gen_fl2bits(fVar16));
    (*(float *)(gen_frame + 0x31c)) = fVar16;
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
  }
LAB_00d7ab93: ;
  iVar4 = 0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    do {
      iVar10 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar2 = iVar10 + iVar4;
      if (iVar2 < iVar10) {
        iVar2 = iVar2 / 9;
        iVar10 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar2 = iVar2 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
        iVar10 = (*(int *)(gen_frame + 0x280));
      }
      if (*(int *)(iVar10 + iVar2 * 4) != -1) {
        iVar2 = iVar4 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar2] == 2.8026e-45) {
          (*(float *)(gen_frame + 0x28c)) = (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar2 * 3 + 2] * REFG(float, 0x10928e4);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP((((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar2 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar2 * 3]) * REFG(float, 0x1088068))));
          if ((*(uint *)(gen_frame + 0x2c4)) == ((*(uint *)(gen_frame + 0x2c8)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2c0)),4);
          }
          *(float *)((*(int *)(gen_frame + 0x2c0)) + (*(uint *)(gen_frame + 0x2c4)) * 4) = (*(float *)(gen_frame + 0x28c));
          (*(uint *)(gen_frame + 0x2c4)) = (*(uint *)(gen_frame + 0x2c4)) + 1;
          if ((*(uint *)(gen_frame + 0x2ac)) == ((*(uint *)(gen_frame + 0x2b0)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2a8)),4);
          }
          *(float * PTR32 *)((*(int *)(gen_frame + 0x2a8)) + (*(uint *)(gen_frame + 0x2ac)) * 4) = (*(float * PTR32 *)(gen_frame + 0x32c));
          (*(uint *)(gen_frame + 0x2ac)) = (*(uint *)(gen_frame + 0x2ac)) + 1;
          bVar7 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
          iVar2 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
          (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar2);
          uVar14 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar7 & 0x1f);
          (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar14;
          (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar14)));
          if (iVar2 == 0x10) {
            if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
            }
            uVar5 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
            *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
            (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
            (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar5 & 0xffff0000);
            (*(float *)(gen_frame + 0x31c)) = 0.0;
          }
          if ((*(uint *)(gen_frame + 0x238)) == ((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x234)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x234)) + (*(uint *)(gen_frame + 0x238)) * 2) = (short)iVar4;
          (*(uint *)(gen_frame + 0x238)) = (*(uint *)(gen_frame + 0x238)) + 1;
        }
        else if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar2] == 0.0) {
          (*(float *)(gen_frame + 0x220)) = ((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar2 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar2 * 3]) * REFG(float, 0x1088068);
          if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
          }
          *(float *)((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4) = (*(float *)(gen_frame + 0x220));
          (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
          if ((*(uint *)(gen_frame + 0x244)) == ((*(uint *)(gen_frame + 0x248)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x240)) + (*(uint *)(gen_frame + 0x244)) * 2) = (short)iVar4;
          (*(uint *)(gen_frame + 0x244)) = (*(uint *)(gen_frame + 0x244)) + 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40));
  }
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
    }
    *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
  }
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x40) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x44) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x48) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x4c) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x50) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x54) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x58) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x5c) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x60) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x70) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x74) = 0xffffffff;
  *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x78) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x294)) = 0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)0x0;
  uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  if (0 < (int)uVar5) {
    do {
      uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
      if ((int)(uVar5 - (int)(*(float * PTR32 *)(gen_frame + 0x304))) < 0x10) {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)(uVar5 - (int)(*(float * PTR32 *)(gen_frame + 0x304)));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x10;
      }
      pfVar3 = (*(float * PTR32 *)(gen_frame + 0x30c));
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)(gen_frame + 0x314)),((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x30c)),0xc)
        ;
      }
      iVar2 = ((int)(*(float * PTR32 *)(gen_frame + 0x318)) - (int)pfVar3) + -1;
      iVar4 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
      if (-1 < iVar2) {
        puVar13 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + (int)((int)(uintptr_t)pfVar3) * 3 + iVar2 * 3 + 2);
        do {
          puVar13[-1] = 0;
          if (-1 < (int)*puVar13) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar13[-2],(*puVar13 & 0x3fffffff) * 2);
          }
          puVar13[-2] = 0;
          *puVar13 = 0x80000000;
          iVar2 = iVar2 + -1;
          puVar13 = puVar13 + -3;
          iVar4 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
          pfVar3 = (*(float * PTR32 *)(gen_frame + 0x30c));
        } while (-1 < iVar2);
      }
      iVar2 = (int)pfVar3 - iVar4;
      piVar12 = (*(int * PTR32 *)(gen_frame + 0x314)) + iVar4 * 3;
      if (0 < iVar2) {
        do {
          if (piVar12 != (int *)0x0) {
            *piVar12 = 0;
            piVar12[1] = 0;
            piVar12[2] = ((int)0x80000000);
          }
          piVar12 = piVar12 + 3;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = pfVar3;
      if (0 < (int)pfVar3) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = (float *)0x0;
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (*(float * PTR32 *)(gen_frame + 0x30c));
        (*(float * PTR32 *)(gen_frame + 0x2f0)) = (*(float * PTR32 *)(gen_frame + 0x304));
        iVar4 = ((int *)(gen_frame + 0x264))[0];
        fVar16 = REFG(float, 0x1088068);
        do {
          (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) + (int)(*(int * PTR32 *)(gen_frame + 0x314)));
          iVar2 = *(int *)(iVar4 + 0x1c) * 9;
          iVar10 = 0;
          if (0 < *(int *)(iVar4 + 0x40) + iVar2) {
            (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
            do {
              if (iVar10 < iVar2) {
                iVar8 = iVar10 / 9;
                iVar9 = (*(int *)(gen_frame + 0x274));
              }
              else {
                iVar8 = iVar10 - iVar2;
                iVar9 = (*(int *)(gen_frame + 0x280));
              }
              if ((*(int *)(iVar9 + iVar8 * 4) != -1) &&
                 (((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar10] == 2.8026e-45 || ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar10] == 4.2039e-45)))) {
                if (iVar10 < iVar2) {
                  fVar18 = F_00d7c7b0(((*(int * PTR32 *)(gen_frame + 0x26c))[4] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar10 / 9) * 4)))) * 0x30 + (*(int * PTR32 *)(gen_frame + 0x26c))[10]
                                        ,iVar10 % 9);
                  (*(float *)(gen_frame + 0x28c)) = fVar18;
                  fVar16 = REFG(float, 0x1088068);
                }
                else {
                  fVar18 = *((float *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x26c))[0xd] +
                                     ((*(int * PTR32 *)(gen_frame + 0x26c))[5] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                     *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar10 - iVar2) * 4)))) * 4)));
                }
                fVar18 = (fVar18 - ((*(float * PTR32 *)(gen_frame + 0x2f4))[-2] + (*(float * PTR32 *)(gen_frame + 0x2f4))[-1]) * fVar16) /
                         (*(*(float * PTR32 *)(gen_frame + 0x2f4)) * REFG(float, 0x10928e4));
                if (*(float *)&REFG(undefined, 0x1088114) <= fVar18) {
                  fVar18 = fVar18 + fVar16;
                }
                else {
                  fVar18 = fVar18 - fVar16;
                }
                iVar4 = (int)fVar18;
                if (iVar4 < -0x1fff) {
                  iVar4 = -0x1fff;
                }
                else if (0x1fff < iVar4) {
                  iVar4 = 0x1fff;
                }
                if ((*(float * PTR32 *)(gen_frame + 0x2dc))[1] == gen_bits2f((uint)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[2]) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(*(float * PTR32 *)(gen_frame + 0x2dc)),2);
                  fVar16 = REFG(float, 0x1088068);
                }
                *(short *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x2dc))) + (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) * 2) =
                     (short)iVar4;
                (*(float * PTR32 *)(gen_frame + 0x2dc))[1] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) + 1);
                iVar4 = ((int *)(gen_frame + 0x264))[0];
              }
              iVar2 = *(int *)(iVar4 + 0x1c) * 9;
              (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2f4)) + 3;
              iVar10 = iVar10 + 1;
            } while (iVar10 < *(int *)(iVar4 + 0x40) + iVar2);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 3;
          (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
          pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) + -1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar3;
        } while (pfVar3 != (float *)0x0);
      }
      pfVar3 = (float *)(*(int * PTR32 *)(gen_frame + 0x314))[1];
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar3;
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
      if (0 < (int)pfVar3) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = pfVar3;
        do {
          if ((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) < 0x10) {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
          }
          else {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)0x10;
          }
          pfVar3 = (*(float * PTR32 *)(gen_frame + 0x2dc));
          if (((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) <= (int)(*(uint *)(gen_frame + 0x224))) && ((int)(*(uint *)(gen_frame + 0x224)) < (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + (int)(*(float * PTR32 *)(gen_frame + 0x2dc))))
          {
            iVar4 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c) - (int)gen_fl2bits((*(float *)(gen_frame + 0x308)));
            if ((*(uint *)(gen_frame + 0x294)) == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)iVar4;
            uVar5 = (*(uint *)(gen_frame + 0x294)) + 1;
            (*(uint *)(gen_frame + 0x294)) = uVar5;
            if (uVar5 == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)((uint)iVar4 >> 0x10);
            (*(uint *)(gen_frame + 0x294)) = (*(uint *)(gen_frame + 0x294)) + 1;
          }
          if (((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0x10) || ((int)pfVar3 < 0x10)) {
            iVar4 = 0x1f;
            pfVar17 = ((float *)(gen_frame + 0x0));
            do {
              iVar4 = iVar4 + -1;
              *pfVar17 = 0.0;
              pfVar17[1] = 0.0;
              pfVar17[2] = 0.0;
              pfVar17[3] = 0.0;
              pfVar17 = pfVar17 + 4;
            } while (-1 < iVar4);
          }
          if (0 < (int)pfVar3) {
            pfVar17 = ((float *)(gen_frame + 0x0));
            (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar17;
            iVar4 = (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) * 2;
            (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar3;
            do {
              piVar12 = (*(int * PTR32 *)(gen_frame + 0x314));
              pfVar3 = (*(float * PTR32 *)(gen_frame + 0x30c));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar17;
              if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
                do {
                  *(undefined2 *)pfVar17 = *(undefined2 *)(iVar4 + *piVar12);
                  pfVar17 = (float *)((int)pfVar17 + 2);
                  piVar12 = piVar12 + 3;
                  pfVar3 = (float *)((int)pfVar3 + -1);
                } while (pfVar3 != (float *)0x0);
              }
              pfVar17 = (*(float * PTR32 *)(gen_frame + 0x32c)) + 8;
              iVar4 = iVar4 + 2;
              pfVar3 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2d0)) + -1);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar3;
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar17;
            } while (pfVar3 != (float *)0x0);
          }
          pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
          iVar2 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
          piVar12 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x28);
          iVar4 = iVar2 + 0x210;
          uVar5 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x30) & 0x3fffffff;
          if ((int)uVar5 < iVar4) {
            iVar10 = uVar5 * 2;
            if (iVar4 < iVar10) {
              iVar4 = iVar10;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar12,iVar4,1);
          }
          iVar4 = *piVar12;
          *(int *)((int)pvVar1 + 0x2c) = *(int *)((int)pvVar1 + 0x2c) + 0x210;
          uVar5 = F_00d8a970(((float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x30c)),(*(float * PTR32 *)(gen_frame + 0x2dc)),iVar4 + iVar2);
          iVar4 = uVar5 - *piVar12;
          uVar5 = *(uint *)((int)pvVar1 + 0x30) & 0x3fffffff;
          if ((int)uVar5 < iVar4) {
            iVar2 = uVar5 * 2;
            if (iVar2 <= iVar4) {
              iVar2 = iVar4;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar12,iVar2,1);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + -4;
          iVar2 = (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 0x10;
          *(int *)((int)pvVar1 + 0x2c) = iVar4;
          (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)iVar2;
        } while (iVar2 < (int)(*(float * PTR32 *)(gen_frame + 0x2f0)));
      }
      iVar4 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar4);
      if ((*(uint *)(gen_frame + 0x2a0)) == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)iVar4;
      uVar5 = (*(uint *)(gen_frame + 0x2a0)) + 1;
      (*(uint *)(gen_frame + 0x2a0)) = uVar5;
      if (uVar5 == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)((uint)iVar4 >> 0x10);
      (*(uint *)(gen_frame + 0x2a0)) = (*(uint *)(gen_frame + 0x2a0)) + 1;
      iVar4 = (int)(*(float * PTR32 *)(gen_frame + 0x318)) + -1;
      if (-1 < iVar4) {
        puVar13 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + iVar4 * 3 + 2);
        do {
          puVar13[-1] = 0;
          if (-1 < (int)*puVar13) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar13[-2],(*puVar13 & 0x3fffffff) * 2);
          }
          puVar13[-2] = 0;
          *puVar13 = 0x80000000;
          iVar4 = iVar4 + -1;
          puVar13 = puVar13 + -3;
        } while (-1 < iVar4);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      if (-1 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)(gen_frame + 0x314)),
                   ((uint)gen_fl2bits((*(float *)(gen_frame + 0x31c))) & 0x3fffffff) * 0xc);
      }
      iVar4 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + 0xf;
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)iVar4;
      uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
    } while (iVar4 < (int)uVar5);
  }
  pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
  F_00d79ee0((*(undefined * PTR32 *)(gen_frame + 0x2cc)),&(*(int *)(gen_frame + 0x29c)),0);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x290)),1);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x2e4)),2);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x2f8)),3);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x24c)),4);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x234)),5);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x228)),6);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x240)),7);
  F_00d79ee0(pvVar1,&(*(int *)(gen_frame + 0x258)),8);
  F_00d79f10(pvVar1,&(*(int *)(gen_frame + 0x2b4)),0);
  F_00d79f10(pvVar1,&(*(int *)(gen_frame + 0x2c0)),1);
  F_00d79f10(pvVar1,&(*(int *)(gen_frame + 0x2a8)),2);
  iVar4 = *(int *)((int)pvVar1 + 0x38) + 8;
  uVar5 = *(uint *)((int)pvVar1 + 0x3c) & 0x3fffffff;
  if ((int)uVar5 < iVar4) {
    iVar2 = uVar5 * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar1 + 0x34,iVar4,2);
  }
  *(int *)((int)pvVar1 + 0x38) = *(int *)((int)pvVar1 + 0x38) + 8;
  iVar4 = *(int *)((int)pvVar1 + 0x68) + 4;
  uVar5 = *(uint *)((int)pvVar1 + 0x6c) & 0x3fffffff;
  if ((int)uVar5 < iVar4) {
    iVar2 = uVar5 * 2;
    if (iVar4 < iVar2) {
      iVar4 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar1 + 100,iVar4,4);
  }
  *(int *)((int)pvVar1 + 0x68) = *(int *)((int)pvVar1 + 0x68) + 4;
  if (*(int *)((int)pvVar1 + 0x38) < (int)(*(uint *)((int)pvVar1 + 0x3c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar1 + 0x34,2,0,*(int *)((int)pvVar1 + 0x38));
  }
  if (*(int *)((int)pvVar1 + 0x68) < (int)(*(uint *)((int)pvVar1 + 0x6c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar1 + 100,4,0,*(int *)((int)pvVar1 + 0x68));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(undefined4, 0x15dff78),0x3214badc,"Compression");
  iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
  uVar5 = 0;
  iVar2 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar4;
  ((float *)(gen_frame + 0x200))[0] = 0.0;
  ((float *)(gen_frame + 0x200))[1] = 0.0;
  ((float *)(gen_frame + 0x200))[2] = 0.0;
  ((float *)(gen_frame + 0x200))[3] = 0.0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)iVar4;
  if (0 < iVar2) {
    (*(float * PTR32 *)(gen_frame + 0x2d0)) = ((float *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -0x24)));
    do {
      if ((int)uVar5 < (int)(*(float * PTR32 *)(gen_frame + 0x32c))) {
        fVar16 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (uVar5 / 9) * 4)));
      }
      else {
        fVar16 = *(*(float * PTR32 *)(gen_frame + 0x2d0));
      }
      if (fVar16 != -NAN) {
        ((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar5]))] =
             gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar5]))]) + 1);
        (*(float *)(gen_frame + 0x308)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      }
      uVar5 = uVar5 + 1;
      (*(float * PTR32 *)(gen_frame + 0x2d0)) = (*(float * PTR32 *)(gen_frame + 0x2d0)) + 1;
    } while ((int)uVar5 < iVar2);
  }
  iVar4 = ((*(int * PTR32 *)(gen_frame + 0x26c))[0xe] + (*(int * PTR32 *)(gen_frame + 0x26c))[0xb] * 0xc) * 4;
  uVar5 = F_00d6eca0(pvVar1);
  (*(uint *)(gen_frame + 0x224)) = uVar5;
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  puVar25 = &REFG(undefined, 0x1137b18);
  fVar16 = (float)iVar4 / (float)(int)(*(uint *)(gen_frame + 0x224));
  puVar23 = &REFG(undefined, 0x1137b14);
  puVar21 = &REFG(undefined, 0x1137b0c);
  uVar5 = (*(uint *)(gen_frame + 0x224));
  pvVar6 = (undefined *)F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)),"Compression: ");
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,iVar4);
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,puVar21);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,uVar5);
  uVar5 = F_00d9fe80(pvVar6,puVar23);
  pvVar6 = (undefined *)F_00d9ffe0(uVar5,fVar16);
  F_00d9fe80(pvVar6,puVar25);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29d);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  iVar4 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar2 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  pcVar26 = " animated channels";
  iVar10 = iVar2 + iVar4 * 8 + iVar4;
  puVar21 = &REFG(undefined, 0x1080808);
  pcVar22 = " floats, ";
  pcVar20 = " bones, ";
  fVar16 = (*(float *)(gen_frame + 0x308));
  pvVar6 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),iVar4);
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar20);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,iVar2);
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar22);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,(undefined4)gen_fl2bits(fVar16));
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,puVar21);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,iVar10);
  F_00d9fe80(pvVar6,pcVar26);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29f);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  pcVar20 = " frames";
  pvVar6 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),uVar5);
  F_00d9fe80(pvVar6,pcVar20);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a0);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)),((float *)(gen_frame + 0x0)),0x200);
  pcVar27 = " fixed channels";
  pcVar26 = " ranged, ";
  pcVar22 = " reference, ";
  pcVar20 = " static, ";
  fVar16 = ((float *)(gen_frame + 0x200))[1];
  fVar18 = ((float *)(gen_frame + 0x200))[2];
  fVar24 = ((float *)(gen_frame + 0x200))[3];
  pvVar6 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)),(undefined4)gen_fl2bits(((float *)(gen_frame + 0x200))[0]));
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar20);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,(undefined4)gen_fl2bits(fVar16));
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar22);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,(undefined4)gen_fl2bits(fVar18));
  pvVar6 = (undefined *)F_00d9fe80(pvVar6,pcVar26);
  pvVar6 = (undefined *)F_00d9ff40(pvVar6,(undefined4)gen_fl2bits(fVar24));
  F_00d9fe80(pvVar6,pcVar27);
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(undefined4, 0x15dff78),0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a1);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)));
  ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(undefined4, 0x15dff78));
  if (*(int *)((int)pvVar1 + 0x2c) < (int)(*(uint *)((int)pvVar1 + 0x30) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar1 + 0x28,1,0,*(int *)((int)pvVar1 + 0x2c));
  }
  uVar5 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)));
  *(uint *)((int)pvVar1 + 0x84) = uVar5;
  *(undefined4 *)((int)pvVar1 + 0x80) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  *(undefined4 *)((int)pvVar1 + 0x7c) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar4 = (*(int * PTR32 *)(gen_frame + 0x26c))[3];
  *(int *)((int)pvVar1 + 0x8c) = ((int *)(gen_frame + 0x264))[0];
  *(int *)((int)pvVar1 + 0xc) = iVar4;
  *(undefined4 *)((int)pvVar1 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)pvVar1 + 0x14) = *(undefined4 *)(param_1 + 0x20);
  F_00d79e80(pvVar1);
  (*(uint *)(gen_frame + 0x294)) = 0;
  if (((*(uint *)(gen_frame + 0x298)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x290)),((*(uint *)(gen_frame + 0x298)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x290)) = 0;
  (*(uint *)(gen_frame + 0x298)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2a0)) = 0;
  if (((*(uint *)(gen_frame + 0x2a4)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x29c)),((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x29c)) = 0;
  (*(uint *)(gen_frame + 0x2a4)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2b8)) = 0;
  if (((*(uint *)(gen_frame + 0x2bc)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2b4)),(*(uint *)(gen_frame + 0x2bc)) * 4);
  }
  (*(int *)(gen_frame + 0x2b4)) = 0;
  (*(uint *)(gen_frame + 0x2bc)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2ac)) = 0;
  if (((*(uint *)(gen_frame + 0x2b0)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2a8)),(*(uint *)(gen_frame + 0x2b0)) * 4);
  }
  (*(int *)(gen_frame + 0x2a8)) = 0;
  (*(uint *)(gen_frame + 0x2b0)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2c4)) = 0;
  if (((*(uint *)(gen_frame + 0x2c8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2c0)),(*(uint *)(gen_frame + 0x2c8)) * 4);
  }
  (*(int *)(gen_frame + 0x2c0)) = 0;
  (*(uint *)(gen_frame + 0x2c8)) = 0x80000000;
  (*(uint *)(gen_frame + 0x25c)) = 0;
  if (((*(uint *)(gen_frame + 0x260)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x258)),((*(uint *)(gen_frame + 0x260)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x258)) = 0;
  (*(uint *)(gen_frame + 0x260)) = 0x80000000;
  (*(uint *)(gen_frame + 0x244)) = 0;
  if (((*(uint *)(gen_frame + 0x248)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x240)),((*(uint *)(gen_frame + 0x248)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x240)) = 0;
  (*(uint *)(gen_frame + 0x248)) = 0x80000000;
  (*(uint *)(gen_frame + 0x22c)) = 0;
  if (((*(uint *)(gen_frame + 0x230)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x228)),((*(uint *)(gen_frame + 0x230)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x228)) = 0;
  (*(uint *)(gen_frame + 0x230)) = 0x80000000;
  (*(uint *)(gen_frame + 0x238)) = 0;
  if (((*(uint *)(gen_frame + 0x23c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x234)),((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x234)) = 0;
  (*(uint *)(gen_frame + 0x23c)) = 0x80000000;
  (*(uint *)(gen_frame + 0x250)) = 0;
  if (((*(uint *)(gen_frame + 0x254)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x24c)),((*(uint *)(gen_frame + 0x254)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x24c)) = 0;
  (*(uint *)(gen_frame + 0x254)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2fc)) = 0;
  if (((*(uint *)(gen_frame + 0x300)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2f8)),((*(uint *)(gen_frame + 0x300)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2f8)) = 0;
  (*(uint *)(gen_frame + 0x300)) = 0x80000000;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  if (((*(uint *)(gen_frame + 0x2ec)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(int *)(gen_frame + 0x2e4)),((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff) * 2);
  }
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  if (((*(uint *)(gen_frame + 0x210)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d8)),(*(uint *)(gen_frame + 0x210)) * 4);
  }
  if (((*(uint *)(gen_frame + 0x21c)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),(*(float * PTR32 *)(gen_frame + 0x2d4)),((*(uint *)(gen_frame + 0x21c)) & 0x3fffffff) * 0xc);
  }
  uVar5 = F_00d7ddb0(((int *)(gen_frame + 0x264)));
  return uVar5;
}

/* ref: FUN_00d7bdc0 */
uint F_00d7bdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00d6f630(((undefined1 *)(gen_frame + 0x8)));
  F_00d79f40(this,param_1,param_2,((undefined1 *)(gen_frame + 0x8)));
  F_00d7dd10(((undefined1 *)(gen_frame + 0x8)));
  return (uint)this;
}

/* ref: FUN_00d7be30 */
uint F_00d7be30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7be30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this,*(undefined4 *)(param_1 + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  F_00d79f40(this,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d7be90 */
uint F_00d7be90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  if (param_1 != 0) {
    F_00d79e80(this);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00d7beb0 */
uint F_00d7beb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d7bed0 */
uint F_00d7bed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d7bee0 */
uint F_00d7bee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bee0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00d7bf00 */
uint F_00d7bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00d7bf30 */
uint F_00d7bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d7bf70 */
uint F_00d7bf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d7bfa0 */
uint F_00d7bfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7bfc0 */
uint F_00d7bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c000 */
uint F_00d7c000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7c020 */
unsigned int F_00d7c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c020u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (3 < param_2) {
    iVar3 = (param_2 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = (undefined4 *)(param_3 + 0xc);
    do {
      puVar1[-1] = puVar2[-3];
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - param_1) + -0x10 + (int)(puVar1 + 4))));
      puVar1[1] = puVar2[-1];
      puVar1[2] = *puVar2;
      puVar1 = puVar1 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  if (iVar4 < param_2) {
    iVar3 = param_2 - iVar4;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 4);
    do {
      iVar3 = iVar3 + -1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_3 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7c0b0 */
uint F_00d7c0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c0b0u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,2);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_00d7c0f0 */
unsigned int F_00d7c0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c0f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      *(undefined2 *)(param_1 + iVar1 * 2) = *param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

/* ref: FUN_00d7c130 */
unsigned int F_00d7c130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined2 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7c160 */
uint F_00d7c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c180 */
uint F_00d7c180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c1c0 */
unsigned int F_00d7c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c1c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7c220 */
uint F_00d7c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c240 */
uint F_00d7c240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c240u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0xc)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0xc;
  return uVar2;
}

/* ref: FUN_00d7c2b0 */
uint F_00d7c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c2b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  return param_3;
}

/* ref: FUN_00d7c2d0 */
uint F_00d7c2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]),&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c330 */
uint F_00d7c330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d7c360 */
uint F_00d7c360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c380 */
uint F_00d7c380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c380u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3a0 */
uint F_00d7c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d7c3c0 */
uint F_00d7c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c3c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3e0 */
uint F_00d7c3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c430 */
uint F_00d7c430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c440 */
unsigned int F_00d7c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  return 0;
}

/* ref: FUN_00d7c460 */
uint F_00d7c460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x10)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c480 */
uint F_00d7c480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 < *(int *)(in_ecx + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00d7c4a0 */
uint F_00d7c4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c4d0 */
uint F_00d7c4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c500 */
uint F_00d7c500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c530 */
uint F_00d7c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c560 */
uint F_00d7c560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c590 */
uint F_00d7c590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c5c0 */
uint F_00d7c5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c5f0 */
uint F_00d7c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) << 5;
  }
  return 0;
}

/* ref: FUN_00d7c620 */
uint F_00d7c620(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd7c620u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  float fVar2;
  
  fVar2 = (param_2 - (in_ecx[1] + *in_ecx) * REFG(float, 0x1088068)) / (in_ecx[2] * REFG(float, 0x10928e4));
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar2) {
    fVar2 = fVar2 + REFG(float, 0x1088068);
  }
  else {
    fVar2 = fVar2 - REFG(float, 0x1088068);
  }
  uVar1 = (uint)fVar2;
  if ((int)uVar1 < -0x1fff) {
    return 0xffffe001;
  }
  if (0x1fff < (int)uVar1) {
    uVar1 = 0x1fff;
  }
  return uVar1;
}

/* ref: FUN_00d7c690 */
unsigned int F_00d7c690(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xd7c690u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((in_ecx[1] - *in_ecx) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
  if (fVar1 < param_2) {
    fVar1 = param_2;
  }
  in_ecx[2] = fVar1;
  return 0;
}

/* ref: FUN_00d7c7b0 */
float F_00d7c7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c7b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float fVar1;
  float fVar2;
  
  fVar1 = ((ABS(param_1[5]) + ABS(param_1[4])) + ABS(param_1[6])) + ABS(param_1[7]);
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 0: ;
    return *param_1;
  case 1: ;
    return param_1[1];
  case 2: ;
    return param_1[2];
  case 3: ;
    fVar2 = param_1[4];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    break;
  case 4: ;
    fVar2 = param_1[5];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return (float)((float10)fVar2 / (float10)fVar1);
  case 5: ;
    fVar2 = param_1[6];
    if (!(*(float *)&REFG(undefined, 0x1088114) <= param_1[7])) {
      fVar2 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
    }
    return (float)((float10)fVar2 / (float10)fVar1);
  case 6: ;
    return param_1[8];
  case 7: ;
    return param_1[9];
  case 8: ;
    return param_1[10];
  default: ;
    return (float)(float10)0;
  }
  return (float)((float10)fVar2 / (float10)fVar1);
}

/* ref: FUN_00d7c930 */
byte F_00d7c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c930u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 < *(int *)(*in_ecx + 0x1c) * 9;
}

/* ref: FUN_00d7c950 */
uint F_00d7c950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((int)(*(uint *)(*(int *)this + 0x1c) * 9) <= param_1) {
    return *(uint *)(*(int *)this + 0x1c) & 0xffffff00;
  }
  return (uint)(param_1 % 9 - 3U < 3);
}

/* ref: FUN_00d7c9e0 */
uint F_00d7c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ca40 */
uint F_00d7ca40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ca40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7ca80 */
uint F_00d7ca80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ca80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7cad0 */
uint F_00d7cad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = *(int *)((int)this + 4) + param_3;
  uVar6 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar6 < (int)uVar2) {
    uVar6 = uVar6 * 2;
    uVar3 = uVar2;
    if ((int)uVar2 < (int)uVar6) {
      uVar3 = uVar6;
    }
    F_00d95690(param_1,this,uVar3,4);
  }
  iVar1 = *(int *)this + *(int *)((int)this + 4) * 4;
  iVar7 = 0;
  if (3 < param_3) {
    iVar8 = (param_3 - 4U >> 2) + 1;
    iVar7 = iVar8 * 4;
    puVar4 = (undefined4 *)(iVar1 + 4);
    puVar5 = (undefined4 *)(param_2 + 0xc);
    do {
      puVar4[-1] = puVar5[-3];
      iVar8 = iVar8 + -1;
      *puVar4 = *((undefined4 *)GEN_TOP(((param_2 - iVar1) + -0x10 + (int)(puVar4 + 4))));
      puVar4[1] = puVar5[-1];
      puVar4[2] = *puVar5;
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
    } while (iVar8 != 0);
  }
  if (iVar7 < param_3) {
    iVar8 = param_3 - iVar7;
    puVar4 = (undefined4 *)(iVar1 + iVar7 * 4);
    do {
      iVar8 = iVar8 + -1;
      *puVar4 = *((undefined4 *)GEN_TOP(((int)puVar4 + (param_2 - iVar1))));
      puVar4 = puVar4 + 1;
    } while (iVar8 != 0);
  }
  *(uint *)((int)this + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00d7cba0 */
uint F_00d7cba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7cc00 */
uint F_00d7cc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7cc50 */
uint F_00d7cc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_2;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_2;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(param_1,this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7ccb0 */
uint F_00d7ccb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ccb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7ccf0 */
uint F_00d7ccf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ccf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_2;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(param_1,this,iVar4,2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7cd40 */
unsigned int F_00d7cd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined2 * puVar2;
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
    F_00d95690(param_1,this,iVar4,2);
  }
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  if (0 < param_3) {
    iVar3 = param_2 - (int)puVar2;
    iVar4 = param_3;
    do {
      *puVar2 = *(undefined2 *)(iVar3 + (int)puVar2);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00d7cdb0 */
uint F_00d7cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cdb0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    uVar2 = 0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]));
    iVar3 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar3 != 0) goto LAB_00d7ce07;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7ce07: ;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar3;
  iVar3 = 0;
  *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(uVar2 + iVar3 * 4) = *(*(undefined4 * PTR32 *)&gen_args[2]);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7ce40 */
unsigned int F_00d7ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ce40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7ce70 */
unsigned int F_00d7ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ce70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  iVar2 = param_2;
  if (0 < param_2) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_3;
      }
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d7cea0 */
uint F_00d7cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7cea0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7cee0 */
unsigned int F_00d7cee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cee0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7cf10 */
unsigned int F_00d7cf10(unsigned int gen_a0)
{
  GEN_ENTER(0xd7cf10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d7cf70 */
uint F_00d7cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + *(int *)(*(int *)this + 0x1c) * 9;
}

/* ref: FUN_00d7cf90 */
byte F_00d7cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)(*(int *)this + 0x1c) * 9) {
    return *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4))) != -1;
  }
  return *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4)))
         != -1;
}

/* ref: FUN_00d7cff0 */
float F_00d7cff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(*(int *)this + 0x1c) * 9 <= param_1) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[6] + iVar1 * 4) * 0x20 + 0xc + *piVar2)));
    }
    return *(float *)(*piVar2 + 0xc);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4)));
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + *piVar2)));
    }
    return *(float *)*piVar2;
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 8 + *piVar2)));
    }
    return *(float *)(*piVar2 + 8);
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 4 + *piVar2)));
  }
  return *(float *)(*piVar2 + 4);
}

/* ref: FUN_00d7d0e0 */
float F_00d7d0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (*(int *)(*(int *)this + 0x1c) * 9 <= param_1) {
    piVar2 = *(int * PTR32 *)((int)this + 0xc);
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x1c) + (param_1 + *(int *)(*(int *)this + 0x1c) * -9) * 4
                    )));
    if (iVar1 < piVar2[7]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[6] + iVar1 * 4) * 0x20 + 0x1c + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x1c);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_1 / 9) * 4)));
  piVar2 = *(int * PTR32 *)((int)this + 0xc);
  if (param_1 % 9 < 3) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x10 + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x10);
  }
  if (5 < param_1 % 9) {
    if (iVar1 < piVar2[4]) {
      return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x18 + *piVar2)));
    }
    return *(float *)(*piVar2 + 0x18);
  }
  if (iVar1 < piVar2[4]) {
    return *((float *)GEN_TOP((*(int *)(piVar2[3] + iVar1 * 4) * 0x20 + 0x14 + *piVar2)));
  }
  return *(float *)(*piVar2 + 0x14);
}

/* ref: FUN_00d7d1d0 */
float F_00d7d1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  float fVar1;
  
  if (param_2 < *(int *)(*(int *)this + 0x1c) * 9) {
    fVar1 = F_00d7c7b0((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) * param_1 +
                         *((int *)GEN_TOP((*(int *)((int)this + 0x10) + (param_2 / 9) * 4)))) * 0x30 +
                         *((int *)GEN_TOP((*(int *)((int)this + 8) + 0x28))),param_2 % 9);
    return fVar1;
  }
  return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) +
                   (*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) * param_1 +
                   *((int *)GEN_TOP((*(int *)((int)this + 0x1c) +
                           (param_2 + *(int *)(*(int *)this + 0x1c) * -9) * 4)))) * 4)));
}

/* ref: FUN_00d7d240 */
float F_00d7d240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  float fVar3;
  
  iVar1 = *(int *)this;
  if (param_1 < *(int *)(iVar1 + 0x1c) * 9) {
    fVar3 = F_00d7c7b0((param_1 / 9) * 0x30 + *(int *)(iVar1 + 0x24),param_1 % 9);
    return fVar3;
  }
  iVar2 = param_1 + *(int *)(iVar1 + 0x1c) * -9;
  if (*(int *)(iVar1 + 0x34) <= iVar2) {
    return (float)(float10)0;
  }
  return *((float *)GEN_TOP((*(int *)(iVar1 + 0x30) + iVar2 * 4)));
}

/* ref: FUN_00d7d2a0 */
uint F_00d7d2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,4,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d310 */
uint F_00d7d310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7d350 */
uint F_00d7d350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,4);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 4;
}

/* ref: FUN_00d7d3a0 */
uint F_00d7d3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d7cad0(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d7d3c0 */
uint F_00d7d3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,1,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d430 */
uint F_00d7d430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2;
}

/* ref: FUN_00d7d480 */
uint F_00d7d480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) + -1 + param_1;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 2;
    iVar2 = (uVar1 >> 1 | uVar1) + 1;
  }
  else {
    iVar2 = *(int *)((int)this + 4) + param_1;
  }
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (iVar2 < (int)uVar1) {
    uVar1 = F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),this,2,0,iVar2);
  }
  return uVar1;
}

/* ref: FUN_00d7d4f0 */
uint F_00d7d4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d530 */
uint F_00d7d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_1;
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar4,2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1;
  return *(int *)this + iVar2 * 2;
}

/* ref: FUN_00d7d580 */
unsigned int F_00d7d580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d7cd40(this,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return 0;
}

/* ref: FUN_00d7d5a0 */
uint F_00d7d5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,2);
  }
  puVar1 = ((undefined2 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 2)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d7d5e0 */
unsigned int F_00d7d5e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)this;
  if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,2);
  }
  *(undefined2 *)(*piVar1 + piVar1[1] * 2) = *(undefined2 *)((int)this + 4);
  piVar1[1] = piVar1[1] + 1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return 0;
}

/* ref: FUN_00d7d630 */
uint F_00d7d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d630u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined8 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 0xc;
    puVar1 = ((undefined8 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (*(int *)&gen_args[1]) / 0xc;
    if (iVar2 != 0) goto LAB_00d7d68e;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7d68e: ;
  *(undefined8 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(*(undefined8 * PTR32 *)&gen_args[2]);
        *(undefined4 *)(puVar1 + 1) = *((undefined4 *)GEN_TOP(((*(undefined8 * PTR32 *)&gen_args[2]) + 1)));
      }
      puVar1 = (undefined8 *)((int)puVar1 + 0xc);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d6d0 */
uint F_00d7d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d6d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(int *)&gen_args[1]);
  *(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7d726;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7d726: ;
  *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = puVar1;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = iVar2;
  if (0 < iVar3) {
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *(*(undefined4 * PTR32 *)&gen_args[2]);
      }
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d760 */
uint F_00d7d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7a0 */
uint F_00d7d7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7d7e0 */
uint F_00d7d7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7d820 */
uint F_00d7d820(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d860 */
unsigned int F_00d7d860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(ushort *)((int)this + 4) =
       *(ushort *)((int)this + 4) | ((ushort)param_1 & 1) << ((byte)*(int *)((int)this + 8) & 0x1f);
  iVar1 = *(int *)((int)this + 8) + 1;
  *(int *)((int)this + 8) = iVar1;
  if (iVar1 == 0x10) {
    piVar2 = *(int * PTR32 *)this;
    if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
    }
    *(undefined2 *)(*piVar2 + piVar2[1] * 2) = *(undefined2 *)((int)this + 4);
    piVar2[1] = piVar2[1] + 1;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 0;
}

/* ref: FUN_00d7d920 */
unsigned int F_00d7d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (0 < *(int *)((int)this + 8)) {
    do {
      *(ushort *)((int)this + 4) =
           *(ushort *)((int)this + 4) |
           ((ushort)param_1 & 1) << ((byte)*(int *)((int)this + 8) & 0x1f);
      iVar1 = *(int *)((int)this + 8) + 1;
      *(int *)((int)this + 8) = iVar1;
      if (iVar1 == 0x10) {
        piVar2 = *(int * PTR32 *)this;
        if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
        }
        *(undefined2 *)(*piVar2 + piVar2[1] * 2) = *(undefined2 *)((int)this + 4);
        piVar2[1] = piVar2[1] + 1;
        *(undefined2 *)((int)this + 4) = 0;
        *(undefined4 *)((int)this + 8) = 0;
      }
    } while (0 < *(int *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_00d7d9a0 */
uint F_00d7d9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d9e0 */
uint F_00d7d9e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7d9e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d7da20 */
uint F_00d7da20(unsigned int gen_a0)
{
  GEN_ENTER(0xd7da20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d7da60 */
uint F_00d7da60(unsigned int gen_a0)
{
  GEN_ENTER(0xd7da60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7daa0 */
uint F_00d7daa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7daa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7dae0 */
uint F_00d7dae0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7dae0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d7db20 */
uint F_00d7db20(unsigned int gen_a0)
{
  GEN_ENTER(0xd7db20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d7db60 */
uint F_00d7db60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)*(uint *)((int)this + 8)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(*(uint *)((int)this + 8) & 0x3fffffff) * 2
              );
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d7dbd0 */
uint F_00d7dbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7dbd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar2 = (*(int *)&gen_args[1]);
  *(int *)(*(undefined * PTR32 *)&gen_args[0]) = (*(int *)&gen_args[1]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = (*(int *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *(undefined4 *)((*(int *)&gen_args[2]) + 0xc);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined4 *)&gen_args[3]);
  iVar3 = *(int *)((*(int *)&gen_args[1]) + 0x1c);
  puVar4 = (undefined4 *)0x0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0x80000000;
  if (iVar3 == 0) {
LAB_00d7dc39: ;
    iVar1 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar3 * 4;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar1 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar1 == 0) goto LAB_00d7dc39;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = puVar4;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = iVar1;
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3 = *(int *)(iVar2 + 0x40);
  puVar4 = (undefined4 *)0x0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0x80000000;
  if (iVar3 != 0) {
    (*(int *)&gen_args[1]) = iVar3 * 4;
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7dca0;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7dca0: ;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = puVar4;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = iVar3;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = iVar2;
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0xffffffff;
      puVar4 = puVar4 + 1;
    }
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x10))) + iVar3 * 2))) * 4))) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x14))));
  }
  iVar3 = 0;
  if (0 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20)))) {
    do {
      *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) +
              *((short *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x1c))) + iVar3 * 2))) * 4))) = iVar3;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x20))));
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7dd10 */
uint F_00d7dd10(unsigned int gen_a0)
{
  GEN_ENTER(0xd7dd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((*(uint *)((int)this + 0x20) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               *(uint *)((int)this + 0x20) * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((*(uint *)((int)this + 0x14) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),
               *(uint *)((int)this + 0x14) * 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d7ddb0 */
uint F_00d7ddb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < *(int *)((int)this + 0x24)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),
               *(int *)((int)this + 0x24) * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  return uVar1;
}

/* ref: FUN_00d7de20 */
unsigned int F_00d7de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7de20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(param_1 + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00d7de80 */
unsigned int F_00d7de80(unsigned int gen_a0)
{
  GEN_ENTER(0xd7de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*(int *)this + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < iVar2);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7def0 */
unsigned int F_00d7def0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7def0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  uint * puVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_2) {
    iVar4 = uVar1 * 2;
    if (iVar4 <= param_2) {
      iVar4 = param_2;
    }
    F_00d95690(param_1,this,iVar4,0xc);
  }
  iVar4 = (*(int *)((int)this + 4) - param_2) + -1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*(int *)this + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar3[-2],(*puVar3 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar4 = param_2 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar4) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d7dfc0 */
uint F_00d7dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(*puVar2 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e060 */
unsigned int F_00d7e060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * puVar4;
  int iVar5;
  
  uVar1 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar1 < param_1) {
    iVar5 = uVar1 * 2;
    iVar3 = param_1;
    if (param_1 < iVar5) {
      iVar3 = iVar5;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,0xc);
  }
  iVar5 = (*(int *)((int)this + 4) - param_1) + -1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*(int *)this + param_1 * 0xc + 8 + iVar5 * 0xc);
    do {
      puVar4[-1] = 0;
      if (-1 < (int)*puVar4) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar4[-2],(*puVar4 & 0x3fffffff) * 2);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 + -3;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = param_1 - *(int *)((int)this + 4);
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 0xc)));
  if (0 < iVar5) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0x80000000;
      }
      puVar2 = puVar2 + 3;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d7e250 */
uint F_00d7e250(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d7e280 */
uint F_00d7e280(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x68) = 0;
  if (-1 < *(int *)((int)this + 0x6c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),*(int *)((int)this + 0x6c) * 4
              );
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x3c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),
               (*(uint *)((int)this + 0x3c) & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x30)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),
               *(uint *)((int)this + 0x30) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this);
  return uVar1;
}

/* ref: hkaPredictiveCompressedAnimation::vf0 */
uint F_00d7e320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e280(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7e380 */
uint F_00d7e380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7e3b0 */
unsigned int F_00d7e3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d7e460 */
uint F_00d7e460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7e490 */
uint F_00d7e490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00d7e530 */
uint F_00d7e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e570 */
uint F_00d7e570(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5b0 */
uint F_00d7e5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e5f0 */
unsigned int F_00d7e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint * puVar1;
  int iVar2;
  
  iVar2 = param_2 + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(param_1 + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < iVar2);
  }
  return 0;
}

/* ref: FUN_00d7e650 */
unsigned int F_00d7e650(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    puVar1 = (uint *)(*(int *)this + 8 + iVar2 * 0xc);
    do {
      puVar1[-1] = 0;
      if (-1 < (int)*puVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar1[-2],(*puVar1 & 0x3fffffff) * 2);
      }
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      iVar2 = iVar2 + -1;
      puVar1 = puVar1 + -3;
    } while (-1 < iVar2);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7e6c0 */
uint F_00d7e6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      puVar2[-1] = 0;
      if (-1 < (int)*puVar2) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(*puVar2 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 + -3;
      iVar3 = iVar3 + -1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e880 */
uint F_00d7e880(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e880u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3);
  F_00d91340(in_ecx + 4);
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0x80000000;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0x80000000;
  return (uint)in_ecx;
}

/* ref: FUN_00d7e8d0 */
uint F_00d7e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  F_00d91350(in_ecx + 3,param_2);
  F_00d91350(in_ecx + 4,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d7e900 */
uint F_00d7e900(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < *(int *)((int)this + 0x2c)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),
               *(int *)((int)this + 0x2c) << 6);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x1c) + -1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8 + iVar2 * 0xc)));
    do {
      puVar3[-1] = 0;
      if (-1 < (int)*puVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(*puVar3 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 + -3;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)*(uint *)((int)this + 0x20)) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),
               (*(uint *)((int)this + 0x20) & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14));
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00d91510((undefined *)((int)this + 0x10));
  uVar1 = F_00d91510((undefined *)((int)this + 0xc));
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8));
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7ea00 */
uint F_00d7ea00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ea00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaMeshBinding::vf0 */
uint F_00d7ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e900(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7eae0 */
uint F_00d7eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7eae0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7eb60 */
unsigned int F_00d7eb60(unsigned int gen_a0)
{
  GEN_ENTER(0xd7eb60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = param_1[1];
  iVar4 = 0;
  fVar5 = REFG(float, 0x1136e98);
  if (3 < iVar3) {
    pfVar1 = (float *)(*param_1 + 8);
    iVar2 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar2 * 4;
    do {
      if (!(pfVar1[-2] < fVar5)) {
        fVar5 = pfVar1[-2];
      }
      if (!(pfVar1[-1] < fVar5)) {
        fVar5 = pfVar1[-1];
      }
      if (!(*pfVar1 < fVar5)) {
        fVar5 = *pfVar1;
      }
      if (!(pfVar1[1] < fVar5)) {
        fVar5 = pfVar1[1];
      }
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar4 < iVar3) {
    pfVar1 = (float *)(*param_1 + iVar4 * 4);
    iVar3 = iVar3 - iVar4;
    do {
      if (!(*pfVar1 < fVar5)) {
        fVar5 = *pfVar1;
      }
      pfVar1 = pfVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7ec00 */
unsigned int F_00d7ec00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ec00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  
  iVar3 = param_1[1];
  iVar4 = 0;
  fVar5 = REFG(float, 0x1136c54);
  if (3 < iVar3) {
    pfVar1 = (float *)(*param_1 + 8);
    iVar2 = (iVar3 - 4U >> 2) + 1;
    iVar4 = iVar2 * 4;
    do {
      if (!(fVar5 < pfVar1[-2])) {
        fVar5 = pfVar1[-2];
      }
      if (!(fVar5 < pfVar1[-1])) {
        fVar5 = pfVar1[-1];
      }
      if (!(fVar5 < *pfVar1)) {
        fVar5 = *pfVar1;
      }
      if (!(fVar5 < pfVar1[1])) {
        fVar5 = pfVar1[1];
      }
      pfVar1 = pfVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar4 < iVar3) {
    pfVar1 = (float *)(*param_1 + iVar4 * 4);
    iVar3 = iVar3 - iVar4;
    do {
      if (!(fVar5 < *pfVar1)) {
        fVar5 = *pfVar1;
      }
      pfVar1 = pfVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

/* ref: FUN_00d7eca0 */
unsigned int F_00d7eca0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd7eca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float * pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = *((float *)GEN_TOP((*(int *)(param_1 + 0x44) + param_2 * 4)));
  if (!(fVar3 < param_3)) {
    fVar3 = param_3;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  *((float *)GEN_TOP((*(int *)(param_1 + 0x44) + param_2 * 4))) = fVar3;
  fVar3 = *(float *)(iVar2 + param_2 * 4);
  pfVar1 = (float *)(iVar2 + param_2 * 4);
  if (param_3 < fVar3) {
    *pfVar1 = fVar3;
    return 0;
  }
  *pfVar1 = param_3;
  return 0;
}

/* ref: FUN_00d7ed80 */
uint F_00d7ed80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7ed80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    uVar1 = *(uint *)((int)this + 0x80);
    *(undefined4 *)(uVar1 + param_1 * 4) = 0;
    return uVar1;
  }
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x74) + param_1 * 4))) = REFG(float, 0x1087f04);
  return param_1;
}

/* ref: FUN_00d7edc0 */
uint F_00d7edc0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7edc0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[10];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (*(int *)&gen_args[1]);
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  *((undefined2 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + 6))) = 1;
  (*(undefined4 * PTR32 *)&gen_args[0])[4] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[2] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[3] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[5] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[6] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[7] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[8] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[9] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[10] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xb] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xc] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xd] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xe] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0xf] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x10] = 0x80000000;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x11] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x12] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x13] = 0x80000000;
  if ((*(int *)&gen_args[1]) == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ee50: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = (*(int *)&gen_args[1]) * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ee50;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x11] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x12] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x13] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0x7f7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x14] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x15] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x16] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7eeb6: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7eeb6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x14] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x15] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x16] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xff7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x17] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x18] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x19] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ef1b: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ef1b;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x17] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x18] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x19] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0x7f7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1a] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1b] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1c] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7ef81: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7ef81;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1a] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1b] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1c] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0xff7fffee;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1d] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1e] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1f] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
LAB_00d7efe6: ;
    iVar2 = ((int)0x80000000);
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 == 0) goto LAB_00d7efe6;
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1d] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1e] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x1f] = iVar2;
  iVar2 = iVar4;
  if (0 < iVar4) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = 0;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x20] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x21] = 0;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x22] = 0x80000000;
  if (iVar4 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    (*(int *)&gen_args[1]) = iVar4 * 4;
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[1]))))
    ;
    iVar2 = (int)((*(int *)&gen_args[1]) + ((*(int *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
    if (iVar2 != 0) goto LAB_00d7f057;
  }
  iVar2 = ((int)0x80000000);
LAB_00d7f057: ;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x20] = puVar1;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x21] = iVar4;
  (*(undefined4 * PTR32 *)&gen_args[0])[0x22] = iVar2;
  if (0 < iVar4) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar1 = 0x3f800000;
      puVar1 = puVar1 + 1;
    }
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0x23] = (undefined4)gen_fl2bits((*(float *)&gen_args[3]));
  (*(undefined4 * PTR32 *)&gen_args[0])[0x24] = (undefined4)gen_fl2bits((*(float *)&gen_args[4]));
  (*(undefined4 * PTR32 *)&gen_args[0])[0x25] = (undefined4)gen_fl2bits((*(float *)&gen_args[2]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[5]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[4] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[4] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 2,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[3] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[2],(*(undefined4 *)&gen_args[5]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[6]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[7] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[7] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 5,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[6] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[5],(*(undefined4 *)&gen_args[6]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[7]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[10] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[10] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 8,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[9] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[8],(*(undefined4 *)&gen_args[7]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[8]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[0xd] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[0xd] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 0xb,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0xc] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[0xb],(*(undefined4 *)&gen_args[8]));
  uVar3 = F_00da0e60((*(undefined4 *)&gen_args[9]));
  iVar4 = uVar3 + 1;
  if ((int)((*(undefined4 * PTR32 *)&gen_args[0])[0x10] & 0x3fffffff) < iVar4) {
    iVar2 = ((*(undefined4 * PTR32 *)&gen_args[0])[0x10] & 0x3fffffff) * 2;
    if (iVar2 <= iVar4) {
      iVar2 = iVar4;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(*(undefined4 * PTR32 *)&gen_args[0]) + 0xe,iVar2,1);
  }
  (*(undefined4 * PTR32 *)&gen_args[0])[0xf] = iVar4;
  F_00da0e20((*(undefined4 * PTR32 *)&gen_args[0])[0xe],(*(undefined4 *)&gen_args[9]));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7f240 */
uint F_00d7f240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  return (uint)in_ecx;
}

/* ref: FUN_00d7f250 */
uint F_00d7f250(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  *(undefined4 *)((int)this + 0x84) = 0;
  if ((*(uint *)((int)this + 0x88) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),
               *(uint *)((int)this + 0x88) * 4);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  *(undefined4 *)((int)this + 0x78) = 0;
  if ((*(uint *)((int)this + 0x7c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x74),
               *(uint *)((int)this + 0x7c) * 4);
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((*(uint *)((int)this + 0x70) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x68),
               *(uint *)((int)this + 0x70) * 4);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((*(uint *)((int)this + 100) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),
               *(uint *)((int)this + 100) * 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  *(undefined4 *)((int)this + 0x54) = 0;
  if ((*(uint *)((int)this + 0x58) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x50),
               *(uint *)((int)this + 0x58) * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((*(uint *)((int)this + 0x4c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x44),
               *(uint *)((int)this + 0x4c) * 4);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((*(uint *)((int)this + 0x40) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),
               *(uint *)((int)this + 0x40) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  *(undefined4 *)((int)this + 0x30) = 0;
  if ((*(uint *)((int)this + 0x34) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),
               *(uint *)((int)this + 0x34) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((*(uint *)((int)this + 0x28) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),
               *(uint *)((int)this + 0x28) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((*(uint *)((int)this + 0x1c) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),
               *(uint *)((int)this + 0x1c) & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7f470 */
uint F_00d7f470(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7f470u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  int * piVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  uint uVar4;
  undefined * this;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c),0x98);
  *(undefined2 *)(uVar4 + 4) = 0x98;
  this = (undefined *)F_00d7edc0(uVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10);
  if (this != (undefined *)0x0) {
    F_00d919e0(this);
  }
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)(param_1 + 0xc) * 4)));
  if (puVar2 != (undefined4 *)0x0) {
    if (this != (undefined *)0x0) {
      F_00d919e0(this);
    }
    *puVar2 = this;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  F_00d91a80(this);
  uVar4 = *((uint *)GEN_TOP((*piVar1 + -4 + *(int *)(param_1 + 0xc) * 4)));
  if (this != (undefined *)0x0) {
    F_00d91a80(this);
  }
  return uVar4;
}

/* ref: FUN_00d7f590 */
uint F_00d7f590(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  iVar3 = *(int *)((int)this + 0xc) + -1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00);
    }
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar1 + 4 + iVar3 * 4) = 0;
  }
  uVar2 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00d7f600 */
uint F_00d7f600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7f680 */
uint F_00d7f680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd7f680u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00d7f690 */
uint F_00d7f690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7f6a0 */
uint F_00d7f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

