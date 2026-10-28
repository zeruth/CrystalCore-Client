#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d72db0 */
GEN_FRAME uint GEN_THISCALL F_00d72db0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 0x34) + *(int *)((int)this + param_1 * 4 + 0x40) * 2;
}

/* ref: FUN_00d72dd0 */
GEN_FRAME uint GEN_THISCALL F_00d72dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 100) + *(int *)((int)this + param_1 * 4 + 0x70) * 4;
}

/* ref: FUN_00d72df0 */
GEN_FRAME uint GEN_THISCALL F_00d72df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + param_1 * 4 + 0x40);
  if (param_1 == 8) {
    return (*(int *)((int)this + 0x38) - 8) - iVar1;
  }
  return *(int *)((int)this + param_1 * 4 + 0x44) - iVar1;
}

/* ref: FUN_00d72e40 */
GEN_FRAME uint GEN_THISCALL F_00d72e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x40) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72e70 */
GEN_FRAME uint GEN_THISCALL F_00d72e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x34) + *(int *)((int)this + 0x44) * 2;
  return CONCAT22(*(undefined2 *)(iVar1 + 2 + param_1 * 4),*(undefined2 *)(iVar1 + param_1 * 4));
}

/* ref: FUN_00d72ea0 */
GEN_FRAME uint GEN_THISCALL F_00d72ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)param_2;
}

/* ref: FUN_00d72ed0 */
GEN_FRAME uint GEN_THISCALL F_00d72ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72ed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0x94;
  return param_2;
}

/* ref: FUN_00d72ef0 */
GEN_FRAME uint GEN_THISCALL F_00d72ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d72f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d72f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd72f50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_00d72f60 */
GEN_FRAME unsigned int F_00d72f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d72fb0 */
GEN_FRAME uint GEN_THISCALL F_00d72fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
GEN_FRAME uint GEN_THISCALL F_00d72fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
GEN_FRAME uint GEN_THISCALL F_00d73000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
GEN_FRAME uint GEN_THISCALL F_00d73040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d73070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d730a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)param_2;
}

/* ref: FUN_00d730d0 */
GEN_FRAME uint F_00d730d0(unsigned int gen_a0)
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
  return (uint)param_1;
}

/* ref: FUN_00d73130 */
GEN_FRAME uint F_00d73130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  return (uint)param_4;
}

/* ref: FUN_00d73290 */
GEN_FRAME uint GEN_THISCALL F_00d73290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d732c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d73320 */
GEN_FRAME uint GEN_THISCALL F_00d73320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d73340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d73360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd73360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d733a0 */
GEN_FRAME uint GEN_THISCALL F_00d733a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d733c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d73420 */
GEN_FRAME uint GEN_THISCALL F_00d73420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d73440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_NOFRAME uint GEN_THISCALL F_00d73460(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d734a0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00d73540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd73540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d91540((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: hkaAnimation::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00d73560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd73560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaAnimation::vf10 */
GEN_NOFRAME uint F_00d73570(void)
{
  GEN_ENTER(0xd73570u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf11 */
GEN_NOFRAME uint F_00d73580(void)
{
  GEN_ENTER(0xd73580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf16 */
GEN_NOFRAME byte F_00d73590(void)
{
  GEN_ENTER(0xd73590u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf17 */
GEN_NOFRAME uint F_00d735a0(void)
{
  GEN_ENTER(0xd735a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimation::vf18 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d735b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd735b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: hkaAnimation::vf14 */
GEN_FRAME int GEN_THISCALL F_00d735c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xd735c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
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
          iVar4 = iVar4 - 1;
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
          iVar7 = iVar7 - 1;
        } while (iVar7 != 0);
      }
      iVar6 = iVar6 + 0x10;
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) - 1);
    } while (param_2 != 0.0);
  }
  return iVar3;
}

/* ref: hkaAnimation::vf15 */
GEN_FRAME uint GEN_THISCALL F_00d736c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd736c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
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
            *(undefined2 *)(puVar8 - 1) = (*(undefined2 *)((char *)&(*(float *)&gen_args[2]) + 0));
            iVar4 = *(int *)(iVar6 + 4);
            *puVar8 = *(undefined4 *)(iVar4 + local_c * 8);
            F_00d91540(puVar8 + 1 GEN_EDX_FWD,iVar4 + local_c * 8 + 4);
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
GEN_FRAME uint GEN_THISCALL F_00d737c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,"getDataChunks not implemented for this type of animation");
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x54e32124,((undefined1 *)(gen_frame + 0x0)),"Animation\\hkaAnimation.cpp",0x77);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkaAnimation::vf4 */
GEN_FRAME uint GEN_THISCALL F_00d73820(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xd73820u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
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
    local_8 = F_00d94390(pvVar4 GEN_EDX_ARG,uVar8);
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
    local_c = (undefined4 *)F_00d94390(pvVar4 GEN_EDX_ARG,uVar9);
  }
  else {
    *(uint *)((int)pvVar4 + 0xc) = (int)local_c + uVar9;
  }
  ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0xc))(param_1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),local_8,local_c);
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
      param_2 = gen_bits2f((int)gen_fl2bits(param_2) - 1);
    } while (param_2 != 0.0);
  }
  if (0 < param_5) {
    puVar6 = local_c;
    iVar7 = param_5;
    do {
      *((undefined4 *)GEN_TOP(((param_6 - (int)local_c) + (int)puVar6))) = *puVar6;
      puVar6 = puVar6 + 1;
      iVar7 = iVar7 - 1;
    } while (iVar7 != 0);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if (((*(int *)((int)pvVar4 + 8) < (int)uVar9) ||
      (uVar9 + (int)local_c != *(int *)((int)pvVar4 + 0xc))) ||
     (*(undefined4 * PTR32 *)((int)pvVar4 + 0x14) == local_c)) {
    F_00d945c0(pvVar4 GEN_EDX_ARG,local_c,uVar9);
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
  uVar8 = F_00d945c0(pvVar4 GEN_EDX_ARG,local_8,uVar8);
  return uVar8;
}

/* ref: FUN_00d739c0 */
GEN_FRAME uint GEN_THISCALL F_00d739c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
    F_00d919e0(*(undefined * PTR32 *)(param_1 + 0x18) GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)((int)this + 0x18) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x18) GEN_EDX_ARG);
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
  local_10 = (iVar8 - iVar1) - 1;
  if (-1 < local_10) {
    piVar7 = ((int *)GEN_TOP((iVar1 * 0x10 + *(int *)((int)this + 0x1c) + 4 + local_10 * 0x10)));
    do {
      iVar8 = piVar7[1] - 1;
      if (-1 < iVar8) {
        pvVar6 = (undefined *)(*piVar7 + 4 + iVar8 * 8);
        do {
          F_00d91510(pvVar6 GEN_EDX_ARG);
          pvVar6 = (undefined *)((int)pvVar6 - 8);
          iVar8 = iVar8 - 1;
        } while (-1 < iVar8);
      }
      iVar8 = piVar7[2];
      piVar7[1] = 0;
      if (-1 < iVar8) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar7,iVar8 * 8);
      }
      *piVar7 = 0;
      piVar7[2] = ((int)0x80000000);
      F_00d91510(piVar7 - 1 GEN_EDX_ARG);
      local_10 = local_10 - 1;
      piVar7 = piVar7 - 4;
    } while (-1 < local_10);
  }
  pvVar6 = *(undefined * PTR32 *)((int)this + 0x1c);
  if (0 < local_8) {
    iVar8 = *(int *)(param_1 + 0x1c) - (int)pvVar6;
    param_1 = local_8;
    do {
      F_00d73fe0(pvVar6 GEN_EDX_ARG,iVar8 + (int)pvVar6);
      pvVar6 = (undefined *)((int)pvVar6 + 0x10);
      param_1 = param_1 - 1;
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
      F_00d87850(pvVar6 GEN_EDX_ARG,iVar5 + (int)pvVar6);
    }
    pvVar6 = (undefined *)((int)pvVar6 + 0x10);
    iVar8 = iVar8 - 1;
  } while (iVar8 != 0);
  *(int *)((int)this + 0x20) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73b90 */
GEN_FRAME unsigned int GEN_THISCALL F_00d73b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd73b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_ARG);
    *(undefined4 *)this = *param_1;
    return;
  }
  *(undefined4 *)this = *param_1;
  return;
}

/* ref: FUN_00d73bd0 */
GEN_FRAME uint GEN_THISCALL F_00d73bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd73bd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d73bf0 */
GEN_FRAME unsigned int F_00d73bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      *(undefined4 *)((int)this - 4) = *(undefined4 *)(param_2 + iVar1 * 8);
      F_00d91540(this GEN_EDX_ARG,(param_2 - param_1) + (int)this);
      iVar1 = iVar1 + 1;
      this = (undefined *)((int)this + 8);
    } while (iVar1 < param_3);
  }
  return;
}

/* ref: FUN_00d73c40 */
GEN_FRAME uint GEN_THISCALL F_00d73c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd73c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_00d914e0((undefined *)((int)this + 4) GEN_EDX_FWD,param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00d73c90 */
GEN_FRAME uint GEN_THISCALL F_00d73c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d73cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
        F_00d87850(this GEN_EDX_ARG,(param_3 - (int)param_1) + (int)this);
      }
      this = (undefined *)((int)this + 0x10);
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d73d00 */
GEN_FRAME uint GEN_THISCALL F_00d73d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d73d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
        F_00d914e0(puVar2 + 1 GEN_EDX_ARG,(param_3 - (int)param_1) + (int)(puVar2 + 1));
      }
      puVar2 = puVar2 + 2;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d73da0 */
GEN_FRAME uint GEN_THISCALL F_00d73da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  iVar4 = (iVar4 - iVar1) - 1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5 GEN_EDX_ARG);
      pvVar5 = (undefined *)((int)pvVar5 - 8);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_2;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 - 4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5 GEN_EDX_ARG,(iVar4 - iVar7) + (int)pvVar5);
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
      F_00d914e0(puVar2 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73ec0 */
GEN_FRAME uint GEN_THISCALL F_00d73ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  iVar4 = (iVar4 - iVar1) - 1;
  if (-1 < iVar4) {
    pvVar5 = (undefined *)(*(int *)this + iVar1 * 8 + 4 + iVar4 * 8);
    do {
      F_00d91510(pvVar5 GEN_EDX_ARG);
      pvVar5 = (undefined *)((int)pvVar5 - 8);
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  iVar4 = *param_1;
  iVar7 = *(int *)this;
  iVar6 = 0;
  if (0 < local_8) {
    pvVar5 = (undefined *)(iVar7 + 4);
    do {
      *(undefined4 *)((int)pvVar5 - 4) = *(undefined4 *)(iVar4 + iVar6 * 8);
      F_00d91540(pvVar5 GEN_EDX_ARG,(iVar4 - iVar7) + (int)pvVar5);
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
      F_00d914e0(puVar2 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar2 + 1));
    }
    puVar2 = puVar2 + 2;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d73fe0 */
GEN_FRAME uint GEN_THISCALL F_00d73fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  
  F_00d91540(this GEN_EDX_FWD,param_1);
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
  iVar5 = (iVar5 - iVar1) - 1;
  if (-1 < iVar5) {
    pvVar4 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar1 * 8 + 4 + iVar5 * 8)));
    do {
      F_00d91510(pvVar4 GEN_EDX_ARG);
      pvVar4 = (undefined *)((int)pvVar4 - 8);
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  iVar5 = *(int *)((int)this + 4);
  iVar7 = *(int *)(param_1 + 4);
  iVar6 = 0;
  if (0 < local_8) {
    pvVar4 = (undefined *)(iVar5 + 4);
    do {
      *(undefined4 *)((int)pvVar4 - 4) = *(undefined4 *)(iVar7 + iVar6 * 8);
      F_00d91540(pvVar4 GEN_EDX_ARG,(iVar7 - iVar5) + (int)pvVar4);
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
      F_00d914e0(puVar3 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar3 + 1));
    }
    puVar3 = puVar3 + 2;
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(int *)((int)this + 8) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74100 */
GEN_FRAME unsigned int F_00d74100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      F_00d91540(piVar5 - 1 GEN_EDX_ARG,local_10);
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
      iVar7 = (iVar7 - iVar2) - 1;
      if (-1 < iVar7) {
        local_8 = (undefined *)(*piVar5 + iVar2 * 8 + 4 + iVar7 * 8);
        do {
          F_00d91510(local_8 GEN_EDX_ARG);
          local_8 = (undefined *)((int)local_8 - 8);
          iVar7 = iVar7 - 1;
        } while (-1 < iVar7);
      }
      iVar7 = *(int *)(iVar6 + (int)piVar5);
      iVar3 = *piVar5;
      iVar8 = 0;
      if (0 < param_3) {
        this = (undefined *)(iVar3 + 4);
        do {
          *(undefined4 *)((int)this - 4) = *(undefined4 *)(iVar7 + iVar8 * 8);
          F_00d91540(this GEN_EDX_ARG,(iVar7 - iVar3) + (int)this);
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
            F_00d914e0(puVar4 + 1 GEN_EDX_ARG,iVar7 + (int)(puVar4 + 1));
          }
          puVar4 = puVar4 + 2;
          param_3 = param_3 - 1;
        } while (param_3 != 0);
      }
      local_10 = local_10 + 0x10;
      piVar5[1] = iVar2;
      piVar5 = piVar5 + 4;
      local_14 = local_14 - 1;
    } while (local_14 != 0);
  }
  return;
}

/* ref: FUN_00d74250 */
GEN_FRAME uint GEN_THISCALL F_00d74250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  param_1 = (iVar5 - iVar1) - 1;
  if (-1 < param_1) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + param_1 * 0x10);
    do {
      iVar5 = piVar4[1] - 1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3 GEN_EDX_ARG);
          pvVar3 = (undefined *)((int)pvVar3 - 8);
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
      iVar5 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,iVar5 * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 - 1 GEN_EDX_ARG);
      param_1 = param_1 - 1;
      piVar4 = piVar4 - 4;
    } while (-1 < param_1);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_2 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 - 1;
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
      F_00d87850(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d743b0 */
GEN_FRAME uint GEN_THISCALL F_00d743b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  local_14 = (iVar5 - iVar1) - 1;
  if (-1 < local_14) {
    piVar4 = (int *)(iVar1 * 0x10 + *(int *)this + 4 + local_14 * 0x10);
    do {
      iVar5 = piVar4[1] - 1;
      if (-1 < iVar5) {
        pvVar3 = (undefined *)(*piVar4 + 4 + iVar5 * 8);
        do {
          F_00d91510(pvVar3 GEN_EDX_ARG);
          pvVar3 = (undefined *)((int)pvVar3 - 8);
          iVar5 = iVar5 - 1;
        } while (-1 < iVar5);
      }
      iVar5 = piVar4[2];
      piVar4[1] = 0;
      if (-1 < iVar5) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*piVar4,iVar5 * 8);
      }
      *piVar4 = 0;
      piVar4[2] = ((int)0x80000000);
      F_00d91510(piVar4 - 1 GEN_EDX_ARG);
      local_14 = local_14 - 1;
      piVar4 = piVar4 - 4;
    } while (-1 < local_14);
  }
  pvVar3 = *(undefined * PTR32 *)this;
  if (0 < local_8) {
    iVar6 = *param_1 - (int)pvVar3;
    iVar5 = local_8;
    do {
      F_00d73fe0(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
      pvVar3 = (undefined *)((int)pvVar3 + 0x10);
      iVar5 = iVar5 - 1;
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
      F_00d87850(pvVar3 GEN_EDX_ARG,iVar6 + (int)pvVar3);
    }
    pvVar3 = (undefined *)((int)pvVar3 + 0x10);
    iVar5 = iVar5 - 1;
  } while (iVar5 != 0);
  *(int *)((int)this + 4) = iVar1;
  return (uint)this;
}

/* ref: FUN_00d74510 */
GEN_NOFRAME uint GEN_THISCALL F_00d74510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd74510u, gen_a0, 0u, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  *in_ecx = 0x100;
  *(undefined1 *)(in_ecx + 1) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00d74590 */
GEN_FRAME uint F_00d74590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd74590u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_3 << 4 | param_2) * 4 | param_1;
}

/* ref: FUN_00d745b0 */
GEN_FRAME byte F_00d745b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd745b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (char)param_2 * '\x02' | (byte)param_1;
}

/* ref: FUN_00d745d0 */
GEN_FRAME uint F_00d745d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd745d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512dc))[(int)(param_1)])))(param_2,param_3);
  return uVar1;
}

/* ref: FUN_00d745f0 */
GEN_FRAME byte F_00d745f0(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd745f0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (byte)(int)(((param_3 - param_1) / (param_2 - param_1)) * REFG(float, 0x10a0d8c));
}

/* ref: FUN_00d74620 */
GEN_FRAME ushort F_00d74620(float gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd74620u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (ushort)(int)(((param_3 - param_1) / (param_2 - param_1)) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d74650 */
GEN_FRAME uint F_00d74650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (*((code *)GEN_TOP((&REFG(undefined * PTR32, 0x13512f4))[(int)(param_1)])))(param_2);
  return uVar1;
}

/* ref: FUN_00d74670 */
GEN_FRAME unsigned int F_00d74670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      return;
    }
  }
  return;
}

/* ref: FUN_00d74700 */
GEN_NOFRAME uint GEN_THISCALL F_00d74700(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd74700u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10947f8)));
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
GEN_FRAME unsigned int F_00d74740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
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
      puVar1 = (undefined4 *)(*param_6 - 0x10 + iVar7);
      *puVar1 = puVar6[-2];
      puVar1[1] = uVar4;
      puVar1[2] = uVar3;
      puVar1[3] = 0;
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      uVar5 = puVar6[5];
      puVar1 = (undefined4 *)(*param_7 - 0x10 + iVar7);
      *puVar1 = puVar6[2];
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      puVar1 = puVar6 + 6;
      uVar3 = puVar6[7];
      uVar4 = puVar6[8];
      puVar6 = puVar6 + param_2 * 0xc;
      iVar8 = iVar8 - 1;
      puVar2 = (undefined4 *)(*param_8 - 0x10 + iVar7);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = 0;
    } while (iVar8 != 0);
  }
  return;
}

/* ref: FUN_00d747f0 */
GEN_FRAME unsigned int F_00d747f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
      iVar5 = iVar5 - 1;
      puVar1 = (undefined4 *)(*param_6 - 0x10 + iVar4);
      *puVar1 = uVar2;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
    } while (iVar5 != 0);
  }
  return;
}

/* ref: FUN_00d74850 */
GEN_NOFRAME byte F_00d74850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xd74850u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
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
GEN_FRAME unsigned int F_00d74940(unsigned int gen_a0, unsigned int gen_a1)
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
      iVar7 = iVar7 - 1;
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
GEN_FRAME uint F_00d749a0(unsigned int gen_a0, unsigned int gen_a1)
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
    iVar2 = iVar2 - 1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_minps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 - 1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d749f0 */
GEN_FRAME uint F_00d749f0(unsigned int gen_a0, unsigned int gen_a1)
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
    iVar2 = iVar2 - 1;
    do {
      pauVar1 = pauVar1 + 1;
      gen_maxps(&(auVar3), &(*param_1), &(*pauVar1));
      iVar2 = iVar2 - 1;
      memcpy(&(*param_1), &(auVar3), sizeof(auVar3) < sizeof(*param_1) ? sizeof(auVar3) : sizeof(*param_1));
    } while (iVar2 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_00d74a40 */
GEN_FRAME uint F_00d74a40(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint F_00d74ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd74ab0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  ushort uVar1;
  byte * pbVar2;
  
  if ((param_1 & 0xf0) != 0) {
    F_00d74a40(2,param_2);
    pbVar2 = (byte *)*param_2;
    uVar1 = *(ushort *)(pbVar2 - 2);
    *param_2 = (int)(pbVar2 + (uint)uVar1 + *pbVar2 + 3);
    return (uint)uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00d74af0 */
GEN_FRAME uint F_00d74af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      param_1 = param_1 - 1;
    } while (param_1 != 0);
    if ((iVar3 != 0) && (uVar2 = param_2, -1 < (int)param_2)) {
      uVar2 = param_2 + 1;
      local_8 = uVar2;
      do {
        iVar5 = iVar3;
        if (0 < iVar3) {
          do {
            uVar2 = F_00d74a40((param_3 != 0) + 1,param_4);
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
        }
        local_8 = local_8 - 1;
      } while (local_8 != 0);
    }
  }
  return uVar2;
}

/* ref: FUN_00d74ba0 */
GEN_FRAME unsigned int F_00d74ba0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xd74ba0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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
    if (3 < param_1 - 1) {
      fVar6 = (float)param_1;
      fVar5 = param_4 - param_3;
      iVar4 = 3;
      pfVar2 = pfVar3 + 3;
      do {
        pfVar2[-2] = ((float)iVar1 / fVar6) * fVar5 + param_3;
        pfVar2[-1] = ((float)(iVar4 - 1) / fVar6) * fVar5 + param_3;
        *pfVar2 = ((float)iVar4 / fVar6) * fVar5 + param_3;
        pfVar2[1] = ((float)(iVar4 + 1) / fVar6) * fVar5 + param_3;
        iVar1 = iVar1 + 4;
        pfVar2 = pfVar2 + 4;
        iVar4 = iVar4 + 4;
      } while (iVar1 < param_1 - 3);
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
GEN_FRAME unsigned int F_00d74cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return;
}

/* ref: FUN_00d74cf0 */
GEN_FRAME unsigned int F_00d74cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
  return;
}

