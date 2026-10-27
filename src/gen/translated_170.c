#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00d93e30 */
uint F_00d93e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd93e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
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
  return (uint)param_3;
}

/* ref: FUN_00d93ec0 */
uint F_00d93ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd93ec0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*in_ecx < *param_3);
  param_2[1] = -(uint)(fVar4 < fVar1);
  param_2[2] = -(uint)(fVar5 < fVar2);
  param_2[3] = -(uint)(fVar6 < fVar3);
  return (uint)param_2;
}

/* ref: FUN_00d93ee0 */
byte F_00d93ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd93ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined4 in_EDX = 0;
  undefined4 uVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) - param_1[1]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) - param_1[2]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*(float *)((int)this + 0xc) - param_1[3]) < param_2[3]);
  uVar2 = gen_movmskps(&(auVar1));
  return ((byte)uVar2 & 7) == 7;
}

/* ref: FUN_00d93f20 */
byte F_00d93f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd93f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  undefined1 auVar1 [16];
  undefined4 in_EDX = 0;
  int iVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*(float *)((int)this + 4) - param_1[1]) < param_2[1]);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < *param_2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*(float *)((int)this + 8) - param_1[2]) < param_2[2]);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*(float *)((int)this + 0xc) - param_1[3]) < param_2[3]);
  iVar2 = gen_movmskps(&(auVar1));
  return iVar2 == 0xf;
}

/* ref: FUN_00d93f50 */
uint F_00d93f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd93f50u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_00d93f70 */
uint F_00d93f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd93f70u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c78);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  *in_ecx = *param_2 * (float)REFG(float, 0x1138c70);
  in_ecx[1] = fVar1;
  in_ecx[2] = fVar2;
  in_ecx[3] = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c88);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  in_ecx[4] = *param_2 * (float)REFG(float, 0x1138c80);
  in_ecx[5] = fVar1;
  in_ecx[6] = fVar2;
  in_ecx[7] = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c98);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  in_ecx[8] = *param_2 * (float)REFG(float, 0x1138c90);
  in_ecx[9] = fVar1;
  in_ecx[10] = fVar2;
  in_ecx[0xb] = fVar3;
  return (uint)param_2;
}

/* ref: FUN_00d93fb0 */
uint F_00d93fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd93fb0u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)in_ecx;
}

/* ref: FUN_00d93fe0 */
uint F_00d93fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd93fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
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
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  in_ecx[0xc] = *param_3;
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00d94010 */
uint F_00d94010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94010u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1138da4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1138da8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1138dac) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1138db4) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1138db8) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1138dbc) * fVar4;
  *param_1 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138da0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x1138db0) * fVar8));
  param_1[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_1[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_1[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d94050 */
uint F_00d94050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x1138da4) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x1138da8) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x1138dac) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x1138db4) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x1138db8) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x1138dbc) * fVar4;
  *in_ecx = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
            (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1138da0) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                              (*(float *)&REFG(undefined, 0x1138db0) * fVar8));
  in_ecx[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  in_ecx[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  in_ecx[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00d94090 */
uint F_00d94090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d940d0 */
uint F_00d940d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd940d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x1138dc4));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d940f0 */
uint F_00d940f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd940f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 4))(param_3,0x1c)));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0x80000000;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0x80000000;
    puVar1[6] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 4) = puVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(int * PTR32 *)((int)this + 0x24) = param_3;
  *(uint *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = param_2;
  return param_1;
}

/* ref: hkLifoAllocator::vf5 */
uint F_00d94150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd94150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_3 + 0xf & 0xfffffff0;
  uVar3 = param_2 + 0xfU & 0xfffffff0;
  *param_3 = uVar1;
  if ((uVar3 + param_1 == *(int *)(this + 0xc)) && (uVar1 + param_1 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar1 + param_1;
    return param_1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,uVar1);
  uVar1 = *param_3;
  if ((int)uVar3 < (int)*param_3) {
    uVar1 = uVar3;
  }
  F_00da3710(uVar2,param_1,uVar1);
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,uVar3);
  return uVar2;
}

/* ref: FUN_00d941f0 */
uint F_00d941f0(unsigned int gen_a0)
{
  GEN_ENTER(0xd941f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + -1;
  iVar4 = *(int *)((int)this + 0xc);
  if (-1 < iVar5) {
    iVar6 = iVar5 * 0xc;
    do {
      iVar2 = **(int * PTR32 *)((int)this + 4);
      if (*(int *)(iVar2 + 4 + iVar6) != iVar4) break;
      iVar4 = *(int *)(iVar2 + iVar6);
      piVar1 = *(int * PTR32 *)((int)this + 4) + 1;
      *piVar1 = *piVar1 + -1;
      iVar6 = iVar6 + -0xc;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  while (1 < iVar5) {
    iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
    iVar6 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0xc)));
    if ((iVar4 != *(int *)(iVar6 + -4 + iVar5 * 4)) &&
       ((uint)(iVar4 - *(int *)(iVar6 + -4 + iVar5 * 4)) <= *(uint *)((int)this + 8))) break;
    if (*(int *)((int)this + 0x18) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 8))))
                (*(int * PTR32 *)((int)this + 0x1c),*(int *)((int)this + 0x18),
                 *(undefined4 *)((int)this + 8));
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x18)));
      *piVar1 = *piVar1 + -1;
    }
    iVar5 = *(int *)((int)this + 4);
    *(undefined4 *)((int)this + 0x18) =
         *((undefined4 *)GEN_TOP((*(int *)(iVar5 + 0xc) + -4 + *(int *)(iVar5 + 0x10) * 4)));
    *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + -1;
    iVar5 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10)));
  }
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(int *)((int)this + 0xc) = iVar4;
  if (piVar1[4] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(piVar1[3] + -4 + piVar1[4] * 4) + *(int *)((int)this + 8);
  }
  *(int *)((int)this + 0x10) = iVar4;
  if (piVar1[1] == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    return 0;
  }
  uVar3 = *(uint *)(*piVar1 + -8 + piVar1[1] * 0xc);
  *(uint *)((int)this + 0x14) = uVar3;
  return uVar3;
}

/* ref: FUN_00d942d0 */
uint F_00d942d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd942d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  if (*(int *)((int)this + 0xc) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 8))))
              (*(int * PTR32 *)((int)this + 0x24),**((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))),
               *(undefined4 *)((int)this + 8));
  }
  if (*(int *)((int)this + 0x18) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 8))))
              (*(int * PTR32 *)((int)this + 0x24),*(int *)((int)this + 0x18),*(undefined4 *)((int)this + 8)
              );
  }
  iVar1 = *(int *)((int)this + 4);
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  if (-1 < *(int *)(iVar1 + 0x14)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 0x14) * 4);
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0x80000000;
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  piVar2 = *(int * PTR32 *)((int)this + 0x24);
  puVar3[1] = 0;
  if (-1 < (int)puVar3[2]) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2,*puVar3,(puVar3[2] & 0x3fffffff) * 0xc);
  }
  *puVar3 = 0;
  puVar3[2] = 0x80000000;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 8))))
                    (*(int * PTR32 *)((int)this + 0x24),*(undefined4 *)((int)this + 4),0x1c);
  *(undefined4 *)((int)this + 4) = 0;
  return uVar4;
}

/* ref: FUN_00d94390 */
uint F_00d94390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 <= *(int *)((int)this + 8)) {
    uVar4 = *(uint *)((int)this + 0x18);
    if (uVar4 == 0) {
      if (*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) < 2) {
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 4))))
                          (*(int * PTR32 *)((int)this + 0x24),*(int *)((int)this + 8));
      }
      else {
        piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x18)));
        *piVar1 = *piVar1 + 1;
        uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 4))))
                          (*(int * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 8));
      }
    }
    else {
      *(undefined4 *)((int)this + 0x18) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 4);
    if (piVar1[4] != 0) {
      if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
        F_00d95710(*(undefined4 *)((int)this + 0x24),piVar1,0xc);
      }
      iVar3 = piVar1[1];
      piVar1[1] = iVar3 + 1;
      puVar2 = (undefined4 *)(*piVar1 + iVar3 * 0xc);
      puVar2[1] = uVar4;
      *puVar2 = *(undefined4 *)((int)this + 0xc);
      puVar2[2] = *((int *)GEN_TOP((*(int *)((int)this + 4) + 0x10))) + -1;
      *(uint *)((int)this + 0x14) = uVar4;
    }
    iVar3 = *(int *)((int)this + 4);
    *(uint *)((int)this + 0x10) = *(int *)((int)this + 8) + uVar4;
    *(uint *)((int)this + 0xc) = uVar4 + param_1;
    if (*(uint *)(iVar3 + 0x10) == (*(uint *)(iVar3 + 0x14) & 0x3fffffff)) {
      F_00d95710(*(undefined4 *)((int)this + 0x24),(int *)(iVar3 + 0xc),4);
    }
    *((uint *)GEN_TOP((*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10) * 4))) = uVar4;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
    return uVar4;
  }
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x18)));
  *piVar1 = *piVar1 + 1;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 4))))(*(int * PTR32 *)((int)this + 0x20),param_1);
  return uVar4;
}

/* ref: FUN_00d94490 */
uint F_00d94490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint * puVar8;
  int iVar9;
  uint local_8;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  uVar3 = piVar1[4] - 1;
  local_8 = 0xffffffff;
  uVar6 = local_8;
  if (-1 < (int)uVar3) {
    piVar7 = (int *)(piVar1[3] + uVar3 * 4);
    do {
      uVar6 = uVar3;
      if (param_1 - *piVar7 < *(uint *)((int)this + 8)) break;
      piVar7 = piVar7 + -1;
      uVar3 = uVar3 - 1;
      uVar6 = local_8;
    } while (-1 < (int)uVar3);
  }
  local_8 = uVar6;
  uVar6 = param_1 + param_2;
  iVar9 = 0;
  iVar4 = piVar1[1] + -1;
  if (-1 < iVar4) {
    puVar8 = (uint *)(*piVar1 + iVar4 * 0xc);
    do {
      if (puVar8[2] == local_8) {
        if (param_1 == puVar8[1]) {
          puVar8[1] = uVar6;
          goto LAB_00d9458f;
        }
        if (uVar6 == *puVar8) {
          *puVar8 = param_1;
          goto LAB_00d9458f;
        }
        if (*puVar8 < param_1) goto LAB_00d9451c;
      }
      else if ((int)puVar8[2] < (int)local_8) {
LAB_00d9451c: ;
        iVar9 = iVar4 + 1;
        break;
      }
      puVar8 = puVar8 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  iVar2 = piVar1[1];
  iVar4 = iVar2 + 1;
  if ((int)(piVar1[2] & 0x3fffffffU) < iVar4) {
    iVar5 = (piVar1[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    F_00d95690(*(undefined4 *)((int)this + 0x24),piVar1,iVar5,0xc);
  }
  iVar5 = iVar9 * 0xc;
  F_00da38f0(*piVar1 + iVar5 + 0xc,*piVar1 + iVar5,(iVar2 - iVar9) * 0xc);
  iVar9 = *piVar1;
  piVar1[1] = iVar4;
  *(uint *)(iVar9 + iVar5) = param_1;
  *(uint *)(iVar9 + 4 + iVar5) = uVar6;
  *(uint *)(iVar9 + 8 + iVar5) = local_8;
LAB_00d9458f: ;
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1[1] == 0) {
    *(undefined4 *)((int)this + 0x14) = 0;
    return 0;
  }
  uVar6 = *(uint *)(*piVar1 + -8 + piVar1[1] * 0xc);
  *(uint *)((int)this + 0x14) = uVar6;
  return uVar6;
}

/* ref: FUN_00d945c0 */
uint F_00d945c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd945c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  if (param_1 != 0) {
    if (param_2 <= *(int *)((int)this + 8)) {
      uVar2 = param_2 + 0xfU & 0xfffffff0;
      if (uVar2 + param_1 == *(int *)((int)this + 0xc)) {
        *(int *)((int)this + 0xc) = param_1;
        uVar2 = F_00d941f0(this);
        return uVar2;
      }
      uVar2 = F_00d94490(this,param_1,uVar2);
      return uVar2;
    }
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) + 0x18)));
    *piVar1 = *piVar1 + -1;
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x20) + 8))))
                       (*(int * PTR32 *)((int)this + 0x20),param_1,param_2);
  }
  return in_EAX;
}

/* ref: hkLifoAllocator::vf1 */
uint F_00d94620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this + 8)) && (uVar2 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: hkLifoAllocator::vf2 */
uint F_00d94650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: hkLifoAllocator::vf3 */
uint F_00d94690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1 + 0xf & 0xfffffff0;
  *param_1 = uVar2;
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = uVar1 + uVar2;
  if (((int)uVar2 <= *(int *)(this + 8)) && (uVar3 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar3;
    return uVar1;
  }
  uVar3 = F_00d94390(this,uVar2);
  return uVar3;
}

/* ref: hkLifoAllocator::vf4 */
uint F_00d946d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd946d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00d94740 */
uint F_00d94740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94740u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d947b0 */
uint F_00d947b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd947b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d947e0 */
uint F_00d947e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd947e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d94800 */
uint F_00d94800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_1 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d94830 */
uint F_00d94830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d94870 */
uint F_00d94870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94870u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d948b0 */
uint F_00d948b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd948b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d948f0 */
uint F_00d948f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd948f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d94920 */
unsigned int F_00d94920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkLifoAllocator::vf8 */
unsigned int F_00d94980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkLifoAllocator::vf9 */
uint F_00d94990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: hkLifoAllocator::vf0 */
uint F_00d949a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd949a0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: FUN_00d949c0 */
uint F_00d949c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd949c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00d949d0 */
uint F_00d949d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd949d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) - param_2;
  return param_2;
}

/* ref: FUN_00d949e0 */
uint F_00d949e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd949e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d94a60 */
uint F_00d94a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94a60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d94aa0 */
uint F_00d94aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00d94ae0 */
uint F_00d94ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd94ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = *(int *)((int)this + 4);
  iVar1 = iVar2 + param_3;
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(param_1,this,iVar3,0xc);
  }
  F_00da38f0(*(int *)this + (param_3 + param_2) * 0xc,*(int *)this + param_2 * 0xc,
               (iVar2 - param_2) * 0xc);
  *(int *)((int)this + 4) = iVar1;
  return *(int *)this + param_2 * 0xc;
}

/* ref: FUN_00d94b60 */
uint F_00d94b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd94b60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d94bc0 */
uint F_00d94bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94bc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  *in_ecx = (fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8];
  in_ecx[1] = (fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10;
  in_ecx[2] = (fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11;
  in_ecx[3] = (fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12;
  return (uint)param_2;
}

/* ref: FUN_00d94cc0 */
uint F_00d94cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94cc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *in_ecx = ((fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8]) + param_2[0xc];
  in_ecx[1] = ((fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10) + fVar13;
  in_ecx[2] = ((fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11) + fVar14;
  in_ecx[3] = ((fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12) + fVar15;
  return (uint)param_2;
}

/* ref: FUN_00d94d00 */
unsigned int F_00d94d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar1 = *param_2 - *(float *)(param_1 + 6);
  fVar2 = param_2[1] - *(float *)((int)param_1 + 0x34);
  fVar3 = param_2[2] - *(float *)(param_1 + 7);
  local_20 = gen_bits2f((uint)*param_1);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_1 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_1[1]);
  local_30 = gen_bits2f((uint)param_1[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_1[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_1[3]);
  local_40 = gen_bits2f((uint)param_1[4]);
  fStack_3c = gen_bits2f((uint)((ulonglong)param_1[4] >> 0x20));
  fStack_38 = gen_bits2f((uint)param_1[5]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_1[5] >> 0x20));
  *(float *)this = (fVar2 * fStack_1c + fVar1 * local_20) + fStack_18 * fVar3;
  *(float *)((int)this + 4) = (fVar2 * fStack_2c + fVar1 * local_30) + fStack_28 * fVar3;
  *(float *)((int)this + 8) = (fVar2 * fStack_3c + fVar1 * local_40) + fStack_38 * fVar3;
  *(float *)((int)this + 0xc) = (fVar2 * fStack_34 + fVar1 * fStack_3c) + fStack_34 * fVar3;
  return 0;
}

/* ref: FUN_00d94dc0 */
unsigned int F_00d94dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94dc0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar13 = param_2[7];
  local_20 = gen_bits2f((uint)*param_3);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_3 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_3[1]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_3[1] >> 0x20));
  fVar4 = param_2[8] * local_20;
  fVar5 = param_2[9] * fStack_1c;
  fVar6 = param_2[10] * fStack_18;
  fVar7 = param_2[0xb] * fStack_14;
  fVar8 = fVar1 * fVar4;
  fVar9 = fVar2 * fVar5;
  fVar10 = fVar3 * fVar6;
  fVar11 = (((fVar9 + fVar8) + fVar10) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar4)
           + (fVar2 * fVar6 - fVar3 * fVar5) * fVar13;
  fVar12 = (((fVar9 + fVar8) + fVar10) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar5)
           + (fVar3 * fVar4 - fVar1 * fVar6) * fVar13;
  fVar4 = (((fVar9 + fVar8) + fVar10) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar6) +
          (fVar1 * fVar5 - fVar2 * fVar4) * fVar13;
  fVar13 = (((fVar9 + fVar8) + fVar10) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar7)
           + (fVar13 * fVar7 - fVar13 * fVar7) * fVar13;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = (fVar11 + fVar11) + *param_2;
  in_ecx[1] = (fVar12 + fVar12) + fVar1;
  in_ecx[2] = (fVar4 + fVar4) + fVar2;
  in_ecx[3] = (fVar13 + fVar13) + fVar3;
  return 0;
}

/* ref: FUN_00d94e80 */
unsigned int F_00d94e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd94e80u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
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
  undefined1 auVar13 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  local_20 = gen_bits2f((uint)*param_3);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_3 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_3[1]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_3[1] >> 0x20));
  fVar6 = local_20 - *param_2;
  fVar7 = fStack_1c - param_2[1];
  fVar8 = fStack_18 - param_2[2];
  fVar9 = fStack_14 - param_2[3];
  fVar10 = fVar2 * fVar6;
  fVar11 = fVar3 * fVar7;
  fVar12 = fVar4 * fVar8;
  memcpy(&(auVar1), &(*(gen_v16 *)(param_2 + 8)), sizeof(*(gen_v16 *)(param_2 + 8)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(param_2 + 8)) : sizeof(auVar1));
  (*(float *)((char *)&auVar13 + 0)) = (fVar4 * fVar7 - fVar3 * fVar8) * fVar5;
  (*(float *)((char *)&auVar13 + 4)) = (fVar2 * fVar8 - fVar4 * fVar6) * fVar5;
  (*(float *)((char *)&auVar13 + 8)) = (fVar3 * fVar6 - fVar2 * fVar7) * fVar5;
  (*(float *)((char *)&auVar13 + 12)) = (fVar5 * fVar9 - fVar5 * fVar9) * fVar5;
  fVar2 = (((fVar11 + fVar10) + fVar12) * fVar2 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar5 * fVar5) * fVar6) +
          (*(float *)((char *)&auVar13 + 0));
  fVar3 = (((fVar11 + fVar10) + fVar12) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar5 * fVar5) * fVar7) +
          (*(float *)((char *)&auVar13 + 4));
  fVar4 = (((fVar11 + fVar10) + fVar12) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar5 * fVar5) * fVar8) +
          (*(float *)((char *)&auVar13 + 8));
  fVar5 = (((fVar11 + fVar10) + fVar12) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar5 * fVar5) * fVar9) +
          (*(float *)((char *)&auVar13 + 12));
  gen_rcpps(&(auVar13), &(auVar13), &(auVar1));
  fVar6 = *(float *)&REFG(undefined, 0x1138df4) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar13 + 4));
  fVar7 = *(float *)&REFG(undefined, 0x1138df8) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar13 + 8));
  fVar8 = *(float *)&REFG(undefined, 0x1138dfc) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar13 + 12));
  *in_ecx = ((*(float *)&REFG(undefined, 0x1138df0) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar13 + 0))) * (*(float *)((char *)&auVar13 + 0))) *
            (fVar2 + fVar2);
  in_ecx[1] = (fVar6 * (*(float *)((char *)&auVar13 + 4))) * (fVar3 + fVar3);
  in_ecx[2] = (fVar7 * (*(float *)((char *)&auVar13 + 8))) * (fVar4 + fVar4);
  in_ecx[3] = (fVar8 * (*(float *)((char *)&auVar13 + 12))) * (fVar5 + fVar5);
  return 0;
}

