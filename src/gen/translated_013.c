#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_004bd4c0 */
uint F_004bd4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd4c0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)*param_1 < (float10)*(float *)param_2) {
    *param_1 = *(float *)param_2;
  }
  if ((float10)param_1[1] < (float10)*(float *)(param_2 + 4)) {
    param_1[1] = *(float *)(param_2 + 4);
  }
  if ((float10)param_1[2] < (float10)*(float *)(param_2 + 8)) {
    param_1[2] = *(float *)(param_2 + 8);
  }
  return (uint)param_1;
}

/* ref: FUN_004bd520 */
uint F_004bd520(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd520u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_004bd550 */
uint F_004bd550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_004bd580 */
uint F_004bd580(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*(float *)((int)this + 8);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1))))))))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
  *(float *)((int)this + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_004bd5f0 */
uint F_004bd5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd5f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)param_2[1] * (float10)param_3[2] -
                    (float10)param_2[2] * (float10)param_3[1]);
  param_1[1] = (float)((float10)param_2[2] * (float10)*param_3 -
                      (float10)*param_2 * (float10)param_3[2]);
  param_1[2] = (float)((float10)param_3[1] * (float10)*param_2 -
                      (float10)*param_3 * (float10)param_2[1]);
  return (uint)param_1;
}

/* ref: FUN_004bd630 */
uint F_004bd630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2[1] ^ REFG(uint, 0x10920d0);
  uVar2 = param_2[2] ^ REFG(uint, 0x10920d0);
  *param_1 = *param_2 ^ REFG(uint, 0x10920d0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_004bd670 */
uint F_004bd670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd670u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = param_2[2];
  fVar4 = param_3[2];
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 + (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 + (float10)fVar4);
  return (uint)param_1;
}

/* ref: FUN_004bd6f0 */
uint F_004bd6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd6f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd760 */
unsigned int F_004bd760(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bd780 */
uint F_004bd780(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd780u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = F_0050c620(*param_1,0,0);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_004bd7b0 */
uint F_004bd7b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bd7b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)(fVar3 * (float10)*param_2);
  param_1[1] = (float)((float10)fVar1 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_004bd830 */
uint F_004bd830(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bd830u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_2;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  *param_1 = (float)(fVar3 * (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 * fVar3);
  param_1[2] = (float)(fVar3 * (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_004bd890 */
unsigned int F_004bd890(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bd910 */
uint F_004bd910(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd910u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd920 */
byte F_004bd920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bd920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((undefined *)*param_1 == (undefined *)0x0) {
    *(undefined4 *)((int)this + 4) = 0;
  }
  else {
    uVar1 = F_009cfa30((undefined *)*param_1,0);
    *(uint *)((int)this + 4) = uVar1;
    if (uVar1 != 0) {
      F_00982ca0(uVar1,0,0,(float)(float10)1,(float)(float10)0);
      return 1;
    }
  }
  return 1;
}

/* ref: FUN_004bd970 */
unsigned int F_004bd970(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd970u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  if ((undefined *)*param_1 != (undefined *)0x0) {
    F_00982b20((undefined *)*param_1);
    *param_1 = 0;
  }
  return 0;
}

/* ref: FUN_004bd990 */
uint F_004bd990(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd990u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004bd9a0 */
uint F_004bd9a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bd9a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)in_ecx;
}

/* ref: FUN_004bd9d0 */
unsigned int F_004bd9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bd9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),500);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_004bda10 */
uint F_004bda10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bda10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_004bda40 */
uint F_004bda40(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4bda40u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004bda70 */
uint F_004bda70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bda70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_004bdaa0 */
uint F_004bdaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bdaa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    uVar1 = F_0050c620(*param_1,0,0);
    *param_1 = 0;
  }
  return uVar1;
}

/* ref: FUN_004bdae0 */
uint F_004bdae0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4bdae0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004bdba0 */
uint F_004bdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdba0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  param_1[3] = (float)((float10)param_2[3] + (float10)param_3[3]);
  return (uint)param_1;
}

/* ref: FUN_004bdbd0 */
uint F_004bdbd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x4bdbd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)((float10)param_2[2] * fVar1);
  param_1[3] = (float)(fVar1 * (float10)param_2[3]);
  return (uint)param_1;
}

/* ref: FUN_004bdc00 */
uint F_004bdc00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bdc00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_004bdc30 */
float10 F_004bdc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdc30u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  return (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc) * (float10)param_2[3] +
                         ((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                         ((float10)*(float *)param_1 * (float10)*param_2 +
                         (float10)*(float *)(param_1 + 4) * (float10)param_2[1])))));
}

/* ref: FUN_004bdc60 */
uint F_004bdc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdc60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_004bdd00 */
uint F_004bdd00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdd00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)param_2;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  *param_1 = (float)(fVar4 * (float10)*param_3);
  param_1[1] = (float)((float10)fVar1 * fVar4);
  param_1[2] = (float)((float10)fVar2 * fVar4);
  param_1[3] = (float)(fVar4 * (float10)fVar3);
  return (uint)param_1;
}

/* ref: FUN_004bdd70 */
uint F_004bdd70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bdd70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx / fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] / fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] / fVar1);
  in_ecx[3] = (float)((float10)in_ecx[3] / fVar1);
  return (uint)in_ecx;
}

/* ref: FUN_004bdda0 */
uint F_004bdda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bdda0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float10 fVar9;
  
  fVar6 = (float10)*param_2;
  fVar7 = (float10)*param_1;
  fVar1 = ((float)GEN_TOF(((float10)param_1[2] * (float10)param_2[2] +
                 ((float10)param_1[1] * (float10)param_2[1] + fVar7 * fVar6))));
  if (*(double *)&REFG(undefined, 0x10943f8) <= -(double)fVar1) {
    *(undefined4 *)this = GEN_FLT_TO(*(undefined4 *)this, REFG(float, 0x1087f04));
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)this;
  }
  fVar2 = param_1[1];
  fVar3 = param_2[2];
  fVar4 = param_1[2];
  fVar5 = param_2[1];
  fVar8 = (float10)fVar1 + (float10)REFG(double, 0x1088130);
  fVar8 = (float10)((float)GEN_TOF(SQRT((float10)(float)(fVar8 + fVar8))));
  fVar9 = (float10)(float)((float10)1 / fVar8);
  *(float *)this =
       ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar2 * (float10)fVar3 -
                                       (float10)fVar5 * (float10)fVar4))));
  *(float *)((int)this + 4) =
       ((float)GEN_TOF(((float10)(float)((float10)fVar4 * fVar6 - fVar7 * (float10)fVar3) * fVar9)));
  *(float *)((int)this + 8) =
       ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 * fVar7 - (float10)fVar2 * fVar6))));
  *(float *)((int)this + 0xc) = (float)(fVar8 * (float10)REFG(double, 0x1088108));
  return (uint)this;
}

/* ref: FUN_004bdee0 */
uint F_004bdee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4bdee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xe] = 0;
  return (uint)param_1;
}

/* ref: FUN_004bdf70 */
uint F_004bdf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bdf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  puVar1 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),this);
  puVar3 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_004be0e0 */
unsigned int F_004be0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be0e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004be230 */
uint F_004be230(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be230u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar4 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = *(float *)(param_1 + 8);
  fVar3 = (float10)(float)fVar3;
  fVar4 = (float10)(float)fVar4;
  fVar2 = *(float *)(param_1 + 0x18);
  *(float *)(param_1 + 8) =
       ((float)GEN_TOF((fVar3 * (float10)*(float *)(param_1 + 4) + fVar4 * (float10)fVar1)));
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF(((float10)fVar2 * fVar4 + (float10)*(float *)(param_1 + 0x14) * fVar3)));
  *(float *)(param_1 + 4) =
       ((float)GEN_TOF((fVar4 * (float10)*(float *)(param_1 + 4) - fVar3 * (float10)fVar1)));
  *(float *)(param_1 + 0x14) =
       ((float)GEN_TOF((fVar4 * (float10)*(float *)(param_1 + 0x14) - (float10)fVar2 * fVar3)));
  *(float *)(param_1 + 0x28) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x28) * fVar4 +
              (float10)*(float *)(param_1 + 0x24) * fVar3)));
  *(float *)(param_1 + 0x38) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x38) * fVar4 +
              (float10)*(float *)(param_1 + 0x34) * fVar3)));
  *(float *)(param_1 + 0x24) =
       ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x24) * fVar4 -
              (float10)*(float *)(param_1 + 0x28) * fVar3)));
  *(float *)(param_1 + 0x34) =
       ((float)GEN_TOF((fVar4 * (float10)*(float *)(param_1 + 0x34) -
              (float10)*(float *)(param_1 + 0x38) * fVar3)));
  return param_1;
}

/* ref: FUN_004be350 */
uint F_004be350(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be350u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar6 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar5 = ((float10)GEN_TOD(fcos((float10)param_2)));
  fVar1 = param_1[2];
  fVar5 = (float10)(float)fVar5;
  fVar6 = (float10)(float)fVar6;
  fVar2 = param_1[6];
  param_1[2] = (float)(fVar5 * (float10)fVar1 - fVar6 * (float10)*param_1);
  fVar3 = param_1[10];
  param_1[6] = (float)((float10)fVar2 * fVar5 - (float10)param_1[4] * fVar6);
  fVar4 = param_1[0xe];
  *param_1 = (float)(fVar5 * (float10)*param_1 + fVar6 * (float10)fVar1);
  param_1[4] = (float)((float10)param_1[4] * fVar5 + fVar6 * (float10)fVar2);
  param_1[10] = (float)((float10)fVar3 * fVar5 - (float10)param_1[8] * fVar6);
  param_1[0xe] = (float)((float10)fVar4 * fVar5 - (float10)param_1[0xc] * fVar6);
  param_1[8] = (float)((float10)fVar3 * fVar6 + (float10)param_1[8] * fVar5);
  param_1[0xc] = (float)(fVar6 * (float10)fVar4 + (float10)param_1[0xc] * fVar5);
  return (uint)param_1;
}

/* ref: FUN_004be4f0 */
uint F_004be4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4be4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  puVar1 = (undefined4 *)F_004f11a0(((undefined1 *)(gen_frame + 0x0)),param_2,param_3);
  puVar3 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar3 = puVar3 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: FUN_004be550 */
unsigned int F_004be550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4be550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = param_2[1];
  *(undefined4 *)((int)this + 0x18) = param_2[2];
  *(undefined4 *)((int)this + 0x1c) = param_2[3];
  *(undefined4 *)((int)this + 0x20) = *param_3;
  *(undefined4 *)((int)this + 0x24) = param_3[1];
  *(undefined4 *)((int)this + 0x28) = param_3[2];
  return 0;
}

/* ref: FUN_004be5b0 */
uint F_004be5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x10) = *param_1;
  *(undefined4 *)((int)this + 0x14) = param_1[1];
  *(undefined4 *)((int)this + 0x18) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x1c) = uVar1;
  return uVar1;
}

/* ref: FUN_004be5e0 */
uint F_004be5e0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4be5e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_004be600 */
uint F_004be600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_004be620 */
uint F_004be620(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be620u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return (uint)in_ecx;
}

/* ref: FUN_004be650 */
uint F_004be650(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4be650u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004be680 */
uint F_004be680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4be680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_004be6b0 */
uint F_004be6b0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x4be6b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_004be750 */
uint F_004be750(unsigned int gen_a0)
{
  GEN_ENTER(0x4be750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(float *)this = ((float)GEN_TOF(SQRT((float10)*(float *)this)));
  *(float *)((int)this + 4) = ((float)GEN_TOF(SQRT((float10)*(float *)((int)this + 4))));
  *(float *)((int)this + 8) = ((float)GEN_TOF(SQRT((float10)*(float *)((int)this + 8))));
  return (uint)this;
}

/* ref: FUN_004be7c0 */
unsigned int F_004be7c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be7c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)((float10)param_3[3] * fVar1 + (float10)param_2[3] * fVar2);
  param_1[4] = (float)((float10)param_3[4] * fVar1 + (float10)param_2[4] * fVar2);
  param_1[5] = (float)((float10)param_3[5] * fVar1 + (float10)param_2[5] * fVar2);
  param_1[6] = (float)((float10)param_3[6] * fVar1 + (float10)param_2[6] * fVar2);
  param_1[7] = (float)((float10)param_3[7] * fVar1 + (float10)param_2[7] * fVar2);
  param_1[8] = (float)(fVar2 * (float10)param_2[8] + (float10)param_3[8] * fVar1);
  return 0;
}

/* ref: FUN_004be870 */
unsigned int F_004be870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)*(float *)&REFG(undefined, 0x1097920) * (float10)param_2 + (float10)*in_ecx);
  return 0;
}

/* ref: FUN_004be890 */
unsigned int F_004be890(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4be890u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar3 = *(float *)(param_3 + 4);
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)(param_3 + 8);
  fVar4 = (float10)(float)((float10)param_2 * (float10)param_4);
  *in_ecx = (float)((float10)*in_ecx + fVar4 * (float10)*(float *)&REFG(undefined, 0x1097920));
  fVar5 = (float10)fVar3;
  in_ecx[1] = ((float)GEN_TOF(((float10)in_ecx[1] + fVar4 * (fVar5 * (float10)*(float *)&REFG(undefined, 0x1097924)))));
  fVar6 = (float10)fVar2;
  in_ecx[2] = ((float)GEN_TOF(((float10)in_ecx[2] + fVar4 * (fVar6 * (float10)*(float *)&REFG(undefined, 0x1097928)))));
  fVar7 = (float10)fVar1;
  in_ecx[3] = ((float)GEN_TOF(((float10)in_ecx[3] + fVar4 * (fVar7 * (float10)*(float *)&REFG(undefined, 0x109792c)))));
  in_ecx[4] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x1097930) * fVar7) * fVar5) * fVar4 +
                     (float10)in_ecx[4])));
  in_ecx[5] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x1097934) * fVar5) * fVar6) * fVar4 +
                     (float10)in_ecx[5])));
  in_ecx[7] = ((float)GEN_TOF(((((float10)*(float *)&REFG(undefined, 0x109793c) * fVar7) * fVar6) * fVar4 +
                     (float10)in_ecx[7])));
  in_ecx[6] = ((float)GEN_TOF(((((fVar6 * (float10)*(double *)&REFG(undefined, 0x10944e0)) * fVar6 - (float10)REFG(double, 0x1088130))
                      * (float10)*(float *)&REFG(undefined, 0x1097938)) * fVar4 + (float10)in_ecx[6])));
  in_ecx[8] = ((float)GEN_TOF((((fVar7 * fVar7 - fVar5 * fVar5) * (float10)*(float *)&REFG(undefined, 0x1097940)) * fVar4 +
                     (float10)in_ecx[8])));
  return 0;
}

/* ref: FUN_004be9a0 */
unsigned int F_004be9a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4be9a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] * fVar1);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar1);
  in_ecx[6] = (float)(fVar1 * (float10)in_ecx[6]);
  in_ecx[7] = (float)((float10)in_ecx[7] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  return 0;
}

/* ref: FUN_004bea00 */
unsigned int F_004bea00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bea00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094678);
  *param_2 = (float)((float10)in_ecx[8] * fVar1);
  param_2[1] = (float)((float10)in_ecx[4] * fVar1);
  param_2[2] = (float)((float10)in_ecx[7] * fVar1);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094670);
  param_2[3] = (float)((float10)in_ecx[3] * fVar2);
  param_2[4] = (float)((float10)in_ecx[4] * fVar2);
  param_2[5] = (float)((float10)in_ecx[8] * (float10)*(double *)&REFG(undefined, 0x1094668));
  param_2[6] = (float)((float10)in_ecx[5] * fVar1);
  param_2[7] = (float)((float10)in_ecx[1] * fVar2);
  param_2[8] = (float)((float10)in_ecx[7] * fVar1);
  param_2[9] = (float)((float10)in_ecx[5] * fVar1);
  param_2[10] = (float)((float10)in_ecx[6] * (float10)*(double *)&REFG(undefined, 0x1094660));
  param_2[0xb] = (float)((float10)in_ecx[2] * fVar2);
  param_2[0xc] = (float)((float10)in_ecx[3] * fVar2);
  param_2[0xd] = (float)((float10)in_ecx[1] * fVar2);
  param_2[0xe] = (float)(fVar2 * (float10)in_ecx[2]);
  param_2[0xf] = (float)((float10)*in_ecx * (float10)*(double *)&REFG(undefined, 0x1094658) -
                        (float10)in_ecx[6] * (float10)*(double *)&REFG(undefined, 0x1094650));
  return 0;
}

/* ref: FUN_004beab0 */
float10 F_004beab0(unsigned int gen_a0)
{
  GEN_ENTER(0x4beab0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  return (float10)(float)((float10)*in_ecx / (float10)*(float *)&REFG(undefined, 0x1097920) +
                         (float10)*(double *)&REFG(undefined, 0x108bec8));
}

/* ref: FUN_004bead0 */
float F_004bead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bead0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float * pfVar2;
  
  (*(float *)(gen_frame + 0x20)) = *param_1;
  (*(float *)(gen_frame + 0x24)) = param_1[1];
  (*(float *)(gen_frame + 0x28)) = param_1[2];
  (*(float *)(gen_frame + 0x2c)) = (float)(float10)1;
  pfVar2 = (float *)F_004eede0(((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x20)),param_2);
  (*(float *)(gen_frame + 0x14)) = pfVar2[1];
  (*(float *)(gen_frame + 0x10)) = *pfVar2;
  (*(float *)(gen_frame + 0x18)) = pfVar2[2];
  (*(float *)(gen_frame + 0x1c)) = pfVar2[3];
  fVar1 = ((float)GEN_TOF(((float10)pfVar2[3] * (float10)(*(float *)(gen_frame + 0x2c)) +
                 ((float10)pfVar2[2] * (float10)(*(float *)(gen_frame + 0x28)) +
                 ((float10)(*(float *)(gen_frame + 0x20)) * (float10)*pfVar2 + (float10)pfVar2[1] * (float10)(*(float *)(gen_frame + 0x24)))))));
  (*(float *)(gen_frame + 0x3c)) = fVar1;
  return fVar1;
}