/* ref: FUN_00d74d30 */
GEN_FRAME uint F_00d74d30(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME unsigned int F_00d74d70(unsigned int gen_a0, unsigned int gen_a1)
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
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return;
}

/* ref: FUN_00d74db0 */
GEN_FRAME unsigned int F_00d74db0(unsigned int gen_a0, unsigned int gen_a1)
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
  return;
}

/* ref: FUN_00d74e00 */
GEN_FRAME unsigned int F_00d74e00(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME unsigned int GEN_THISCALL F_00d74e60(unsigned int gen_a0 GEN_EDX_PARAM)
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
        iVar3 = *(int *)((int)this + 0x10);
        (*(byte * PTR32 *)(gen_frame + 0x8)) = pbVar2 + *(int *)((int)this + 0x34);
        (*(int *)(gen_frame + 0x4)) = 0;
        if (0 < iVar3) {
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
  return;
}

/* ref: FUN_00d74f50 */
GEN_NOFRAME uint GEN_THISCALL F_00d74f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
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
      iVar10 = *(int *)(&REFG(undefined, 0x1137318) + param_2 * 4);
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
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = (undefined *)iVar10;
      (*(float *)(gen_frame + 0x0)) = ((*(float *)&REFG(undefined, 0x1137790) - (fVar14 * fVar15) * fVar14) *
                 (*(float *)&REFG(undefined, 0x11377a0) * fVar14)) * fVar4;
      (*(float *)(gen_frame + 0x4)) = ((*(float *)&REFG(undefined, 0x1137794) - (fVar17 * fVar11) * fVar17) *
                  (*(float *)&REFG(undefined, 0x11377a4) * fVar17)) * fVar5;
      (*(float *)(gen_frame + 0x8)) = ((*(float *)&REFG(undefined, 0x1137798) - (fVar18 * fVar12) * fVar18) *
                  (*(float *)&REFG(undefined, 0x11377a8) * fVar18)) * fVar6;
      (*(float *)(gen_frame + 0xc)) = ((*(float *)&REFG(undefined, 0x113779c) - (fVar19 * fVar13) * fVar19) *
                  (*(float *)&REFG(undefined, 0x11377ac) * fVar19)) * fVar7;
      F_00d74d70(iVar10,piVar9);
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
        iVar2 = (*(int *)(gen_frame + 0x38)) - 1;
        (*(int *)(gen_frame + 0x38)) = iVar2;
      } while (iVar2 != 0);
      return uVar8;
    }
  }
  return uVar8;
}

/* ref: FUN_00d750e0 */
GEN_FRAME uint F_00d750e0(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME uint F_00d75110(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd75110u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_00d74d70(4,param_2);
  uVar1 = param_2[1];
  *((float *)GEN_TOP(((uVar1 - 4) + *param_2))) = param_1;
  return uVar1;
}

/* ref: FUN_00d75140 */
GEN_FRAME uint GEN_THISCALL F_00d75140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xd75140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
  uVar5 = (*(uint *)&gen_a1) & 0xff;
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
    param_3 = param_3 - 1;
    if (param_3 == 0) {
      if (((*(uint *)&gen_a1) & 0xf0) != 0) {
        uVar4 = 0;
        param_3 = 0;
        if (-1 < param_6) {
          do {
            iVar6 = 0;
            (*(uint *)&gen_a1) = 1;
            pfVar8 = param_4;
            do {
              if ((uVar5 & ((*(uint *)&gen_a1) << 4 | (*(uint *)&gen_a1) >> 0x1c)) != 0) {
                if (param_2 == 0) {
                  iVar10 = iVar1;
                  bVar2 = F_00d745f0(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))),iVar1);
                  F_00d74d30((uint)bVar2,iVar10);
                }
                else {
                  iVar10 = iVar1;
                  uVar3 = F_00d74620(*pfVar8,GEN_TOF(*((float *)GEN_TOP((((int)param_5 - (int)param_4) +
                                                         (int)pfVar8)))),GEN_TOF(*((float *)GEN_TOP((*param_7 + (iVar6 + param_3 * 4) * 4)))),iVar1);
                  F_00d750e0((uint)uVar3,iVar10);
                }
              }
              iVar6 = iVar6 + 1;
              pfVar8 = pfVar8 + 1;
              (*(uint *)&gen_a1) = (*(uint *)&gen_a1) << 1 | (uint)((int)(*(uint *)&gen_a1) < 0);
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
GEN_FRAME uint GEN_THISCALL F_00d752d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
              ((float)GEN_TOF((*(int *)((int)this + 0x28) - 1))) + REFG(float, 0x1088068);
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

/* ref: FUN_00d75370 */
GEN_NOFRAME uint GEN_THISCALL F_00d75370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd75370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x3a0];
  int * piVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 * puVar11;
  undefined * pvVar12;
  int iVar13;
  int * piVar14;
  int iVar15;
  float * pfVar16;
  uint * puVar17;
  float10 fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar26;
  float fVar27;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar28;
  char * pcVar29;
  char * pcVar30;
  undefined * puVar31;
  
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 8) = 3;
  *(uint *)((int)this + 0x30) = (uint)*param_3;
  (*(char *)(gen_frame + 0x36a)) = (char)param_3[1];
  (*(int * PTR32 *)(gen_frame + 0x38c)) = this;
  uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x1c))(param_1 GEN_EDX_FWD);
  iVar15 = *(int *)((int)this + 0x30) - 1;
  iVar8 = (int)(*(int *)((int)this + 0x30) - 3 + uVar7) / iVar15;
  *(uint *)((int)this + 0x28) = uVar7;
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  iVar9 = *(int *)((int)this + 0x10);
  fVar19 = *(float *)((int)this + 0xc) / (float)(int)(uVar7 - 1);
  iVar13 = *(int *)((int)this + 0x14);
  fVar21 = (float)iVar15 * fVar19;
  fVar23 = REFG(float, 0x1087f04) / fVar21;
  *(int *)((int)this + 0x2c) = iVar8;
  *(float *)((int)this + 0x38) = fVar21;
  *(float *)((int)this + 0x3c) = fVar23;
  *(float *)((int)this + 0x40) = fVar19;
  (*(int *)(gen_frame + 0x350)) = 0;
  *(uint *)((int)this + 0x34) = iVar13 + 3 + iVar9 * 4 & 0xfffffffc;
  (*(int *)(gen_frame + 0x344)) = 0;
  if (0 < iVar8) {
    do {
      piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c));
      piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x11;
      (*(int * PTR32 *)(gen_frame + 0x360)) = (int *)(*(int * PTR32 *)(gen_frame + 0x38c))[0x1e];
      if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x12] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x13] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
      }
      *(int * PTR32 *)(*piVar1 + piVar14[0x12] * 4) = (*(int * PTR32 *)(gen_frame + 0x360));
      piVar14[0x12] = piVar14[0x12] + 1;
      iVar15 = piVar14[0xc];
      (*(int *)(gen_frame + 0x370)) = piVar14[10] - (*(int *)(gen_frame + 0x350));
      if (iVar15 < (*(int *)(gen_frame + 0x370))) {
        (*(int *)(gen_frame + 0x370)) = iVar15;
      }
      else {
      }
      (*(float *)(gen_frame + 0x334)) = (gen_bits2f(piVar14[3]) / (float)(piVar14[10] - 1)) * (float)((*(int *)(gen_frame + 0x370)) - 1);
      (*(int *)(gen_frame + 0x348)) = piVar14[0x1e];
      F_00d74d70(piVar14[0xd],piVar14 + 0x1d);
      (*(int *)(gen_frame + 0x384)) = 0;
      do {
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
        if ((*(int *)(gen_frame + 0x384)) == 0) {
          (*(int *)(gen_frame + 0x32c)) = (*(int * PTR32 *)(gen_frame + 0x38c))[4];
        }
        else {
          (*(int *)(gen_frame + 0x32c)) = (*(int * PTR32 *)(gen_frame + 0x38c))[5];
        }
        (*(int *)(gen_frame + 0x328)) = (uint)((*(int *)(gen_frame + 0x384)) == 0) * 2 + 1;
        if ((*(int *)(gen_frame + 0x384)) == 1) {
          iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0x1e];
          iVar8 = *(int *)((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4);
          piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x14;
          if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x15] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x16] & 0x3fffffffU)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
          }
          *(int *)(*piVar14 + piVar1[0x15] * 4) = iVar15 - iVar8;
          piVar1 = piVar1 + 0x15;
          *piVar1 = *piVar1 + 1;
        }
        (*(int *)(gen_frame + 0x364)) = 0;
        if (0 < (*(int *)(gen_frame + 0x32c))) {
          do {
            piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
            if ((*(char *)(gen_frame + 0x36a)) == '\0') {
LAB_00d755d0: ;
              if ((*(int *)(gen_frame + 0x384)) == 0) {
                iVar15 = param_2[3];
              }
              else {
                iVar15 = param_2[6];
              }
            }
            else {
              iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0x1e];
              if ((*(int *)(gen_frame + 0x384)) != 0) {
                iVar8 = *(int *)((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4);
                piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1a;
                if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x1b] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x1c] & 0x3fffffffU)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
                }
                *(int *)(*piVar14 + piVar1[0x1b] * 4) = iVar15 - iVar8;
                piVar1[0x1b] = piVar1[0x1b] + 1;
                goto LAB_00d755d0;
              }
              iVar8 = *(int *)((*(int * PTR32 *)(gen_frame + 0x38c))[0x11] + (*(int *)(gen_frame + 0x344)) * 4);
              piVar14 = (*(int * PTR32 *)(gen_frame + 0x38c)) + 0x17;
              if ((*(int * PTR32 *)(gen_frame + 0x38c))[0x18] == ((*(int * PTR32 *)(gen_frame + 0x38c))[0x19] & 0x3fffffffU)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar14,4);
              }
              *(int *)(*piVar14 + piVar1[0x18] * 4) = iVar15 - iVar8;
              piVar1[0x18] = piVar1[0x18] + 1;
              iVar15 = param_2[3];
            }
            iVar8 = (*(int *)(gen_frame + 0x370));
            (*(undefined4 * PTR32 *)(gen_frame + 0x380)) = ((undefined4 *)GEN_TOP((*param_2 + *(int *)(iVar15 + (*(int *)(gen_frame + 0x364)) * 4) * 0x1c)));
            ((int *)(gen_frame + 0x2e8))[2] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[5] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[8] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[2] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[5] = 0x80000000;
            ((int *)(gen_frame + 0x2a8))[8] = 0x80000000;
            ((int *)(gen_frame + 0x2e8))[0] = 0;
            ((int *)(gen_frame + 0x2e8))[1] = 0;
            ((int *)(gen_frame + 0x2e8))[3] = 0;
            ((int *)(gen_frame + 0x2e8))[4] = 0;
            ((int *)(gen_frame + 0x2e8))[6] = 0;
            ((int *)(gen_frame + 0x2e8))[7] = 0;
            ((int *)(gen_frame + 0x2a8))[0] = 0;
            ((int *)(gen_frame + 0x2a8))[1] = 0;
            ((int *)(gen_frame + 0x2a8))[3] = 0;
            ((int *)(gen_frame + 0x2a8))[4] = 0;
            ((int *)(gen_frame + 0x2a8))[6] = 0;
            ((int *)(gen_frame + 0x2a8))[7] = 0;
            if (0 < (*(int *)(gen_frame + 0x328))) {
              iVar15 = 0;
              (*(int *)(gen_frame + 0x388)) = (*(int *)(gen_frame + 0x328));
              do {
                uVar7 = *(uint *)((int)((int *)(gen_frame + 0x2e8)) + iVar15 + 8) & 0x3fffffff;
                if ((int)uVar7 < iVar8) {
                  iVar9 = uVar7 * 2;
                  if (iVar9 <= iVar8) {
                    iVar9 = iVar8;
                  }
                  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)((int *)(gen_frame + 0x2e8)) + iVar15,iVar9,0x10);
                }
                uVar7 = *(uint *)((int)((int *)(gen_frame + 0x2a8)) + iVar15 + 8) & 0x3fffffff;
                *(int *)((int)((int *)(gen_frame + 0x2e8)) + iVar15 + 4) = iVar8;
                if ((int)uVar7 < iVar8) {
                  iVar9 = uVar7 * 2;
                  if (iVar9 <= iVar8) {
                    iVar9 = iVar8;
                  }
                  F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)((int *)(gen_frame + 0x2a8)) + iVar15,iVar9,4);
                }
                fVar19 = (*(float *)(gen_frame + 0x334));
                *(int *)((int)((int *)(gen_frame + 0x2a8)) + iVar15 + 4) = iVar8;
                F_00d74ba0(iVar8 - 1,(int)((int *)(gen_frame + 0x2a8)) + iVar15,0.0,fVar19);
                iVar15 = iVar15 + 0xc;
                iVar9 = (*(int *)(gen_frame + 0x388)) - 1;
                (*(int *)(gen_frame + 0x388)) = iVar9;
              } while (iVar9 != 0);
            }
            if ((*(int *)(gen_frame + 0x384)) == 0) {
              fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[1]);
              uVar2 = *(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 4);
              ((uint *)(gen_frame + 0x310))[0] = (uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x12);
              ((uint *)(gen_frame + 0x310))[2] = (uint)*(ushort *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 5);
              ((float *)(gen_frame + 0x338))[0] = fVar19;
              ((float *)(gen_frame + 0x338))[1] = gen_bits2f(*(*(undefined4 * PTR32 *)(gen_frame + 0x380)));
              ((uint *)(gen_frame + 0x310))[1] = (uint)uVar2;
              ((float *)(gen_frame + 0x338))[2] = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[2]);
              F_00d74740(param_1[10],(*(int * PTR32 *)(gen_frame + 0x38c))[4],iVar8,(*(int *)(gen_frame + 0x350)),(*(int *)(gen_frame + 0x364)),((int *)(gen_frame + 0x2e8)),((int *)(gen_frame + 0x2e8)) + 3,
                           ((int *)(gen_frame + 0x2e8)) + 6);
            }
            else {
              fVar19 = gen_bits2f((*(undefined4 * PTR32 *)(gen_frame + 0x380))[3]);
              iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[5];
              ((uint *)(gen_frame + 0x310))[0] = (uint)*(ushort *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x16);
              iVar9 = param_1[0xd];
              ((float *)(gen_frame + 0x338))[0] = fVar19;
              F_00d747f0(iVar9,iVar15,iVar8,(*(int *)(gen_frame + 0x350)),(*(int *)(gen_frame + 0x364)),((int *)(gen_frame + 0x2e8)));
            }
            (*(int *)(gen_frame + 0x388)) = 0;
            if (0 < (*(int *)(gen_frame + 0x328))) {
              (*(undefined4 *)(gen_frame + 0x260)) = *(undefined4 *)&REFG(undefined, 0x11377b0);
              (*(undefined4 *)(gen_frame + 0x264)) = *(undefined4 *)&REFG(undefined, 0x11377b4);
              (*(undefined4 *)(gen_frame + 0x268)) = *(undefined4 *)&REFG(undefined, 0x11377b8);
              (*(undefined4 *)(gen_frame + 0x26c)) = *(undefined4 *)&REFG(undefined, 0x11377bc);
              (*(undefined4 *)(gen_frame + 0x270)) = *(undefined4 *)&REFG(undefined, 0x11377c0);
              (*(undefined4 *)(gen_frame + 0x274)) = *(undefined4 *)&REFG(undefined, 0x11377c4);
              (*(undefined4 *)(gen_frame + 0x278)) = *(undefined4 *)&REFG(undefined, 0x11377c8);
              (*(undefined4 *)(gen_frame + 0x27c)) = *(undefined4 *)&REFG(undefined, 0x11377cc);
              (*(undefined4 *)(gen_frame + 0x250)) = *(undefined4 *)&REFG(undefined, 0x11377d0);
              (*(undefined4 *)(gen_frame + 0x254)) = *(undefined4 *)&REFG(undefined, 0x11377d4);
              (*(undefined4 *)(gen_frame + 0x258)) = *(undefined4 *)&REFG(undefined, 0x11377d8);
              (*(undefined4 *)(gen_frame + 0x25c)) = *(undefined4 *)&REFG(undefined, 0x11377dc);
              ((uint *)(gen_frame + 0x310))[3] = (*(int *)(gen_frame + 0x370)) * 3;
              do {
                iVar15 = (*(int *)(gen_frame + 0x388));
                piVar1 = ((int *)(gen_frame + 0x2e8)) + (*(int *)(gen_frame + 0x388)) * 3;
                (*(int * PTR32 *)(gen_frame + 0x360)) = piVar1;
                F_00d74940(&(*(float *)(gen_frame + 0x2d0)),piVar1);
                F_00d749a0(&(*(undefined4 *)(gen_frame + 0x280)),piVar1);
                F_00d749f0(&(*(undefined4 *)(gen_frame + 0x290)),piVar1);
                iVar8 = (*(int *)(gen_frame + 0x388));
                if ((*(int *)(gen_frame + 0x388)) == 1) {
                  fVar19 = (*(float *)(gen_frame + 0x2d8)) * (*(float *)(gen_frame + 0x2d8)) + (*(float *)(gen_frame + 0x2d0)) * (*(float *)(gen_frame + 0x2d0));
                  fVar21 = (*(float *)(gen_frame + 0x2dc)) * (*(float *)(gen_frame + 0x2dc)) + (*(float *)(gen_frame + 0x2d4)) * (*(float *)(gen_frame + 0x2d4));
                  fVar23 = (*(float *)(gen_frame + 0x2d0)) * (*(float *)(gen_frame + 0x2d0)) + (*(float *)(gen_frame + 0x2d8)) * (*(float *)(gen_frame + 0x2d8));
                  fVar20 = (*(float *)(gen_frame + 0x2d4)) * (*(float *)(gen_frame + 0x2d4)) + (*(float *)(gen_frame + 0x2dc)) * (*(float *)(gen_frame + 0x2dc));
                  fVar22 = fVar21 + fVar19;
                  fVar19 = fVar19 + fVar21;
                  fVar21 = fVar20 + fVar23;
                  fVar23 = fVar23 + fVar20;
                  memset(&auVar24, 0, 12);
                  (*(undefined4 *)((char *)&auVar24 + 12)) = 0;
                  (*(undefined4 *)((char *)&auVar25 + 4)) = (undefined4)gen_fl2bits(fVar19);
                  (*(undefined4 *)((char *)&auVar25 + 0)) = (undefined4)gen_fl2bits(fVar22);
                  (*(undefined4 *)((char *)&auVar25 + 8)) = (undefined4)gen_fl2bits(fVar21);
                  (*(undefined4 *)((char *)&auVar25 + 12)) = (undefined4)gen_fl2bits(fVar23);
                  gen_rsqrtps(&(auVar25), &(auVar24), &(auVar25));
                  fVar20 = (*(float *)((char *)&auVar25 + 0));
                  fVar26 = (*(float *)((char *)&auVar25 + 4));
                  fVar27 = (*(float *)((char *)&auVar25 + 8));
                  fVar28 = (*(float *)((char *)&auVar25 + 12));
                  (*(float *)(gen_frame + 0x2d0)) = gen_bits2f(~-(uint)(fVar22 <= 0.0) &
                                        (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137790) -
                                                          (fVar20 * fVar22) * fVar20) *
                                                          (*(float *)&REFG(undefined, 0x11377a0) * fVar20))) *
                             (*(float *)(gen_frame + 0x2d0));
                  (*(float *)(gen_frame + 0x2d4)) = gen_bits2f(~-(uint)(fVar19 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137794) -
                                                           (fVar26 * fVar19) * fVar26) *
                                                           (*(float *)&REFG(undefined, 0x11377a4) * fVar26))) *
                              (*(float *)(gen_frame + 0x2d4));
                  (*(float *)(gen_frame + 0x2d8)) = gen_bits2f(~-(uint)(fVar21 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x1137798) -
                                                           (fVar27 * fVar21) * fVar27) *
                                                           (*(float *)&REFG(undefined, 0x11377a8) * fVar27))) *
                              (*(float *)(gen_frame + 0x2d8));
                  (*(float *)(gen_frame + 0x2dc)) = gen_bits2f(~-(uint)(fVar23 <= 0.0) &
                                         (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113779c) -
                                                           (fVar28 * fVar23) * fVar28) *
                                                           (*(float *)&REFG(undefined, 0x11377ac) * fVar28))) *
                              (*(float *)(gen_frame + 0x2dc));
                }
                ((undefined4 *)(gen_frame + 0x220))[0] = (*(undefined4 *)(gen_frame + 0x260));
                ((undefined4 *)(gen_frame + 0x220))[1] = (*(undefined4 *)(gen_frame + 0x264));
                ((undefined4 *)(gen_frame + 0x220))[2] = (*(undefined4 *)(gen_frame + 0x268));
                ((undefined4 *)(gen_frame + 0x220))[3] = (*(undefined4 *)(gen_frame + 0x26c));
                (*(undefined4 *)(gen_frame + 0x230)) = (*(undefined4 *)(gen_frame + 0x270));
                (*(undefined4 *)(gen_frame + 0x234)) = (*(undefined4 *)(gen_frame + 0x274));
                (*(undefined4 *)(gen_frame + 0x238)) = (*(undefined4 *)(gen_frame + 0x278));
                (*(undefined4 *)(gen_frame + 0x23c)) = (*(undefined4 *)(gen_frame + 0x27c));
                (*(undefined4 *)(gen_frame + 0x240)) = (*(undefined4 *)(gen_frame + 0x250));
                (*(undefined4 *)(gen_frame + 0x244)) = (*(undefined4 *)(gen_frame + 0x254));
                (*(undefined4 *)(gen_frame + 0x248)) = (*(undefined4 *)(gen_frame + 0x258));
                (*(undefined4 *)(gen_frame + 0x24c)) = (*(undefined4 *)(gen_frame + 0x25c));
                (*(float *)(gen_frame + 0x320)) = ((float *)(gen_frame + 0x338))[(int)((*(int *)(gen_frame + 0x388)))];
                bVar6 = F_00d74850(&(*(float *)(gen_frame + 0x2d0)),&(*(undefined4 *)(gen_frame + 0x280)),&(*(undefined4 *)(gen_frame + 0x290)),((float *)(gen_frame + 0x338))[(int)((*(int *)(gen_frame + 0x388)))],
                                     ((undefined4 *)(gen_frame + 0x220)) + (*(int *)(gen_frame + 0x388)) * 4);
                (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34c)) + 0)) = bVar6;
                (*(uint *)(gen_frame + 0x34c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34c)), 1, 3),bVar6);
                if ((*(int *)(gen_frame + 0x384)) == 1) {
                  if (bVar6 == 0) {
                    (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x34c)) + 0)) = 1;
                    (*(uint *)(gen_frame + 0x34c)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x34c)), 1, 3),1);
                  }