/* ref: FUN_00d950d0 */
uint F_00d950d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd950d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *(float *)((int)this + 4) = fVar8 + fVar8;
  *(float *)((int)this + 8) = fVar9 + fVar9;
  *(float *)((int)this + 0xc) = fVar10 + fVar10;
  return (uint)param_1;
}

/* ref: FUN_00d95160 */
unsigned int F_00d95160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd95160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar10 * fVar5 - fVar1 * fVar4) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar1 * fVar3 - fVar9 * fVar5) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar9 * fVar4 - fVar10 * fVar3) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *(float *)((int)this + 4) = fVar8 + fVar8;
  *(float *)((int)this + 8) = fVar9 + fVar9;
  *(float *)((int)this + 0xc) = fVar10 + fVar10;
  return 0;
}

/* ref: FUN_00d952b0 */
uint F_00d952b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd952b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar9 = param_2[3];
  fVar10 = param_2[9];
  fVar11 = param_2[10];
  fVar12 = param_2[0xb];
  fVar13 = param_2[0xd];
  fVar14 = param_2[0xe];
  fVar15 = param_2[0xf];
  *in_ecx = ((fVar2 * param_2[4] + fVar1 * *param_2) + fVar3 * param_2[8]) + param_2[0xc];
  in_ecx[1] = ((fVar2 * fVar4 + fVar1 * fVar7) + fVar3 * fVar10) + fVar13;
  in_ecx[2] = ((fVar2 * fVar5 + fVar1 * fVar8) + fVar3 * fVar11) + fVar14;
  in_ecx[3] = ((fVar2 * fVar6 + fVar1 * fVar9) + fVar3 * fVar12) + fVar15;
  return (uint)param_2;
}

/* ref: FUN_00d953b0 */
unsigned int F_00d953b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd953b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
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
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar10 * fVar5 - fVar1 * fVar4) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar1 * fVar3 - fVar9 * fVar5) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar9 * fVar4 - fVar10 * fVar3) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *(float *)((int)this + 4) = fVar8 + fVar8;
  *(float *)((int)this + 8) = fVar9 + fVar9;
  *(float *)((int)this + 0xc) = fVar10 + fVar10;
  return 0;
}

/* ref: FUN_00d95690 */
byte F_00d95690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd95690u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = (*(int *)&gen_args[3]);
  (*(int *)&gen_args[2]) = (*(int *)&gen_args[2]) * (*(int *)&gen_args[3]);
  if ((int)(*(uint * PTR32 *)&gen_args[1])[2] < 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]),&(*(int *)&gen_args[2]));
    if (uVar2 != 0) {
      F_00c46aa0(uVar2,*(*(uint * PTR32 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[1])[1] * iVar1);
    }
  }
  else {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))
                      ((*(int * PTR32 *)&gen_args[0]),*(*(uint * PTR32 *)&gen_args[1]),((*(uint * PTR32 *)&gen_args[1])[2] & 0x3fffffff) * (*(int *)&gen_args[3]),&(*(int *)&gen_args[2]));
  }
  *(*(uint * PTR32 *)&gen_args[1]) = uVar2;
  (*(uint * PTR32 *)&gen_args[1])[2] = (*(int *)&gen_args[2]) / iVar1;
  return uVar2 == 0;
}

/* ref: FUN_00d95710 */
uint F_00d95710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd95710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint * puVar1;
  uint * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar3 = (*(int *)&gen_args[2]);
  puVar2 = (*(uint * PTR32 *)&gen_args[1]);
  if ((*(uint * PTR32 *)&gen_args[1])[1] == 0) {
    iVar4 = 1;
  }
  else {
    iVar4 = (*(uint * PTR32 *)&gen_args[1])[1] * 2;
  }
  puVar1 = (*(uint * PTR32 *)&gen_args[1]) + 2;
  if (-1 < (int)*puVar1) {
    uVar5 = *(*(uint * PTR32 *)&gen_args[1]);
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)(iVar4 * (*(int *)&gen_args[2]));
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]),uVar5,(*puVar1 & 0x3fffffff) * (*(int *)&gen_args[2]),&(*(uint * PTR32 *)&gen_args[1]));
    *puVar2 = uVar5;
    puVar2[2] = (int)(*(uint * PTR32 *)&gen_args[1]) / iVar3;
    return (int)(*(uint * PTR32 *)&gen_args[1]) / iVar3;
  }
  (*(uint * PTR32 *)&gen_args[1]) = (uint *)(iVar4 * (*(int *)&gen_args[2]));
  uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0xc))))((*(int * PTR32 *)&gen_args[0]),&(*(uint * PTR32 *)&gen_args[1]));
  F_00c46aa0(uVar5,*puVar2,puVar2[1] * iVar3);
  *puVar2 = uVar5;
  puVar2[2] = (int)(*(uint * PTR32 *)&gen_args[1]) / iVar3;
  return (int)(*(uint * PTR32 *)&gen_args[1]) / iVar3;
}

/* ref: FUN_00d957a0 */
uint F_00d957a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd957a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (*(uint *)&gen_args[4]);
  uVar3 = (*(uint *)&gen_args[3]);
  if (((*(uint *)&gen_args[3]) != 0) && ((int)(*(uint * PTR32 *)&gen_args[1])[1] < (int)(*(uint *)&gen_args[4]))) {
    F_00c46aa0((*(uint *)&gen_args[3]),*(*(uint * PTR32 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[1])[1] * (*(int *)&gen_args[2]));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),*(*(uint * PTR32 *)&gen_args[1]),((*(uint * PTR32 *)&gen_args[1])[2] & 0x3fffffff) * (*(int *)&gen_args[2]));
    (*(uint * PTR32 *)&gen_args[1])[2] = uVar1 | 0x80000000;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar3;
    return uVar2;
  }
  (*(uint *)&gen_args[3]) = (*(int *)&gen_args[2]) * (*(uint *)&gen_args[4]);
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]),*(*(uint * PTR32 *)&gen_args[1]),(*(uint * PTR32 *)&gen_args[1])[2] * (*(int *)&gen_args[2]),&(*(uint *)&gen_args[3]));
  *(*(uint * PTR32 *)&gen_args[1]) = uVar3;
  (*(uint * PTR32 *)&gen_args[1])[2] = (int)(*(uint *)&gen_args[3]) / (*(int *)&gen_args[2]);
  return (int)(*(uint *)&gen_args[3]) / (*(int *)&gen_args[2]);
}

/* ref: FUN_00d95830 */
uint F_00d95830(void)
{
  GEN_ENTER(0xd95830u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d95840 */
uint F_00d95840(void)
{
  GEN_ENTER(0xd95840u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00d95860 */
uint F_00d95860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd95860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x288) = param_2;
  return param_2;
}

/* ref: FUN_00d95870 */
uint F_00d95870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd95870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection(this);
  return *(uint *)((int)this + 0x18);
}

/* ref: FUN_00d95890 */
unsigned int F_00d95890(unsigned int gen_a0)
{
  GEN_ENTER(0xd95890u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPCRITICAL_SECTION in_ECX = 0;
  
  gen_imp_LeaveCriticalSection(in_ECX);
  return 0;
}

/* ref: FUN_00d95950 */
uint F_00d95950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd95950u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined8 * puVar1;
  
  puVar1 = (undefined8 *)(in_ecx + 0x128 + param_2 * 0x10);
  *puVar1 = CONCAT44(param_4,param_3);
  puVar1[1] = CONCAT44(param_6,param_5);
  return (uint)puVar1;
}

/* ref: FUN_00d95980 */
unsigned int F_00d95980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd95980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  local_8 = 0;
  if (0 < *(int *)((int)this + 0x8c)) {
    puVar3 = (undefined4 *)((int)this + 0x78);
    puVar1 = (ushort *)(param_1 + 0x36);
    do {
      uVar2 = (uint)*puVar1;
      *puVar1 = 0;
      if (uVar2 != 0) {
        do {
          F_00da36f0(*puVar3,1);
          uVar2 = uVar2 - 1;
        } while (0 < (int)uVar2);
      }
      local_8 = local_8 + 1;
      puVar1 = puVar1 + 1;
      puVar3 = puVar3 + 1;
    } while (local_8 < *(int *)((int)this + 0x8c));
  }
  return 0;
}

/* ref: FUN_00d95a10 */
uint F_00d95a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd95a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + (*(byte *)(param_3 + 1) + 0x13) * 0x10))))
                    (param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d95a40 */
uint F_00d95a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd95a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((param_1 + 0x134 + (uint)*(byte *)(param_3 + 1) * 0x10))))
                    (param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d95a70 */
uint F_00d95a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd95a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    pcVar1 = (char *)((int)this + 0x3c);
    do {
      if ((param_1[1] == pcVar1[-4]) && (*param_1 == *pcVar1)) {
        return (uint)*(byte *)((int)this + iVar2 * 8 + 0x3d);
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 8;
    } while (iVar2 < *(int *)((int)this + 0x48));
  }
  return (uint)(byte)param_1[1] + *(int *)((int)this + 0x30);
}

/* ref: FUN_00d95ac0 */
unsigned int F_00d95ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd95ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  bool bVar1;
  int iVar2;
  int * piVar3;
  short * psVar4;
  
  iVar2 = *(int *)((int)this + 0x4c);
  bVar1 = false;
  if (iVar2 < *(int *)((int)this + 0x50)) {
    psVar4 = (short *)(param_1 + 0x36 + iVar2 * 2);
    piVar3 = ((int *)GEN_TOP((param_1 + (iVar2 * 5 + 0x14) * 4)));
    bVar1 = false;
    do {
      if ((*piVar3 != 0) && (bVar1 = true, *psVar4 != 0)) goto LAB_00d95b4c;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
      psVar4 = psVar4 + 1;
    } while (iVar2 < *(int *)((int)this + 0x50));
  }
  if (iVar2 < *(int *)((int)this + 0x34)) {
    piVar3 = ((int *)GEN_TOP((param_1 + (iVar2 * 5 + 0x14) * 4)));
    do {
      if (*piVar3 != 0) goto LAB_00d95b21;
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 5;
    } while (iVar2 < *(int *)((int)this + 0x34));
  }
  if (bVar1) {
LAB_00d95b21: ;
    iVar2 = *(int *)((int)this + 0x4c);
    if (iVar2 < *(int *)((int)this + 0x8c)) {
      psVar4 = (short *)(param_1 + 0x36 + iVar2 * 2);
      while (*psVar4 == 0) {
        iVar2 = iVar2 + 1;
        psVar4 = psVar4 + 1;
        if (*(int *)((int)this + 0x8c) <= iVar2) {
          return 0;
        }
      }
LAB_00d95b4c: ;
      psVar4 = (short *)(param_1 + 0x36 + iVar2 * 2);
      *psVar4 = *psVar4 + -1;
      F_00da36f0(*(undefined4 *)((int)this + iVar2 * 4 + 0x78),1);
    }
  }
  return 0;
}

/* ref: FUN_00d95b70 */
unsigned int F_00d95b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd95b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  short sVar1;
  
  if ((param_1 < *(int *)((int)this + 0x8c)) &&
     (sVar1 = *(short *)(param_2 + 0x36 + param_1 * 2), sVar1 != 0)) {
    *(short *)(param_2 + 0x36 + param_1 * 2) = sVar1 + -1;
    F_00da36f0(*(undefined4 *)((int)this + param_1 * 4 + 0x78),1);
    return 0;
  }
  F_00d95ac0(this,param_2);
  return 0;
}

/* ref: FUN_00d95c20 */
uint F_00d95c20(unsigned int gen_a0)
{
  GEN_ENTER(0xd95c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  byte bVar2;
  char * pcVar3;
  undefined4 * puVar4;
  LPVOID pvVar5;
  undefined * pvVar6;
  int iVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  byte * pbVar11;
  int local_c;
  undefined4 * local_8;
  
  local_8 = (undefined4 *)0x1;
  if (*(int *)((int)this + 0x6c) != 0) {
    local_8 = (undefined4 *)*(int *)((int)this + 0x6c);
  }
  *(int *)((int)this + 0x48) = *(int *)((int)this + 0x280);
  if (*(char *)((int)this + 0x5c) == '\0') {
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x24);
  }
  else {
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  iVar10 = *(int *)((int)this + 0x28);
  iVar9 = iVar10 + (int)local_8;
  iVar7 = *(int *)((int)this + 0x280) + iVar9;
  *(int *)((int)this + 0x2c) = iVar9;
  *(int *)((int)this + 0x30) = iVar7;
  *(int *)((int)this + 0x34) = *(int *)((int)this + 0x24) + iVar7;
  if (iVar10 < iVar9) {
    iVar9 = iVar10 * 0x14;
    do {
      F_00d976d0(((undefined *)GEN_TOP((*(int *)((int)this + 0x18) + 0x40 + iVar9))),0x80);
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 0x14;
    } while (iVar10 < *(int *)((int)this + 0x2c));
  }
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)((int)this + 0x28);
  iVar9 = *(int *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)((int)this + 0x30);
  if (0 < iVar9) {
    iVar9 = 0;
    if (0 < *(int *)((int)this + 100)) {
      do {
        *(undefined1 *)((int)this + iVar9 + 0x11c) = 0xff;
        iVar9 = iVar9 + 1;
      } while (iVar9 < *(int *)((int)this + 100));
    }
    iVar9 = 0;
    if (0 < *(int *)((int)this + 0x6c)) {
      iVar10 = 0;
      do {
        iVar7 = 0;
        if (0 < *((int *)GEN_TOP((*(int *)((int)this + 0x68) + 4 + iVar10)))) {
          do {
            *((char *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x68) + iVar10))) + iVar7 * 4))) + 0x11c +
                     (int)this))) = *(char *)((int)this + 0x28) + (char)iVar9;
            iVar7 = iVar7 + 1;
          } while (iVar7 < *((int *)GEN_TOP((*(int *)((int)this + 0x68) + 4 + iVar10))));
        }
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar9 < *(int *)((int)this + 0x6c));
    }
    iVar9 = *(int *)((int)this + 0x6c);
  }
  if ((iVar9 == 0) && (iVar9 = 0, 0 < *(int *)((int)this + 100))) {
    do {
      *(undefined1 *)((int)this + iVar9 + 0x11c) = *(undefined1 *)((int)this + 0x28);
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 100));
  }
  iVar9 = 0;
  if (0 < (int)local_8) {
    do {
      pcVar3 = ((char *)GEN_TOP(((int)this + (*(int *)((int)this + 0x28) + iVar9) * 0x1c + 0x90)));
      *pcVar3 = *(char *)((int)this + 0x28) + (char)iVar9;
      iVar10 = 0;
      pcVar3 = pcVar3 + 1;
      if (0 < *(int *)((int)this + 0x6c)) {
        do {
          if (iVar9 != iVar10) {
            *pcVar3 = *(char *)((int)this + 0x28) + (char)iVar10;
            pcVar3 = pcVar3 + 1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(int *)((int)this + 0x6c));
      }
      if (0 < *(int *)((int)this + 0x24)) {
        iVar10 = 0;
        do {
          *pcVar3 = *(char *)((int)this + 0x30) + (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *(int *)((int)this + 0x24));
      }
      if ((*(int *)((int)this + 0x58) == 0) && (iVar10 = 0, 0 < *(int *)((int)this + 0x24))) {
        do {
          *pcVar3 = (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *(int *)((int)this + 0x24));
      }
      iVar10 = 0;
      if (0 < *(int *)((int)this + 0x48)) {
        do {
          *pcVar3 = *(char *)((int)this + 0x2c) + (char)iVar10;
          iVar10 = iVar10 + 1;
          pcVar3 = pcVar3 + 1;
        } while (iVar10 < *(int *)((int)this + 0x48));
      }
      iVar9 = iVar9 + 1;
      *pcVar3 = -1;
    } while (iVar9 < (int)local_8);
  }
  iVar9 = 0;
  if (0 < *(int *)((int)this + 0x48)) {
    local_c = 0;
    pbVar11 = (byte *)((int)this + 0x3d);
    do {
      *(undefined4 *)(pbVar11 + -5) = *((undefined4 *)GEN_TOP((local_c + *(int *)((int)this + 0x27c))));
      pbVar11[-1] = *((byte *)GEN_TOP((*(int *)((int)this + 0x27c) + 4 + local_c)));
      bVar2 = *(char *)((int)this + 0x2c) + (char)iVar9;
      *pbVar11 = bVar2;
      iVar10 = *((int *)GEN_TOP((*(int *)((int)this + 0x27c) + 8 + local_c)));
      cVar1 = *(char *)(iVar10 + 0x11c + (int)this);
      *(byte *)(iVar10 + 0x11c + (int)this) = bVar2;
      pcVar3 = ((char *)GEN_TOP(((int)this + (*(int *)((int)this + 0x2c) + iVar9) * 0x1c + 0x90)));
      *pcVar3 = *(char *)((int)this + 0x2c) + (char)iVar9;
      pcVar8 = (char *)((int)this + cVar1 * 0x1c + 0x90);
      pcVar3 = pcVar3 + 1;
      cVar1 = *pcVar8;
      while (cVar1 != -1) {
        if ((int)*pcVar8 != (uint)*pbVar11) {
          *pcVar3 = *pcVar8;
          pcVar3 = pcVar3 + 1;
        }
        pcVar8 = pcVar8 + 1;
        cVar1 = *pcVar8;
      }
      iVar9 = iVar9 + 1;
      local_c = local_c + 0xc;
      *pcVar3 = -1;
      pbVar11 = pbVar11 + 8;
    } while (iVar9 < *(int *)((int)this + 0x48));
  }
  local_c = *(int *)((int)this + 0x30);
  *(int *)((int)this + 0x54) = (int)*(char *)((int)this + 0x11c);
  puVar4 = (undefined4 *)0x1;
  if (1 < *(int *)((int)this + 100)) {
    do {
      if (*(char *)((int)this + 0x11c + (int)puVar4) == *(char *)((int)this + 0x11c)) {
        *(char *)((int)this + 0x11c) = (char)local_c;
        local_c = local_c + 1;
        break;
      }
      puVar4 = (undefined4 *)((int)puVar4 + 1);
    } while ((int)puVar4 < *(int *)((int)this + 100));
  }
  if ((*(char *)((int)this + 0x74) != '\0') &&
     (iVar9 = *(int *)((int)this + 0x28), iVar9 < *(int *)((int)this + 0x8c))) {
    local_8 = (undefined4 *)((int)this + iVar9 * 4 + 0x78);
    do {
      pvVar6 = (undefined *)*local_8;
      puVar4 = local_8;
      if (pvVar6 != (undefined *)0x0) {
        F_00da36a0(pvVar6);
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 8))))
                           (*(int * PTR32 *)((int)pvVar5 + 0x2c),pvVar6,4)));
      }
      local_8 = local_8 + 1;
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)((int)this + 0x8c));
  }
  iVar9 = 0;
  *(int *)((int)this + 0x8c) = local_c;
  if (0 < local_c) {
    local_8 = (undefined4 *)((int)this + 0x78);
    iVar10 = 0x36;
    do {
      puVar4 = (undefined4 *)0x0;
      *((undefined2 *)GEN_TOP((iVar10 + *(int *)((int)this + 0x18)))) = 0;
      if (*(int *)((int)this + 0x28) <= iVar9) {
        pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        pvVar6 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                                   (*(int * PTR32 *)((int)pvVar5 + 0x2c),4)));
        if (pvVar6 == (undefined *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          puVar4 = (undefined4 *)F_00da3670(pvVar6,0,1000);
        }
        *local_8 = puVar4;
      }
      local_8 = local_8 + 1;
      iVar9 = iVar9 + 1;
      iVar10 = iVar10 + 2;
    } while (iVar9 < *(int *)((int)this + 0x8c));
  }
  *(undefined1 *)((int)this + 0x74) = 1;
  return (uint)puVar4;
}