/* ref: FUN_004beb60 */
unsigned int F_004beb60(unsigned int gen_a0)
{
  GEN_ENTER(0x4beb60u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  in_ecx[0xf] = 0;
  in_ecx[0x10] = 0;
  in_ecx[0x11] = 0;
  in_ecx[0x12] = 0;
  in_ecx[0x13] = 0;
  in_ecx[0x14] = 0;
  in_ecx[0x15] = 0;
  in_ecx[0x16] = 0;
  in_ecx[0x17] = 0;
  in_ecx[0x18] = 0;
  in_ecx[0x19] = 0;
  in_ecx[0x1a] = 0;
  return 0;
}

/* ref: FUN_004bebc0 */
uint F_004bebc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4bebc0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  float * pfVar1;
  float * pfVar2;
  float * pfVar3;
  int iVar4;
  float * pfVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar7 = (float10)param_4;
  pfVar5 = (float *)(param_2 + 0x10);
  iVar6 = param_2 - param_3;
  fVar8 = (float10)(float)((float10)1 - fVar7);
  iVar4 = param_2 - param_1;
  param_2 = 3;
  pfVar1 = (float *)(param_3 + 4);
  pfVar3 = (float *)(param_1 + 8);
  do {
    pfVar2 = pfVar1 + 9;
    param_2 = param_2 + -1;
    pfVar3[-2] = (float)((float10)pfVar5[-4] * fVar8 + (float10)pfVar1[-1] * fVar7);
    *((float *)GEN_TOP(((param_1 - param_3) + -0x24 + (int)pfVar2))) =
         ((float)GEN_TOF((fVar7 * (float10)*pfVar1 + (float10)*(float *)(iVar6 + -0x24 + (int)pfVar2) * fVar8
                )));
    *pfVar3 = ((float)GEN_TOF(((float10)pfVar1[1] * fVar7 +
                     (float10)*((float *)GEN_TOP((iVar4 + -0x24 + (int)(pfVar3 + 9)))) * fVar8)));
    pfVar3[1] = (float)((float10)pfVar5[-1] * fVar8 + (float10)pfVar1[2] * fVar7);
    pfVar3[2] = (float)(fVar8 * (float10)*pfVar5 + (float10)pfVar1[3] * fVar7);
    pfVar3[3] = (float)((float10)pfVar5[1] * fVar8 + (float10)pfVar1[4] * fVar7);
    pfVar3[4] = (float)((float10)pfVar5[2] * fVar8 + (float10)pfVar1[5] * fVar7);
    pfVar3[5] = (float)((float10)pfVar5[3] * fVar8 + (float10)pfVar1[6] * fVar7);
    pfVar3[6] = (float)((float10)pfVar5[4] * fVar8 + (float10)pfVar1[7] * fVar7);
    pfVar1 = pfVar2;
    pfVar3 = pfVar3 + 9;
    pfVar5 = pfVar5 + 9;
  } while (param_2 != 0);
  return (uint)pfVar2;
}

/* ref: FUN_004becb0 */
uint F_004becb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4becb0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 * (float10)*(float *)&REFG(undefined, 0x1097920) + (float10)*in_ecx);
  in_ecx[9] = (float)((float10)param_2[1] * (float10)*(float *)&REFG(undefined, 0x1097920) + (float10)in_ecx[9]);
  in_ecx[0x12] = (float)((float10)param_2[2] * (float10)*(float *)&REFG(undefined, 0x1097920) +
                        (float10)in_ecx[0x12]);
  return (uint)param_2;
}

/* ref: FUN_004becf0 */
unsigned int F_004becf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4becf0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  F_004be890(in_ecx,*param_2,param_3,param_4);
  F_004be890(in_ecx + 0x24,param_2[1],param_3,param_4);
  F_004be890(in_ecx + 0x48,param_2[2],param_3,param_4);
  return 0;
}

/* ref: FUN_004bed50 */
unsigned int F_004bed50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bed50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  *in_ecx = (float)(fVar1 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)in_ecx[1] * fVar1);
  in_ecx[2] = (float)(fVar1 * (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] * fVar1);
  in_ecx[4] = (float)(fVar1 * (float10)in_ecx[4]);
  in_ecx[5] = (float)((float10)in_ecx[5] * fVar1);
  in_ecx[6] = (float)(fVar1 * (float10)in_ecx[6]);
  in_ecx[7] = (float)((float10)in_ecx[7] * fVar1);
  in_ecx[8] = (float)(fVar1 * (float10)in_ecx[8]);
  fVar1 = (float10)*(float *)(param_2 + 4);
  in_ecx[9] = (float)(fVar1 * (float10)in_ecx[9]);
  in_ecx[10] = (float)(fVar1 * (float10)in_ecx[10]);
  in_ecx[0xb] = (float)((float10)in_ecx[0xb] * fVar1);
  in_ecx[0xc] = (float)(fVar1 * (float10)in_ecx[0xc]);
  in_ecx[0xd] = (float)((float10)in_ecx[0xd] * fVar1);
  in_ecx[0xe] = (float)(fVar1 * (float10)in_ecx[0xe]);
  in_ecx[0xf] = (float)((float10)in_ecx[0xf] * fVar1);
  in_ecx[0x10] = (float)(fVar1 * (float10)in_ecx[0x10]);
  in_ecx[0x11] = (float)(fVar1 * (float10)in_ecx[0x11]);
  fVar1 = (float10)*(float *)(param_2 + 8);
  in_ecx[0x12] = (float)(fVar1 * (float10)in_ecx[0x12]);
  in_ecx[0x13] = (float)((float10)in_ecx[0x13] * fVar1);
  in_ecx[0x14] = (float)(fVar1 * (float10)in_ecx[0x14]);
  in_ecx[0x15] = (float)((float10)in_ecx[0x15] * fVar1);
  in_ecx[0x16] = (float)(fVar1 * (float10)in_ecx[0x16]);
  in_ecx[0x17] = (float)((float10)in_ecx[0x17] * fVar1);
  in_ecx[0x18] = (float)(fVar1 * (float10)in_ecx[0x18]);
  in_ecx[0x19] = (float)((float10)in_ecx[0x19] * fVar1);
  in_ecx[0x1a] = (float)(fVar1 * (float10)in_ecx[0x1a]);
  return 0;
}

/* ref: FUN_004bee50 */
unsigned int F_004bee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bee50u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar1 = (float10)*(double *)&REFG(undefined, 0x1094678);
  *param_2 = (float)((float10)in_ecx[8] * fVar1);
  param_2[1] = (float)((float10)in_ecx[4] * fVar1);
  param_2[2] = (float)((float10)in_ecx[7] * fVar1);
  fVar2 = (float10)*(double *)&REFG(undefined, 0x1094670);
  param_2[3] = (float)((float10)in_ecx[3] * fVar2);
  param_2[4] = (float)((float10)in_ecx[4] * fVar2);
  fVar3 = (float10)*(double *)&REFG(undefined, 0x1094668);
  param_2[5] = (float)((float10)in_ecx[8] * fVar3);
  param_2[6] = (float)((float10)in_ecx[5] * fVar1);
  param_2[7] = (float)((float10)in_ecx[1] * fVar2);
  param_2[8] = (float)((float10)in_ecx[7] * fVar1);
  param_2[9] = (float)((float10)in_ecx[5] * fVar1);
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1094660);
  param_2[10] = (float)((float10)in_ecx[6] * fVar4);
  param_2[0xb] = (float)((float10)in_ecx[2] * fVar2);
  param_2[0xc] = (float)((float10)in_ecx[3] * fVar2);
  param_2[0xd] = (float)((float10)in_ecx[1] * fVar2);
  param_2[0xe] = (float)((float10)in_ecx[2] * fVar2);
  fVar5 = (float10)*(double *)&REFG(undefined, 0x1094658);
  fVar6 = (float10)*(double *)&REFG(undefined, 0x1094650);
  param_2[0xf] = (float)((float10)*in_ecx * fVar5 - (float10)in_ecx[6] * fVar6);
  param_2[0x10] = (float)((float10)in_ecx[0x11] * fVar1);
  param_2[0x11] = (float)((float10)in_ecx[0xd] * fVar1);
  param_2[0x12] = (float)((float10)in_ecx[0x10] * fVar1);
  param_2[0x13] = (float)((float10)in_ecx[0xc] * fVar2);
  param_2[0x14] = (float)((float10)in_ecx[0xd] * fVar2);
  param_2[0x15] = (float)((float10)in_ecx[0x11] * fVar3);
  param_2[0x16] = (float)((float10)in_ecx[0xe] * fVar1);
  param_2[0x17] = (float)((float10)in_ecx[10] * fVar2);
  param_2[0x18] = (float)((float10)in_ecx[0x10] * fVar1);
  param_2[0x19] = (float)((float10)in_ecx[0xe] * fVar1);
  param_2[0x1a] = (float)((float10)in_ecx[0xf] * fVar4);
  param_2[0x1b] = (float)((float10)in_ecx[0xb] * fVar2);
  param_2[0x1c] = (float)((float10)in_ecx[0xc] * fVar2);
  param_2[0x1d] = (float)((float10)in_ecx[10] * fVar2);
  param_2[0x1e] = (float)((float10)in_ecx[0xb] * fVar2);
  param_2[0x1f] = (float)((float10)in_ecx[9] * fVar5 - (float10)in_ecx[0xf] * fVar6);
  param_2[0x20] = (float)((float10)in_ecx[0x1a] * fVar1);
  param_2[0x21] = (float)((float10)in_ecx[0x16] * fVar1);
  param_2[0x22] = (float)((float10)in_ecx[0x19] * fVar1);
  param_2[0x23] = (float)((float10)in_ecx[0x15] * fVar2);
  param_2[0x24] = (float)((float10)in_ecx[0x16] * fVar2);
  param_2[0x25] = (float)((float10)in_ecx[0x1a] * fVar3);
  param_2[0x26] = (float)((float10)in_ecx[0x17] * fVar1);
  param_2[0x27] = (float)((float10)in_ecx[0x13] * fVar2);
  param_2[0x28] = (float)((float10)in_ecx[0x19] * fVar1);
  param_2[0x29] = (float)((float10)in_ecx[0x17] * fVar1);
  param_2[0x2a] = (float)(fVar4 * (float10)in_ecx[0x18]);
  param_2[0x2b] = (float)((float10)in_ecx[0x14] * fVar2);
  param_2[0x2c] = (float)((float10)in_ecx[0x15] * fVar2);
  param_2[0x2d] = (float)((float10)in_ecx[0x13] * fVar2);
  param_2[0x2e] = (float)((float10)in_ecx[0x14] * fVar2);
  param_2[0x2f] = (float)(fVar5 * (float10)in_ecx[0x12] - (float10)in_ecx[0x18] * fVar6);
  return 0;
}

/* ref: FUN_004bf050 */
uint F_004bf050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf050u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)0;
  *param_2 = (float)((float10)*in_ecx / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  param_2[1] = (float)((float10)in_ecx[9] / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  param_2[2] = (float)((float10)in_ecx[0x12] / (float10)*(float *)&REFG(undefined, 0x1097920) + fVar1);
  return (uint)param_2;
}

/* ref: FUN_004bf180 */
uint F_004bf180(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x30),0,0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf1a0 */
uint F_004bf1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf1a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[3])) &&
     ((param_2 != in_ecx[8] || (in_ecx[0xc] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf1f0 */
uint F_004bf1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf210 */
uint F_004bf210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf210u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf260 */
uint F_004bf260(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x1c),0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf280 */
uint F_004bf280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf280u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_2 != *in_ecx) && ((param_2 != in_ecx[4] || (in_ecx[7] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf2d0 */
uint F_004bf2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf2d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf320 */
uint F_004bf320(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar1;
}

/* ref: FUN_004bf340 */
uint F_004bf340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf340u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (((param_2 != *in_ecx) && (param_2 != in_ecx[2])) &&
     ((param_2 != in_ecx[6] || (in_ecx[9] == 0)))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_004bf490 */
uint F_004bf490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf490u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf4e0 */
uint F_004bf4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf4e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf530 */
uint F_004bf530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf530u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf560 */
unsigned int F_004bf560(unsigned int gen_a0)
{
  GEN_ENTER(0x4bf560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00982b20(*(undefined * PTR32 *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_004bf5b0 */
uint F_004bf5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf5f0 */
uint F_004bf5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf5f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf620 */
uint F_004bf620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf670 */
uint F_004bf670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf670u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf6b0 */
uint F_004bf6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf6b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf6e0 */
uint F_004bf6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf730 */
uint F_004bf730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf770 */
uint F_004bf770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf7a0 */
uint F_004bf7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf800 */
uint F_004bf800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf800u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf820 */
uint F_004bf820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf820u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf840 */
uint F_004bf840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf840u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf870 */
uint F_004bf870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf870u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xce);
  return uVar1;
}

/* ref: FUN_004bf8a0 */
uint F_004bf8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xce);
  return (uint)uVar1;
}

/* ref: FUN_004bf900 */
uint F_004bf900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf900u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf910 */
uint F_004bf910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004bf930 */
uint F_004bf930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf930u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_004bf950 */
uint F_004bf950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004bf970 */
uint F_004bf970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf970u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_004bf990 */
uint F_004bf990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf990u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf9a0 */
uint F_004bf9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004bf9c0 */
uint F_004bf9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf9c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_004bf9e0 */
uint F_004bf9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bf9e0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_004bf9f0 */
uint F_004bf9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bf9f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_size32 sVar1;
  
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    (*(uint *)&gen_args[2]) = ((*(uint *)&gen_args[2]) & 0xff0000 | (*(uint *)&gen_args[2]) >> 0x10) >> 8 |
              ((*(uint *)&gen_args[2]) & 0xff00 | (*(uint *)&gen_args[2]) << 0x10) << 8;
  }
  sVar1 = F_00c4922b(&(*(uint *)&gen_args[2]),4,1,(*(undefined * PTR32 *)&gen_args[0]));
  return sVar1;
}

/* ref: FUN_004bfa40 */
uint F_004bfa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bfa40u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_size32 sVar1;
  
  if ((char)(*(undefined4 *)&gen_args[1]) != '\0') {
    (*(undefined4 *)&gen_args[1]) = CONCAT13((char)(*(undefined4 *)&gen_args[2]),
                       CONCAT12((char)((uint)(*(undefined4 *)&gen_args[2]) >> 8),CONCAT11((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 2)),(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3)))));
    (*(undefined4 *)&gen_args[2]) = (*(undefined4 *)&gen_args[1]);
  }
  sVar1 = F_00c4922b(&(*(undefined4 *)&gen_args[2]),4,1,(*(undefined * PTR32 *)&gen_args[0]));
  return sVar1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004bfae0 */
unsigned int F_004bfae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bfae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_004bfb20 */
uint F_004bfb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004bfb60 */
uint F_004bfb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_004bfba0 */
unsigned int F_004bfba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bfba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_004bfbd0 */
uint F_004bfbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfbd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfbe0 */
uint F_004bfbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfbe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfbf0 */
uint F_004bfbf0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfbf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfc00 */
uint F_004bfc00(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfc00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfc10 */
uint F_004bfc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfc10u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort * puVar1;
  
  puVar1 = param_1;
  if (*param_2 <= *param_1) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_004bfc30 */
uint F_004bfc30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfc30u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort * puVar1;
  
  puVar1 = param_1;
  if (*param_1 <= *param_2) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: FUN_004bfc50 */
byte F_004bfc50(void)
{
  GEN_ENTER(0x4bfc50u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfc60 */
byte F_004bfc60(void)
{
  GEN_ENTER(0x4bfc60u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfc90 */
byte F_004bfc90(void)
{
  GEN_ENTER(0x4bfc90u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfca0 */
byte F_004bfca0(void)
{
  GEN_ENTER(0x4bfca0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfcd0 */
byte F_004bfcd0(void)
{
  GEN_ENTER(0x4bfcd0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfce0 */
byte F_004bfce0(void)
{
  GEN_ENTER(0x4bfce0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_004bfd10 */
uint F_004bfd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfd10u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) - param_2;
  return in_ecx;
}

/* ref: FUN_004bfd50 */
uint F_004bfd50(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfd50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfd60 */
uint F_004bfd60(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfd60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfd70 */
uint F_004bfd70(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfd70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004bfd80 */
unsigned int F_004bfd80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bfd80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004bfda0 */
uint F_004bfda0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfdb0 */
uint F_004bfdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfdb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004bfdd0 */
uint F_004bfdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfdd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004bfdf0 */
uint F_004bfdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_004bfe10 */
uint F_004bfe10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4bfe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_004bfe50 */
uint F_004bfe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfe50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_004bfe60 */
uint F_004bfe60(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfe60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfe70 */
uint F_004bfe70(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfe70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfe80 */
uint F_004bfe80(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfe80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfe90 */
uint F_004bfe90(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfe90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfea0 */
uint F_004bfea0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfeb0 */
uint F_004bfeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x4bfeb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bfec0 */
byte F_004bfec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_004bfee0 */
uint F_004bfee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bfee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_004bff00 */
uint F_004bff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4bff00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_004bff40 */
uint F_004bff40(unsigned int gen_a0)
{
  GEN_ENTER(0x4bff40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_004bff50 */
unsigned int F_004bff50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12)
{
  GEN_ENTER(0x4bff50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x1d) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_6;
  *(undefined1 *)((int)this + 0x1f) = (undefined1)param_10;
  *(undefined1 *)((int)this + 0x1e) = (undefined1)param_9;
  *(undefined1 *)((int)this + 0x21) = (undefined1)param_12;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_11;
  *(undefined1 *)((int)this + 0x22) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return 0;
}

/* ref: FUN_004c0100 */
uint F_004c0100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x130) = *param_1;
  *(undefined4 *)((int)this + 0x134) = param_1[1];
  *(undefined4 *)((int)this + 0x138) = param_1[2];
  uVar1 = F_004bd580((undefined4 *)((int)this + 0x130));
  return uVar1;
}

/* ref: FUN_004c0130 */
unsigned int F_004c0130(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x4c0130u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x140) = param_2;
  *(float *)(in_ecx + 0x144) = param_3;
  return 0;
}

/* ref: FUN_004c0170 */
unsigned int F_004c0170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x18);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x18) = param_1;
  return 0;
}

/* ref: FUN_004c01a0 */
uint F_004c01a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c01a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x34 + 0x18 + in_ecx;
}

/* ref: FUN_004c01e0 */
uint F_004c01e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c01e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_004c0200 */
uint F_004c0200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x14) = *param_1;
  *(undefined4 *)((int)this + 0x18) = param_1[1];
  *(undefined4 *)((int)this + 0x1c) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x20) = uVar1;
  return uVar1;
}

/* ref: FUN_004c02a0 */
unsigned int F_004c02a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c02a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Render::FigureBase::vf0 */
uint F_004c02d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c02d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::FigurePlane::vf0 */
uint F_004c0330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::FigureSphere::vf0 */
uint F_004c0390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c03c0 */
uint F_004c03c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4c03c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[3] = (undefined4)gen_fl2bits(param_3);
  param_1[4] = (undefined4)gen_fl2bits(param_4);
  param_1[5] = (undefined4)gen_fl2bits(param_5);
  param_1[6] = (undefined4)gen_fl2bits(param_6);
  param_1[2] = uVar1;
  param_1[7] = (undefined4)gen_fl2bits(param_7);
  param_1[8] = param_8;
  return (uint)param_1;
}

/* ref: FUN_004c0420 */
uint F_004c0420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4c0420u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint param_6 = (uint)gen_a6;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  *(uint *)this =
       ((((param_6 & 1) * 2 | param_5 & 1) * 2 | param_4 & 1) * 4 | param_3 & 3) << 0x10 |
       (uint)*(ushort *)this;
  return (uint)this;
}

/* ref: FUN_004c0520 */
uint F_004c0520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x358 + 4 + in_ecx;
}

/* ref: FUN_004c0550 */
unsigned int F_004c0550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c0550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_004c0570 */
float F_004c0570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 < *(int *)((int)this + 0x24)) {
    return *(float *)((int)this + param_1 * 4 + 0x3c);
  }
  return *((float *)GEN_TOP(((int)this + *(int *)((int)this + 0x24) * 4 + 0x3c)));
}

/* ref: FUN_004c0590 */
byte F_004c0590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0590u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_004c05a0 */
uint F_004c05a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c05a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_2;
  if ((param_2 != 0) && (*(int *)(param_2 + 0xc) != 1)) {
    uVar1 = 0;
  }
  *(uint *)(in_ecx + 0x14) = uVar1;
  return uVar1;
}

/* ref: FUN_004c05c0 */
uint F_004c05c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c05c0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_2 + 0x85) * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  return (uint)puVar1;
}

/* ref: FUN_004c05f0 */
uint F_004c05f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c05f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((param_1 + 0x88) * 0x10 + (int)this)));
  *puVar1 = *param_2;
  puVar1[1] = param_2[1];
  puVar1[2] = param_2[2];
  puVar1[3] = param_2[3];
  return (uint)puVar1;
}