LAB_00d7592d: ;
                  bVar6 = F_00d745b0((*(uint *)(gen_frame + 0x34c)),(uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1b));
                  *(byte *)((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]) = bVar6;
                  iVar8 = (*(int *)(gen_frame + 0x348));
                }
                else {
                  if ((*(int *)(gen_frame + 0x384)) != 0) goto LAB_00d7592d;
                  if (iVar8 == 0) {
                    uVar7 = F_00d74590((uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x19),
                                         (uint)*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 6),
                                         (uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1a));
                    *(char *)((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]) = (char)uVar7;
                    iVar8 = (*(int *)(gen_frame + 0x348)) + 1;
                    *(byte *)(iVar8 + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]) = bVar6;
                  }
                  else {
                    *(byte *)((*(int *)(gen_frame + 0x348)) + (*(int * PTR32 *)(gen_frame + 0x38c))[0x1d]) = bVar6;
                    iVar8 = (*(int *)(gen_frame + 0x348));
                  }
                }
                (*(int *)(gen_frame + 0x348)) = iVar8 + 1;
                uVar7 = 0;
                (*(uint *)(gen_frame + 0x374)) = 0;
                (*(int *)(gen_frame + 0x378)) = 0;
                (*(uint *)(gen_frame + 0x37c)) = 0x80000000;
                if (((uint *)(gen_frame + 0x310))[3] == 0) {
LAB_00d75993: ;
                  uVar10 = 0x80000000;
                }
                else {
                  (*(int *)(gen_frame + 0x36c)) = ((uint *)(gen_frame + 0x310))[3] << 4;
                  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x36c)))
                  ;
                  uVar10 = (int)((*(int *)(gen_frame + 0x36c)) + ((*(int *)(gen_frame + 0x36c)) >> 0x1f & 0xfU)) >> 4;
                  if (uVar10 == 0) goto LAB_00d75993;
                }
                (*(uint *)(gen_frame + 0x374)) = uVar7;
                (*(uint *)(gen_frame + 0x37c)) = uVar10;
                iVar8 = ((uint *)(gen_frame + 0x310))[3] + 2;
                (*(int *)(gen_frame + 0x378)) = ((uint *)(gen_frame + 0x310))[3];
                (*(uint *)(gen_frame + 0x354)) = 0;
                (*(int *)(gen_frame + 0x358)) = 0;
                (*(uint *)(gen_frame + 0x35c)) = 0x80000000;
                if (iVar8 == 0) {
                  uVar7 = 0;
LAB_00d759ef: ;
                  uVar10 = 0x80000000;
                }
                else {
                  (*(int *)(gen_frame + 0x36c)) = iVar8 * 4;
                  uVar7 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x36c)))
                  ;
                  uVar10 = (int)((*(int *)(gen_frame + 0x36c)) + ((*(int *)(gen_frame + 0x36c)) >> 0x1f & 3U)) >> 2;
                  if (uVar10 == 0) goto LAB_00d759ef;
                }
                (*(uint *)(gen_frame + 0x35c)) = uVar10;
                (*(uint *)(gen_frame + 0x354)) = uVar7;
                (*(int *)(gen_frame + 0x358)) = iVar8;
                (*(byte *)(gen_frame + 0x36b)) = (byte)(*(uint *)(gen_frame + 0x34c)) & 0xf0;
                if (((*(uint *)(gen_frame + 0x34c)) & 0xf0) != 0) {
                  F_00d8fce0((*(int *)(gen_frame + 0x370)),((int *)(gen_frame + 0x2a8))[(int)(iVar15 * 3)],*(*(int * PTR32 *)(gen_frame + 0x360)),((uint *)(gen_frame + 0x310))[(int)((*(int *)(gen_frame + 0x388)))],(*(float *)(gen_frame + 0x320)),
                               &(*(int *)(gen_frame + 0x324)),uVar7,&(*(int *)(gen_frame + 0x330)),(*(uint *)(gen_frame + 0x374)));
                  iVar8 = (*(int *)(gen_frame + 0x324));
                  if ((int)((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x324))) {
                    iVar9 = ((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) * 2;
                    iVar13 = (*(int *)(gen_frame + 0x324));
                    if ((*(int *)(gen_frame + 0x324)) < iVar9) {
                      iVar13 = iVar9;
                    }
                    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x354)),iVar13,4);
                  }
                  iVar9 = (*(int *)(gen_frame + 0x330));
                  (*(int *)(gen_frame + 0x358)) = iVar8;
                  if ((int)((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x330))) {
                    iVar8 = ((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) * 2;
                    iVar13 = (*(int *)(gen_frame + 0x330));
                    if ((*(int *)(gen_frame + 0x330)) < iVar8) {
                      iVar13 = iVar8;
                    }
                    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x374)),iVar13,0x10);
                  }
                  uVar10 = (*(uint *)(gen_frame + 0x374));
                  iVar8 = (*(int *)(gen_frame + 0x370));
                  uVar7 = (*(uint *)(gen_frame + 0x354));
                  fVar19 = (*(float *)(gen_frame + 0x320));
                  (*(int *)(gen_frame + 0x378)) = iVar9;
                  if ((*(int *)(gen_frame + 0x370)) < iVar9) {
                    ((uint *)(gen_frame + 0x310))[(int)((*(int *)(gen_frame + 0x388)))] = 1;
                    F_00d8fce0(iVar8,((int *)(gen_frame + 0x2a8))[(int)(iVar15 * 3)],*(*(int * PTR32 *)(gen_frame + 0x360)),1,fVar19,&(*(int *)(gen_frame + 0x324)),uVar7,
                                 &(*(int *)(gen_frame + 0x330)),uVar10);
                    iVar15 = (*(int *)(gen_frame + 0x324));
                    if ((int)((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x324))) {
                      iVar8 = ((*(uint *)(gen_frame + 0x35c)) & 0x3fffffff) * 2;
                      iVar9 = (*(int *)(gen_frame + 0x324));
                      if ((*(int *)(gen_frame + 0x324)) < iVar8) {
                        iVar9 = iVar8;
                      }
                      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x354)),iVar9,4);
                    }
                    iVar9 = (*(int *)(gen_frame + 0x330));
                    (*(int *)(gen_frame + 0x358)) = iVar15;
                    if ((int)((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) < (*(int *)(gen_frame + 0x330))) {
                      iVar15 = ((*(uint *)(gen_frame + 0x37c)) & 0x3fffffff) * 2;
                      iVar8 = (*(int *)(gen_frame + 0x330));
                      if ((*(int *)(gen_frame + 0x330)) < iVar15) {
                        iVar8 = iVar15;
                      }
                      F_00d95690(&REFG(undefined * PTR32, 0x13516ac),&(*(uint *)(gen_frame + 0x374)),iVar8,0x10);
                    }
                    (*(int *)(gen_frame + 0x378)) = iVar9;
                  }
                  (*(int *)(gen_frame + 0x378)) = iVar9;
                  F_00d752d0((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,iVar9 - 1,((*(int *)(gen_frame + 0x358)) - iVar9) - 1,&(*(uint *)(gen_frame + 0x354)));
                }
                if ((*(int *)(gen_frame + 0x388)) == 1) {
                  F_00d74f50((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x34c)),(uint)*(byte *)((*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 6),&(*(float *)(gen_frame + 0x2d0)),
                               (*(int *)(gen_frame + 0x378)) - 1,&(*(uint *)(gen_frame + 0x374)));
                }
                else {
                  if ((*(byte *)(gen_frame + 0x36b)) != 0) {
                    puVar11 = (undefined4 *)F_00d749a0(((undefined1 *)(gen_frame + 0x200)),&(*(uint *)(gen_frame + 0x374)));
                    uVar3 = puVar11[1];
                    uVar4 = puVar11[2];
                    uVar5 = puVar11[3];
                    (*(undefined4 *)(gen_frame + 0x280)) = *puVar11;
                    (*(undefined4 *)(gen_frame + 0x284)) = uVar3;
                    (*(undefined4 *)(gen_frame + 0x288)) = uVar4;
                    (*(undefined4 *)(gen_frame + 0x28c)) = uVar5;
                    puVar11 = (undefined4 *)F_00d749f0(((undefined1 *)(gen_frame + 0x210)),&(*(uint *)(gen_frame + 0x374)));
                    uVar3 = puVar11[1];
                    uVar4 = puVar11[2];
                    uVar5 = puVar11[3];
                    (*(undefined4 *)(gen_frame + 0x290)) = *puVar11;
                    (*(undefined4 *)(gen_frame + 0x294)) = uVar3;
                    (*(undefined4 *)(gen_frame + 0x298)) = uVar4;
                    (*(undefined4 *)(gen_frame + 0x29c)) = uVar5;
                  }
                  if ((*(int *)(gen_frame + 0x384)) == 0) {
                    if ((*(int *)(gen_frame + 0x388)) == 0) {
                      uVar7 = (uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x19);
                    }
                    else {
                      uVar7 = (uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1a);
                    }
                  }
                  else {
                    uVar7 = (uint)*(byte *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x380)) + 0x1b);
                  }
                  F_00d75140((*(int * PTR32 *)(gen_frame + 0x38c)) GEN_EDX_ARG,(*(uint *)(gen_frame + 0x34c)),uVar7,&(*(float *)(gen_frame + 0x2d0)),&(*(undefined4 *)(gen_frame + 0x280)),&(*(undefined4 *)(gen_frame + 0x290)),(*(int *)(gen_frame + 0x378)) - 1
                               ,&(*(uint *)(gen_frame + 0x374)));
                }
                F_00d74db0(4,(*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1d);
                (*(int *)(gen_frame + 0x358)) = 0;
                if (((*(uint *)(gen_frame + 0x35c)) & 0x80000000) == 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                            (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x354)),(*(uint *)(gen_frame + 0x35c)) * 4);
                }
                (*(uint *)(gen_frame + 0x354)) = 0;
                (*(uint *)(gen_frame + 0x35c)) = 0x80000000;
                (*(int *)(gen_frame + 0x378)) = 0;
                if (((*(uint *)(gen_frame + 0x37c)) & 0x80000000) == 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                            (&REFG(undefined * PTR32, 0x13516ac),(*(uint *)(gen_frame + 0x374)),(*(uint *)(gen_frame + 0x37c)) << 4);
                }
                iVar15 = (*(int *)(gen_frame + 0x388)) + 1;
                (*(uint *)(gen_frame + 0x374)) = 0;
                (*(uint *)(gen_frame + 0x37c)) = 0x80000000;
                (*(int *)(gen_frame + 0x388)) = iVar15;
              } while (iVar15 < (*(int *)(gen_frame + 0x328)));
            }
            iVar15 = 2;
            pfVar16 = &(*(float *)(gen_frame + 0x2d4));
            do {
              pfVar16[-4] = 0.0;
              if (-1 < (int)gen_fl2bits(pfVar16[-3])) {
                ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),(undefined4)gen_fl2bits(pfVar16[-5]),
                           (int)gen_fl2bits(pfVar16[-3]) * 4);
              }
              iVar15 = iVar15 - 1;
              pfVar16[-5] = 0.0;
              pfVar16[-3] = -0.0;
              pfVar16 = pfVar16 - 3;
            } while (-1 < iVar15);
            iVar15 = 2;
            puVar17 = ((uint *)(gen_frame + 0x310)) + 1;
            do {
              puVar17[-4] = 0;
              if (-1 < (int)puVar17[-3]) {
                ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                          (&REFG(undefined * PTR32, 0x13516ac),puVar17[-5],puVar17[-3] << 4);
              }
              iVar15 = iVar15 - 1;
              puVar17[-5] = 0;
              puVar17[-3] = 0x80000000;
              puVar17 = puVar17 - 3;
            } while (-1 < iVar15);
            iVar15 = (*(int *)(gen_frame + 0x364)) + 1;
            (*(int *)(gen_frame + 0x364)) = iVar15;
          } while (iVar15 < (*(int *)(gen_frame + 0x32c)));
        }
        piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
        iVar15 = (*(int *)(gen_frame + 0x384)) + 1;
        (*(int *)(gen_frame + 0x384)) = iVar15;
      } while (iVar15 < 2);
      (*(int *)(gen_frame + 0x350)) = (*(int *)(gen_frame + 0x350)) - 1 + (*(int *)(gen_frame + 0x370));
      F_00d74db0(0x10,(*(int * PTR32 *)(gen_frame + 0x38c)) + 0x1d);
      iVar15 = (*(int *)(gen_frame + 0x344)) + 1;
      (*(int *)(gen_frame + 0x344)) = iVar15;
    } while (iVar15 < piVar1[0xb]);
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x36118e94,"Compression");
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  piVar1 = (*(int * PTR32 *)(gen_frame + 0x38c));
  iVar15 = (*(int * PTR32 *)(gen_frame + 0x38c))[0xb];
  pvVar12 = (undefined *)F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,"Number of blocks: ");
  F_00d9ff40(pvVar12 GEN_EDX_ARG,iVar15);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\SplineCompressed\\hkaSplineCompressedAnimationCtor.cpp",0x17e);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar29 = " bytes.";
  uVar7 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1 GEN_EDX_ARG);
  pvVar12 = (undefined *)F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,"Size of largest block (PlayStation(R)3 SPU): ");
  pvVar12 = (undefined *)F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar7);
  F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar29);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\SplineCompressed\\hkaSplineCompressedAnimationCtor.cpp",0x17f);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  iVar15 = (param_1[0xb] * 0x10 + param_1[0xe]) * 4;
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  pcVar30 = " bytes.";
  uVar7 = F_00d6d110(piVar1 GEN_EDX_ARG);
  pcVar29 = " bytes. Compressed Size: ";
  iVar8 = iVar15;
  pvVar12 = (undefined *)F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,"Original Size: ");
  pvVar12 = (undefined *)F_00d9ff90(pvVar12 GEN_EDX_ARG,iVar8);
  pvVar12 = (undefined *)F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar29);
  pvVar12 = (undefined *)F_00d9ff40(pvVar12 GEN_EDX_ARG,uVar7);
  F_00d9fe80(pvVar12 GEN_EDX_ARG,pcVar30);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\SplineCompressed\\hkaSplineCompressedAnimationCtor.cpp",0x184);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  F_00da0a80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  (*(float *)(gen_frame + 0x334)) = gen_bits2f(iVar15);
  fVar18 = (float10)iVar15;
  puVar31 = &REFG(undefined, 0x1137810);
  if (iVar15 < 0) {
    fVar18 = fVar18 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  (*(int * PTR32 *)(gen_frame + 0x360)) = ((int *)(uintptr_t)gen_fl2bits((float)((float)fVar18)));
  uVar7 = F_00d6d110(piVar1 GEN_EDX_ARG);
  (*(float *)(gen_frame + 0x334)) = gen_bits2f(uVar7);
  fVar19 = (float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x360))))) / (float10)(int)uVar7);
  uVar7 = F_00d9fe80(((float *)(gen_frame + 0x338)) GEN_EDX_ARG,"Compression Ratio: ");
  pvVar12 = (undefined *)F_00d9ffe0(uVar7 GEN_EDX_ARG,fVar19);
  F_00d9fe80(pvVar12 GEN_EDX_ARG,puVar31);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\SplineCompressed\\hkaSplineCompressedAnimationCtor.cpp",0x185);
  F_00d9fda0(((float *)(gen_frame + 0x338)) GEN_EDX_ARG);
  uVar7 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  return uVar7;
}

/* ref: FUN_00d75ff0 */
GEN_FRAME uint GEN_THISCALL F_00d75ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  F_00d75370((*(undefined * PTR32 *)(gen_frame + 0x28)) GEN_EDX_ARG,param_1,&(*(int *)(gen_frame + 0x4)),param_3);
  uVar4 = F_00d76ae0(&(*(int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00d76120 */
GEN_FRAME uint GEN_THISCALL F_00d76120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76120u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 uVar1;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,(*(undefined4 *)&gen_args[1]));
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
  F_00d74700(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  F_00d74510(&(*(undefined4 *)&gen_args[1]) GEN_EDX_ARG);
  F_00d75ff0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,uVar1,((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)&gen_args[1]));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d761a0 */
GEN_FRAME uint GEN_THISCALL F_00d761a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd761a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this GEN_EDX_FWD,param_1);
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
  F_00d75ff0(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76210 */
GEN_FRAME uint GEN_THISCALL F_00d76210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76210u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this GEN_EDX_FWD,param_1);
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
  F_00d75370(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d76290 */
GEN_FRAME byte GEN_THISCALL F_00d76290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76290u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762b0 */
GEN_FRAME byte GEN_THISCALL F_00d762b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd762b0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00d762f0 */
GEN_FRAME uint GEN_THISCALL F_00d762f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd762f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d76340 */
GEN_FRAME uint GEN_THISCALL F_00d76340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76350 */
GEN_FRAME uint GEN_THISCALL F_00d76350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76350u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d76380 */
GEN_FRAME uint F_00d76380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76380u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d763b0 */
GEN_FRAME unsigned int F_00d763b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d763e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d76410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d76440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76440u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00d76480 */
GEN_FRAME uint GEN_THISCALL F_00d76480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd76480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0x1c);
  return uVar1;
}

/* ref: FUN_00d764b0 */
GEN_FRAME uint F_00d764b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd764b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d76530 */
GEN_FRAME uint GEN_THISCALL F_00d76530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d765a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d765e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d76620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME unsigned int F_00d76690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d766d0 */
GEN_FRAME uint GEN_THISCALL F_00d766d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d76710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d76760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d767a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d767e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d76850 */
GEN_FRAME uint GEN_THISCALL F_00d76850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d76890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d768d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd768d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 * 8 - (uVar1 & 0x3fffffff)) * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d76920 */
GEN_FRAME uint GEN_THISCALL F_00d76920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d76990 */
GEN_FRAME uint GEN_THISCALL F_00d76990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d769d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_NOFRAME uint GEN_THISCALL F_00d76a10(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d76a60(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d76ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
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
GEN_FRAME uint GEN_THISCALL F_00d76bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd76bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = param_1 + 0x28;
  *(int *)((int)this + 4) = param_1 + 0x34;
  *(int *)((int)this + 8) = param_1 + 0x38;
  *(int *)((int)this + 0xc) = param_1 + 8;
  return (uint)this;
}

/* ref: FUN_00d76be0 */
GEN_FRAME uint F_00d76be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
      iVar3 = iVar3 - 1;
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
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *param_1 = fVar6;
  *param_2 = fVar5 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_00d76cc0 */
GEN_NOFRAME uint GEN_THISCALL F_00d76cc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76cc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10abe98)));
  in_ecx[3] = GEN_FLT_TO(in_ecx[3], REFG(float, 0x10abe98));
  in_ecx[2] = uVar1;
  in_ecx[1] = uVar1;
  *in_ecx = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00d76ce0 */
