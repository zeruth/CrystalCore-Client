#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_006ae690 */
GEN_NOFRAME uint GEN_THISCALL F_006ae690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x740) = 0;
  *(undefined4 *)((int)this + 0x744) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b373c));
  *(undefined4 *)((int)this + 0x734) = 0;
  *(undefined2 *)((int)this + 0x738) = 0xffff;
  *(undefined4 *)((int)this + 0x748) = 0;
  return (uint)this;
}

/* ref: FUN_006ae6d0 */
GEN_NOFRAME uint GEN_THISCALL F_006ae6d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006adef0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0x730) = 0;
  *(undefined4 *)((int)this + 0x73c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[91])REFP(0x10b38ac));
  *(undefined2 *)((int)this + 0x734) = 0;
  *(undefined4 *)((int)this + 0x740) = 0xffffffff;
  return (uint)this;
}

/* ref: FUN_006ae710 */
GEN_FRAME uint GEN_THISCALL F_006ae710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *(int *)(in_ecx + 0xb4);
}

/* ref: FUN_006ae730 */
GEN_FRAME uint GEN_THISCALL F_006ae730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae730u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((param_2 * 0x20 + *(int *)(in_ecx + 0xb4))));
}

/* ref: FUN_006ae750 */
GEN_NOFRAME byte GEN_THISCALL F_006ae750(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 2)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae790 */
GEN_NOFRAME byte GEN_THISCALL F_006ae790(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6ae790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 0x1e +
                         *(int *)((int)this + 0xa8))));
  uVar1 = 0;
  if (uVar3 != 0) {
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 0xb8) + 0xe)));
    do {
      if (*psVar2 != 0) {
        return 1;
      }
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 0x1e;
    } while (uVar1 < uVar3);
  }
  return 0;
}

/* ref: FUN_006ae8d0 */
GEN_FRAME byte F_006ae8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6ae8d0u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_006ae920 */
GEN_FRAME uint F_006ae920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6ae920u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 / (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] / (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_006ae940 */
GEN_FRAME uint F_006ae940(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6ae940u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3);
  return (uint)param_1;
}

/* ref: FUN_006aea10 */
GEN_FRAME uint GEN_THISCALL F_006aea10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6aea10u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea30 */
GEN_FRAME uint GEN_THISCALL F_006aea30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6aea30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  uVar1 = param_2[1];
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  in_ecx[1] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_006aea50 */
GEN_FRAME uint F_006aea50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aea50u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_006aea80 */
GEN_FRAME byte GEN_THISCALL F_006aea80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aea80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0x10;
  pbVar3 = param_1;
  do {
    if (*(int *)this != *(int *)pbVar3) {
      iVar2 = (uint)*(byte *)this - (uint)*pbVar3;
      if (((iVar2 == 0) && (iVar2 = (uint)*(byte *)((int)this + 1) - (uint)pbVar3[1], iVar2 == 0))
         && (iVar2 = (uint)*(byte *)((int)this + 2) - (uint)pbVar3[2], iVar2 == 0)) {
        iVar2 = (uint)*(byte *)((int)this + 3) - (uint)pbVar3[3];
      }
      return (iVar2 >> 0x1f | 1U) == 0;
    }
    uVar1 = uVar1 - 4;
    pbVar3 = pbVar3 + 4;
    this = (undefined *)((int)this + 4);
  } while (3 < uVar1);
  return 1;
}

/* ref: FUN_006aeaf0 */
GEN_FRAME float10 GEN_THISCALL F_006aeaf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6aeaf0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)((float)GEN_TOF(((float10)in_ecx[3] * (float10)in_ecx[3] +
                         ((float10)in_ecx[2] * (float10)in_ecx[2] +
                         ((float10)*in_ecx * (float10)*in_ecx +
                         (float10)in_ecx[1] * (float10)in_ecx[1])))));
}

/* ref: FUN_006aeb20 */
GEN_FRAME uint GEN_THISCALL F_006aeb20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x6aeb20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[5] = param_3;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_4;
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_006aeb80 */
GEN_FRAME uint GEN_THISCALL F_006aeb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aeb80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + in_ecx);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_006aebb0 */
GEN_FRAME unsigned int GEN_THISCALL F_006aebb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aebb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  uVar1 = param_2[6];
  in_ecx[7] = 0;
  in_ecx[6] = uVar1;
  in_ecx[8] = param_2[8];
  in_ecx[9] = param_2[9];
  uVar1 = param_2[10];
  in_ecx[0xb] = 0;
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = param_2[0xd];
  uVar1 = param_2[0xe];
  in_ecx[0xf] = uVar2;
  in_ecx[0xe] = uVar1;
  return 0;
}

/* ref: FUN_006aec30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006aec30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aec30u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar4 = (float10)((float)GEN_TOF(((float10)(float)((float10)*in_ecx + (float10)in_ecx[4]) * fVar3)));
  fVar5 = (float10)((float)GEN_TOF(((float10)(float)((float10)in_ecx[5] + (float10)in_ecx[1]) * fVar3)));
  fVar1 = param_2[1];
  fVar3 = (float10)((float)GEN_TOF((fVar3 * (float10)(float)((float10)in_ecx[2] + (float10)in_ecx[6]))));
  fVar2 = param_2[2];
  *in_ecx = (float)(fVar4 - (float10)*param_2);
  in_ecx[1] = (float)(fVar5 - (float10)fVar1);
  in_ecx[2] = (float)(fVar3 - (float10)fVar2);
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  in_ecx[4] = (float)((float10)*param_2 + fVar4);
  in_ecx[5] = (float)(fVar5 + (float10)fVar1);
  in_ecx[6] = (float)(fVar3 + (float10)fVar2);
  return 0;
}

/* ref: FUN_006aecf0 */
GEN_NOFRAME uint GEN_THISCALL F_006aecf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aecf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar4 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)param_1[4] - (float10)*param_1) * fVar4)));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)param_1[5] - (float10)param_1[1]) * fVar4)));
  fVar3 = ((float)GEN_TOF((fVar4 * (float10)(float)((float10)param_1[6] - (float10)param_1[2]))));
  fVar4 = (float10)fVar1;
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar3;
  *(float *)((int)this + 0xc) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar6 * fVar6 + (fVar5 * fVar5 + fVar4 * fVar4)))))));
  *(float *)this = (float)((float10)*param_1 + (float10)fVar1);
  *(float *)((int)this + 4) = (float)((float10)param_1[1] + (float10)fVar2);
  *(float *)((int)this + 8) = (float)((float10)param_1[2] + (float10)fVar3);
  return (uint)this;
}

/* ref: FUN_006aeda0 */
GEN_FRAME byte GEN_THISCALL F_006aeda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aeda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006aea80(this GEN_EDX_FWD,param_1);
  return bVar1 == 0;
}

/* ref: FUN_006aedc0 */
GEN_NOFRAME byte GEN_THISCALL F_006aedc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aedc0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  if ((float10)((float)GEN_TOF(((float10)in_ecx[2] *
                       (float10)((float)GEN_TOF((fVar1 * (float10)(float)((float10)param_2[6] +
                                                                (float10)param_2[2])))) +
                      ((float10)*in_ecx *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] + (float10)*param_2) *
                                       fVar1))) +
                      (float10)in_ecx[1] *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] + (float10)param_2[1]) *
                                      fVar1))))))) - (float10)in_ecx[3] <=
      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(ABS((float10)in_ecx[2]))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[6] - (float10)param_2[2])
                                       * fVar1))) +
                      ((float10)((float)GEN_TOF(ABS((float10)*in_ecx))) *
                       (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) *
                                       fVar1))) +
                      (float10)((float)GEN_TOF(ABS((float10)in_ecx[1]))) *
                      (float10)((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) *
                                      fVar1)))))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef10 */
GEN_FRAME uint GEN_THISCALL F_006aef10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aef10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                      ((float10)*(float *)param_2 * (float10)*in_ecx +
                      (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= (float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef50 */
GEN_FRAME uint GEN_THISCALL F_006aef50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aef50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)in_ecx[2] +
                      ((float10)*(float *)param_2 * (float10)*in_ecx +
                      (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1])))) - (float10)in_ecx[3]
      <= -(float10)*(float *)(param_2 + 0xc)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006aef90 */