/* ref: FUN_004c0640 */
unsigned int F_004c0640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c0640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 8))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14c4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x14c4) = param_1;
  if (param_2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_2 + 8))(param_2);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x14c8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
  }
  *(int * PTR32 *)((int)this + 0x14c8) = param_2;
  return 0;
}

/* ref: FUN_004c06a0 */
uint F_004c06a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c06a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009cfa70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c06e0 */
float10 F_004c06e0(float gen_a0)
{
  GEN_ENTER(0x4c06e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_004a3320(param_1);
  return fVar1;
}

/* ref: FUN_004c0700 */
float10 F_004c0700(float gen_a0)
{
  GEN_ENTER(0x4c0700u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)REFG(double, 0x10944b8),(float10)(float)((float10)param_1 - (float10)REFG(double, 0x1088130))
                         )));
  return (float10)(float)fVar2;
}

/* ref: FUN_004c0730 */
float10 F_004c0730(float gen_a0)
{
  GEN_ENTER(0x4c0730u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  double dVar2;
  
  dVar2 = (GEN_X87MATH(((double)(float)((float10)param_1 / (float10)*(double *)&REFG(double, 0x10946a0))),0xd));
  return (float10)(float)((float10)param_1 -
                         (float10)(float)dVar2 * (float10)*(double *)&REFG(double, 0x10946a0));
}

/* ref: FUN_004c0790 */
unsigned int F_004c0790(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c0790u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  double dVar3;
  float10 fVar4;
  undefined4 local_10;
  
  dVar3 = (GEN_X87MATH(((double)(float)((float10)param_2 / (float10)*(double *)&REFG(double, 0x10946a0))),0xd));
  fVar1 = (float)((float10)param_2 - (float10)(float)dVar3 * (float10)*(double *)&REFG(double, 0x10946a0));
  dVar3 = (GEN_X87MATH(((double)(float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x10943e0))),0xd));
  local_10 = (undefined4)(longlong)TRUNC((float10)(float)dVar3);
  *param_1 = local_10;
  fVar4 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF((fVar4 - (float10)(longlong)(fVar4 / (float10)*(double *)&REFG(undefined, 0x10943e0)) *
                          (float10)*(double *)&REFG(undefined, 0x10943e0))));
  dVar3 = (GEN_X87MATH(((double)(float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x10943d8))),0xd));
  local_10 = (undefined4)(longlong)TRUNC((float10)(float)dVar3);
  param_1[1] = local_10;
  fVar4 = (float10)fVar1;
  param_1[2] = (undefined4)
               gen_fl2bits(((float)GEN_TOF((fVar4 - (float10)(longlong)
                                                    (fVar4 / (float10)*(double *)&REFG(undefined, 0x10943d8)) *
                                           (float10)*(double *)&REFG(undefined, 0x10943d8)))));
  return 0;
}

/* ref: FUN_004c0880 */
unsigned int F_004c0880(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c0880u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  return 0;
}

/* ref: FUN_004c0bf0 */
uint F_004c0bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0bf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0xbc) == (char)param_2) {
    return in_ecx + 0x94;
  }
  return 0;
}

/* ref: FUN_004c0c10 */
uint F_004c0c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(*(char *)(param_1 + 0xac + (int)this) != '\0');
}

/* ref: FUN_004c0c40 */
unsigned int F_004c0c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c0c40u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)*(float *)(&REFG(undefined, 0x10946a8) + (param_2 % 3) * 4) +
                                   (float10)*param_1) - (float10)*(double *)&REFG(undefined, 0x1080220)))) *
                 (float10)*(double *)&REFG(undefined, 0x1094610))));
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1094610) *
                 (float10)((float)GEN_TOF(-(float10)param_1[param_2 % 3 + 1])));
  fVar3 = ((float10)GEN_TOD(fcos((float10)fVar2)));
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  *param_3 = (float)((float10)(float)fVar4 * (float10)(float)fVar3);
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar2)));
  param_3[1] = (float)fVar4;
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  param_3[2] = (float)(-(float10)(float)fVar4 * (float10)(float)fVar3);
  return 0;
}

/* ref: FUN_004c0d30 */
float10 F_004c0d30(float gen_a0)
{
  GEN_ENTER(0x4c0d30u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(GEN_X87MATH((float10)(float)((float10)param_1 + (float10)REFG(double, 0x1088130)),3)));
  return (float10)(float)fVar2;
}

/* ref: FUN_004c0d50 */
float10 F_004c0d50(float gen_a0)
{
  GEN_ENTER(0x4c0d50u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)REFG(double, 0x10944b8),(float10)param_1)));
  return (float10)(float)((float10)(float)fVar2 - (float10)REFG(double, 0x1088130));
}

/* ref: FUN_004c0da0 */
unsigned int F_004c0da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0da0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)*param_1 - (float10)*(double *)&REFG(undefined, 0x1080220)) *
                 (float10)*(double *)&REFG(undefined, 0x1094610))));
  fVar2 = (float)((float10)*(double *)&REFG(undefined, 0x1094610) * (float10)((float)GEN_TOF(-(float10)param_1[1])));
  fVar3 = ((float10)GEN_TOD(fcos((float10)fVar2)));
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  *(float *)param_2 = (float)((float10)(float)fVar4 * (float10)(float)fVar3);
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar2)));
  *(float *)(param_2 + 4) = (float)fVar4;
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  *(float *)(param_2 + 8) = (float)(-(float10)(float)fVar4 * (float10)(float)fVar3);
  return 0;
}

/* ref: FUN_004c0e30 */
unsigned int F_004c0e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0e30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar2;
  
  F_004c0da0(param_1,param_2);
  fVar2 = ((float10)GEN_TOD(pow((float10)REFG(double, 0x10944b8),(float10)*(float *)(param_1 + 8))));
  fVar2 = (float10)(float)((float10)(float)fVar2 - (float10)REFG(double, 0x1088130));
  *(float *)param_2 = (float)(fVar2 * (float10)*(float *)param_2);
  *(float *)(param_2 + 4) = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * fVar2)));
  *(float *)(param_2 + 8) = ((float)GEN_TOF((fVar2 * (float10)*(float *)(param_2 + 8))));
  return 0;
}

/* ref: FUN_004c0ed0 */
uint F_004c0ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 8 + param_2 * 8;
}

/* ref: FUN_004c0ee0 */
uint F_004c0ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c0ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 8 + param_2 * 8;
}

/* ref: FUN_004c0f20 */
uint F_004c0f20(unsigned int gen_a0)
{
  GEN_ENTER(0x4c0f20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(float, 0x1301420) + param_1 * 4);
}

/* ref: FUN_004c0fb0 */
unsigned int F_004c0fb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c0fb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(float *)(in_ecx + 0xc) = param_2;
  if ((char)param_3 != '\0') {
    *(float *)(in_ecx + 8) = param_2;
    *(undefined1 *)(in_ecx + 0x28) = 1;
  }
  return 0;
}

/* ref: FUN_004c1010 */
float10 F_004c1010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (float10)*((float *)GEN_TOP((in_ecx + 0x254 + (param_2 & 1) * 4)));
}

/* ref: FUN_004c1050 */
uint F_004c1050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c1050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(uint *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return param_3;
}

/* ref: FUN_004c1070 */
float F_004c1070(unsigned int gen_a0)
{
  GEN_ENTER(0x4c1070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  return ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(uVar2 >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130))));
}

/* ref: FUN_004c10c0 */
float F_004c10c0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c10c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)((int)(uintptr_t)this) << 0xb ^ *(uint *)this;
  *(undefined4 *)this = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 8);
  uVar1 = *(uint *)((int)this + 0xc);
  uVar2 = (uVar1 >> 0xb ^ uVar2) >> 8 ^ uVar1 ^ uVar2;
  *(uint *)((int)this + 0xc) = uVar2;
  *(uint *)((int)this + 8) = uVar1;
  return ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(uVar2 >> 9 | 0x3f800000))) - (float10)REFG(double, 0x1088130))));
}

/* ref: FUN_004c1110 */
float10 F_004c1110(unsigned int gen_a0)
{
  GEN_ENTER(0x4c1110u, gen_a0, 0u, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  return (float10)(float)((float10)*in_ecx * (float10)*(double *)&REFG(undefined, 0x10928e8));
}

/* ref: FUN_004c1140 */
byte F_004c1140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4c1140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  *(undefined2 *)this = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  *(byte *)((int)this + 2) = bVar1;
  return bVar1;
}

/* ref: FUN_004c1170 */
uint F_004c1170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4c1170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  *in_ecx = *param_2;
  return (uint)param_2;
}

/* ref: FUN_004c1190 */
uint F_004c1190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1190u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  *param_1 = ((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)*param_2 +
                    (float10)*param_3 * (float10)param_4)));
  return (uint)param_2;
}

/* ref: FUN_004c11c0 */
uint F_004c11c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c11c0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF(((float10)*param_2 * ((float10)1 - fVar1) + (float10)*param_3 * fVar1)));
  param_1[1] = ((float)GEN_TOF((((float10)1 - fVar1) * (float10)param_2[1] + (float10)param_3[1] * fVar1)));
  return (uint)param_3;
}

/* ref: FUN_004c1210 */
uint F_004c1210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1210u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar2 = param_3[1];
  fVar4 = (float10)param_4;
  fVar1 = param_2[1];
  fVar5 = (float10)(float)((float10)1 - fVar4);
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)param_2[2]) +
                 (float10)(float)((float10)param_3[2] * fVar4))));
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)*param_2) +
                    (float10)(float)(fVar4 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar5) +
                      (float10)(float)((float10)fVar2 * fVar4))));
  param_1[2] = fVar3;
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_004c1330 */
uint F_004c1330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1330u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = param_3[1];
  fVar1 = param_2[1];
  fVar4 = param_3[2];
  fVar2 = param_2[2];
  fVar5 = (float10)param_4;
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *param_1 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)*param_2) +
                    (float10)(float)(fVar5 * (float10)*param_3))));
  param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)fVar1) +
                      (float10)(float)((float10)fVar3 * fVar5))));
  param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)fVar2) +
                      (float10)(float)((float10)fVar4 * fVar5))));
  fVar2 = param_3[4];
  fVar1 = param_2[4];
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)param_2[5]) +
                 (float10)(float)((float10)param_3[5] * fVar5))));
  param_1[3] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)param_2[3]) +
                      (float10)(float)((float10)param_3[3] * fVar5))));
  param_1[4] = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)fVar1) +
                      (float10)(float)((float10)fVar2 * fVar5))));
  param_1[5] = fVar3;
  return (uint)gen_fl2bits(fVar3);
}

/* ref: FUN_004c14e0 */
unsigned int F_004c14e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c14e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)(fVar2 * (float10)param_2[3] + (float10)param_3[3] * fVar1);
  return 0;
}

/* ref: FUN_004c15b0 */
float F_004c15b0(void)
{
  GEN_ENTER(0x4c15b0u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1375554) != 0) {
    return *(float *)(REFG(int, 0x1375554) + 0x20);
  }
  return 0.0;
}

/* ref: FUN_004c1700 */
uint F_004c1700(void)
{
  GEN_ENTER(0x4c1700u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(undefined4 *)(gen_frame + 0x34)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10946bc)));
  (*(undefined4 *)(gen_frame + 0x28)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10946b8)));
  (*(undefined4 *)(gen_frame + 0x38)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x10946b4)));
  (*(undefined4 *)(gen_frame + 0x2c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1088068)));
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x50)) = 0;
  (*(undefined4 *)(gen_frame + 0x54)) = 0x1010000;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  uVar1 = F_00697f80(&(*(undefined4 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar1;
}

/* ref: FUN_004c17b0 */
uint F_004c17b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c17b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0xa0 + 0xf8 + in_ecx);
}

/* ref: FUN_004c17d0 */
uint F_004c17d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c17d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0xa0 + 0xfc + in_ecx);
}

/* ref: FUN_004c17f0 */
float10 F_004c17f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c17f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(param_2 * 0xa0 + 0x10c + in_ecx);
}

/* ref: FUN_004c1810 */
float10 F_004c1810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (float10)*(float *)(param_2 * 0xa0 + 0x110 + in_ecx);
}

/* ref: FUN_004c1830 */
uint F_004c1830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this + *(int *)((int)this + param_1 * 4 + *(int *)this) + *(int *)this;
}

/* ref: FUN_004c1870 */
uint F_004c1870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: FUN_004c18a0 */
uint F_004c18a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c18a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 4) + in_ecx;
}

/* ref: FUN_004c1910 */
uint F_004c1910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 4)))) + *(int *)((int)this + 4);
}

/* ref: FUN_004c19e0 */
uint F_004c19e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c19e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 4)))) + *(int *)((int)this + 4);
}

/* ref: Singleton_VEnvManager_Environment_Graphics_Client_Graphics::vf0 */
uint F_004c1b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1094684));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c1bc0 */
uint F_004c1bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1bc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_004c1be0 */
uint F_004c1be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1be0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -(uint)((char)param_2 != '\0');
  return -(uint)((char)param_2 != '\0');
}

/* ref: FUN_004c1c00 */
unsigned int F_004c1c00(unsigned int gen_a0)
{
  GEN_ENTER(0x4c1c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (this_00 != (undefined *)0x0) {
    F_009cfa70(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Environment::EnvSoundSet::vf0 */
uint F_004c1c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvSoundState::vf0 */
uint F_004c1c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109462c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvState::vf0 */
uint F_004c1cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1094634));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvSet::vf0 */
uint F_004c1cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1094634));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvAmbientSet::vf0 */
uint F_004c1d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvSimulator::vf0 */
uint F_004c1d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1094644));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvRenderController::vf0 */
uint F_004c1d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109464c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c1dc0 */
uint F_004c1dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c1dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004bea00(in_ecx,param_2);
  return param_2;
}

/* ref: FUN_004c1e40 */
unsigned int F_004c1e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c1e40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  float fVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  F_004bea00(this,((undefined1 *)(gen_frame + 0x0)));
  fVar1 = F_004bead0(param_2,((undefined1 *)(gen_frame + 0x0)));
  *param_1 = fVar1;
  F_004bea00((int)this + 0x24,((undefined1 *)(gen_frame + 0x0)));
  fVar1 = F_004bead0(param_2,((undefined1 *)(gen_frame + 0x0)));
  param_1[1] = fVar1;
  F_004bea00((int)this + 0x48,((undefined1 *)(gen_frame + 0x0)));
  fVar1 = F_004bead0(param_2,((undefined1 *)(gen_frame + 0x0)));
  param_1[2] = fVar1;
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return 0;
}

/* ref: FUN_004c1f20 */
uint F_004c1f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1f20u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(float *)(param_1 + 2) =
       ((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)*(float *)(param_2 + 2) +
              (float10)*(float *)(param_3 + 4) * (float10)param_4)));
  return param_3;
}