GEN_FRAME uint F_00d76ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76ce0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *param_1 = (*param_1 - 1) + param_2 & ~(param_2 - 1U);
  return (uint)param_1;
}

/* ref: FUN_00d76d00 */
GEN_FRAME ushort F_00d76d00(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d00u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (ushort)(int)(((param_1 - *param_2) / param_2[1]) * *(float *)&REFG(undefined, 0x11377e0));
}

/* ref: FUN_00d76d30 */
GEN_FRAME uint F_00d76d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd76d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d87f90(param_2,param_1);
  return uVar1;
}

/* ref: FUN_00d76d50 */
GEN_FRAME uint F_00d76d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd76d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00d76be0(param_1,param_1 + 4,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00d76d80 */
GEN_FRAME unsigned int F_00d76d80(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME unsigned int F_00d76db0(unsigned int gen_a0, unsigned int gen_a1)
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00d76e00 */
GEN_NOFRAME byte GEN_THISCALL F_00d76e00(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME unsigned int GEN_THISCALL F_00d76e30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd76e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  ushort * puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x34) != 0) {
    F_00d76e00(*(undefined * PTR32 *)((int)this + 0x28) GEN_EDX_FWD);
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
  return;
}

/* ref: FUN_00d76ff0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d76ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return;
}

/* ref: FUN_00d77050 */
GEN_FRAME uint GEN_THISCALL F_00d77050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)this + 4);
  puVar2 = ((undefined1 *)GEN_TOP((iVar3 - 1 + param_1 & ~(param_1 - 1U))));
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)puVar2;
}

/* ref: FUN_00d770b0 */
GEN_FRAME uint F_00d770b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
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
  undefined8 uVar2;
  undefined8 * puVar3;
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
        return (uint)pfVar1;
      }
    }
    fVar7 = fVar7 * REFG(float, 0x1088068);
    fVar5 = *pfVar1;
    (*(float *)(gen_frame + 0x8)) = gen_bits2f(CONCAT22((*(undefined2 *)((char *)&(*(float *)(gen_frame + 0x8)) + 2)),(ushort)param_2));
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,8);
    }
    pfVar1 = (float *)(*param_6 + param_6[1] * 8);
    puVar3 = (undefined8 *)0x0;
    piVar4 = param_6;
    if (pfVar1 != (float *)0x0) {
      *pfVar1 = fVar7 + fVar5;
      pfVar1[1] = (*(float *)(gen_frame + 0x8));
      param_6[1] = param_6[1] + 1;
      return (uint)pfVar1;
    }
  }
  else {
    uVar2 = *(undefined8 *)pfVar1;
    if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,0xc);
    }
    puVar3 = (undefined8 *)(*param_7 + param_7[1] * 0xc);
    piVar4 = param_7;
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = uVar2;
      *(uint *)(puVar3 + 1) = CONCAT22((ushort)param_2,(ushort)param_1);
    }
  }
  piVar4[1] = piVar4[1] + 1;
  return (uint)puVar3;
}

/* ref: FUN_00d771d0 */
GEN_FRAME uint GEN_THISCALL F_00d771d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd771d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  F_00d77050(this GEN_EDX_FWD,param_2);
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
GEN_FRAME uint GEN_THISCALL F_00d77240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00d77050(this GEN_EDX_FWD,4);
  uVar1 = F_00d771d0(this GEN_EDX_ARG,param_1,4);
  return uVar1;
}

/* ref: FUN_00d77260 */
GEN_FRAME uint GEN_THISCALL F_00d77260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this GEN_EDX_FWD,param_1,2);
  return uVar1;
}

/* ref: FUN_00d77280 */
GEN_FRAME uint GEN_THISCALL F_00d77280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d771d0(this GEN_EDX_FWD,param_1,4);
  return uVar1;
}

/* ref: FUN_00d772a0 */
GEN_NOFRAME uint F_00d772a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xd772a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  float param_5 = (float)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 * puVar1;
  uint uVar2;
  undefined2 uVar3;
  bool bVar4;
  float * pfVar5;
  undefined8 * puVar6;
  short sVar7;
  int iVar8;
  float * pfVar9;
  int * piVar10;
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
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  
  iVar8 = 0;
  pfVar9 = (float *)(param_4 + 0x10 + (uint)(ushort)param_1 * 0x30);
  ((char *)(gen_frame + 0x38))[0] = '\0';
  ((char *)(gen_frame + 0x38))[1] = '\0';
  ((char *)(gen_frame + 0x38))[2] = '\0';
  ((char *)(gen_frame + 0x38))[3] = '\0';
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  pfVar5 = (float *)((uint)(ushort)param_1 * 0x60 + 0x20 + param_3);
  do {
    fVar11 = pfVar5[1];
    fVar12 = *pfVar5;
    ((float *)(gen_frame + 0x10))[(int)(iVar8)] = fVar12;
    ((float *)(gen_frame + 0x20))[(int)(iVar8)] = fVar11;
    if (!(fVar11 <= param_5 * REFG(float, 0x10928e4))) {
      bVar4 = true;
      goto LAB_00d7737a;
    }
    fVar11 = *pfVar9;
    if ((fVar11 - param_5 <= fVar12) && (fVar12 + pfVar5[1] <= fVar11 + param_5)) {
      ((char *)(gen_frame + 0x38))[(int)(iVar8)] = '\x01';
    }
    if ((gen_bits2f((uint)gen_fl2bits(fVar11) ^ REFG(uint, 0x10920d0)) - param_5 <= fVar12) &&
       (fVar12 + pfVar5[1] <= param_5 - fVar11)) {
      *(undefined1 *)((int)&(*(undefined4 *)(gen_frame + 0x34)) + iVar8) = 1;
    }
    iVar8 = iVar8 + 1;
    pfVar5 = pfVar5 + 2;
    pfVar9 = pfVar9 + 1;
  } while (iVar8 < 4);
  bVar4 = false;
LAB_00d7737a: ;
  uVar2 = param_2 * 3 + 1;
  uVar3 = (undefined2)uVar2;
  if (bVar4) {
    sVar7 = (ushort)param_1 * 3 + 1;
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 2)) = uVar3;
    uVar2 = param_7[2];
    (*(undefined2 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 0)) = sVar7;
    (*(undefined4 *)(gen_frame + 0x34)) = CONCAT22(uVar3,sVar7);
    if (param_7[1] == (uVar2 & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_7,4);
    }
    puVar1 = (undefined4 *)(*param_7 + param_7[1] * 4);
    puVar6 = (undefined8 *)0x0;
    piVar10 = param_7;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = (*(undefined4 *)(gen_frame + 0x34));
      param_7[1] = param_7[1] + 1;
      return (uint)puVar1;
    }
  }
  else {
    if ((((((char *)(gen_frame + 0x38))[0] != '\0') && (((char *)(gen_frame + 0x38))[1] != '\0')) && (((char *)(gen_frame + 0x38))[2] != '\0')) &&
       (((char *)(gen_frame + 0x38))[3] != '\0')) {
      return uVar2;
    }
    if ((((char)(*(undefined4 *)(gen_frame + 0x34)) != '\0') && ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 1)) != '\0')) &&
       (((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 2)) != '\0' && ((*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x34)) + 3)) != '\0')))) {
      return uVar2;
    }
    fVar11 = *(float *)&REFG(undefined, 0x11378f0) * ((float *)(gen_frame + 0x20))[0] + ((float *)(gen_frame + 0x10))[0];
    fVar12 = *(float *)&REFG(undefined, 0x11378f4) * ((float *)(gen_frame + 0x20))[1] + ((float *)(gen_frame + 0x10))[1];
    fVar13 = *(float *)&REFG(undefined, 0x11378f8) * ((float *)(gen_frame + 0x20))[2] + ((float *)(gen_frame + 0x10))[2];
    fVar14 = *(float *)&REFG(undefined, 0x11378fc) * ((float *)(gen_frame + 0x20))[3] + ((float *)(gen_frame + 0x10))[3];
    fVar15 = fVar13 * fVar13 + fVar11 * fVar11;
    fVar16 = fVar14 * fVar14 + fVar12 * fVar12;
    fVar17 = fVar11 * fVar11 + fVar13 * fVar13;
    fVar18 = fVar12 * fVar12 + fVar14 * fVar14;
    fVar19 = fVar16 + fVar15;
    fVar15 = fVar15 + fVar16;
    fVar20 = fVar18 + fVar17;
    fVar17 = fVar17 + fVar18;
    memset(&auVar27, 0, 12);
    (*(undefined4 *)((char *)&auVar27 + 12)) = 0;
    (*(undefined4 *)((char *)&auVar28 + 4)) = (undefined4)gen_fl2bits(fVar15);
    (*(undefined4 *)((char *)&auVar28 + 0)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar28 + 8)) = (undefined4)gen_fl2bits(fVar20);
    (*(undefined4 *)((char *)&auVar28 + 12)) = (undefined4)gen_fl2bits(fVar17);
    gen_rsqrtps(&(auVar28), &(auVar27), &(auVar28));
    fVar23 = (*(float *)((char *)&auVar28 + 0));
    fVar24 = (*(float *)((char *)&auVar28 + 4));
    fVar25 = (*(float *)((char *)&auVar28 + 8));
    fVar26 = (*(float *)((char *)&auVar28 + 12));
    fVar16 = *(float *)&REFG(undefined, 0x11378e0) - (fVar23 * fVar19) * fVar23;
    fVar18 = *(float *)&REFG(undefined, 0x11378e4) - (fVar24 * fVar15) * fVar24;
    fVar21 = *(float *)&REFG(undefined, 0x11378e8) - (fVar25 * fVar20) * fVar25;
    fVar22 = *(float *)&REFG(undefined, 0x11378ec) - (fVar26 * fVar17) * fVar26;
    fVar23 = *(float *)&REFG(undefined, 0x11378f0) * fVar23;
    fVar24 = *(float *)&REFG(undefined, 0x11378f4) * fVar24;
    fVar25 = *(float *)&REFG(undefined, 0x11378f8) * fVar25;
    fVar26 = *(float *)&REFG(undefined, 0x11378fc) * fVar26;
    if (param_6[1] == (param_6[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_6,0x20);
    }
    puVar6 = (undefined8 *)(param_6[1] * 0x20 + *param_6);
    piVar10 = param_6;
    if (puVar6 != (undefined8 *)0x0) {
      *puVar6 = CONCAT44((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar15 <= 0.0) &
                                                      (uint)gen_fl2bits(fVar18 * fVar24)) * fVar12),
                         (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar19 <= 0.0) &
                                                      (uint)gen_fl2bits(fVar16 * fVar23)) * fVar11))
      ;
      puVar6[1] = CONCAT44((uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar17 <= 0.0) &
                                                        (uint)gen_fl2bits(fVar22 * fVar26)) * fVar14
                                            ),
                           (uint)gen_fl2bits(gen_bits2f(~-(uint)(fVar20 <= 0.0) &
                                                        (uint)gen_fl2bits(fVar21 * fVar25)) * fVar13
                                            ));
      puVar6[2] = CONCAT62((*(undefined6 *)(gen_frame + 0x2)),uVar3);
      puVar6[3] = (*(undefined8 *)(gen_frame + 0x8));
    }
  }
  piVar10[1] = piVar10[1] + 1;
  return (uint)puVar6;
}

/* ref: FUN_00d774d0 */
GEN_FRAME uint GEN_THISCALL F_00d774d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd774d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77510 */
GEN_FRAME uint GEN_THISCALL F_00d77510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 0x10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77560 */
GEN_FRAME uint GEN_THISCALL F_00d77560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 10 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775b0 */
GEN_FRAME uint GEN_THISCALL F_00d775b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd775b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,2);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77260(this GEN_EDX_ARG,*param_1 + 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d775f0 */
GEN_FRAME uint GEN_THISCALL F_00d775f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd775f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,4);
  iVar2 = 0;
  if (0 < param_1[1]) {
    do {
      uVar1 = F_00d77280(this GEN_EDX_ARG,*param_1 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d77630 */
GEN_FRAME unsigned int GEN_THISCALL F_00d77630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      param_1 = (int *)((int)param_1 + 0x20);
      iVar2 = iVar2 + 1;
    } while (iVar2 < piVar1[1]);
  }
  return;
}

/* ref: FUN_00d77690 */
GEN_FRAME uint GEN_THISCALL F_00d77690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd77690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = F_00d77050(this GEN_EDX_FWD,4);
  iVar3 = 0;
  if (0 < param_1[1]) {
    iVar2 = 0;
    do {
      uVar1 = F_00d77280(this GEN_EDX_ARG,*param_1 + iVar2);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar3 < param_1[1]);
  }
  return uVar1;
}

/* ref: FUN_00d776d0 */
GEN_FRAME uint GEN_THISCALL F_00d776d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd776d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,4);
  uVar1 = (*(uint *)&gen_args[1]);
  iVar4 = 0;
  if (0 < *(int *)((*(uint *)&gen_args[1]) + 4)) {
    iVar3 = 0;
    do {
      (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(*(float *)(*(int *)uVar1 + 4 + iVar3) * REFG(float, 0x1137338));
      uVar2 = F_00d77280((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar4 < *(int *)(uVar1 + 4));
  }
  return uVar2;
}

/* ref: FUN_00d77730 */
GEN_FRAME unsigned int GEN_THISCALL F_00d77730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      F_00d77260((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(int * PTR32 *)&gen_args[1]));
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0xc;
    } while (iVar5 < piVar1[1]);
  }
  return;
}

/* ref: FUN_00d77790 */
GEN_FRAME unsigned int GEN_THISCALL F_00d77790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x6)));
      F_00d77260(this GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x8)));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_1[1]);
  }
  return;
}

/* ref: FUN_00d777f0 */
GEN_FRAME uint GEN_THISCALL F_00d777f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1 GEN_EDX_FWD);
  (*(uint *)(gen_frame + 0x294)) = uVar3;
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[2]) + 0x40)));
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
  iVar5 = piVar1[4];
  (*(uint *)(gen_frame + 0x298)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x200)) = 0;
  (*(undefined4 *)(gen_frame + 0x204)) = 0;
  (*(undefined4 *)(gen_frame + 0x208)) = 0x80000000;
  (*(undefined4 *)(gen_frame + 0x234)) = 0;
  (*(undefined4 *)(gen_frame + 0x238)) = 0;
  (*(undefined4 *)(gen_frame + 0x23c)) = 0x80000000;
  if (iVar5 * 0xc == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2b4)) = (float *)0x0;
LAB_00d778e9: ;
    (*(int *)(gen_frame + 0x274)) = ((int)0x80000000);
  }
  else {
    (*(int *)(gen_frame + 0x240)) = iVar5 * 0x60;
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
      iVar10 = (*(int *)(gen_frame + 0x2bc)) - 1;
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
      iVar5 = (*(int *)(gen_frame + 0x2bc)) - 1;
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
  F_00d771d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined2 *)(gen_frame + 0x20c)),0x28);
  F_00d76ff0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x2c0)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77510((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d774d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d775b0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x278)));
  F_00d77560((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x260)));
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x200)));
  F_00d77630((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x250)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d775f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x284)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d77690((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x29c)));
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x234)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d776d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,(uint)&(*(undefined4 *)(gen_frame + 0x2a8)));
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  if (uVar3 != 0) {
    uVar3 = piVar1[10];
    (*(int *)(gen_frame + 0x274)) = piVar1[4] * 0x30;
    (*(int * PTR32 *)(gen_frame + 0x290)) = (int *)(piVar1[4] * 0x30);
    (*(int * PTR32 *)&gen_args[3]) = (int *)piVar1[0xd];
    (*(int *)(gen_frame + 0x270)) = piVar1[5] * 4;
    (*(uint *)(gen_frame + 0x298)) = (*(uint *)(gen_frame + 0x294));
    (*(int * PTR32 *)&gen_args[1]) = (int *)uVar3;
    do {
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x29c)),uVar3);
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x234)),uVar3);
      F_00d77790((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x278)),(*(int * PTR32 *)&gen_args[1]));
      F_00d77730((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x2a8)),(*(int * PTR32 *)&gen_args[3]));
      F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
      uVar3 = uVar3 + (int)(*(int * PTR32 *)(gen_frame + 0x290));
      (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[1]) + (*(int *)(gen_frame + 0x274)))));
      (*(int * PTR32 *)&gen_args[3]) = ((int *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[3]) + (*(int *)(gen_frame + 0x270)))));
      uVar7 = (*(uint *)(gen_frame + 0x298)) - 1;
      (*(uint *)(gen_frame + 0x298)) = uVar7;
    } while (uVar7 != 0);
  }
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x10);
  F_00d77050((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,0x40);
  iVar5 = ((piVar1[0xb] + 1) * 0x10 + piVar1[0xe]) * 4;
  iVar8 = *((int *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 0x3c;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x1e663ab1,"Compression");
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar5;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Original Size ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar10 = iVar8;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG," Compressed Size ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  puVar11 = &REFG(undefined, 0x1137a30);
  fVar9 = (float)iVar5 / (float)iVar8;
  uVar3 = F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Compression Ratio: ");
  pvVar6 = (undefined *)F_00d9ffe0(uVar3 GEN_EDX_ARG,fVar9);
  F_00d9fe80(pvVar6 GEN_EDX_ARG,puVar11);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x18d);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x264))) - (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Reference Translations: ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",399);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xb] * 3 - (*(int *)(gen_frame + 0x27c))) - (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Reference Rotations:    ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",400);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = piVar1[0xb] * 3;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Reference Scales:       ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x191);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (piVar1[0xe] - (*(int *)(gen_frame + 0x2ac))) - (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Reference Floats:       ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x192);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x264));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Static Translations:   ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x194);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x254));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Static Rotations:      ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x195);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Static Scales:         ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,uVar12);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x196);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x288));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Static Floats:         ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x197);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2a0));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Dynamic Translations:  ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x199);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x27c));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Dynamic Rotations:     ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19a);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  uVar12 = 0;
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Dynamic Scales:        ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,uVar12);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19b);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  F_00da0a80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar5 = (*(int *)(gen_frame + 0x2ac));
  pvVar6 = (undefined *)F_00d9fe80(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG,"Dynamic Floats:        ");
  F_00d9ff40(pvVar6 GEN_EDX_ARG,iVar5);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),
             "Animation\\Quantized\\hkaQuantizedAnimationCtor.cpp",0x19c);
  F_00d9fda0(&(*(undefined * PTR32 *)(gen_frame + 0x2c0)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
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
GEN_FRAME uint GEN_THISCALL F_00d78690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  
  F_00d739c0(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
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
      iVar3 = iVar3 - 1;
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  F_00d76bb0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,this);
  F_00d777f0(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x14)),&(*(undefined8 * PTR32 *)(gen_frame + 0x20)));
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x38)),iVar2 << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x34))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x30)),(*(int *)(gen_frame + 0x34)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78830 */
GEN_FRAME uint GEN_THISCALL F_00d78830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
  F_00d739c0(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
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
        F_00d76cc0(puVar1 GEN_EDX_ARG);
        iVar3 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar3 + 0x10);
      iVar2 = iVar2 - 1;
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
        F_00d76cc0(puVar1 GEN_EDX_ARG);
        iVar5 = ((int)(uint)(puVar1));
      }
      puVar1 = (undefined8 *)(iVar5 + 0x10);
      iVar3 = iVar3 - 1;
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
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,this);
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,param_1,param_2,&(*(undefined8 * PTR32 *)(gen_frame + 0x1c)),&(*(undefined8 * PTR32 *)(gen_frame + 0x28)));
  if (-1 < (*(int *)(gen_frame + 0x40))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x48)),(*(int *)(gen_frame + 0x40)) << 4);
  }
  if (-1 < (*(int *)(gen_frame + 0x3c))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),(*(undefined8 * PTR32 *)(gen_frame + 0x44)),(*(int *)(gen_frame + 0x3c)) << 4);
  }
  return (uint)this;
}

/* ref: FUN_00d78a30 */
GEN_FRAME uint GEN_THISCALL F_00d78a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  F_00d739c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,*(undefined4 *)((*(int *)&gen_args[1]) + 0xc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0x80000000;
  F_00d76bb0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  F_00d777f0(((undefined1 *)(gen_frame + 0xc)) GEN_EDX_ARG,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)&gen_args[3]),&(*(undefined4 *)&gen_args[6]));
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
GEN_NOFRAME uint GEN_THISCALL F_00d78ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd78ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1135b5c));
  uVar1 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar1 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00d78b30 */
