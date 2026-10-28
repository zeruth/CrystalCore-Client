#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0065f330 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f330u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)in_ecx[3];
  *in_ecx = (float)(fVar1 * (float10)*(float *)param_2 + (float10)*in_ecx);
  in_ecx[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[1])));
  in_ecx[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[2])));
  fVar1 = (float10)in_ecx[7];
  in_ecx[4] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[4]);
  in_ecx[5] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[5])));
  in_ecx[6] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[6])));
  fVar1 = (float10)in_ecx[0xb];
  in_ecx[8] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[8]);
  in_ecx[9] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[9])));
  in_ecx[10] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[10])));
  fVar1 = (float10)in_ecx[0xf];
  in_ecx[0xc] = (float)(fVar1 * (float10)*(float *)param_2 + (float10)in_ecx[0xc]);
  in_ecx[0xd] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4) + (float10)in_ecx[0xd])));
  in_ecx[0xe] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8) + (float10)in_ecx[0xe])));
  return 0;
}

/* ref: FUN_0065f3e0 */
GEN_FRAME uint GEN_THISCALL F_0065f3e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x65f3e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  fVar2 = (float10)param_3;
  in_ecx[1] = (float)(fVar2 * (float10)in_ecx[1]);
  fVar3 = (float10)param_4;
  in_ecx[2] = (float)(fVar3 * (float10)in_ecx[2]);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar2);
  in_ecx[6] = (float)(fVar3 * (float10)in_ecx[6]);
  in_ecx[8] = (float)((float10)in_ecx[8] * fVar1);
  in_ecx[9] = (float)(fVar2 * (float10)in_ecx[9]);
  in_ecx[10] = (float)((float10)in_ecx[10] * fVar3);
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] * fVar1);
  in_ecx[0xd] = (float)(fVar2 * (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)(fVar3 * (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: FUN_0065f460 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004f1f30(in_ecx GEN_EDX_FWD,param_2);
  return;
}

/* ref: FUN_0065f470 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  return 0;
}

/* ref: FUN_0065f4d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  uVar1 = param_2[0xe];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xb] = uVar1;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_0065f550 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xe];
  in_ecx[0xc] = param_2[3];
  in_ecx[0xd] = param_2[7];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = param_2[0xf];
  return 0;
}

/* ref: FUN_0065f5c0 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[4];
  in_ecx[2] = param_2[8];
  in_ecx[3] = param_2[0xc];
  in_ecx[4] = param_2[1];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[9];
  in_ecx[7] = param_2[0xd];
  in_ecx[8] = param_2[2];
  in_ecx[9] = param_2[6];
  in_ecx[10] = param_2[10];
  uVar1 = param_2[0xe];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xb] = uVar1;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = GEN_FLT_TO(in_ecx[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_0065f640 */
GEN_FRAME uint GEN_THISCALL F_0065f640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0065f650 */
GEN_FRAME byte GEN_THISCALL F_0065f650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  if ((!((float10)*(float *)((int)this + 0x10) < (float10)param_1[4]) &&
       !((float10)*param_1 < (float10)*(float *)this)) &&
     (!((float10)*(float *)((int)this + 0x14) < (float10)param_1[5]) &&
      !((float10)param_1[1] < (float10)*(float *)((int)this + 4)))) {
    if ((float10)*(float *)((int)this + 0x18) < (float10)param_1[6]) {
      return 0;
    }
    return !((float10)param_1[2] < (float10)*(float *)((int)this + 8));
  }
  return 0;
}

/* ref: FUN_0065f700 */
GEN_FRAME uint GEN_THISCALL F_0065f700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0065f720 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f720(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x65f720u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return;
}

/* ref: FUN_0065f740 */
GEN_NOFRAME uint GEN_THISCALL F_0065f740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f740u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)(float)((float10)in_ecx[2] - (float10)param_2[2]) *
                       (float10)(float)((float10)in_ecx[2] - (float10)param_2[2]) +
                      ((float10)(float)((float10)in_ecx[1] - (float10)param_2[1]) *
                       (float10)(float)((float10)in_ecx[1] - (float10)param_2[1]) +
                      (float10)(float)((float10)*in_ecx - (float10)*param_2) *
                      (float10)(float)((float10)*in_ecx - (float10)*param_2))))) <=
      (float10)(float)((float10)param_2[3] + (float10)in_ecx[3]) *
      (float10)(float)((float10)param_2[3] + (float10)in_ecx[3])) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065f7d0 */
GEN_FRAME unsigned int GEN_THISCALL F_0065f7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_005ff0f0(this GEN_EDX_FWD,param_1);
  return;
}

/* ref: FUN_0065f7e0 */
GEN_FRAME uint GEN_THISCALL F_0065f7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65f7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x40);
  fVar3 = *(float *)(param_2 + 0x48);
  *in_ecx = *(undefined4 *)(param_2 + 0x30);
  in_ecx[1] = *(undefined4 *)(param_2 + 0x34);
  in_ecx[2] = *(undefined4 *)(param_2 + 0x38);
  in_ecx[3] = (undefined4)
              gen_fl2bits(((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                                 ((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1)
                                 ))));
  return (uint)in_ecx;
}

/* ref: FUN_0065f840 */
GEN_FRAME uint GEN_THISCALL F_0065f840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x65f840u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_0065f870 */
GEN_NOFRAME uint GEN_THISCALL F_0065f870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x65f870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
  fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
  fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  *(float *)this = (float)(fVar5 * fVar4 - fVar7 * fVar6);
  fVar8 = (float10)(float)((float10)fVar3 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  *(float *)((int)this + 4) = (float)(fVar8 * fVar7 - fVar9 * fVar4);
  *(float *)((int)this + 8) = (float)(fVar6 * fVar9 - fVar5 * fVar8);
  F_004bd580(this GEN_EDX_FWD);
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(((float10)param_1[2] * (float10)*(float *)((int)this + 8) +
              ((float10)param_1[1] * (float10)*(float *)((int)this + 4) +
              (float10)*param_1 * (float10)*(float *)this))));
  return (uint)this;
}

/* ref: FUN_0065f950 */
GEN_NOFRAME uint GEN_THISCALL F_0065f950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x65f950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = (float10)(float)((float10)param_3[2] - (float10)param_2[2]);
  fVar5 = (float10)(float)((float10)param_2[1] - (float10)param_1[1]);
  fVar6 = (float10)(float)((float10)param_3[1] - (float10)param_2[1]);
  fVar7 = (float10)(float)((float10)param_2[2] - (float10)param_1[2]);
  *(float *)this = (float)(fVar5 * fVar4 - fVar7 * fVar6);
  fVar8 = (float10)(float)((float10)fVar3 - (float10)fVar1);
  fVar9 = (float10)(float)((float10)fVar1 - (float10)fVar2);
  *(float *)((int)this + 4) = (float)(fVar8 * fVar7 - fVar9 * fVar4);
  *(float *)((int)this + 8) = (float)(fVar6 * fVar9 - fVar5 * fVar8);
  F_004bd580(this GEN_EDX_FWD);
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(((float10)param_1[2] * (float10)*(float *)((int)this + 8) +
              ((float10)param_1[1] * (float10)*(float *)((int)this + 4) +
              (float10)*param_1 * (float10)*(float *)this))));
  return (uint)this;
}

/* ref: FUN_0065fa50 */
GEN_FRAME unsigned int GEN_THISCALL F_0065fa50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x65fa50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return;
}

/* ref: FUN_0065fbc0 */
GEN_FRAME uint GEN_THISCALL F_0065fbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65fbc0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                                           ((float10)*(float *)param_2 * (float10)*in_ecx +
                                           (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) -
                          (float10)in_ecx[3])));
  if (fVar1 * (float10)((float)GEN_TOF(ABS(fVar1))) <= (float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065fc10 */
GEN_FRAME uint GEN_THISCALL F_0065fc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65fc10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                                           ((float10)*(float *)param_2 * (float10)*in_ecx +
                                           (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) -
                          (float10)in_ecx[3])));
  if (fVar1 * (float10)((float)GEN_TOF(ABS(fVar1))) <= -(float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0065fc60 */
GEN_NOFRAME uint GEN_THISCALL F_0065fc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65fc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  F_004f19e0(((undefined1 *)(gen_frame + 0x80)),param_1);
  (*(undefined4 *)(gen_frame + 0x70)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x74)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x78)) = 0;
  (*(undefined4 *)(gen_frame + 0x60)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x64)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x68)) = 0;
  (*(undefined4 *)(gen_frame + 0x50)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x54)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x58)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x24)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x40)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x44)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x48)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x10)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x14)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x0)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  (*(undefined4 *)(gen_frame + 0x4)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x70)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x60)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x50)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x20)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x30)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x40)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x10)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,(uint)((undefined1 *)(gen_frame + 0x80)));
  F_0065f950(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x50)));
  F_0065f950((undefined *)((int)this + 0x10) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x40)));
  F_0065f950((undefined *)((int)this + 0x20) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x0)));
  F_0065f950((undefined *)((int)this + 0x30) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x20)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0x10)));
  F_0065f950((undefined *)((int)this + 0x40) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x60)),&(*(undefined4 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x30)));
  F_0065f950((undefined *)((int)this + 0x50) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x10)),&(*(undefined4 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0) GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_0065fe70 */
GEN_FRAME uint GEN_THISCALL F_0065fe70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65fe70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_0065fe80 */
GEN_FRAME uint GEN_THISCALL F_0065fe80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65fe80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_0065feb0 */
GEN_NOFRAME byte GEN_THISCALL F_0065feb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x65feb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  uVar2 = 0;
  pfVar1 = (float *)((int)this + 4);
  do {
    fVar3 = (float10)*pfVar1;
    fVar4 = (float10)pfVar1[-1];
    fVar5 = (float10)pfVar1[1];
    if (!((float10)((float)GEN_TOF(((fVar3 * (float10)param_1[0xd] + fVar4 * (float10)param_1[0xc]) +
                          fVar5 * (float10)param_1[0xe]))) - (float10)pfVar1[2] <=
         (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF((((float10)param_1[8] * fVar4 +
                                                               (float10)param_1[9] * fVar3) +
                                                              (float10)param_1[10] * fVar5)))))) *
                          (float10)param_1[0x12] +
                         ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_1[2] * fVar5 +
                                                              (fVar4 * (float10)*param_1 +
                                                              fVar3 * (float10)param_1[1]))))))) *
                          (float10)param_1[0x10] +
                         (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)param_1[6] * fVar5 +
                                                             (fVar4 * (float10)param_1[4] +
                                                             fVar3 * (float10)param_1[5]))))))) *
                         (float10)param_1[0x11])))))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_00660050 */