/* ref: FUN_004c1f50 */
uint F_004c1f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1f50u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = *param_2;
  in_ecx[1] = (undefined4)
              gen_fl2bits(((float)GEN_TOF((((float10)1 - (float10)param_4) * ((float10)GEN_TOD(gen_bits2f(param_2[1])))
                                 + (float10)*(float *)(param_3 + 4) * (float10)param_4))));
  return param_3;
}

/* ref: FUN_004c1f80 */
uint F_004c1f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1f80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF(((float10)*param_2 * ((float10)1 - fVar1) + (float10)*param_3 * fVar1)));
  param_1[1] = ((float)GEN_TOF((((float10)1 - fVar1) * (float10)param_2[1] + (float10)param_3[1] * fVar1)));
  return (uint)param_3;
}

/* ref: FUN_004c1fd0 */
uint F_004c1fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c1fd0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)1 - fVar1;
  *param_1 = (float)((float10)*param_2 * fVar2 + (float10)*param_3 * fVar1);
  param_1[1] = (float)((float10)param_2[1] * fVar2 + (float10)param_3[1] * fVar1);
  param_1[2] = (float)(fVar2 * (float10)param_2[2] + (float10)param_3[2] * fVar1);
  return (uint)param_3;
}

/* ref: FUN_004c2010 */
uint F_004c2010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c2010u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_004c1210(param_1,param_2,param_3,param_4);
  *(float *)(param_1 + 0xc) =
       ((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)*(float *)(param_2 + 0xc) +
              (float10)*(float *)(param_3 + 0xc) * (float10)param_4)));
  return uVar1;
}

/* ref: FUN_004c2050 */
uint F_004c2050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c2050u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  uint uVar1;
  
  uVar1 = F_004c1330(param_1,param_2,param_3,param_4);
  *(float *)(param_1 + 0x18) =
       ((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)*(float *)(param_2 + 0x18) +
              (float10)*(float *)(param_3 + 0x18) * (float10)param_4)));
  return uVar1;
}

/* ref: FUN_004c2090 */
unsigned int F_004c2090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x4c2090u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)(float)((float10)1 - fVar1);
  *param_1 = (float)((float10)*param_3 * fVar1 + fVar2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3[1] * fVar1 + (float10)param_2[1] * fVar2);
  param_1[2] = (float)((float10)param_3[2] * fVar1 + (float10)param_2[2] * fVar2);
  param_1[3] = (float)((float10)param_3[3] * fVar1 + fVar2 * (float10)param_2[3]);
  param_1[4] = ((float)GEN_TOF((((float10)1 - fVar1) * (float10)param_2[4] + (float10)param_3[4] * fVar1)));
  return 0;
}

/* ref: FUN_004c2100 */
uint F_004c2100(unsigned int gen_a0)
{
  GEN_ENTER(0x4c2100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 0xc) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x30) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x30),0,0);
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  return uVar2;
}

/* ref: FUN_004c2150 */
uint F_004c2150(unsigned int gen_a0)
{
  GEN_ENTER(0x4c2150u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar2;
}

/* ref: FUN_004c21a0 */
uint F_004c21a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c21a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x1c),0,0);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_004c21e0 */
unsigned int F_004c21e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c21e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00982b20(*(undefined * PTR32 *)((int)this + 0x24));
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return 0;
}

/* ref: FUN_004c2240 */
uint F_004c2240(unsigned int gen_a0)
{
  GEN_ENTER(0x4c2240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  *(undefined4 *)this = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4),500);
    *(undefined4 *)((int)this + 4) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1,0);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x78))))(*(int * PTR32 *)((int)this + 0xc),500);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x24),0,0);
    *(undefined4 *)((int)this + 0x24) = 0;
  }
  return uVar2;
}

/* ref: FUN_004c22f0 */
byte F_004c22f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c22f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_004c2310 */
byte F_004c2310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c2310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_004c2330 */
byte F_004c2330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c2330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_004c2380 */
uint F_004c2380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c2380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004c23a0 */
uint F_004c23a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c23a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c23e0 */
uint F_004c23e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c23e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c2420 */
uint F_004c2420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c2420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004c2440 */
uint F_004c2440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c2480 */
uint F_004c2480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c2480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_004c24a0 */
byte F_004c24a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c24a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x34;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x30 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab2a0((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x34;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c25a0 */
byte F_004c25a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c25a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x38;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x34 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab3d0((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x38;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c26a0 */
byte F_004c26a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c26a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x28;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x24 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab510((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x28;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c27a0 */
byte F_004c27a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c27a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x2c;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x28 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab5c0((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c28a0 */
byte F_004c28a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c28a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x24;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x20 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab660((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x24;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c29a0 */
byte F_004c29a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c29a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x2c;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x28 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab710((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x2c;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c2aa0 */
byte F_004c2aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2aa0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x34;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x30 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab7f0((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x34;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c2ba0 */
byte F_004c2ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar7;
  uint uVar8;
  int iVar9;
  float10 fVar10;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar5 = (ulonglong)(uint)param_1[1] * 0x10;
      uVar8 = F_00406bb0(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5,0,0);
      *param_2 = uVar8;
      if (uVar8 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar8 = 0;
  if (*param_3 != 0) {
    iVar9 = 0;
    do {
      iVar2 = *param_1;
      iVar3 = *(int *)((int)param_1 + uVar8 * 4 + iVar2);
      iVar7 = iVar3 + iVar2;
      *(undefined4 *)(iVar9 + 0xc + *param_2) = *(undefined4 *)((int)param_1 + iVar3 + iVar2);
      uVar4 = *param_2;
      uVar1 = *(undefined4 *)((int)param_1 + iVar7 + 4);
      *(undefined4 *)(uVar4 + 4 + iVar9) = 0;
      *(undefined4 *)(uVar4 + iVar9) = uVar1;
      fVar10 = ((float10)GEN_TOD(GEN_X87MATH( (float10)((float)GEN_TOF(((float10)*(float *)((int)param_1 + iVar7 + 0xc) + (float10)REFG(double, 0x1088130)))),3)));
      *(float *)(uVar4 + 8 + iVar9) = (float)fVar10;
      uVar8 = uVar8 + 1;
      iVar9 = iVar9 + 0x10;
    } while (uVar8 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c2cb0 */
byte F_004c2cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2cb0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar4 = (ulonglong)(uint)param_1[1] * 0x10;
      uVar6 = F_00406bb0(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4,0,0);
      *param_2 = uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar6 = 0;
  if (*param_3 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar6 * 4 + iVar1);
      iVar5 = iVar2 + iVar1;
      *(undefined4 *)(iVar7 + 0xc + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      uVar3 = *param_2;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(uVar3 + iVar7) = *(undefined4 *)((int)param_1 + iVar5 + 0xc);
      iVar7 = iVar7 + 0x10;
      *((undefined4 *)GEN_TOP(((uVar3 - 0xc) + iVar7))) = *(undefined4 *)((int)param_1 + iVar5 + 8);
      *((undefined4 *)GEN_TOP(((uVar3 - 8) + iVar7))) = *(undefined4 *)((int)param_1 + iVar5 + 0x10);
    } while (uVar6 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c2da0 */
byte F_004c2da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2da0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x1c;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      iVar4 = iVar2 + iVar1;
      *(undefined4 *)(iVar7 + 0x18 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      puVar6 = (undefined4 *)(*param_2 + iVar7);
      *puVar6 = *(undefined4 *)((int)param_1 + iVar4 + 4);
      uVar5 = uVar5 + 1;
      iVar7 = iVar7 + 0x1c;
      puVar6[1] = *(undefined4 *)((int)param_1 + iVar4 + 8);
      puVar6[2] = *(undefined4 *)((int)param_1 + iVar4 + 0xc);
      puVar6[3] = *(undefined4 *)((int)param_1 + iVar4 + 0x10);
      puVar6[4] = *(undefined4 *)((int)param_1 + iVar4 + 0x14);
      puVar6[5] = *(undefined4 *)((int)param_1 + iVar4 + 0x18);
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c2ea0 */
byte F_004c2ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c2ea0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar5 = (ulonglong)(uint)param_1[1] * 0x30;
      uVar7 = F_00406bb0(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5,0,0);
      *param_2 = uVar7;
      if (uVar7 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar7 = 0;
  if (*param_3 != 0) {
    fVar10 = (float10)*(double *)&REFG(undefined, 0x1088100);
    iVar9 = 0;
    do {
      iVar3 = *param_1;
      iVar8 = *(int *)((int)param_1 + uVar7 * 4 + iVar3);
      iVar6 = iVar8 + iVar3;
      *(undefined4 *)(iVar9 + 0x2c + *param_2) = *(undefined4 *)((int)param_1 + iVar8 + iVar3);
      uVar4 = *param_2;
      iVar3 = *(int *)((int)param_1 + iVar6 + 0x14);
      *(undefined4 *)(uVar4 + iVar9) = *(undefined4 *)((int)param_1 + iVar6 + 4);
      iVar8 = uVar4 + iVar9;
      uVar7 = uVar7 + 1;
      *(undefined4 *)(iVar8 + 4) = *(undefined4 *)((int)param_1 + iVar6 + 8);
      iVar9 = iVar9 + 0x30;
      *(undefined4 *)(iVar8 + 8) = *(undefined4 *)((int)param_1 + iVar6 + 0xc);
      *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)((int)param_1 + iVar6 + 0x10);
      bVar1 = *(byte *)((int)param_1 + iVar3 + 1 + iVar6);
      bVar2 = *(byte *)((int)param_1 + iVar3 + 2 + iVar6);
      *(float *)(iVar8 + 0x10) = ((float)GEN_TOF(((float10)*(byte *)((int)param_1 + iVar3 + iVar6) / fVar10)));
      *(float *)(iVar8 + 0x14) = (float)((float10)bVar1 / fVar10);
      *(float *)(iVar8 + 0x18) = (float)((float10)bVar2 / fVar10);
      *(undefined4 *)(iVar8 + 0x1c) = *(undefined4 *)((int)param_1 + iVar6 + 0x18);
      *(undefined4 *)(iVar8 + 0x20) = *(undefined4 *)((int)param_1 + iVar6 + 0x1c);
      *(undefined4 *)(iVar8 + 0x24) = *(undefined4 *)((int)param_1 + iVar6 + 0x20);
      *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)((int)param_1 + iVar6 + 0x24);
    } while (uVar7 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c3010 */
byte F_004c3010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3010u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined2 * puVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 8;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      iVar4 = iVar2 + iVar1;
      *(undefined4 *)(*param_2 + 4 + uVar5 * 8) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      puVar6 = (undefined2 *)(*param_2 + uVar5 * 8);
      *puVar6 = *(undefined2 *)((int)param_1 + iVar4 + 4);
      *(bool *)(puVar6 + 1) = *(char *)((int)param_1 + iVar4 + 6) != '\0';
      uVar5 = uVar5 + 1;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c3100 */
byte F_004c3100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3100u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 8;
      uVar4 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar4 = 0;
  if (*param_3 != 0) {
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar4 * 4 + iVar1);
      *(undefined4 *)(*param_2 + 4 + uVar4 * 8) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      uVar4 = uVar4 + 1;
      *((undefined4 *)GEN_TOP(((*param_2 - 8) + uVar4 * 8))) =
           *(undefined4 *)((int)param_1 + iVar2 + iVar1 + 4);
    } while (uVar4 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c31d0 */
byte F_004c31d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c31d0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 8;
      uVar4 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar4;
      if (uVar4 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar4 = 0;
  if (*param_3 != 0) {
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar4 * 4 + iVar1);
      *(undefined4 *)(*param_2 + 4 + uVar4 * 8) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      uVar4 = uVar4 + 1;
      *((undefined4 *)GEN_TOP(((*param_2 - 8) + uVar4 * 8))) =
           *(undefined4 *)((int)param_1 + iVar2 + iVar1 + 4);
    } while (uVar4 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c32a0 */
byte F_004c32a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c32a0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar4 = (ulonglong)(uint)param_1[1] * 0xc;
      uVar6 = F_00406bb0(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4,0,0);
      *param_2 = uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar6 = 0;
  if (*param_3 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar6 * 4 + iVar1);
      iVar5 = iVar2 + iVar1;
      *(undefined4 *)(iVar7 + 8 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      uVar3 = *param_2;
      uVar6 = uVar6 + 1;
      *(undefined4 *)(uVar3 + iVar7) = *(undefined4 *)((int)param_1 + iVar5 + 4);
      iVar7 = iVar7 + 0xc;
      *((undefined4 *)GEN_TOP(((uVar3 - 8) + iVar7))) = *(undefined4 *)((int)param_1 + iVar5 + 8);
    } while (uVar6 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c3380 */
byte F_004c3380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3380u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  
  if ((param_1 == 0) || (*(uint *)(param_1 + 4) == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < *(uint *)(param_1 + 4)) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < (int)*(uint *)(param_1 + 4)) && (*param_2 == 0)) {
      lVar5 = (ulonglong)*(uint *)(param_1 + 4) * 0x10;
      uVar6 = F_00406bb0(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5,0,0);
      *param_2 = uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 4);
  }
  uVar6 = 0;
  if (*param_3 != 0) {
    fVar11 = (float10)*(double *)&REFG(undefined, 0x1088100);
    iVar10 = 0;
    do {
      iVar7 = *(int *)param_1 + param_1;
      iVar3 = *(int *)(iVar7 + uVar6 * 4);
      iVar9 = iVar3 + iVar7;
      *(undefined4 *)(iVar10 + 0xc + *param_2) = *(undefined4 *)(iVar3 + iVar7);
      pbVar8 = ((byte *)GEN_TOP((*(int *)(iVar9 + 4) + iVar9)));
      fVar12 = (float10)*((float *)GEN_TOP((*(int *)(iVar9 + 4) + 4 + iVar9)));
      bVar1 = pbVar8[1];
      bVar2 = pbVar8[2];
      uVar6 = uVar6 + 1;
      iVar10 = iVar10 + 0x10;
      uVar4 = *param_2;
      *((float *)GEN_TOP(((uVar4 - 0x10) + iVar10))) = ((float)GEN_TOF((((float10)*pbVar8 * fVar12) / fVar11)));
      *((float *)GEN_TOP(((uVar4 - 0xc) + iVar10))) = ((float)GEN_TOF((((float10)bVar1 * fVar12) / fVar11)));
      *((float *)GEN_TOP(((uVar4 - 8) + iVar10))) = ((float)GEN_TOF((((float10)bVar2 * fVar12) / fVar11)));
    } while (uVar6 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c34c0 */
byte F_004c34c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c34c0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == (int *)0x0) || (param_1[1] == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < (uint)param_1[1]) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < param_1[1]) && (*param_2 == 0)) {
      lVar3 = (ulonglong)(uint)param_1[1] * 0x1c;
      uVar5 = F_00406bb0(-(uint)((int)((ulonglong)lVar3 >> 0x20) != 0) | (uint)lVar3,0,0);
      *param_2 = uVar5;
      if (uVar5 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 1);
  }
  uVar5 = 0;
  if (*param_3 != 0) {
    iVar6 = 0;
    do {
      iVar1 = *param_1;
      iVar2 = *(int *)((int)param_1 + uVar5 * 4 + iVar1);
      *(undefined4 *)(iVar6 + 0x18 + *param_2) = *(undefined4 *)((int)param_1 + iVar2 + iVar1);
      bVar4 = F_004ab9e0((int)param_1 + iVar2 + iVar1,*param_2 + iVar6);
      if (bVar4 == 0) {
        if (*param_2 != 0) {
          F_00406b30(*param_2);
          *param_2 = 0;
        }
        *param_3 = 0;
        return 0;
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x1c;
    } while (uVar5 < *param_3);
  }
  return 1;
}

/* ref: FUN_004c35c0 */
byte F_004c35c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c35c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte * pbVar8;
  float * pfVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  
  if ((param_1 == 0) || (*(uint *)(param_1 + 4) == 0)) {
    if (*param_2 != 0) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    *param_3 = 0;
  }
  else {
    if (((uint)*param_3 < *(uint *)(param_1 + 4)) && (*param_2 != 0)) {
      F_00406b30(*param_2);
      *param_2 = 0;
    }
    if ((0 < (int)*(uint *)(param_1 + 4)) && (*param_2 == 0)) {
      lVar5 = (ulonglong)*(uint *)(param_1 + 4) * 0x14;
      uVar6 = F_00406bb0(-(uint)((int)((ulonglong)lVar5 >> 0x20) != 0) | (uint)lVar5,0,0);
      *param_2 = uVar6;
      if (uVar6 == 0) {
        return 0;
      }
    }
    *param_3 = *(ushort *)(param_1 + 4);
  }
  uVar6 = 0;
  if (*param_3 != 0) {
    fVar12 = (float10)*(double *)&REFG(undefined, 0x1088100);
    iVar11 = 0;
    do {
      iVar7 = *(int *)param_1 + param_1;
      iVar4 = *(int *)(iVar7 + uVar6 * 4);
      iVar10 = iVar4 + iVar7;
      *(undefined4 *)(iVar11 + 0x10 + *param_2) = *(undefined4 *)(iVar4 + iVar7);
      pbVar8 = ((byte *)GEN_TOP((*(int *)(iVar10 + 4) + iVar10)));
      fVar13 = (float10)*((float *)GEN_TOP((*(int *)(iVar10 + 4) + 4 + iVar10)));
      bVar1 = pbVar8[1];
      bVar2 = pbVar8[2];
      bVar3 = pbVar8[3];
      uVar6 = uVar6 + 1;
      pfVar9 = (float *)(*param_2 + iVar11);
      *pfVar9 = ((float)GEN_TOF((((float10)*pbVar8 * fVar13) / fVar12)));
      pfVar9[1] = ((float)GEN_TOF((((float10)bVar1 * fVar13) / fVar12)));
      iVar11 = iVar11 + 0x14;
      pfVar9[2] = ((float)GEN_TOF((((float10)bVar2 * fVar13) / fVar12)));
      pfVar9[3] = (float)((float10)bVar3 / fVar12);
    } while (uVar6 < *param_3);
  }
  return 1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004c3720 */
unsigned int F_004c3720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004c3740 */
uint F_004c3740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3760 */
uint F_004c3760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3780 */
uint F_004c3780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3780u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  ushort * puVar1;
  
  puVar1 = param_1;
  if (*param_3 <= *param_1) {
    puVar1 = param_3;
  }
  if (*puVar1 <= *param_2) {
    puVar1 = param_2;
  }
  return (uint)puVar1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_004c37d0 */
unsigned int F_004c37d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c37d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_004c38a0 */
uint F_004c38a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c38a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return param_1;
}

/* ref: FUN_004c38b0 */
uint F_004c38b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c38b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c38d0 */
uint F_004c38d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c38d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c38f0 */
uint F_004c38f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c38f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3910 */
uint F_004c3910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3930 */
uint F_004c3930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3950 */
uint F_004c3950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_004c3970 */
uint F_004c3970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_004c3990 */
uint F_004c3990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x4c3990u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  *param_7 = *param_7 + (param_6 - param_3);
  return param_6 - param_3;
}

/* ref: FUN_004c39b0 */
uint F_004c39b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c39b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) - *(int *)(param_1 + 4);
}

/* ref: FUN_004c39d0 */
uint F_004c39d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c39d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + param_2;
  return in_ecx;
}

/* ref: FUN_004c3a10 */
uint F_004c3a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3a10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_004c3a80 */
uint F_004c3a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3a80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x1514) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_004c3ac0 */
unsigned int F_004c3ac0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c3ac0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  gen_args[2] = gen_a2;
  uintptr_t gen_esp0 = (uintptr_t)gen_args - 4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float fVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  
  fVar3 = REFG(float, 0x1087f04);
  fVar1 = *(*(float * PTR32 *)&gen_args[0]);
  (*(float *)(gen_frame + 0x4)) = fVar1;
  if (fVar1 <= 0.0) {
    if ((char)(*(uint *)&gen_args[2]) == '\0') {
      (*(float * PTR32 *)&gen_args[0])[2] = REFG(float, 0x1087f04);
      (*(float * PTR32 *)&gen_args[0])[3] = fVar3;
      return 0;
    }
    (*(float * PTR32 *)&gen_args[0])[3] = 0.0;
    return 0;
  }
  fVar2 = (*(float * PTR32 *)&gen_args[0])[1];
  (*(float *)(gen_frame + 0x8)) = fVar2;
  if (GEN_ISNAN(fVar2) == (GEN_ISNAN(fVar2) || fVar2 == 0.0)) {
    fVar5 = ((float10)(*(float *)&gen_args[1]) * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[2]))) / (float10)fVar2;
  }
  else {
    fVar5 = (float10)(*(float *)&gen_args[1]) / (float10)fVar1;
  }
  fVar6 = (float10)(*(float *)&gen_args[1]);
  fVar1 = (*(float * PTR32 *)&gen_args[0])[2];
  (*(float *)(gen_frame + 0x4)) = fVar1;
  fVar7 = REFG(float, 0x1087f04);
  if (fVar1 < REFG(float, 0x1087f04)) {
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
    pfVar4 = &(*(float *)&gen_args[1]);
    fVar7 = ((float)GEN_TOF(((float10)(float)fVar5 / ((float10)1 - (float10)fVar1))));
    (*(float *)&gen_args[1]) = fVar7;
    if (!((float10)fVar7 < (float10)1)) {
      pfVar4 = &(*(float *)(gen_frame + 0x4));
    }
    fVar7 = *pfVar4;
  }
  (*(float * PTR32 *)&gen_args[0])[3] = fVar7;
  (*(float * PTR32 *)&gen_args[0])[1] = (float)((float10)fVar2 + fVar6);
  fVar1 = (float)((float10)(float)fVar5 + (float10)fVar1);
  (*(float *)&gen_args[1]) = fVar1;
  (*(float * PTR32 *)&gen_args[0])[2] = fVar1;
  if (((char)(*(uint *)&gen_args[2]) != '\0') && (fVar3 <= fVar1)) {
    *(*(float * PTR32 *)&gen_args[0]) = 0.0;
    (*(float * PTR32 *)&gen_args[0])[1] = 0.0;
    (*(float * PTR32 *)&gen_args[0])[2] = 0.0;
    return 0;
  }
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar3);
  pfVar4 = (float *)gen_esp0;
  if (!((float10)1 < ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[0])[2])))) {
    pfVar4 = (*(float * PTR32 *)&gen_args[0]);
  }
  (*(float * PTR32 *)&gen_args[0])[2] = pfVar4[2];
  return 0;
}

/* ref: FUN_004c3d90 */
uint F_004c3d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 0x9d0) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_004c3db0 */
uint F_004c3db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c3db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return (uint)this;
}

/* ref: FUN_004c3dd0 */
uint F_004c3dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_004c3f10 */
uint F_004c3f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  sVar1 = *(short *)((int)this + 10);
  uVar4 = 0;
  ((uint *)(gen_frame + 0x4))[0] = (int)sVar1;
  ((uint *)(gen_frame + 0x4))[1] = 0;
  puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  if (-1 < sVar1) {
    puVar2 = ((uint *)(gen_frame + 0x4));
  }
  uVar3 = *puVar2;
  if (*(ushort *)((int)this + 8) != 0) {
    do {
      if (*(char *)(*(int *)this + uVar3) == (char)param_1) {
        *(short *)((int)this + 10) = (short)uVar3;
        return (int)(short)uVar3;
      }
      uVar3 = (uVar3 + 1) % (uint)*(ushort *)((int)this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)this + 8));
  }
  *(undefined2 *)((int)this + 10) = 0xffff;
  return 0xffffffff;
}

/* ref: FUN_004c3f80 */
uint F_004c3f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  sVar1 = *(short *)((int)this + 10);
  uVar4 = 0;
  ((uint *)(gen_frame + 0x4))[0] = (int)sVar1;
  ((uint *)(gen_frame + 0x4))[1] = 0;
  puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  if (-1 < sVar1) {
    puVar2 = ((uint *)(gen_frame + 0x4));
  }
  uVar3 = *puVar2;
  if (*(ushort *)((int)this + 8) != 0) {
    do {
      if (*(char *)(*(int *)this + uVar3) == (char)param_1) {
        *(short *)((int)this + 10) = (short)uVar3;
        return (int)(short)uVar3;
      }
      uVar3 = (uVar3 + 1) % (uint)*(ushort *)((int)this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)this + 8));
  }
  *(undefined2 *)((int)this + 10) = 0xffff;
  return 0xffffffff;
}