GEN_FRAME uint GEN_THISCALL F_006aef90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aef90u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006aefc0 */
GEN_FRAME uint GEN_THISCALL F_006aefc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aefc0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006aeff0 */
GEN_NOFRAME byte GEN_THISCALL F_006aeff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6aeff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar1 = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  fVar3 = *(float *)((int)this + 0x14);
  fVar4 = *(float *)((int)this + 0x18);
  fVar6 = (float10)(float)((float10)*(float *)this - (float10)*param_1);
  fVar7 = (float10)(float)((float10)fVar1 - (float10)param_1[1]);
  fVar8 = (float10)(float)((float10)fVar2 - (float10)param_1[2]);
  fVar5 = ((float)GEN_TOF(((fVar6 * (float10)*(float *)((int)this + 0x10) + fVar7 * (float10)fVar3) +
                 fVar8 * (float10)fVar4)));
  fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar6 * fVar6 + fVar7 * fVar7)))) -
                          (float10)param_1[3] * (float10)param_1[3])));
  if (((float10)0 < fVar6) &&
     ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar5 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return 0;
  }
  fVar7 = (float10)fVar5;
  fVar6 = (float10)(float)(fVar7 * fVar7 - fVar6);
  if (fVar6 < (float10)0) {
    return 0;
  }
  fVar6 = (float10)(float)((float10)((float)GEN_TOF(-fVar7)) - (float10)((float)GEN_TOF(SQRT(fVar6))));
  if (fVar6 < (float10)0) {
    fVar6 = (float10)0.0;
  }
  *param_2 = ((float)GEN_TOF(((float10)*(float *)this +
                    (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) * fVar6))))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)((float10)fVar3 * fVar6))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar6 * (float10)fVar4))));
  return 1;
}

/* ref: FUN_006af160 */
GEN_FRAME byte GEN_THISCALL F_006af160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af160u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  
  fVar1 = ((float)GEN_TOF((((float10)*(float *)(param_2 + 0xc) -
                  (float10)((float)GEN_TOF((((float10)*(float *)param_2 * (float10)*in_ecx +
                                   (float10)*(float *)(param_2 + 4) * (float10)in_ecx[1]) +
                                  (float10)*(float *)(param_2 + 8) * (float10)in_ecx[2])))) /
                 (float10)((float)GEN_TOF((((float10)*(float *)param_2 * (float10)in_ecx[4] +
                                  (float10)in_ecx[5] * (float10)*(float *)(param_2 + 4)) +
                                 (float10)in_ecx[6] * (float10)*(float *)(param_2 + 8)))))));
  *param_3 = fVar1;
  if ((float10)0 <= (float10)fVar1) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af1f0 */
GEN_FRAME uint GEN_THISCALL F_006af1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af1f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_006af220 */
GEN_FRAME uint GEN_THISCALL F_006af220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af220u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_006af260 */
GEN_FRAME uint GEN_STDCALL F_006af260(unsigned int gen_a0)
{
  GEN_ENTER(0x6af260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_0050c620(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_006af280 */
GEN_FRAME uint GEN_STDCALL F_006af280(unsigned int gen_a0)
{
  GEN_ENTER(0x6af280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = F_0050c620(*(int *)(param_1 + 0x34),0,0);
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return uVar1;
}

/* ref: FUN_006af2b0 */
GEN_FRAME uint GEN_THISCALL F_006af2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af2b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  *(float *)this = *param_1 - *param_2;
  *(float *)((int)this + 4) = fVar1 - fVar4;
  *(float *)((int)this + 8) = fVar2 - fVar5;
  *(float *)((int)this + 0xc) = fVar3 - fVar6;
  return (uint)param_1;
}

/* ref: FUN_006af2d0 */
GEN_FRAME float10 GEN_THISCALL F_006af2d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af2d0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)*in_ecx;
}

/* ref: FUN_006af2f0 */
GEN_FRAME uint GEN_THISCALL F_006af2f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af2f0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  return (uint)param_2;
}

/* ref: FUN_006af310 */
GEN_FRAME uint GEN_THISCALL F_006af310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af310u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  F_00d988a0(param_1 GEN_EDX_FWD,param_2,param_3);
  return param_1;
}

/* ref: FUN_006af340 */
GEN_FRAME uint GEN_THISCALL F_006af340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006af360 */
GEN_FRAME uint GEN_THISCALL F_006af360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = uVar1;
  *(undefined4 *)(in_ecx + 0x28) = uVar2;
  *(undefined4 *)(in_ecx + 0x2c) = uVar3;
  return (uint)param_2;
}

/* ref: FUN_006af380 */
GEN_FRAME uint GEN_THISCALL F_006af380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af380u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006af3b0 */
GEN_FRAME uint GEN_THISCALL F_006af3b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af3d0 */
GEN_FRAME uint GEN_THISCALL F_006af3d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af3d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af3e0 */
GEN_FRAME uint GEN_THISCALL F_006af3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return CONCAT22((undefined2)param_1,(undefined2)param_2);
}

/* ref: FUN_006af420 */
GEN_FRAME uint GEN_THISCALL F_006af420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af420u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_006af480 */
GEN_FRAME uint GEN_THISCALL F_006af480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x6af480u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_006af4a0 */
GEN_NOFRAME uint GEN_THISCALL F_006af4a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 4 + *piVar2 * 4;
}

/* ref: FUN_006af4c0 */
GEN_NOFRAME uint GEN_THISCALL F_006af4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6af4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 0x14 + *piVar2 * 4;
}

/* ref: FUN_006af4e0 */
GEN_FRAME uint GEN_THISCALL F_006af4e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6af4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 0x14 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006af5d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006af5d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6af5d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  *(undefined1 *)(in_ecx + 9) = 1;
  return;
}

/* ref: FUN_006af5f0 */
GEN_FRAME byte GEN_THISCALL F_006af5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *(int *)((int)this + 8);
}

/* ref: FUN_006af610 */
GEN_FRAME uint GEN_THISCALL F_006af610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_006af620 */
GEN_FRAME byte GEN_THISCALL F_006af620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x54) != 0) {
    bVar1 = F_009f0920(*(int *)(in_ecx + 0x54) GEN_EDX_FWD,param_2);
    return bVar1;
  }
  return 0;
}

/* ref: FUN_006af640 */
GEN_FRAME unsigned int GEN_THISCALL F_006af640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x54) != (undefined *)0x0) {
    F_009f4320(*(undefined * PTR32 *)((int)this + 0x54) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_006af660 */
GEN_FRAME unsigned int GEN_THISCALL F_006af660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_009f0900(*(int *)(in_ecx + 0x54) GEN_EDX_FWD,param_2);
    return;
  }
  return;
}

/* ref: FUN_006af690 */
GEN_FRAME unsigned int GEN_THISCALL F_006af690(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6af690u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(in_ecx + 0x54) != 0) {
    F_009f13a0(*(int *)(in_ecx + 0x54) GEN_EDX_FWD,param_2);
  }
  return;
}

/* ref: FUN_006af710 */
GEN_FRAME uint GEN_STDCALL F_006af710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af710u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006af770 */
GEN_FRAME uint GEN_THISCALL F_006af770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af770u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af790 */
GEN_FRAME uint GEN_THISCALL F_006af790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af790u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006af7b0 */
GEN_FRAME uint GEN_THISCALL F_006af7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af7b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af7e0 */
GEN_FRAME uint GEN_THISCALL F_006af7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af7e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af830 */
GEN_FRAME uint GEN_THISCALL F_006af830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af880 */
GEN_FRAME uint GEN_THISCALL F_006af880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006af920 */
GEN_FRAME uint GEN_STDCALL F_006af920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6af920u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006af950 */
GEN_FRAME ushort GEN_THISCALL F_006af950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)(byte)param_1 << 0xf | *(ushort *)((int)this + 6) & 0x7fff;
  *(ushort *)((int)this + 6) = uVar1;
  return uVar1;
}

/* ref: FUN_006af990 */
GEN_FRAME ushort GEN_THISCALL F_006af990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6af990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)(byte)param_1 << 0xf | *(ushort *)((int)this + 0xe) & 0x7fff;
  *(ushort *)((int)this + 0xe) = uVar1;
  return uVar1;
}

/* ref: FUN_006afa50 */
GEN_FRAME uint GEN_STDCALL F_006afa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afa80 */
GEN_FRAME uint GEN_THISCALL F_006afa80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afa80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afad0 */
GEN_FRAME uint GEN_STDCALL F_006afad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb40 */
GEN_FRAME uint GEN_STDCALL F_006afb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afb40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_006afb70 */
GEN_FRAME uint GEN_THISCALL F_006afb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afb90 */
GEN_FRAME uint GEN_THISCALL F_006afb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006afbb0 */
GEN_FRAME uint GEN_STDCALL F_006afbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afbb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x48,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_006afbe0 */
GEN_FRAME uint F_006afbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afbe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_006afbf0 */
GEN_FRAME uint F_006afbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afbf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_006afc00 */
GEN_FRAME uint F_006afc00(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006afc10 */
GEN_FRAME uint F_006afc10(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006afc20 */
GEN_FRAME uint F_006afc20(unsigned int gen_a0)
{
  GEN_ENTER(0x6afc20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006afc30 */
GEN_FRAME uint GEN_STDCALL F_006afc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afc30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afc80 */
GEN_FRAME unsigned int GEN_THISCALL F_006afc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6afc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_FWD);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x84);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
  }
  *(int * PTR32 *)((int)this + 0x84) = param_1;
  return;
}

/* ref: FUN_006afce0 */
GEN_FRAME float10 GEN_THISCALL F_006afce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6afce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)(in_ecx + 0x7c))));
  return (float10)(float)((float10)1 - fVar1 * fVar1);
}