GEN_FRAME byte GEN_THISCALL F_00660050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 8);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-1] * (float10)*(float *)(param_2 + 4)
                                             + (float10)pfVar1[-2] * (float10)*(float *)param_2)))) -
                            (float10)pfVar1[1])));
    if (!(fVar3 * (float10)((float)GEN_TOF(ABS(fVar3))) <= (float10)*(float *)(param_2 + 0xc))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_006600f0 */
GEN_FRAME byte GEN_THISCALL F_006600f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6600f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 8);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-1] * (float10)*(float *)(param_2 + 4)
                                             + (float10)pfVar1[-2] * (float10)*(float *)param_2)))) -
                            (float10)pfVar1[1])));
    if (!(fVar3 * (float10)((float)GEN_TOF(ABS(fVar3))) <=
         ((float10)GEN_TOD(gen_bits2f(*(uint *)(param_2 + 0xc) ^ REFG(uint, 0x10920d0)))))) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 6);
  return 1;
}

/* ref: FUN_006601a0 */
GEN_FRAME byte GEN_THISCALL F_006601a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6601a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float * pfVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  fVar6 = (float10)0.0;
  fVar7 = (float10)REFG(float, 0x1090998);
  uVar4 = 0;
  pfVar3 = (float *)(param_2 + 0x10);
  iVar5 = param_1 - param_2;
  do {
    fVar8 = (float10)*(float *)(iVar5 + (int)pfVar3);
    if ((float10)((float)GEN_TOF(ABS(fVar8))) <= (float10)REFG(float, 0x10905c4)) {
      fVar8 = (float10)*(float *)(param_1 + uVar4 * 4);
      if (((!GEN_ISNAN((float10)pfVar3[-4]) && !GEN_ISNAN(fVar8)) && !((float10)pfVar3[-4] <= fVar8)) ||
         ((!GEN_ISNAN(fVar8) && !GEN_ISNAN((float10)*pfVar3)) && !(fVar8 <= (float10)*pfVar3))) {
        return 0;
      }
    }
    else {
      fVar9 = (float10)*(float *)(param_1 + uVar4 * 4);
      fVar8 = (float10)(float)((float10)1 / fVar8);
      fVar1 = ((float)GEN_TOF((fVar8 * ((float10)pfVar3[-4] - fVar9))));
      fVar2 = ((float)GEN_TOF((((float10)*pfVar3 - fVar9) * fVar8)));
      param_2 = (uint)gen_fl2bits(fVar1);
      local_8 = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        param_2 = (uint)gen_fl2bits(fVar2);
        local_8 = fVar1;
      }
      if (fVar6 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
        fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
      }
      if ((float10)local_8 < fVar7) {
        fVar7 = (float10)local_8;
      }
      if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7)) {
        return 0;
      }
    }
    uVar4 = uVar4 + 1;
    pfVar3 = pfVar3 + 1;
    if (2 < uVar4) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_006602f0 */
GEN_FRAME byte GEN_THISCALL F_006602f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6602f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_8;
  
  fVar7 = (float10)0.0;
  fVar8 = (float10)REFG(float, 0x1090998);
  uVar5 = 0;
  pfVar4 = (float *)(param_2 + 0x10);
  iVar6 = (int)param_1 - param_2;
  do {
    fVar9 = (float10)*(float *)(iVar6 + (int)pfVar4);
    if ((float10)((float)GEN_TOF(ABS(fVar9))) <= (float10)REFG(float, 0x10905c4)) {
      fVar9 = (float10)param_1[uVar5];
      if (((!GEN_ISNAN((float10)pfVar4[-4]) && !GEN_ISNAN(fVar9)) && !((float10)pfVar4[-4] <= fVar9)) ||
         ((!GEN_ISNAN(fVar9) && !GEN_ISNAN((float10)*pfVar4)) && !(fVar9 <= (float10)*pfVar4))) {
        return 0;
      }
    }
    else {
      fVar9 = (float10)(float)((float10)1 / fVar9);
      fVar1 = ((float)GEN_TOF((fVar9 * ((float10)pfVar4[-4] - (float10)param_1[uVar5]))));
      fVar2 = ((float)GEN_TOF((((float10)*pfVar4 - (float10)param_1[uVar5]) * fVar9)));
      param_2 = (uint)gen_fl2bits(fVar1);
      local_8 = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        param_2 = (uint)gen_fl2bits(fVar2);
        local_8 = fVar1;
      }
      if (fVar7 < ((float10)GEN_TOD(gen_bits2f(param_2)))) {
        fVar7 = ((float10)GEN_TOD(gen_bits2f(param_2)));
      }
      if ((float10)local_8 < fVar8) {
        fVar8 = (float10)local_8;
      }
      if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar8)) && !(fVar7 <= fVar8)) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      *param_3 = param_1[4];
      param_3[1] = param_1[5];
      param_3[2] = param_1[6];
      fVar1 = *param_3;
      *param_3 = (float)((float10)fVar1 * fVar7);
      fVar2 = param_3[1];
      param_3[1] = (float)((float10)fVar2 * fVar7);
      fVar3 = param_3[2];
      param_3[2] = (float)((float10)fVar3 * fVar7);
      *param_3 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)fVar1 * fVar7))));
      param_3[1] = ((float)GEN_TOF(((float10)param_1[1] + (float10)(float)((float10)fVar2 * fVar7))));
      param_3[2] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar7) + (float10)param_1[2])));
      return 1;
    }
  } while( true );
}

/* ref: FUN_00660490 */
GEN_FRAME uint GEN_THISCALL F_00660490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return (uint)in_ecx;
}

/* ref: FUN_006604c0 */
GEN_FRAME uint F_006604c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6604c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  F_004ee850(param_1 + 0x10,param_2 + 0x10,param_3);
  return param_1;
}

/* ref: FUN_006604f0 */
GEN_FRAME uint GEN_THISCALL F_006604f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6604f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return (uint)in_ecx;
}

/* ref: FUN_00660530 */
GEN_FRAME uint GEN_THISCALL F_00660530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660530u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00660560 */
GEN_FRAME uint GEN_THISCALL F_00660560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00660580 */
GEN_NOFRAME byte GEN_THISCALL F_00660580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) - (float10)*(float *)this)));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar10 = 0.0;
  (*(float *)(gen_frame + 0x24)) = 0.0;
  (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1090998);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) - (float10)*(float *)((int)this + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  uVar5 = 0;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x18) - (float10)*(float *)((int)this + 8))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  ((float *)(gen_frame + 0x0))[0] = fVar1;
  ((float *)(gen_frame + 0x0))[1] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar3;
  fVar6 = (float10)0.0;
  fVar7 = (float10)REFG(float, 0x1090998);
  pfVar4 = param_1;
  do {
    fVar1 = *((float *)GEN_TOP((((int)((float *)(gen_frame + 0x0)) - (int)param_1) + (int)pfVar4)));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    fVar8 = (float10)fVar1;
    fVar1 = ((float)GEN_TOF(ABS(fVar8)));
    (*(float *)(gen_frame + 0x28)) = fVar1;
    if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
      fVar1 = *((float *)GEN_TOP((((int)this - (int)param_1) + (int)pfVar4)));
      (*(float *)(gen_frame + 0x28)) = fVar1;
      fVar8 = (float10)fVar1;
      if ((!GEN_ISNAN((float10)*pfVar4) && !GEN_ISNAN(fVar8)) && !((float10)*pfVar4 <= fVar8)) {
        return 0;
      }
      if ((float10)pfVar4[4] < fVar8) {
        return 0;
      }
    }
    else {
      fVar1 = (float)((float10)1 / fVar8);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar2 = *((float *)GEN_TOP((((int)this - (int)param_1) + (int)pfVar4)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      fVar8 = (float10)fVar2;
      fVar9 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar9 * ((float10)*pfVar4 - fVar8))));
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      fVar2 = ((float)GEN_TOF((((float10)pfVar4[4] - fVar8) * fVar9)));
      (*(float *)(gen_frame + 0x28)) = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x28)) = fVar1;
        (*(float *)(gen_frame + 0x2c)) = fVar2;
      }
      if (fVar6 < (float10)(*(float *)(gen_frame + 0x2c))) {
        (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x2c));
        fVar6 = (float10)(*(float *)(gen_frame + 0x2c));
        fVar10 = (*(float *)(gen_frame + 0x2c));
      }
      if ((float10)(*(float *)(gen_frame + 0x28)) < fVar7) {
        (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x28));
        fVar7 = (float10)(*(float *)(gen_frame + 0x28));
      }
      if ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7)) {
        return 0;
      }
    }
    uVar5 = uVar5 + 1;
    pfVar4 = pfVar4 + 1;
    if (2 < uVar5) {
      if ((!(fVar10 < 0.0)) && (!((float10)1 < fVar6))) {
        *param_2 = fVar10;
        return 1;
      }
      return 0;
    }
  } while( true );
}

/* ref: FUN_00660720 */
GEN_NOFRAME byte GEN_THISCALL F_00660720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660720u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar4 = (float10)(float)((float10)in_ecx[4] - (float10)*in_ecx);
  fVar5 = (float10)(float)((float10)in_ecx[5] - (float10)in_ecx[1]);
  fVar6 = (float10)(float)((float10)in_ecx[6] - (float10)in_ecx[2]);
  fVar1 = ((float)GEN_TOF((((float10)param_2[3] -
                  (float10)((float)GEN_TOF((((float10)param_2[1] * (float10)in_ecx[1] +
                                   (float10)*param_2 * (float10)*in_ecx) +
                                  (float10)param_2[2] * (float10)in_ecx[2])))) /
                 (float10)((float)GEN_TOF(((fVar4 * (float10)*param_2 + fVar5 * (float10)param_2[1]) +
                                 fVar6 * (float10)param_2[2]))))));
  fVar7 = (float10)fVar1;
  if (((float10)0 <= fVar7) && (fVar1 <= REFG(float, 0x1087f04))) {
    fVar1 = (float)(fVar7 * fVar4);
    *param_3 = fVar1;
    fVar2 = (float)(fVar7 * fVar5);
    param_3[1] = fVar2;
    fVar3 = (float)(fVar6 * fVar7);
    param_3[2] = fVar3;
    *param_3 = (float)((float10)*in_ecx + (float10)fVar1);
    param_3[1] = (float)((float10)in_ecx[1] + (float10)fVar2);
    param_3[2] = (float)((float10)fVar3 + (float10)in_ecx[2]);
    return 1;
  }
  return 0;
}

/* ref: FUN_00660860 */
GEN_FRAME uint GEN_THISCALL F_00660860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return (uint)in_ecx;
}