/* ref: FUN_00d96150 */
uint F_00d96150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd96150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)((int)this + 0x280);
  if ((0 < iVar1) && (iVar4 = 0, 0 < iVar1)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x27c);
    do {
      if (((*piVar2 == param_1) && ((char)piVar2[1] == (char)param_2)) && (piVar2[2] == param_3)) {
        return (uint)piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar4 < iVar1);
  }
  if (*(uint *)((int)this + 0x280) == (*(uint *)((int)this + 0x284) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x27c),0xc);
  }
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 0x27c) + *(int *)((int)this + 0x280) * 0xc)));
  *(int *)((int)this + 0x280) = *(int *)((int)this + 0x280) + 1;
  *piVar2 = param_1;
  *(char *)(piVar2 + 1) = (char)param_2;
  piVar2[2] = param_3;
  uVar3 = F_00d95c20(this);
  return uVar3;
}

/* ref: FUN_00d961e0 */
unsigned int F_00d961e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd961e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
  int * this_00;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = F_00d95a70(this,param_2);
  this_00 = (int *)(param_1 + 0x40 + uVar1 * 0x14);
  iVar4 = this_00[1];
  if (param_3 == 0) {
    if (iVar4 <= this_00[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00d976d0(this_00,iVar4);
    }
    if (this_00[2] == 0) {
      this_00[2] = this_00[1];
    }
    this_00[2] = this_00[2] + -1;
    puVar2 = param_2;
    puVar3 = (undefined4 *)(this_00[2] * 0x80 + *this_00);
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    this_00[4] = this_00[4] + 1;
  }
  else {
    if (iVar4 <= this_00[4]) {
      if (iVar4 == 0) {
        iVar4 = 8;
      }
      else {
        iVar4 = iVar4 * 2;
      }
      F_00d976d0(this_00,iVar4);
    }
    if (this_00[3] == this_00[1]) {
      this_00[3] = 0;
    }
    puVar2 = param_2;
    puVar3 = (undefined4 *)(this_00[3] * 0x80 + *this_00);
    for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    this_00[3] = this_00[3] + 1;
    this_00[4] = this_00[4] + 1;
  }
  F_00d95b70(this,uVar1,param_1);
  return 0;
}

/* ref: FUN_00d96350 */
uint F_00d96350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd96350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  int * this_00;
  undefined8 uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  LPVOID pvVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2e8)) = this;
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar2 + 4);
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar2 + 0xc)) {
    *puVar6 = "TtAddJobBatch";
    uVar1 = rdtsc();
    (*(uint *)(gen_frame + 0x2ec)) = (int)uVar1;
    puVar6[1] = (int)uVar1;
    *(undefined4 * PTR32 *)((int)pvVar2 + 4) = puVar6 + 3;
  }
  uVar3 = F_00d95870(this,((undefined1 *)(gen_frame + 0x0)));
  (*(uint *)(gen_frame + 0x2ec)) = uVar3;
  (*(int *)(gen_frame + 0x2dc)) = 0;
  if (0 < param_1[1]) {
    do {
      uVar3 = (*(uint *)(gen_frame + 0x2ec));
      iVar8 = *(int *)(*param_1 + (*(int *)(gen_frame + 0x2dc)) * 4);
      F_00da1010(((undefined4 *)(gen_frame + 0x250)),iVar8,(uint)*(ushort *)(iVar8 + 4));
      uVar4 = F_00d95a70(this,((undefined4 *)(gen_frame + 0x250)));
      iVar8 = *(int *)(uVar3 + 0x44 + uVar4 * 0x14);
      this_00 = (int *)(uVar3 + 0x40 + uVar4 * 0x14);
      (*(uint *)(gen_frame + 0x2e0)) = uVar4;
      (*(int * PTR32 *)(gen_frame + 0x2e4)) = this_00;
      if (param_2 == 0) {
        if (iVar8 <= this_00[4]) {
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 * 2;
          }
          F_00d976d0(this_00,iVar8);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x2e4))[2] == 0) {
          (*(int * PTR32 *)(gen_frame + 0x2e4))[2] = (*(int * PTR32 *)(gen_frame + 0x2e4))[1];
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[2] = (*(int * PTR32 *)(gen_frame + 0x2e4))[2] + -1;
        puVar6 = ((undefined4 *)(gen_frame + 0x250));
        puVar7 = (undefined4 *)((*(int * PTR32 *)(gen_frame + 0x2e4))[2] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2e4)));
        for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[4] = (*(int * PTR32 *)(gen_frame + 0x2e4))[4] + 1;
      }
      else {
        if (iVar8 <= this_00[4]) {
          if (iVar8 == 0) {
            iVar8 = 8;
          }
          else {
            iVar8 = iVar8 * 2;
          }
          F_00d976d0(this_00,iVar8);
        }
        if ((*(int * PTR32 *)(gen_frame + 0x2e4))[3] == (*(int * PTR32 *)(gen_frame + 0x2e4))[1]) {
          (*(int * PTR32 *)(gen_frame + 0x2e4))[3] = 0;
        }
        puVar6 = ((undefined4 *)(gen_frame + 0x250));
        puVar7 = (undefined4 *)((*(int * PTR32 *)(gen_frame + 0x2e4))[3] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2e4)));
        for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
        (*(int * PTR32 *)(gen_frame + 0x2e4))[3] = (*(int * PTR32 *)(gen_frame + 0x2e4))[3] + 1;
        (*(int * PTR32 *)(gen_frame + 0x2e4))[4] = (*(int * PTR32 *)(gen_frame + 0x2e4))[4] + 1;
      }
      F_00d95b70((*(undefined * PTR32 *)(gen_frame + 0x2e8)),(*(uint *)(gen_frame + 0x2e0)),(*(uint *)(gen_frame + 0x2ec)));
      iVar8 = (*(int *)(gen_frame + 0x2dc)) + 1;
      (*(int *)(gen_frame + 0x2dc)) = iVar8;
      this = (*(undefined * PTR32 *)(gen_frame + 0x2e8));
    } while (iVar8 < param_1[1]);
  }
  F_00d95890((*(uint *)(gen_frame + 0x2ec)));
  pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar5 + 4);
  pvVar2 = pvVar5;
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc)) {
    *puVar6 = &REFG(undefined, 0x1136cb0);
    uVar1 = rdtsc();
    pvVar2 = (LPVOID)uVar1;
    (*(undefined * PTR32 *)(gen_frame + 0x2e8)) = pvVar2;
    puVar6[1] = pvVar2;
    *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar6 + 3;
  }
  return (uint)pvVar2;
}

/* ref: FUN_00d96630 */
uint F_00d96630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd96630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x300];
  short * psVar1;
  int * this_00;
  undefined8 uVar2;
  LPVOID pvVar3;
  uint uVar4;
  uint uVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2e4)) = this;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar6 = "TtGetNextJob";
    uVar2 = rdtsc();
    (*(int * PTR32 *)(gen_frame + 0x2ec)) = (int *)uVar2;
    puVar6[1] = (int *)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar6 + 3;
  }
  do {
    uVar4 = F_00d95870(this,((undefined1 *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x2e0)) = uVar4;
    (*(uint *)(gen_frame + 0x2e8)) = 0xffffffff;
    if (param_1 != 0) {
      uVar5 = ((code *)*(gen_code32 *)((int)this + 0x20))(this,uVar4,param_1,((int *)(gen_frame + 0x250)));
      if (uVar5 == 0) {
        uVar5 = F_00d95a70(this,((undefined4 *)(gen_frame + 0x260)));
        (*(uint *)(gen_frame + 0x2e8)) = uVar5;
        this_00 = (int *)(uVar4 + 0x40 + uVar5 * 0x14);
        iVar8 = this_00[1];
        (*(int * PTR32 *)(gen_frame + 0x2ec)) = this_00;
        if (((int *)(gen_frame + 0x250))[0] == 0) {
          if (iVar8 <= this_00[4]) {
            if (iVar8 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar8 * 2;
            }
            F_00d976d0(this_00,iVar8);
          }
          if ((*(int * PTR32 *)(gen_frame + 0x2ec))[2] == 0) {
            (*(int * PTR32 *)(gen_frame + 0x2ec))[2] = (*(int * PTR32 *)(gen_frame + 0x2ec))[1];
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[2] = (*(int * PTR32 *)(gen_frame + 0x2ec))[2] + -1;
          puVar6 = ((undefined4 *)(gen_frame + 0x260));
          puVar7 = (undefined4 *)((*(int * PTR32 *)(gen_frame + 0x2ec))[2] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2ec)));
          for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[4] = (*(int * PTR32 *)(gen_frame + 0x2ec))[4] + 1;
          uVar4 = (*(uint *)(gen_frame + 0x2e0));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2e4));
        }
        else {
          if (iVar8 <= this_00[4]) {
            if (iVar8 == 0) {
              iVar8 = 8;
            }
            else {
              iVar8 = iVar8 * 2;
            }
            F_00d976d0(this_00,iVar8);
          }
          if ((*(int * PTR32 *)(gen_frame + 0x2ec))[3] == (*(int * PTR32 *)(gen_frame + 0x2ec))[1]) {
            (*(int * PTR32 *)(gen_frame + 0x2ec))[3] = 0;
          }
          puVar6 = ((undefined4 *)(gen_frame + 0x260));
          puVar7 = (undefined4 *)((*(int * PTR32 *)(gen_frame + 0x2ec))[3] * 0x80 + *(*(int * PTR32 *)(gen_frame + 0x2ec)));
          for (iVar8 = 0x20; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          (*(int * PTR32 *)(gen_frame + 0x2ec))[3] = (*(int * PTR32 *)(gen_frame + 0x2ec))[3] + 1;
          (*(int * PTR32 *)(gen_frame + 0x2ec))[4] = (*(int * PTR32 *)(gen_frame + 0x2ec))[4] + 1;
          uVar4 = (*(uint *)(gen_frame + 0x2e0));
          this = (*(undefined * PTR32 *)(gen_frame + 0x2e4));
        }
      }
      psVar1 = ((short *)GEN_TOP((uVar4 + (uint)*(byte *)(param_1 + 1) * 2)));
      *psVar1 = *psVar1 + -1;
      param_1 = 0;
    }
    uVar4 = F_00d97bd0(this,(*(uint *)(gen_frame + 0x2e8)),uVar4,param_3,param_2);
  } while (uVar4 == 0xffffffff);
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  puVar6 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
  if (puVar6 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
    *puVar6 = &REFG(undefined, 0x1136cb0);
    uVar2 = rdtsc();
    (*(uint *)(gen_frame + 0x2e8)) = (int)uVar2;
    puVar6[1] = (int)uVar2;
    *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar6 + 3;
  }
  return uVar4;
}

/* ref: FUN_00d96980 */
uint F_00d96980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd96980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d96630(this,0,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d969a0 */
uint F_00d969a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd969a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 * puVar1;
  undefined8 uVar2;
  undefined * pvVar3;
  uint uVar4;
  LPVOID pvVar5;
  char * pcVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x84)) = this;
  uVar4 = F_00d96980(this,&(*(byte *)(gen_frame + 0x0)),0);
  while (uVar4 == 0) {
    switch((unsigned int)(uintptr_t)((*(byte *)(gen_frame + 0x1)))) {
    case 0: ;
    case 1: ;
    case 0x11: ;
      pcVar6 = "TtPhysics";
      break;
    case 2: ;
      pcVar6 = "TtCollision Query";
      break;
    case 3: ;
      pcVar6 = "TtRayCast Query";
      break;
    case 4: ;
      pcVar6 = "TtAnimation Sample and Combine";
      break;
    case 5: ;
      pcVar6 = "TtAnimation Sample and Blend";
      break;
    case 6: ;
      pcVar6 = "TtAnimation Mapping";
      break;
    case 7: ;
      pcVar6 = "TtBehavior";
      break;
    case 8: ;
      pcVar6 = "TtCloth";
      break;
    case 9: ;
      pcVar6 = "TtPathfinding Jobs";
      break;
    case 10: ;
      pcVar6 = "TtAI Dynamic Jobs";
      break;
    case 0xb: ;
      pcVar6 = "TtLocalSteering Jobs";
      break;
    case 0xc: ;
      pcVar6 = "TtAI Generation";
      break;
    case 0xd: ;
      pcVar6 = "TtDestruction";
      break;
    default: ;
      pcVar6 = "TtOther";
      break;
    case 0xf: ;
      pcVar6 = "TtCharacter Proxy";
      break;
    case 0x10: ;
      pcVar6 = "TtVehicle";
      break;
    case 0x14: ;
      pcVar6 = "TtUserJob";
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    pvVar3 = (*(undefined * PTR32 *)(gen_frame + 0x84));
    if (((char)param_1 != '\0') &&
       (puVar1 = *(undefined4 * PTR32 *)((int)pvVar5 + 4), puVar1 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc))) {
      *puVar1 = pcVar6;
      uVar2 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x8c)) = (int)uVar2;
      puVar1[1] = (int)uVar2;
      *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar1 + 3;
    }
    if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288) + 4))))
                (*(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x84)) + 0x288),(uint)(*(byte *)(gen_frame + 0x1)),(uint)(*(byte *)(gen_frame + 0x0)));
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)pvVar3 + (uint)(*(byte *)(gen_frame + 0x1)) * 0x10 + 0x128) + (uint)(*(byte *)(gen_frame + 0x0)) * 4)))
            )(pvVar3,&(*(byte *)(gen_frame + 0x0)));
    (*(uint *)(gen_frame + 0x80)) = uVar4;
    if (*(int *)((int)pvVar3 + 0x288) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x288) + 8))))
                (*(int * PTR32 *)((int)pvVar3 + 0x288),(uint)(*(byte *)(gen_frame + 0x1)));
    }
    uVar4 = (*(uint *)(gen_frame + 0x80));
    if (((char)param_1 != '\0') &&
       (puVar1 = *(undefined4 * PTR32 *)((int)pvVar5 + 4), puVar1 < *(undefined4 * PTR32 *)((int)pvVar5 + 0xc))) {
      *puVar1 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      (*(undefined4 *)(gen_frame + 0x88)) = (int)uVar2;
      puVar1[1] = (int)uVar2;
      *(undefined4 * PTR32 *)((int)pvVar5 + 4) = puVar1 + 3;
    }
  }
  return uVar4;
}

/* ref: FUN_00d96ba0 */
uint F_00d96ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xd96ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)this = 1;
  F_00d9baa0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  *(undefined * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 *)(gen_frame + 0x8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 4) = 1;
  return (uint)this;
}

/* ref: FUN_00d96bf0 */
uint F_00d96bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint * puVar1;
  LPVOID pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  byte bVar5;
  int iVar6;
  int local_8;
  
  F_00da5ee0(this,0);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  F_00d96ba0((undefined *)((int)this + 0x58));
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0x80000000;
  *(undefined4 *)((int)this + 0x288) = 0;
  gen_imp_TlsSetValue(REFG(undefined4, 0x15d9a8c),(LPVOID)0x0);
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),0x250);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    iVar6 = uVar3 + 0x40;
    local_8 = 0x19;
    do {
      F_00d96f70(iVar6);
      iVar6 = iVar6 + 0x14;
      local_8 = local_8 + -1;
    } while (-1 < local_8);
  }
  *(uint *)((int)this + 0x18) = uVar3;
  *(undefined1 *)((int)this + 0x74) = 0;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x34))) = 0;
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x30))) = 0;
  F_00d983b0((undefined *)((int)this + 0x58),param_1);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x2c))) = 0;
  iVar6 = 0;
  if (0 < *(int *)((int)this + 0x24)) {
    puVar4 = (undefined4 *)((int)this + 0x128);
    do {
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[2] = ((code *)REFP(0xd95830));
      puVar4[3] = ((code *)REFP(0xd95840));
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar6 * 2))) = 0;
      bVar5 = (byte)iVar6;
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 4;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 0x2c)));
      *puVar1 = *puVar1 | 1 << (bVar5 & 0x1f);
    } while (iVar6 < *(int *)((int)this + 0x24));
  }
  *(gen_code32 *)((int)this + 0x1c) = ((code *)REFP(0xd95a10));
  *(gen_code32 *)((int)this + 0x20) = ((code *)REFP(0xd95a40));
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  F_00d95c20(this);
  return (uint)this;
}

/* ref: FUN_00d96d40 */
unsigned int F_00d96d40(unsigned int gen_a0)
{
  GEN_ENTER(0xd96d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined * pvVar4;
  undefined4 * local_8;
  
  iVar3 = *(int *)((int)this + 0x18);
  if (iVar3 != 0) {
    pvVar4 = (undefined *)(iVar3 + 0x248);
    local_8 = (undefined4 *)0x19;
    do {
      pvVar4 = (undefined *)((int)pvVar4 + -0x14);
      F_00d976a0(pvVar4);
      local_8 = (undefined4 *)((int)local_8 + -1);
    } while (-1 < (int)local_8);
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),iVar3,0x250);
  }
  if ((*(char *)((int)this + 0x74) != '\0') && (iVar3 = 0, 0 < *(int *)((int)this + 0x8c))) {
    local_8 = (undefined4 *)((int)this + 0x78);
    do {
      pvVar4 = (undefined *)*local_8;
      if (pvVar4 != (undefined *)0x0) {
        F_00da36a0(pvVar4);
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),pvVar4,4);
      }
      local_8 = local_8 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)((int)this + 0x8c));
  }
  uVar1 = *(uint *)((int)this + 0x284);
  *(undefined4 *)((int)this + 0x280) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x27c),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x27c) = 0;
  *(undefined4 *)((int)this + 0x284) = 0x80000000;
  F_00a00ae0((undefined *)((int)this + 0x58));
  gen_imp_DeleteCriticalSection(this);
  return 0;
}

/* ref: FUN_00d96e40 */
uint F_00d96e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96e40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (int)*(char *)(param_2 + 0x11c + in_ecx);
}

/* ref: FUN_00d96e60 */
uint F_00d96e60(unsigned int gen_a0)
{
  GEN_ENTER(0xd96e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  DWORD DVar1;
  
  DVar1 = gen_imp_TlsAlloc();
  *(DWORD *)this = DVar1;
  return (uint)this;
}

/* ref: FUN_00d96e90 */
unsigned int F_00d96e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPVOID param_1 = (LPVOID)gen_a1;
  gen_imp_TlsSetValue(*(DWORD *)this,param_1);
  return 0;
}

/* ref: FUN_00d96ed0 */
uint F_00d96ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd96ed0u, gen_a0, gen_a1, gen_a2, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(bool *)param_2 = *in_ecx == (char)param_3;
  return param_2;
}

/* ref: FUN_00d96f40 */
uint F_00d96f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96f40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d96f70 */
uint F_00d96f70(unsigned int gen_a0)
{
  GEN_ENTER(0xd96f70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d96f90 */
uint F_00d96f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96f90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = (undefined4 *)(in_ecx[2] * 0x80 + *in_ecx);
  puVar3 = param_2;
  for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ecx[2] = in_ecx[2] + 1;
  in_ecx[4] = in_ecx[4] + -1;
  if (in_ecx[2] == in_ecx[1]) {
    in_ecx[2] = 0;
  }
  return (uint)in_ecx;
}

/* ref: FUN_00d96fd0 */
uint F_00d96fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd96fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 0x10) == 0;
  return param_2;
}

/* ref: FUN_00d97030 */
uint F_00d97030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97030u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d97070 */
uint F_00d97070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97070u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d970a0 */
uint F_00d970a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd970a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d970e0 */
uint F_00d970e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd970e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d97110 */
unsigned int F_00d97110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd97110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_2) {
    puVar1 = param_1;
    iVar2 = param_2;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d97140 */
unsigned int F_00d97140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd97140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  if (0 < param_3) {
    puVar1 = param_1;
    iVar2 = param_3;
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - (int)param_1) + (int)puVar1)));
      puVar1 = puVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_00d97170 */