GEN_FRAME uint GEN_THISCALL F_00d78b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78b40 */
GEN_FRAME uint GEN_THISCALL F_00d78b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78b40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *in_ecx;
}

/* ref: FUN_00d78bb0 */
GEN_FRAME uint GEN_THISCALL F_00d78bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78bb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78c00 */
GEN_FRAME uint GEN_THISCALL F_00d78c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d78c50 */
GEN_FRAME uint GEN_THISCALL F_00d78c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78c50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d78cb0 */
GEN_FRAME uint GEN_THISCALL F_00d78cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d78cd0 */
GEN_FRAME uint GEN_THISCALL F_00d78cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00d78cf0 */
GEN_FRAME uint F_00d78cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00d78d40 */
GEN_FRAME uint GEN_THISCALL F_00d78d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d78d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78d60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) << 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 0xfU)) >> 4;
  return uVar2;
}

/* ref: FUN_00d78da0 */
GEN_FRAME unsigned int F_00d78da0(unsigned int gen_a0, unsigned int gen_a1)
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
        F_00d76cc0(in_ecx GEN_EDX_ARG);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d78de0 */
GEN_FRAME uint GEN_THISCALL F_00d78de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78de0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)&gen_args[1]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[1])));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[1]));
  *puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  return uVar2;
}

/* ref: FUN_00d78e80 */
GEN_FRAME uint GEN_THISCALL F_00d78e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d78ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd78ea0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 8)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 7U)) >> 3;
  return uVar2;
}

/* ref: FUN_00d78f00 */
GEN_FRAME uint GEN_THISCALL F_00d78f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 4);
  return uVar1;
}

/* ref: FUN_00d78f20 */
GEN_FRAME uint F_00d78f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f30 */
GEN_FRAME uint GEN_THISCALL F_00d78f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d78f50 */
GEN_FRAME uint F_00d78f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f60 */
GEN_FRAME uint GEN_THISCALL F_00d78f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00d78f80 */
GEN_FRAME uint F_00d78f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78f90 */
GEN_FRAME uint GEN_THISCALL F_00d78f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78f90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d78fb0 */
GEN_FRAME uint F_00d78fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d78fc0 */
GEN_FRAME uint GEN_THISCALL F_00d78fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd78fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d78fe0 */
GEN_FRAME uint F_00d78fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd78fe0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d79000 */
GEN_FRAME uint GEN_THISCALL F_00d79000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 8);
  return uVar1;
}

/* ref: FUN_00d79110 */
GEN_FRAME uint GEN_THISCALL F_00d79110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
        F_00d76cc0(in_ecx GEN_EDX_ARG);
        iVar1 = ((int)(uint)(in_ecx));
      }
      in_ecx = iVar1 + 0x10;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79190 */
GEN_FRAME uint GEN_THISCALL F_00d79190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d791d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d79210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d79280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME unsigned int F_00d792f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d79320 */
GEN_FRAME unsigned int F_00d79320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d79350 */
GEN_FRAME unsigned int F_00d79350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d793a0 */
GEN_FRAME unsigned int F_00d793a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d793d0 */
GEN_FRAME unsigned int F_00d793d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d79460 */
GEN_FRAME uint GEN_THISCALL F_00d79460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d794a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d794e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d79570 */
GEN_FRAME uint GEN_THISCALL F_00d79570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d795c0 */
GEN_FRAME uint GEN_THISCALL F_00d795c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d79620 */
GEN_FRAME uint GEN_THISCALL F_00d79620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d79670 */
GEN_FRAME uint GEN_THISCALL F_00d79670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  return (uint)puVar1;
}

/* ref: FUN_00d796b0 */
GEN_FRAME uint GEN_THISCALL F_00d796b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd796b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d796f0 */
GEN_FRAME uint GEN_THISCALL F_00d796f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd796f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79730 */
GEN_FRAME uint GEN_THISCALL F_00d79730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd79730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79770 */
GEN_FRAME uint GEN_THISCALL F_00d79770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd79770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d797b0 */
GEN_FRAME uint GEN_THISCALL F_00d797b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd797b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d797f0 */
GEN_FRAME uint GEN_THISCALL F_00d797f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd797f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 8);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d79830 */
GEN_FRAME uint GEN_THISCALL F_00d79830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d79880 */
GEN_FRAME uint GEN_THISCALL F_00d79880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d798e0 */
GEN_FRAME uint GEN_THISCALL F_00d798e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d79930 */
GEN_FRAME uint GEN_THISCALL F_00d79930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return (uint)puVar1;
}

/* ref: FUN_00d79970 */
GEN_NOFRAME uint GEN_THISCALL F_00d79970(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d799b0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d799f0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79a30(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79a70(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79ab0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79af0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79b30(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79b70(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79bb0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79bf0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d79c30(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint F_00d79c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c80 */
GEN_FRAME uint F_00d79c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd79c80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 - param_1;
}

/* ref: FUN_00d79c90 */
GEN_FRAME uint F_00d79c90(unsigned int gen_a0)
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
GEN_FRAME uint F_00d79cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return ((1 << ((byte)param_1 & 0x1f)) - (param_1 >> 5 & 1U)) - 1;
}

/* ref: FUN_00d79ce0 */
GEN_FRAME uint F_00d79ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79ce0u, gen_a0, 0u, 0u, 0u);
  if (((*(int *)&gen_a0) != 2) && ((*(int *)&gen_a0) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00d79d20 */
GEN_FRAME uint GEN_THISCALL F_00d79d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int GEN_THISCALL F_00d79d60(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd79d60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
  return;
}

/* ref: FUN_00d79da0 */
GEN_FRAME uint GEN_STDCALL F_00d79da0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79da0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 * 9;
}

/* ref: FUN_00d79dc0 */
GEN_FRAME uint GEN_STDCALL F_00d79dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xd79dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (param_1 % 9) / 3 + param_1 % 9 + (param_1 / 9) * 0xc;
}

/* ref: FUN_00d79e40 */
GEN_FRAME uint F_00d79e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79e40u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_edx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  if (((int)(*(uint *)&gen_a0) <= (int)param_3) && ((*(uint *)&gen_a0) = in_edx, (int)param_3 <= (int)in_edx)) {
    (*(uint *)&gen_a0) = param_3;
  }
  return (*(uint *)&gen_a0);
}

/* ref: FUN_00d79e80 */
GEN_FRAME unsigned int GEN_THISCALL F_00d79e80(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME unsigned int GEN_THISCALL F_00d79ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *(undefined4 *)((int)this + param_2 * 4 + 0x40) = *(undefined4 *)((int)this + 0x38);
  F_00d7cd40((undefined *)((int)this + 0x34) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return;
}

/* ref: FUN_00d79f10 */
GEN_FRAME uint GEN_THISCALL F_00d79f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd79f10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  *(undefined4 *)((int)this + param_2 * 4 + 0x70) = *(undefined4 *)((int)this + 0x68);
  uVar1 = F_00d7cad0((undefined *)((int)this + 100) GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),*param_1,param_1[1]);
  return uVar1;
}

/* ref: FUN_00d79f40 */
GEN_NOFRAME uint GEN_THISCALL F_00d79f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd79f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x340];
  code * pcVar1;
  undefined * pvVar2;
  int iVar3;
  float * pfVar4;
  int iVar5;
  uint uVar6;
  undefined * pvVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int * piVar13;
  uint * puVar14;
  ushort uVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float * pfVar19;
  float fVar20;
  float * pfVar21;
  char * pcVar22;
  undefined * puVar23;
  char * pcVar24;
  undefined * puVar25;
  undefined * puVar26;
  char * pcVar27;
  char * pcVar28;
  
  (*(undefined * PTR32 *)(gen_frame + 0x2cc)) = this;
  *(undefined4 *)((int)this + 8) = 5;
  F_00d7dbd0(((int *)(gen_frame + 0x264)) GEN_EDX_FWD,param_2,param_1,param_3);
  iVar5 = ((int *)(gen_frame + 0x264))[0];
  iVar3 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136c54)));
  (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)(uintptr_t)gen_fl2bits((float)(REFG(float, 0x1136e98))));
  if (iVar3 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = (float *)0x0;
LAB_00d79ff7: ;
    (*(uint *)(gen_frame + 0x21c)) = 0x80000000;
  }
  else {
    (*(int *)(gen_frame + 0x218)) = iVar3 * 0xc;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x218)))));
    (*(float * PTR32 *)(gen_frame + 0x2d4)) = pfVar4;
    (*(uint *)(gen_frame + 0x21c)) = (*(int *)(gen_frame + 0x218)) / 0xc;
    if ((*(int *)(gen_frame + 0x218)) / 0xc == 0) goto LAB_00d79ff7;
  }
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4));
  if (0 < iVar3) {
    do {
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)(gen_frame + 0x314)))));
        pfVar4[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
        pfVar4[2] = (*(float *)(gen_frame + 0x31c));
      }
      pfVar4 = pfVar4 + 3;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  iVar5 = *(int *)(iVar5 + 0x1c) * 9 + *(int *)(iVar5 + 0x40);
  if (iVar5 == 0) {
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = (float *)0x0;
  }
  else {
    (*(int *)(gen_frame + 0x214)) = iVar5 * 4;
    pfVar4 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x214)))));
    uVar6 = (int)((*(int *)(gen_frame + 0x214)) + ((*(int *)(gen_frame + 0x214)) >> 0x1f & 3U)) >> 2;
    (*(float * PTR32 *)(gen_frame + 0x2d8)) = pfVar4;
    (*(uint *)(gen_frame + 0x210)) = uVar6;
    if (uVar6 != 0) goto LAB_00d7a07d;
  }
  (*(uint *)(gen_frame + 0x210)) = 0x80000000;