/* ref: FUN_004c3ff0 */
uint F_004c3ff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c3ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  short sVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  sVar1 = *(short *)((int)this + 10);
  uVar4 = 0;
  ((uint *)(gen_frame + 0x4))[0] = (int)sVar1;
  ((uint *)(gen_frame + 0x4))[1] = 0;
  puVar2 = ((uint *)(gen_frame + 0x4)) + 1;
  if (-1 < sVar1) {
    puVar2 = ((uint *)(gen_frame + 0x4));
  }
  uVar3 = *puVar2;
  if (*(ushort *)((int)this + 8) != 0) {
    do {
      if (*(char *)(*(int *)this + uVar3) == (char)param_1) {
        *(short *)((int)this + 10) = (short)uVar3;
        return (int)(short)uVar3;
      }
      uVar3 = (uVar3 + 1) % (uint)*(ushort *)((int)this + 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)((int)this + 8));
  }
  *(undefined2 *)((int)this + 10) = 0xffff;
  return 0xffffffff;
}

/* ref: FUN_004c4060 */
uint F_004c4060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c4060u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * pfVar1;
  
  pfVar1 = param_1;
  if (!((float10)*param_1 < (float10)*param_3)) {
    pfVar1 = param_3;
  }
  if (!((float10)*param_2 < (float10)*pfVar1)) {
    pfVar1 = param_2;
  }
  return (uint)pfVar1;
}

/* ref: FUN_004c4090 */
byte F_004c4090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c4090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if (*param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return 1;
  }
  piVar3 = (int *)(*param_1 + 0x8c);
  iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
  iVar2 = *param_1;
  if (iVar1 < 8) {
    piVar3 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
    if (iVar1 == 2) {
      piVar3 = *(int * PTR32 *)(*param_1 + 0xfc);
      *(int * PTR32 *)((int)this + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        return 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3);
      return 1;
    }
  }
  else if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *param_1 = 0;
  }
  return 0;
}

/* ref: FUN_004c4110 */
uint F_004c4110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c4110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004c4140 */
uint F_004c4140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c4140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: Client::Graphics::Environment::EnvManager::vf0 */
uint F_004c4170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109476c));
  F_0061e3f0(this + 0x9ec);
  *(undefined * PTR32 * PTR32 *)(this + 0x9e0) = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  *(undefined * PTR32 * PTR32 *)(this + 0x9d4) = (*(undefined * PTR32 (*)[1])REFP(0x109468c));
  F_00622210(this + 0x880);
  *(undefined * PTR32 * PTR32 *)(this + 0x360) = (*(undefined * PTR32 (*)[1])REFP(0x1094644));
  *(undefined * PTR32 * PTR32 *)(this + 800) = (*(undefined * PTR32 (*)[1])REFP(0x109462c));
  *(undefined * PTR32 * PTR32 *)(this + 0x44) = (*(undefined * PTR32 (*)[1])REFP(0x1094634));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1094684));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c41e0 */
uint F_004c41e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c41e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004c4210 */
byte F_004c4210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c4210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int * piVar6;
  int * piVar7;
  byte bVar8;
  float * pfVar9;
  bool bVar10;
  float10 fVar11;
  float fVar12;
  
  fVar12 = REFG(float, 0x1087f04);
  bVar8 = 1;
  if ((*(int * PTR32 *)&gen_args[0])[8] != *(*(int * PTR32 *)&gen_args[0])) {
    if ((*(int * PTR32 *)&gen_args[0])[8] == (*(int * PTR32 *)&gen_args[0])[3]) {
      iVar3 = *(*(int * PTR32 *)&gen_args[0]);
      fVar11 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[6])));
      iVar4 = (*(int * PTR32 *)&gen_args[0])[1];
      iVar5 = (*(int * PTR32 *)&gen_args[0])[2];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[3];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[4];
      (*(int * PTR32 *)&gen_args[0])[3] = iVar3;
      (*(int * PTR32 *)&gen_args[0])[4] = iVar4;
      (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[5];
      (*(int * PTR32 *)&gen_args[0])[5] = iVar5;
    }
    else {
      if ((0.0 < gen_bits2f((*(int * PTR32 *)&gen_args[0])[0xb])) &&
         (pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 6))),
         (!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar1)) &&
         (!(REFG(float, 0x1087f04) < *pfVar1) && REFG(uint, 0x1087f04) != *pfVar1))) goto LAB_004c430c;
      piVar7 = (*(int * PTR32 *)&gen_args[0]) + 0xc;
      bVar8 = F_004c4090((*(int * PTR32 *)&gen_args[0]) + 8,piVar7);
      (*(byte *)(gen_frame + 0xb)) = bVar8;
      fVar12 = REFG(float, 0x1087f04);
      if (bVar8 == 0) goto LAB_004c4365;
      piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[4]));
      (*(int * PTR32 *)&gen_args[0])[3] = 0;
      if (piVar6 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
        (*(int * PTR32 *)&gen_args[0])[4] = 0;
      }
      (*(int * PTR32 *)&gen_args[0])[3] = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0])[4] = (*(int * PTR32 *)&gen_args[0])[1];
      (*(int * PTR32 *)&gen_args[0])[5] = (*(int * PTR32 *)&gen_args[0])[2];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[8];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[9];
      (*(int * PTR32 *)&gen_args[0])[2] = (*(int * PTR32 *)&gen_args[0])[10];
      if (*piVar7 != 0) {
        F_0050c620(*piVar7,0,0);
        *piVar7 = 0;
      }
      fVar11 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[6])));
      fVar12 = REFG(float, 0x1087f04);
      bVar8 = (*(byte *)(gen_frame + 0xb));
    }
    (*(int * PTR32 *)&gen_args[0])[6] = (int)gen_fl2bits((float)fVar11);
    (*(int * PTR32 *)&gen_args[0])[7] = (*(int * PTR32 *)&gen_args[0])[0xb];
  }
LAB_004c430c: ;
  fVar11 = (float10)1;
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[7]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  if (!(fVar2 < REFG(float, 0x10947f8))) {
    fVar11 = (float10)(*(float *)&gen_args[1]) / (float10)fVar2;
  }
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[6]);
  (*(float *)&gen_args[1]) = fVar12;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar9 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 6)));
  (*(int * PTR32 *)&gen_args[0])[6] = (int)gen_fl2bits((float)(fVar11 + (float10)fVar2));
  pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 6)));
  if ((GEN_ISNAN(fVar12) || GEN_ISNAN(*pfVar1)) || (fVar12 < *pfVar1 || fVar12 == *pfVar1)) {
    pfVar9 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar9)) {
    pfVar9 = &(*(float *)(gen_frame + 0x4));
  }
  (*(int * PTR32 *)&gen_args[0])[6] = (int)gen_fl2bits(*pfVar9);
LAB_004c4365: ;
  bVar10 = GEN_ISNAN(gen_bits2f((*(int * PTR32 *)&gen_args[0])[6])) || GEN_ISNAN(fVar12);
  if (bVar10 != (bVar10 || gen_bits2f((*(int * PTR32 *)&gen_args[0])[6]) == fVar12)) {
    piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[4]));
    (*(int * PTR32 *)&gen_args[0])[3] = 0;
    if (piVar7 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7);
      (*(int * PTR32 *)&gen_args[0])[4] = 0;
    }
  }
  return bVar8;
}

/* ref: FUN_004c43a0 */
byte F_004c43a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c43a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  byte bVar7;
  float * pfVar8;
  bool bVar9;
  float10 fVar10;
  float fVar11;
  
  fVar11 = REFG(float, 0x1087f04);
  bVar7 = 1;
  if ((*(int * PTR32 *)&gen_args[0])[6] != *(*(int * PTR32 *)&gen_args[0])) {
    if ((*(int * PTR32 *)&gen_args[0])[6] == (*(int * PTR32 *)&gen_args[0])[2]) {
      iVar3 = *(*(int * PTR32 *)&gen_args[0]);
      fVar10 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      iVar4 = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[2];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[3];
      (*(int * PTR32 *)&gen_args[0])[2] = iVar3;
      (*(int * PTR32 *)&gen_args[0])[3] = iVar4;
    }
    else {
      if ((0.0 < gen_bits2f((*(int * PTR32 *)&gen_args[0])[8])) &&
         (pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4))),
         (!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar1)) &&
         (!(REFG(float, 0x1087f04) < *pfVar1) && REFG(uint, 0x1087f04) != *pfVar1))) goto LAB_004c4484;
      piVar6 = (*(int * PTR32 *)&gen_args[0]) + 9;
      bVar7 = F_004c4090((*(int * PTR32 *)&gen_args[0]) + 6,piVar6);
      (*(byte *)(gen_frame + 0xb)) = bVar7;
      fVar11 = REFG(float, 0x1087f04);
      if (bVar7 == 0) goto LAB_004c44dd;
      piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3]));
      (*(int * PTR32 *)&gen_args[0])[2] = 0;
      if (piVar5 != (int *)0x0) {
        ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
        (*(int * PTR32 *)&gen_args[0])[3] = 0;
      }
      (*(int * PTR32 *)&gen_args[0])[2] = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0])[3] = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[6];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[7];
      if (*piVar6 != 0) {
        F_0050c620(*piVar6,0,0);
        *piVar6 = 0;
      }
      fVar10 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      fVar11 = REFG(float, 0x1087f04);
      bVar7 = (*(byte *)(gen_frame + 0xb));
    }
    (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)fVar10);
    (*(int * PTR32 *)&gen_args[0])[5] = (*(int * PTR32 *)&gen_args[0])[8];
  }
LAB_004c4484: ;
  fVar10 = (float10)1;
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[5]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  if (!(fVar2 < REFG(float, 0x10947f8))) {
    fVar10 = (float10)(*(float *)&gen_args[1]) / (float10)fVar2;
  }
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]);
  (*(float *)&gen_args[1]) = fVar11;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar8 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)(fVar10 + (float10)fVar2));
  pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  if ((GEN_ISNAN(fVar11) || GEN_ISNAN(*pfVar1)) || (fVar11 < *pfVar1 || fVar11 == *pfVar1)) {
    pfVar8 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar8)) {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits(*pfVar8);
LAB_004c44dd: ;
  bVar9 = GEN_ISNAN(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])) || GEN_ISNAN(fVar11);
  if (bVar9 != (bVar9 || gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]) == fVar11)) {
    piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3]));
    (*(int * PTR32 *)&gen_args[0])[2] = 0;
    if (piVar6 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      (*(int * PTR32 *)&gen_args[0])[3] = 0;
    }
  }
  return bVar7;
}