uint F_00d97170(unsigned int gen_a0)
{
  GEN_ENTER(0xd97170u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d97190 */
unsigned int F_00d97190(unsigned int gen_a0)
{
  GEN_ENTER(0xd97190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: FUN_00d971e0 */
uint F_00d971e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd971e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_00d97200 */
unsigned int F_00d97200(unsigned int gen_a0)
{
  GEN_ENTER(0xd97200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x250);
  }
  return 0;
}

/* ref: FUN_00d97230 */
uint F_00d97230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da36a0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_00d972c0 */
uint F_00d972c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd972c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00d97300 */
uint F_00d97300(unsigned int gen_a0)
{
  GEN_ENTER(0xd97300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1 << 7);
  return uVar2;
}

/* ref: FUN_00d97330 */
uint F_00d97330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,param_2 << 7);
  return uVar2;
}

/* ref: FUN_00d97370 */
uint F_00d97370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  iVar3 = param_1[1];
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(iVar3 * 4);
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)))))
    ;
    iVar2 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 3U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 2;
    if (iVar2 != 0) goto LAB_00d973d1;
  }
  iVar2 = ((int)0x80000000);
LAB_00d973d1: ;
  *(int *)((int)this + 8) = iVar2;
  *(undefined4 * PTR32 *)this = puVar1;
  *(int *)((int)this + 4) = iVar3;
  if (0 < iVar3) {
    iVar2 = *param_1 - (int)puVar1;
    do {
      *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
      puVar1 = puVar1 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (uint)this;
}

/* ref: FUN_00d97400 */
uint F_00d97400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd97400u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[2]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[2])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 4);
    }
    (*(int * PTR32 *)&gen_args[2]) = (int *)(piVar1[1] * 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0xc))))((*(int * PTR32 *)&gen_args[1]),&(*(int * PTR32 *)&gen_args[2]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[2]) + ((int)(*(int * PTR32 *)&gen_args[2]) >> 0x1f & 3U)) >> 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d97490 */
uint F_00d97490(unsigned int gen_a0)
{
  GEN_ENTER(0xd97490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0xc);
  }
  iVar1 = *(int *)((int)this + 4);
  *(int *)((int)this + 4) = iVar1 + 1;
  return *(int *)this + iVar1 * 0xc;
}

/* ref: FUN_00d97500 */
uint F_00d97500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97500u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d97540 */
unsigned int F_00d97540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd97540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (0 < (int)param_2) {
    param_2 = param_3;
    piVar3 = (int *)(param_1 + 4);
    (*(int *)(gen_frame + 0x4)) = iVar4;
    do {
      if (piVar3 != (int *)&REFG(undefined, 0x4)) {
        piVar3[-1] = 0;
        *piVar3 = 0;
        piVar3[1] = ((int)0x80000000);
        iVar4 = *((int *)GEN_TOP((((int)param_3 - param_1) + (int)piVar3)));
        if (iVar4 == 0) {
          puVar1 = (undefined4 *)0x0;
LAB_00d975ca: ;
          iVar2 = ((int)0x80000000);
        }
        else {
          (*(int *)(gen_frame + 0x8)) = iVar4 * 4;
          puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x8)))));
          iVar2 = (int)(((*(int *)(gen_frame + 0x8)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x8))) >> 2;
          if (iVar2 == 0) goto LAB_00d975ca;
        }
        piVar3[1] = iVar2;
        piVar3[-1] = (int)puVar1;
        *piVar3 = iVar4;
        if (0 < iVar4) {
          iVar2 = *param_2 - (int)puVar1;
          do {
            *puVar1 = *(undefined4 *)(iVar2 + (int)puVar1);
            puVar1 = puVar1 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
      }
      param_2 = param_2 + 3;
      piVar3 = piVar3 + 3;
      (*(int *)(gen_frame + 0x4)) = (*(int *)(gen_frame + 0x4)) + -1;
    } while ((*(int *)(gen_frame + 0x4)) != 0);
  }
  return 0;
}

/* ref: FUN_00d97610 */
uint F_00d97610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97610u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  uVar2 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if ((int)(uVar2 & 0x3fffffff) < (*(int * PTR32 *)&gen_args[1])[1]) {
    if (-1 < (int)uVar2) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)(*(undefined * PTR32 *)&gen_args[0]),uVar2 * 4);
    }
    (*(int * PTR32 *)&gen_args[1]) = (int *)(piVar1[1] * 4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int * PTR32 *)&gen_args[1]));
    *(uint *)(*(undefined * PTR32 *)&gen_args[0]) = uVar2;
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  }
  iVar5 = piVar1[1];
  puVar3 = *(undefined4 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar5;
  if (0 < iVar5) {
    iVar4 = *piVar1 - (int)puVar3;
    do {
      *puVar3 = *(undefined4 *)(iVar4 + (int)puVar3);
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d976a0 */
unsigned int F_00d976a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd976a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 uVar2;
  LPVOID pvVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)this;
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar3 + 0x2c),uVar2,iVar1 << 7);
  }
  return 0;
}

/* ref: FUN_00d976d0 */
uint F_00d976d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd976d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  LPVOID pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  uVar7 = *(uint *)((int)this + 4);
  if ((int)uVar7 < param_1) {
    if (param_1 <= (int)(uVar7 * 2)) {
      param_1 = uVar7 * 2;
    }
    pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 4))))
                      (*(int * PTR32 *)((int)pvVar5 + 0x2c),param_1 << 7);
    uVar7 = uVar6;
    if ((uVar6 != 0) && (iVar1 = *(int *)this, iVar1 != 0)) {
      if (*(int *)((int)this + 0x10) != 0) {
        iVar2 = *(int *)((int)this + 0xc);
        iVar3 = *(int *)((int)this + 8);
        if (iVar3 < iVar2) {
          F_00da1010(uVar6,iVar3 * 0x80 + iVar1,*(int *)((int)this + 0x10) << 7);
        }
        else {
          iVar8 = (*(int *)((int)this + 4) - iVar3) * 0x80;
          F_00da1010(uVar6,iVar3 * 0x80 + iVar1,iVar8);
          F_00da1010(iVar8 + uVar6,*(undefined4 *)this,iVar2 << 7);
        }
      }
      uVar7 = *(uint *)((int)this + 0x10);
      *(undefined4 *)((int)this + 8) = 0;
      *(uint *)((int)this + 0xc) = uVar7;
    }
    iVar1 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      uVar4 = *(undefined4 *)this;
      pvVar5 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar7 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar5 + 0x2c) + 8))))
                        (*(int * PTR32 *)((int)pvVar5 + 0x2c),uVar4,iVar1 << 7);
    }
    *(uint *)this = uVar6;
    *(int *)((int)this + 4) = param_1;
  }
  return uVar7;
}

/* ref: FUN_00d977c0 */
uint F_00d977c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd977c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d97820 */
unsigned int F_00d97820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd97820u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 * puVar2;
  int iVar3;
  uint * puVar4;
  uint * puVar5;
  int local_8;
  
  if (0 < (*(int *)&gen_args[2])) {
    puVar5 = (uint *)((*(int *)&gen_args[1]) + 4);
    puVar4 = (uint *)((*(int *)&gen_args[0]) + 8);
    local_8 = (*(int *)&gen_args[2]);
    do {
      uVar1 = *puVar4;
      if ((int)(uVar1 & 0x3fffffff) < (int)*puVar5) {
        if (-1 < (int)uVar1) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar4[-2],uVar1 * 4);
        }
        (*(int *)&gen_args[2]) = *puVar5 * 4;
        uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)&gen_args[2]));
        puVar4[-2] = uVar1;
        *puVar4 = (int)((*(int *)&gen_args[2]) + ((*(int *)&gen_args[2]) >> 0x1f & 3U)) >> 2;
      }
      uVar1 = *puVar5;
      puVar2 = (undefined4 *)puVar4[-2];
      puVar4[-1] = uVar1;
      if (0 < (int)uVar1) {
        iVar3 = puVar5[-1] - (int)puVar2;
        do {
          *puVar2 = *(undefined4 *)(iVar3 + (int)puVar2);
          puVar2 = puVar2 + 1;
          uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
      }
      puVar5 = puVar5 + 3;
      puVar4 = puVar4 + 3;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return 0;
}

/* ref: FUN_00d978e0 */
uint F_00d978e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd978e0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_00d96f70(in_ecx);
  return in_ecx;
}

/* ref: FUN_00d97920 */
uint F_00d97920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4);
  if (iVar3 <= *(int *)((int)this + 0x10)) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 * 2;
    }
    F_00d976d0(this,iVar3);
  }
  if (*(int *)((int)this + 0xc) == *(int *)((int)this + 4)) {
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  puVar1 = param_1;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) * 0x80 + *(int *)this)));
  for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar2 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return 1;
}

/* ref: FUN_00d97980 */
uint F_00d97980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((int)uVar1 <= *(int *)((int)this + 0x10)) {
    if (uVar1 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = uVar1 * 2;
    }
    uVar1 = F_00d976d0(this,iVar4);
  }
  if (*(int *)((int)this + 8) == 0) {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  puVar2 = param_1;
  puVar3 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) * 0x80 + *(int *)this)));
  for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar1;
}

/* ref: FUN_00d979d0 */
uint F_00d979d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd979d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d97a40 */
uint F_00d97a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd97a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  undefined * this_00;
  int iVar2;
  
  this_00 = (undefined *)((int)this + 0x248);
  iVar2 = 0x19;
  do {
    this_00 = (undefined *)((int)this_00 + -0x14);
    F_00d976a0(this_00);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x250);
  }
  return (uint)this;
}

/* ref: FUN_00d97bd0 */
uint F_00d97bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd97bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  short * psVar1;
  undefined8 uVar2;
  LPVOID pvVar3;
  int iVar4;
  byte bVar5;
  char * pcVar6;
  int * piVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * puVar10;
  uint uVar11;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = this;
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
  if (pvVar3 == (LPVOID)0x0) {
    iVar9 = *(int *)((int)this + 0x54);
  }
  else {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    iVar9 = (int)*(char *)((int)pvVar3 + 0x11c + (int)this);
  }
  (*(int *)(gen_frame + 0x80)) = (int)*(char *)((int)this + iVar9 * 0x1c + 0x90);
  pcVar6 = (char *)((int)this + iVar9 * 0x1c + 0x90);
  if (-1 < (*(int *)(gen_frame + 0x80))) {
LAB_00d97c7a: ;
    piVar7 = (int *)(param_2 + 0x40 + (*(int *)(gen_frame + 0x80)) * 0x14);
    pcVar6 = pcVar6 + 1;
    (*(int * PTR32 *)(gen_frame + 0x88)) = piVar7;
    if (piVar7[4] == 0) goto code_r0x00d97c8e;
    puVar8 = (undefined4 *)(piVar7[2] * 0x80 + *piVar7);
    puVar10 = &(*(undefined4 *)(gen_frame + 0x0));
    for (iVar9 = 0x20; this = (*(undefined4 * PTR32 *)(gen_frame + 0x84)), iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    iVar9 = piVar7[2];
    piVar7[2] = iVar9 + 1;
    if (iVar9 + 1 == piVar7[1]) {
      piVar7[2] = 0;
    }
    piVar7[4] = piVar7[4] + -1;
    uVar11 = ((code *)*(gen_code32 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + 0x1c))((*(undefined4 * PTR32 *)(gen_frame + 0x84)),param_2,&(*(undefined4 *)(gen_frame + 0x0)),param_4);
    if (uVar11 == 1) {
      F_00d97980((*(int * PTR32 *)(gen_frame + 0x88)),&(*(undefined4 *)(gen_frame + 0x0)));
      F_00d95b70(this,(*(int *)(gen_frame + 0x80)),param_2);
    }
    psVar1 = ((short *)GEN_TOP((param_2 + (uint)(*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x0)) + 1)) * 2)));
    *psVar1 = *psVar1 + 1;
    iVar9 = (*(int *)(gen_frame + 0x80));
    goto LAB_00d97c40;
  }
LAB_00d97c3d: ;
  iVar9 = -1;
LAB_00d97c40: ;
  if ((param_1 != -1) && (param_1 != iVar9)) {
    F_00d95b70(this,param_1,param_2);
  }
  if (-1 < iVar9) {
    F_00d95890(param_2);
    return 0;
  }
  iVar9 = *(int *)((int)this + 0x4c);
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x88)) = (int *)0x0;
  iVar4 = *(int *)((int)this + 0x50);
  if (iVar9 < iVar4) {
    if (1 < iVar4 - iVar9) {
      iVar4 = ((iVar4 - iVar9) - 2U >> 1) + 1;
      piVar7 = ((int *)GEN_TOP((param_2 + (iVar9 * 5 + 0x19) * 4)));
      iVar9 = iVar9 + iVar4 * 2;
      do {
        (*(int *)(gen_frame + 0x80)) = (*(int *)(gen_frame + 0x80)) + piVar7[-5];
        (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = (undefined4 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) + *piVar7);
        piVar7 = piVar7 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    iVar4 = 0;
    if (iVar9 < *(int *)((int)this + 0x50)) {
      iVar4 = *((int *)GEN_TOP((param_2 + (iVar9 * 5 + 0x14) * 4)));
    }
    if (iVar4 + (*(int *)(gen_frame + 0x80)) + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x84)) != 0) goto LAB_00d97e69;
  }
  iVar9 = 0;
  uVar11 = 0;
  if (0 < *(int *)((int)this + 0x24)) {
    do {
      if ((*(short *)(param_2 + iVar9 * 2) < 1) &&
         (*((int *)GEN_TOP((param_2 + (*(int *)((int)this + 0x30) + 4 + iVar9) * 0x14))) == 0)) {
        iVar4 = 0;
      }
      else {
        iVar4 = 1;
      }
      bVar5 = (byte)iVar9;
      iVar9 = iVar9 + 1;
      uVar11 = uVar11 | iVar4 << (bVar5 & 0x1f);
    } while (iVar9 < *(int *)((int)this + 0x24));
  }
  (*(bool *)(gen_frame + 0x8f)) = uVar11 == 0;
  if ((*(uint *)(param_2 + 0x2c) & uVar11) == 0) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    if (pvVar3 == (LPVOID)0x0) {
      if ((*(bool *)(gen_frame + 0x8f)) != false) {
        F_00d95980(this,param_2);
      }
      F_00d95890(param_2);
      return 2;
    }
    if (*((short *)GEN_TOP((param_2 + 0x36 + *(char *)((int)this + 0x11c) * 2))) != 0) {
      psVar1 = ((short *)GEN_TOP((param_2 + 0x36 + *(char *)((int)this + 0x11c) * 2)));
      *psVar1 = *psVar1 + -1;
      F_00da36f0(*((undefined4 *)GEN_TOP(((int)this + *(char *)((int)this + 0x11c) * 4 + 0x78))),1);
    }
  }
  if (((*(bool *)(gen_frame + 0x8f)) != false) && (*(int *)(param_2 + 0x30) != 1)) {
    F_00d95980(this,param_2);
    F_00d95890(param_2);
    return 2;
  }
LAB_00d97e69: ;
  if (param_3 != 1) {
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a8c));
    iVar9 = (int)*(char *)((int)pvVar3 + 0x11c + (int)this);
    psVar1 = (short *)(param_2 + 0x36 + iVar9 * 2);
    *psVar1 = *psVar1 + 1;
    F_00d95890(param_2);
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar8 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
    (*(undefined4 * PTR32 *)(gen_frame + 0x84)) = puVar8;
    if (puVar8 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
      *puVar8 = "TtNoJobAvailable";
      uVar2 = rdtsc();
      (*(int * PTR32 *)(gen_frame + 0x88)) = (int *)(int)uVar2;
      puVar8[1] = (int)uVar2;
      *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar8 + 3;
    }
    F_00da36e0(*(undefined4 *)((int)this + iVar9 * 4 + 0x78));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
    puVar8 = *(undefined4 * PTR32 *)((int)pvVar3 + 4);
    if (puVar8 < *(undefined4 * PTR32 *)((int)pvVar3 + 0xc)) {
      *puVar8 = &REFG(undefined, 0x1136cb0);
      uVar2 = rdtsc();
      (*(int * PTR32 *)(gen_frame + 0x88)) = (int *)(int)uVar2;
      puVar8[1] = (int)uVar2;
      *(undefined4 * PTR32 *)((int)pvVar3 + 4) = puVar8 + 3;
    }
    return 0xffffffff;
  }
  F_00d95890(param_2);
  return 1;
code_r0x00d97c8e: ;
  (*(int *)(gen_frame + 0x80)) = (int)*pcVar6;
  if ((*(int *)(gen_frame + 0x80)) < 0) goto LAB_00d97c3d;
  goto LAB_00d97c7a;
}

/* ref: FUN_00d97f30 */
uint F_00d97f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd97f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint * puVar8;
  int * piVar9;
  uint * puVar10;
  int local_14;
  
  iVar1 = (*(int * PTR32 *)&gen_args[2])[1];
  iVar7 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  iVar5 = iVar1;
  if (iVar7 < iVar1) {
    iVar5 = iVar7;
  }
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar6 = uVar3 * 2;
    if (iVar6 <= iVar1) {
      iVar6 = iVar1;
    }
    F_00d95690((*(undefined4 * PTR32 *)&gen_args[1]),(*(undefined * PTR32 *)&gen_args[0]),iVar6,0xc);
  }
  iVar7 = (iVar7 - iVar1) + -1;
  if (-1 < iVar7) {
    piVar9 = ((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + iVar1 * 0xc + 8 + iVar7 * 0xc)));
    do {
      iVar6 = *piVar9;
      piVar9[-1] = 0;
      if (-1 < iVar6) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar9[-2],iVar6 * 4);
      }
      piVar9[-2] = 0;
      *piVar9 = ((int)0x80000000);
      piVar9 = piVar9 + -3;
      iVar7 = iVar7 + -1;
    } while (-1 < iVar7);
  }
  if (0 < iVar5) {
    puVar10 = ((uint *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 4)));
    puVar8 = ((uint *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    local_14 = iVar5;
    do {
      uVar3 = *puVar8;
      if ((int)(uVar3 & 0x3fffffff) < (int)*puVar10) {
        if (-1 < (int)uVar3) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar8[-2],uVar3 * 4);
        }
        (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)(*puVar10 * 4);
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[1]));
        puVar8[-2] = uVar3;
        *puVar8 = (int)((int)(*(undefined4 * PTR32 *)&gen_args[1]) + ((int)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
      }
      uVar3 = *puVar10;
      (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)puVar8[-2];
      puVar8[-1] = uVar3;
      uVar2 = puVar10[-1];
      if (0 < (int)uVar3) {
        puVar4 = (*(undefined4 * PTR32 *)&gen_args[1]);
        do {
          *puVar4 = *((undefined4 *)GEN_TOP(((uVar2 - (int)(*(undefined4 * PTR32 *)&gen_args[1])) + (int)puVar4)));
          puVar4 = puVar4 + 1;
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
      }
      puVar10 = puVar10 + 3;
      puVar8 = puVar8 + 3;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  (*(int * PTR32 *)&gen_args[2]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + iVar5 * 0xc)));
  iVar7 = *(int *)(*(undefined * PTR32 *)&gen_args[0]) + iVar5 * 0xc;
  local_14 = iVar1 - iVar5;
  if (local_14 < 1) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
    return (uint)(*(undefined * PTR32 *)&gen_args[0]);
  }
  iVar5 = (int)(*(int * PTR32 *)&gen_args[2]) - iVar7;
  piVar9 = (int *)(iVar7 + 4);
  do {
    if (piVar9 != (int *)&REFG(undefined, 0x4)) {
      piVar9[-1] = 0;
      *piVar9 = 0;
      piVar9[1] = ((int)0x80000000);
      iVar7 = *(int *)((int)piVar9 + iVar5);
      if (iVar7 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_00d98118: ;
        iVar6 = ((int)0x80000000);
      }
      else {
        (*(undefined4 * PTR32 *)&gen_args[1]) = (undefined4 *)(iVar7 * 4);
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)&gen_args[1]))));
        iVar6 = (int)(((int)(*(undefined4 * PTR32 *)&gen_args[1]) >> 0x1f & 3U) + (int)(*(undefined4 * PTR32 *)&gen_args[1])) >> 2;
        if (iVar6 == 0) goto LAB_00d98118;
      }
      piVar9[1] = iVar6;
      piVar9[-1] = (int)puVar4;
      *piVar9 = iVar7;
      if (0 < iVar7) {
        iVar6 = *(*(int * PTR32 *)&gen_args[2]) - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar6 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    (*(int * PTR32 *)&gen_args[2]) = (*(int * PTR32 *)&gen_args[2]) + 3;
    piVar9 = piVar9 + 3;
    local_14 = local_14 + -1;
    if (local_14 == 0) {
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = iVar1;
      return (uint)(*(undefined * PTR32 *)&gen_args[0]);
    }
  } while( true );
}