LAB_00d7a07d: ;
  piVar13 = (*(int * PTR32 *)(gen_frame + 0x26c));
  pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8));
  if (0 < iVar5) {
    do {
      if (pfVar4 != (float *)0x0) {
        *pfVar4 = 1.4013e-45;
      }
      pfVar4 = pfVar4 + 1;
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  if ((*(int *)(param_2 + 0x34) == 0) && (0 < (*(int * PTR32 *)(gen_frame + 0x26c))[5])) {
    F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
    F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,
                 "Your skeleton does not have reference floats but your animation does have float tracks.  Predictive compression requires reference floats.  You must re-export your assets.  Compression will proceed assuming zero for all reference floats."
                );
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
              (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,1,0xabbad892,((float *)(gen_frame + 0x0)),
               "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x144);
    F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  }
  iVar5 = 0;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13 GEN_EDX_ARG);
    } while (iVar5 < (int)uVar6);
  }
  (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x0;
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13 GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar3 = 0;
      if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2d4));
        do {
          if (iVar3 < iVar5) {
            iVar11 = iVar3 / 9;
            iVar9 = (*(int *)(gen_frame + 0x274));
          }
          else {
            iVar11 = iVar3 - iVar5;
            iVar9 = (*(int *)(gen_frame + 0x280));
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
          if (*(int *)(iVar9 + iVar11 * 4) != -1) {
            if (iVar3 < iVar5) {
              pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7c7b0((piVar13[4] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) +
                                              *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar3 / 9) * 4)))) * 0x30 +
                                              piVar13[10],iVar3 % 9))));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            }
            else {
              pfVar19 = *((float * PTR32 *)GEN_TOP((piVar13[0xd] +
                         (piVar13[5] * (int)(*(float * PTR32 *)(gen_frame + 0x30c)) + *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar3 - iVar5) * 4)))) * 4
                         )));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
            if ((!GEN_ISNAN(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)))) && !GEN_ISNAN(*pfVar4)) &&
                (!(((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *pfVar4) && ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) != *pfVar4)) {
              (*(float * PTR32 *)(gen_frame + 0x304))[1] = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
            pfVar4 = (*(float * PTR32 *)(gen_frame + 0x304));
            if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < *(*(float * PTR32 *)(gen_frame + 0x304))) {
              *(*(float * PTR32 *)(gen_frame + 0x304)) = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4 + 3;
          iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5);
      }
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x30c)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x30c)) = pfVar4;
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar13 + 0x1c))(piVar13 GEN_EDX_ARG);
    } while ((int)pfVar4 < (int)uVar6);
  }
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
  iVar11 = 0;
  iVar3 = ((int *)(gen_frame + 0x264))[0];
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar5) {
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
    do {
      if (iVar11 < iVar5) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar5) * 4)));
      }
      if (iVar5 != -1) {
        fVar20 = F_00d7cff0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,iVar11);
        (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar20)));
        fVar17 = ((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
        if (fVar17 < fVar20) {
          fVar17 = fVar20;
        }
        *pfVar4 = fVar17;
        if (iVar11 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) {
          fVar17 = F_00d7c7b0((iVar11 / 9) * 0x30 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x24),iVar11 % 9);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar17)));
        }
        else {
          iVar5 = iVar11 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
          if (iVar5 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x34)) {
            fVar17 = *((float *)GEN_TOP((*(int *)(((int *)(gen_frame + 0x264))[0] + 0x30) + iVar5 * 4)));
          }
          else {
            fVar17 = 0.0;
          }
        }
        fVar20 = *pfVar4;
        if (pfVar4[-1] - pfVar4[-2] < fVar20 * REFG(float, 0x10928e4)) {
          fVar18 = ABS(pfVar4[-1] - fVar17);
          fVar17 = ABS(pfVar4[-2] - fVar17);
          ((float *)(gen_frame + 0x200))[0] = fVar18;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[1] = 0.0;
          ((float *)(gen_frame + 0x200))[2] = 0.0;
          ((float *)(gen_frame + 0x200))[3] = 0.0;
          (*(float *)(gen_frame + 0x310)) = fVar17;
          (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
          (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
          (*(float *)(gen_frame + 0x31c)) = 0.0;
          if (fVar17 < fVar18) {
            fVar17 = fVar18;
          }
          if (fVar17 < fVar20) {
            fVar17 = 1.4013e-45;
          }
          else {
            fVar17 = 0.0;
          }
        }
        else {
          fVar17 = 2.8026e-45;
        }
        (*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] = fVar17;
        pfVar21 = ((float *)(uintptr_t)gen_fl2bits((float)(F_00d7d0e0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,iVar11))));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar21;
        pfVar19 = ((float *)GEN_TOP((((pfVar4[-1] - pfVar4[-2]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c))));
        if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19))) < ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar21)))) {
          pfVar19 = pfVar21;
        }
        *pfVar4 = ((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar19)));
        iVar3 = ((int *)(gen_frame + 0x264))[0];
      }
      iVar5 = *(int *)(iVar3 + 0x1c) * 9;
      iVar11 = iVar11 + 1;
      pfVar4 = pfVar4 + 3;
    } while (iVar11 < *(int *)(iVar3 + 0x40) + iVar5);
  }
  fVar17 = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x318)))));
  iVar5 = *(int *)(iVar3 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar11 = 0;
    pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2d8)) + 3;
    do {
      if (iVar11 < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        uVar6 = (uint)(*pfVar4 == 1.4013e-45);
        if (pfVar4[1] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11 + 5] == 1.4013e-45) {
          uVar6 = uVar6 + 1;
        }
        if (uVar6 - 1 < 2) {
          iVar5 = 3;
          pfVar19 = pfVar4;
          do {
            if (*pfVar19 == 1.4013e-45) {
              *pfVar19 = 0.0;
            }
            pfVar19 = pfVar19 + 1;
            iVar5 = iVar5 - 1;
          } while (iVar5 != 0);
        }
      }
      iVar5 = *(int *)(iVar3 + 0x1c);
      iVar9 = (int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1;
      iVar11 = iVar11 + 9;
      pfVar4 = pfVar4 + 9;
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar9);
    } while (iVar9 < iVar5);
  }
  iVar11 = 0;
  (*(int *)(gen_frame + 0x2e4)) = 0;
  (*(uint *)(gen_frame + 0x2e8)) = 0;
  (*(uint *)(gen_frame + 0x2ec)) = 0x80000000;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)((uint)gen_fl2bits(fVar17) & 0xffff0000);
  iVar5 = *(int *)(iVar3 + 0x1c);
  (*(float *)(gen_frame + 0x308)) = 0.0;
  if (0 < iVar5) {
    iVar9 = 0;
    iVar3 = iVar11;
    do {
      if (iVar9 < iVar5 * 9) {
        iVar5 = iVar9 / 9;
        iVar10 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar5 = iVar9 + iVar5 * -9;
        iVar10 = (*(int *)(gen_frame + 0x280));
      }
      iVar11 = iVar3 + 1;
      uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) |
               (ushort)(*(int *)(iVar10 + iVar5 * 4) != -1) << ((byte)iVar3 & 0x1f);
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
      (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
        }
        uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
        iVar11 = 0;
      }
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      fVar17 = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      iVar9 = iVar9 + 9;
      (*(float *)(gen_frame + 0x308)) = fVar17;
      iVar3 = iVar11;
    } while ((int)gen_fl2bits(fVar17) < iVar5);
    if (0 < iVar11) {
      if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
      }
      uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
      *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
      (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
      (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
      iVar11 = 0;
    }
  }
  (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)0x0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    iVar5 = ((int *)(gen_frame + 0x264))[0];
    uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    do {
      iVar3 = *(int *)(iVar5 + 0x1c) * 9;
      iVar9 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + iVar3;
      if (iVar9 < iVar3) {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar9 / 9) * 4)));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
      }
      else {
        iVar3 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar9 + *(int *)(iVar5 + 0x1c) * -9) * 4)));
      }
      bVar8 = (byte)iVar11;
      iVar11 = iVar11 + 1;
      uVar15 = uVar15 | (ushort)(iVar3 != -1) << (bVar8 & 0x1f);
      if (iVar11 == 0x10) {
        if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
          iVar5 = ((int *)(gen_frame + 0x264))[0];
        }
        *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = uVar15;
        (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
        uVar15 = 0;
        iVar11 = 0;
      }
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x304)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x304)) = pfVar4;
    } while ((int)pfVar4 < *(int *)(iVar5 + 0x40));
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
  if (0 < iVar11) {
    if ((*(uint *)(gen_frame + 0x2e8)) == ((*(uint *)(gen_frame + 0x2ec)) & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2e4)),2);
    }
    *(ushort *)((*(int *)(gen_frame + 0x2e4)) + (*(uint *)(gen_frame + 0x2e8)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
    (*(uint *)(gen_frame + 0x2e8)) = (*(uint *)(gen_frame + 0x2e8)) + 1;
  }
  uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
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
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  uVar12 = 0;
  (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
  (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
  (*(float *)(gen_frame + 0x31c)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)0x0;
  if (0 < iVar5) {
    (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
    (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2d8));
    (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 1;
    do {
      if ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) < iVar5 * 9) {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + ((int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) / 9) * 4)));
      }
      else {
        iVar5 = *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + ((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + iVar5 * -9) * 4)));
      }
      if (iVar5 != -1) {
        (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x2dc));
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)0x9;
        pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2f4));
        do {
          pfVar21 = (*(float * PTR32 *)(gen_frame + 0x304));
          pfVar19 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x304)))));
          (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar19;
          if (pfVar19 == (float *)0x2) {
            if ((((int)pfVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (fVar20 = F_00d7d0e0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG,pfVar4), fVar17 = REFG(float, 0x1090708),
               bVar16 = GEN_ISNAN((float10)fVar20) || GEN_ISNAN((float10)0),
               bVar16 != (bVar16 || (float10)fVar20 == (float10)0))) {
              *pfVar21 = 4.2039e-45;
              (*(float * PTR32 *)(gen_frame + 0x30c))[-1] = fVar17;
              fVar17 = REFG(float, 0x1087f04);
              *(*(float * PTR32 *)(gen_frame + 0x30c)) = GEN_FLT_TO(*(*(float * PTR32 *)(gen_frame + 0x30c)), REFG(float, 0x1087f04));
              fVar17 = ((fVar17 - (*(float * PTR32 *)(gen_frame + 0x30c))[-1]) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = (float *)0x3;
              if (fVar17 < 0.0) {
                fVar17 = 0.0;
              }
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float * PTR32 *)(gen_frame + 0x30c))[1] = fVar17;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 1 << (bVar8 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
                if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
                }
                *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
LAB_00d7a9f0: ;
                uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
                (*(float *)(gen_frame + 0x31c)) = 0.0;
                (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
                (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
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
              bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
              iVar5 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
              (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar5);
              uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar8 & 0x1f);
              (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
              (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
              if (iVar5 == 0x10) {
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
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            uVar6 = (*(uint *)(gen_frame + 0x250)) + 1;
            (*(uint *)(gen_frame + 0x250)) = uVar6;
            uVar6 = uVar6 & 0x8000000f;
            bVar16 = uVar6 == 0;
            if ((int)uVar6 < 0) {
              bVar16 = (uVar6 - 1 | 0xfffffff0) == 0xffffffff;
            }
            if (bVar16) {
              *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x88) = (*(uint *)(gen_frame + 0x2c4));
            }
LAB_00d7aa89: ;
            if ((*(float * PTR32 *)(gen_frame + 0x2d0)) != (float *)0x1) goto LAB_00d7aa93;
          }
          else {
            if (pfVar19 != (float *)0x0) goto LAB_00d7aa89;
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
                 (short)(((int)((int)(uintptr_t)pfVar4) % 9) / 3) + (short)((int)((int)(uintptr_t)pfVar4) % 9) +
                 (short)((int)((int)(uintptr_t)pfVar4) / 9) * 0xc;
            (*(uint *)(gen_frame + 0x22c)) = (*(uint *)(gen_frame + 0x22c)) + 1;
LAB_00d7aa93: ;
            if ((((int)pfVar4 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9) && ((int)((int)(uintptr_t)pfVar4) % 9 - 3U < 3)) &&
               (((*(uint *)(gen_frame + 0x25c)) == 0 ||
                ((float *)(uint)*(ushort *)((*(int *)(gen_frame + 0x258)) - 2 + (*(uint *)(gen_frame + 0x25c)) * 2) != (*(float * PTR32 *)(gen_frame + 0x2f0)))))) {
              if ((*(uint *)(gen_frame + 0x25c)) == ((*(uint *)(gen_frame + 0x260)) & 0x3fffffff)) {
                F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x258)),2);
              }
              *(undefined2 *)((*(int *)(gen_frame + 0x258)) + (*(uint *)(gen_frame + 0x25c)) * 2) = (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x2f0)) + 0));
              (*(uint *)(gen_frame + 0x25c)) = (*(uint *)(gen_frame + 0x25c)) + 1;
            }
          }
          (*(float * PTR32 *)(gen_frame + 0x304)) = (*(float * PTR32 *)(gen_frame + 0x304)) + 1;
          (*(float * PTR32 *)(gen_frame + 0x30c)) = (*(float * PTR32 *)(gen_frame + 0x30c)) + 3;
          pfVar4 = (float *)((int)pfVar4 + 1);
          pfVar19 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) - 1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
        } while (pfVar19 != (float *)0x0);
      }
      iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 9);
      (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 9;
      (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2dc)) + 0x1b;
      pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
    } while ((int)pfVar4 < iVar5);
    uVar12 = (uint)(*(float * PTR32 *)(gen_frame + 0x318)) & 0xffff;
  }
  (*(uint *)(gen_frame + 0x224)) = (*(uint *)(gen_frame + 0x250));
  fVar17 = (*(float *)(gen_frame + 0x31c));
  if (0 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
    do {
      bVar8 = (byte)(uint)gen_fl2bits(fVar17);
      fVar17 = gen_bits2f((int)gen_fl2bits(fVar17) + 1);
      uVar15 = (ushort)uVar12 | 1 << (bVar8 & 0x1f);
      uVar12 = (uint)uVar15;
      if (fVar17 == 2.24208e-44) {
        (*(float *)(gen_frame + 0x31c)) = fVar17;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
        if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
          F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
        }
        *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = uVar15;
        (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
        (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
        (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(((uint)(*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)) << 0x10)));
        (*(float *)(gen_frame + 0x31c)) = 0.0;
        goto LAB_00d7ab93;
      }
    } while (0 < (int)gen_fl2bits(fVar17));
    (*(float *)(gen_frame + 0x31c)) = fVar17;
    (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
    (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
  }
LAB_00d7ab93: ;
  iVar5 = 0;
  if (0 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40)) {
    do {
      iVar11 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
      iVar3 = iVar11 + iVar5;
      if (iVar3 < iVar11) {
        iVar3 = iVar3 / 9;
        iVar11 = (*(int *)(gen_frame + 0x274));
      }
      else {
        iVar3 = iVar3 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * -9;
        iVar11 = (*(int *)(gen_frame + 0x280));
      }
      if (*(int *)(iVar11 + iVar3 * 4) != -1) {
        iVar3 = iVar5 + *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c) * 9;
        if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 2.8026e-45) {
          (*(float *)(gen_frame + 0x28c)) = (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 2] * REFG(float, 0x10928e4);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = ((float *)GEN_TOP((((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068))));
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
          bVar8 = (byte)(uint)gen_fl2bits((*(float *)(gen_frame + 0x31c)));
          iVar3 = (int)gen_fl2bits((*(float *)(gen_frame + 0x31c))) + 1;
          (*(float *)(gen_frame + 0x31c)) = gen_bits2f(iVar3);
          uVar15 = (ushort)(*(float * PTR32 *)(gen_frame + 0x318)) | 0 << (bVar8 & 0x1f);
          (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = uVar15;
          (*(float * PTR32 *)(gen_frame + 0x318)) = ((float *)GEN_TOP(CONCAT22((*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 2)),uVar15)));
          if (iVar3 == 0x10) {
            if ((*(uint *)(gen_frame + 0x2fc)) == ((*(uint *)(gen_frame + 0x300)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2f8)),2);
            }
            uVar6 = (uint)(*(float * PTR32 *)(gen_frame + 0x318));
            *(ushort *)((*(int *)(gen_frame + 0x2f8)) + (*(uint *)(gen_frame + 0x2fc)) * 2) = (ushort)(*(float * PTR32 *)(gen_frame + 0x318));
            (*(uint *)(gen_frame + 0x2fc)) = (*(uint *)(gen_frame + 0x2fc)) + 1;
            (*(undefined2 *)((char *)&(*(float * PTR32 *)(gen_frame + 0x318)) + 0)) = 0;
            (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)(uVar6 & 0xffff0000);
            (*(float *)(gen_frame + 0x31c)) = 0.0;
          }
          if ((*(uint *)(gen_frame + 0x238)) == ((*(uint *)(gen_frame + 0x23c)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x234)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x234)) + (*(uint *)(gen_frame + 0x238)) * 2) = (short)iVar5;
          (*(uint *)(gen_frame + 0x238)) = (*(uint *)(gen_frame + 0x238)) + 1;
        }
        else if ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar3] == 0.0) {
          (*(float *)(gen_frame + 0x220)) = ((*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3 + 1] + (*(float * PTR32 *)(gen_frame + 0x2d4))[iVar3 * 3]) * REFG(float, 0x1088068);
          if ((*(uint *)(gen_frame + 0x2b8)) == ((*(uint *)(gen_frame + 0x2bc)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x2b4)),4);
          }
          *(float *)((*(int *)(gen_frame + 0x2b4)) + (*(uint *)(gen_frame + 0x2b8)) * 4) = (*(float *)(gen_frame + 0x220));
          (*(uint *)(gen_frame + 0x2b8)) = (*(uint *)(gen_frame + 0x2b8)) + 1;
          if ((*(uint *)(gen_frame + 0x244)) == ((*(uint *)(gen_frame + 0x248)) & 0x3fffffff)) {
            F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x240)),2);
          }
          *(short *)((*(int *)(gen_frame + 0x240)) + (*(uint *)(gen_frame + 0x244)) * 2) = (short)iVar5;
          (*(uint *)(gen_frame + 0x244)) = (*(uint *)(gen_frame + 0x244)) + 1;
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40));
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
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  if (0 < (int)uVar6) {
    do {
      uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
      if ((int)(uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304))) < 0x10) {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)(uVar6 - (int)(*(float * PTR32 *)(gen_frame + 0x304)));
      }
      else {
        (*(float * PTR32 *)(gen_frame + 0x30c)) = (float *)0x10;
      }
      pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)(gen_frame + 0x314)),((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0) - 1 & (uint)(*(float * PTR32 *)(gen_frame + 0x30c)),0xc)
        ;
      }
      iVar3 = ((int)(*(float * PTR32 *)(gen_frame + 0x318)) - (int)pfVar4) - 1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
      if (-1 < iVar3) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + (int)((int)(uintptr_t)pfVar4) * 3 + iVar3 * 3 + 2);
        do {
          uVar6 = *puVar14;
          puVar14[-1] = 0;
          if (-1 < (int)uVar6) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(uVar6 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar3 = iVar3 - 1;
          puVar14 = puVar14 - 3;
          iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318));
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
        } while (-1 < iVar3);
      }
      iVar3 = (int)pfVar4 - iVar5;
      piVar13 = (*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3;
      if (0 < iVar3) {
        do {
          if (piVar13 != (int *)0x0) {
            *piVar13 = 0;
            piVar13[1] = 0;
            piVar13[2] = ((int)0x80000000);
          }
          piVar13 = piVar13 + 3;
          iVar3 = iVar3 - 1;
        } while (iVar3 != 0);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = pfVar4;
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = (float *)0x0;
        (*(float * PTR32 *)(gen_frame + 0x32c)) = (*(float * PTR32 *)(gen_frame + 0x30c));
        (*(float * PTR32 *)(gen_frame + 0x2f0)) = (*(float * PTR32 *)(gen_frame + 0x304));
        iVar5 = ((int *)(gen_frame + 0x264))[0];
        fVar17 = REFG(float, 0x1088068);
        do {
          (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) + (int)(*(int * PTR32 *)(gen_frame + 0x314)));
          iVar3 = *(int *)(iVar5 + 0x1c) * 9;
          iVar11 = 0;
          if (0 < *(int *)(iVar5 + 0x40) + iVar3) {
            (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2d4)) + 2;
            do {
              if (iVar11 < iVar3) {
                iVar9 = iVar11 / 9;
                iVar10 = (*(int *)(gen_frame + 0x274));
              }
              else {
                iVar9 = iVar11 - iVar3;
                iVar10 = (*(int *)(gen_frame + 0x280));
              }
              if ((*(int *)(iVar10 + iVar9 * 4) != -1) &&
                 (((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 2.8026e-45 || ((*(float * PTR32 *)(gen_frame + 0x2d8))[iVar11] == 4.2039e-45)))) {
                if (iVar11 < iVar3) {
                  fVar20 = F_00d7c7b0(((*(int * PTR32 *)(gen_frame + 0x26c))[4] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                        *((int *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (iVar11 / 9) * 4)))) * 0x30 + (*(int * PTR32 *)(gen_frame + 0x26c))[10]
                                        ,iVar11 % 9);
                  (*(float *)(gen_frame + 0x28c)) = fVar20;
                  fVar17 = REFG(float, 0x1088068);
                }
                else {
                  fVar20 = *((float *)GEN_TOP(((*(int * PTR32 *)(gen_frame + 0x26c))[0xd] +
                                     ((*(int * PTR32 *)(gen_frame + 0x26c))[5] * (int)(*(float * PTR32 *)(gen_frame + 0x2f0)) +
                                     *((int *)GEN_TOP(((*(int *)(gen_frame + 0x280)) + (iVar11 - iVar3) * 4)))) * 4)));
                }
                fVar20 = (fVar20 - ((*(float * PTR32 *)(gen_frame + 0x2f4))[-2] + (*(float * PTR32 *)(gen_frame + 0x2f4))[-1]) * fVar17) /
                         (*(*(float * PTR32 *)(gen_frame + 0x2f4)) * REFG(float, 0x10928e4));
                if (*(float *)&REFG(undefined, 0x1088114) <= fVar20) {
                  fVar20 = fVar20 + fVar17;
                }
                else {
                  fVar20 = fVar20 - fVar17;
                }
                iVar5 = (int)fVar20;
                if (iVar5 < -0x1fff) {
                  iVar5 = -0x1fff;
                }
                else if (0x1fff < iVar5) {
                  iVar5 = 0x1fff;
                }
                if ((*(float * PTR32 *)(gen_frame + 0x2dc))[1] == gen_bits2f((uint)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[2]) & 0x3fffffff)) {
                  F_00d95710(&REFG(undefined * PTR32, 0x13516a4),(*(float * PTR32 *)(gen_frame + 0x2dc)),2);
                  fVar17 = REFG(float, 0x1088068);
                }
                *(short *)((int)gen_fl2bits(*(*(float * PTR32 *)(gen_frame + 0x2dc))) + (int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) * 2) =
                     (short)iVar5;
                (*(float * PTR32 *)(gen_frame + 0x2dc))[1] = gen_bits2f((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2dc))[1]) + 1);
                iVar5 = ((int *)(gen_frame + 0x264))[0];
              }
              iVar3 = *(int *)(iVar5 + 0x1c) * 9;
              (*(float * PTR32 *)(gen_frame + 0x2f4)) = (*(float * PTR32 *)(gen_frame + 0x2f4)) + 3;
              iVar11 = iVar11 + 1;
            } while (iVar11 < *(int *)(iVar5 + 0x40) + iVar3);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) + 3;
          (*(float * PTR32 *)(gen_frame + 0x2f0)) = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2f0)) + 1);
          pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x32c)) - 1);
          (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar4;
        } while (pfVar4 != (float *)0x0);
      }
      pfVar4 = (float *)(*(int * PTR32 *)(gen_frame + 0x314))[1];
      (*(float * PTR32 *)(gen_frame + 0x2f0)) = pfVar4;
      (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)0x0;
      if (0 < (int)pfVar4) {
        (*(float * PTR32 *)(gen_frame + 0x2e0)) = pfVar4;
        do {
          if ((int)(*(float * PTR32 *)(gen_frame + 0x2e0)) < 0x10) {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (*(float * PTR32 *)(gen_frame + 0x2e0));
          }
          else {
            (*(float * PTR32 *)(gen_frame + 0x2dc)) = (float *)0x10;
          }
          pfVar4 = (*(float * PTR32 *)(gen_frame + 0x2dc));
          if (((int)(*(float * PTR32 *)(gen_frame + 0x2f4)) <= (int)(*(uint *)(gen_frame + 0x224))) && ((int)(*(uint *)(gen_frame + 0x224)) < (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + (int)(*(float * PTR32 *)(gen_frame + 0x2dc))))
          {
            iVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c) - (int)gen_fl2bits((*(float *)(gen_frame + 0x308)));
            if ((*(uint *)(gen_frame + 0x294)) == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)iVar5;
            uVar6 = (*(uint *)(gen_frame + 0x294)) + 1;
            (*(uint *)(gen_frame + 0x294)) = uVar6;
            if (uVar6 == ((*(uint *)(gen_frame + 0x298)) & 0x3fffffff)) {
              F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x290)),2);
            }
            *(short *)((*(int *)(gen_frame + 0x290)) + (*(uint *)(gen_frame + 0x294)) * 2) = (short)((uint)iVar5 >> 0x10);
            (*(uint *)(gen_frame + 0x294)) = (*(uint *)(gen_frame + 0x294)) + 1;
          }
          if (((int)(*(float * PTR32 *)(gen_frame + 0x30c)) < 0x10) || ((int)pfVar4 < 0x10)) {
            iVar5 = 0x1f;
            pfVar19 = ((float *)(gen_frame + 0x0));
            do {
              iVar5 = iVar5 - 1;
              *pfVar19 = 0.0;
              pfVar19[1] = 0.0;
              pfVar19[2] = 0.0;
              pfVar19[3] = 0.0;
              pfVar19 = pfVar19 + 4;
            } while (-1 < iVar5);
          }
          if (0 < (int)pfVar4) {
            pfVar19 = ((float *)(gen_frame + 0x0));
            (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            iVar5 = (int)((int)(uintptr_t)(*(float * PTR32 *)(gen_frame + 0x2f4))) * 2;
            (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
            do {
              piVar13 = (*(int * PTR32 *)(gen_frame + 0x314));
              pfVar4 = (*(float * PTR32 *)(gen_frame + 0x30c));
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
              if (0 < (int)(*(float * PTR32 *)(gen_frame + 0x30c))) {
                do {
                  *(undefined2 *)pfVar19 = *(undefined2 *)(iVar5 + *piVar13);
                  pfVar19 = (float *)((int)pfVar19 + 2);
                  piVar13 = piVar13 + 3;
                  pfVar4 = (float *)((int)pfVar4 - 1);
                } while (pfVar4 != (float *)0x0);
              }
              pfVar19 = (*(float * PTR32 *)(gen_frame + 0x32c)) + 8;
              iVar5 = iVar5 + 2;
              pfVar4 = (float *)((int)(*(float * PTR32 *)(gen_frame + 0x2d0)) - 1);
              (*(float * PTR32 *)(gen_frame + 0x2d0)) = pfVar4;
              (*(float * PTR32 *)(gen_frame + 0x32c)) = pfVar19;
            } while (pfVar4 != (float *)0x0);
          }
          pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
          iVar3 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
          piVar13 = (int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x28);
          iVar5 = iVar3 + 0x210;
          uVar6 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x30) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar11 = uVar6 * 2;
            if (iVar5 < iVar11) {
              iVar5 = iVar11;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar5,1);
          }
          iVar5 = *piVar13;
          *(int *)((int)pvVar2 + 0x2c) = *(int *)((int)pvVar2 + 0x2c) + 0x210;
          uVar6 = F_00d8a970(((float *)(gen_frame + 0x0)),(*(float * PTR32 *)(gen_frame + 0x30c)),(*(float * PTR32 *)(gen_frame + 0x2dc)),iVar5 + iVar3);
          iVar5 = uVar6 - *piVar13;
          uVar6 = *(uint *)((int)pvVar2 + 0x30) & 0x3fffffff;
          if ((int)uVar6 < iVar5) {
            iVar3 = uVar6 * 2;
            if (iVar3 <= iVar5) {
              iVar3 = iVar5;
            }
            F_00d95690(&REFG(undefined * PTR32, 0x13516ac),piVar13,iVar3,1);
          }
          (*(float * PTR32 *)(gen_frame + 0x2e0)) = (*(float * PTR32 *)(gen_frame + 0x2e0)) - 4;
          iVar3 = (int)(*(float * PTR32 *)(gen_frame + 0x2f4)) + 0x10;
          *(int *)((int)pvVar2 + 0x2c) = iVar5;
          (*(float * PTR32 *)(gen_frame + 0x2f4)) = (float *)iVar3;
        } while (iVar3 < (int)(*(float * PTR32 *)(gen_frame + 0x2f0)));
      }
      iVar5 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x2cc)) + 0x2c);
      (*(float *)(gen_frame + 0x308)) = gen_bits2f(iVar5);
      if ((*(uint *)(gen_frame + 0x2a0)) == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)iVar5;
      uVar6 = (*(uint *)(gen_frame + 0x2a0)) + 1;
      (*(uint *)(gen_frame + 0x2a0)) = uVar6;
      if (uVar6 == ((*(uint *)(gen_frame + 0x2a4)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),&(*(int *)(gen_frame + 0x29c)),2);
      }
      *(short *)((*(int *)(gen_frame + 0x29c)) + (*(uint *)(gen_frame + 0x2a0)) * 2) = (short)((uint)iVar5 >> 0x10);
      (*(uint *)(gen_frame + 0x2a0)) = (*(uint *)(gen_frame + 0x2a0)) + 1;
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x318)) - 1;
      if (-1 < iVar5) {
        puVar14 = (uint *)((*(int * PTR32 *)(gen_frame + 0x314)) + iVar5 * 3 + 2);
        do {
          puVar14[-1] = 0;
          if (-1 < (int)*puVar14) {
            ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),puVar14[-2],(*puVar14 & 0x3fffffff) * 2);
          }
          puVar14[-2] = 0;
          *puVar14 = 0x80000000;
          iVar5 = iVar5 - 1;
          puVar14 = puVar14 - 3;
        } while (-1 < iVar5);
      }
      (*(float * PTR32 *)(gen_frame + 0x318)) = (float *)0x0;
      if (-1 < (int)gen_fl2bits((*(float *)(gen_frame + 0x31c)))) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),(*(int * PTR32 *)(gen_frame + 0x314)),
                   ((uint)gen_fl2bits((*(float *)(gen_frame + 0x31c))) & 0x3fffffff) * 0xc);
      }
      pcVar1 = *(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c);
      iVar5 = (int)(*(float * PTR32 *)(gen_frame + 0x304)) + 0xf;
      (*(int * PTR32 *)(gen_frame + 0x314)) = (int *)0x0;
      (*(float *)(gen_frame + 0x31c)) = -0.0;
      (*(float * PTR32 *)(gen_frame + 0x304)) = (float *)iVar5;
      uVar6 = (*pcVar1)((*(int * PTR32 *)(gen_frame + 0x26c)));
    } while (iVar5 < (int)uVar6);
  }
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x2cc));
  F_00d79ee0((*(undefined * PTR32 *)(gen_frame + 0x2cc)) GEN_EDX_ARG,&(*(int *)(gen_frame + 0x29c)),0);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x290)),1);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2e4)),2);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2f8)),3);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x24c)),4);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x234)),5);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x228)),6);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x240)),7);
  F_00d79ee0(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x258)),8);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2b4)),0);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2c0)),1);
  F_00d79f10(pvVar2 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x2a8)),2);
  iVar5 = *(int *)((int)pvVar2 + 0x38) + 8;
  uVar6 = *(uint *)((int)pvVar2 + 0x3c) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,iVar5,2);
  }
  *(int *)((int)pvVar2 + 0x38) = *(int *)((int)pvVar2 + 0x38) + 8;
  iVar5 = *(int *)((int)pvVar2 + 0x68) + 4;
  uVar6 = *(uint *)((int)pvVar2 + 0x6c) & 0x3fffffff;
  if ((int)uVar6 < iVar5) {
    iVar3 = uVar6 * 2;
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,iVar5,4);
  }
  *(int *)((int)pvVar2 + 0x68) = *(int *)((int)pvVar2 + 0x68) + 4;
  if (*(int *)((int)pvVar2 + 0x38) < (int)(*(uint *)((int)pvVar2 + 0x3c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x34,2,0,*(int *)((int)pvVar2 + 0x38));
  }
  if (*(int *)((int)pvVar2 + 0x68) < (int)(*(uint *)((int)pvVar2 + 0x6c) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 100,4,0,*(int *)((int)pvVar2 + 0x68));
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x1c))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0x3214badc,"Compression");
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar3 = iVar5 * 9;
  uVar6 = 0;
  iVar11 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40) + iVar3;
  ((float *)(gen_frame + 0x200))[0] = 0.0;
  ((float *)(gen_frame + 0x200))[1] = 0.0;
  ((float *)(gen_frame + 0x200))[2] = 0.0;
  ((float *)(gen_frame + 0x200))[3] = 0.0;
  (*(float *)(gen_frame + 0x308)) = 0.0;
  (*(float * PTR32 *)(gen_frame + 0x32c)) = (float *)iVar3;
  if (0 < iVar11) {
    (*(float * PTR32 *)(gen_frame + 0x2d0)) = (float *)((*(int *)(gen_frame + 0x280)) + iVar5 * -0x24);
    do {
      if ((int)uVar6 < (int)(*(float * PTR32 *)(gen_frame + 0x32c))) {
        fVar17 = *((float *)GEN_TOP(((*(int *)(gen_frame + 0x274)) + (uVar6 / 9) * 4)));
      }
      else {
        fVar17 = *(*(float * PTR32 *)(gen_frame + 0x2d0));
      }
      if (fVar17 != -NAN) {
        ((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))] =
             gen_bits2f((int)gen_fl2bits(((float *)(gen_frame + 0x200))[(int)((int)gen_fl2bits((*(float * PTR32 *)(gen_frame + 0x2d8))[uVar6]))]) + 1);
        (*(float *)(gen_frame + 0x308)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x308))) + 1);
      }
      uVar6 = uVar6 + 1;
      (*(float * PTR32 *)(gen_frame + 0x2d0)) = (*(float * PTR32 *)(gen_frame + 0x2d0)) + 1;
    } while ((int)uVar6 < iVar11);
  }
  iVar5 = ((*(int * PTR32 *)(gen_frame + 0x26c))[0xe] + (*(int * PTR32 *)(gen_frame + 0x26c))[0xb] * 0xc) * 4;
  uVar6 = F_00d6eca0(pvVar2 GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x224)) = uVar6;
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  puVar26 = &REFG(undefined, 0x1137b18);
  fVar17 = (float)iVar5 / (float)(int)(*(uint *)(gen_frame + 0x224));
  puVar25 = &REFG(undefined, 0x1137b14);
  puVar23 = &REFG(undefined, 0x1137b0c);
  uVar6 = (*(uint *)(gen_frame + 0x224));
  pvVar7 = (undefined *)F_00d9fe80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,"Compression: ");
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar5);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar23);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,uVar6);
  uVar6 = F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar25);
  pvVar7 = (undefined *)F_00d9ffe0(uVar6 GEN_EDX_ARG,fVar17);
  F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar26);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29d);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  iVar5 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar3 = *(int *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  pcVar27 = " animated channels";
  iVar11 = iVar3 + iVar5 * 8 + iVar5;
  puVar23 = &REFG(undefined, 0x1080808);
  pcVar24 = " floats, ";
  pcVar22 = " bones, ";
  fVar17 = (*(float *)(gen_frame + 0x308));
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,iVar5);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar3);
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar24);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar17));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,puVar23);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,iVar11);
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar27);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x29f);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  pcVar22 = " frames";
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,uVar6);
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a0);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  F_00da0a80(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,((float *)(gen_frame + 0x0)),0x200);
  pcVar28 = " fixed channels";
  pcVar27 = " ranged, ";
  pcVar24 = " reference, ";
  pcVar22 = " static, ";
  fVar17 = ((float *)(gen_frame + 0x200))[1];
  fVar20 = ((float *)(gen_frame + 0x200))[2];
  fVar18 = ((float *)(gen_frame + 0x200))[3];
  pvVar7 = (undefined *)F_00d9ff40(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG,(undefined4)gen_fl2bits(((float *)(gen_frame + 0x200))[0]));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar22);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar17));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar24);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar20));
  pvVar7 = (undefined *)F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar27);
  pvVar7 = (undefined *)F_00d9ff40(pvVar7 GEN_EDX_ARG,(undefined4)gen_fl2bits(fVar18));
  F_00d9fe80(pvVar7 GEN_EDX_ARG,pcVar28);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
            (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((float *)(gen_frame + 0x0)),
             "Animation\\PredictiveCompressed\\hkaPredictiveCompressedAnimationCtor.cpp",0x2a1);
  F_00d9fda0(&(*(int * PTR32 *)(gen_frame + 0x314)) GEN_EDX_ARG);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0x20))))(REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG);
  if (*(int *)((int)pvVar2 + 0x2c) < (int)(*(uint *)((int)pvVar2 + 0x30) & 0x3fffffff)) {
    F_00d957a0(&REFG(undefined * PTR32, 0x13516ac),(int)pvVar2 + 0x28,1,0,*(int *)((int)pvVar2 + 0x2c));
  }
  uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x26c)) + 0x1c))((*(int * PTR32 *)(gen_frame + 0x26c)) GEN_EDX_ARG);
  *(uint *)((int)pvVar2 + 0x84) = uVar6;
  *(undefined4 *)((int)pvVar2 + 0x80) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x40);
  *(undefined4 *)((int)pvVar2 + 0x7c) = *(undefined4 *)(((int *)(gen_frame + 0x264))[0] + 0x1c);
  iVar5 = (*(int * PTR32 *)(gen_frame + 0x26c))[3];
  *(int *)((int)pvVar2 + 0x8c) = ((int *)(gen_frame + 0x264))[0];
  *(int *)((int)pvVar2 + 0xc) = iVar5;
  *(undefined4 *)((int)pvVar2 + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)pvVar2 + 0x14) = *(undefined4 *)(param_1 + 0x20);
  F_00d79e80(pvVar2 GEN_EDX_ARG);
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
  uVar6 = F_00d7ddb0(((int *)(gen_frame + 0x264)) GEN_EDX_ARG);
  return uVar6;
}