/* ref: FUN_006afd20 */
GEN_FRAME uint GEN_THISCALL F_006afd20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6afd20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_006afd30 */
GEN_FRAME uint GEN_THISCALL F_006afd30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6afd30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  if (param_2 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 8))(param_2 GEN_EDX_FWD);
  }
  uVar2 = *(uint *)((int)this + 0x48);
  if (*(int *)(uVar2 + param_1 * 4) != 0) {
    piVar1 = *(int * PTR32 *)(uVar2 + param_1 * 4);
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG);
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x48) + param_1 * 4))) = param_2;
    return uVar2;
  }
  *(int * PTR32 *)(uVar2 + param_1 * 4) = param_2;
  return uVar2;
}

/* ref: FUN_006afd90 */
GEN_FRAME uint GEN_THISCALL F_006afd90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6afd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x70) = param_2;
  return param_2;
}

/* ref: FUN_006afdb0 */
GEN_FRAME uint GEN_THISCALL F_006afdb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6afdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x74) = param_2;
  return param_2;
}

/* ref: FUN_006afde0 */
GEN_FRAME uint GEN_THISCALL F_006afde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6afde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  return (int)this + (uint)(ushort)param_1 * 0x18 + 0x24;
}

/* ref: FUN_006afe20 */
GEN_FRAME uint GEN_STDCALL F_006afe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afe20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd4);
  return uVar1;
}

/* ref: FUN_006afe60 */
GEN_FRAME uint GEN_STDCALL F_006afe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afe60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afea0 */
GEN_FRAME uint GEN_STDCALL F_006afea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006afee0 */
GEN_FRAME uint GEN_STDCALL F_006afee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6afee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006aff20 */
GEN_FRAME byte GEN_THISCALL F_006aff20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006aff40 */
GEN_FRAME byte GEN_THISCALL F_006aff40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006aff90 */
GEN_FRAME uint GEN_THISCALL F_006aff90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6aff90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x15))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006afff0 */
GEN_FRAME uint F_006afff0(unsigned int gen_a0)
{
  GEN_ENTER(0x6afff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b0000 */
GEN_FRAME uint F_006b0000(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006b0020 */
GEN_FRAME uint F_006b0020(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0020u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006b0080 */
GEN_FRAME uint GEN_THISCALL F_006b0080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b00a0 */
GEN_FRAME uint GEN_THISCALL F_006b00a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b00a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1f0) = param_2;
  return param_2;
}

/* ref: FUN_006b00b0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b00b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b00b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 500) = (float)((float10)param_2 * (float10)param_2);
  return;
}

/* ref: FUN_006b00d0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b00d0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b00d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1f8) = param_2;
  return;
}

/* ref: FUN_006b00f0 */
GEN_FRAME byte GEN_THISCALL F_006b00f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b00f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 0x3a6e + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b0110 */
GEN_FRAME ushort GEN_THISCALL F_006b0110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0110u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0120 */
GEN_FRAME ushort GEN_THISCALL F_006b0120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 10) = (ushort)param_1;
  *(undefined2 *)((int)this + 0xc) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_006b0150 */
GEN_FRAME uint GEN_THISCALL F_006b0150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0160 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b0160(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b0160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b01b0 */
GEN_FRAME ushort GEN_THISCALL F_006b01b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b01b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 8) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b0220 */
GEN_FRAME uint GEN_THISCALL F_006b0220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x78 + param_2 * 4);
}

/* ref: FUN_006b0230 */
GEN_FRAME uint F_006b0230(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0230u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0250 */
GEN_FRAME uint F_006b0250(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0260 */
GEN_FRAME uint F_006b0260(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0270 */
GEN_FRAME uint F_006b0270(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0280 */
GEN_FRAME uint F_006b0280(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0290 */
GEN_FRAME uint F_006b0290(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b02a0 */
GEN_FRAME uint F_006b02a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b02a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b02d0 */
GEN_FRAME uint F_006b02d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b02d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0310 */
GEN_FRAME uint GEN_STDCALL F_006b0310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_006b0330 */
GEN_FRAME uint GEN_STDCALL F_006b0330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_006b0350 */
GEN_FRAME uint GEN_STDCALL F_006b0350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: Apricot::IInstanceListenner::vf1 */
GEN_NOFRAME byte GEN_THISCALL F_006b0380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b0380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  return 0;
}

/* ref: std::allocator<std::_Container_proxy>::construct_006b0390 */
GEN_FRAME unsigned int GEN_STDCALL F_006b0390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf2 */
GEN_FRAME byte GEN_THISCALL F_006b03b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b03b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf3 */
GEN_NOFRAME uint F_006b03d0(void)
{
  GEN_ENTER(0x6b03d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf4 */
GEN_NOFRAME uint GEN_THISCALL F_006b03e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b03e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf5 */
GEN_NOFRAME byte GEN_THISCALL F_006b03f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b03f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf6 */
GEN_FRAME byte GEN_THISCALL F_006b0400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1087f04));
  return 1;
}

/* ref: Apricot::IInstanceListenner::vf7 */
GEN_NOFRAME byte GEN_THISCALL F_006b0420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b0420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  return 0;
}

/* ref: Apricot::IInstanceListenner::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b0430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Apricot::IInstanceListenner::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b0440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Apricot::IInstanceListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b0450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b0490 */
GEN_FRAME uint F_006b0490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b0490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b04b0 */
GEN_FRAME uint F_006b04b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b04b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04d0 */
GEN_FRAME uint F_006b04d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b04d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_006b04f0 */
GEN_FRAME uint GEN_THISCALL F_006b04f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b04f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b0540 */
GEN_FRAME byte GEN_THISCALL F_006b0540(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0540u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0x10;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return 1;
}

/* ref: FUN_006b0570 */
GEN_FRAME unsigned int F_006b0570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0570u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != param_2) {
    piVar1 = param_1;
    do {
      if (*piVar1 == *param_3) {
        return 0;
      }
      piVar1 = piVar1 + 1;
    } while (piVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_006b0590 */
GEN_FRAME byte F_006b0590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0590u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  for (piVar1 = param_1; piVar1 != param_2; piVar1 = piVar1 + 1) {
    if (*piVar1 != 0) {
      F_0050c620(*piVar1,0,0);
    }
  }
  return (byte)param_3;
}

/* ref: FUN_006b05d0 */
GEN_FRAME uint F_006b05d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b05e0 */
GEN_FRAME uint F_006b05e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b05f0 */
GEN_FRAME uint F_006b05f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b05f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0600 */
GEN_FRAME uint F_006b0600(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0610 */
GEN_FRAME uint F_006b0610(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0620 */
GEN_FRAME uint F_006b0620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0620u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0650 */
GEN_FRAME uint F_006b0650(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0660 */
GEN_FRAME uint F_006b0660(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0670 */
GEN_FRAME uint F_006b0670(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0680 */
GEN_FRAME byte F_006b0680(void)
{
  GEN_ENTER(0x6b0680u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006b0690 */
GEN_FRAME uint F_006b0690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0690u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b06c0 */
GEN_FRAME uint F_006b06c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b06c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b0710 */
GEN_FRAME byte F_006b0710(void)
{
  GEN_ENTER(0x6b0710u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_006b0720 */
GEN_FRAME uint F_006b0720(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0730 */
GEN_FRAME uint F_006b0730(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0750 */
GEN_FRAME uint F_006b0750(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf1 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b0790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf2 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b07a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Vfx::VfxResourceInstanceListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b07b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b07b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b2ad0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b0800 */
GEN_FRAME uint GEN_THISCALL F_006b0800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0800u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b0830 */
GEN_FRAME uint F_006b0830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b0830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_006b0850 */
GEN_FRAME byte GEN_THISCALL F_006b0850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b0880 */
GEN_FRAME uint F_006b0880(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0880u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU >> 5;
}

/* ref: FUN_006b0890 */
GEN_FRAME uint GEN_THISCALL F_006b0890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0890u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b08a0 */
GEN_FRAME uint GEN_THISCALL F_006b08a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b08a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(*in_ecx + param_2 * 4);
}

/* ref: FUN_006b08b0 */
GEN_FRAME uint GEN_THISCALL F_006b08b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b08b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0x1f);
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return uVar2;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return ~uVar2;
}

/* ref: FUN_006b08f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b08f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b08f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  int iVar2;
  int iVar3;
  code * pcVar4;
  int iVar5;
  uint uVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  iVar2 = *(int *)((int)this + 0x24);
  iVar3 = *(int *)((int)this + 0x18);
  pcVar4 = *(gen_code32 *)((int)this + 0x20);
  iVar5 = *(int *)((int)this + 0x68);
  puVar1 = (uint *)((int)this + 0x6c);
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  while (uVar8 < iVar5 - 1U) {
    piVar7 = ((int *)GEN_TOP(((uVar8 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28))))));
    iVar9 = *piVar7;
    if (iVar9 != 0) {
      piVar7 = piVar7 + 4;
      do {
        (*pcVar4)(iVar2 + iVar3,piVar7);
        piVar7 = piVar7 + 1;
        iVar9 = iVar9 - 1;
      } while (iVar9 != 0);
    }
    puVar1 = (uint *)((int)this + 0x6c);
    uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  }
  uVar8 = *(int *)((int)this + 0x68) - 1;
  iVar5 = *((int *)GEN_TOP(((int)this + (uVar8 >> 5) * 4 + 0x28)));
  iVar9 = (uVar8 & 0x1f) * 0x50;
  uVar6 = *(uint *)(iVar5 + iVar9);
  puVar1 = (uint *)((int)this + 0x70);
  uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
  if (uVar8 < uVar6) {
    do {
      (*pcVar4)(iVar2 + iVar3,iVar5 + iVar9 + 0x10 + uVar8 * 4);
      puVar1 = (uint *)((int)this + 0x70);
      uVar8 = _InterlockedExchangeAdd((volatile long *)(puVar1), (long)(1));
    } while (uVar8 < uVar6);
  }
  return 0;
}

/* ref: FUN_006b09d0 */
GEN_FRAME uint GEN_THISCALL F_006b09d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b09d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  
  for (uVar5 = param_2 - 1U >> 5; param_1 >> 5 < uVar5; uVar5 = uVar5 - 1) {
    iVar2 = *(int *)this;
    *(uint *)(iVar2 + uVar5 * 4) =
         *(uint *)(iVar2 - 4 + uVar5 * 4) >> 0x1f | *(int *)(iVar2 + uVar5 * 4) * 2;
  }
  bVar6 = (byte)param_1 & 0x1f;
  uVar5 = -1 << bVar6;
  if ((char)param_3 == '\0') {
    uVar7 = 0;
  }
  else {
    uVar7 = 1 << bVar6;
  }
  puVar1 = ((uint *)GEN_TOP((*(int *)this + (param_1 >> 5) * 4)));
  uVar3 = *puVar1;
  uVar4 = (uVar3 & uVar5) * 2;
  *puVar1 = ~uVar5 & uVar3 | uVar4 | uVar7;
  return uVar4;
}

/* ref: FUN_006b0a50 */
GEN_FRAME unsigned int GEN_THISCALL F_006b0a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  uVar3 = param_1 >> 5;
  puVar1 = (uint *)(*(int *)this + uVar3 * 4);
  uVar2 = *puVar1;
  *puVar1 = ~uVar4 & uVar2 | uVar2 >> 1 & uVar4;
  while (uVar3 = uVar3 + 1, uVar3 <= param_2 - 1U >> 5) {
    puVar1 = (uint *)(*(int *)this + uVar3 * 4 - 4);
    *puVar1 = *puVar1 | *(int *)(*(int *)this + uVar3 * 4) << 0x1f;
    puVar1 = (uint *)(*(int *)this + uVar3 * 4);
    *puVar1 = *puVar1 >> 1;
  }
  return 0;
}

/* ref: FUN_006b0ae0 */
GEN_FRAME uint F_006b0ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0af0 */
GEN_FRAME uint GEN_THISCALL F_006b0af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0b50 */
GEN_FRAME unsigned int GEN_THISCALL F_006b0b50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b0b50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4d0) = param_2;
  return;
}

/* ref: FUN_006b0b70 */
GEN_FRAME uint F_006b0b70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0b70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0b90 */
GEN_FRAME uint F_006b0b90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0ba0 */
GEN_FRAME uint GEN_THISCALL F_006b0ba0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b0bc0 */
GEN_FRAME uint F_006b0bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0bd0 */
GEN_FRAME uint F_006b0bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0bd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b0c20 */
GEN_FRAME uint F_006b0c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b0c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 - 1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
    uVar3 = (*param_5)(puVar1,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar2 * 8) = *puVar1;
    *(undefined4 *)(param_1 + 4 + iVar2 * 8) = puVar1[1];
    iVar2 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar2 * 8) = *param_4;
  uVar3 = param_4[1];
  *(uint *)(param_1 + 4 + iVar2 * 8) = uVar3;
  return uVar3;
}

/* ref: FUN_006b0c90 */
GEN_FRAME uint F_006b0c90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b0ca0 */
GEN_FRAME uint F_006b0ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b0ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Client::Graphics::Scene::Object::vf3 */
GEN_NOFRAME byte F_006b0cc0(void)
{
  GEN_ENTER(0x6b0cc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_006b0ce0 */
GEN_FRAME uint GEN_THISCALL F_006b0ce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24) & 3 | param_2;
  *(uint *)(in_ecx + 0x24) = uVar1;
  return uVar1;
}

/* ref: FUN_006b0d10 */
GEN_FRAME uint GEN_THISCALL F_006b0d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x28) = param_2;
  return param_2;
}

/* ref: FUN_006b0d80 */
GEN_FRAME byte GEN_THISCALL F_006b0d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x65) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b0de0 */
GEN_FRAME uint GEN_THISCALL F_006b0de0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b0de0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xa4) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e20 */
GEN_FRAME uint GEN_THISCALL F_006b0e20(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b0e20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xac) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e50 */
GEN_FRAME uint GEN_THISCALL F_006b0e50(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b0e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xb0) = param_2;
  return uVar1;
}

/* ref: FUN_006b0e70 */
GEN_FRAME uint GEN_THISCALL F_006b0e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ea0 */
GEN_FRAME uint GEN_THISCALL F_006b0ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_006b0ed0 */
GEN_FRAME uint GEN_THISCALL F_006b0ed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b0ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(undefined1 *)(uVar1 + 0xb8) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_006b0ef0 */
GEN_FRAME uint GEN_THISCALL F_006b0ef0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b0ef0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc0);
  *(float *)(uVar1 + 0xb4) = param_2;
  return uVar1;
}