/* ref: FUN_004c4520 */
byte F_004c4520(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c4520u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int * piVar1;
  float fVar2;
  float fVar3;
  int * piVar4;
  byte bVar5;
  float * pfVar6;
  float * pfVar7;
  float10 fVar8;
  
  fVar3 = REFG(float, 0x1087f04);
  bVar5 = 1;
  if (((*(int * PTR32 *)&gen_args[0])[4] != *(*(int * PTR32 *)&gen_args[0])) && (REFG(float, 0x1087f04) <= gen_bits2f((*(int * PTR32 *)&gen_args[0])[2]))) {
    (*(int * PTR32 *)&gen_args[0])[3] = (*(int * PTR32 *)&gen_args[0])[6];
  }
  fVar8 = (float10)1;
  if (!(gen_bits2f((*(int * PTR32 *)&gen_args[0])[3]) < REFG(float, 0x10947f8))) {
    fVar8 = ((float10)(*(float *)&gen_args[1]) + (float10)(*(float *)&gen_args[1])) / ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[3])));
  }
  if ((*(int * PTR32 *)&gen_args[0])[4] != *(*(int * PTR32 *)&gen_args[0])) {
    pfVar6 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 2)));
    (*(float *)&gen_args[1]) = (float)((float10)*pfVar6 - (float10)(float)fVar8);
    *pfVar6 = (*(float *)&gen_args[1]);
    if ((float10)(*(float *)&gen_args[1]) <= (float10)0) {
      piVar1 = (*(int * PTR32 *)&gen_args[0]) + 7;
      bVar5 = F_004c4090((*(int * PTR32 *)&gen_args[0]) + 4,piVar1);
      (*(float *)&gen_args[1]) = gen_bits2f(CONCAT13(bVar5,GEN_PIECE(&(*(float *)&gen_args[1]), 0, 3)));
      if (bVar5 != 0) {
        piVar4 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[1]));
        *(*(int * PTR32 *)&gen_args[0]) = 0;
        if (piVar4 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar4 + 0xc))(piVar4);
          (*(int * PTR32 *)&gen_args[0])[1] = 0;
        }
        *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[4];
        (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[5];
        if (*piVar1 != 0) {
          F_0050c620(*piVar1,0,0);
          *piVar1 = 0;
        }
        *pfVar6 = gen_bits2f((uint)gen_fl2bits(*pfVar6) ^ REFG(uint, 0x10920d0));
      }
      bVar5 = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 3));
    }
    fVar3 = *pfVar6;
    (*(float *)&gen_args[1]) = 0.0;
    pfVar7 = &(*(float *)&gen_args[1]);
    if (!((float10)fVar3 < (float10)0)) {
      pfVar7 = pfVar6;
    }
    *pfVar6 = *pfVar7;
    return bVar5;
  }
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[2]);
  pfVar6 = &(*(float *)&gen_args[1]);
  (*(float *)&gen_args[1]) = fVar3;
  (*(int * PTR32 *)&gen_args[0])[2] = (int)gen_fl2bits((float)((float10)fVar2 + (float10)(float)fVar8));
  if (!((float10)1 < ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[2]))))) {
    pfVar6 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 2)));
  }
  (*(int * PTR32 *)&gen_args[0])[2] = (int)gen_fl2bits(*pfVar6);
  return 1;
}

/* ref: FUN_004c4660 */
byte F_004c4660(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c4660u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined * this;
  byte bVar5;
  float * pfVar6;
  bool bVar7;
  float10 fVar8;
  float fVar9;
  
  fVar9 = REFG(float, 0x1087f04);
  (*(byte *)(gen_frame + 0xb)) = 1;
  if ((*(int * PTR32 *)&gen_args[0])[6] != *(*(int * PTR32 *)&gen_args[0])) {
    if ((*(int * PTR32 *)&gen_args[0])[6] == (*(int * PTR32 *)&gen_args[0])[2]) {
      iVar3 = *(*(int * PTR32 *)&gen_args[0]);
      fVar8 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      iVar4 = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[2];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[3];
      (*(int * PTR32 *)&gen_args[0])[2] = iVar3;
      (*(int * PTR32 *)&gen_args[0])[3] = iVar4;
    }
    else {
      if ((0.0 < gen_bits2f((*(int * PTR32 *)&gen_args[0])[8])) &&
         (pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4))),
         (!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar1)) &&
         (!(REFG(float, 0x1087f04) < *pfVar1) && REFG(uint, 0x1087f04) != *pfVar1))) goto LAB_004c4722;
      bVar5 = F_004bd920((*(int * PTR32 *)&gen_args[0]) + 6,(*(int * PTR32 *)&gen_args[0]) + 9);
      (*(byte *)(gen_frame + 0xb)) = bVar5;
      fVar9 = REFG(float, 0x1087f04);
      if (bVar5 == 0) goto LAB_004c4778;
      F_004c1c00((*(int * PTR32 *)&gen_args[0]) + 2);
      (*(int * PTR32 *)&gen_args[0])[2] = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0])[3] = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[6];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[7];
      if (((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[9])) != (undefined *)0x0) {
        F_00982b20(((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[9])));
        (*(int * PTR32 *)&gen_args[0])[9] = 0;
      }
      fVar8 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      fVar9 = REFG(float, 0x1087f04);
    }
    (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)fVar8);
    (*(int * PTR32 *)&gen_args[0])[5] = (*(int * PTR32 *)&gen_args[0])[8];
  }
LAB_004c4722: ;
  fVar8 = (float10)1;
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[5]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  if (!(fVar2 < REFG(float, 0x10947f8))) {
    fVar8 = (float10)(*(float *)&gen_args[1]) / (float10)fVar2;
  }
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]);
  (*(float *)&gen_args[1]) = fVar9;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar6 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)(fVar8 + (float10)fVar2));
  pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  if ((GEN_ISNAN(fVar9) || GEN_ISNAN(*pfVar1)) || (fVar9 < *pfVar1 || fVar9 == *pfVar1)) {
    pfVar6 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar6)) {
    pfVar6 = &(*(float *)(gen_frame + 0x4));
  }
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits(*pfVar6);
LAB_004c4778: ;
  bVar7 = GEN_ISNAN(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])) || GEN_ISNAN(fVar9);
  if (bVar7 != (bVar7 || gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]) == fVar9)) {
    this = ((undefined *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3]));
    (*(int * PTR32 *)&gen_args[0])[2] = 0;
    if (this != (undefined *)0x0) {
      F_009cfa70(this);
      F_00406ad0(this);
      (*(int * PTR32 *)&gen_args[0])[3] = 0;
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_004c47f0 */
byte F_004c47f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c47f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_004c4810 */
uint F_004c4810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4810u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x14;
      if ((float10)*(float *)(iVar1 + 0x10) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x24);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c48b0 */
byte F_004c48b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c48b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_004c48d0 */
byte F_004c48d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c48d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_004c4930 */
uint F_004c4930(unsigned int gen_a0)
{
  GEN_ENTER(0x4c4930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c4990 */
uint F_004c4990(unsigned int gen_a0)
{
  GEN_ENTER(0x4c4990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c49f0 */
uint F_004c49f0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c49f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_004c4a10 */
uint F_004c4a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4a10u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x70;
      if ((float10)*(float *)(iVar5 + 0x6c + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 0xdc + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c4ab0 */
uint F_004c4ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c4ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c4af0 */
uint F_004c4af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c4af0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c4b30 */
uint F_004c4b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4b30u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x34;
      if ((float10)*(float *)(iVar5 + 0x30 + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 100 + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c4bd0 */
uint F_004c4bd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x38;
      if ((float10)*(float *)(iVar1 + 0x34) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x6c);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c4c70 */
uint F_004c4c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x28;
      if ((float10)*(float *)(iVar1 + 0x24) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x4c);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c4d10 */
uint F_004c4d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x2c;
      if ((float10)*(float *)(iVar5 + 0x28 + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 0x54 + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c4db0 */
uint F_004c4db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x24;
      if ((float10)*(float *)(iVar1 + 0x20) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x44);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c4e50 */
uint F_004c4e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x2c;
      if ((float10)*(float *)(iVar5 + 0x28 + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 0x54 + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c4ef0 */
uint F_004c4ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x34;
      if ((float10)*(float *)(iVar5 + 0x30 + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 100 + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c4f90 */
uint F_004c4f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c4f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      uVar5 = (uint)uVar1;
      if ((float10)*(float *)(param_2 + 0xc + uVar5 * 0x10) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar5 == uVar4) break;
    fVar7 = (float10)*(float *)(param_2 + 0x1c + uVar5 * 0x10);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c5030 */
uint F_004c5030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5030u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      uVar5 = (uint)uVar1;
      if ((float10)*(float *)(param_2 + 0xc + uVar5 * 0x10) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar5 == uVar4) break;
    fVar7 = (float10)*(float *)(param_2 + 0x1c + uVar5 * 0x10);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c50d0 */
uint F_004c50d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c50d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x1c;
      if ((float10)*(float *)(iVar1 + 0x18) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x34);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c5170 */
uint F_004c5170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5170u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      uVar5 = (uint)uVar1;
      if ((float10)*(float *)(param_2 + 0x2c + uVar5 * 0x30) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar5 == uVar4) break;
    fVar7 = (float10)*(float *)(param_2 + 0x5c + uVar5 * 0x30);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c5210 */
uint F_004c5210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5210u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      iVar5 = (uint)uVar1 * 0x4c;
      if ((float10)*(float *)(iVar5 + 0x48 + param_2) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar1 == uVar4) break;
    fVar7 = (float10)*(float *)(iVar5 + 0x94 + param_2);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c52b0 */
uint F_004c52b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c52b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c52f0 */
uint F_004c52f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c52f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c5330 */
uint F_004c5330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5330u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort * puVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar3 = (ushort)(*(uint *)&gen_args[2]);
  if ((ushort)(*(uint *)&gen_args[2]) == 1) {
    *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    return 0;
  }
  uVar1 = (ushort)(*(uint *)&gen_args[2]) - 1;
  uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[2]) = (uint)uVar1;
  ((ushort *)(gen_frame + 0x8))[0] = 0;
  ((ushort *)(gen_frame + 0x8))[1] = 0;
  puVar4 = (*(ushort * PTR32 *)&gen_args[0]);
  if (uVar1 <= uVar2) {
    puVar4 = (ushort *)&(*(uint *)&gen_args[2]);
  }
  if (*puVar4 == 0) {
    puVar4 = ((ushort *)(gen_frame + 0x8));
  }
  uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar4) >> 0x10),*puVar4);
  fVar7 = (float10)(*(float *)&gen_args[4]);
  *(*(ushort * PTR32 *)&gen_args[0]) = *puVar4;
  while( true ) {
    while( true ) {
      uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
      uVar6 = (uint)uVar2;
      if ((float10)*(float *)((*(int *)&gen_args[1]) + 4 + uVar6 * 8) <= fVar7) break;
      if (uVar2 == 0) {
        *(*(ushort * PTR32 *)&gen_args[0]) = uVar1;
        return uVar5;
      }
      *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    }
    uVar5 = uVar3 - 1;
    if (uVar6 == uVar5) break;
    fVar8 = (float10)*(float *)((*(int *)&gen_args[1]) + 0xc + uVar6 * 8);
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 <= fVar7)) {
      return uVar5;
    }
    *(*(ushort * PTR32 *)&gen_args[0]) = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c53d0 */
uint F_004c53d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c53d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort * puVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar3 = (ushort)(*(uint *)&gen_args[2]);
  if ((ushort)(*(uint *)&gen_args[2]) == 1) {
    *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    return 0;
  }
  uVar1 = (ushort)(*(uint *)&gen_args[2]) - 1;
  uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[2]) = (uint)uVar1;
  ((ushort *)(gen_frame + 0x8))[0] = 0;
  ((ushort *)(gen_frame + 0x8))[1] = 0;
  puVar4 = (*(ushort * PTR32 *)&gen_args[0]);
  if (uVar1 <= uVar2) {
    puVar4 = (ushort *)&(*(uint *)&gen_args[2]);
  }
  if (*puVar4 == 0) {
    puVar4 = ((ushort *)(gen_frame + 0x8));
  }
  uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar4) >> 0x10),*puVar4);
  fVar7 = (float10)(*(float *)&gen_args[4]);
  *(*(ushort * PTR32 *)&gen_args[0]) = *puVar4;
  while( true ) {
    while( true ) {
      uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
      uVar6 = (uint)uVar2;
      if ((float10)*(float *)((*(int *)&gen_args[1]) + 4 + uVar6 * 8) <= fVar7) break;
      if (uVar2 == 0) {
        *(*(ushort * PTR32 *)&gen_args[0]) = uVar1;
        return uVar5;
      }
      *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    }
    uVar5 = uVar3 - 1;
    if (uVar6 == uVar5) break;
    fVar8 = (float10)*(float *)((*(int *)&gen_args[1]) + 0xc + uVar6 * 8);
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 <= fVar7)) {
      return uVar5;
    }
    *(*(ushort * PTR32 *)&gen_args[0]) = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c5470 */
uint F_004c5470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort * puVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar3 = (ushort)(*(uint *)&gen_args[2]);
  if ((ushort)(*(uint *)&gen_args[2]) == 1) {
    *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    return 0;
  }
  uVar1 = (ushort)(*(uint *)&gen_args[2]) - 1;
  uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
  (*(uint *)&gen_args[2]) = (uint)uVar1;
  ((ushort *)(gen_frame + 0x8))[0] = 0;
  ((ushort *)(gen_frame + 0x8))[1] = 0;
  puVar4 = (*(ushort * PTR32 *)&gen_args[0]);
  if (uVar1 <= uVar2) {
    puVar4 = (ushort *)&(*(uint *)&gen_args[2]);
  }
  if (*puVar4 == 0) {
    puVar4 = ((ushort *)(gen_frame + 0x8));
  }
  uVar5 = CONCAT22((short)((uint)((int)(uintptr_t)puVar4) >> 0x10),*puVar4);
  fVar7 = (float10)(*(float *)&gen_args[4]);
  *(*(ushort * PTR32 *)&gen_args[0]) = *puVar4;
  while( true ) {
    while( true ) {
      uVar2 = *(*(ushort * PTR32 *)&gen_args[0]);
      uVar6 = (uint)uVar2;
      if ((float10)*(float *)((*(int *)&gen_args[1]) + 4 + uVar6 * 8) <= fVar7) break;
      if (uVar2 == 0) {
        *(*(ushort * PTR32 *)&gen_args[0]) = uVar1;
        return uVar5;
      }
      *(*(ushort * PTR32 *)&gen_args[0]) = 0;
    }
    uVar5 = uVar3 - 1;
    if (uVar6 == uVar5) break;
    fVar8 = (float10)*(float *)((*(int *)&gen_args[1]) + 0xc + uVar6 * 8);
    if ((!GEN_ISNAN(fVar8) && !GEN_ISNAN(fVar7)) && !(fVar8 <= fVar7)) {
      return uVar5;
    }
    *(*(ushort * PTR32 *)&gen_args[0]) = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c5510 */
uint F_004c5510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5510u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0xc;
      if ((float10)*(float *)(iVar1 + 8) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x14);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c55b0 */
uint F_004c55b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c55b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ushort uVar1;
  ushort uVar2;
  uint * puVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar2 = (ushort)param_3 - 1;
  uVar4 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar2;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar3 = param_1;
  if (uVar2 <= (ushort)uVar4) {
    puVar3 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar3 == 0) {
    puVar3 = &(*(uint *)(gen_frame + 0x4));
  }
  uVar4 = CONCAT22((short)((uint)((int)(uintptr_t)puVar3) >> 0x10),(ushort)*puVar3);
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar3;
  while( true ) {
    while( true ) {
      uVar1 = (ushort)*param_1;
      uVar5 = (uint)uVar1;
      if ((float10)*(float *)(param_2 + 0xc + uVar5 * 0x10) <= fVar6) break;
      if (uVar1 == 0) {
        *(ushort *)param_1 = uVar2;
        return uVar4;
      }
      *(ushort *)param_1 = 0;
    }
    uVar4 = (ushort)param_3 - 1;
    if (uVar5 == uVar4) break;
    fVar7 = (float10)*(float *)(param_2 + 0x1c + uVar5 * 0x10);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar4;
    }
    *(ushort *)param_1 = uVar1 + 1;
  }
  return uVar4;
}

/* ref: FUN_004c5650 */
uint F_004c5650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c5650u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x1c;
      if ((float10)*(float *)(iVar1 + 0x18) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x34);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c56f0 */
uint F_004c56f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4)
{
  GEN_ENTER(0x4c56f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  uint * puVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((ushort)param_3 == 1) {
    *(ushort *)param_1 = 0;
    return 0;
  }
  uVar3 = (ushort)param_3 - 1;
  uVar5 = *param_1;
  (*(uint *)(gen_frame + 0x8)) = (uint)uVar3;
  (*(uint *)(gen_frame + 0x4)) = 0;
  puVar4 = param_1;
  if (uVar3 <= (ushort)uVar5) {
    puVar4 = &(*(uint *)(gen_frame + 0x8));
  }
  if ((ushort)*puVar4 == 0) {
    puVar4 = &(*(uint *)(gen_frame + 0x4));
  }
  fVar6 = (float10)param_5;
  *(ushort *)param_1 = (ushort)*puVar4;
  while( true ) {
    while( true ) {
      uVar2 = (ushort)*param_1;
      iVar1 = param_2 + (uint)uVar2 * 0x14;
      if ((float10)*(float *)(iVar1 + 0x10) <= fVar6) break;
      if (uVar2 == 0) {
        *(ushort *)param_1 = uVar3;
        return 0;
      }
      *(ushort *)param_1 = 0;
    }
    uVar5 = (ushort)param_3 - 1;
    if (uVar2 == uVar5) break;
    fVar7 = (float10)*(float *)(iVar1 + 0x24);
    if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar6)) && !(fVar7 <= fVar6)) {
      return uVar5;
    }
    *(ushort *)param_1 = uVar2 + 1;
  }
  return uVar5;
}

/* ref: FUN_004c5790 */
uint F_004c5790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c57d0 */
uint F_004c57d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c57d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return (uint)this;
}

/* ref: FUN_004c5810 */
uint F_004c5810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c5810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004c5840 */
uint F_004c5840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c5840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004c5870 */
uint F_004c5870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c5870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_004c58a0 */
uint F_004c58a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c58a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004c5920 */
uint F_004c5920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c5920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004c59a0 */
uint F_004c59a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x4c59a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return (uint)param_1;
  }
  param_1[2] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004c5a20 */