/* ref: FUN_00660890 */
GEN_FRAME uint F_00660890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660890u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004ee670(param_1,param_2,param_3);
  F_004ee670(param_1 + 0x10,param_2 + 0x10,param_3);
  return param_1;
}

/* ref: FUN_006608d0 */
GEN_FRAME uint GEN_THISCALL F_006608d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6608d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return *((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4))) >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_006608f0 */
GEN_FRAME uint GEN_THISCALL F_006608f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6608f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  sbyte sVar3;
  uint uVar4;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  sVar3 = (sbyte)(param_1 & 0x1f);
  uVar2 = *puVar1 >> sVar3;
  uVar4 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar4 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  if ((param_1 & 0x1f) != 0) {
    uVar2 = uVar2 + (puVar1[1] << (0x20U - sVar3 & 0x1f));
  }
  return uVar2 & uVar4;
}

/* ref: FUN_00660940 */
GEN_FRAME uint GEN_THISCALL F_00660940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  byte bVar2;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  bVar2 = (byte)param_1 & 0x1f;
  *puVar1 = ~(1 << bVar2) & *puVar1 | (uint)((char)param_2 != '\0') << bVar2;
  return (uint)puVar1;
}

/* ref: FUN_00660980 */
GEN_FRAME unsigned int GEN_THISCALL F_00660980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(int *)((int)this + 4) + 0x1fU >> 5;
  uVar1 = 0;
  if (uVar2 != 0) {
    do {
      *(uint *)(*(int *)this + uVar1 * 4) = -(uint)((char)param_1 != '\0');
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return 0;
}

/* ref: FUN_006609e0 */
GEN_FRAME unsigned int GEN_THISCALL F_006609e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6609e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  byte bVar2;
  
  puVar1 = ((uint *)GEN_TOP((**(int * PTR32 *)this + (*(uint *)((int)this + 4) >> 5) * 4)));
  bVar2 = (byte)*(uint *)((int)this + 4) & 0x1f;
  *puVar1 = (uint)((char)param_1 != '\0') << bVar2 | ~(1 << bVar2) & *puVar1;
  return 0;
}

/* ref: FUN_00660a40 */
GEN_FRAME uint GEN_THISCALL F_00660a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00660a60 */
GEN_FRAME uint GEN_THISCALL F_00660a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00660a90 */
GEN_FRAME uint GEN_THISCALL F_00660a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660a90u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[1];
  fVar5 = (float10)*(double *)&REFG(undefined, 0x10ab9a0);
  fVar2 = in_ecx[2];
  fVar3 = *in_ecx;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1094658);
  *param_2 = (float)(fVar5 * (float10)in_ecx[3]);
  param_2[1] = (float)((float10)fVar1 * fVar5);
  param_2[2] = (float)((float10)fVar2 * fVar5);
  param_2[3] = (float)((float10)fVar3 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_00660ae0 */
GEN_FRAME unsigned int GEN_THISCALL F_00660ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660ae0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[1];
  fVar4 = (float10)*(double *)&REFG(undefined, 0x10ab9a0);
  fVar2 = in_ecx[2];
  fVar3 = *in_ecx;
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094658);
  *param_2 = (float)((float10)in_ecx[3] * fVar4);
  param_2[1] = (float)((float10)fVar1 * fVar4);
  param_2[2] = (float)((float10)fVar2 * fVar4);
  param_2[3] = (float)((float10)fVar3 * fVar5);
  fVar1 = in_ecx[10];
  fVar2 = in_ecx[0xb];
  fVar3 = in_ecx[9];
  param_2[4] = (float)((float10)in_ecx[0xc] * fVar4);
  param_2[5] = (float)((float10)fVar1 * fVar4);
  param_2[6] = (float)((float10)fVar2 * fVar4);
  param_2[7] = (float)((float10)fVar3 * fVar5);
  fVar1 = in_ecx[0x13];
  fVar2 = in_ecx[0x14];
  fVar3 = in_ecx[0x12];
  param_2[8] = (float)(fVar4 * (float10)in_ecx[0x15]);
  param_2[9] = (float)((float10)fVar1 * fVar4);
  param_2[10] = (float)((float10)fVar2 * fVar4);
  param_2[0xb] = (float)(fVar5 * (float10)fVar3);
  return 0;
}

/* ref: FUN_00660b90 */
GEN_FRAME uint GEN_THISCALL F_00660b90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660b90u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00660bb0 */
GEN_FRAME uint GEN_THISCALL F_00660bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00660be0 */
GEN_FRAME uint GEN_THISCALL F_00660be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00660c00 */
GEN_FRAME uint GEN_THISCALL F_00660c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660c00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00660c40 */
GEN_FRAME uint GEN_THISCALL F_00660c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(int *)((int)(uintptr_t)this) * 0x2080 + 0x80 + (int)this);
  if (*(int *)((int)this + 4) == 0) {
    return 0xffffffff;
  }
  iVar2 = *piVar1;
  if (0xff < iVar2) {
    return 0xffffffff;
  }
  piVar1[(iVar2 + 4) * 8] = *param_1;
  piVar1[(iVar2 + 4) * 8 + 1] = param_1[1];
  piVar1[iVar2 * 8 + 0x22] = param_1[2];
  piVar1[iVar2 * 8 + 0x23] = param_1[3];
  piVar1[iVar2 * 8 + 0x24] = param_1[4];
  piVar1[iVar2 * 8 + 0x25] = param_1[5];
  piVar1[iVar2 * 8 + 0x26] = param_1[6];
  piVar1[iVar2 * 8 + 0x27] = param_1[7];
  *piVar1 = iVar2 + 1;
  return 0;
}

/* ref: FUN_00660cd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00660cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x660cd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  uint uVar4;
  int local_8;
  
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  uVar4 = 2;
  puVar3 = (undefined4 *)((int)this + 0x2104);
  local_8 = 0x20;
  do {
    puVar3[-0x821] = 0;
    puVar3[-0x820] = 0;
    iVar1 = (uVar4 - 2 & 7) + 1;
    puVar3[-0x81f] = iVar1;
    iVar2 = (uVar4 - 1 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar1;
    puVar3[-1] = 0;
    *puVar3 = 0;
    puVar3[1] = iVar2;
    iVar1 = (uVar4 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar2;
    puVar3[0x81f] = 0;
    puVar3[0x820] = 0;
    puVar3[0x821] = iVar1;
    iVar2 = (uVar4 + 1 & 7) + 1;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar1;
    puVar3[0x103f] = 0;
    puVar3[0x1040] = 0;
    puVar3[0x1041] = iVar2;
    uVar4 = uVar4 + 4;
    *(uint *)((int)this + 8) = *(uint *)((int)this + 8) | 1 << (sbyte)iVar2;
    puVar3 = puVar3 + 0x2080;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: FUN_00660de0 */
GEN_FRAME uint GEN_THISCALL F_00660de0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x660de0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00660e10 */
GEN_FRAME uint GEN_THISCALL F_00660e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660e10u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)in_ecx;
}

/* ref: FUN_00660e30 */
GEN_FRAME unsigned int GEN_THISCALL F_00660e30(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x660e30u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return;
}

/* ref: FUN_00660e60 */
GEN_FRAME uint GEN_THISCALL F_00660e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660e60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00660e80 */
GEN_FRAME uint GEN_THISCALL F_00660e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 + *param_2;
  *(float *)((int)this + 4) = fVar1 + fVar4;
  *(float *)((int)this + 8) = fVar2 + fVar5;
  *(float *)((int)this + 0xc) = fVar3 + fVar6;
  return (uint)param_1;
}

/* ref: FUN_00660ea0 */
GEN_FRAME uint GEN_THISCALL F_00660ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00660ec0 */
GEN_FRAME uint GEN_THISCALL F_00660ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2;
  *(float *)((int)this + 4) = fVar1 * fVar4;
  *(float *)((int)this + 8) = fVar2 * fVar5;
  *(float *)((int)this + 0xc) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_00660ee0 */
GEN_FRAME uint GEN_THISCALL F_00660ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x660ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00660f00 */
GEN_FRAME uint GEN_THISCALL F_00660f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x660f00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_1[1];
  fVar8 = param_1[2];
  fVar9 = param_1[3];
  *(float *)this = *param_2 * *param_3 + *param_1;
  *(float *)((int)this + 4) = fVar1 * fVar4 + fVar7;
  *(float *)((int)this + 8) = fVar2 * fVar5 + fVar8;
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + fVar9;
  return (uint)param_1;
}

/* ref: FUN_00660f20 */
GEN_FRAME uint GEN_THISCALL F_00660f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660f20u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar8 = param_1[3];
  *(float *)this = fVar6 * fVar3 - fVar7 * fVar2;
  *(float *)((int)this + 4) = fVar7 * fVar1 - fVar5 * fVar3;
  *(float *)((int)this + 8) = fVar5 * fVar2 - fVar6 * fVar1;
  *(float *)((int)this + 0xc) = fVar8 * fVar4 - fVar8 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00660f60 */
GEN_FRAME uint GEN_THISCALL F_00660f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660f60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00660f80 */
GEN_FRAME uint GEN_THISCALL F_00660f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x660f80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2[1] ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar2 = param_2[2] ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar3 = param_2[3] ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *in_ecx = *param_2 ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar2;
  in_ecx[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00660fa0 */
GEN_FRAME uint GEN_THISCALL F_00660fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660fa0u, gen_a0, gen_a1, gen_a2, 0u);
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
  return (uint)param_1;
}

/* ref: FUN_00660fc0 */
GEN_FRAME unsigned int F_00660fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x660fc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint * puVar6;
  int iVar7;
  
  do {
    uVar1 = *((uint *)GEN_TOP((param_1 + 4 + (param_2 + param_3 >> 1) * 8)));
    iVar5 = param_2;
    iVar7 = param_3;
    while( true ) {
      puVar6 = (uint *)(param_1 + 4 + iVar5 * 8);
      uVar2 = *(uint *)(param_1 + 4 + iVar5 * 8);
      while (uVar2 < uVar1) {
        puVar6 = puVar6 + 2;
        iVar5 = iVar5 + 1;
        uVar2 = *puVar6;
      }
      puVar6 = (uint *)(param_1 + 4 + iVar7 * 8);
      uVar2 = *(uint *)(param_1 + 4 + iVar7 * 8);
      while (uVar1 < uVar2) {
        puVar6 = puVar6 - 2;
        iVar7 = iVar7 - 1;
        uVar2 = *puVar6;
      }
      if (iVar7 <= iVar5) break;
      uVar3 = *(undefined4 *)(param_1 + 4 + iVar5 * 8);
      uVar4 = *(undefined4 *)(param_1 + iVar5 * 8);
      *(undefined4 *)(param_1 + iVar5 * 8) = *(undefined4 *)(param_1 + iVar7 * 8);
      *(undefined4 *)(param_1 + 4 + iVar5 * 8) = *(undefined4 *)(param_1 + 4 + iVar7 * 8);
      *(undefined4 *)(param_1 + iVar7 * 8) = uVar4;
      *(undefined4 *)(param_1 + 4 + iVar7 * 8) = uVar3;
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 - 1;
    }
    if (param_2 < iVar5 - 1) {
      F_00660fc0(param_1,param_2,iVar5 - 1);
    }
    param_2 = iVar7 + 1;
  } while (param_2 < param_3);
  return;
}