/* ref: FUN_006b0f20 */
GEN_FRAME uint GEN_THISCALL F_006b0f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_006b0f40 */
GEN_FRAME uint GEN_THISCALL F_006b0f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_1 * 0x40 + 0x10 + *(int *)((int)this + 0x4c))));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return (uint)puVar1;
}

/* ref: FUN_006b0fd0 */
GEN_FRAME ushort GEN_THISCALL F_006b0fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b0fd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  ushort uVar1;
  uint uVar2;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  uVar1 = *((ushort *)GEN_TOP((uVar2 + 6 + (param_1 / *(ushort *)(uVar2 + 2)) * 2)));
  if (uVar1 == 0xffff) {
    return 0;
  }
  return *((ushort *)GEN_TOP(((uVar2 - 6) +
          ((uint)*(ushort *)(uVar2 + 4) +
          ((uint)uVar1 + param_1 % (uint)*(ushort *)(uVar2 + 2)) * (uint)*(byte *)(uVar2 + 1) +
          param_2 + (param_2 / 100 + (param_2 / 10) * -2) * 5) * 2)));
}

/* ref: FUN_006b1070 */
GEN_FRAME uint GEN_THISCALL F_006b1070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b1070u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  return uVar1 + (param_2 - 2 + (param_3 + param_1 * 2) * 2) * 0x1400;
}

/* ref: FUN_006b10a0 */
GEN_FRAME uint GEN_THISCALL F_006b10a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b10a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  return uVar1 + 0x1b5d0 + param_1 * 0x230;
}

/* ref: FUN_006b10c0 */
GEN_FRAME byte GEN_THISCALL F_006b10c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b10c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 4) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: FUN_006b1150 */
GEN_FRAME uint GEN_THISCALL F_006b1150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1150u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  switch((unsigned int)(uintptr_t)(param_2)) {
  case 1: ;
    return *(uint *)(in_ecx + 0x68);
  case 2: ;
    return *(uint *)(in_ecx + 0x70);
  case 3: ;
    return *(uint *)(in_ecx + 0x6c);
  case 4: ;
    return *(uint *)(in_ecx + 0x74);
  default: ;
    return 0;
  }
}

/* ref: FUN_006b11b0 */
GEN_NOFRAME uint GEN_THISCALL F_006b11b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b11b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  uVar1 = (*(ushort *)(uVar1 + 2) >> 1 & 0x55555555) + (*(ushort *)(uVar1 + 2) & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return (uVar1 >> 8) + (uVar1 & 0xff00ff);
}

/* ref: FUN_006b1210 */
GEN_FRAME uint GEN_THISCALL F_006b1210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  uVar1 = (uint)*(ushort *)(uVar1 + 2) & (1 << ((char)param_1 + 1U & 0x1f)) - 1U;
  uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  return ((uVar1 >> 8) + (uVar1 & 0xff00ff)) - 1;
}

/* ref: FUN_006b12f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b12f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b12f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x290) = param_2;
  return;
}

/* ref: FUN_006b1340 */
GEN_FRAME ushort GEN_THISCALL F_006b1340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x72) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1350 */
GEN_FRAME unsigned int GEN_THISCALL F_006b1350(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b1350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x294) = param_2;
  return;
}

/* ref: FUN_006b1390 */
GEN_FRAME uint GEN_THISCALL F_006b1390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x7c) + param_2 * 4)));
}

/* ref: FUN_006b13d0 */
GEN_FRAME uint GEN_THISCALL F_006b13d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b13d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xdc) + 0x10 + param_1 * 0x40)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[4] = param_2[4];
  puVar1[5] = param_2[5];
  puVar1[6] = param_2[6];
  puVar1[7] = param_2[7];
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  return (uint)puVar1;
}