/* ref: FUN_00d7bdc0 */
GEN_FRAME uint GEN_THISCALL F_00d7bdc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bdc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  F_00d739c0(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
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
  F_00d6f630(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00d79f40(this GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0x8)));
  F_00d7dd10(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00d7be30 */
GEN_FRAME uint GEN_THISCALL F_00d7be30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7be30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00d739c0(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0xc));
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
  F_00d79f40(this GEN_EDX_ARG,param_1,param_2,param_3);
  return (uint)this;
}

/* ref: FUN_00d7be90 */
GEN_FRAME uint GEN_THISCALL F_00d7be90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7be90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1137c5c));
  if (param_1 != 0) {
    F_00d79e80(this GEN_EDX_FWD);
    this = ((undefined *)(uint)(this));
  }
  return (uint)this;
}

/* ref: FUN_00d7beb0 */
GEN_FRAME uint GEN_THISCALL F_00d7beb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7beb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00d7bed0 */
GEN_FRAME uint GEN_THISCALL F_00d7bed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bed0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00d7bee0 */
GEN_FRAME uint GEN_THISCALL F_00d7bee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7bee0u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  *(bool *)param_2 = *in_ecx == param_3;
  return param_2;
}

/* ref: FUN_00d7bf00 */
GEN_FRAME uint GEN_THISCALL F_00d7bf00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7bf30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00d7bf70 */
GEN_FRAME uint GEN_THISCALL F_00d7bf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bf70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = *(int *)(in_ecx + 4) == 0;
  return param_2;
}

/* ref: FUN_00d7bfa0 */
GEN_FRAME uint GEN_THISCALL F_00d7bfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfa0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7bfc0 */
GEN_FRAME uint GEN_THISCALL F_00d7bfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7bfc0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c000 */
GEN_FRAME uint GEN_THISCALL F_00d7c000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00d7c020 */
GEN_FRAME unsigned int F_00d7c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((param_3 - param_1) - 0x10 + (int)(puVar1 + 4))));
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
      iVar3 = iVar3 - 1;
      *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (param_3 - param_1))));
      puVar1 = puVar1 + 1;
    } while (iVar3 != 0);
  }
  return;
}

/* ref: FUN_00d7c0b0 */
GEN_FRAME uint GEN_THISCALL F_00d7c0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d7c0f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d7c130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7c160 */
GEN_FRAME uint GEN_THISCALL F_00d7c160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d7c180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c180u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c1c0 */
GEN_FRAME unsigned int F_00d7c1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d7c220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d7c240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c240u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 0xc)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)(*(int * PTR32 *)&gen_args[1]) / 0xc;
  return uVar2;
}

/* ref: FUN_00d7c2b0 */
GEN_FRAME uint GEN_THISCALL F_00d7c2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
GEN_FRAME uint GEN_THISCALL F_00d7c2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c2d0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[1]) = ((int *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) * 4)));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(int * PTR32 *)&gen_args[1]));
  *piVar1 = (int)((int)(*(int * PTR32 *)&gen_args[1]) + ((int)(*(int * PTR32 *)&gen_args[1]) >> 0x1f & 3U)) >> 2;
  return uVar2;
}

/* ref: FUN_00d7c330 */
GEN_FRAME uint GEN_THISCALL F_00d7c330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 2);
  return uVar1;
}

/* ref: FUN_00d7c360 */
GEN_FRAME uint GEN_THISCALL F_00d7c360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c380 */
GEN_FRAME uint F_00d7c380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c380u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3a0 */
GEN_FRAME uint GEN_THISCALL F_00d7c3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00d7c3c0 */
GEN_FRAME uint F_00d7c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c3c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7c3e0 */
GEN_FRAME uint GEN_THISCALL F_00d7c3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7c3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7c430 */
GEN_FRAME uint GEN_THISCALL F_00d7c430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00d7c440 */
GEN_FRAME unsigned int F_00d7c440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c440u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  iVar1 = param_2;
  while (iVar1 = iVar1 - 1, -1 < iVar1) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2 = puVar2 + 4;
  }
  return 0;
}

/* ref: FUN_00d7c460 */
GEN_FRAME uint GEN_THISCALL F_00d7c460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7c480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME float GEN_THISCALL F_00d7c4a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + *(int *)this)));
  }
  return **(float * PTR32 *)this;
}

/* ref: FUN_00d7c4d0 */
GEN_FRAME float GEN_THISCALL F_00d7c4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + 4 + *(int *)this)));
  }
  return *(float *)(*(int *)this + 4);
}

/* ref: FUN_00d7c500 */
GEN_FRAME float GEN_THISCALL F_00d7c500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + 8 + *(int *)this)));
  }
  return *(float *)(*(int *)this + 8);
}

/* ref: FUN_00d7c530 */
GEN_FRAME float GEN_THISCALL F_00d7c530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) * 0x20 + 0xc + *(int *)this
                     )));
  }
  return *(float *)(*(int *)this + 0xc);
}

/* ref: FUN_00d7c560 */
GEN_FRAME float GEN_THISCALL F_00d7c560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + 0x10 + *(int *)this
                     )));
  }
  return *(float *)(*(int *)this + 0x10);
}

/* ref: FUN_00d7c590 */
GEN_FRAME float GEN_THISCALL F_00d7c590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + 0x14 + *(int *)this
                     )));
  }
  return *(float *)(*(int *)this + 0x14);
}

/* ref: FUN_00d7c5c0 */
GEN_FRAME float GEN_THISCALL F_00d7c5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x10)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) * 0x20 + 0x18 + *(int *)this
                     )));
  }
  return *(float *)(*(int *)this + 0x18);
}

/* ref: FUN_00d7c5f0 */
GEN_FRAME float GEN_THISCALL F_00d7c5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x1c)) {
    return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) * 0x20 + 0x1c +
                     *(int *)this)));
  }
  return *(float *)(*(int *)this + 0x1c);
}

/* ref: FUN_00d7c620 */
GEN_FRAME uint GEN_THISCALL F_00d7c620(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd7c620u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
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
GEN_FRAME unsigned int GEN_THISCALL F_00d7c690(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd7c690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  fVar1 = ((in_ecx[1] - *in_ecx) * REFG(float, 0x1088068)) * *(float *)&REFG(undefined, 0x1137a8c);
  if (fVar1 < param_2) {
    fVar1 = param_2;
  }
  in_ecx[2] = fVar1;
  return;
}

/* ref: FUN_00d7c7b0 */
GEN_NOFRAME float F_00d7c7b0(unsigned int gen_a0, unsigned int gen_a1)
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
GEN_FRAME byte GEN_THISCALL F_00d7c930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7c930u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 < *(int *)(*in_ecx + 0x1c) * 9;
}

/* ref: FUN_00d7c950 */
GEN_FRAME uint GEN_THISCALL F_00d7c950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7c9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7c9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_2;
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
GEN_FRAME uint GEN_THISCALL F_00d7ca40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d7ca80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d7cad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      iVar8 = iVar8 - 1;
      *puVar4 = *((undefined4 *)GEN_TOP(((param_2 - iVar1) - 0x10 + (int)(puVar4 + 4))));
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
      iVar8 = iVar8 - 1;
      *puVar4 = *((undefined4 *)GEN_TOP(((int)puVar4 + (param_2 - iVar1))));
      puVar4 = puVar4 + 1;
    } while (iVar8 != 0);
  }
  *(uint *)((int)this + 4) = uVar2;
  return uVar2;
}

/* ref: FUN_00d7cba0 */
GEN_FRAME uint GEN_THISCALL F_00d7cba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_2;
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
GEN_FRAME uint GEN_THISCALL F_00d7cc00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d7cc50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd7cc50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int iVar2;
  
  if (param_3 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_2;
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
GEN_FRAME uint GEN_THISCALL F_00d7ccb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME uint GEN_THISCALL F_00d7ccf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int GEN_THISCALL F_00d7cd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = iVar5;
  return 0;
}

/* ref: FUN_00d7cdb0 */
GEN_FRAME uint GEN_THISCALL F_00d7cdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d7ce40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7ce70 */
GEN_FRAME unsigned int F_00d7ce70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7cea0 */
GEN_FRAME uint GEN_THISCALL F_00d7cea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME unsigned int F_00d7cee0(unsigned int gen_a0, unsigned int gen_a1)
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
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00d7cf10 */
GEN_FRAME unsigned int F_00d7cf10(unsigned int gen_a0)
{
  GEN_ENTER(0xd7cf10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00d7cf70 */
GEN_FRAME uint GEN_THISCALL F_00d7cf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 + *(int *)(*(int *)this + 0x1c) * 9;
}

/* ref: FUN_00d7cf90 */
GEN_FRAME byte GEN_THISCALL F_00d7cf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME float GEN_THISCALL F_00d7cff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME float GEN_THISCALL F_00d7d0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME float GEN_THISCALL F_00d7d1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
GEN_FRAME float GEN_THISCALL F_00d7d240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7d2a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_1;
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
GEN_FRAME uint GEN_THISCALL F_00d7d310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7d350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7d3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00d7cad0(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00d7d3c0 */
GEN_FRAME uint GEN_THISCALL F_00d7d3c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_1;
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
GEN_FRAME uint GEN_THISCALL F_00d7d430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7d480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    uVar1 = *(int *)((int)this + 4) - 1 + param_1;
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
GEN_FRAME uint GEN_THISCALL F_00d7d4f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME uint GEN_THISCALL F_00d7d530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_FRAME unsigned int GEN_THISCALL F_00d7d580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7d580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00d7cd40(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516ac),param_1,param_2);
  return;
}

/* ref: FUN_00d7d5a0 */
GEN_FRAME uint GEN_THISCALL F_00d7d5a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7d5e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7d5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * puVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)this;
  if (piVar2[1] == (piVar2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar2,2);
  }
  puVar1 = (undefined2 *)(*piVar2 + piVar2[1] * 2);
  *puVar1 = *(undefined2 *)((int)this + 4);
  piVar2[1] = piVar2[1] + 1;
  *(undefined2 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)puVar1;
}

/* ref: FUN_00d7d630 */
GEN_FRAME uint GEN_THISCALL F_00d7d630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d6d0 */
GEN_FRAME uint GEN_THISCALL F_00d7d6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00d7d760 */
GEN_FRAME uint GEN_THISCALL F_00d7d760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7a0 */
GEN_FRAME uint GEN_THISCALL F_00d7d7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d7e0 */
GEN_FRAME uint GEN_THISCALL F_00d7d7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7d820 */
GEN_NOFRAME uint GEN_THISCALL F_00d7d820(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00d7d860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7d860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined2 * puVar2;
  
  *(ushort *)((int)this + 4) =
       *(ushort *)((int)this + 4) | ((ushort)param_1 & 1) << ((byte)*(int *)((int)this + 8) & 0x1f);
  puVar2 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 1)));
  *(undefined2 * PTR32 *)((int)this + 8) = puVar2;
  if (puVar2 == (undefined2 *)0x10) {
    piVar1 = *(int * PTR32 *)this;
    if (piVar1[1] == (piVar1[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,2);
    }
    puVar2 = (undefined2 *)(*piVar1 + piVar1[1] * 2);
    *puVar2 = *(undefined2 *)((int)this + 4);
    piVar1[1] = piVar1[1] + 1;
    *(undefined2 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return (uint)puVar2;
}

/* ref: FUN_00d7d920 */
GEN_FRAME unsigned int GEN_THISCALL F_00d7d920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  return;
}

/* ref: FUN_00d7d9a0 */
GEN_NOFRAME uint GEN_THISCALL F_00d7d9a0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7d9e0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7da20(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7da60(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7daa0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7dae0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7db20(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME uint GEN_THISCALL F_00d7db60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 2);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 8) = 0x80000000;
  if ((param_1 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c) GEN_EDX_ARG,this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00d7dbd0 */
GEN_FRAME uint GEN_THISCALL F_00d7dbd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
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
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
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
GEN_NOFRAME uint GEN_THISCALL F_00d7dd10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7dd10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
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
GEN_NOFRAME uint GEN_THISCALL F_00d7ddb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7ddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),uVar2 * 4);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00d7de20 */
GEN_FRAME unsigned int F_00d7de20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7de20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00d7de80 */
GEN_FRAME unsigned int GEN_THISCALL F_00d7de80(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7def0 */
GEN_FRAME unsigned int GEN_THISCALL F_00d7def0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  iVar4 = (*(int *)((int)this + 4) - param_2) - 1;
  if (-1 < iVar4) {
    puVar3 = (uint *)(*(int *)this + param_2 * 0xc + 8 + iVar4 * 0xc);
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 - 3;
      iVar4 = iVar4 - 1;
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
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  *(int *)((int)this + 4) = param_2;
  return 0;
}

/* ref: FUN_00d7dfc0 */
GEN_FRAME uint GEN_THISCALL F_00d7dfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7dfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e060 */
GEN_FRAME unsigned int GEN_THISCALL F_00d7e060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
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
  iVar5 = (*(int *)((int)this + 4) - param_1) - 1;
  if (-1 < iVar5) {
    puVar4 = (uint *)(*(int *)this + param_1 * 0xc + 8 + iVar5 * 0xc);
    do {
      uVar1 = *puVar4;
      puVar4[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516a4),puVar4[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar4[-2] = 0;
      *puVar4 = 0x80000000;
      puVar4 = puVar4 - 3;
      iVar5 = iVar5 - 1;
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
      iVar5 = iVar5 - 1;
    } while (iVar5 != 0);
  }
  *(int *)((int)this + 4) = param_1;
  return 0;
}

/* ref: FUN_00d7e250 */
GEN_FRAME uint F_00d7e250(unsigned int gen_a0)
{
  GEN_ENTER(0xd7e250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: FUN_00d7e280 */
GEN_NOFRAME uint GEN_THISCALL F_00d7e280(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x6c);
  *(undefined4 *)((int)this + 0x68) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 100),iVar1 * 4);
  }
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x38) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x34),(uVar2 & 0x3fffffff) * 2);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0x80000000;
  uVar2 = *(uint *)((int)this + 0x30);
  *(undefined4 *)((int)this + 0x2c) = 0;
  if (-1 < (int)uVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x28),uVar2 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0x80000000;
  uVar2 = F_00d3e6d0(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: hkaPredictiveCompressedAnimation::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d7e320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e280(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7e380 */
GEN_FRAME uint GEN_THISCALL F_00d7e380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7e3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00d7e3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)this != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)this GEN_EDX_FWD);
  }
  *(undefined4 *)this = 0;
  return;
}