/* ref: FUN_00661060 */
GEN_FRAME uint F_00661060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00661080 */
GEN_FRAME uint F_00661080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = param_2 * 0x10;
  uVar1 = *(undefined4 *)(&REFG(undefined, 0x1138ad4) + iVar4);
  uVar2 = *(undefined4 *)(&REFG(undefined, 0x1138ad8) + iVar4);
  uVar3 = *(undefined4 *)(&REFG(undefined, 0x1138adc) + iVar4);
  *param_1 = *(undefined4 *)(&REFG(undefined, 0x1138ad0) + iVar4);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_006610a0 */
GEN_FRAME uint GEN_THISCALL F_006610a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6610a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f44d0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006610d0 */
GEN_FRAME uint GEN_THISCALL F_006610d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6610d0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  *param_2 = *in_ecx - *param_3;
  param_2[1] = fVar1 - fVar4;
  param_2[2] = fVar2 - fVar5;
  param_2[3] = fVar3 - fVar6;
  return (uint)param_2;
}

/* ref: FUN_006610f0 */
GEN_FRAME uint GEN_THISCALL F_006610f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6610f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
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
  *param_2 = *param_3 * *in_ecx;
  param_2[1] = fVar1 * fVar4;
  param_2[2] = fVar2 * fVar5;
  param_2[3] = fVar3 * fVar6;
  return (uint)param_2;
}

/* ref: FUN_00661110 */
GEN_FRAME uint GEN_THISCALL F_00661110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661110u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661120 */
GEN_FRAME uint GEN_THISCALL F_00661120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661120u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: FUN_00661140 */
GEN_FRAME uint GEN_THISCALL F_00661140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661140u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00661160 */
GEN_FRAME uint GEN_THISCALL F_00661160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_00661180 */
GEN_FRAME uint GEN_THISCALL F_00661180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_006611a0 */
GEN_FRAME uint GEN_THISCALL F_006611a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6611a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *(float *)((int)this + 4) = fVar1 * fVar4 + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = fVar2 * fVar5 + *(float *)((int)this + 8);
  *(float *)((int)this + 0xc) = fVar3 * fVar6 + *(float *)((int)this + 0xc);
  return (uint)param_1;
}

/* ref: FUN_00661210 */
GEN_FRAME uint GEN_THISCALL F_00661210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661210u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00661220 */
GEN_FRAME unsigned int GEN_THISCALL F_00661220(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x661220u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return;
}

/* ref: FUN_00661260 */
GEN_FRAME uint GEN_THISCALL F_00661260(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006612b0 */
GEN_FRAME uint GEN_THISCALL F_006612b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6612b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006612f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006612f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6612f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  return 0;
}

/* ref: FUN_00661360 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00661360(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x661360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d31f70(this GEN_EDX_FWD);
  F_00d31b70(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00661370 */
GEN_FRAME uint GEN_STDCALL F_00661370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661370u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_00661380 */
GEN_FRAME uint GEN_STDCALL F_00661380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661380u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = *param_1 | param_2;
  return (uint)param_1;
}

/* ref: FUN_00661390 */
GEN_FRAME uint GEN_STDCALL F_00661390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661390u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = *param_1 & ~param_2;
  return (uint)param_1;
}

/* ref: FUN_006613b0 */
GEN_FRAME uint GEN_THISCALL F_006613b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6613b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006613e0 */
GEN_FRAME uint GEN_THISCALL F_006613e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6613e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00661400 */
GEN_FRAME uint GEN_THISCALL F_00661400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(byte *)this = (byte)(param_1 >> 0xc) & 0xf;
  *(ushort *)((int)this + 2) = (ushort)param_1 & 0xfff;
  return (uint)this;
}

/* ref: FUN_00661460 */
GEN_FRAME uint F_00661460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00d93970(param_2 GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00661480 */
GEN_FRAME uint F_00661480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_006614b0 */
GEN_FRAME uint F_006614b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6614b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_006614e0 */
GEN_FRAME unsigned int F_006614e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6614e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = 0;
  return 0;
}

/* ref: FUN_00661550 */
GEN_FRAME uint F_00661550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x661550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  return (uint)param_2;
}

/* ref: FUN_006615f0 */
GEN_NOFRAME byte GEN_THISCALL F_006615f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6615f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a065a0();
  if ((char)uVar1 == '\0') {
    return 1;
  }
  return *(char *)(in_ecx + 8) < '\x01';
}

/* ref: FUN_00661670 */
GEN_FRAME float GEN_THISCALL F_00661670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) + 0x38)));
}

/* ref: FUN_00661690 */
GEN_FRAME uint GEN_THISCALL F_00661690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_009f0d90(this GEN_EDX_FWD,param_1,1);
  if (uVar1 != 0) {
    return uVar1;
  }
  return 0;
}

/* ref: FUN_006616b0 */
GEN_FRAME uint GEN_THISCALL F_006616b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6616b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) + 0x3c))) & 1;
}

/* ref: Client::Graphics::Render::SkeletonHelper::IPartiialSkeletonWalk::vf2 */
GEN_FRAME uint GEN_THISCALL F_00661700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00661750 */
GEN_FRAME uint GEN_THISCALL F_00661750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661750u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((in_ecx + 0xbc + (-(uint)(param_2 != 0) & 2) * 4)));
}

/* ref: FUN_006617a0 */
GEN_FRAME uint GEN_THISCALL F_006617a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6617a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xbc + param_2 * 4);
}

/* ref: FUN_00661850 */
GEN_FRAME uint GEN_THISCALL F_00661850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00661870 */
GEN_FRAME uint GEN_THISCALL F_00661870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(param_2,(int)pcVar2 - (int)(param_2 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  *(uint *)((int)this + 8) = uVar4;
  return uVar4;
}

/* ref: FUN_006618e0 */
GEN_FRAME uint GEN_THISCALL F_006618e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6618e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00661900 */
GEN_FRAME uint GEN_THISCALL F_00661900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * param_2 = (char *)(uintptr_t)gen_a2;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  uint uVar4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00b52710(param_2,(int)pcVar2 - (int)(param_2 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  *(uint *)((int)this + 8) = uVar4;
  return uVar4;
}

/* ref: FUN_00661960 */
GEN_FRAME uint GEN_THISCALL F_00661960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00661970 */
GEN_FRAME uint GEN_THISCALL F_00661970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  *(uint *)((int)this + 4) = uVar3;
  return uVar3;
}

/* ref: FUN_006619a0 */
GEN_FRAME uint GEN_THISCALL F_006619a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6619a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_006619b0 */
GEN_FRAME uint GEN_THISCALL F_006619b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6619b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  char * pcVar2;
  uint uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = F_00b52710(param_1,(int)pcVar2 - (int)(param_1 + 1),0);
  *(uint *)((int)this + 8) = uVar3;
  return uVar3;
}

/* ref: FUN_00661a50 */
GEN_FRAME unsigned int GEN_THISCALL F_00661a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661a50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 4) != 0) {
    *(undefined4 *)(in_ecx + 0xc) = param_2;
  }
  return;
}

/* ref: FUN_00661a70 */
GEN_FRAME unsigned int GEN_THISCALL F_00661a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 8);
  }
  return;
}

/* ref: FUN_00661ae0 */
GEN_FRAME uint GEN_THISCALL F_00661ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661ae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x60) + param_2 * 8;
}

/* ref: FUN_00661af0 */
GEN_FRAME uint GEN_THISCALL F_00661af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 0x48) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x60);
    do {
      if (*piVar1 == param_1) {
        return (uint)piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 2;
    } while (uVar2 < *(uint *)((int)this + 0x48));
  }
  return 0;
}

/* ref: FUN_00661b30 */
GEN_FRAME uint GEN_THISCALL F_00661b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x68) + param_2 * 0xc;
}

/* ref: FUN_00661b70 */
GEN_FRAME uint GEN_THISCALL F_00661b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x74) + param_2 * 4)));
}

/* ref: FUN_00661b80 */
GEN_FRAME uint GEN_THISCALL F_00661b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x80) + param_2 * 4)));
}

/* ref: FUN_00661ba0 */
GEN_FRAME uint GEN_THISCALL F_00661ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661ba0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x5a8) = param_2 & 0x70003c0;
  return param_2 & 0x70003c0;
}

/* ref: FUN_00661bf0 */
GEN_FRAME uint GEN_THISCALL F_00661bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x38);
  return (uint)param_2;
}

/* ref: FUN_00661c00 */
GEN_FRAME uint GEN_THISCALL F_00661c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x50);
  return (uint)param_2;
}

/* ref: FUN_00661c10 */
GEN_FRAME uint GEN_THISCALL F_00661c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)this + 0x5c);
  *param_1 = *(undefined4 *)((int)this + 0x58);
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00661c30 */
GEN_FRAME uint GEN_THISCALL F_00661c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661c30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x3c);
  return (uint)param_2;
}

/* ref: FUN_00661c40 */
GEN_FRAME uint GEN_THISCALL F_00661c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_00661c50 */
GEN_FRAME uint GEN_THISCALL F_00661c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661c50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 8 + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_00661c70 */
GEN_FRAME uint GEN_THISCALL F_00661c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x661c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  uint * puVar1;
  
  puVar1 = (uint *)((int)this + param_1 * 8 + 0x6c);
  *puVar1 = *puVar1 ^ (param_2 << 8 ^ *(uint *)((int)this + param_1 * 8 + 0x6c)) & 0x7fffff00;
  *(undefined1 *)((int)this + param_1 * 8 + 0x6c) = (undefined1)param_3;
  *(uint *)((int)this + param_1 * 8 + 0x6c) =
       param_4 << 0x1f | *(uint *)((int)this + param_1 * 8 + 0x6c) & 0x7fffffff;
  return param_1;
}

/* ref: FUN_00661cb0 */
GEN_FRAME uint GEN_THISCALL F_00661cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x2a8 + param_2 * 8);
}