/* ref: FUN_00d98170 */
uint F_00d98170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd98170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  int * piVar6;
  int iVar7;
  int * piVar8;
  uint * puVar9;
  int iVar10;
  uint * puVar11;
  
  iVar10 = param_1[1];
  iVar5 = *(int *)((int)this + 4);
  (*(int * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0x14)) = iVar10;
  if (iVar5 < iVar10) {
    (*(int *)(gen_frame + 0xc)) = iVar5;
    iVar7 = iVar5;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = iVar10;
    iVar7 = iVar10;
  }
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  (*(int *)(gen_frame + 0xc)) = iVar7;
  if ((int)uVar2 < iVar10) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0xc);
  }
  iVar10 = (iVar5 - (*(int *)(gen_frame + 0x14))) + -1;
  piVar6 = (*(int * PTR32 *)(gen_frame + 0x18));
  if (-1 < iVar10) {
    piVar8 = (int *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + (*(int *)(gen_frame + 0x14)) * 0xc + 8 + iVar10 * 0xc);
    do {
      iVar5 = *piVar8;
      piVar8[-1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar8[-2],iVar5 * 4);
        piVar6 = (*(int * PTR32 *)(gen_frame + 0x18));
      }
      piVar8[-2] = 0;
      *piVar8 = ((int)0x80000000);
      piVar8 = piVar8 + -3;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (0 < iVar7) {
    puVar11 = (uint *)(*param_1 + 4);
    puVar9 = (uint *)(*piVar6 + 8);
    (*(int *)(gen_frame + 0x8)) = iVar7;
    do {
      uVar2 = *puVar9;
      if ((int)(uVar2 & 0x3fffffff) < (int)*puVar11) {
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar9[-2],uVar2 * 4);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(*puVar11 * 4);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        puVar9[-2] = uVar2;
        *puVar9 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10))) >> 0x1f & 3U)) >> 2;
      }
      uVar2 = *puVar11;
      puVar4 = (undefined4 *)puVar9[-2];
      puVar9[-1] = uVar2;
      uVar1 = puVar11[-1];
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar4;
      if (0 < (int)uVar2) {
        iVar10 = uVar1 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar10 + (int)puVar4);
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
          iVar7 = (*(int *)(gen_frame + 0xc));
        } while (uVar2 != 0);
      }
      puVar11 = puVar11 + 3;
      puVar9 = puVar9 + 3;
      iVar10 = (*(int *)(gen_frame + 0x8)) + -1;
      (*(int *)(gen_frame + 0x8)) = iVar10;
      piVar6 = (*(int * PTR32 *)(gen_frame + 0x18));
    } while (iVar10 != 0);
  }
  param_1 = (int *)(*param_1 + iVar7 * 0xc);
  iVar10 = *piVar6 + iVar7 * 0xc;
  if ((*(int *)(gen_frame + 0x14)) - iVar7 < 1) {
    (*(int * PTR32 *)(gen_frame + 0x18))[1] = (*(int *)(gen_frame + 0x14));
    return (uint)(*(int * PTR32 *)(gen_frame + 0x18));
  }
  piVar6 = (int *)(iVar10 + 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)((int)param_1 - iVar10);
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x14)) - iVar7;
  do {
    if (piVar6 != (int *)&REFG(undefined, 0x4)) {
      piVar6[-1] = 0;
      *piVar6 = 0;
      piVar6[1] = ((int)0x80000000);
      iVar10 = *(int *)((int)piVar6 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
      if (iVar10 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_00d98358: ;
        iVar5 = ((int)0x80000000);
      }
      else {
        (*(int *)(gen_frame + 0x8)) = iVar10 * 4;
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x8)))));
        iVar5 = (int)(((*(int *)(gen_frame + 0x8)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x8))) >> 2;
        if (iVar5 == 0) goto LAB_00d98358;
      }
      piVar6[1] = iVar5;
      piVar6[-1] = (int)puVar4;
      *piVar6 = iVar10;
      if (0 < iVar10) {
        iVar5 = *param_1 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    param_1 = param_1 + 3;
    piVar6 = piVar6 + 3;
    iVar10 = (*(int *)(gen_frame + 0xc)) + -1;
    (*(int *)(gen_frame + 0xc)) = iVar10;
    if (iVar10 == 0) {
      (*(int * PTR32 *)(gen_frame + 0x18))[1] = (*(int *)(gen_frame + 0x14));
      return (uint)(*(int * PTR32 *)(gen_frame + 0x18));
    }
  } while( true );
}

/* ref: FUN_00d983b0 */
uint F_00d983b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd983b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined * pvVar6;
  int iVar7;
  uint * puVar8;
  int * piVar9;
  int iVar10;
  uint * puVar11;
  
  *(int *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  *(int *)((int)this + 8) = param_1[2];
  *(int *)((int)this + 0xc) = param_1[3];
  iVar10 = param_1[5];
  iVar5 = *(int *)((int)this + 0x14);
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = this;
  (*(int *)(gen_frame + 0x14)) = iVar10;
  if (iVar5 < iVar10) {
    (*(int *)(gen_frame + 0xc)) = iVar5;
    iVar7 = iVar5;
  }
  else {
    (*(int *)(gen_frame + 0xc)) = iVar10;
    iVar7 = iVar10;
  }
  uVar2 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  (*(int *)(gen_frame + 0xc)) = iVar7;
  if ((int)uVar2 < iVar10) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar10) {
      iVar3 = iVar10;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x10),iVar3,0xc);
  }
  iVar10 = (iVar5 - (*(int *)(gen_frame + 0x14))) + -1;
  pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x18));
  if (-1 < iVar10) {
    piVar9 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + (*(int *)(gen_frame + 0x14)) * 0xc + 8 + iVar10 * 0xc)));
    do {
      iVar5 = *piVar9;
      piVar9[-1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar9[-2],iVar5 * 4);
        pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x18));
      }
      piVar9[-2] = 0;
      *piVar9 = ((int)0x80000000);
      piVar9 = piVar9 + -3;
      iVar10 = iVar10 + -1;
    } while (-1 < iVar10);
  }
  if (0 < iVar7) {
    puVar11 = (uint *)(param_1[4] + 4);
    puVar8 = ((uint *)GEN_TOP((*(int *)((int)pvVar6 + 0x10) + 8)));
    (*(int *)(gen_frame + 0x8)) = iVar7;
    do {
      uVar2 = *puVar8;
      if ((int)(uVar2 & 0x3fffffff) < (int)*puVar11) {
        if (-1 < (int)uVar2) {
          ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),puVar8[-2],uVar2 * 4);
        }
        (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)(*puVar11 * 4);
        uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
        puVar8[-2] = uVar2;
        *puVar8 = (int)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + ((int)((int)(uintptr_t)(*(undefined4 * PTR32 *)(gen_frame + 0x10))) >> 0x1f & 3U)) >> 2;
      }
      uVar2 = *puVar11;
      puVar4 = (undefined4 *)puVar8[-2];
      puVar8[-1] = uVar2;
      uVar1 = puVar11[-1];
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar4;
      if (0 < (int)uVar2) {
        iVar10 = uVar1 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar10 + (int)puVar4);
          puVar4 = puVar4 + 1;
          uVar2 = uVar2 - 1;
          iVar7 = (*(int *)(gen_frame + 0xc));
        } while (uVar2 != 0);
      }
      puVar11 = puVar11 + 3;
      puVar8 = puVar8 + 3;
      iVar10 = (*(int *)(gen_frame + 0x8)) + -1;
      (*(int *)(gen_frame + 0x8)) = iVar10;
      pvVar6 = (*(undefined * PTR32 *)(gen_frame + 0x18));
    } while (iVar10 != 0);
  }
  param_1 = (int *)(param_1[4] + iVar7 * 0xc);
  iVar10 = *(int *)((int)pvVar6 + 0x10) + iVar7 * 0xc;
  if ((*(int *)(gen_frame + 0x14)) - iVar7 < 1) {
    *(int *)((int)pvVar6 + 0x14) = (*(int *)(gen_frame + 0x14));
    return (uint)(*(undefined * PTR32 *)(gen_frame + 0x18));
  }
  piVar9 = (int *)(iVar10 + 4);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)((int)param_1 - iVar10);
  (*(int *)(gen_frame + 0xc)) = (*(int *)(gen_frame + 0x14)) - iVar7;
  do {
    if (piVar9 != (int *)&REFG(undefined, 0x4)) {
      piVar9[-1] = 0;
      *piVar9 = 0;
      piVar9[1] = ((int)0x80000000);
      iVar10 = *(int *)((int)piVar9 + (int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)));
      if (iVar10 == 0) {
        puVar4 = (undefined4 *)0x0;
LAB_00d985ac: ;
        iVar5 = ((int)0x80000000);
      }
      else {
        (*(int *)(gen_frame + 0x8)) = iVar10 * 4;
        puVar4 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x8)))));
        iVar5 = (int)(((*(int *)(gen_frame + 0x8)) >> 0x1f & 3U) + (*(int *)(gen_frame + 0x8))) >> 2;
        if (iVar5 == 0) goto LAB_00d985ac;
      }
      piVar9[1] = iVar5;
      piVar9[-1] = (int)puVar4;
      *piVar9 = iVar10;
      if (0 < iVar10) {
        iVar5 = *param_1 - (int)puVar4;
        do {
          *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
          puVar4 = puVar4 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
      }
    }
    param_1 = param_1 + 3;
    piVar9 = piVar9 + 3;
    iVar10 = (*(int *)(gen_frame + 0xc)) + -1;
    (*(int *)(gen_frame + 0xc)) = iVar10;
    if (iVar10 == 0) {
      *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x18)) + 0x14) = (*(int *)(gen_frame + 0x14));
      return (uint)(*(undefined * PTR32 *)(gen_frame + 0x18));
    }
  } while( true );
}

/* ref: FUN_00d98620 */
uint F_00d98620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd98620u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  (*(undefined4 *)((char *)&auVar2 + 8)) = (*(undefined4 *)((char *)&auVar1 + 0));
  (*(undefined8 *)((char *)&auVar2 + 0)) = (*(undefined8 *)((char *)&auVar1 + 8));
  (*(undefined4 *)((char *)&auVar2 + 12)) = (*(undefined4 *)((char *)&auVar1 + 4));
  memcpy(&(*in_ecx), &(auVar2), sizeof(auVar2) < sizeof(*in_ecx) ? sizeof(auVar2) : sizeof(*in_ecx));
  return (uint)param_2;
}

/* ref: FUN_00d98800 */
unsigned int F_00d98800(float gen_a0)
{
  GEN_ENTER(0xd98800u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00d988a0 */
float F_00d988a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd988a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = param_3 * REFG(float, 0x1088068);
  fVar4 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  fVar5 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  *param_1 = fVar4 * *param_2;
  param_1[1] = fVar4 * fVar5;
  param_1[2] = fVar4 * fVar1;
  param_1[3] = fVar4 * fVar2;
  fVar5 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar3))));
  param_1[3] = fVar5;
  return fVar5;
}

/* ref: FUN_00d988e0 */
float F_00d988e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd988e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = F_00d988a0(this,param_2,*param_3);
  return fVar1;
}

/* ref: FUN_00d98900 */
unsigned int F_00d98900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd98900u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_eax = (float *)(uintptr_t)gen_a0;
  float * in_ecx = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = (*in_eax + *(float *)&REFG(undefined, 0x1139110)) -
          gen_bits2f(-(uint)!(*in_eax + *(float *)&REFG(undefined, 0x1139110) < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = (in_eax[3] + *(float *)&REFG(undefined, 0x113911c)) -
          gen_bits2f(-(uint)!(in_eax[3] + *(float *)&REFG(undefined, 0x113911c) < *(float *)&REFG(undefined, 0x11390fc)) &
                     *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + *(float *)&REFG(undefined, 0x11390d0) * fVar1;
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + *(float *)&REFG(undefined, 0x11390dc) * fVar3;
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = in_ecx[1];
  fVar3 = in_ecx[2];
  *param_3 = fVar2 * *in_ecx;
  param_3[1] = fVar2 * fVar1;
  param_3[2] = fVar2 * fVar3;
  param_3[3] = fVar5 + fVar4;
  return 0;
}

/* ref: FUN_00d98990 */
unsigned int F_00d98990(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd98990u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = param_3 * REFG(float, 0x1088068) + *(float *)&REFG(undefined, 0x1139110);
  fVar3 = param_3 * REFG(float, 0x1088068) + *(float *)&REFG(undefined, 0x113911c);
  fVar1 = fVar1 - gen_bits2f(-(uint)!(fVar1 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = fVar3 - gen_bits2f(-(uint)!(fVar3 < *(float *)&REFG(undefined, 0x11390fc)) & *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + *(float *)&REFG(undefined, 0x11390d0) * fVar1;
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + *(float *)&REFG(undefined, 0x11390dc) * fVar3;
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *in_ecx = fVar2 * *param_2;
  in_ecx[1] = fVar2 * fVar1;
  in_ecx[2] = fVar2 * fVar3;
  in_ecx[3] = fVar5 + fVar4;
  return 0;
}

/* ref: FUN_00d98a30 */
unsigned int F_00d98a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd98a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_2 * *(float *)&REFG(undefined, 0x1138bd0) + *(float *)&REFG(undefined, 0x1139110);
  fVar3 = param_2[3] * *(float *)&REFG(undefined, 0x1138bdc) + *(float *)&REFG(undefined, 0x113911c);
  fVar1 = fVar1 - gen_bits2f(-(uint)!(fVar1 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar3 = fVar3 - gen_bits2f(-(uint)!(fVar3 < *(float *)&REFG(undefined, 0x11390fc)) & *(uint *)&REFG(undefined, 0x11390ec));
  fVar2 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar4 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390cc) + fVar3 * *(float *)&REFG(undefined, 0x11390dc);
  fVar5 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390bc);
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b0) + fVar2;
  fVar1 = param_1[1];
  fVar3 = param_1[2];
  *(float *)this = fVar2 * *param_1;
  *(float *)((int)this + 4) = fVar2 * fVar1;
  *(float *)((int)this + 8) = fVar2 * fVar3;
  *(float *)((int)this + 0xc) = fVar5 + fVar4;
  return 0;
}

/* ref: FUN_00d98be0 */
float F_00d98be0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd98be0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = param_3 * REFG(float, 0x1088068);
  fVar1 = param_2 * REFG(float, 0x1088068);
  fVar6 = param_4 * REFG(float, 0x1088068);
  fVar2 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar1))));
  fVar1 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar1))));
  fVar3 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar5))));
  fVar5 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar5))));
  fVar4 = F_01052372(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar6))));
  fVar6 = F_01052223(GEN_TOD(gen_bits2d((ulonglong)(uint)gen_fl2bits(fVar6))));
  *param_1 = (fVar3 * fVar2) * fVar6 + (fVar5 * fVar1) * fVar4;
  param_1[1] = (fVar3 * fVar1) * fVar4 + (fVar5 * fVar2) * fVar6;
  param_1[2] = (fVar5 * fVar2) * fVar4 - (fVar3 * fVar1) * fVar6;
  param_1[3] = (fVar3 * fVar2) * fVar4 - (fVar5 * fVar1) * fVar6;
  return fVar6;
}

/* ref: FUN_00d98cf0 */
float F_00d98cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd98cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  
  fVar1 = F_00d98be0(this,*param_2,*param_3,*param_4);
  return fVar1;
}

/* ref: FUN_00d98d30 */
unsigned int F_00d98d30(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd98d30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = param_2 * *(float *)&REFG(undefined, 0x1138bd0);
  fVar6 = param_3 * *(float *)&REFG(undefined, 0x1138bd4);
  fVar7 = param_4 * *(float *)&REFG(undefined, 0x1138bd8);
  fVar1 = fVar4 - gen_bits2f(-(uint)!(fVar4 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar2 = fVar6 - gen_bits2f(-(uint)!(fVar6 < *(float *)&REFG(undefined, 0x11390f4)) & *(uint *)&REFG(undefined, 0x11390e4));
  fVar3 = fVar7 - gen_bits2f(-(uint)!(fVar7 < *(float *)&REFG(undefined, 0x11390f8)) & *(uint *)&REFG(undefined, 0x11390e8));
  fVar1 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar2 = (ABS(fVar2) * fVar2) * *(float *)&REFG(undefined, 0x11390c4) + fVar2 * *(float *)&REFG(undefined, 0x11390d4);
  fVar3 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390c8) + fVar3 * *(float *)&REFG(undefined, 0x11390d8);
  fVar1 = (ABS(fVar1) * fVar1 - fVar1) * *(float *)&REFG(undefined, 0x11390b0) + fVar1;
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b4) + fVar2;
  fVar3 = (ABS(fVar3) * fVar3 - fVar3) * *(float *)&REFG(undefined, 0x11390b8) + fVar3;
  fVar4 = (*(float *)&REFG(undefined, 0x1139100) + fVar4) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139100) + fVar4 < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar6 = (*(float *)&REFG(undefined, 0x1139104) + fVar6) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139104) + fVar6 < *(float *)&REFG(undefined, 0x11390f4)) &
                     *(uint *)&REFG(undefined, 0x11390e4));
  fVar7 = (*(float *)&REFG(undefined, 0x1139108) + fVar7) -
          gen_bits2f(-(uint)!(*(float *)&REFG(undefined, 0x1139108) + fVar7 < *(float *)&REFG(undefined, 0x11390f8)) &
                     *(uint *)&REFG(undefined, 0x11390e8));
  fVar4 = (ABS(fVar4) * fVar4) * *(float *)&REFG(undefined, 0x11390c0) + fVar4 * *(float *)&REFG(undefined, 0x11390d0);
  fVar6 = (ABS(fVar6) * fVar6) * *(float *)&REFG(undefined, 0x11390c4) + fVar6 * *(float *)&REFG(undefined, 0x11390d4);
  fVar7 = (ABS(fVar7) * fVar7) * *(float *)&REFG(undefined, 0x11390c8) + fVar7 * *(float *)&REFG(undefined, 0x11390d8);
  fVar4 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390b0) + fVar4;
  fVar6 = (ABS(fVar6) * fVar6 - fVar6) * *(float *)&REFG(undefined, 0x11390b4) + fVar6;
  fVar7 = (ABS(fVar7) * fVar7 - fVar7) * *(float *)&REFG(undefined, 0x11390b8) + fVar7;
  fVar5 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar6) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d80) & *(uint *)&REFG(undefined, 0x1139030));
  fVar4 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d84) & *(uint *)&REFG(undefined, 0x1139034));
  fVar6 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar6) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d88) & *(uint *)&REFG(undefined, 0x1139038));
  fVar1 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d8c) & *(uint *)&REFG(undefined, 0x113903c));
  *in_ecx = fVar7 * fVar6 + fVar5;
  in_ecx[1] = fVar7 * fVar1 + fVar4;
  in_ecx[2] = fVar7 * fVar5 + fVar6;
  in_ecx[3] = fVar7 * fVar4 + fVar1;
  return 0;
}