/* ref: FUN_006b1440 */
GEN_FRAME float10 GEN_THISCALL F_006b1440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float10 fVar1;
  
  if (*(int *)(in_ecx + 0x160) != 0) {
    fVar1 = (float10)((float)GEN_TOF(((float10)1 - (float10)*((float *)GEN_TOP((*(int *)(in_ecx + 0x160) + 0x7c))))));
    return (float10)(float)((float10)1 - fVar1 * fVar1);
  }
  return (float10)REFG(float, 0x1087f04);
}

/* ref: FUN_006b14a0 */
GEN_FRAME uint GEN_THISCALL F_006b14a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b14a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xe0);
  if (piVar1 == (int *)0x0) {
    *(uint *)((int)this + 0xe0) = param_1;
    return in_EAX;
  }
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_FWD);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0xe0);
  if (puVar2 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar2)(puVar2 GEN_EDX_ARG,1);
    *(undefined4 *)((int)this + 0xe0) = 0;
    *(uint *)((int)this + 0xe0) = param_1;
    return param_1;
  }
  *(uint *)((int)this + 0xe0) = param_1;
  return uVar3;
}

/* ref: FUN_006b1500 */
GEN_NOFRAME uint GEN_THISCALL F_006b1500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    iVar1 = *(int *)((int)this + uVar3 * 4);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = F_0050c620(iVar1,0,0);
      *(undefined4 *)((int)this + uVar3 * 4) = 0;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  return uVar2;
}

/* ref: FUN_006b1530 */
GEN_FRAME uint GEN_THISCALL F_006b1530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + param_2 * 4);
}

/* ref: FUN_006b1540 */
GEN_FRAME uint F_006b1540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1540u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_006b1550 */
GEN_FRAME uint F_006b1550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_006b15b0 */
GEN_FRAME uint GEN_THISCALL F_006b15b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_006b15c0 */
GEN_FRAME uint GEN_THISCALL F_006b15c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_006b15d0 */
GEN_FRAME uint GEN_THISCALL F_006b15d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b15d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)((int)this + 8);
  *param_1 = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(param_1 + 1) = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b1600 */
GEN_FRAME ushort GEN_THISCALL F_006b1600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1620 */
GEN_FRAME byte GEN_THISCALL F_006b1620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xa0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1700 */
GEN_FRAME ushort GEN_THISCALL F_006b1700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x82) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1720 */
GEN_FRAME ushort GEN_THISCALL F_006b1720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x84) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b1740 */
GEN_FRAME byte GEN_THISCALL F_006b1740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1760 */
GEN_FRAME ushort GEN_THISCALL F_006b1760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x86) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006b17a0 */
GEN_FRAME byte GEN_THISCALL F_006b17a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b17a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006b1800 */
GEN_FRAME unsigned int GEN_THISCALL F_006b1800(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b1800u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x88) = param_2;
  return;
}

/* ref: FUN_006b1830 */
GEN_FRAME byte GEN_THISCALL F_006b1830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x94) = (byte)param_2;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return (byte)param_2;
}

/* ref: FUN_006b1850 */
GEN_FRAME byte GEN_THISCALL F_006b1850(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x95) = (byte)param_2;
  *(undefined1 *)(in_ecx + 0x96) = 1;
  return (byte)param_2;
}

/* ref: FUN_006b18d0 */
GEN_FRAME uint GEN_THISCALL F_006b18d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x6b18d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  param_1[2] = (undefined4)gen_fl2bits(param_4);
  param_1[3] = (undefined4)gen_fl2bits(param_5);
  *param_1 = param_2;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[1] = param_3;
  param_1[5] = (undefined4)gen_fl2bits(param_7);
  param_1[6] = param_8;
  return (uint)param_1;
}

/* ref: FUN_006b1930 */
GEN_FRAME uint GEN_THISCALL F_006b1930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xf0) + param_2 * 4)));
}

/* ref: FUN_006b1960 */
GEN_FRAME uint GEN_THISCALL F_006b1960(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1960u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + 0xb0 + in_ecx;
}

/* ref: FUN_006b19b0 */
GEN_FRAME uint GEN_THISCALL F_006b19b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b19b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0a4) = param_2;
  return param_2;
}

/* ref: FUN_006b19d0 */
GEN_FRAME uint GEN_THISCALL F_006b19d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b19d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x4c) = *param_1;
  *(undefined4 *)((int)this + 0x50) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x54) = uVar1;
  return uVar1;
}

/* ref: FUN_006b19f0 */
GEN_FRAME unsigned int GEN_THISCALL F_006b19f0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b19f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x58) = param_2;
  return;
}

/* ref: FUN_006b1a20 */
GEN_FRAME uint GEN_THISCALL F_006b1a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x5c) = *param_1;
  *(undefined4 *)((int)this + 0x60) = param_1[1];
  uVar1 = param_1[2];
  *(uint *)((int)this + 100) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Scene::ResidentResourceManager::ResourceList::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10b2afc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VWorld_Scene_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1af0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VCameraManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1b20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VCharacterUtility_Scene_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VGrassManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a84))
  ;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Singleton_VResidentResourceManager_Scene_Graphics_Client_Graphics::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b1bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b1c00 */
GEN_FRAME uint GEN_STDCALL F_006b1c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x48,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_006b1c30 */
GEN_FRAME byte GEN_THISCALL F_006b1c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b1c50 */
GEN_FRAME byte GEN_THISCALL F_006b1c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b1c70 */
GEN_FRAME uint F_006b1c70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x44;
}

/* ref: FUN_006b1c80 */
GEN_FRAME uint F_006b1c80(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x45;
}

/* ref: FUN_006b1c90 */
GEN_FRAME uint F_006b1c90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b1ca0 */
GEN_FRAME uint F_006b1ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1ca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006b1cb0 */
GEN_FRAME uint F_006b1cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006b1cc0 */
GEN_FRAME uint F_006b1cc0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b1cd0 */
GEN_FRAME uint F_006b1cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x45)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x45);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006b1cf0 */
GEN_FRAME uint F_006b1cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1cf0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x45);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x45);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006b1d20 */
GEN_FRAME uint GEN_THISCALL F_006b1d20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b1d30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b1d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b1d30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x45) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x45) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x45);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x45);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x45);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006b1d80 */
GEN_FRAME uint GEN_THISCALL F_006b1d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1d80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006b1da0 */
GEN_FRAME uint GEN_THISCALL F_006b1da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 4);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1dc0 */
GEN_FRAME uint GEN_THISCALL F_006b1dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 8);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006b1de0 */
GEN_FRAME uint GEN_THISCALL F_006b1de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = 0xffff;
  if (param_2 < 0x10) {
    uVar1 = (uint)(ushort)((1 << ((byte)param_2 & 0x1f)) - 1);
  }
  return *(ushort *)((int)(uintptr_t)this) >> ((byte)param_1 & 0x1f) & uVar1;
}

/* ref: FUN_006b1e10 */
GEN_FRAME uint GEN_THISCALL F_006b1e10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e10u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b1e30 */
GEN_FRAME uint GEN_THISCALL F_006b1e30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(ushort * PTR32 *)this =
       ~(1 << (bVar1 & 0x1f)) & **(ushort * PTR32 *)this |
       (ushort)((char)param_1 != '\0') << (bVar1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_006b1e70 */
GEN_FRAME uint F_006b1e70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b1e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b1e80 */
GEN_FRAME uint F_006b1e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1e80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)&gen_args[0]) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_006b1e90 */
GEN_FRAME uint GEN_THISCALL F_006b1e90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b1e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_006b1eb0 */
GEN_NOFRAME uint GEN_THISCALL F_006b1eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b2f30((undefined *)((int)this - 4) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_006b1ef0 */
GEN_FRAME uint GEN_THISCALL F_006b1ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  param_1[3] = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xa8) + 4))) + 8 + *(int *)((int)this + 0xa8))));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_006b1f20 */
GEN_FRAME uint GEN_THISCALL F_006b1f20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1f20u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = *(float *)param_2;
  fVar3 = (float10)REFG(double, 0x1088108);
  fVar2 = ((float10)GEN_TOD(fsin((float10)(float)((float10)fVar1 * fVar3))));
  *param_1 = (float)fVar2;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar3 = ((float10)GEN_TOD(fcos((float10)(float)((float10)fVar1 * fVar3))));
  param_1[3] = (float)fVar3;
  F_0054d030(param_1 GEN_EDX_FWD,*(float *)(param_2 + 4));
  F_0054d0f0(param_1 GEN_EDX_ARG,*(float *)(param_2 + 8));
  return (uint)param_1;
}