/* ref: FUN_00661cd0 */
GEN_FRAME uint GEN_THISCALL F_00661cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661cd0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  *param_2 = *(undefined4 *)(in_ecx + 0x2ac + param_3 * 8);
  return (uint)param_2;
}

/* ref: FUN_00661cf0 */
GEN_FRAME uint GEN_THISCALL F_00661cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if (param_2 != 0) {
    uVar1 = param_2 - *(int *)(in_ecx + 0x24);
    *(uint *)(in_ecx + 0x28) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00661d30 */
GEN_FRAME unsigned int GEN_THISCALL F_00661d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x5a8 + iVar1))) = param_1 & 0x70003c0;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00661d80 */
GEN_FRAME unsigned int GEN_THISCALL F_00661d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) =
           *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) & 0x7ffffff | param_1 << 0x1b;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00661dd0 */
GEN_FRAME unsigned int GEN_THISCALL F_00661dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x24);
  if (iVar2 != 0) {
    iVar1 = 0;
    do {
      *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) =
           *((uint *)GEN_TOP((*(int *)((int)this + 4) + 8 + iVar1))) & 0xf87fffff | (param_1 & 0xf) << 0x17;
      iVar1 = iVar1 + 0x5b0;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return;
}

/* ref: FUN_00661e20 */
GEN_FRAME unsigned int GEN_THISCALL F_00661e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x661e20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_004de750(*(undefined * PTR32 *)((int)this + 0x10) GEN_EDX_FWD,param_1,param_2,param_3);
  return;
}

/* ref: FUN_00661e30 */
GEN_FRAME uint GEN_THISCALL F_00661e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00661e50 */
GEN_FRAME uint GEN_THISCALL F_00661e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x392c) = param_2;
  return param_2;
}

/* ref: FUN_00661e70 */
GEN_FRAME uint GEN_THISCALL F_00661e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3924) = param_2;
  return param_2;
}

/* ref: FUN_00661e90 */
GEN_FRAME uint GEN_THISCALL F_00661e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661e90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return (param_2 * 0x10 + param_3) * 0x80 + 0x50 + in_ecx;
}

/* ref: FUN_00661eb0 */
GEN_FRAME byte GEN_THISCALL F_00661eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00661ec0 */
GEN_FRAME uint GEN_THISCALL F_00661ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661ec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x3928) = param_2;
  return param_2;
}

/* ref: FUN_00661ee0 */
GEN_FRAME uint GEN_THISCALL F_00661ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x661ee0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + uVar1 * 4 + 0x18) = param_1;
  *(uint *)((int)this + uVar1 * 4 + 0x28) = param_2;
  *(uint *)((int)this + 0x38) = *(uint *)((int)this + 0x38) | param_2;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + 1;
  return uVar1;
}

/* ref: FUN_00661f10 */
GEN_FRAME uint GEN_THISCALL F_00661f10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x18 + param_2 * 4);
}

/* ref: FUN_00661f20 */
GEN_FRAME byte GEN_THISCALL F_00661f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x661f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x8018) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00661f30 */
GEN_NOFRAME byte F_00661f30(void)
{
  GEN_ENTER(0x661f30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f40 */
GEN_NOFRAME byte F_00661f40(void)
{
  GEN_ENTER(0x661f40u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f50 */
GEN_NOFRAME byte F_00661f50(void)
{
  GEN_ENTER(0x661f50u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f60 */
GEN_NOFRAME byte F_00661f60(void)
{
  GEN_ENTER(0x661f60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f70 */
GEN_NOFRAME byte F_00661f70(void)
{
  GEN_ENTER(0x661f70u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f80 */
GEN_NOFRAME byte F_00661f80(void)
{
  GEN_ENTER(0x661f80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661f90 */
GEN_NOFRAME byte F_00661f90(void)
{
  GEN_ENTER(0x661f90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fa0 */
GEN_NOFRAME byte F_00661fa0(void)
{
  GEN_ENTER(0x661fa0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fb0 */
GEN_NOFRAME byte F_00661fb0(void)
{
  GEN_ENTER(0x661fb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fc0 */
GEN_NOFRAME byte F_00661fc0(void)
{
  GEN_ENTER(0x661fc0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fd0 */
GEN_NOFRAME byte F_00661fd0(void)
{
  GEN_ENTER(0x661fd0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661fe0 */
GEN_NOFRAME byte F_00661fe0(void)
{
  GEN_ENTER(0x661fe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00661ff0 */
GEN_NOFRAME byte F_00661ff0(void)
{
  GEN_ENTER(0x661ff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662000 */
GEN_NOFRAME byte F_00662000(void)
{
  GEN_ENTER(0x662000u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662010 */
GEN_NOFRAME byte F_00662010(void)
{
  GEN_ENTER(0x662010u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662020 */
GEN_NOFRAME byte F_00662020(void)
{
  GEN_ENTER(0x662020u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662030 */
GEN_NOFRAME byte F_00662030(void)
{
  GEN_ENTER(0x662030u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662040 */
GEN_NOFRAME byte F_00662040(void)
{
  GEN_ENTER(0x662040u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662050 */
GEN_NOFRAME byte F_00662050(void)
{
  GEN_ENTER(0x662050u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662060 */
GEN_NOFRAME byte F_00662060(void)
{
  GEN_ENTER(0x662060u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662070 */
GEN_NOFRAME byte F_00662070(void)
{
  GEN_ENTER(0x662070u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00662080 */
GEN_FRAME byte GEN_THISCALL F_00662080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662090 */
GEN_FRAME byte GEN_THISCALL F_00662090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006620a0 */
GEN_FRAME byte GEN_THISCALL F_006620a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6620a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662110 */
GEN_FRAME unsigned int GEN_THISCALL F_00662110(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x662110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa4) = param_2;
  return;
}

/* ref: FUN_00662150 */
GEN_FRAME unsigned int GEN_THISCALL F_00662150(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x662150u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xa8) = param_2;
  return;
}

/* ref: FUN_00662180 */
GEN_FRAME unsigned int GEN_THISCALL F_00662180(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x662180u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xac) = param_2;
  return;
}

/* ref: FUN_006621a0 */
GEN_FRAME unsigned int GEN_THISCALL F_006621a0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6621a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb0) = param_2;
  return;
}

/* ref: FUN_006621e0 */
GEN_FRAME byte GEN_THISCALL F_006621e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6621e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xb8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662200 */
GEN_FRAME unsigned int GEN_THISCALL F_00662200(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x662200u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xb4) = param_2;
  return;
}

/* ref: FUN_00662240 */
GEN_FRAME uint GEN_THISCALL F_00662240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662240u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa0) = param_2;
  return param_2;
}

/* ref: FUN_00662250 */
GEN_FRAME uint GEN_THISCALL F_00662250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  return (uint)in_ecx;
}

/* ref: FUN_006622f0 */
GEN_FRAME byte GEN_THISCALL F_006622f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6622f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(bool *)(in_ecx + 0x1c4) = (char)param_2 != '\0';
  return (char)param_2 != '\0';
}

/* ref: FUN_00662310 */
GEN_FRAME byte GEN_THISCALL F_00662310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(bool *)(in_ecx + 0x1c4) = (char)param_2 != '\0';
  return (char)param_2 != '\0';
}

/* ref: FUN_00662330 */
GEN_FRAME byte GEN_THISCALL F_00662330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x138) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00662340 */
GEN_FRAME uint GEN_THISCALL F_00662340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x140) = param_2;
  return param_2;
}

/* ref: FUN_00662360 */
GEN_FRAME uint GEN_THISCALL F_00662360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x40 + 400 + in_ecx;
}

/* ref: FUN_00662380 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00662380(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x662380u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  return;
}

/* ref: Client::Graphics::Render::SubView::vf0 */
GEN_FRAME uint GEN_THISCALL F_00662390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::View::vf0 */
GEN_FRAME uint GEN_THISCALL F_006623e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6623e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pVVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abacc));
  pVVar1 = this + 0x358;
  iVar2 = 0xf;
  do {
    pVVar1 = pVVar1 - 0x34;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pVVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abac4));
  } while (-1 < iVar2);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662430 */
GEN_FRAME unsigned int GEN_THISCALL F_00662430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x662430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + param_1 * 4 + 0x1c) = param_2;
  return;
}

/* ref: FUN_00662470 */
GEN_FRAME uint GEN_THISCALL F_00662470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662470u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x2c) = param_2;
  return param_2;
}

/* ref: FUN_00662480 */
GEN_FRAME unsigned int GEN_THISCALL F_00662480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x30);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + 0x30) = param_1;
  return;
}

/* ref: FUN_006624b0 */
GEN_FRAME unsigned int GEN_THISCALL F_006624b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6624b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x2a0);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + 0x2a0) = param_1;
  return;
}

/* ref: FUN_00662570 */
GEN_FRAME uint F_00662570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x662570u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00662600 */
GEN_FRAME uint GEN_THISCALL F_00662600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 8) + 0xa4)));
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x98);
  }
  uVar2 = *(uint *)(param_1 + 4);
  if (uVar3 == uVar2) {
    if (uVar2 != 0) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0x10);
    }
  }
  else if (uVar2 != 0) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(uVar2 + 0x80);
    return uVar2;
  }
  return uVar2;
}

/* ref: FUN_00662670 */
GEN_FRAME uint GEN_THISCALL F_00662670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *(int *)((int)this + 0x18) + param_1 * 0xc;
  }
  return 0;
}

/* ref: FUN_006626a0 */
GEN_FRAME uint GEN_THISCALL F_006626a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6626a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 0xc)));
  }
  return 0xffffffff;
}

/* ref: Client::Graphics::Render::PreBoneDeformer::vf0 */
GEN_FRAME uint GEN_THISCALL F_006626f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6626f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662720 */
GEN_FRAME unsigned int GEN_THISCALL F_00662720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662720u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  in_ecx[0x18] = param_2[0x18];
  in_ecx[0x19] = param_2[0x19];
  in_ecx[0x1a] = param_2[0x1a];
  in_ecx[0x1b] = param_2[0x1b];
  in_ecx[0x1c] = param_2[0x1c];
  in_ecx[0x1d] = param_2[0x1d];
  in_ecx[0x1e] = param_2[0x1e];
  in_ecx[0x1f] = param_2[0x1f];
  in_ecx[0x20] = param_2[0x20];
  in_ecx[0x21] = param_2[0x21];
  in_ecx[0x22] = param_2[0x22];
  in_ecx[0x23] = param_2[0x23];
  in_ecx[0x24] = param_2[0x24];
  in_ecx[0x25] = param_2[0x25];
  in_ecx[0x26] = param_2[0x26];
  in_ecx[0x27] = param_2[0x27];
  in_ecx[0x28] = param_2[0x28];
  in_ecx[0x29] = param_2[0x29];
  in_ecx[0x2a] = param_2[0x2a];
  in_ecx[0x2b] = param_2[0x2b];
  in_ecx[0x2c] = param_2[0x2c];
  in_ecx[0x2d] = param_2[0x2d];
  in_ecx[0x2e] = param_2[0x2e];
  in_ecx[0x2f] = param_2[0x2f];
  in_ecx[0x30] = param_2[0x30];
  in_ecx[0x31] = param_2[0x31];
  in_ecx[0x34] = param_2[0x34];
  in_ecx[0x35] = param_2[0x35];
  in_ecx[0x36] = param_2[0x36];
  in_ecx[0x37] = param_2[0x37];
  in_ecx[0x38] = param_2[0x38];
  in_ecx[0x39] = param_2[0x39];
  in_ecx[0x3a] = param_2[0x3a];
  in_ecx[0x3b] = param_2[0x3b];
  return 0;
}