/* ref: FUN_00d98e70 */
unsigned int F_00d98e70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd98e70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = *param_1 * *(float *)&REFG(undefined, 0x1138bd0);
  fVar5 = *param_2 * *(float *)&REFG(undefined, 0x1138bd4);
  fVar6 = *param_3 * *(float *)&REFG(undefined, 0x1138bd8);
  fVar1 = fVar4 - gen_bits2f(-(uint)!(fVar4 < *(float *)&REFG(undefined, 0x11390f0)) & *(uint *)&REFG(undefined, 0x11390e0));
  fVar2 = fVar5 - gen_bits2f(-(uint)!(fVar5 < *(float *)&REFG(undefined, 0x11390f4)) & *(uint *)&REFG(undefined, 0x11390e4));
  fVar3 = fVar6 - gen_bits2f(-(uint)!(fVar6 < *(float *)&REFG(undefined, 0x11390f8)) & *(uint *)&REFG(undefined, 0x11390e8));
  fVar1 = (ABS(fVar1) * fVar1) * *(float *)&REFG(undefined, 0x11390c0) + fVar1 * *(float *)&REFG(undefined, 0x11390d0);
  fVar2 = (ABS(fVar2) * fVar2) * *(float *)&REFG(undefined, 0x11390c4) + fVar2 * *(float *)&REFG(undefined, 0x11390d4);
  fVar3 = (ABS(fVar3) * fVar3) * *(float *)&REFG(undefined, 0x11390c8) + fVar3 * *(float *)&REFG(undefined, 0x11390d8);
  fVar1 = (ABS(fVar1) * fVar1 - fVar1) * *(float *)&REFG(undefined, 0x11390b0) + fVar1;
  fVar2 = (ABS(fVar2) * fVar2 - fVar2) * *(float *)&REFG(undefined, 0x11390b4) + fVar2;
  fVar3 = (ABS(fVar3) * fVar3 - fVar3) * *(float *)&REFG(undefined, 0x11390b8) + fVar3;
  fVar4 = (fVar4 + *(float *)&REFG(undefined, 0x1139100)) -
          gen_bits2f(-(uint)!(fVar4 + *(float *)&REFG(undefined, 0x1139100) < *(float *)&REFG(undefined, 0x11390f0)) &
                     *(uint *)&REFG(undefined, 0x11390e0));
  fVar5 = (fVar5 + *(float *)&REFG(undefined, 0x1139104)) -
          gen_bits2f(-(uint)!(fVar5 + *(float *)&REFG(undefined, 0x1139104) < *(float *)&REFG(undefined, 0x11390f4)) &
                     *(uint *)&REFG(undefined, 0x11390e4));
  fVar6 = (fVar6 + *(float *)&REFG(undefined, 0x1139108)) -
          gen_bits2f(-(uint)!(fVar6 + *(float *)&REFG(undefined, 0x1139108) < *(float *)&REFG(undefined, 0x11390f8)) &
                     *(uint *)&REFG(undefined, 0x11390e8));
  fVar4 = (ABS(fVar4) * fVar4) * *(float *)&REFG(undefined, 0x11390c0) + fVar4 * *(float *)&REFG(undefined, 0x11390d0);
  fVar5 = (ABS(fVar5) * fVar5) * *(float *)&REFG(undefined, 0x11390c4) + fVar5 * *(float *)&REFG(undefined, 0x11390d4);
  fVar6 = (ABS(fVar6) * fVar6) * *(float *)&REFG(undefined, 0x11390c8) + fVar6 * *(float *)&REFG(undefined, 0x11390d8);
  fVar4 = (ABS(fVar4) * fVar4 - fVar4) * *(float *)&REFG(undefined, 0x11390b0) + fVar4;
  fVar5 = (ABS(fVar5) * fVar5 - fVar5) * *(float *)&REFG(undefined, 0x11390b4) + fVar5;
  fVar6 = (ABS(fVar6) * fVar6 - fVar6) * *(float *)&REFG(undefined, 0x11390b8) + fVar6;
  fVar7 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar5) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d80) & *(uint *)&REFG(undefined, 0x1139030));
  fVar4 = gen_bits2f((uint)gen_fl2bits((fVar4 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d84) & *(uint *)&REFG(undefined, 0x1139034));
  fVar5 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar5) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d88) & *(uint *)&REFG(undefined, 0x1139038));
  fVar1 = gen_bits2f((uint)gen_fl2bits((fVar1 * fVar2) * fVar3) ^
                     *(uint *)&REFG(undefined, 0x1136d8c) & *(uint *)&REFG(undefined, 0x113903c));
  *(float *)this = fVar6 * fVar5 + fVar7;
  *(float *)((int)this + 4) = fVar6 * fVar1 + fVar4;
  *(float *)((int)this + 8) = fVar6 * fVar7 + fVar5;
  *(float *)((int)this + 0xc) = fVar6 * fVar4 + fVar1;
  return 0;
}

/* ref: FUN_00d98fb0 */
uint F_00d98fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd98fb0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 in_EAX = 0;
  int iVar6;
  
  fVar2 = *in_ecx;
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  fVar5 = in_ecx[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)GEN_ISNAN(fVar3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)GEN_ISNAN(fVar2);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)GEN_ISNAN(fVar4);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)GEN_ISNAN(fVar5);
  iVar6 = gen_movmskps(&(auVar1));
  if ((iVar6 == 0) &&
     (!(*(float *)&REFG(undefined, 0x1139090) <=
       ABS(((fVar5 * fVar5 + fVar3 * fVar3) + (fVar4 * fVar4 + fVar2 * fVar2)) -
           *(float *)&REFG(undefined, 0x1138af0))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00d991c0 */
uint F_00d991c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd991c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float * pfVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar6 = *param_1;
  fVar7 = param_1[5];
  fVar8 = param_1[10];
  fVar5 = (fVar6 + fVar7) + fVar8;
  (*(float * PTR32 *)(gen_frame + 0x28)) = this;
  if (*(float *)&REFG(undefined, 0x1088114) < fVar5) {
    fVar7 = SQRT(fVar5 + REFG(float, 0x1087f04));
    fVar6 = REFG(float, 0x1088068) / fVar7;
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar8 = (param_1[6] - param_1[9]) * fVar6;
    ((float *)(gen_frame + 0x0))[0] = fVar8;
    fVar5 = (param_1[8] - param_1[2]) * fVar6;
    ((float *)(gen_frame + 0x0))[1] = fVar5;
    fVar6 = (param_1[1] - param_1[4]) * fVar6;
    ((float *)(gen_frame + 0x0))[2] = fVar6;
    ((float *)(gen_frame + 0x0))[3] = fVar7;
    *(float *)this = fVar8;
    *(float *)((int)this + 4) = fVar5;
    *(float *)((int)this + 8) = fVar6;
    *(float *)((int)this + 0xc) = fVar7;
    return (uint)param_1;
  }
  ((int *)(gen_frame + 0x1c))[0] = 1;
  ((int *)(gen_frame + 0x1c))[1] = 2;
  ((int *)(gen_frame + 0x1c))[2] = 0;
  uVar4 = (uint)((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6));
  pfVar1 = param_1 + uVar4 * 5;
  if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(*pfVar1)) && (!(fVar8 < *pfVar1) && fVar8 != *pfVar1)) {
    uVar4 = 2;
  }
  iVar2 = ((int *)(gen_frame + 0x1c))[(int)(((int *)(gen_frame + 0x1c))[(int)(uVar4)])];
  (*(int *)(gen_frame + 0x2c)) = iVar2;
  iVar3 = ((int *)(gen_frame + 0x1c))[(int)(uVar4)];
  fVar7 = SQRT((param_1[uVar4 * 5] - (param_1[iVar2 * 5] + param_1[((int *)(gen_frame + 0x1c))[(int)(uVar4)] * 5])) +
               REFG(float, 0x1087f04));
  fVar6 = REFG(float, 0x1088068) / fVar7;
  ((float *)(gen_frame + 0x0))[(int)(uVar4)] = fVar7 * REFG(float, 0x1088068);
  ((float *)(gen_frame + 0x0))[3] = (param_1[iVar2 + iVar3 * 4] - param_1[iVar3 + iVar2 * 4]) * fVar6;
  ((float *)(gen_frame + 0x0))[(int)(iVar3)] = (param_1[uVar4 + iVar3 * 4] + param_1[iVar3 + uVar4 * 4]) * fVar6;
  ((float *)(gen_frame + 0x0))[(int)((*(int *)(gen_frame + 0x2c)))] = (param_1[uVar4 + (*(int *)(gen_frame + 0x2c)) * 4] + param_1[(*(int *)(gen_frame + 0x2c)) + uVar4 * 4]) * fVar6;
  *(*(float * PTR32 *)(gen_frame + 0x28)) = ((float *)(gen_frame + 0x0))[0];
  (*(float * PTR32 *)(gen_frame + 0x28))[1] = ((float *)(gen_frame + 0x0))[1];
  (*(float * PTR32 *)(gen_frame + 0x28))[2] = ((float *)(gen_frame + 0x0))[2];
  (*(float * PTR32 *)(gen_frame + 0x28))[3] = ((float *)(gen_frame + 0x0))[3];
  return (uint)(*(float * PTR32 *)(gen_frame + 0x28));
}

/* ref: FUN_00d998a0 */
uint F_00d998a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd998a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_2;
  uVar2 = *param_4;
  uVar3 = *param_3;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar3;
  *(undefined4 *)((int)this + 0xc) = uVar2;
  return (uint)param_3;
}

/* ref: FUN_00d998f0 */
byte F_00d998f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd998f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return !(*param_2 <= *in_ecx);
}

/* ref: FUN_00d99910 */
byte F_00d99910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99910u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = *in_ecx;
  return (!GEN_ISNAN(fVar1) && !GEN_ISNAN(*param_2)) && (!(fVar1 < *param_2) && fVar1 != *param_2);
}

/* ref: FUN_00d99930 */
uint F_00d99930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd99930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1139124);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1139128);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x113912c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1139120) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d99950 */
uint F_00d99950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd99950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = param_2[1] & *(uint *)&REFG(undefined, 0x1139134);
  uVar5 = param_2[2] & *(uint *)&REFG(undefined, 0x1139138);
  uVar6 = param_2[3] & *(uint *)&REFG(undefined, 0x113913c);
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(uint *)this = *param_2 & *(uint *)&REFG(undefined, 0x1139130) ^ *param_1;
  *(uint *)((int)this + 4) = uVar4 ^ uVar1;
  *(uint *)((int)this + 8) = uVar5 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar6 ^ uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d99970 */
unsigned int F_00d99970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99970u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
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
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar19 = param_1[3];
  fVar18 = *(float *)&REFG(undefined, 0x1138afc) * fVar19;
  fVar14 = *(float *)&REFG(undefined, 0x1138afc) * fVar19;
  fVar11 = *(float *)&REFG(undefined, 0x1138af8) * fVar6 - *(float *)&REFG(undefined, 0x1138af4) * fVar7;
  fVar12 = *(float *)&REFG(undefined, 0x1138af0) * fVar7 - *(float *)&REFG(undefined, 0x1138af8) * fVar5;
  fVar13 = *(float *)&REFG(undefined, 0x1138af4) * fVar5 - *(float *)&REFG(undefined, 0x1138af0) * fVar6;
  fVar20 = (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar19;
  fVar19 = (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)) * fVar19;
  fVar15 = (float)REFG(undefined8, 0x1138c78) * fVar6 - (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar7;
  fVar16 = (float)REFG(float, 0x1138c70) * fVar7 - (float)REFG(undefined8, 0x1138c78) * fVar5;
  fVar17 = (*(float *)((char *)&REFG(float, 0x1138c70) + 4)) * fVar5 - (float)REFG(float, 0x1138c70) * fVar6;
  fVar8 = fVar15 * fVar15;
  fVar9 = fVar16 * fVar16;
  fVar10 = fVar17 * fVar17;
  fVar5 = fVar11 * fVar11;
  fVar6 = fVar12 * fVar12;
  fVar7 = fVar13 * fVar13;
  uVar1 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar2 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar3 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  uVar4 = -(uint)((fVar6 + fVar5) + fVar7 < (fVar9 + fVar8) + fVar10);
  *param_2 = uVar1 & (uint)gen_fl2bits(fVar15) | ~uVar1 & (uint)gen_fl2bits(fVar11);
  param_2[1] = uVar2 & (uint)gen_fl2bits(fVar16) | ~uVar2 & (uint)gen_fl2bits(fVar12);
  param_2[2] = uVar3 & (uint)gen_fl2bits(fVar17) | ~uVar3 & (uint)gen_fl2bits(fVar13);
  param_2[3] = uVar4 & (uint)gen_fl2bits(fVar19 - fVar20) |
               ~uVar4 & (uint)gen_fl2bits(fVar14 - fVar18);
  return 0;
}

/* ref: FUN_00d99a10 */
uint F_00d99a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99a10u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_00d99d80 */
uint F_00d99d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d99d90 */
uint F_00d99d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1139244));
  F_00d91350(in_ecx + 2,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d99db0 */
uint F_00d99db0(unsigned int gen_a0)
{
  GEN_ENTER(0xd99db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)((int)this + 8));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d99dd0 */
uint F_00d99dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d99e00 */
uint F_00d99e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1139244));
    uVar1 = F_00d91350(param_1 + 2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d99e20 */
uint F_00d99e20(unsigned int gen_a0)
{
  GEN_ENTER(0xd99e20u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d99e30 */
uint F_00d99e30(void)
{
  GEN_ENTER(0xd99e30u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x8)),0);
  return 0x1139244;
}

/* ref: FUN_00d99e80 */
uint F_00d99e80(unsigned int gen_a0)
{
  GEN_ENTER(0xd99e80u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d99e90 */
uint F_00d99e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
    uVar1 = F_00d91350(param_1 + 0x19,param_2);
  }
  return uVar1;
}

/* ref: FUN_00d99eb0 */
uint F_00d99eb0(void)
{
  GEN_ENTER(0xd99eb0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  F_00d91350(((undefined1 *)(gen_frame + 0x4)),0);
  return 0x1139254;
}

/* ref: FUN_00d99f20 */
uint F_00d99f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd99f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d99f50 */
uint F_00d99f50(unsigned int gen_a0)
{
  GEN_ENTER(0xd99f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d99f80 */
uint F_00d99f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99f80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d99fc0 */
uint F_00d99fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd99fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkLocalFrameGroup::vf0 */
uint F_00d99ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd99ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d9a050 */
uint F_00d9a050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a050u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9a090 */
uint F_00d9a090(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a090u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9a0d0 */
uint F_00d9a0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a0d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9a110 */
uint F_00d9a110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
  F_00d91350(in_ecx + 0x19,param_2);
  return (uint)in_ecx;
}

/* ref: hkSimpleLocalFrame::vf8 */
uint F_00d9a130(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x5c);
}

/* ref: hkSimpleLocalFrame::vf9 */
uint F_00d9a140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5c) = param_2;
  return param_2;
}

/* ref: hkSimpleLocalFrame::vf12 */
uint F_00d9a150(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x60);
}

/* ref: FUN_00d9a160 */
uint F_00d9a160(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkSimpleLocalFrame::vf7 */
uint F_00d9a190(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100) & 0xfffffffe;
}