uint F_004c5a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5a60 */
uint F_004c5a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5aa0 */
uint F_004c5aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5aa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5ae0 */
uint F_004c5ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar2 = uVar3 >> 1;
    if (*(uint *)(iVar5 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar5 + 8);
    }
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4))) + (uVar3 & 1) * 8)));
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_8;
    }
    uVar2 = uVar4 >> 1;
    if (*(uint *)(iVar5 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar5 + 8);
    }
    iVar5 = *((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar2 * 4)));
    *((undefined4 *)GEN_TOP((iVar5 + (uVar4 & 1) * 8))) = *puVar1;
    *((undefined4 *)GEN_TOP((iVar5 + 4 + (uVar4 & 1) * 8))) = puVar1[1];
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_004c5b90 */
uint F_004c5b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    iVar2 = 0;
    if (param_2 != (int *)0x0) {
      iVar2 = *param_2;
    }
    uVar4 = uVar1 >> 1;
    if (*(uint *)(iVar2 + 8) <= uVar4) {
      uVar4 = uVar4 - *(uint *)(iVar2 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar3 = uVar5 >> 1;
    if (*(uint *)(iVar6 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar6 + 8);
    }
    iVar2 = *((int *)GEN_TOP((*(int *)(iVar2 + 4) + uVar4 * 4)));
    iVar6 = *((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar3 * 4)));
    *((undefined4 *)GEN_TOP((iVar6 + (uVar5 & 1) * 8))) = *((undefined4 *)GEN_TOP((iVar2 + (uVar1 & 1) * 8)));
    *((undefined4 *)GEN_TOP((iVar6 + 4 + (uVar5 & 1) * 8))) = *((undefined4 *)GEN_TOP((iVar2 + 4 + (uVar1 & 1) * 8)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5c40 */
uint F_004c5c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar1 = uVar3 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar5 + 8);
    }
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar3 & 3) * 4)));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_004c5cf0 */
uint F_004c5cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5da0 */
uint F_004c5da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = param_7;
  uVar4 = param_10;
  while (param_4 != uVar3) {
    uVar3 = uVar3 - 1;
    if (param_5 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_5;
    }
    uVar1 = uVar3 >> 2;
    if (*(uint *)(iVar5 + 8) <= uVar1) {
      uVar1 = uVar1 - *(uint *)(iVar5 + 8);
    }
    uVar4 = uVar4 - 1;
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar4 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar4 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar5 + 4) + uVar1 * 4))) + (uVar3 & 3) * 4)));
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (param_8 != (int *)0x0) {
    if ((undefined4 *)*param_8 == (undefined4 *)0x0) {
      param_1[2] = uVar4;
      return (uint)param_1;
    }
    *param_1 = *(undefined4 *)*param_8;
  }
  param_1[2] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_004c5e50 */
uint F_004c5e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c5e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint param_7 = (uint)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  uint param_10 = (uint)gen_a9;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = param_10;
  for (uVar1 = param_4; uVar1 != param_7; uVar1 = uVar1 + 1) {
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    uVar3 = uVar1 >> 2;
    if (*(uint *)(iVar4 + 8) <= uVar3) {
      uVar3 = uVar3 - *(uint *)(iVar4 + 8);
    }
    if (param_8 == (int *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *param_8;
    }
    uVar2 = uVar5 >> 2;
    if (*(uint *)(iVar6 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(iVar6 + 8);
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar6 + 4) + uVar2 * 4))) + (uVar5 & 3) * 4))) =
         *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar4 + 4) + uVar3 * 4))) + (uVar1 & 3) * 4)));
    uVar5 = uVar5 + 1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar5;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*param_8;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5f00 */
uint F_004c5f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 - param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return (uint)param_1;
}

/* ref: FUN_004c5f40 */
unsigned int F_004c5f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c5f70 */
unsigned int F_004c5f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c5f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c5fa0 */
unsigned int F_004c5fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c5fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c5fd0 */
unsigned int F_004c5fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c5fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c6000 */
unsigned int F_004c6000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c6000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar2;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c6030 */
unsigned int F_004c6030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c6060 */
uint F_004c6060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x4c6060u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int param_6 = (int)gen_a5;
  return param_6 - param_3;
}

/* ref: FUN_004c6070 */
uint F_004c6070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)((int)this + 8);
    *param_1 = 0;
    param_1[1] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(undefined4 *)((int)this + 8);
  *param_1 = **(undefined4 * PTR32 *)this;
  param_1[1] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004c60a0 */
uint F_004c60a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c60a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  *param_1 = *(undefined4 *)this;
  param_1[1] = iVar1 + param_2;
  return (uint)param_1;
}

/* ref: FUN_004c60c0 */
uint F_004c60c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4c60c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar7 = param_4 >> 1;
  if (*(uint *)(param_3 + 8) <= uVar7) {
    uVar7 = uVar7 - *(uint *)(param_3 + 8);
  }
  uVar8 = param_2 >> 1;
  if (*(uint *)(param_1 + 8) <= uVar8) {
    uVar8 = uVar8 - *(uint *)(param_1 + 8);
  }
  iVar3 = *((int *)GEN_TOP((*(int *)(param_3 + 4) + uVar7 * 4)));
  iVar4 = *((int *)GEN_TOP((*(int *)(param_1 + 4) + uVar8 * 4)));
  uVar5 = *((undefined4 *)GEN_TOP((iVar4 + 4 + (param_2 & 1) * 8)));
  puVar1 = ((undefined4 *)GEN_TOP((iVar3 + (param_4 & 1) * 8)));
  puVar2 = ((undefined4 *)GEN_TOP((iVar4 + (param_2 & 1) * 8)));
  uVar6 = *puVar2;
  *puVar2 = *((undefined4 *)GEN_TOP((iVar3 + (param_4 & 1) * 8)));
  puVar2[1] = puVar1[1];
  puVar1[1] = uVar5;
  *puVar1 = uVar6;
  return (uint)puVar1;
}

/* ref: FUN_004c6130 */
uint F_004c6130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') | *(uint *)((int)this + 4) & 0xfffffffe;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_004c6150 */
uint F_004c6150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c6150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 in_EAX = 0;
  undefined3 uVar2;
  uint uVar1;
  
  uVar2 = (undefined3)((uint)in_EAX >> 8);
  if ((char)param_1 == '\0') {
    uVar1 = CONCAT31(uVar2,*(byte *)((int)this + 0xbc));
    if (*(byte *)((int)this + 0xbc) == (byte)param_2) {
      *(undefined1 *)((int)this + 0xbc) = 0;
      uVar1 = F_0067a900(REFG(void * PTR32, 0x137128c),0x10,0);
    }
  }
  else {
    uVar1 = CONCAT31(uVar2,(byte)param_2);
    if (*(byte *)((int)this + 0xbc) < (byte)param_2) {
      *(byte *)((int)this + 0xbc) = (byte)param_2;
      return uVar1;
    }
  }
  return uVar1;
}

/* ref: FUN_004c61a0 */
uint F_004c61a0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c61a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004c3df0(this);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_004c61c0 */
uint F_004c61c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c61c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3f10(this,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0x10 + *(int *)((int)this + 4);
}

/* ref: FUN_004c61f0 */
uint F_004c61f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c61f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3f80(this,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0x294 + *(int *)((int)this + 4);
}

/* ref: FUN_004c6220 */
uint F_004c6220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3f80(this,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0x294 + *(int *)((int)this + 4);
}

/* ref: FUN_004c6250 */
uint F_004c6250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3ff0(this,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0xb4 + *(int *)((int)this + 4);
}

/* ref: FUN_004c6280 */
uint F_004c6280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3ff0(this,param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0xb4 + *(int *)((int)this + 4);
}

/* ref: FUN_004c62b0 */
byte F_004c62b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c62b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  if (*param_1 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    return 1;
  }
  piVar3 = (int *)(*param_1 + 0x8c);
  iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
  iVar2 = *param_1;
  if (iVar1 < 8) {
    piVar3 = (int *)(iVar2 + 0x88);
    iVar1 = _InterlockedCompareExchange((volatile long *)(piVar3), 0, 0);
    if (iVar1 == 2) {
      piVar3 = (int *)F_004ad870(*param_1);
      *(int * PTR32 *)((int)this + 4) = piVar3;
      if (piVar3 == (int *)0x0) {
        return 1;
      }
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,REFG(undefined4, 0x13012e4));
      return 1;
    }
  }
  else if (iVar2 != 0) {
    F_0050c620(iVar2,0,0);
    *param_1 = 0;
  }
  return 0;
}

/* ref: Client::Graphics::Environment::ObjectBehaviorSet::vf0 */
uint F_004c6340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_004c63b0 */
uint F_004c63b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c63b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004c63d0 */
uint F_004c63d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c63d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004c6430 */
uint F_004c6430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004c6450 */
uint F_004c6450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c6450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004c64b0 */
uint F_004c64b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c64b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)((int)this + 0xc);
  uVar2 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_004c64d0 */
uint F_004c64d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c64d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)((int)this + 0x10);
  iVar2 = *(int *)((int)this + 0xc);
  uVar3 = *(undefined4 *)this;
  param_1[1] = 0;
  *param_1 = uVar3;
  param_1[2] = iVar1 + iVar2;
  return (uint)param_1;
}

/* ref: FUN_004c64f0 */
byte F_004c64f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x4c64f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  byte bVar6;
  float * pfVar7;
  bool bVar8;
  float10 fVar9;
  float fVar10;
  
  fVar10 = REFG(float, 0x1087f04);
  (*(byte *)(gen_frame + 0xb)) = 1;
  if ((*(int * PTR32 *)&gen_args[0])[6] != *(*(int * PTR32 *)&gen_args[0])) {
    if ((*(int * PTR32 *)&gen_args[0])[6] == (*(int * PTR32 *)&gen_args[0])[2]) {
      iVar3 = *(*(int * PTR32 *)&gen_args[0]);
      fVar9 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      iVar4 = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[2];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[3];
      (*(int * PTR32 *)&gen_args[0])[2] = iVar3;
      (*(int * PTR32 *)&gen_args[0])[3] = iVar4;
    }
    else {
      if ((0.0 < gen_bits2f((*(int * PTR32 *)&gen_args[0])[8])) &&
         (pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4))),
         (!GEN_ISNAN(REFG(float, 0x1087f04)) && !GEN_ISNAN(*pfVar1)) &&
         (!(REFG(float, 0x1087f04) < *pfVar1) && REFG(uint, 0x1087f04) != *pfVar1))) goto LAB_004c65ba;
      bVar6 = F_004c62b0((*(int * PTR32 *)&gen_args[0]) + 6,(*(int * PTR32 *)&gen_args[0]) + 9);
      (*(byte *)(gen_frame + 0xb)) = bVar6;
      fVar10 = REFG(float, 0x1087f04);
      if (bVar6 == 0) goto LAB_004c6610;
      F_004bd9d0((*(int * PTR32 *)&gen_args[0]) + 2);
      (*(int * PTR32 *)&gen_args[0])[2] = *(*(int * PTR32 *)&gen_args[0]);
      (*(int * PTR32 *)&gen_args[0])[3] = (*(int * PTR32 *)&gen_args[0])[1];
      *(*(int * PTR32 *)&gen_args[0]) = (*(int * PTR32 *)&gen_args[0])[6];
      (*(int * PTR32 *)&gen_args[0])[1] = (*(int * PTR32 *)&gen_args[0])[7];
      if ((*(int * PTR32 *)&gen_args[0])[9] != 0) {
        F_0050c620((*(int * PTR32 *)&gen_args[0])[9],0,0);
        (*(int * PTR32 *)&gen_args[0])[9] = 0;
      }
      fVar9 = (float10)1 - ((float10)GEN_TOD(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])));
      fVar10 = REFG(float, 0x1087f04);
    }
    (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)fVar9);
    (*(int * PTR32 *)&gen_args[0])[5] = (*(int * PTR32 *)&gen_args[0])[8];
  }
LAB_004c65ba: ;
  fVar9 = (float10)1;
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[5]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  if (!(fVar2 < REFG(float, 0x10947f8))) {
    fVar9 = (float10)(*(float *)&gen_args[1]) / (float10)fVar2;
  }
  fVar2 = gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]);
  (*(float *)&gen_args[1]) = fVar10;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  pfVar7 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits((float)(fVar9 + (float10)fVar2));
  pfVar1 = ((float *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 4)));
  if ((GEN_ISNAN(fVar10) || GEN_ISNAN(*pfVar1)) || (fVar10 < *pfVar1 || fVar10 == *pfVar1)) {
    pfVar7 = &(*(float *)&gen_args[1]);
  }
  if (!(0.0 < *pfVar7)) {
    pfVar7 = &(*(float *)(gen_frame + 0x4));
  }
  (*(int * PTR32 *)&gen_args[0])[4] = (int)gen_fl2bits(*pfVar7);
LAB_004c6610: ;
  bVar8 = GEN_ISNAN(gen_bits2f((*(int * PTR32 *)&gen_args[0])[4])) || GEN_ISNAN(fVar10);
  if (bVar8 != (bVar8 || gen_bits2f((*(int * PTR32 *)&gen_args[0])[4]) == fVar10)) {
    piVar5 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3]));
    (*(int * PTR32 *)&gen_args[0])[2] = 0;
    if (piVar5 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar5 + 0x50))(piVar5,0);
      ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])) + 0x78))))(((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[3])),500);
      (*(int * PTR32 *)&gen_args[0])[3] = 0;
    }
  }
  return (*(byte *)(gen_frame + 0xb));
}

/* ref: FUN_004c6650 */
uint F_004c6650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4a10(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 0x1c + 0x1b])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0x1c + 0x1b])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004bebc0(param_1,param_3 + uVar1 * 0x1c,param_3 + iVar2 * 0x1c,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6710 */
uint F_004c6710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6710u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4b30(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 0xd + 0xc])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xd + 0xc])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a66a0(param_1,param_3 + uVar1 * 0xd,param_3 + iVar2 * 0xd,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c67d0 */
uint F_004c67d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c67d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4bd0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  fVar5 = (float10)param_6;
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar6 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 0xe)[0xd])));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xe + 0xd])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a68f0(param_1,param_3 + (uint)*param_2 * 0xe,param_3 + iVar2 * 0xe,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c68a0 */
uint F_004c68a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c68a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4c70(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  fVar5 = (float10)param_6;
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar6 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 10)[9])));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 10 + 9])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a6b70(param_1,param_3 + (uint)*param_2 * 10,param_3 + iVar2 * 10,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6960 */
uint F_004c6960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4d10(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 0xb + 10])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xb + 10])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a6cd0(param_1,param_3 + uVar1 * 0xb,param_3 + iVar2 * 0xb,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6a20 */
uint F_004c6a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6a20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4db0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  fVar5 = (float10)param_6;
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar6 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 9)[8])));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 9 + 8])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a6e40(param_1,param_3 + (uint)*param_2 * 9,param_3 + iVar2 * 9,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6ae0 */
uint F_004c6ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6ae0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4e50(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 0xb + 10])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xb + 10])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004ade40(param_1,param_3 + uVar1 * 0xb,param_3 + iVar2 * 0xb,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6ba0 */
uint F_004c6ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c4ef0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 0xd + 0xc])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xd + 0xc])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a6fe0(param_1,(uint)(param_3 + uVar1 * 0xd),param_3 + iVar2 * 0xd,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6c60 */
uint F_004c6c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    uVar1 = param_3[2];
    param_1[2] = uVar1;
    return uVar1;
  }
  F_004c4f90(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar3 = (float10)param_6;
  fVar4 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 4)[3])));
  if (fVar3 < fVar4) {
    fVar4 = (float10)(float)(fVar4 - (float10)param_5);
  }
  fVar5 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 4 + 3])));
  if (fVar5 <= fVar3) {
    fVar5 = (float10)(float)((float10)param_5 + fVar5);
  }
  uVar1 = F_004a7190(param_1,(uint)(param_3 + (uint)*param_2 * 4),param_3 + iVar2 * 4,
                       ((float)GEN_TOF(((fVar3 - fVar4) / (fVar5 - fVar4)))));
  return uVar1;
}

/* ref: FUN_004c6d30 */
uint F_004c6d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float * pfVar2;
  int iVar3;
  float * pfVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    fVar1 = param_3[2];
    param_1[2] = fVar1;
    return (uint)gen_fl2bits(fVar1);
  }
  F_004c5030(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  iVar3 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  pfVar2 = param_3 + (uint)*param_2 * 4;
  fVar5 = (float10)param_6;
  fVar6 = (float10)pfVar2[3];
  pfVar4 = param_3 + iVar3 * 4;
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = (float10)param_3[iVar3 * 4 + 3];
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  fVar5 = (float10)((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6))));
  fVar6 = (float10)(float)((float10)1 - fVar5);
  *param_1 = (float)((float10)*pfVar4 * fVar5 + fVar6 * (float10)*pfVar2);
  param_1[1] = (float)((float10)pfVar4[1] * fVar5 + (float10)pfVar2[1] * fVar6);
  param_1[2] = (float)(fVar6 * (float10)pfVar2[2] + (float10)pfVar4[2] * fVar5);
  return (uint)param_1;
}

/* ref: FUN_004c6e30 */
uint F_004c6e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    uVar1 = param_3[5];
    param_1[5] = uVar1;
    return uVar1;
  }
  F_004c50d0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar3 = (float10)param_6;
  fVar4 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 7 + 6])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar3 < fVar4) {
    fVar4 = (float10)(float)(fVar4 - (float10)param_5);
  }
  fVar5 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 7 + 6])));
  if (fVar5 <= fVar3) {
    fVar5 = (float10)(float)((float10)param_5 + fVar5);
  }
  uVar1 = F_004a7260(param_1,(uint)(param_3 + uVar1 * 7),param_3 + iVar2 * 7,
                       ((float)GEN_TOF(((fVar3 - fVar4) / (fVar5 - fVar4)))));
  return uVar1;
}