/* ref: FUN_00662940 */
GEN_FRAME uint GEN_THISCALL F_00662940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x6c) = param_2;
  return param_2;
}

/* ref: FUN_00662980 */
GEN_NOFRAME byte F_00662980(void)
{
  GEN_ENTER(0x662980u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00662990 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00662990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x662990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return;
}

/* ref: FUN_006629e0 */
GEN_NOFRAME uint GEN_THISCALL F_006629e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6629e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)(in_ecx + 0x10);
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  puVar2 = (undefined4 *)F_004f4130(((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x10)),iVar1 + 0x10);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  param_2[2] = puVar2[2];
  return (uint)param_2;
}

/* ref: FUN_00662af0 */
GEN_FRAME unsigned int GEN_THISCALL F_00662af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  in_ecx[7] = param_2[7];
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  in_ecx[10] = param_2[10];
  in_ecx[0xb] = param_2[0xb];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  in_ecx[0xe] = param_2[0xe];
  in_ecx[0xf] = param_2[0xf];
  in_ecx[0x10] = param_2[0x10];
  in_ecx[0x11] = param_2[0x11];
  in_ecx[0x12] = param_2[0x12];
  in_ecx[0x13] = param_2[0x13];
  in_ecx[0x14] = param_2[0x14];
  in_ecx[0x15] = param_2[0x15];
  in_ecx[0x16] = param_2[0x16];
  in_ecx[0x17] = param_2[0x17];
  in_ecx[0x18] = param_2[0x18];
  in_ecx[0x19] = param_2[0x19];
  in_ecx[0x1a] = param_2[0x1a];
  in_ecx[0x1b] = param_2[0x1b];
  return 0;
}

/* ref: FUN_00662be0 */
GEN_NOFRAME uint GEN_THISCALL F_00662be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x662be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abad4));
  puVar1 = (undefined4 *)((int)this + 0x1d0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1b8);
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  iVar2 = 2;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xac) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  return 0x10ab990;
}

/* ref: Client::Graphics::Render::AmbientLightRenderUtility::vf0 */
GEN_FRAME uint GEN_THISCALL F_00662c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00662be0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00662ca0 */
GEN_FRAME uint GEN_THISCALL F_00662ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x662ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  uint uVar2;
  sbyte sVar3;
  uint uVar4;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x58) + (param_1 >> 5) * 4)));
  sVar3 = (sbyte)(param_1 & 0x1f);
  uVar2 = *puVar1 >> sVar3;
  uVar4 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar4 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  if ((param_1 & 0x1f) != 0) {
    uVar2 = uVar2 + (puVar1[1] << (0x20U - sVar3 & 0x1f));
  }
  return uVar2 & uVar4;
}

/* ref: FUN_00662cf0 */
GEN_FRAME uint GEN_THISCALL F_00662cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x48) + param_2 * 4)));
}

/* ref: FUN_00662d10 */
GEN_FRAME uint GEN_THISCALL F_00662d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (*(int *)(in_ecx + 0x2c) != 0) {
    return param_2 * 0x90 + *(int *)(in_ecx + 0x2c);
  }
  return 0;
}

/* ref: FUN_00662d30 */
GEN_FRAME uint GEN_THISCALL F_00662d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662d30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x44) + param_2 * 4)));
}

/* ref: FUN_00662db0 */
GEN_FRAME unsigned int GEN_THISCALL F_00662db0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x662db0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return;
}

/* ref: FUN_00662df0 */
GEN_FRAME uint GEN_THISCALL F_00662df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662df0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00662e60 */
GEN_FRAME uint GEN_THISCALL F_00662e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
}

/* ref: Client::Graphics::Render::BaseRenderer::vf1 */
GEN_NOFRAME unsigned int F_00662ea0(void)
{
  GEN_ENTER(0x662ea0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Render::BaseRenderer::vf3 */
GEN_NOFRAME uint GEN_THISCALL F_00662eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Render::BaseRenderer::vf4 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00662ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: FUN_00662f30 */
GEN_FRAME byte GEN_THISCALL F_00662f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 != '\0') + 1;
  *(byte *)(in_ecx + 0x289) = bVar1;
  return bVar1;
}

/* ref: FUN_00662f60 */
GEN_FRAME uint GEN_THISCALL F_00662f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_00662ff0 */
GEN_FRAME uint GEN_THISCALL F_00662ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x662ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 0x24);
  sVar2 = *(short *)((int)this + 10);
  *param_1 = (float)(int)((int)*(short *)((int)this + 8) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return (uint)param_1;
}

/* ref: FUN_00663040 */
GEN_FRAME uint GEN_THISCALL F_00663040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar1 = *(ushort *)((int)this + 0x24);
  sVar2 = *(short *)((int)this + 8);
  sVar3 = *(short *)((int)this + 10);
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = uVar4;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar4;
  param_1[0xc] = (undefined4)
                 gen_fl2bits((float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1)));
  param_1[0xd] = 0;
  param_1[0xe] = (undefined4)
                 gen_fl2bits((float)(int)((int)sVar3 * (uint)uVar1 + (uint)(uVar1 >> 1)));
  return (uint)param_1;
}

/* ref: FUN_006630c0 */
GEN_FRAME uint GEN_THISCALL F_006630c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6630c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  ushort uVar1;
  
  *param_1 = *(undefined2 *)((int)this + 8);
  uVar1 = *(ushort *)((int)this + 10);
  *param_2 = uVar1;
  return (uint)uVar1;
}

/* ref: FUN_00663160 */
GEN_FRAME uint GEN_THISCALL F_00663160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)*(byte *)(param_2 + 0x3a6e + in_ecx);
}

/* ref: FUN_00663180 */
GEN_FRAME uint GEN_THISCALL F_00663180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663180u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return in_ecx + 0x11fc + (uint)(ushort)param_2 * 8;
}

/* ref: FUN_006631b0 */
GEN_FRAME uint GEN_THISCALL F_006631b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6631b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 8);
  sVar2 = *(short *)((int)this + 0xc);
  *param_1 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return (uint)param_1;
}

/* ref: FUN_00663230 */
GEN_FRAME byte GEN_THISCALL F_00663230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663280 */
GEN_FRAME uint GEN_THISCALL F_00663280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  ushort uVar1;
  short sVar2;
  
  uVar1 = *(ushort *)((int)this + 8);
  sVar2 = *(short *)((int)this + 0xc);
  *param_1 = (float)(int)((int)*(short *)((int)this + 10) * (uint)uVar1 + (uint)(uVar1 >> 1));
  param_1[1] = 0.0;
  param_1[2] = (float)(int)((int)sVar2 * (uint)uVar1 + (uint)(uVar1 >> 1));
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::ShadowMaskUnit::vf0 */
GEN_FRAME uint GEN_THISCALL F_00663380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006633b0 */
GEN_FRAME uint GEN_THISCALL F_006633b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6633b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 4 + param_2 * 4);
  if (iVar1 != 0) {
    return *(uint *)(iVar1 + 0x98);
  }
  return 0;
}

/* ref: FUN_00663480 */
GEN_FRAME uint GEN_STDCALL F_00663480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((float10)*(float *)(param_1 + 4) < (float10)*(float *)(param_2 + 4)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006634c0 */
GEN_FRAME uint GEN_THISCALL F_006634c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6634c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_006634e0 */
GEN_FRAME uint GEN_THISCALL F_006634e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6634e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00663500 */
GEN_FRAME uint GEN_THISCALL F_00663500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00663520 */
GEN_FRAME uint GEN_THISCALL F_00663520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663550 */
GEN_FRAME uint GEN_THISCALL F_00663550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663580 */
GEN_FRAME unsigned int GEN_THISCALL F_00663580(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x663580u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return;
}

/* ref: FUN_006635b0 */
GEN_FRAME unsigned int GEN_THISCALL F_006635b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6635b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x30) = param_2;
  return;
}

/* ref: FUN_006635e0 */
GEN_FRAME unsigned int GEN_THISCALL F_006635e0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6635e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x34) = param_2;
  return;
}

/* ref: FUN_00663600 */
GEN_FRAME byte GEN_THISCALL F_00663600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663610 */
GEN_FRAME uint GEN_THISCALL F_00663610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x663610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x38);
  *param_3 = *(undefined4 *)((int)this + param_1 * 4 + 0x3c);
  return (uint)param_3;
}

/* ref: FUN_00663640 */
GEN_FRAME uint GEN_THISCALL F_00663640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x68) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663660 */
GEN_FRAME uint GEN_THISCALL F_00663660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x6c) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663690 */
GEN_FRAME byte GEN_THISCALL F_00663690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_0065f650(param_1 GEN_EDX_FWD,(int)this + 0x20);
  return bVar1 == 0;
}

/* ref: FUN_006636b0 */
GEN_FRAME byte GEN_THISCALL F_006636b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6636b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006636e0 */
GEN_FRAME uint GEN_THISCALL F_006636e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6636e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 != 0) && ((*(int *)(param_2 + 0xc) < 2 || (5 < *(int *)(param_2 + 0xc))))) {
    uVar1 = 0;
  }
  if (param_1 < 4) {
    *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = GEN_FLT_TO(*(undefined4 *)((int)this + param_1 * 4 + 0x2c), REFG(float, 0x1087f04));
    *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = 0;
  *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = uVar1;
  return uVar1;
}

/* ref: FUN_00663760 */
GEN_FRAME byte GEN_THISCALL F_00663760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663770 */
GEN_FRAME byte GEN_THISCALL F_00663770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663780 */
GEN_FRAME uint GEN_THISCALL F_00663780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10 + param_2 * 4);
}

/* ref: FUN_006637a0 */
GEN_FRAME uint GEN_THISCALL F_006637a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6637a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x24 + param_2 * 4);
}