/* ref: FUN_006b1f90 */
GEN_NOFRAME uint GEN_THISCALL F_006b1f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b1f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f5e90(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_1);
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 - (float10)param_1[2]);
  fVar2 = (float10)(float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(float)(fVar4 - (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)fVar1 <= (float10)param_1[3] * (float10)param_1[3]) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006b2020 */
GEN_FRAME uint F_006b2020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2020u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar4 = *(*(uint * PTR32 *)&gen_args[1]);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1088100);
  (*(uint * PTR32 *)&gen_args[1]) = (uint *)(uVar4 >> 0x18);
  fVar1 = ((float)GEN_TOF(((float10)(uVar4 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(uVar4 >> 8 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(uVar4 >> 0x10 & 0xff) / fVar6)));
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  fVar7 = (float10)fVar1;
  (*(float *)(gen_frame + 0xc)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar7 * fVar7);
  fVar7 = (float10)fVar3;
  (*(float *)(gen_frame + 0x14)) = (float)(fVar7 * fVar7);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)(int)(*(uint * PTR32 *)&gen_args[1]) / fVar6)));
  puVar5 = (undefined4 *)F_00413ab0(&(*(uint * PTR32 *)&gen_args[1]) GEN_EDX_ARG,&(*(float *)(gen_frame + 0xc)));
  *(*(undefined4 * PTR32 *)&gen_args[0]) = *puVar5;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_006b2100 */
GEN_FRAME uint GEN_THISCALL F_006b2100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
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
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *(undefined4 *)((int)this + 0x24) = uVar1;
  *(undefined4 *)((int)this + 0x28) = uVar2;
  *(undefined4 *)((int)this + 0x2c) = uVar3;
  return (uint)this;
}

/* ref: FUN_006b2130 */
GEN_FRAME uint GEN_THISCALL F_006b2130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)this = CONCAT22((undefined2)param_1,(undefined2)param_2);
  return (uint)this;
}

/* ref: FUN_006b2160 */
GEN_FRAME uint F_006b2160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_006b2190 */
GEN_FRAME uint GEN_THISCALL F_006b2190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * this_00;
  
  if ((param_1 & 2) != 0) {
    piVar1 = (int *)((int)this - 4);
    iVar2 = *piVar1;
    this_00 = (undefined *)((int)this + iVar2 * 0xc);
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this_00 = (undefined *)((int)this_00 - 0xc);
      F_0068b9a0(this_00 GEN_EDX_FWD);
    }
    if ((param_1 & 1) != 0) {
      F_00406b30(piVar1);
    }
    return (uint)piVar1;
  }
  F_0068b9a0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b21f0 */
GEN_FRAME byte GEN_THISCALL F_006b21f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b21f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return (byte)(*((uint *)GEN_TOP((uVar1 + 4 + ((param_1 >> 5) + *piVar2) * 4))) >> ((byte)param_1 & 0x1f)) & 1
  ;
}

/* ref: FUN_006b2230 */
GEN_FRAME uint GEN_THISCALL F_006b2230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  iVar1 = *piVar3;
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  return uVar4 + *((int *)GEN_TOP((uVar2 + 0x14 + (iVar1 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b2270 */
GEN_FRAME float GEN_THISCALL F_006b2270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return *((float *)GEN_TOP((uVar1 + 0x18 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4)));
}

/* ref: FUN_006b22b0 */
GEN_FRAME uint GEN_THISCALL F_006b22b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 0x1c + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: FUN_006b22f0 */
GEN_FRAME uint GEN_THISCALL F_006b22f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b22f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 0x28 + (*piVar2 + (param_2 + param_1 * 4) * 8) * 4;
}

/* ref: Client::Graphics::Scene::AttachUtility::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b2340(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b2b58));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b23a0 */
GEN_FRAME uint GEN_THISCALL F_006b23a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b23a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  char * pcVar2;
  undefined * pvVar3;
  char * pcVar4;
  
  uVar1 = *(uint *)((int)this + 0x10);
  if (param_3 == 0) {
    if (param_2 < uVar1) {
      return param_2;
    }
  }
  else {
    if (param_3 <= uVar1) {
      uVar1 = uVar1 - param_3;
      if (param_2 < uVar1) {
        uVar1 = param_2;
      }
      pvVar3 = this;
      if (0xf < *(uint *)((int)this + 0x14)) {
        pvVar3 = *(undefined * PTR32 *)this;
      }
      pcVar4 = (char *)((int)pvVar3 + uVar1);
      while( true ) {
        if ((*pcVar4 == *param_1) && (uVar1 = F_0040d320(pcVar4,param_1,param_3), uVar1 == 0)) {
          if (0xf < *(uint *)((int)this + 0x14)) {
            this = *(undefined * PTR32 *)this;
          }
          return (int)pcVar4 - (int)this;
        }
        pcVar2 = (char *)F_004e18e0(this GEN_EDX_ARG);
        if (pcVar4 == pcVar2) break;
        pcVar4 = pcVar4 - 1;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_006b2430 */
GEN_FRAME uint GEN_STDCALL F_006b2430(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2440 */
GEN_FRAME uint F_006b2440(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006b2450 */
GEN_FRAME uint GEN_THISCALL F_006b2450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2480 */
GEN_FRAME uint GEN_THISCALL F_006b2480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2490 */
GEN_FRAME byte GEN_THISCALL F_006b2490(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b24f0 */
GEN_FRAME uint GEN_THISCALL F_006b24f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b24f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2500 */
GEN_FRAME byte GEN_THISCALL F_006b2500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2520 */
GEN_FRAME uint GEN_THISCALL F_006b2520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2530 */
GEN_FRAME byte GEN_THISCALL F_006b2530(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006b2560 */
GEN_FRAME uint GEN_STDCALL F_006b2560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2580 */
GEN_FRAME uint GEN_THISCALL F_006b2580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_006b25c0 */
GEN_FRAME uint GEN_THISCALL F_006b25c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b25c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_006b2600 */
GEN_FRAME uint GEN_THISCALL F_006b2600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_006b2640 */
GEN_FRAME uint GEN_THISCALL F_006b2640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 3;
  if (-(uVar1 >> 1) - 1 < uVar1) {
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 + (uVar1 >> 1);
  }
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}

/* ref: FUN_006b2680 */
GEN_FRAME uint GEN_STDCALL F_006b2680(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2680u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b26b0 */
GEN_FRAME uint F_006b26b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26d0 */
GEN_FRAME uint F_006b26d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b26d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b26f0 */
GEN_FRAME uint GEN_THISCALL F_006b26f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b26f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x15) == '\0') {
    *(int *)(*piVar2 + 4) = param_1;
  }
  piVar2[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar1) {
    *piVar1 = (int)piVar2;
    *piVar2 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar2;
    return (uint)piVar2;
  }
  piVar1[2] = (int)piVar2;
  *piVar2 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_006b2760 */
GEN_FRAME uint GEN_THISCALL F_006b2760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2770 */
GEN_NOFRAME uint GEN_THISCALL F_006b2770(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b0160(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b2780 */
GEN_FRAME uint GEN_THISCALL F_006b2780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b0490));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27a0 */
GEN_FRAME uint GEN_THISCALL F_006b27a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04b0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27c0 */
GEN_FRAME uint GEN_THISCALL F_006b27c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x6b04d0));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_006b27e0 */
GEN_FRAME uint F_006b27e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b27e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b2810 */
GEN_FRAME uint F_006b2810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2830 */
GEN_FRAME uint F_006b2830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2830u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b2850 */
GEN_FRAME uint F_006b2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2870 */
GEN_FRAME uint F_006b2870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2890 */
GEN_FRAME uint F_006b2890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28b0 */
GEN_FRAME uint F_006b28b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28d0 */
GEN_FRAME uint F_006b28d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b28f0 */
GEN_FRAME uint F_006b28f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b28f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2910 */
GEN_FRAME uint F_006b2910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2930 */
GEN_FRAME uint F_006b2930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2930u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006b2960 */
GEN_FRAME unsigned int F_006b2960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006b2980 */
GEN_FRAME uint F_006b2980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006b29e0 */
GEN_FRAME uint GEN_THISCALL F_006b29e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b29e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(uint * PTR32 *)this =
       (*(uint *)*param_1 >> ((byte)param_1[1] & 0x1f) & 1) << (bVar1 & 0x1f) |
       ~(1 << (bVar1 & 0x1f)) & **(uint * PTR32 *)this;
  return (uint)this;
}

/* ref: FUN_006b2a30 */
GEN_FRAME uint GEN_THISCALL F_006b2a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2a30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 3;
}

/* ref: FUN_006b2a50 */
GEN_FRAME uint F_006b2a50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2a70 */
GEN_FRAME uint F_006b2a70(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2a90 */
GEN_FRAME uint F_006b2a90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2a90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ab0 */
GEN_FRAME uint F_006b2ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b2ae0 */
GEN_FRAME uint GEN_THISCALL F_006b2ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2b00 */
GEN_NOFRAME uint GEN_THISCALL F_006b2b00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x45) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x45) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x45) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x45) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x45);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x45);
    }
    if (*(char *)(*(int *)this + 0x45) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_006b2b60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b2b60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_006b08f0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_006b2b70 */
GEN_FRAME uint GEN_THISCALL F_006b2b70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x6b0830));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_006b2b90 */
GEN_FRAME uint F_006b2b90(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2ba0 */
GEN_FRAME uint F_006b2ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_006b2bb0 */
GEN_FRAME uint F_006b2bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006b2bc0 */
GEN_FRAME uint GEN_THISCALL F_006b2bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2c10 */
GEN_FRAME byte GEN_THISCALL F_006b2c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006b2c30 */
GEN_NOFRAME uint GEN_THISCALL F_006b2c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b2c50 */
GEN_FRAME uint F_006b2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x1fU >> 3 & 0x1ffffffc;
}