/* ref: hkSimpleLocalFrame::vf0 */
uint F_00d9a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00da9830(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d9a1e0 */
uint F_00d9a1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9a1f0 */
uint F_00d9a1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9a200 */
uint F_00d9a200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9a210 */
uint F_00d9a210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9a220 */
uint F_00d9a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9a240 */
unsigned int F_00d9a240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a240u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00da9ae0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9a270 */
unsigned int F_00d9a270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a270u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00dada40(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9a2c0 */
uint F_00d9a2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a2c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d9a2d0 */
unsigned int F_00d9a2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a2d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9a2f0 */
unsigned int F_00d9a2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a2f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00d91350(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9a310 */
uint F_00d9a310(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510((undefined *)(param_1 + 8));
  return uVar1;
}

/* ref: FUN_00d9a320 */
uint F_00d9a320(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a320u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00d9a330 */
uint F_00d9a330(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a330u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d91510(param_1);
  return uVar1;
}

/* ref: FUN_00d9a340 */
uint F_00d9a340(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a340u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x1139470));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9a360 */
uint F_00d9a360(void)
{
  GEN_ENTER(0xd9a360u, 0u, 0u, 0u, 0u);
  return 0x1139470;
}

/* ref: FUN_00d9a370 */
uint F_00d9a370(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a370u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d9a9d0(param_1);
  return uVar1;
}

/* ref: FUN_00d9a410 */
uint F_00d9a410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9a410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d9a440 */
uint F_00d9a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d9a460 */
unsigned int F_00d9a460(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_00d9a490 */
unsigned int F_00d9a490(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d9a4c0 */
unsigned int F_00d9a4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a4c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x24);
  }
  return 0;
}

/* ref: FUN_00d9a4f0 */
uint F_00d9a4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a4f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d9a510 */
unsigned int F_00d9a510(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d9a540 */
uint F_00d9a540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a540u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d91350(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00d9a560 */
uint F_00d9a560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510((undefined *)((int)this + 8));
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d9a5a0 */
uint F_00d9a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x24);
  }
  return (uint)this;
}

/* ref: FUN_00d9a5e0 */
uint F_00d9a5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d91510(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d9a630 */
unsigned int F_00d9a630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a630u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + 8 + iVar1 * 0x10);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -0x10);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d9a660 */
unsigned int F_00d9a660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined * this;
  
  iVar1 = param_2 + -1;
  if (-1 < iVar1) {
    this = (undefined *)(param_1 + iVar1 * 8);
    do {
      F_00d91510(this);
      this = (undefined *)((int)this + -8);
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: FUN_00d9a690 */
uint F_00d9a690(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + 8 + iVar2 * 0x10);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d9a6c0 */
uint F_00d9a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * this_00;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(uVar1 + iVar2 * 8);
    do {
      uVar1 = F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  *(undefined4 *)((int)this + 4) = 0;
  return uVar1;
}

/* ref: FUN_00d9a6f0 */
uint F_00d9a6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 8 + iVar2 * 0x10);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a750 */
uint F_00d9a750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9a750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a7b0 */
uint F_00d9a7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 8 + iVar2 * 0x10);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a810 */
uint F_00d9a810(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a870 */
uint F_00d9a870(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 8 + iVar2 * 0x10);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a8d0 */
uint F_00d9a8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + iVar2 * 8);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d9a940 */
uint F_00d9a940(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d9a970 */
uint F_00d9a970(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0xc) + -1;
  if (-1 < iVar2) {
    this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 8)));
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -8);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d9a9d0 */
uint F_00d9a9d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9a9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar2) {
    this_00 = (undefined *)(*(int *)this + 8 + iVar2 * 0x10);
    do {
      F_00d91510(this_00);
      this_00 = (undefined *)((int)this_00 + -0x10);
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: hkMonitorStreamColorTable::vf0 */
uint F_00d9aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9aa30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9a970(this);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c),this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d9aa70 */
uint F_00d9aa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9aa70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9a9d0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d9aac0 */
unsigned int F_00d9aac0(void)
{
  GEN_ENTER(0xd9aac0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9aae0 */
unsigned int F_00d9aae0(void)
{
  GEN_ENTER(0xd9aae0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ab00 */
unsigned int F_00d9ab00(void)
{
  GEN_ENTER(0xd9ab00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ab20 */
unsigned int F_00d9ab20(void)
{
  GEN_ENTER(0xd9ab20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ab40 */
unsigned int F_00d9ab40(void)
{
  GEN_ENTER(0xd9ab40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ab60 */
unsigned int F_00d9ab60(void)
{
  GEN_ENTER(0xd9ab60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ab80 */
unsigned int F_00d9ab80(void)
{
  GEN_ENTER(0xd9ab80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9aba0 */
unsigned int F_00d9aba0(void)
{
  GEN_ENTER(0xd9aba0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9abc0 */
unsigned int F_00d9abc0(void)
{
  GEN_ENTER(0xd9abc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9abe0 */
unsigned int F_00d9abe0(void)
{
  GEN_ENTER(0xd9abe0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac00 */
unsigned int F_00d9ac00(void)
{
  GEN_ENTER(0xd9ac00u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac20 */
unsigned int F_00d9ac20(void)
{
  GEN_ENTER(0xd9ac20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac40 */
unsigned int F_00d9ac40(void)
{
  GEN_ENTER(0xd9ac40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac60 */
unsigned int F_00d9ac60(void)
{
  GEN_ENTER(0xd9ac60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac80 */
unsigned int F_00d9ac80(void)
{
  GEN_ENTER(0xd9ac80u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9ac90 */
uint F_00d9ac90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ac90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9acb0 */
unsigned int F_00d9acb0(void)
{
  GEN_ENTER(0xd9acb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9acc0 */
unsigned int F_00d9acc0(void)
{
  GEN_ENTER(0xd9acc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9acd0 */
uint F_00d9acd0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9acd0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9ad20 */
uint F_00d9ad20(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ad20u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9ad70 */
uint F_00d9ad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ad70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9ad80 */
unsigned int F_00d9ad80(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ad80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d9adb0 */
unsigned int F_00d9adb0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9adb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d9ade0 */
uint F_00d9ade0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ade0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae20 */
uint F_00d9ae20(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ae20u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9ae60 */
uint F_00d9ae60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ae60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d9aef0 */
uint F_00d9aef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9aef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d9af60 */
uint F_00d9af60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9af60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9af70 */
uint F_00d9af70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9af70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9afa0 */
unsigned int F_00d9afa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9afa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00db19a0(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9afc0 */
uint F_00d9afc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9afc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d9afd0 */
uint F_00d9afd0(void)
{
  GEN_ENTER(0xd9afd0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00db19a0(((uint *)(gen_frame + 0x0)),0);
  return ((uint *)(gen_frame + 0x0))[0];
}

/* ref: FUN_00d9b000 */
unsigned int F_00d9b000(void)
{
  GEN_ENTER(0xd9b000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b010 */
unsigned int F_00d9b010(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b010u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d91a80((undefined *)*param_1);
  }
  *param_1 = 0;
  return 0;
}

/* ref: FUN_00d9b030 */
unsigned int F_00d9b030(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,8);
  }
  return 0;
}

/* ref: FUN_00d9b070 */
unsigned int F_00d9b070(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00d9b090 */
uint F_00d9b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this);
  }
  *(undefined4 *)this = 0;
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,8);
  }
  return (uint)this;
}

/* ref: FUN_00d9b0e0 */
unsigned int F_00d9b0e0(void)
{
  GEN_ENTER(0xd9b0e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b0f0 */
unsigned int F_00d9b0f0(void)
{
  GEN_ENTER(0xd9b0f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b100 */
uint F_00d9b100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9b130 */
unsigned int F_00d9b130(void)
{
  GEN_ENTER(0xd9b130u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b150 */
unsigned int F_00d9b150(void)
{
  GEN_ENTER(0xd9b150u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b170 */
unsigned int F_00d9b170(void)
{
  GEN_ENTER(0xd9b170u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b180 */
uint F_00d9b180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9b1a0 */
unsigned int F_00d9b1a0(void)
{
  GEN_ENTER(0xd9b1a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b1c0 */
unsigned int F_00d9b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b1c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (param_1 != 0) {
    F_00db2110(param_1,param_2);
  }
  return 0;
}

/* ref: FUN_00d9b1e0 */
uint F_00d9b1e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b1e0u, gen_a0, 0u, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d9b340(param_1);
  return uVar1;
}

/* ref: FUN_00d9b210 */
uint F_00d9b210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9b210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d9b240 */
unsigned int F_00d9b240(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b240u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x18);
  }
  return 0;
}

/* ref: FUN_00d9b280 */
uint F_00d9b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b280u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9b2c0 */
uint F_00d9b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b2c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b300 */
uint F_00d9b300(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b340 */
uint F_00d9b340(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),iVar1 << 4);
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar2 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00d9b3c0 */
uint F_00d9b3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d9b340(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x18);
  }
  return (uint)this;
}

/* ref: FUN_00d9b410 */
unsigned int F_00d9b410(void)
{
  GEN_ENTER(0xd9b410u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b430 */
unsigned int F_00d9b430(void)
{
  GEN_ENTER(0xd9b430u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b450 */
unsigned int F_00d9b450(void)
{
  GEN_ENTER(0xd9b450u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b470 */
unsigned int F_00d9b470(void)
{
  GEN_ENTER(0xd9b470u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b490 */
unsigned int F_00d9b490(void)
{
  GEN_ENTER(0xd9b490u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b4b0 */
unsigned int F_00d9b4b0(void)
{
  GEN_ENTER(0xd9b4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b4d0 */
unsigned int F_00d9b4d0(void)
{
  GEN_ENTER(0xd9b4d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b4f0 */
unsigned int F_00d9b4f0(void)
{
  GEN_ENTER(0xd9b4f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b510 */
unsigned int F_00d9b510(void)
{
  GEN_ENTER(0xd9b510u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b530 */
unsigned int F_00d9b530(void)
{
  GEN_ENTER(0xd9b530u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b550 */
unsigned int F_00d9b550(void)
{
  GEN_ENTER(0xd9b550u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b570 */
unsigned int F_00d9b570(void)
{
  GEN_ENTER(0xd9b570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b580 */
uint F_00d9b580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b580u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9b5a0 */
unsigned int F_00d9b5a0(void)
{
  GEN_ENTER(0xd9b5a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b5b0 */
uint F_00d9b5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00d9b600 */
unsigned int F_00d9b600(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x10);
  }
  return 0;
}

/* ref: FUN_00d9b630 */
uint F_00d9b630(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b630u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9b680 */
uint F_00d9b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0x10);
  }
  return (uint)this;
}

/* ref: FUN_00d9b700 */
unsigned int F_00d9b700(void)
{
  GEN_ENTER(0xd9b700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b720 */
unsigned int F_00d9b720(void)
{
  GEN_ENTER(0xd9b720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b740 */
unsigned int F_00d9b740(void)
{
  GEN_ENTER(0xd9b740u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00d9b750 */
uint F_00d9b750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9b770 */
uint F_00d9b770(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b770u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x109944c));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9b790 */
uint F_00d9b790(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b790u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)*param_1)(param_1,0);
  return uVar1;
}

/* ref: FUN_00d9b7a0 */
uint F_00d9b7a0(void)
{
  GEN_ENTER(0xd9b7a0u, 0u, 0u, 0u, 0u);
  return 0x109944c;
}

/* ref: FUN_00d9b7c0 */
unsigned int F_00d9b7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[11])REFP(0x10e15e4));
  return 0;
}

/* ref: hkMemoryAllocator::vf3 */
uint F_00d9b7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,*param_1);
  return uVar1;
}

/* ref: hkMemoryAllocator::vf4 */
uint F_00d9b7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd9b7f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: hkMemoryAllocator::vf6 */
unsigned int F_00d9b800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9b800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,param_3);
      *(uint *)(param_1 + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: hkMemoryAllocator::vf7 */
unsigned int F_00d9b830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9b830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        ((code *)*(gen_code32 *)(*(int *)this + 8))(this,iVar1,param_3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return 0;
}

/* ref: hkMemoryAllocator::vf5 */
uint F_00d9b880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9b880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this,param_3);
  if (uVar1 != 0) {
    iVar2 = *param_3;
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    F_00da3710(uVar1,param_1,iVar2);
  }
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9b8d0 */
uint F_00d9b8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d9b8e0 */
uint F_00d9b8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x15da498) = param_1;
  return param_1;
}

/* ref: FUN_00d9b8f0 */
uint F_00d9b8f0(void)
{
  GEN_ENTER(0xd9b8f0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15da498);
}

/* ref: FUN_00d9b910 */
unsigned int F_00d9b910(unsigned int gen_a0)
{
  GEN_ENTER(0xd9b910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[24])REFP(0x113bcdc));
  return 0;
}

/* ref: hkMemorySystem::vf13 */
unsigned int F_00d9b920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemorySystem::vf14 */
unsigned int F_00d9b930(void)
{
  GEN_ENTER(0xd9b930u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemorySystem::vf5 */
uint F_00d9b940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkMemorySystem::vf6 */
uint F_00d9b950(void)
{
  GEN_ENTER(0xd9b950u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkMemorySystem::vf7 */
byte F_00d9b960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkMemorySystem::vf8 */
byte F_00d9b970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkMemorySystem::vf15 */
uint F_00d9b980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xd9b980u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((code *)*(gen_code32 *)(*(int *)this + 0x34))(this,pvVar1);
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x38))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar2;
}

/* ref: hkMemorySystem::vf16 */
unsigned int F_00d9b9c0(void)
{
  GEN_ENTER(0xd9b9c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkMemorySystem::vf17 */
uint F_00d9b9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkMemorySystem::vf18 */
uint F_00d9b9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 1;
}

/* ref: hkMemorySystem::vf19 */
unsigned int F_00d9b9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9b9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemorySystem::vf20 */
unsigned int F_00d9ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkMemorySystem::vf21 */
unsigned int F_00d9ba10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9ba10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkMemorySystem::vf22 */
uint F_00d9ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd9ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 1;
}

/* ref: hkMemorySystem::vf23 */
uint F_00d9ba30(void)
{
  GEN_ENTER(0xd9ba30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkMemorySystem::vf0 */
uint F_00d9ba40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ba40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  
  F_00d9b910(in_ecx);
  return ((uint)(uint)(in_ecx));
}

/* ref: FUN_00d9ba60 */
uint F_00d9ba60(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ba60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00d92510(param_1);
  F_00da1340();
  return 0;
}

/* ref: FUN_00d9ba80 */
uint F_00d9ba80(unsigned int gen_a0)
{
  GEN_ENTER(0xd9ba80u, gen_a0, 0u, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  *param_1 = REFG(undefined1, 0x15da4a0);
  return (uint)param_1;
}

/* ref: FUN_00d9baa0 */
unsigned int F_00d9baa0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9baa0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc30];
  DWORD * pDVar1;
  DWORD DVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  DWORD * pDVar4;
  
  gen_imp_GetSystemInfo(&(*(_SYSTEM_INFO *)(gen_frame + 0xc08)));
  pDVar1 = (*(DWORD * PTR32 *)&gen_args[0]);
  DVar2 = (*(_SYSTEM_INFO *)(gen_frame + 0xc08)).dwNumberOfProcessors;
  if (0xb < (int)(*(_SYSTEM_INFO *)(gen_frame + 0xc08)).dwNumberOfProcessors) {
    DVar2 = 0xc;
  }
  *(*(DWORD * PTR32 *)&gen_args[0]) = DVar2;
  hModule = gen_imp_LoadLibraryA("kernel32.dll");
  if (hModule != (HMODULE)0x0) {
    pFVar3 = gen_imp_GetProcAddress(hModule,"GetLogicalProcessorInformation");
    if (pFVar3 != (FARPROC)0x0) {
      (*(DWORD * PTR32 *)&gen_args[0]) = (DWORD *)0x0;
      ((code *)pFVar3)(0,&(*(DWORD * PTR32 *)&gen_args[0]));
      if ((*(DWORD * PTR32 *)&gen_args[0]) < (DWORD *)0xc01) {
        ((code *)pFVar3)(((undefined1 *)(gen_frame + 0x8)),&(*(DWORD * PTR32 *)&gen_args[0]));
        pDVar4 = (DWORD *)0x0;
        DVar2 = 0;
        if ((*(DWORD * PTR32 *)&gen_args[0]) != (DWORD *)0x0) {
          do {
            if (*(int *)((int)((int *)(gen_frame + 0xc)) + (int)pDVar4) == 0) {
              DVar2 = DVar2 + 1;
            }
            pDVar4 = pDVar4 + 6;
          } while (pDVar4 < (*(DWORD * PTR32 *)&gen_args[0]));
        }
        *pDVar1 = DVar2;
      }
    }
    gen_imp_FreeLibrary(hModule);
  }
  return 0;
}

/* ref: FUN_00d9bb50 */
uint F_00d9bb50(void)
{
  GEN_ENTER(0xd9bb50u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  if (pvVar1 != (LPVOID)0x0) {
    F_00da1380(pvVar1);
  }
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (pvVar1 != (LPVOID)0x0) {
    F_00d92510(0);
  }
  return 0;
}

/* ref: FUN_00d9bb90 */
uint F_00d9bb90(void)
{
  GEN_ENTER(0xd9bb90u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),8)));
  puVar2[1] = 0x10008;
  *puVar2 = (*(undefined * PTR32 (*)[4])REFP(0x113bda8));
  return (uint)puVar2;
}

/* ref: FUN_00d9bbc0 */
uint F_00d9bbc0(void)
{
  GEN_ENTER(0xd9bbc0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = &REFG(int, 0x15dff80);
  (*(int *)(gen_frame + 0x0)) = 0;
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000000;
  iVar4 = REFG(int, 0x15dff80);
  if (REFG(int, 0x15dff80) != 0) {
    do {
      if ((**(int * PTR32 *)(iVar4 + 0xc) == 0) && ((code *)*(gen_code32 *)(iVar4 + 4) != (code *)0x0)) {
        uVar2 = ((code *)*(gen_code32 *)(iVar4 + 4))();
        if (uVar2 != 0) {
          **(uint * PTR32 *)(iVar4 + 0xc) = uVar2;
          goto LAB_00d9bc04;
        }
        if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(int *)(gen_frame + 0x0)),4);
        }
        *(int *)((*(int *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = iVar4;
        (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
        iVar4 = *(int *)(iVar4 + 8);
        *(undefined4 *)(*piVar5 + 8) = 0;
        *piVar5 = iVar4;
      }
      else {
LAB_00d9bc04: ;
        piVar5 = (int *)(iVar4 + 8);
        iVar4 = *piVar5;
      }
      uVar2 = (*(uint *)(gen_frame + 0x4));
    } while (iVar4 != 0);
    while (uVar1 = uVar2, uVar2 != 0) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        iVar4 = *(int *)((*(int *)(gen_frame + 0x0)) + uVar1 * 4);
        uVar3 = ((code *)*(gen_code32 *)(iVar4 + 4))((*(int *)(gen_frame + 0x0)));
        uVar2 = (*(uint *)(gen_frame + 0x4));
        if (uVar3 != 0) {
          **(uint * PTR32 *)(iVar4 + 0xc) = uVar3;
          *piVar5 = iVar4;
          uVar2 = (*(uint *)(gen_frame + 0x4)) - 1;
          piVar5 = (int *)(iVar4 + 8);
          (*(uint *)(gen_frame + 0x4)) = uVar2;
          uVar2 = (*(uint *)(gen_frame + 0x4));
          if (uVar2 != uVar1) {
            *(undefined4 *)((*(int *)(gen_frame + 0x0)) + uVar1 * 4) = *(undefined4 *)((*(int *)(gen_frame + 0x0)) + uVar2 * 4);
          }
        }
      }
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return uVar2;
}

/* ref: FUN_00d9bcd0 */
uint F_00d9bcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9bcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  LPVOID pvVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  
  if (REFG(char, 0x15da4a0) == '\0') {
    F_00d9ba60(param_1);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),8)));
    puVar2[1] = 0x10008;
    *puVar2 = (*(undefined * PTR32 (*)[6])REFP(0x113bd5c));
    if (REFG(undefined4 * PTR32, 0x15dffa8) != (undefined4 *)0x0) {
      F_00d91840(REFG(undefined4 * PTR32, 0x15dffa8));
    }
    REFG(undefined4 * PTR32, 0x15dffa8) = puVar2;
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))
                               (*(int * PTR32 *)((int)pvVar1 + 0x2c),0x28)));
    *(undefined2 *)((int)pvVar3 + 4) = 0x28;
    pvVar3 = (undefined *)F_00db2ca0(pvVar3,param_2,param_3);
    if (REFG(void * PTR32, 0x15dff78) != (undefined *)0x0) {
      F_00d91840(REFG(void * PTR32, 0x15dff78));
    }
    REFG(void * PTR32, 0x15dff78) = pvVar3;
    F_00d9bbc0();
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15da49c) + 0xc))))(REFG(int * PTR32, 0x15da49c));
    F_009f0b80();
    REFG(char, 0x15da4a0) = '\x01';
  }
  return 0;
}

/* ref: FUN_00d9bda0 */
uint F_00d9bda0(void)
{
  GEN_ENTER(0xd9bda0u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  uint uVar2;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  for (iVar1 = REFG(int, 0x15dff80); uVar2 = (*(uint *)(gen_frame + 0x4)), iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if ((*(uint *)(gen_frame + 0x4)) == ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),4);
    }
    *(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + (*(uint *)(gen_frame + 0x4)) * 4) = iVar1;
    (*(uint *)(gen_frame + 0x4)) = (*(uint *)(gen_frame + 0x4)) + 1;
  }
  while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
    if (((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar2 * 4) + 0xc))))) != (undefined *)0x0) {
      F_00d91840(((undefined *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar2 * 4) + 0xc))))));
      **((undefined4 * PTR32 *)GEN_TOP((*(int *)((*(undefined1 * PTR32 *)(gen_frame + 0x0)) + uVar2 * 4) + 0xc))) = 0;
    }
  }
  (*(uint *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    (*(uint *)(gen_frame + 0x8)) = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) * 4);
  }
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00d9be90 */
uint F_00d9be90(void)
{
  GEN_ENTER(0xd9be90u, 0u, 0u, 0u, 0u);
  if (REFG(char, 0x15da4a0) != '\0') {
    F_00d918e0(0);
    F_00d9bda0();
    if ((REFG(char, 0x15dffac) != '\0') && (REFG(undefined * PTR32, 0x135278c) != (undefined *)0x0)) {
      (*(code *)REFG(undefined * PTR32, 0x135278c))();
      REFG(char, 0x15dffac) = '\0';
    }
    if (REFG(void * PTR32, 0x15dff78) != (undefined *)0x0) {
      F_00d91840(REFG(void * PTR32, 0x15dff78));
    }
    REFG(void * PTR32, 0x15dff78) = (undefined *)0x0;
    if (REFG(void * PTR32, 0x15dffa8) != (undefined *)0x0) {
      F_00d91840(REFG(void * PTR32, 0x15dffa8));
    }
    REFG(void * PTR32, 0x15dffa8) = (undefined *)0x0;
    F_00d9bb50();
    REFG(char, 0x15da4a0) = '\0';
  }
  return 0;
}

/* ref: FUN_00d9bf00 */
unsigned int F_00d9bf00(unsigned int gen_a0)
{
  GEN_ENTER(0xd9bf00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(void * PTR32, 0x15dff78) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15dff78));
    REFG(void * PTR32, 0x15dff78) = (undefined *)param_1;
    return 0;
  }
  REFG(void * PTR32, 0x15dff78) = (undefined *)param_1;
  return 0;
}

/* ref: FUN_00d9bf30 */
unsigned int F_00d9bf30(unsigned int gen_a0)
{
  GEN_ENTER(0xd9bf30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (REFG(void * PTR32, 0x15dffa8) != (undefined *)0x0) {
    F_00d91840(REFG(void * PTR32, 0x15dffa8));
    REFG(void * PTR32, 0x15dffa8) = (undefined *)param_1;
    return 0;
  }
  REFG(void * PTR32, 0x15dffa8) = (undefined *)param_1;
  return 0;
}

/* ref: FUN_00d9bfc0 */
uint F_00d9bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9bfc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d9bfe0 */
uint F_00d9bfe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9bfe0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9c020 */
unsigned int F_00d9c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9c020u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9c060 */
uint F_00d9c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9c060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d9c0a0 */
uint F_00d9c0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00d9c0d0 */
uint F_00d9c0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c0d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d9c100 */
uint F_00d9c100(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c100u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkNativeFileSystem::vf5 */
uint F_00d9c150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9c150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00dbea40(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d9c170 */
uint F_00d9c170(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d9c1b0 */
uint F_00d9c1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: hkDummySingleton::vf3 */
unsigned int F_00d9c210(void)
{
  GEN_ENTER(0xd9c210u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkDummySingleton::vf0 */
uint F_00d9c230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c230u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c290 */
uint F_00d9c290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  uVar1 = *(uint *)((int)this + 4);
  if (uVar1 != param_1) {
    uVar1 = *(uint *)(*(int *)this + uVar1 * 4);
    *(uint *)(*(int *)this + param_1 * 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00d9c2b0 */
uint F_00d9c2b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9c2b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d9c2f0 */
uint F_00d9c2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9c2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00d9c310 */
uint F_00d9c310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c310u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c350 */
uint F_00d9c350(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d9c380 */
uint F_00d9c380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkNativeFileSystem::vf0 */
uint F_00d9c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c3c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c400 */
uint F_00d9c400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c400u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9c440 */
uint F_00d9c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  *puVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d9c480 */
uint F_00d9c480(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c480u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c4c0 */
uint F_00d9c4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c4c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c500 */
uint F_00d9c500(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c500u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c540 */
uint F_00d9c540(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c540u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c580 */
uint F_00d9c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00d9c5a0 */
uint F_00d9c5a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c5a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00d9c610 */
uint F_00d9c610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c610u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00d9c6a0 */
uint F_00d9c6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9c6a0u, gen_a0, 0u, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  uint uVar1;
  
  gen_imp_OutputDebugStringA(param_1);
  uVar1 = F_00c5181b(&REFG(undefined, 0x113bdcc),param_1);
  return uVar1;
}

/* ref: FUN_00d9c6f0 */
unsigned int F_00d9c6f0(void)
{
  GEN_ENTER(0xd9c6f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = &REFG(undefined * PTR32, 0x1352290);
  return 0;
}

/* ref: FUN_00d9c700 */
uint F_00d9c700(void)
{
  GEN_ENTER(0xd9c700u, 0u, 0u, 0u, 0u);
  uint in_EAX = 0;
  
  if (REFG(undefined * PTR32 * PTR32, 0x15da4a4) == &REFG(undefined * PTR32, 0x13522a0)) {
    in_EAX = F_00db48c0(&REFG(undefined * PTR32, 0x13522a0));
  }
  REFG(undefined * PTR32 * PTR32, 0x15da4a4) = (undefined * PTR32 *)0x0;
  return in_EAX;
}

/* ref: FUN_00d9c720 */
uint F_00d9c720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this != (undefined *)0x0) {
    F_00da5ee0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00d9c780 */
uint F_00d9c780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9c780u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_3;
  if (iVar1 <= param_3) {
    iVar3 = iVar1;
  }
  if ((int)param_2 < iVar3) {
    uVar2 = param_2;
    do {
      if (*(char *)(*(int *)this + uVar2) == (char)param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c7c0 */
uint F_00d9c7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9c7c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00da0ee0(*(int *)this + param_2,param_1);
  if (uVar1 != 0) {
    return uVar1 - *(int *)this;
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c7f0 */
uint F_00d9c7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char * pcVar6;
  uint local_8;
  
  pcVar6 = *(char * PTR32 *)this;
  cVar4 = *pcVar6;
  local_8 = 0;
  uVar2 = local_8;
  do {
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar5 = 0;
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      cVar3 = pcVar6[iVar5];
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if (cVar3 != cVar4) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar4 = param_1[iVar1];
    }
    if (param_1[iVar5] == '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  } while( true );
}

/* ref: FUN_00d9c880 */
uint F_00d9c880(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9c880u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_3;
  if (iVar1 < param_3) {
    iVar3 = iVar1;
  }
  uVar2 = iVar3 - 1;
  if (param_2 <= (int)uVar2) {
    do {
      if (*(char *)(*(int *)this + uVar2) == (char)param_1) {
        return uVar2;
      }
      uVar2 = uVar2 - 1;
    } while (param_2 <= (int)uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00d9c8c0 */
uint F_00d9c8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9c8c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (uVar1 = F_00da0ee0(*(undefined4 *)this,param_1); uVar1 != 0;
      uVar1 = F_00da0ee0(uVar1 + 1,param_1)) {
    uVar2 = uVar1 - *(int *)this;
  }
  return uVar2;
}

/* ref: FUN_00d9c900 */
uint F_00d9c900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d9c920 */
uint F_00d9c920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00da0d70(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00d9c940 */
uint F_00d9c940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9c940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_2);
  *(bool *)param_1 = (int)uVar1 < 0;
  return param_1;
}

/* ref: FUN_00d9c960 */
uint F_00d9c960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d9c900(this,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00d9c980 */
uint F_00d9c980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*(char *)(iVar3 + param_1) != '\0'))) {
    if (pcVar2[iVar3] != *(char *)(iVar3 + param_1)) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return (uint)(*(char *)(iVar3 + param_1) == '\0');
}

/* ref: FUN_00d9c9c0 */
uint F_00d9c9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9c9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar3 = *(char * PTR32 *)this;
  cVar2 = *pcVar3;
  pcVar4 = param_1;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *pcVar4, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

/* ref: FUN_00d9ca20 */
uint F_00d9ca20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ca20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(param_1);
  if (*(int *)((int)this + 4) + -1 < (int)uVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*(int *)this + (*(int *)((int)this + 4) - uVar1) + -1 + iVar2))) !=
          *(char *)(iVar2 + param_1)) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: FUN_00d9ca70 */
uint F_00d9ca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = F_00da0e60(param_1);
  if (*(int *)((int)this + 4) + -1 < (int)uVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + (*(int *)((int)this + 4) - uVar2) + -1 + iVar4)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *(char *)(iVar4 + param_1);
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return 1;
}

/* ref: FUN_00d9caf0 */
uint F_00d9caf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9caf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (*(int *)((int)this + 4) == 1 || *(int *)((int)this + 4) + -1 < 0) {
    return 0;
  }
  do {
    if (*(char *)(*(int *)this + iVar1) == (char)param_1) {
      *(undefined1 *)(*(int *)this + iVar1) = (undefined1)param_2;
      uVar2 = 1;
      if (param_3 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)((int)this + 4) + -1);
  return uVar2;
}

/* ref: FUN_00d9cb40 */
unsigned int F_00d9cb40(unsigned int gen_a0)
{
  GEN_ENTER(0xd9cb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) != 1 && -1 < *(int *)((int)this + 4) + -1) {
    do {
      cVar1 = *(char *)(*(int *)this + iVar2);
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *(char *)(*(int *)this + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4) + -1);
  }
  return 0;
}

/* ref: FUN_00d9cb80 */
unsigned int F_00d9cb80(unsigned int gen_a0)
{
  GEN_ENTER(0xd9cb80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)((int)this + 4) != 1 && -1 < *(int *)((int)this + 4) + -1) {
    do {
      cVar1 = *(char *)(*(int *)this + iVar2);
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      *(char *)(*(int *)this + iVar2) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)((int)this + 4) + -1);
  }
  return 0;
}

/* ref: FUN_00d9cbc0 */
uint F_00d9cbc0(void)
{
  GEN_ENTER(0xd9cbc0u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4, 0x15da4a4) == 0) {
    F_00d9c6f0();
  }
  return REFG(undefined4, 0x15da4a4);
}

/* ref: FUN_00d9cbe0 */
unsigned int F_00d9cbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9cbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar1 = *(int *)((int)this + 4) + -1;
  iVar3 = param_1;
  if (iVar1 <= param_1) {
    iVar3 = iVar1;
  }
  if (0 < iVar3) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - iVar3;
    puVar2 = *(undefined1 * PTR32 *)this;
    iVar1 = *(int *)((int)this + 4);
    if (0 < iVar1) {
      do {
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

/* ref: FUN_00d9cc60 */
uint F_00d9cc60(unsigned int gen_a0)
{
  GEN_ENTER(0xd9cc60u, gen_a0, 0u, 0u, 0u);
  undefined4 in_edi = (undefined4)gen_a0;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(in_edi);
  iVar2 = uVar1 + 1;
  uVar1 = F_00d9cbc0();
  uVar1 = F_00d92460(uVar1,iVar2);
  F_00da0e20(uVar1,in_edi);
  return uVar1;
}

/* ref: FUN_00d9cc90 */
uint F_00d9cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9cc90u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(param_2);
  if ((int)in_eax < (int)uVar1) {
    uVar1 = in_eax;
  }
  iVar3 = uVar1 + 1;
  uVar2 = F_00d9cbc0();
  uVar2 = F_00d92460(uVar2,iVar3);
  F_00da0e40(uVar2,param_2,uVar1);
  *(undefined1 *)(uVar2 + uVar1) = 0;
  return uVar2;
}

/* ref: FUN_00d9cce0 */
uint F_00d9cce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9cce0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_esi = (uint *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  uVar2 = *in_esi;
  if ((uVar2 & 0xfffffffe) != in_eax) {
    if ((uVar2 & 1) != 0) {
      iVar1 = uVar2 - 1;
      uVar2 = F_00d9cbc0();
      uVar2 = F_00d924b0(uVar2,iVar1);
    }
    if (in_eax != 0) {
      if (param_3 == -1) {
        uVar2 = F_00d9cc60(in_eax);
        *in_esi = uVar2 + 1;
        return uVar2 + 1;
      }
      uVar2 = F_00d9cc90(param_3,in_eax);
      *in_esi = uVar2 + 1;
      return uVar2 + 1;
    }
    *in_esi = 0;
  }
  return uVar2;
}

/* ref: FUN_00d9cd40 */
uint F_00d9cd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9cd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9cd60 */
uint F_00d9cd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9cd60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  F_00d9cce0(param_1,this,param_2);
  return (uint)this;
}

/* ref: FUN_00d9cd90 */
uint F_00d9cd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9cd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9cde0 */
uint F_00d9cde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9cde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d9cce0(param_1,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9ce00 */
uint F_00d9ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  F_00d9cce0(*param_1 & 0xfffffffe,this,0xffffffff);
  return (uint)this;
}

/* ref: FUN_00d9ce20 */
uint F_00d9ce20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9ce20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d9cce0(param_1,this,param_2);
  return uVar1;
}

/* ref: FUN_00d9ce40 */
uint F_00d9ce40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ce40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this & 0xfffffffe;
  if (uVar1 != param_1) {
    uVar1 = F_00d9cce0(0,this,0xffffffff);
    *(uint *)this = param_1;
  }
  return uVar1;
}

/* ref: FUN_00d9ce80 */
uint F_00d9ce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9ce80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *(undefined4 *)((int)this + 4) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(uVar2 + *(int *)this) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00d9cf30 */
uint F_00d9cf30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9cf30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)this;
  uVar3 = F_00d9cbc0();
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(uVar3,param_2,4);
  }
  *(undefined4 *)(*param_2 + param_2[1] * 4) = uVar1;
  param_2[1] = param_2[1] + 1;
  uVar3 = param_2[1];
  for (uVar4 = F_00d9c780(this,param_1,0,0x7fffffff); -1 < (int)uVar4;
      uVar4 = F_00d9c780(this,param_1,uVar4 + 1,0x7fffffff)) {
    *(undefined1 *)(uVar4 + *(int *)this) = 0;
    iVar2 = *(int *)this;
    uVar3 = F_00d9cbc0();
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(uVar3,param_2,4);
    }
    *(uint *)(*param_2 + param_2[1] * 4) = iVar2 + uVar4 + 1;
    param_2[1] = param_2[1] + 1;
    uVar3 = param_2[1];
  }
  return uVar3;
}

/* ref: FUN_00d9cff0 */
uint F_00d9cff0(unsigned int gen_a0)
{
  GEN_ENTER(0xd9cff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * puVar1;
  uint uVar2;
  
  uVar2 = F_00d9cbc0();
  if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *(undefined4 *)((int)this + 4) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: FUN_00d9d030 */
uint F_00d9d030(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d030u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  int iVar4;
  uint uVar5;
  
  while( true ) {
    while( true ) {
      uVar5 = param_1[2] & 0x3fffffff;
      uVar3 = F_00da0cd0(*param_1,uVar5,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar5 = uVar5 * 2;
      if (uVar5 < 0x100) {
        uVar5 = 0xff;
      }
      iVar1 = uVar5 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(uVar3,param_1,iVar4,1);
      }
      param_1[1] = iVar1;
      *(undefined1 *)(uVar5 + *param_1) = 0;
    }
    if ((int)uVar3 < (int)uVar5) break;
    iVar1 = uVar3 + 1;
    uVar5 = F_00d9cbc0();
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar5,param_1,iVar4,1);
    }
    param_1[1] = iVar1;
    *(undefined1 *)(uVar3 + *param_1) = 0;
  }
  iVar1 = uVar3 + 1;
  uVar5 = F_00d9cbc0();
  if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
    iVar4 = (param_1[2] & 0x3fffffffU) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(uVar5,param_1,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar2);
  }
  param_1[1] = iVar1;
  *(undefined1 *)(uVar3 + *param_1) = 0;
  return uVar5;
}

/* ref: FUN_00d9d120 */
unsigned int F_00d9d120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd9d120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = param_1;
  ((int *)(gen_frame + 0x8))[2] = param_3;
  ((int *)(gen_frame + 0x8))[1] = param_2;
  ((int *)(gen_frame + 0x8))[4] = param_5;
  iVar7 = 0;
  iVar5 = *(int *)((int)this + 4) + -1;
  ((int *)(gen_frame + 0x8))[3] = param_4;
  iVar6 = 0;
  (*(undefined8 *)(gen_frame + 0x24)) = 0;
  (*(undefined8 *)(gen_frame + 0x2c)) = 0;
  (*(undefined8 *)(gen_frame + 0x34)) = 0;
  ((int *)(gen_frame + 0x8))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_6;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  iVar3 = iVar5;
  iVar4 = param_1;
  while (iVar4 != 0) {
    uVar2 = F_00da0e60(iVar4);
    iVar3 = iVar3 + uVar2;
    iVar6 = iVar6 + 1;
    *(uint *)((int)&(*(undefined8 *)(gen_frame + 0x24)) + iVar7) = uVar2;
    iVar7 = iVar6 * 4;
    iVar4 = ((int *)(gen_frame + 0x8))[(int)(iVar6)];
  }
  iVar7 = iVar3 + 1;
  uVar2 = F_00d9cbc0();
  uVar8 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar8 < iVar7) {
    iVar4 = uVar8 * 2;
    if (iVar4 <= iVar7) {
      iVar4 = iVar7;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *(int *)((int)this + 4) = iVar7;
  *(undefined1 *)(iVar3 + *(int *)this) = 0;
  iVar7 = 0;
  param_1 = 0;
  iVar3 = param_1;
  while (iVar1 != 0) {
    iVar4 = *(int *)((int)&(*(undefined8 *)(gen_frame + 0x24)) + iVar7);
    F_00da1010(*(int *)this + iVar5,iVar1,iVar4);
    iVar3 = iVar3 + 1;
    iVar7 = iVar3 * 4;
    iVar5 = iVar5 + iVar4;
    iVar1 = ((int *)(gen_frame + 0x8))[(int)(iVar3)];
  }
  return 0;
}

/* ref: FUN_00d9d230 */
unsigned int F_00d9d230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd9d230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  F_00d9cff0(this);
  F_00d9d120(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return 0;
}

/* ref: FUN_00d9d260 */
unsigned int F_00d9d260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (0 < param_1) {
    uVar2 = (*(int *)((int)this + 4) - param_1) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    uVar3 = F_00d9cbc0();
    uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar4 < iVar1) {
      iVar5 = uVar4 * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar3,this,iVar5,1);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(uVar2 + *(int *)this) = 0;
  }
  return 0;
}

/* ref: FUN_00d9d2c0 */
uint F_00d9d2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9d2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  uint uVar4;
  int iVar5;
  
  if (param_1 != 0) {
    F_00da38f0(*(int *)this,param_1 + *(int *)this,param_2);
  }
  iVar1 = param_2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    bVar2 = F_00d95690(uVar3,this,iVar5,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  return uVar3;
}

/* ref: FUN_00d9d320 */
uint F_00d9d320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9d320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_00da0e60(param_1);
  }
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(uVar2 + *(int *)this) = 0;
  uVar2 = F_00da3710(*(undefined4 *)this,param_1,uVar2);
  return uVar2;
}

/* ref: FUN_00d9d390 */
uint F_00d9d390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9d390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = F_00da0e60(param_1);
    }
    iVar5 = *(int *)((int)this + 4) + -1;
    iVar1 = *(int *)((int)this + 4) + param_2;
    uVar2 = F_00d9cbc0();
    uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(uVar2,this,iVar4,1);
    }
    *(int *)((int)this + 4) = iVar1;
    *(undefined1 *)(iVar5 + param_2 + *(int *)this) = 0;
    uVar2 = F_00da3710(*(int *)this + iVar5,param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00d9d490 */
uint F_00d9d490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00d9ee80(this,param_1);
  return (uint)this;
}

/* ref: FUN_00d9d4b0 */
uint F_00d9d4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != 0) {
    uVar1 = F_00da0e60(param_1);
    iVar3 = *(int *)((int)this + 4) + -1;
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this,uVar2,iVar3,param_1,uVar1);
  }
  return (uint)this;
}

/* ref: FUN_00d9d4f0 */
unsigned int F_00d9d4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd9d4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (param_2 != 0) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = F_00da0e60(param_2);
    }
    uVar2 = F_00d9cbc0();
    F_00d9eb80(this,uVar2,param_1,param_2,uVar1);
  }
  return 0;
}

/* ref: FUN_00d9d530 */
unsigned int F_00d9d530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9d530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d9d4f0(this,0,param_1,param_2);
  return 0;
}

/* ref: FUN_00d9d550 */
uint F_00d9d550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  if (param_1 == 0) {
    uVar2 = F_00d9cbc0();
    if ((*(uint *)((int)this + 8) & 0x3fffffff) == 0) {
      F_00d95690(uVar2,this,1,1);
    }
    *(undefined4 *)((int)this + 4) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = F_00d9cbc0();
  uVar4 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar5 = uVar4 * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar3,this,iVar5,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(uVar2 + *(int *)this) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: FUN_00d9d610 */
uint F_00d9d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  F_00d9ce80(this,*param_1 & 0xfffffffe);
  return (uint)this;
}

/* ref: FUN_00d9d640 */
uint F_00d9d640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd9d640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined1 * PTR32 *)this = (undefined1 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  F_00d9d120(this,param_1,param_2,param_3,param_4,param_5,param_6);
  return (uint)this;
}

/* ref: FUN_00d9d690 */
uint F_00d9d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd9d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  iVar1 = param_2 + 1;
  uVar2 = F_00d9cbc0();
  uVar3 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(uVar2,this,iVar4,1);
  }
  *(int *)((int)this + 4) = iVar1;
  *(undefined1 *)(param_2 + *(int *)this) = 0;
  F_00da1010(*(undefined4 *)this,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00d9d700 */
uint F_00d9d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd9d700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(int *)this = (int)this + 0xc;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0x80000080;
  F_00d9ee80(this,param_1);
  return (uint)this;
}

/* ref: FUN_00d9d730 */
uint F_00d9d730(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xd9d730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int iVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(int *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  uVar2 = F_00d9cbc0();
  if (((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) == 0) {
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),1,1);
  }
  (*(int *)(gen_frame + 0x4)) = 1;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  *(*(undefined1 * PTR32 *)(gen_frame + 0x0)) = 0;
  while( true ) {
    while( true ) {
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar3 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar2 = uVar2 * 2;
      if (uVar2 < 0x100) {
        uVar2 = 0xff;
      }
      iVar1 = uVar2 + 1;
      uVar3 = F_00d9cbc0();
      if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
        iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (iVar5 <= iVar1) {
          iVar5 = iVar1;
        }
        F_00d95690(uVar3,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
      }
      (*(int *)(gen_frame + 0x4)) = iVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar2] = 0;
    }
    if ((int)uVar3 < (int)uVar2) break;
    iVar1 = uVar3 + 1;
    uVar2 = F_00d9cbc0();
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
      iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
      }
      F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
    }
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  }
  iVar1 = uVar3 + 1;
  uVar2 = F_00d9cbc0();
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
    iVar5 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar5 <= iVar1) {
      iVar5 = iVar1;
    }
    F_00d95690(uVar2,&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar5,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  F_00d9d390(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
  piVar4 = (int *)F_00d9cbc0();
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)));
  }
  return (uint)piVar4;
}