/* ref: FUN_00d7e460 */
GEN_FRAME uint GEN_THISCALL F_00d7e460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_00d7e490 */
GEN_FRAME uint GEN_THISCALL F_00d7e490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7e490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 << 6);
  return uVar1;
}

/* ref: FUN_00d7e530 */
GEN_FRAME uint GEN_THISCALL F_00d7e530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 6);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e570 */
GEN_NOFRAME uint GEN_THISCALL F_00d7e570(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_NOFRAME uint GEN_THISCALL F_00d7e5b0(unsigned int gen_a0 GEN_EDX_PARAM)
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
GEN_FRAME unsigned int F_00d7e5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(param_1 + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00d7e650 */
GEN_FRAME unsigned int GEN_THISCALL F_00d7e650(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      iVar3 = iVar3 - 1;
      puVar2 = puVar2 - 3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00d7e6c0 */
GEN_FRAME uint GEN_THISCALL F_00d7e6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) - 1;
  if (-1 < iVar3) {
    puVar2 = (uint *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      uVar1 = *puVar2;
      puVar2[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar2[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar2[-2] = 0;
      *puVar2 = 0x80000000;
      puVar2 = puVar2 - 3;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7e880 */
GEN_NOFRAME uint GEN_THISCALL F_00d7e880(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e880u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)in_ecx + 6) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  in_ecx[2] = 0;
  F_00d91340(in_ecx + 3 GEN_EDX_FWD);
  F_00d91340(in_ecx + 4 GEN_EDX_ARG);
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
GEN_FRAME uint GEN_THISCALL F_00d7e8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  F_00d91350(in_ecx + 3 GEN_EDX_FWD,param_2);
  F_00d91350(in_ecx + 4 GEN_EDX_ARG,param_2);
  return (uint)in_ecx;
}

/* ref: FUN_00d7e900 */
GEN_NOFRAME uint GEN_THISCALL F_00d7e900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7e900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  uint * puVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cac));
  iVar2 = *(int *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x28) = 0;
  if (-1 < iVar2) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x24),iVar2 << 6);
  }
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0x80000000;
  iVar2 = *(int *)((int)this + 0x1c) - 1;
  if (-1 < iVar2) {
    puVar3 = ((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 8 + iVar2 * 0xc)));
    do {
      uVar1 = *puVar3;
      puVar3[-1] = 0;
      if (-1 < (int)uVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                  (&REFG(undefined * PTR32, 0x13516ac),puVar3[-2],(uVar1 & 0x3fffffff) * 2);
      }
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      puVar3 = puVar3 - 3;
      iVar2 = iVar2 - 1;
    } while (-1 < iVar2);
  }
  uVar1 = *(uint *)((int)this + 0x20);
  *(undefined4 *)((int)this + 0x1c) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x18),(uVar1 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0x80000000;
  if (*(undefined * PTR32 *)((int)this + 0x14) != (undefined *)0x0) {
    F_00d91a80(*(undefined * PTR32 *)((int)this + 0x14) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  F_00d91510((undefined *)((int)this + 0x10) GEN_EDX_ARG);
  uVar1 = F_00d91510((undefined *)((int)this + 0xc) GEN_EDX_ARG);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)((int)this + 8) GEN_EDX_ARG);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d7ea00 */
GEN_FRAME uint F_00d7ea00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ea00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaMeshBinding::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d7ea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7e900(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: FUN_00d7eae0 */
GEN_FRAME uint GEN_THISCALL F_00d7eae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7eae0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00d7eb60 */
GEN_FRAME float F_00d7eb60(unsigned int gen_a0)
{
  GEN_ENTER(0xd7eb60u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_8;
  
  iVar4 = param_1[1];
  iVar5 = 0;
  fVar6 = REFG(float, 0x1136e98);
  if (3 < iVar4) {
    pfVar2 = (float *)(*param_1 + 8);
    iVar3 = (iVar4 - 4U >> 2) + 1;
    iVar5 = iVar3 * 4;
    do {
      if (!(pfVar2[-2] < fVar6)) {
        fVar6 = pfVar2[-2];
      }
      if (!(pfVar2[-1] < fVar6)) {
        fVar6 = pfVar2[-1];
      }
      if (!(*pfVar2 < fVar6)) {
        fVar6 = *pfVar2;
      }
      if (!(pfVar2[1] < fVar6)) {
        fVar6 = pfVar2[1];
      }
      pfVar2 = pfVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  local_8 = fVar6;
  if (iVar5 < iVar4) {
    pfVar2 = (float *)(*param_1 + iVar5 * 4);
    iVar4 = iVar4 - iVar5;
    do {
      fVar1 = *pfVar2;
      if (!(fVar1 < fVar6)) {
        fVar6 = fVar1;
        local_8 = fVar1;
      }
      pfVar2 = pfVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_00d7ec00 */
GEN_FRAME float F_00d7ec00(unsigned int gen_a0)
{
  GEN_ENTER(0xd7ec00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float fVar1;
  float * pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float local_8;
  
  iVar4 = param_1[1];
  iVar5 = 0;
  fVar6 = REFG(float, 0x1136c54);
  if (3 < iVar4) {
    pfVar2 = (float *)(*param_1 + 8);
    iVar3 = (iVar4 - 4U >> 2) + 1;
    iVar5 = iVar3 * 4;
    do {
      if (!(fVar6 < pfVar2[-2])) {
        fVar6 = pfVar2[-2];
      }
      if (!(fVar6 < pfVar2[-1])) {
        fVar6 = pfVar2[-1];
      }
      if (!(fVar6 < *pfVar2)) {
        fVar6 = *pfVar2;
      }
      if (!(fVar6 < pfVar2[1])) {
        fVar6 = pfVar2[1];
      }
      pfVar2 = pfVar2 + 4;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  local_8 = fVar6;
  if (iVar5 < iVar4) {
    pfVar2 = (float *)(*param_1 + iVar5 * 4);
    iVar4 = iVar4 - iVar5;
    do {
      fVar1 = *pfVar2;
      if (!(fVar6 < fVar1)) {
        fVar6 = fVar1;
        local_8 = fVar1;
      }
      pfVar2 = pfVar2 + 1;
      iVar4 = iVar4 - 1;
    } while (iVar4 != 0);
  }
  return local_8;
}

/* ref: FUN_00d7eca0 */
GEN_FRAME uint GEN_THISCALL F_00d7eca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd7eca0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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
    return (uint)pfVar1;
  }
  *pfVar1 = param_3;
  return (uint)pfVar1;
}

/* ref: FUN_00d7ed80 */
GEN_FRAME uint GEN_THISCALL F_00d7ed80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
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
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x74) + param_1 * 4))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x74) + param_1 * 4))), REFG(float, 0x1087f04));
  return param_1;
}

/* ref: FUN_00d7edc0 */
GEN_FRAME uint GEN_THISCALL F_00d7edc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7edc0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
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
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
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
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
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
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
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
    for (; iVar2 != 0; iVar2 = iVar2 - 1) {
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
    for (; iVar4 != 0; iVar4 = iVar4 - 1) {
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
GEN_NOFRAME uint GEN_THISCALL F_00d7f240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f240u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  return (uint)in_ecx;
}

/* ref: FUN_00d7f250 */
GEN_NOFRAME uint GEN_THISCALL F_00d7f250(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1137cbc));
  uVar1 = *(uint *)((int)this + 0x88);
  *(undefined4 *)((int)this + 0x84) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x80),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x7c);
  *(undefined4 *)((int)this + 0x78) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x74),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x70);
  *(undefined4 *)((int)this + 0x6c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x68),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0x80000000;
  uVar1 = *(uint *)((int)this + 100);
  *(undefined4 *)((int)this + 0x60) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x5c),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x58);
  *(undefined4 *)((int)this + 0x54) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x50),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x58) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x4c);
  *(undefined4 *)((int)this + 0x48) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x44),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x40);
  *(undefined4 *)((int)this + 0x3c) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x38),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x34);
  *(undefined4 *)((int)this + 0x30) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x2c),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x34) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x24) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x20),uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x1c);
  *(undefined4 *)((int)this + 0x18) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x14),uVar1 & 0x3fffffff);
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
GEN_FRAME uint GEN_THISCALL F_00d7f470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xd7f470u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar3 + 0x2c) GEN_EDX_ARG,0x98);
  *(undefined2 *)(uVar4 + 4) = 0x98;
  this = (undefined *)F_00d7edc0(uVar4 GEN_EDX_ARG,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                              param_10);
  if (this != (undefined *)0x0) {
    F_00d919e0(this GEN_EDX_ARG);
  }
  piVar1 = (int *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) == (*(uint *)(param_1 + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),piVar1,4);
  }
  puVar2 = ((undefined4 *)GEN_TOP((*piVar1 + *(int *)(param_1 + 0xc) * 4)));
  if (puVar2 != (undefined4 *)0x0) {
    if (this != (undefined *)0x0) {
      F_00d919e0(this GEN_EDX_ARG);
    }
    *puVar2 = this;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  F_00d91a80(this GEN_EDX_ARG);
  uVar4 = *((uint *)GEN_TOP((*piVar1 - 4 + *(int *)(param_1 + 0xc) * 4)));
  if (this != (undefined *)0x0) {
    F_00d91a80(this GEN_EDX_ARG);
  }
  return uVar4;
}

/* ref: FUN_00d7f590 */
GEN_NOFRAME uint GEN_THISCALL F_00d7f590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  uint uVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113680c));
  iVar3 = *(int *)((int)this + 0xc) - 1;
  iVar1 = *(int *)((int)this + 8);
  while (-1 < iVar3) {
    this_00 = *(undefined * PTR32 *)(iVar1 + iVar3 * 4);
    if (this_00 != (undefined *)0x0) {
      F_00d91a80(this_00 GEN_EDX_FWD);
    }
    iVar3 = iVar3 - 1;
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
GEN_FRAME uint GEN_THISCALL F_00d7f600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (param_1 != (undefined *)0x0) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  *(undefined * PTR32 *)this = param_1;
  return (uint)this;
}

/* ref: FUN_00d7f680 */
GEN_FRAME uint GEN_THISCALL F_00d7f680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00d7f690 */
GEN_FRAME uint F_00d7f690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f690u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00d7f6a0 */
GEN_FRAME uint GEN_THISCALL F_00d7f6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00d919e0((undefined *)*param_1 GEN_EDX_FWD);
  }
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00d7f720 */
GEN_FRAME uint GEN_THISCALL F_00d7f720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
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
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(param_1 * 4);
    param_1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0xc))))(&REFG(undefined * PTR32, 0x13516ac),&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    iVar3 = (int)(((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 0x1f & 3U) + (int)(*(undefined * PTR32 *)(gen_frame + 0x8))) >> 2;
    if (iVar3 != 0) goto LAB_00d7f77d;
  }
  iVar3 = ((int)0x80000000);
LAB_00d7f77d: ;
  iVar4 = 0;
  *(int *)((int)this + 8) = iVar3;
  *(uint *)this = param_1;
  *(int *)((int)this + 4) = iVar1;
  if (3 < iVar1) {
    iVar3 = (iVar1 - 4U >> 2) + 1;
    iVar4 = iVar3 * 4;
    puVar2 = (undefined4 *)(param_1 + 8);
    do {
      iVar3 = iVar3 - 1;
      puVar2[-2] = *param_2;
      puVar2[-1] = *param_2;
      *puVar2 = *param_2;
      puVar2[1] = *param_2;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
  }
  while (iVar4 < iVar1) {
    iVar4 = iVar4 + 1;
    *((undefined4 *)GEN_TOP(((param_1 - 4) + iVar4 * 4))) = *param_2;
  }
  return (uint)this;
}

/* ref: FUN_00d7f7f0 */
GEN_FRAME uint GEN_THISCALL F_00d7f7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x10))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f830 */
GEN_FRAME uint GEN_THISCALL F_00d7f830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f830u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7f870 */
GEN_FRAME unsigned int F_00d7f870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = param_2;
  puVar2 = param_1;
  if (0 < param_2) {
    do {
      if (puVar2 != (undefined4 *)0x0) {
        if ((undefined *)*param_3 != (undefined *)0x0) {
          F_00d919e0((undefined *)*param_3 GEN_EDX_ARG);
        }
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00d7f8b0 */
GEN_FRAME uint F_00d7f8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xd7f8b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00d7f8e0 */
GEN_FRAME uint GEN_THISCALL F_00d7f8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f8e0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00d7f920 */
GEN_FRAME uint GEN_THISCALL F_00d7f920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7f920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,4);
  }
  uVar2 = *(uint *)this;
  puVar1 = ((undefined4 *)GEN_TOP((uVar2 + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    if ((undefined *)*param_2 != (undefined *)0x0) {
      uVar2 = F_00d919e0((undefined *)*param_2 GEN_EDX_ARG);
    }
    *puVar1 = *param_2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00d7f970 */
GEN_NOFRAME uint GEN_THISCALL F_00d7f970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7f970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7f9b0 */
GEN_FRAME uint GEN_THISCALL F_00d7f9b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f9b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d7f9f0 */
GEN_FRAME uint GEN_THISCALL F_00d7f9f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7f9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if (*(uint *)((int)this + 4) == uVar2) {
    uVar2 = F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,4);
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + *(int *)((int)this + 4) * 4)));
  if (puVar1 != (uint *)0x0) {
    if ((undefined *)*param_1 != (undefined *)0x0) {
      F_00d919e0((undefined *)*param_1 GEN_EDX_ARG);
    }
    uVar2 = *param_1;
    *puVar1 = uVar2;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar2;
}

/* ref: FUN_00d7fa40 */
GEN_NOFRAME uint GEN_THISCALL F_00d7fa40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7fa40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 & 0x3fffffff);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00d7fa80 */
GEN_FRAME uint F_00d7fa80(unsigned int gen_a0)
{
  GEN_ENTER(0xd7fa80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
                    (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 4));
  return uVar2;
}

/* ref: hkaFootstepAnalysisInfo::vf0 */
GEN_FRAME uint GEN_THISCALL F_00d7fab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd7fab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d7f250(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))
              (*(int * PTR32 *)((int)pvVar1 + 0x2c) GEN_EDX_ARG,this,(uint)*(ushort *)(this + 4));
  }
  return (uint)this;
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf5 */
GEN_NOFRAME float10 GEN_THISCALL F_00d7faf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd7faf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0x30);
}

/* ref: hkaDefaultAnimatedReferenceFrame::vf3 */
GEN_NOFRAME float GEN_THISCALL F_00d7fbe0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xd7fbe0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  int iVar2;
  int iVar3;
  undefined8 * puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (*(float *)(param_1 + 0x30) <= param_2) {
    pfVar1 = ((float *)GEN_TOP((*(int *)(param_1 + 0x34) - 0x10 + iVar2 * 0x10)));
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else if (param_2 < 0.0) {
    pfVar1 = *(float * PTR32 *)(param_1 + 0x34);
    fVar6 = *pfVar1;
    fVar7 = pfVar1[1];
    fVar8 = pfVar1[2];
    fVar5 = pfVar1[3];
  }
  else {
    fVar5 = param_2 / (*(float *)(param_1 + 0x30) / (float)(iVar2 - 1));
    iVar3 = (int)fVar5;
    if (iVar2 - 2 < iVar3) {
      iVar3 = iVar2 - 2;
    }
    fVar5 = fVar5 - (float)iVar3;
    puVar4 = ((undefined8 *)GEN_TOP((iVar3 * 0x10 + *(int *)(param_1 + 0x34))));
    local_20 = gen_bits2f((uint)puVar4[2]);
    fStack_1c = gen_bits2f((uint)((ulonglong)puVar4[2] >> 0x20));
    fStack_18 = gen_bits2f((uint)puVar4[3]);
    fStack_14 = gen_bits2f((uint)((ulonglong)puVar4[3] >> 0x20));
    local_30 = gen_bits2f((uint)*puVar4);
    fStack_2c = gen_bits2f((uint)((ulonglong)*puVar4 >> 0x20));
    fStack_28 = gen_bits2f((uint)puVar4[1]);
    fStack_24 = gen_bits2f((uint)((ulonglong)puVar4[1] >> 0x20));
    fVar6 = (local_20 - local_30) * fVar5 + local_30;
    fVar7 = (fStack_1c - fStack_2c) * fVar5 + fStack_2c;
    fVar8 = (fStack_18 - fStack_28) * fVar5 + fStack_28;
    fVar5 = (fStack_14 - fStack_24) * fVar5 + fStack_24;
  }
  *param_3 = fVar6;
  param_3[1] = fVar7;
  param_3[2] = fVar8;
  param_3[3] = fVar5;
  F_00d988a0(param_3 + 4 GEN_EDX_FWD,param_1 + 0x10,fVar5);
  fVar8 = *(float *)&REFG(undefined, 0x1137d2c);
  fVar7 = *(float *)&REFG(undefined, 0x1137d28);
  fVar6 = *(float *)&REFG(undefined, 0x1137d24);
  fVar5 = *(float *)&REFG(undefined, 0x1137d20);
  param_3[8] = *(float *)&REFG(undefined, 0x1137d20);
  param_3[9] = fVar6;
  param_3[10] = fVar7;
  param_3[0xb] = fVar8;
  return fVar5;
}

/* ref: FUN_00d80920 */
GEN_FRAME unsigned int GEN_THISCALL F_00d80920(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd80920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = in_ecx[3];
  return;
}

/* ref: FUN_00d80960 */
GEN_FRAME unsigned int GEN_THISCALL F_00d80960(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xd80960u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  in_ecx[3] = 0.0;
  return;
}

/* ref: FUN_00d809a0 */
GEN_FRAME byte GEN_THISCALL F_00d809a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xd809a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 auVar1 [16];
  int iVar2;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(in_ecx[1] - param_2[1]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*in_ecx - *param_2) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(in_ecx[2] - param_2[2]) <= param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(in_ecx[3] - param_2[3]) <= param_3);
  iVar2 = gen_movmskps(&(auVar1));
  return iVar2 == 0xf;
}

/* ref: FUN_00d80bb0 */
GEN_FRAME uint GEN_THISCALL F_00d80bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd80bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0xc) == (*(uint *)((int)this + 0x10) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 8),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + *(int *)((int)this + 0xc) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  return (uint)puVar1;
}

/* ref: FUN_00d80c20 */
GEN_NOFRAME uint GEN_THISCALL F_00d80c20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd80c20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1136a94));
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 8),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: FUN_00d80d00 */
GEN_FRAME unsigned int F_00d80d00(float gen_a0)
{
  GEN_ENTER(0xd80d00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return;
}

/* ref: FUN_00d828b0 */
GEN_FRAME uint GEN_THISCALL F_00d828b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd828b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9b4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9b8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9bc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9b0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00d828d0 */
GEN_FRAME uint F_00d828d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xd828d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_1[3];
  fVar5 = param_2[2] * param_1[2] + (param_2[1] * param_1[1] + *param_2 * *param_1);
  fVar6 = fVar5 * *param_1;
  fVar7 = fVar5 * param_1[1];
  fVar8 = fVar5 * param_1[2];
  *param_4 = fVar6;
  param_4[1] = fVar7;
  param_4[2] = fVar8;
  param_4[3] = fVar5 * fVar1;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  *param_3 = *param_2 - fVar6;
  param_3[1] = fVar2 - fVar7;
  param_3[2] = fVar3 - fVar8;
  param_3[3] = fVar4 - fVar5 * fVar1;
  return (uint)param_2;
}

/* ref: hkaAnimationControl::vf14 */
GEN_NOFRAME uint F_00d82920(void)
{
  GEN_ENTER(0xd82920u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: hkaAnimationControl::vf8 */
GEN_NOFRAME uint GEN_THISCALL F_00d82930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x10)));
}

/* ref: hkaAnimationControl::vf9 */
GEN_NOFRAME uint GEN_THISCALL F_00d82940(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0xc))) + 0x14)));
}

/* ref: hkaAnimationControl::vf10 */
GEN_NOFRAME uint GEN_THISCALL F_00d82950(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x14)));
}

/* ref: hkaAnimationControl::vf11 */
GEN_NOFRAME uint GEN_THISCALL F_00d82960(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x10)));
}

/* ref: hkaAnimationControl::vf12 */
GEN_NOFRAME uint GEN_THISCALL F_00d82970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xd82970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x28) + 0x20)));
}