/* ref: FUN_006b2c70 */
GEN_FRAME uint GEN_THISCALL F_006b2c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(*(undefined * PTR32 *)this,0,param_1 + 0x1fU >> 3 & 0x1ffffffc);
  return (uint)pvVar1;
}

/* ref: FUN_006b2ca0 */
GEN_FRAME uint GEN_THISCALL F_006b2ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b2cd0 */
GEN_FRAME uint GEN_THISCALL F_006b2cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006b2cf0 */
GEN_FRAME uint F_006b2cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_006b2d20 */
GEN_FRAME uint F_006b2d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b2d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 - 8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 - 8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 - 4 + param_3 * 8);
    iVar1 = param_3 - 1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 - 1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return (uint)param_4;
}

/* ref: FUN_006b2e00 */
GEN_FRAME uint F_006b2e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006b2e30 */
GEN_FRAME unsigned int F_006b2e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b2e30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *(undefined4 *)(iVar2 - 8);
    puVar1[-1] = *(undefined4 *)(iVar2 - 4);
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: FUN_006b2e60 */
GEN_FRAME uint F_006b2e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b2e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_006b2d20(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_006b2ea0 */
GEN_FRAME uint F_006b2ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ea0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b2ec0 */
GEN_FRAME uint F_006b2ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b2ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::Object::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b2ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: FUN_006b2f10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b2f10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680((undefined4 *)((int)this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  return;
}

/* ref: Client::Graphics::Scene::CameraManager::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b2f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2b20));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10b2b08));
  F_004d6680(this + 4 GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10b2a74));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b2f70 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b2f70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b2f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x38))) {
  case 1: ;
  case 3: ;
    iVar1 = *(int *)((int)this + 0x44);
    this_00 = *(undefined * PTR32 *)((int)this + 0x40);
    break;
  case 2: ;
  case 4: ;
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x44) + 0x74)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x40) + 0x74)));
    break;
  default: ;
    goto switchD_006b2f7f_default;
  }
  if (((iVar1 != 0) && (this_00 != (undefined *)0x0)) && (*(undefined * PTR32 *)(iVar1 + 0x20) == this_00)) {
    F_006886d0(this_00 GEN_EDX_FWD);
    F_0068bd00(REFG(void * PTR32, 0x1371294) GEN_EDX_ARG,((undefined4)(uint)(this_00)));
  }
switchD_006b2f7f_default: ;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  return;
}

/* ref: FUN_006b2fe0 */
GEN_FRAME uint GEN_THISCALL F_006b2fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b2fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint in_EAX = 0;
  uint * puVar1;
  
  if (0x1f < param_1) {
    return in_EAX & 0xffffff00;
  }
  puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD)));
  return *puVar1 >> ((byte)param_1 & 0x1f) & 1;
}

/* ref: FUN_006b3010 */
GEN_FRAME uint GEN_THISCALL F_006b3010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint * puVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD)));
    if ((*puVar1 >> ((byte)param_1 & 0x1f) & 1) != 0) {
      puVar1 = ((uint *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
      uVar2 = 0xffffffff;
      if (param_1 < 0x20) {
        uVar2 = (1 << ((byte)param_1 & 0x1f)) - 1;
      }
      uVar2 = ((*puVar1 & uVar2) >> 1 & 0x55555555) + (*puVar1 & uVar2 & 0x55555555);
      uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
      uVar2 = (uVar2 >> 4 & 0xf0f0f0f) + (uVar2 & 0xf0f0f0f);
      uVar3 = (uVar2 >> 8 & 0xff00ff) + (uVar2 & 0xff00ff);
      uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
      return uVar2 + ((uVar3 >> 0x10) + (uVar3 & 0xffff)) * 0x1000;
    }
  }
  return 0;
}

/* ref: FUN_006b30c0 */
GEN_FRAME uint GEN_THISCALL F_006b30c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b30c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(uVar1 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b30e0 */
GEN_FRAME uint GEN_THISCALL F_006b30e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b30e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(uVar1 + 0x400 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3100 */
GEN_FRAME uint GEN_THISCALL F_006b3100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(uVar1 + 0x800 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3120 */
GEN_FRAME uint GEN_THISCALL F_006b3120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(uVar1 + 0xc00 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3140 */
GEN_FRAME uint GEN_THISCALL F_006b3140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *(undefined4 *)(uVar1 + 0x1000 + param_2 * 4);
  return (uint)param_1;
}

/* ref: FUN_006b3160 */
GEN_FRAME uint GEN_THISCALL F_006b3160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + param_5 * 4)));
  return (uint)param_1;
}

/* ref: FUN_006b31a0 */
GEN_FRAME uint GEN_THISCALL F_006b31a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b31a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x400 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b31e0 */
GEN_FRAME uint GEN_THISCALL F_006b31e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b31e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int param_4 = (int)gen_a4;
  int param_5 = (int)gen_a5;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  *param_1 = *((undefined4 *)GEN_TOP((uVar1 + (param_3 - 2 + (param_4 + param_2 * 2) * 2) * 0x1400 + 0x404 + param_5 * 8)));
  return (uint)param_1;
}

/* ref: FUN_006b3220 */
GEN_FRAME float10 GEN_THISCALL F_006b3220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3220u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  if (param_6 == 0xff) {
    return (float10)1;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_FWD);
  iVar1 = param_4 - 2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = (float *)(uVar2 + 0x1b5d0 + iVar1 * 0x38);
  }
  else {
    pfVar3 = (float *)(uVar2 + 0x1b5e0 + iVar1 * 0x38);
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3))));
}

/* ref: FUN_006b32b0 */
GEN_FRAME float10 GEN_THISCALL F_006b32b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b32b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int param_6 = (int)gen_a5;
  int iVar1;
  uint uVar2;
  float * pfVar3;
  float10 fVar4;
  
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_FWD);
  iVar1 = param_4 - 2 + param_5 * 2 + param_2 * 10;
  if ((param_3 & 1) == 0) {
    pfVar3 = (float *)(uVar2 + 0x1b5d8 + iVar1 * 0x38);
  }
  else {
    pfVar3 = (float *)(uVar2 + 0x1b5e8 + iVar1 * 0x38);
  }
  fVar4 = (float10)param_6;
  if (param_6 < 0) {
    fVar4 = fVar4 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)((float)GEN_TOF(((float10)*pfVar3 +
                         (float10)(float)(fVar4 / (float10)*(double *)&REFG(undefined, 0x1088118)) *
                         ((float10)pfVar3[1] - (float10)*pfVar3))));
}

/* ref: FUN_006b3330 */
GEN_FRAME uint GEN_THISCALL F_006b3330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x6b3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  int param_7 = (int)gen_a6;
  float * pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 fVar5;
  
  fVar2 = REFG(float, 0x1302c10);
  if ((param_4 & 1) == 0) {
    *param_2 = GEN_FLT_TO(*param_2, REFG(float, 0x1302c0c));
    fVar3 = REFG(float, 0x1302c14);
    param_2[1] = fVar2;
    param_2[2] = fVar3;
    return (uint)param_2;
  }
  uVar4 = ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 0x5c))(param_1 GEN_EDX_FWD);
  fVar5 = (float10)param_7;
  pfVar1 = ((float *)GEN_TOP((uVar4 + (param_5 + (param_6 + (param_3 + 200) * 5) * 2) * 0x38)));
  if (param_7 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = pfVar1[2];
  fVar3 = pfVar1[1];
  fVar5 = (float10)(float)(fVar5 / (float10)*(double *)&REFG(undefined, 0x1088118));
  *param_2 = ((float)GEN_TOF((fVar5 * ((float10)pfVar1[3] - (float10)*pfVar1) + (float10)*pfVar1)));
  param_2[1] = ((float)GEN_TOF(((float10)fVar3 + fVar5 * ((float10)pfVar1[4] - (float10)fVar3))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar2 + ((float10)pfVar1[5] - (float10)fVar2) * fVar5)));
  return (uint)param_2;
}

/* ref: FUN_006b3420 */
GEN_FRAME float GEN_THISCALL F_006b3420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b3420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  float10 fVar1;
  
  fVar1 = F_006b3220(*(undefined4 *)((int)this + 0x24) GEN_EDX_FWD,(param_1 - 1U >> 1) + 1,param_2,
                       param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3450 */
GEN_FRAME float GEN_THISCALL F_006b3450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x6b3450u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  float10 fVar1;
  
  fVar1 = F_006b32b0(*(undefined4 *)((int)this + 0x24) GEN_EDX_FWD,(param_1 - 1U >> 1) + 1,param_2,
                       param_1 - 1U & 1,param_3,param_4);
  return (float)fVar1;
}