/* ref: FUN_004c6f20 */
uint F_004c6f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    return 0;
  }
  F_004c5170(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar5 = (float10)param_6;
  fVar6 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 0xc)[0xb])));
  if (fVar5 < fVar6) {
    fVar6 = (float10)(float)(fVar6 - (float10)param_5);
  }
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 0xc + 0xb])));
  if (fVar7 <= fVar5) {
    fVar7 = (float10)(float)((float10)param_5 + fVar7);
  }
  uVar1 = F_004a7350(param_1,param_3 + (uint)*param_2 * 0xc,param_3 + iVar2 * 0xc,
                       ((float)GEN_TOF(((fVar5 - fVar6) / (fVar7 - fVar6)))));
  return uVar1;
}

/* ref: FUN_004c6ff0 */
uint F_004c6ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c6ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    puVar4 = param_3;
    puVar5 = param_1;
    for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    return 0;
  }
  F_004c5210(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar2 = (uint)*param_2;
  fVar6 = (float10)param_6;
  fVar7 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar2 * 0x13 + 0x12])));
  iVar3 = (int)((ulonglong)(uVar2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar6 < fVar7) {
    fVar7 = (float10)(float)(fVar7 - (float10)param_5);
  }
  fVar8 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar3 * 0x13 + 0x12])));
  if (fVar8 <= fVar6) {
    fVar8 = (float10)(float)((float10)param_5 + fVar8);
  }
  bVar1 = F_004a5dd0(param_1,param_3 + uVar2 * 0x13,param_3 + iVar3 * 0x13,
                       ((float)GEN_TOF(((fVar6 - fVar7) / (fVar8 - fVar7)))));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_004c70b0 */
uint F_004c70b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c70b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint * puVar1;
  undefined1 uVar2;
  uint uVar3;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    uVar3 = *param_3;
    *param_1 = uVar3;
    return uVar3;
  }
  F_004c5330(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  puVar1 = param_3 + (uint)*param_2 * 2;
  *(short *)param_1 = (short)*puVar1;
  uVar2 = *(undefined1 *)((int)puVar1 + 2);
  *(undefined1 *)((int)param_1 + 2) = uVar2;
  return CONCAT31((int3)((uint)((int)(uintptr_t)puVar1) >> 8),uVar2);
}

/* ref: FUN_004c7110 */
uint F_004c7110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c7110u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    uVar1 = *param_3;
    *param_1 = uVar1;
    return uVar1;
  }
  F_004c53d0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  *param_1 = param_3[(uint)*param_2 * 2];
  return (uint)param_1;
}

/* ref: FUN_004c7170 */
uint F_004c7170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c7170u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    fVar1 = *param_3;
    *param_1 = fVar1;
    return (uint)gen_fl2bits(fVar1);
  }
  F_004c5470(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar2 = (uint)*param_2;
  fVar4 = (float10)param_6;
  fVar5 = (float10)param_3[uVar2 * 2 + 1];
  iVar3 = (int)((ulonglong)(uVar2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar4 < fVar5) {
    fVar5 = (float10)(float)(fVar5 - (float10)param_5);
  }
  fVar6 = (float10)param_3[iVar3 * 2 + 1];
  if (fVar6 <= fVar4) {
    fVar6 = (float10)(float)((float10)param_5 + fVar6);
  }
  fVar4 = (float10)((float)GEN_TOF(((fVar4 - fVar5) / (fVar6 - fVar5))));
  *param_1 = ((float)GEN_TOF((((float10)1 - fVar4) * (float10)param_3[uVar2 * 2] +
                    (float10)param_3[iVar3 * 2] * fVar4)));
  return (uint)((ulonglong)(uVar2 + 1) / (ulonglong)(longlong)(int)(param_4 & 0xffff));
}

/* ref: FUN_004c7230 */
uint F_004c7230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c7230u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    fVar1 = param_3[1];
    param_1[1] = fVar1;
    return (uint)gen_fl2bits(fVar1);
  }
  F_004c5510(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar2 = (uint)*param_2;
  fVar4 = (float10)param_6;
  fVar5 = (float10)param_3[uVar2 * 3 + 2];
  iVar3 = (int)((ulonglong)(uVar2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar4 < fVar5) {
    fVar5 = (float10)(float)(fVar5 - (float10)param_5);
  }
  fVar6 = (float10)param_3[iVar3 * 3 + 2];
  if (fVar6 <= fVar4) {
    fVar6 = (float10)(float)((float10)param_5 + fVar6);
  }
  fVar4 = (float10)((float)GEN_TOF(((fVar4 - fVar5) / (fVar6 - fVar5))));
  *param_1 = ((float)GEN_TOF(((float10)param_3[uVar2 * 3] * ((float10)1 - fVar4) +
                    (float10)param_3[iVar3 * 3] * fVar4)));
  param_1[1] = ((float)GEN_TOF((((float10)1 - fVar4) * ((float10)GEN_TOD((param_3 + uVar2 * 3)[1])) +
                      ((float10)GEN_TOD((param_3 + iVar3 * 3)[1])) * fVar4)));
  return (uint)param_1;
}

/* ref: FUN_004c7310 */
uint F_004c7310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c7310u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    uVar1 = param_3[2];
    param_1[2] = uVar1;
    return uVar1;
  }
  F_004c55b0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  iVar2 = (int)((ulonglong)(*param_2 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  fVar3 = (float10)param_6;
  fVar4 = ((float10)GEN_TOD(gen_bits2f((param_3 + (uint)*param_2 * 4)[3])));
  if (fVar3 < fVar4) {
    fVar4 = (float10)(float)(fVar4 - (float10)param_5);
  }
  fVar5 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 4 + 3])));
  if (fVar5 <= fVar3) {
    fVar5 = (float10)(float)((float10)param_5 + fVar5);
  }
  uVar1 = F_004c1210(param_1,param_3 + (uint)*param_2 * 4,param_3 + iVar2 * 4,
                       ((float)GEN_TOF(((fVar3 - fVar4) / (fVar5 - fVar4)))));
  return uVar1;
}

/* ref: FUN_004c73e0 */
uint F_004c73e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c73e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  uint uVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    param_1[4] = param_3[4];
    uVar1 = param_3[5];
    param_1[5] = uVar1;
    return uVar1;
  }
  F_004c5650(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar1 = (uint)*param_2;
  fVar3 = (float10)param_6;
  fVar4 = ((float10)GEN_TOD(gen_bits2f(param_3[uVar1 * 7 + 6])));
  iVar2 = (int)((ulonglong)(uVar1 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  if (fVar3 < fVar4) {
    fVar4 = (float10)(float)(fVar4 - (float10)param_5);
  }
  fVar5 = ((float10)GEN_TOD(gen_bits2f(param_3[iVar2 * 7 + 6])));
  if (fVar5 <= fVar3) {
    fVar5 = (float10)(float)((float10)param_5 + fVar5);
  }
  uVar1 = F_004c1330(param_1,param_3 + uVar1 * 7,param_3 + iVar2 * 7,
                       ((float)GEN_TOF(((fVar3 - fVar4) / (fVar5 - fVar4)))));
  return uVar1;
}

/* ref: FUN_004c74d0 */
uint F_004c74d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x4c74d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float * pfVar1;
  float * pfVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  if ((short)param_4 == 1) {
    *param_2 = 0;
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    fVar3 = param_3[3];
    param_1[3] = fVar3;
    return (uint)gen_fl2bits(fVar3);
  }
  F_004c56f0(param_2,param_3,param_4,(undefined4)gen_fl2bits(param_5),param_6);
  uVar4 = (uint)*param_2;
  fVar6 = (float10)param_6;
  fVar7 = (float10)param_3[uVar4 * 5 + 4];
  iVar5 = (int)((ulonglong)(uVar4 + 1) % (ulonglong)(longlong)(int)(param_4 & 0xffff));
  pfVar1 = param_3 + uVar4 * 5;
  pfVar2 = param_3 + iVar5 * 5;
  if (fVar6 < fVar7) {
    fVar7 = (float10)(float)(fVar7 - (float10)param_5);
  }
  fVar8 = (float10)param_3[iVar5 * 5 + 4];
  if (fVar8 <= fVar6) {
    fVar8 = (float10)(float)((float10)param_5 + fVar8);
  }
  fVar6 = (float10)((float)GEN_TOF(((fVar6 - fVar7) / (fVar8 - fVar7))));
  fVar7 = (float10)(float)((float10)1 - fVar6);
  *param_1 = (float)((float10)*pfVar2 * fVar6 + fVar7 * (float10)*pfVar1);
  param_1[1] = (float)((float10)pfVar2[1] * fVar6 + (float10)pfVar1[1] * fVar7);
  param_1[2] = (float)((float10)pfVar2[2] * fVar6 + (float10)pfVar1[2] * fVar7);
  param_1[3] = (float)(fVar7 * (float10)pfVar1[3] + (float10)pfVar2[3] * fVar6);
  return (uint)param_1;
}

/* ref: FUN_004c75e0 */
uint F_004c75e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c75e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0xce);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_004c7660 */
uint F_004c7660(unsigned int gen_a0)
{
  GEN_ENTER(0x4c7660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0xce);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_004c76e0 */
uint F_004c76e0(unsigned int gen_a0)
{
  GEN_ENTER(0x4c76e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0xce);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0xce);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_004c7760 */
uint F_004c7760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c7760u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5ae0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c77e0 */
uint F_004c77e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c77e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5b90(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c7860 */
uint F_004c7860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c7860u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5c40(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c78e0 */
uint F_004c78e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c78e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5cf0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c7960 */
uint F_004c7960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c7960u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5da0(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c79e0 */
uint F_004c79e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0x4c79e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if ((param_8 != (int *)0x0) && ((undefined4 *)*param_8 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*param_8;
  }
  uVar2 = 0;
  if ((param_5 != (int *)0x0) && ((undefined4 *)*param_5 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_5;
  }
  uVar1 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar1 = *(undefined4 *)*param_2;
  }
  F_004c5e50(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_004c7a60 */
unsigned int F_004c7a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c7a60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004c7a90 */
unsigned int F_004c7a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c7ac0 */
unsigned int F_004c7ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c7ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004c7af0 */
unsigned int F_004c7af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c7b20 */
unsigned int F_004c7b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x4c7b20u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
      }
      puVar1 = puVar1 + 1;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_004c7b50 */
unsigned int F_004c7b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_1;
  for (iVar2 = param_2; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  return 0;
}

/* ref: FUN_004c7b80 */
uint F_004c7b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x4c7b80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (param_2 == (undefined4 *)0x0) {
    *param_1 = 0;
    param_1[1] = param_4;
    return (uint)param_1;
  }
  *param_1 = *param_2;
  param_1[1] = param_4;
  return (uint)param_1;
}

/* ref: FUN_004c7bb0 */
int F_004c7bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x4c7bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int * piVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  iVar16 = (*(uint *)&gen_args[5]) - (*(uint *)&gen_args[1]);
  iVar6 = (*(int *)&gen_args[3]) - (*(uint *)&gen_args[1]);
  (*(int *)(gen_frame + 0x38)) = iVar6;
  (*(int *)(gen_frame + 0x34)) = iVar16;
  if ((*(uint *)&gen_args[5]) < (*(uint *)&gen_args[1])) {
  }
  iVar7 = 0;
  iVar9 = iVar16;
  iVar11 = iVar16;
  iVar12 = iVar6;
  if (iVar6 != 0) {
    do {
      iVar11 = iVar12;
      iVar7 = iVar9 / iVar11;
      iVar12 = iVar9 % iVar11;
      iVar9 = iVar11;
    } while (iVar12 != 0);
    (*(int *)(gen_frame + 0x34)) = iVar11;
  }
  if (iVar11 < iVar16) {
    while (0 < iVar11) {
      uVar1 = (*(uint *)&gen_args[1]) + iVar11;
      (*(int *)(gen_frame + 0x24)) = (*(int *)&gen_args[0]);
      if (iVar6 + uVar1 == (*(uint *)&gen_args[5])) {
        piVar8 = &(*(int *)&gen_args[0]);
      }
      else {
        (*(int *)(gen_frame + 0x1c)) = (*(int *)&gen_args[0]);
        (*(uint *)(gen_frame + 0x30)) = uVar1;
        (*(uint *)(gen_frame + 0x20)) = iVar6 + uVar1;
        piVar8 = &(*(int *)(gen_frame + 0x1c));
      }
      iVar16 = *piVar8;
      uVar13 = uVar1;
      uVar15 = piVar8[1];
      do {
        uVar10 = uVar15 >> 1;
        if (*(uint *)(iVar16 + 8) <= uVar10) {
          uVar10 = uVar10 - *(uint *)(iVar16 + 8);
        }
        uVar14 = uVar13 & 1;
        (*(uint *)(gen_frame + 0x30)) = uVar14;
        uVar13 = uVar13 >> 1;
        if (*(uint *)((*(int *)(gen_frame + 0x24)) + 8) <= uVar13) {
          uVar13 = uVar13 - *(uint *)((*(int *)(gen_frame + 0x24)) + 8);
        }
        puVar2 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(iVar16 + 4) + uVar10 * 4))) + (uVar15 & 1) * 8)));
        iVar7 = *((int *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x24)) + 4) + uVar13 * 4)));
        uVar4 = *(undefined4 *)(iVar7 + 4 + uVar14 * 8);
        puVar3 = (undefined4 *)(iVar7 + uVar14 * 8);
        uVar5 = *puVar3;
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar2[1] = uVar4;
        *puVar2 = uVar5;
        (*(int *)(gen_frame + 0x24)) = iVar16;
        if (iVar6 < (int)((*(uint *)&gen_args[5]) - uVar15)) {
          (*(uint *)(gen_frame + 0x30)) = uVar15;
          (*(int *)(gen_frame + 0x14)) = iVar16;
          (*(int *)(gen_frame + 0x18)) = uVar15 + iVar6;
          piVar8 = &(*(int *)(gen_frame + 0x14));
        }
        else {
          (*(uint *)(gen_frame + 0x30)) = (*(uint *)&gen_args[1]);
          (*(int *)(gen_frame + 0xc)) = (*(int *)&gen_args[0]);
          (*(int *)(gen_frame + 0x10)) = ((*(uint *)&gen_args[1]) - ((*(uint *)&gen_args[5]) - uVar15)) + iVar6;
          piVar8 = &(*(int *)(gen_frame + 0xc));
        }
        iVar16 = *piVar8;
        uVar13 = uVar15;
        uVar15 = piVar8[1];
      } while (piVar8[1] != uVar1);
      iVar11 = iVar11 + -1;
      (*(int *)(gen_frame + 0x34)) = iVar11;
      iVar7 = (*(int *)&gen_args[0]);
    }
  }
  return iVar7;
}

/* ref: FUN_004c7d00 */
uint F_004c7d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004c3f10((undefined *)((int)this + 8),param_1);
  if ((int)uVar1 < 0) {
    return 0;
  }
  return uVar1 * 0x10 + *(int *)((int)this + 0xc);
}

/* ref: FUN_004c7d30 */
byte F_004c7d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x4c7d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort uVar1;
  int iVar2;
  uint uVar3;
  undefined * this_00;
  int local_8;
  
  *(undefined2 *)((int)this + 10) = 0xffff;
  uVar1 = *(ushort *)((int)this + 8);
  iVar2 = 0;
  if ((uVar1 != 0) && ((param_1 == 0 || (uVar1 < param_1)))) {
    uVar3 = 0;
    if (uVar1 != 0) {
      local_8 = 0;
      do {
        F_004b4000(((undefined *)GEN_TOP((*(int *)((int)this + 4) + local_8))));
        local_8 = local_8 + 0xb4;
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)((int)this + 8));
    }
    if (*(int *)((int)this + 4) != 0) {
      F_00406b30(*(int *)((int)this + 4));
      *(undefined4 *)((int)this + 4) = 0;
    }
    if (*(int *)this != 0) {
      F_00406b30(*(int *)this);
      *(undefined4 *)this = 0;
    }
    *(undefined2 *)((int)this + 8) = 0;
  }
  if (param_1 != 0) {
    if (*(ushort *)((int)this + 8) < param_1) {
      uVar3 = F_00406bb0(param_1,0,0);
      *(uint *)this = uVar3;
      uVar3 = F_00406bb0(-(uint)((int)((ulonglong)param_1 * 0xb4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 0xb4),0,0);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        local_8 = param_1 - 1;
        if (-1 < local_8) {
          this_00 = (undefined *)(uVar3 + 0x38);
          do {
            F_004c3df0(this_00);
            *(undefined4 *)((int)this_00 + 0x78) = 0;
            *(undefined4 *)((int)this_00 + -0x38) = 0;
            *(undefined4 *)((int)this_00 + -0x34) = 0;
            *(undefined4 *)((int)this_00 + -0x30) = 0;
            *(undefined4 *)((int)this_00 + -0x2c) = 0;
            *(undefined4 *)((int)this_00 + -0x28) = 0;
            *(undefined4 *)((int)this_00 + -0x24) = 0;
            *(undefined4 *)((int)this_00 + -0x20) = 0;
            *(undefined4 *)((int)this_00 + -0x1c) = 0;
            *(undefined4 *)((int)this_00 + -0x18) = 0;
            *(undefined4 *)((int)this_00 + -0x14) = 0;
            *(undefined2 *)((int)this_00 + -0x10) = 0;
            this_00 = (undefined *)((int)this_00 + 0xb4);
            local_8 = local_8 + -1;
          } while (-1 < local_8);
        }
      }
      *(uint *)((int)this + 4) = uVar3;
      F_00c48350(*(undefined * PTR32 *)this,0,param_1);
      for (uVar3 = param_1; uVar3 != 0; uVar3 = uVar3 - 1) {
        F_004b3f10(((undefined *)GEN_TOP((*(int *)((int)this + 4) + iVar2))));
        iVar2 = iVar2 + 0xb4;
      }
    }
    *(short *)((int)this + 8) = (short)param_1;
  }
  return 1 - (*(ushort *)((int)this + 8) < param_1);
}

/* ref: FUN_004c7e90 */
uint F_004c7e90(unsigned int gen_a0)
{
  GEN_ENTER(0x4c7e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_004c75e0(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0xce);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