/* ref: FUN_00663890 */
GEN_FRAME uint GEN_THISCALL F_00663890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *(uint *)(in_ecx + 0x90);
  }
  return 0;
}

/* ref: FUN_006638b0 */
GEN_FRAME uint GEN_THISCALL F_006638b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6638b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 4) {
    return *(uint *)(in_ecx + 0x94 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_006638d0 */
GEN_FRAME uint GEN_THISCALL F_006638d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6638d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < 2) {
    return *(uint *)(in_ecx + 0xc0 + param_2 * 4);
  }
  return 0;
}

/* ref: FUN_006638f0 */
GEN_FRAME uint GEN_THISCALL F_006638f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6638f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xcc + param_2 * 4);
}

/* ref: FUN_00663950 */
GEN_FRAME uint GEN_THISCALL F_00663950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x663950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  
  *param_2 = *(undefined4 *)((int)this + param_1 * 4 + 0x110);
  uVar1 = *(uint *)((int)this + param_1 * 4 + 0x150);
  *param_3 = uVar1;
  return uVar1;
}

/* ref: FUN_006639a0 */
GEN_FRAME uint GEN_THISCALL F_006639a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6639a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1a0 + param_2 * 4);
}

/* ref: FUN_006639c0 */
GEN_FRAME uint GEN_THISCALL F_006639c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6639c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52c10(this GEN_EDX_FWD,*(undefined4 *)(param_1 + 0x98));
  return (uint)this;
}

/* ref: FUN_006639f0 */
GEN_NOFRAME uint GEN_THISCALL F_006639f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6639f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar1 = F_00b52cb0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  return uVar1;
}

/* ref: Client::Graphics::Render::ScopedShaderKey::vf0 */
GEN_FRAME uint GEN_THISCALL F_00663a10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00663b70 */
GEN_FRAME uint GEN_THISCALL F_00663b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00663c00 */
GEN_FRAME uint GEN_THISCALL F_00663c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c10 */
GEN_FRAME uint GEN_THISCALL F_00663c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c20 */
GEN_FRAME uint GEN_THISCALL F_00663c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00663c90 */
GEN_FRAME uint GEN_THISCALL F_00663c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x663c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663d10 */
GEN_NOFRAME byte F_00663d10(void)
{
  GEN_ENTER(0x663d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00406b90(0x140,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00b800e0(uVar1 GEN_EDX_ARG);
    REFG(undefined4, 0x1487c64) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c64) = 0;
  return 0;
}

/* ref: FUN_00663d80 */
GEN_FRAME byte GEN_THISCALL F_00663d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x663d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * pfVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = 0;
  pfVar1 = (float *)(param_1 + 0x58);
  do {
    fVar3 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)pfVar1[-0x14] *
                                              (float10)*(float *)(param_2 + 8) +
                                             ((float10)pfVar1[-0x15] *
                                              (float10)*(float *)(param_2 + 4) +
                                             (float10)pfVar1[-0x16] * (float10)*(float *)param_2)))) +
                            (float10)pfVar1[-0x13]))) +
            (float10)((float)GEN_TOF(((float10)*pfVar1 * (float10)*(float *)(param_3 + 8) +
                            ((float10)pfVar1[-1] * (float10)*(float *)(param_3 + 4) +
                            (float10)pfVar1[-2] * (float10)*(float *)param_3))));
    if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar3)) && !((float10)0 < fVar3)) {
      return 0;
    }
    uVar2 = uVar2 + 1;
    pfVar1 = pfVar1 + 4;
  } while (uVar2 < 5);
  return 1;
}

/* ref: FUN_00663f10 */
GEN_FRAME uint F_00663f10(unsigned int gen_a0)
{
  GEN_ENTER(0x663f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x1487c6c) == 0) {
    REFG(undefined4, 0x1487c54) = param_1;
    REFG(undefined4, 0x1487c6c) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 8) = REFG(undefined4, 0x1487c6c);
  *(uint *)(REFG(undefined4, 0x1487c6c) + 0xc) = param_1;
  REFG(undefined4, 0x1487c6c) = param_1;
  return param_1;
}

/* ref: FUN_00663f40 */
GEN_FRAME unsigned int F_00663f40(unsigned int gen_a0)
{
  GEN_ENTER(0x663f40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = REFG(int, 0x1487c54);
  }
  REFG(int, 0x1487c54) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c6c) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 8) = iVar1;
  return 0;
}

/* ref: FUN_00663f70 */
GEN_FRAME uint F_00663f70(unsigned int gen_a0)
{
  GEN_ENTER(0x663f70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x1487c70) == 0) {
    REFG(undefined4, 0x1487c5c) = param_1;
    REFG(undefined4, 0x1487c70) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 8) = REFG(undefined4, 0x1487c70);
  *(uint *)(REFG(undefined4, 0x1487c70) + 0xc) = param_1;
  REFG(undefined4, 0x1487c70) = param_1;
  return param_1;
}

/* ref: FUN_00663fa0 */
GEN_FRAME uint F_00663fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x663fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x1487c78) == 0) {
    *(uint *)&REFG(undefined, 0x1487c74) = param_1;
    REFG(undefined4, 0x1487c78) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 0x28) = REFG(undefined4, 0x1487c78);
  *(uint *)(REFG(undefined4, 0x1487c78) + 0x2c) = param_1;
  REFG(undefined4, 0x1487c78) = param_1;
  return param_1;
}

/* ref: FUN_00663fd0 */
GEN_FRAME uint F_00663fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x663fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x1487c80) == 0) {
    *(uint *)&REFG(undefined, 0x1487c7c) = param_1;
    REFG(undefined4, 0x1487c80) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 0x28) = REFG(undefined4, 0x1487c80);
  *(uint *)(REFG(undefined4, 0x1487c80) + 0x2c) = param_1;
  REFG(undefined4, 0x1487c80) = param_1;
  return param_1;
}

/* ref: FUN_00664000 */
GEN_FRAME uint F_00664000(unsigned int gen_a0)
{
  GEN_ENTER(0x664000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (REFG(undefined4, 0x1487c88) == 0) {
    *(uint *)&REFG(undefined, 0x1487c84) = param_1;
    REFG(undefined4, 0x1487c88) = param_1;
    return param_1;
  }
  *(uint *)(param_1 + 8) = REFG(undefined4, 0x1487c88);
  *(uint *)(REFG(undefined4, 0x1487c88) + 0xc) = param_1;
  REFG(undefined4, 0x1487c88) = param_1;
  return param_1;
}

/* ref: FUN_00664050 */
GEN_FRAME uint GEN_THISCALL F_00664050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664050u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00664080 */
GEN_FRAME uint GEN_THISCALL F_00664080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664080u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006640f0 */
GEN_FRAME uint GEN_THISCALL F_006640f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6640f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00664150 */
GEN_FRAME uint GEN_THISCALL F_00664150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664150u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006641c0 */
GEN_FRAME uint GEN_STDCALL F_006641c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006641f0 */
GEN_FRAME uint GEN_STDCALL F_006641f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664240 */
GEN_FRAME uint GEN_THISCALL F_00664240(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664240u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006642a0 */
GEN_FRAME uint GEN_STDCALL F_006642a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006642d0 */
GEN_FRAME uint GEN_STDCALL F_006642d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664300 */
GEN_FRAME uint GEN_THISCALL F_00664300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664300u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00664360 */
GEN_FRAME byte GEN_THISCALL F_00664360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x30) == param_2;
}

/* ref: FUN_00664410 */
GEN_FRAME uint GEN_STDCALL F_00664410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_00664440 */
GEN_FRAME uint GEN_THISCALL F_00664440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x50 + param_2 * 8;
}

/* ref: FUN_00664480 */
GEN_FRAME uint GEN_THISCALL F_00664480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x80 + param_2 * 4);
}

/* ref: FUN_006644b0 */
GEN_FRAME byte GEN_THISCALL F_006644b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6644b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 < 0x400) {
    *(undefined4 *)((int)this + iVar1 * 4 + 0x80) = param_1;
    *(int *)this = iVar1 + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_00664500 */
GEN_FRAME uint GEN_THISCALL F_00664500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664540 */
GEN_FRAME uint GEN_THISCALL F_00664540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664560 */
GEN_FRAME uint GEN_THISCALL F_00664560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664580 */
GEN_FRAME uint GEN_THISCALL F_00664580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664590 */
GEN_FRAME uint GEN_STDCALL F_00664590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_006645d0 */
GEN_FRAME uint GEN_STDCALL F_006645d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6645d0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006645f0 */
GEN_FRAME uint GEN_STDCALL F_006645f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6645f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_00664620 */
GEN_FRAME uint GEN_STDCALL F_00664620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_00664660 */
GEN_FRAME uint GEN_STDCALL F_00664660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_006646a0 */
GEN_FRAME uint GEN_THISCALL F_006646a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6646a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006646c0 */
GEN_FRAME uint F_006646c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6646c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664740 */
GEN_FRAME uint GEN_THISCALL F_00664740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 < *(uint *)(in_ecx + 0xa4)) {
    return param_2 * 0x40 + *(int *)(in_ecx + 0xcc);
  }
  return 0;
}

/* ref: FUN_006648c0 */
GEN_NOFRAME uint GEN_THISCALL F_006648c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6648c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0xc);
  uVar2 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (*(uint *)((int)this + 8) <= uVar2) {
    return 0;
  }
  return *(int *)((int)this + 4) + uVar2 * 0x14;
}

/* ref: FUN_00664a70 */
GEN_FRAME uint GEN_THISCALL F_00664a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -(uint)((char)param_2 != '\0');
  return (uint)in_ecx;
}

/* ref: FUN_00664aa0 */
GEN_FRAME uint GEN_THISCALL F_00664aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00664ab0 */
GEN_FRAME byte GEN_THISCALL F_00664ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00664ad0 */
GEN_FRAME uint GEN_THISCALL F_00664ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664ad0u, gen_a0, gen_a1, 0u, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -((char)param_2 != '\0');
  return (uint)in_ecx;
}