/* ref: FUN_006b3480 */
GEN_FRAME uint GEN_THISCALL F_006b3480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x6b3480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  F_006b3330(*(undefined4 *)((int)this + 0x24) GEN_EDX_FWD,param_1,(param_2 - 1U >> 1) + 1,param_3,
               param_2 - 1U & 1,param_4,param_5);
  return param_1;
}

/* ref: FUN_006b34c0 */
GEN_FRAME uint GEN_THISCALL F_006b34c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b34c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = F_006b1210(this GEN_EDX_FWD,param_1);
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG);
  uVar3 = F_006b11b0(this GEN_EDX_ARG);
  return uVar2 + 4 + (uVar3 * param_2 + uVar1) * 6;
}

/* ref: FUN_006b3510 */
GEN_FRAME uint F_006b3510(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3530 */
GEN_FRAME uint F_006b3530(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3530u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b3550 */
GEN_FRAME uint F_006b3550(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3570 */
GEN_FRAME uint F_006b3570(unsigned int gen_a0)
{
  GEN_ENTER(0x6b3570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Scene::CharacterBase::VfxInstanceListenner::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b35a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b35a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x10b2a9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006b35d0 */
GEN_FRAME uint F_006b35d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b35d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006b35f0 */
GEN_FRAME uint F_006b35f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b35f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3620 */
GEN_NOFRAME byte GEN_THISCALL F_006b3620(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b3620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x2c0);
  return ((byte)(uVar1 >> 3) | (byte)(uVar1 >> 2) | (byte)(uVar1 >> 1) |
         *(byte *)((int)this + 0x2c0)) & 1 | *(int *)((int)this + 0x6f8) != 0 |
         *(int *)((int)this + 0x40c) != 0;
}

/* ref: FUN_006b3670 */
GEN_FRAME uint GEN_THISCALL F_006b3670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x40) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b3690 */
GEN_FRAME uint GEN_THISCALL F_006b3690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x42) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006b36d0 */
GEN_FRAME uint GEN_THISCALL F_006b36d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b36d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x40) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b36f0 */
GEN_FRAME uint GEN_THISCALL F_006b36f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b36f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3700 */
GEN_FRAME uint GEN_THISCALL F_006b3700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3700u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x40) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3720 */
GEN_FRAME uint GEN_THISCALL F_006b3720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3720u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return *(ushort *)(in_ecx + 0x42) >> ((char)param_3 + (char)param_2 & 0x1fU) & 1;
}

/* ref: FUN_006b3740 */
GEN_FRAME uint GEN_THISCALL F_006b3740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return *((uint *)GEN_TOP(((int)this + (param_1 + param_2) * 4)));
}

/* ref: FUN_006b3750 */
GEN_FRAME unsigned int GEN_THISCALL F_006b3750(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b3750u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float * pfVar2;
  float * pfVar3;
  
  *(float *)(param_1 + 0x84) = param_2;
  pfVar3 = (float *)(param_1 + 0x54);
  if ((float10)*(float *)(param_1 + 0x54) < (float10)*(float *)(param_1 + 0x50)) {
    pfVar3 = (float *)(param_1 + 0x50);
  }
  pfVar2 = (float *)(param_1 + 0x58);
  if ((float10)*(float *)(param_1 + 0x58) < (float10)*pfVar3) {
    pfVar2 = pfVar3;
  }
  fVar1 = (float)((float10)*pfVar2 + (float10)*pfVar2);
  if ((float10)fVar1 < (float10)*(float *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x84);
    return;
  }
  *(float *)(param_1 + 0x84) = fVar1;
  return;
}

/* ref: FUN_006b3840 */
GEN_FRAME uint GEN_THISCALL F_006b3840(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b3840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x28);
  (*(float *)(gen_frame + 0x8)) = *(float *)((*(int *)&gen_args[0]) + 0x18);
  fVar5 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x18);
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 - 1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar6 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF(((fVar6 * ((float10)(*(float *)&gen_args[1]) - fVar5)) / ((float10)*(float *)((*(int *)&gen_args[0]) + 0x1c) - fVar5))))),0xd));
  (*(float *)&gen_args[1]) = gen_bits2f((int)dVar3);
  pfVar4 = &(*(float *)&gen_args[1]);
  if (iVar1 - 1 <= (int)dVar3) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar4) < 1) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar4);
}

/* ref: FUN_006b38c0 */
GEN_FRAME uint GEN_THISCALL F_006b38c0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6b38c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 0x28);
  (*(float *)(gen_frame + 0x8)) = *(float *)((*(int *)&gen_args[0]) + 0x20);
  fVar5 = (float10)*(float *)((*(int *)&gen_args[0]) + 0x20);
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(iVar1 - 1);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  fVar6 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  dVar3 = (GEN_X87MATH(((double)((float)GEN_TOF(((fVar6 * ((float10)(*(float *)&gen_args[1]) - fVar5)) / ((float10)*(float *)((*(int *)&gen_args[0]) + 0x24) - fVar5))))),0xd));
  (*(float *)&gen_args[1]) = gen_bits2f((int)dVar3);
  pfVar4 = &(*(float *)&gen_args[1]);
  if (iVar1 - 1 <= (int)dVar3) {
    pfVar4 = &(*(float *)(gen_frame + 0x4));
  }
  if ((int)gen_fl2bits(*pfVar4) < 1) {
    pfVar4 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)gen_fl2bits(*pfVar4);
}

/* ref: FUN_006b39a0 */
GEN_FRAME uint F_006b39a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6b39a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006b3a00 */
GEN_FRAME uint GEN_THISCALL F_006b3a00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x45))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_006b3a60 */
GEN_FRAME uint GEN_THISCALL F_006b3a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006b3a70 */
GEN_NOFRAME uint GEN_THISCALL F_006b3a70(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x6b3a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006b1d30(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_006b3a80 */
GEN_FRAME uint GEN_THISCALL F_006b3a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_006b3aa0 */
GEN_FRAME uint GEN_THISCALL F_006b3aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b3aa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_3 >> 5;
  uVar1 = 0;
  if (uVar3 != 0) {
    do {
      *(uint *)(*(int *)this + uVar1 * 4) =
           *(uint *)(*param_1 + uVar1 * 4) & *(uint *)(*param_2 + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar3);
  }
  uVar1 = uVar3 * 0x20;
  iVar2 = param_3 + uVar3 * -0x20;
  if (iVar2 != 0) {
    uVar1 = *(uint *)(*param_1 + uVar3 * 4) & *(uint *)(*param_2 + uVar3 * 4) &
            ~(-1 << ((byte)iVar2 & 0x1f));
    *(uint *)(*(int *)this + uVar3 * 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_006b3b10 */
GEN_NOFRAME uint GEN_THISCALL F_006b3b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006b3b40((undefined *)((int)this - 0x60) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Scene::World::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x68) =
       (*(undefined * PTR32 (*)[1])REFP(0x10b2a94));
  *(undefined * PTR32 * PTR32 *)(this + 0x60) = (*(undefined * PTR32 (*)[1])REFP(0x10b2a6c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::Camera::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3b80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::CameraMaya::vf0 */
GEN_FRAME uint GEN_THISCALL F_006b3bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) GEN_EDX_FWD,this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Scene::DrawObject::vf8 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf9 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf15 */
GEN_NOFRAME byte GEN_THISCALL F_006b3c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf14 */
GEN_NOFRAME byte GEN_THISCALL F_006b3c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6b3c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf23 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf24 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf25 */
GEN_NOFRAME uint F_006b3c50(void)
{
  GEN_ENTER(0x6b3c50u, 0u, 0u, 0u, 0u);
  return 0x1302e54;
}

/* ref: Client::Graphics::Scene::DrawObject::vf26 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf27 */
GEN_NOFRAME unsigned int F_006b3c70(void)
{
  GEN_ENTER(0x6b3c70u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf28 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf29 */
GEN_NOFRAME uint F_006b3c90(void)
{
  GEN_ENTER(0x6b3c90u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: Client::Graphics::Scene::DrawObject::vf32 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf33 */
GEN_NOFRAME unsigned int F_006b3cb0(void)
{
  GEN_ENTER(0x6b3cb0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf34 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf35 */
GEN_NOFRAME unsigned int F_006b3cd0(void)
{
  GEN_ENTER(0x6b3cd0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf36 */
GEN_NOFRAME byte F_006b3ce0(void)
{
  GEN_ENTER(0x6b3ce0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf37 */
GEN_NOFRAME byte F_006b3cf0(void)
{
  GEN_ENTER(0x6b3cf0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Scene::DrawObject::vf38 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6b3d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf39 */
GEN_NOFRAME unsigned int GEN_THISCALL F_006b3d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x6b3d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return;
}

/* ref: Client::Graphics::Scene::DrawObject::vf40 */
GEN_NOFRAME unsigned int F_006b3d20(void)
{
  GEN_ENTER(0x6b3d20u, 0u, 0u, 0u, 0u);
  return;
}