/* ref: FUN_00664b00 */
GEN_FRAME uint GEN_THISCALL F_00664b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00664b50 */
GEN_FRAME uint F_00664b50(unsigned int gen_a0)
{
  GEN_ENTER(0x664b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b60 */
GEN_FRAME uint F_00664b60(unsigned int gen_a0)
{
  GEN_ENTER(0x664b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b70 */
GEN_FRAME uint F_00664b70(unsigned int gen_a0)
{
  GEN_ENTER(0x664b70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b80 */
GEN_FRAME uint F_00664b80(unsigned int gen_a0)
{
  GEN_ENTER(0x664b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b90 */
GEN_FRAME uint F_00664b90(unsigned int gen_a0)
{
  GEN_ENTER(0x664b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664ba0 */
GEN_FRAME uint F_00664ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x664ba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664be0 */
GEN_FRAME uint GEN_THISCALL F_00664be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0xa0 + 0x100 + in_ecx);
}

/* ref: FUN_00664c00 */
GEN_FRAME uint GEN_THISCALL F_00664c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664c00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00664c20 */
GEN_FRAME uint F_00664c20(unsigned int gen_a0)
{
  GEN_ENTER(0x664c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664c60 */
GEN_FRAME uint GEN_THISCALL F_00664c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00664c70 */
GEN_FRAME uint GEN_STDCALL F_00664c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00664c90 */
GEN_FRAME unsigned int GEN_STDCALL F_00664c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00664cb0 */
GEN_FRAME uint GEN_STDCALL F_00664cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00664cd0 */
GEN_FRAME uint GEN_STDCALL F_00664cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00664cf0 */
GEN_FRAME uint GEN_STDCALL F_00664cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00664d90 */
GEN_FRAME uint GEN_STDCALL F_00664d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664d90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00664de0 */
GEN_FRAME uint GEN_THISCALL F_00664de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664df0 */
GEN_FRAME uint GEN_THISCALL F_00664df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x664df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00664e20 */
GEN_FRAME unsigned int GEN_THISCALL F_00664e20(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x664e20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00664ef0 */
GEN_FRAME unsigned int GEN_THISCALL F_00664ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x664ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 5;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0xb0;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 0x14);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00664fc0 */
GEN_FRAME unsigned int GEN_THISCALL F_00664fc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x664fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x90;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00665090 */
GEN_FRAME unsigned int GEN_THISCALL F_00665090(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x665090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 5;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0xb0;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 0x14);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00665160 */
GEN_FRAME unsigned int GEN_THISCALL F_00665160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x665160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00665230 */
GEN_FRAME unsigned int GEN_THISCALL F_00665230(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x665230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00665300 */
GEN_FRAME unsigned int GEN_THISCALL F_00665300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x665300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_006653d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006653d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6653d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_006654a0 */
GEN_FRAME unsigned int GEN_THISCALL F_006654a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6654a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  undefined4 uVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  int * piVar6;
  uint uVar7;
  int iVar8;
  
  uVar2 = *(undefined4 *)((int)this + 0x14);
  pcVar3 = *(gen_code32 *)((int)this + 0x18);
  iVar4 = *(int *)((int)this + 0x5c);
  puVar1 = (uint *)((int)this + 0x60);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 - 1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x90;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    uVar7 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  return 0;
}

/* ref: FUN_00665590 */
GEN_FRAME unsigned int F_00665590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665590u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006655c0 */
GEN_FRAME uint F_006655c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655d0 */
GEN_FRAME uint F_006655d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655e0 */
GEN_FRAME uint F_006655e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655f0 */
GEN_FRAME uint F_006655f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665600 */
GEN_FRAME uint F_00665600(unsigned int gen_a0)
{
  GEN_ENTER(0x665600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665610 */
GEN_FRAME uint F_00665610(unsigned int gen_a0)
{
  GEN_ENTER(0x665610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665620 */
GEN_FRAME uint F_00665620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00665650 */
GEN_FRAME uint F_00665650(unsigned int gen_a0)
{
  GEN_ENTER(0x665650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665660 */
GEN_FRAME uint F_00665660(unsigned int gen_a0)
{
  GEN_ENTER(0x665660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665670 */
GEN_FRAME uint F_00665670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665670u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006656a0 */
GEN_FRAME byte F_006656a0(void)
{
  GEN_ENTER(0x6656a0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006656c0 */
GEN_FRAME byte F_006656c0(void)
{
  GEN_ENTER(0x6656c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006656e0 */
GEN_FRAME uint F_006656e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6656e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006656f0 */
GEN_FRAME uint GEN_THISCALL F_006656f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6656f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00665710 */
GEN_FRAME uint F_00665710(unsigned int gen_a0)
{
  GEN_ENTER(0x665710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665720 */
GEN_FRAME uint F_00665720(unsigned int gen_a0)
{
  GEN_ENTER(0x665720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665750 */
GEN_FRAME byte GEN_THISCALL F_00665750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_006657c0 */
GEN_FRAME byte GEN_THISCALL F_006657c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6657c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665800 */
GEN_FRAME uint F_00665800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x665800u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *param_1 = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  param_1[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  param_1[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  param_1[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00665860 */
GEN_FRAME byte GEN_THISCALL F_00665860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0x10;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_006658d0 */
GEN_FRAME uint F_006658d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6658d0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *param_1 = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  param_1[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  param_1[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  param_1[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00665900 */
GEN_FRAME byte GEN_THISCALL F_00665900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665970 */
GEN_FRAME byte GEN_THISCALL F_00665970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_006659e0 */
GEN_FRAME byte GEN_THISCALL F_006659e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6659e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665a50 */
GEN_FRAME byte GEN_THISCALL F_00665a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665ac0 */
GEN_FRAME byte GEN_THISCALL F_00665ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 8;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665b30 */
GEN_FRAME byte GEN_THISCALL F_00665b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0x10;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_00665ba0 */
GEN_FRAME uint F_00665ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665bc0 */
GEN_FRAME uint F_00665bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665be0 */
GEN_FRAME uint F_00665be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665c00 */
GEN_FRAME uint F_00665c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665c20 */
GEN_FRAME uint F_00665c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665c40 */
GEN_FRAME uint F_00665c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665c60 */
GEN_FRAME uint F_00665c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665c80 */
GEN_FRAME uint F_00665c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665ca0 */
GEN_FRAME uint F_00665ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x665ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00665cc0 */
GEN_FRAME uint GEN_THISCALL F_00665cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665cc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00665d40 */
GEN_FRAME uint GEN_THISCALL F_00665d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00665d60 */
GEN_FRAME uint GEN_THISCALL F_00665d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_00665d90 */
GEN_FRAME uint GEN_THISCALL F_00665d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00665ea0 */
GEN_FRAME uint GEN_THISCALL F_00665ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00665f30 */
GEN_FRAME uint GEN_THISCALL F_00665f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Singleton_VGraphicsConfig_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00665f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb2c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00665f80 */
GEN_FRAME uint F_00665f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665f80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Singleton_UOffscreenRenderingManager_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00665fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x665fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb34));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00665fe0 */
GEN_FRAME uint F_00665fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x665fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665ff0 */
GEN_FRAME uint GEN_THISCALL F_00665ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: Singleton_VRendererUtility_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00666010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb3c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00666040 */
GEN_FRAME uint F_00666040(unsigned int gen_a0)
{
  GEN_ENTER(0x666040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Singleton_VManager_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00666050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb44));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VShadowManager_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_00666080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb4c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VLightingManager_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006660b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6660b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VRenderTargetManager_Render_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006660e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6660e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00666110 */
GEN_FRAME uint GEN_STDCALL F_00666110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00666130 */
GEN_FRAME uint GEN_THISCALL F_00666130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00666150 */
GEN_FRAME uint F_00666150(unsigned int gen_a0)
{
  GEN_ENTER(0x666150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666170 */
GEN_FRAME unsigned int F_00666170(unsigned int gen_a0)
{
  GEN_ENTER(0x666170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = REFG(int, 0x1487c5c);
  }
  REFG(int, 0x1487c5c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c70) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 8) = iVar1;
  return 0;
}

/* ref: FUN_006661a0 */
GEN_FRAME unsigned int F_006661a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6661a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c74);
  }
  *(int *)&REFG(undefined, 0x1487c74) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c78) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: FUN_006661d0 */
GEN_FRAME unsigned int F_006661d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6661d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x2c) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 0x28) = iVar1;
  return 0;
}

/* ref: FUN_00666200 */
GEN_FRAME unsigned int F_00666200(unsigned int gen_a0)
{
  GEN_ENTER(0x666200u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c84);
  }
  *(int *)&REFG(undefined, 0x1487c84) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c88) = iVar1;
    return 0;
  }
  *(int *)(iVar2 + 8) = iVar1;
  return 0;
}

/* ref: FUN_00666230 */
GEN_FRAME uint GEN_THISCALL F_00666230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x666230u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00666260 */
GEN_FRAME uint F_00666260(unsigned int gen_a0)
{
  GEN_ENTER(0x666260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666270 */
GEN_FRAME uint F_00666270(unsigned int gen_a0)
{
  GEN_ENTER(0x666270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666280 */
GEN_FRAME uint F_00666280(unsigned int gen_a0)
{
  GEN_ENTER(0x666280u, gen_a0, 0u, 0u, 0u);
  gen_v16 * param_1 = (gen_v16 *)(uintptr_t)gen_a0;
  undefined1 in_XMM2 [16] = {0};
  
  ;
  return (uint)param_1;
}

/* ref: FUN_006662b0 */
GEN_FRAME uint F_006662b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006662c0 */
GEN_FRAME uint GEN_THISCALL F_006662c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6662c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006662e0 */
GEN_FRAME uint F_006662e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006662f0 */
GEN_FRAME uint F_006662f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666300 */
GEN_FRAME uint GEN_THISCALL F_00666300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00666320 */
GEN_FRAME uint F_00666320(unsigned int gen_a0)
{
  GEN_ENTER(0x666320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666370 */
GEN_FRAME uint F_00666370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x666370u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while ((param_3 < iVar2 &&
         (iVar3 = (iVar2 - 1) / 2,
         (float10)*(float *)(param_1 + 4 + iVar3 * 8) < ((float10)GEN_TOD(gen_bits2f(param_4[1])))))) {
    *(undefined4 *)(param_1 + iVar2 * 8) = *(undefined4 *)(param_1 + iVar3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = *(undefined4 *)(param_1 + 4 + iVar3 * 8);
    iVar2 = iVar3;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 8) = uVar1;
  *(uint *)(param_1 + 4 + iVar2 * 8) = param_4[1];
  return uVar1;
}

/* ref: FUN_006663e0 */
GEN_FRAME uint F_006663e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6663e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006663f0 */
GEN_FRAME uint F_006663f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6663f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666400 */
GEN_FRAME uint F_00666400(unsigned int gen_a0)
{
  GEN_ENTER(0x666400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666410 */
GEN_FRAME uint F_00666410(unsigned int gen_a0)
{
  GEN_ENTER(0x666410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666450 */
GEN_FRAME uint GEN_STDCALL F_00666450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00666480 */
GEN_FRAME uint GEN_STDCALL F_00666480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_006664c0 */
GEN_FRAME uint GEN_STDCALL F_006664c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6664c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd3);
  return (uint)uVar1;
}

