#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009fa5a0 */
uint F_009fa5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa5a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_009fa5d0 */
uint F_009fa5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x11) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x11) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x11) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x11) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x11);
    }
    if (*(char *)(*(int *)this + 0x11) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_009fa690 */
uint F_009fa690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa690u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_009fa6a0 */
uint F_009fa6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa6a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_009fa6c0 */
uint F_009fa6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa6c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_009fa710 */
uint F_009fa710(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa720 */
uint F_009fa720(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa740 */
uint F_009fa740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_009fa770 */
uint F_009fa770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa770u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009fa790 */
uint F_009fa790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa7b0 */
uint F_009fa7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_009fa7d0 */
uint F_009fa7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined2 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa7f0 */
byte F_009fa7f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa7f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fa830 */
uint F_009fa830(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa840 */
uint F_009fa840(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa870 */
uint F_009fa870(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa880 */
uint F_009fa880(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa890 */
uint F_009fa890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa8b0 */
uint F_009fa8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fa8d0 */
uint F_009fa8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa8e0 */
uint F_009fa8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fa8f0 */
uint F_009fa8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009fa910 */
byte F_009fa910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_009fa930 */
uint F_009fa930(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9fa930u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_1)(param_1[1] + param_2,(undefined4)gen_fl2bits(param_3));
  return uVar1;
}

/* ref: FUN_009fa950 */
uint F_009fa950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009fa970 */
uint F_009fa970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_009fa990 */
uint F_009fa990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fa990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_009fa9a0 */
uint F_009fa9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + param_1,param_2);
  return uVar1;
}

/* ref: FUN_009fa9e0 */
uint F_009fa9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fa9e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fa9f0 */
uint F_009fa9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fa9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009faa10 */
uint F_009faa10(unsigned int gen_a0)
{
  GEN_ENTER(0x9faa10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009faa20 */
uint F_009faa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9faa20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (int)(param_2 - 1) / 2;
  uVar3 = param_2;
  if ((int)param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = *param_4;
    return (uint)param_4;
  }
  do {
    uVar2 = uVar1;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + uVar2 * 4),*param_4);
    if ((char)uVar1 == '\0') {
      *(undefined4 *)(param_1 + uVar3 * 4) = *param_4;
      return (uint)param_4;
    }
    *(undefined4 *)(param_1 + uVar3 * 4) = *(undefined4 *)(param_1 + uVar2 * 4);
    uVar1 = (int)(uVar2 - 1) / 2;
    uVar3 = uVar2;
  } while (param_3 < (int)uVar2);
  *(undefined4 *)(param_1 + uVar2 * 4) = *param_4;
  return uVar1;
}

/* ref: FUN_009faab0 */
uint F_009faab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9faab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009faae0 */
uint F_009faae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9faae0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] + (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009fab10 */
uint F_009fab10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fab10u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  in_ecx[2] = (float)((float10)param_2[2] + (float10)in_ecx[2]);
  in_ecx[3] = (float)((float10)param_2[3] + (float10)in_ecx[3]);
  return (uint)in_ecx;
}

/* ref: FUN_009fab40 */
uint F_009fab40(unsigned int gen_a0)
{
  GEN_ENTER(0x9fab40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar3 = (float10)*(float *)((int)this + 8);
  fVar4 = (float10)*(float *)((int)this + 0xc);
  fVar1 = (float10)((float)GEN_TOF(((float10)1 /
                          (float10)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF((fVar4 * fVar4 +
                                                               (fVar3 * fVar3 +
                                                               (fVar2 * fVar2 + fVar1 * fVar1)))))))))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
  *(float *)((int)this + 8) = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) * fVar1)));
  *(float *)((int)this + 0xc) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 0xc))));
  return (uint)this;
}

/* ref: FUN_009fabd0 */
uint F_009fabd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fabd0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_009fac00 */
unsigned int F_009fac00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x9fac00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  uVar5 = param_3;
  uVar4 = param_2;
  fVar1 = *(float *)param_2;
  fVar2 = *(float *)param_3;
  param_3 = REFG(float, 0x1087f04);
  param_2 = (uint)gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(param_2 + 0xc) *
                                      (float10)*(float *)(uVar5 + 0xc) +
                                     ((float10)*(float *)(param_2 + 8) *
                                      (float10)*(float *)(uVar5 + 8) +
                                     ((float10)*(float *)(param_2 + 4) *
                                      (float10)*(float *)(uVar5 + 4) +
                                     (float10)fVar2 * (float10)fVar1))))));
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  if (fVar6 < (float10)0) {
    param_2 = param_2 ^ REFG(uint, 0x10920d0);
    fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
    param_3 = REFG(float, 0x1090708);
  }
  if ((float10)*(double *)&REFG(undefined, 0x10943f8) <= fVar6) {
    param_2 = (uint)gen_fl2bits(param_4);
    fVar7 = ((float10)1 - (float10)param_4) * ((float10)GEN_TOD(gen_bits2f(param_3)));
  }
  else {
    fVar8 = F_00c4d1fa(((float10)GEN_TOD(gen_bits2f(param_2))));
    fVar3 = ((float)GEN_TOF(((float10)1 / (float10)((float)GEN_TOF(SQRT((float10)(float)((float10)1 - fVar6 * fVar6)))))))
    ;
    fVar6 = ((float10)GEN_TOD(fsin(
                          (float10)((float)GEN_TOF((((float10)1 - (float10)param_4) * (float10)(float)fVar8))))))
    ;
    fVar7 = ((float10)(float)fVar6 * (float10)fVar3) * ((float10)GEN_TOD(gen_bits2f(param_3)));
    fVar6 = ((float10)GEN_TOD(fsin((float10)(float)((float10)(float)fVar8 * (float10)param_4))));
    param_2 = (uint)gen_fl2bits((float)((float10)(float)fVar6 * (float10)fVar3));
  }
  param_3 = (uint)gen_fl2bits((float)fVar7);
  fVar6 = ((float10)GEN_TOD(gen_bits2f(param_2)));
  fVar8 = ((float10)GEN_TOD(gen_bits2f(param_3)));
  *param_1 = (float)(fVar6 * (float10)fVar2 + fVar8 * (float10)fVar1);
  param_1[1] = ((float)GEN_TOF((fVar8 * (float10)*(float *)(uVar4 + 4) +
                      fVar6 * (float10)*(float *)(uVar5 + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(uVar4 + 8) * fVar8 +
                      (float10)*(float *)(uVar5 + 8) * fVar6)));
  param_1[3] = ((float)GEN_TOF((fVar6 * (float10)*(float *)(uVar5 + 0xc) +
                      (float10)*(float *)(uVar4 + 0xc) * fVar8)));
  return 0;
}

/* ref: FUN_009fad70 */
uint F_009fad70(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fad70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float in_xmm3 = (float)gen_a1;
  float in_xmm4 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float10 fVar1;
  float fVar2;
  
  fVar2 = gen_bits2f((uint)gen_fl2bits(in_ecx[2]) ^ REFG(uint, 0x10920d0));
  if (fVar2 <= REFG(float, 0x1090708)) {
    *(uint *)(param_4 + 4) = REFG(uint, 0x1333230) ^ REFG(uint, 0x10920d0);
  }
  else if ((float10)1 <= (float10)fVar2) {
    *(uint *)(param_4 + 4) = REFG(float, 0x1333230);
  }
  else {
    fVar1 = F_00c4d0e0(REFG(float, 0x1090708),in_xmm3,in_xmm4,(float10)fVar2);
    *(float *)(param_4 + 4) = (float)fVar1;
  }
  if (*(double *)&REFG(double, 0x10e1648) < (double)((float)GEN_TOF(ABS((float10)fVar2)))) {
    fVar1 = F_00c4d1fa((float10)in_ecx[5]);
    *(float *)param_4 = ((float)GEN_TOF(-(float10)(float)fVar1));
    *(undefined4 *)(param_4 + 8) = 0;
    return param_4;
  }
  fVar1 = F_00c4d1fa((float10)in_ecx[10]);
  *(float *)param_4 = (float)fVar1;
  fVar1 = F_00c4d1fa((float10)*in_ecx);
  *(float *)(param_4 + 8) = (float)fVar1;
  return param_4;
}

/* ref: hkMemoryAllocator::vf10 */
unsigned int F_009fae70(void)
{
  GEN_ENTER(0x9fae70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009fae80 */
uint F_009fae80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fae80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_009fae90 */
uint F_009fae90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fae90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_009faec0 */
uint F_009faec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9faec0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = uVar1;
  *(undefined4 *)((int)this + 8) = uVar2;
  *(undefined4 *)((int)this + 0xc) = uVar3;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar1 = *(undefined4 *)((int)this + 4);
  uVar2 = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)this + 0x10) = *param_2;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  *(undefined4 *)((int)this + 0x18) = uVar4;
  *(undefined4 *)((int)this + 0x1c) = uVar5;
  uVar3 = *(undefined4 *)((int)this + 0x18);
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined4 *)this = *(undefined4 *)this;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)this + 8) = uVar4;
  *(undefined4 *)((int)this + 0xc) = uVar5;
  *(undefined4 *)((int)this + 0x20) = uVar4;
  *(undefined4 *)((int)this + 0x24) = uVar5;
  *(undefined4 *)((int)this + 0x28) = uVar6;
  *(undefined4 *)((int)this + 0x2c) = uVar7;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)((int)this + 0x20) = uVar2;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)((int)this + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  return (uint)param_3;
}

/* ref: FUN_009faf70 */
uint F_009faf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9faf70u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fb070 */
uint F_009fb070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = 0;
  return (uint)param_1;
}

/* ref: FUN_009fb0a0 */
uint F_009fb0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb0a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
  *param_3 = *param_1 - *param_2;
  param_3[1] = fVar1 - fVar4;
  param_3[2] = fVar2 - fVar5;
  param_3[3] = fVar3 - fVar6;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  param_3[4] = param_1[4] - param_2[4];
  param_3[5] = fVar1 - fVar4;
  param_3[6] = fVar2 - fVar5;
  param_3[7] = fVar3 - fVar6;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[9];
  fVar5 = param_2[10];
  fVar6 = param_2[0xb];
  param_3[8] = param_1[8] * param_2[8];
  param_3[9] = fVar1 * fVar4;
  param_3[10] = fVar2 * fVar5;
  param_3[0xb] = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: FUN_009fb130 */
byte F_009fb130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(uint *)((*(int *)&gen_args[0]) + 8) & (*(uint *)&gen_args[1])) != 0;
}

/* ref: hkaDefaultAnimationControlListener::vf0 */
unsigned int F_009fb150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf1 */
unsigned int F_009fb160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf2 */
unsigned int F_009fb170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf3 */
unsigned int F_009fb180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: hkaDefaultAnimationControlListener::vf4 */
uint F_009fb190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e1654));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fb1d0 */
unsigned int F_009fb1d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb1d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_009fb210 */
unsigned int F_009fb210(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb210u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x3c) = param_2;
  return 0;
}

/* ref: FUN_009fb240 */
unsigned int F_009fb240(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb240u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: FUN_009fb280 */
float10 F_009fb280(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb280u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)1;
  if ((*(int *)(in_ecx + 0x78) == 2) || (*(int *)(in_ecx + 0x78) == 3)) {
    *(float *)(in_ecx + 0x74) = ((float)GEN_TOF((fVar2 - (float10)*(float *)(in_ecx + 0x74))));
  }
  fVar3 = (float10)param_2;
  if (REFG(float, 0x10905c4) < param_2) {
    fVar4 = fVar2 / fVar3;
  }
  else {
    fVar4 = (float10)REFG(double, 0x10e1668);
  }
  fVar1 = *(float *)(in_ecx + 0x74);
  *(float *)(in_ecx + 0x70) = (float)fVar4;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) !=
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x1087f04))) || fVar1 == REFG(float, 0x1087f04))) {
    *(undefined4 *)(in_ecx + 0x78) = 1;
    return (float10)((float)GEN_TOF((fVar3 * (fVar2 - (float10)fVar1))));
  }
  *(undefined4 *)(in_ecx + 0x78) = 0;
  return (float10)((float)GEN_TOF((fVar3 * (fVar2 - (float10)fVar1))));
}

/* ref: FUN_009fb300 */
uint F_009fb300(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb300u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  bool bVar2;
  float10 fVar3;
  
  if ((*(int *)(in_ecx + 0x78) == 0) || (*(int *)(in_ecx + 0x78) == 1)) {
    *(float *)(in_ecx + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(in_ecx + 0x74))));
  }
  if (REFG(float, 0x10905c4) < param_2) {
    fVar3 = (float10)1 / (float10)param_2;
  }
  else {
    fVar3 = (float10)REFG(double, 0x10e1668);
  }
  *(float *)(in_ecx + 0x70) = (float)fVar3;
  bVar2 = GEN_ISNAN(*(float *)(in_ecx + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
  uVar1 = 3;
  if (bVar2 == (bVar2 || *(float *)(in_ecx + 0x74) == REFG(float, 0x1087f04))) {
    uVar1 = 2;
  }
  *(uint *)(in_ecx + 0x78) = uVar1;
  return uVar1;
}

/* ref: FUN_009fb370 */
unsigned int F_009fb370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x7c) = param_2;
  if ((float10)*(float *)(in_ecx + 8) < (float10)param_2) {
    *(float *)(in_ecx + 8) = param_2;
  }
  return 0;
}

/* ref: FUN_009fb3a0 */
uint F_009fb3a0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9fb3a0u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *param_1 = param_8;
  param_1[2] = param_3;
  *(undefined2 *)(param_1 + 3) = (undefined2)param_4;
  *(undefined2 *)((int)param_1 + 0xe) = (undefined2)param_5;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  *(undefined2 *)(param_1 + 4) = (undefined2)param_6;
  *(undefined1 *)((int)param_1 + 0x12) = (undefined1)param_7;
  return (uint)param_1;
}

/* ref: FUN_009fb3e0 */
uint F_009fb3e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9fb3e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: FUN_009fb400 */
uint F_009fb400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf1 */
unsigned int F_009fb440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf2 */
unsigned int F_009fb450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf3 */
unsigned int F_009fb460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf4 */
unsigned int F_009fb470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fb470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf5 */
unsigned int F_009fb480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fb480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf6 */
unsigned int F_009fb490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf7 */
unsigned int F_009fb4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fb4a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf8 */
unsigned int F_009fb4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::IAnimationControllerListener::vf0 */
uint F_009fb4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x10e1614));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fb510 */
uint F_009fb510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) + param_1 * 0x38;
}

/* ref: FUN_009fb540 */
uint F_009fb540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc) + param_2 * 0x28;
}

/* ref: FUN_009fb560 */
uint F_009fb560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0 < (int)param_2) {
    *(uint *)(in_ecx + 8) = param_2;
  }
  return param_2;
}

/* ref: FUN_009fb590 */
unsigned int F_009fb590(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb590u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_009fb5f0 */
unsigned int F_009fb5f0(void)
{
  GEN_ENTER(0x9fb5f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009fb6f0 */
unsigned int F_009fb6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined2 *)((int)this + 0x40) = *(undefined2 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x42) = *(undefined2 *)((int)param_1 + 0x42);
  *(undefined2 *)((int)this + 0x44) = *(undefined2 *)(param_1 + 0x11);
  return 0;
}

/* ref: FUN_009fb770 */
unsigned int F_009fb770(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb770u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x50) = param_2;
  return 0;
}

/* ref: FUN_009fb790 */
byte F_009fb790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x58) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fb7a0 */
uint F_009fb7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if ((*(byte *)((int)this + 0x3c) & 1) != 0) {
    *param_1 = *(uint *)this;
    param_1[1] = *(uint *)((int)this + 4);
    uVar1 = *(uint *)((int)this + 0xc);
    param_1[2] = *(uint *)((int)this + 8);
    param_1[3] = uVar1;
    return (uint)param_1;
  }
  uVar1 = *(uint *)((int)this + 0x34);
  uVar2 = uVar1 ^ REFG(uint, 0x10920d0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_009fb800 */
unsigned int F_009fb800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
  }
  else {
    *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x34) != 0) {
    iVar2 = 0;
    do {
      *((char *)GEN_TOP((*(int *)((int)this + 0x40) + 0x58 + iVar2))) = (char)param_1;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar1 < *(uint *)((int)this + 0x34));
  }
  return 0;
}

/* ref: FUN_009fb840 */
unsigned int F_009fb840(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fb840u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  *(float *)(param_1 + 0x38) = param_2;
  if (*(int *)(param_1 + 0x34) != 0) {
    iVar2 = 0;
    do {
      *((float *)GEN_TOP((*(int *)(param_1 + 0x40) + 0x50 + iVar2))) = param_2;
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x60;
    } while (uVar1 < *(uint *)(param_1 + 0x34));
  }
  return 0;
}

/* ref: FUN_009fb880 */
uint F_009fb880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb880u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_009fb8a0 */
uint F_009fb8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fb8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint uVar1;
  float fVar2;
  uint uVar3;
  float * pfVar4;
  uint uVar5;
  float * pfVar6;
  int iVar7;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  
  uVar3 = REFG(float, 0x10920d0);
  *param_1 = (float)REFG(float, 0x1375ad0);
  param_1[1] = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  uVar1 = *(uint *)((int)this + 0x34);
  param_1[2] = (float)REFG(float, 0x1375ad8);
  uVar5 = 0;
  param_1[3] = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  if (3 < (int)uVar1) {
    pfVar4 = ((float *)GEN_TOP((*(int *)((int)this + 0x40) + 0x34)));
    pfVar6 = ((float *)GEN_TOP((*(int *)((int)this + 0x40) + 0x94)));
    iVar7 = (uVar1 - 4 >> 2) + 1;
    uVar5 = iVar7 * 4;
    do {
      if (((uint)gen_fl2bits(pfVar4[2]) & 1) == 0) {
        local_30 = *pfVar4;
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[-0xd];
        local_2c = pfVar4[-0xc];
        local_28 = pfVar4[-0xb];
        local_24 = pfVar4[-10];
      }
      fVar2 = pfVar6[2];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = *pfVar6;
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0xb];
        local_2c = pfVar4[0xc];
        local_28 = pfVar4[0xd];
        local_24 = pfVar4[0xe];
      }
      fVar2 = pfVar6[0x1a];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = pfVar6[0x18];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0x23];
        local_2c = pfVar4[0x24];
        local_28 = pfVar4[0x25];
        local_24 = pfVar4[0x26];
      }
      fVar2 = pfVar6[0x32];
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
      if (((uint)gen_fl2bits(fVar2) & 1) == 0) {
        local_30 = pfVar6[0x30];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = pfVar4[0x3b];
        local_2c = pfVar4[0x3c];
        local_28 = pfVar4[0x3d];
        local_24 = pfVar4[0x3e];
      }
      pfVar4 = pfVar4 + 0x60;
      pfVar6 = pfVar6 + 0x60;
      iVar7 = iVar7 + -1;
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
    } while (iVar7 != 0);
  }
  if (uVar5 < uVar1) {
    pfVar4 = ((float *)GEN_TOP((uVar5 * 0x60 + *(int *)((int)this + 0x40))));
    iVar7 = uVar1 - uVar5;
    do {
      if (((uint)gen_fl2bits(pfVar4[0xf]) & 1) == 0) {
        local_30 = pfVar4[0xd];
        local_2c = gen_bits2f((uint)gen_fl2bits(local_30) ^ uVar3);
        local_28 = local_30;
        local_24 = local_2c;
      }
      else {
        local_30 = *pfVar4;
        local_2c = pfVar4[1];
        local_28 = pfVar4[2];
        local_24 = pfVar4[3];
      }
      pfVar4 = pfVar4 + 0x18;
      iVar7 = iVar7 + -1;
      *param_1 = (float)((float10)*param_1 + (float10)local_30);
      param_1[1] = (float)((float10)local_2c + (float10)param_1[1]);
      param_1[2] = (float)((float10)param_1[2] + (float10)local_28);
      param_1[3] = (float)((float10)local_24 + (float10)param_1[3]);
    } while (iVar7 != 0);
  }
  return (uint)param_1;
}

/* ref: FUN_009fbc30 */
unsigned int F_009fbc30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbc30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = 0;
  *(undefined1 *)(in_ecx + 2) = 1;
  in_ecx[1] = (undefined4)gen_fl2bits(param_2);
  return 0;
}

/* ref: FUN_009fbc80 */
uint F_009fbc80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbc80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 0x40) = param_2;
  return uVar1;
}

/* ref: FUN_009fbcc0 */
uint F_009fbcc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbcc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 0x3c) = param_2;
  return uVar1;
}

/* ref: FUN_009fbcf0 */
uint F_009fbcf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fbcf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x1c);
  *(float *)(uVar1 + 8) = param_2;
  return uVar1;
}

/* ref: FUN_009fbd20 */
ushort F_009fbd20(unsigned int gen_a0)
{
  GEN_ENTER(0x9fbd20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  ushort local_c;
  
  local_c = (ushort)(int)TRUNC((double)*((float *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 8))) *
                               *(double *)&REFG(undefined, 0x1088070));
  return local_c;
}

/* ref: FUN_009fbd60 */
uint F_009fbd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbd60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *((float *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 8))) =
       ((float)GEN_TOF(((float10)(param_2 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  return param_2 & 0xffff;
}

/* ref: FUN_009fbd90 */
uint F_009fbd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0x1c);
  fVar1 = ((float)GEN_TOF(((float10)(param_2 & 0xffff) / (float10)*(double *)&REFG(undefined, 0x1088070))));
  *(float *)(iVar2 + 0x7c) = fVar1;
  if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
    *(float *)(iVar2 + 8) = fVar1;
  }
  return param_2 & 0xffff;
}

/* ref: FUN_009fbdf0 */
unsigned int F_009fbdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1 != 0) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 0xc);
    while (*piVar2 != param_1) {
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 1;
      if (3 < iVar1) {
        return 0;
      }
    }
    *(undefined4 *)((int)this + iVar1 * 4 + 0xc) = 0;
  }
  return 0;
}

/* ref: FUN_009fbe40 */
byte F_009fbe40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fbe50 */
byte F_009fbe50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_009fbe90 */
uint F_009fbe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbe90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x108) + param_2 * 0xc;
}

/* ref: FUN_009fbf00 */
uint F_009fbf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbf00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fbf10 */
uint F_009fbf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined1)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fc000 */
uint F_009fc000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc000u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2;
}

/* ref: FUN_009fc010 */
uint F_009fc010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fc010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_3;
  if (param_3 < 0) {
    iVar3 = *(int *)((int)this + 4);
  }
  if ((int)param_2 < iVar3) {
    piVar2 = (int *)(*(int *)this + param_2 * 4);
    uVar1 = param_2;
    do {
      if (*piVar2 == *param_1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < iVar3);
  }
  return 0xffffffff;
}

/* ref: FUN_009fc060 */
uint F_009fc060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc060u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fc0d0 */
uint F_009fc0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc0d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fc120 */
unsigned int F_009fc120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (3 < param_2) {
    iVar2 = (param_2 - 4U >> 2) + 1;
    iVar3 = iVar2 * 4;
    puVar1 = (undefined4 *)(param_1 + 8);
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
    *(undefined4 *)(param_1 + -4 + iVar3 * 4) = *param_3;
  }
  return 0;
}

/* ref: FUN_009fc190 */
uint F_009fc190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc190u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fc210 */
uint F_009fc210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_009fc220 */
unsigned int F_009fc220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fc260 */
uint F_009fc260(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_009fc270 */
unsigned int F_009fc270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_009fc290 */
unsigned int F_009fc290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc290u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fc2b0 */
uint F_009fc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fc2f0 */
uint F_009fc2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc2f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_009fc320 */
uint F_009fc320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_009fc350 */
uint F_009fc350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_009fc380 */
uint F_009fc380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: FUN_009fc3c0 */
uint F_009fc3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf8 */
unsigned int F_009fc400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf9 */
uint F_009fc410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  return param_2;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf0 */
uint F_009fc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc420u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: hkMemoryAllocator::vf0 */
uint F_009fc430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc430u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00d9b7c0(in_ecx);
  return in_ecx;
}

/* ref: FUN_009fc450 */
byte F_009fc450(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x78))) == 1;
}

/* ref: FUN_009fc470 */
byte F_009fc470(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *((char *)GEN_TOP((*(int *)(param_1 + 0x24) + 0xe))) == '\x01';
}

/* ref: FUN_009fc4d0 */
uint F_009fc4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9fc4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1,param_2,param_3,param_5,param_6);
  return param_1;
}

/* ref: FUN_009fc500 */
uint F_009fc500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fc500u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  (*(float *)(gen_frame + 0x54)) = fVar7;
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  (*(float *)(gen_frame + 0x58)) = fVar5;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  (*(float *)(gen_frame + 0x48)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = *param_3;
  (*(float *)(gen_frame + 0x4c)) = fVar2;
  fVar1 = (float)((float10)*param_3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)fVar6);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)fVar7);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2))));
  (*(float *)(gen_frame + 0x48)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0x48)) = fVar4;
  (*(float *)(gen_frame + 0x0)) = fVar5;
  (*(float *)(gen_frame + 0x50)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar6;
  (*(float *)(gen_frame + 0x8)) = fVar7;
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar3;
  bVar8 = F_00a1c690(&(*(float *)(gen_frame + 0x0)),fVar4,((undefined1 *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x30)));
  if (bVar8 != 0) {
    (*(float *)(gen_frame + 0x48)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x5c)));
    fVar1 = ((float)GEN_TOF(ABS((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)(*(float *)(gen_frame + 0x5c))))));
    (*(float *)(gen_frame + 0x48)) = fVar1;
    *param_4 = (float)((float10)fVar1 / (float10)(*(float *)(gen_frame + 0x50)));
    *param_5 = (*(float *)(gen_frame + 0x30));
    param_5[1] = (*(float *)(gen_frame + 0x34));
    param_5[2] = (*(float *)(gen_frame + 0x38));
    param_5[3] = 0.0;
    *param_1 = 1;
    return (uint)param_1;
  }
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_009fc680 */
uint F_009fc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009fc740 */
uint F_009fc740(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009fa500(this);
  return (uint)this;
}

/* ref: FUN_009fc750 */
byte F_009fc750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009fc7a0 */
uint F_009fc7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x11))) == '\0') {
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

/* ref: FUN_009fc800 */
uint F_009fc800(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_009fc810 */
uint F_009fc810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009fc820 */
uint F_009fc820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc820u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_009fc870 */
undefined4 * F_009fc870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fc870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x11) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009fc8a0 */
uint F_009fc8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_009fa500(this);
  return (uint)param_1;
}

/* ref: FUN_009fc8c0 */
uint F_009fc8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fc8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009fa5d0(this);
  return (uint)this;
}

/* ref: FUN_009fc8e0 */
uint F_009fc8e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc910 */
uint F_009fc910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc930 */
uint F_009fc930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  uVar1 = *param_3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009fc950 */
uint F_009fc950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc950u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_1 = param_2;
  param_1[1] = param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc970 */
uint F_009fc970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = *param_3;
  return (uint)param_1;
}

/* ref: FUN_009fc9b0 */
uint F_009fc9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc9d0 */
uint F_009fc9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fc9f0 */
uint F_009fc9f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fc9f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_009fca10 */
uint F_009fca10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fca20 */
uint F_009fca20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_009fca70 */
uint F_009fca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009fca80 */
uint F_009fca80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fca80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fcac0 */
unsigned int F_009fcac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fcac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  int iVar5;
  
  if (param_1 != param_2) {
    iVar5 = *param_3;
    piVar4 = param_1;
    do {
      iVar5 = iVar5 + 1;
      *param_3 = iVar5;
      if (*(char *)((int)piVar4 + 0x11) == '\0') {
        piVar2 = (int *)piVar4[2];
        if (*(char *)((int)piVar2 + 0x11) == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar4 = piVar2;
          piVar2 = (int *)*piVar2;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar2 + 0x11);
            piVar4 = piVar2;
            piVar2 = (int *)*piVar2;
          }
        }
        else {
          cVar1 = *(char *)(piVar4[1] + 0x11);
          piVar3 = (int *)piVar4[1];
          piVar2 = piVar4;
          while ((piVar4 = piVar3, cVar1 == '\0' && (piVar2 == (int *)piVar4[2]))) {
            cVar1 = *(char *)(piVar4[1] + 0x11);
            piVar3 = (int *)piVar4[1];
            piVar2 = piVar4;
          }
        }
      }
    } while (piVar4 != param_2);
  }
  return 0;
}

/* ref: FUN_009fcb30 */
uint F_009fcb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined2 *)this = *param_1;
  *(undefined2 *)((int)this + 2) = param_1[1];
  uVar1 = *(undefined4 *)(param_1 + 10);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = *(undefined4 *)(param_1 + 0xe);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar2;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  return (uint)this;
}

/* ref: FUN_009fcb60 */
byte F_009fcb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009fcb80 */
uint F_009fcb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + *param_1,*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_009fcba0 */
uint F_009fcba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  uint uVar6;
  int iVar7;
  
  piVar5 = (*(int * PTR32 *)&gen_args[1]);
  piVar3 = (*(int * PTR32 *)&gen_args[1]);
  while (piVar5 != (*(int * PTR32 *)&gen_args[2])) {
    iVar2 = piVar5[3];
    iVar7 = *(int *)(iVar2 + 0xc);
    if (iVar7 != 0) {
      ((int *)(gen_frame + 0xc))[0] = iVar7;
    }
    uVar6 = (uint)(iVar7 != 0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x10);
      uVar6 = uVar6 + 1;
    }
    if (*(int *)(iVar2 + 0x14) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x14);
      uVar6 = uVar6 + 1;
    }
    if (*(int *)(iVar2 + 0x18) != 0) {
      ((int *)(gen_frame + 0xc))[(int)(uVar6)] = *(int *)(iVar2 + 0x18);
      uVar6 = uVar6 + 1;
    }
    iVar7 = 0;
    if (uVar6 != 0) {
      do {
        ((code *)*(gen_code32 *)(*(int *)((int *)(gen_frame + 0xc))[(int)(iVar7)] + 0x1c))((int *)((int *)(gen_frame + 0xc))[(int)(iVar7)],iVar2,&(*(undefined4 *)&gen_args[3]));
        iVar7 = iVar7 + 1;
        piVar5 = piVar3;
      } while (iVar7 < (int)uVar6);
    }
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      piVar3 = (int *)piVar5[2];
      if (*(char *)((int)piVar3 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar3 + 0x11);
        piVar5 = piVar3;
        piVar4 = (int *)*piVar3;
        while (piVar3 = piVar5, cVar1 == '\0') {
          cVar1 = *(char *)(*piVar4 + 0x11);
          piVar5 = piVar4;
          piVar4 = (int *)*piVar4;
        }
      }
      else {
        cVar1 = *(char *)(piVar5[1] + 0x11);
        piVar3 = (int *)piVar5[1];
        piVar4 = piVar5;
        while ((piVar5 = piVar3, piVar3 = piVar5, cVar1 == '\0' && (piVar4 == (int *)piVar5[2]))) {
          cVar1 = *(char *)(piVar5[1] + 0x11);
          piVar3 = (int *)piVar5[1];
          piVar4 = piVar5;
        }
      }
    }
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (*(undefined4 *)&gen_args[4]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_009fcc80 */
uint F_009fcc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fcc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(int *)((int)this + 4) + *param_1,(uint)*(ushort *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_009fcca0 */
uint F_009fcca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fccc0 */
uint F_009fccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009fcce0 */
uint F_009fcce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009fcda0 */
uint F_009fcda0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcda0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_009fcdd0 */
uint F_009fcdd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fcdd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_009fcce0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009fce50 */
uint F_009fce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fce50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fce80 */
unsigned int F_009fce80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fce80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[2];
  fVar4 = in_ecx[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *in_ecx = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  in_ecx[1] = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  in_ecx[2] = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  in_ecx[3] = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  return 0;
}

/* ref: FUN_009fcf10 */
uint F_009fcf10(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcf10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_009fcf30 */
unsigned int F_009fcf30(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x3c);
  }
  return 0;
}

/* ref: FUN_009fcf70 */
uint F_009fcf70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fcf70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x10);
  *(undefined1 *)(param_1 + uVar1) = (undefined1)param_2;
  return uVar1;
}

/* ref: FUN_009fcfa0 */
uint F_009fcfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fcfa0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fcfd0 */
uint F_009fcfd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9fcfd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  *(float *)(param_1 + 0x80) = param_2;
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*(uint *)(param_1 + 0x28) + 0xc))) + 0xc))) -
                 (float10)param_2)));
  if ((float10)fVar1 <= (float10)*(float *)(param_1 + 8)) {
    *(float *)(param_1 + 8) = fVar1;
  }
  return *(uint *)(param_1 + 0x28);
}

/* ref: FUN_009fd010 */
uint F_009fd010(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd010u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd030 */
uint F_009fd030(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd030u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fd060 */
uint F_009fd060(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd060u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  return uVar2;
}

/* ref: FUN_009fd080 */
unsigned int F_009fd080(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0x290);
  }
  return 0;
}

/* ref: FUN_009fd0b0 */
uint F_009fd0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fd0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *(undefined1 *)this = (undefined1)param_2;
  *(undefined1 *)((int)this + 1) = (undefined1)param_1;
  *(undefined1 *)((int)this + 2) = (undefined1)param_4;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  *(undefined2 *)((int)this + 6) = 0xffff;
  return (uint)this;
}

/* ref: FUN_009fd150 */
uint F_009fd150(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd150u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd170 */
uint F_009fd170(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd190 */
uint F_009fd190(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd1b0 */
uint F_009fd1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_009fd1d0 */
uint F_009fd1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd1f0 */
uint F_009fd1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd210 */
unsigned int F_009fd210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x50) = REFG(float, 0x1087f04);
  F_009fb6f0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = param_2;
  *(undefined2 *)((int)this + 0x58) = 0x100;
  return 0;
}

/* ref: FUN_009fd240 */
uint F_009fd240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
    }
  }
  else {
    this = (undefined *)((int)this - 0x10);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_009fd290 */
uint F_009fd290(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd290u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  float * pfVar3;
  
  fVar1 = *in_ecx;
  fVar2 = in_ecx[1];
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1087f04);
  pfVar3 = &(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar1 / (float10)fVar2);
  if (!((float10)0 < (float10)(float)((float10)fVar1 / (float10)fVar2))) {
    pfVar3 = &(*(float *)(gen_frame + 0x4));
  }
  if ((GEN_ISNAN(REFG(float, 0x1087f04)) || GEN_ISNAN(*pfVar3)) || (REFG(float, 0x1087f04) < *pfVar3 || REFG(uint, 0x1087f04) == *pfVar3)) {
    pfVar3 = &(*(float *)(gen_frame + 0x0));
  }
  return (uint)pfVar3;
}

/* ref: FUN_009fd2f0 */
ushort F_009fd2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd2f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  float10 fVar2;
  ushort local_c;
  
  dVar1 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x28))) +
                                                      0xc))) + 0xc))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070))));
  fVar2 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar1),
                       (int)((ulonglong)gen_d2bits(dVar1) >> 0x20));
  local_c = (ushort)(int)TRUNC(fVar2);
  return local_c;
}

/* ref: FUN_009fd340 */
uint F_009fd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  double dVar4;
  float10 fVar5;
  ushort local_c;
  
  dVar4 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x28))) +
                                                      0xc))) + 0xc))) *
                         (float10)*(double *)&REFG(undefined, 0x1088070))));
  fVar5 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                       (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
  local_c = (ushort)(int)TRUNC(fVar5);
  if (local_c < (ushort)param_2) {
    fVar5 = (float10)0;
  }
  else {
    fVar5 = (float10)(int)(((int)TRUNC(fVar5) & 0xffffU) - (param_2 & 0xffff)) /
            (float10)*(double *)&REFG(undefined, 0x1088070);
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar2 + 0x80) = (float)fVar5;
  uVar3 = *((uint *)GEN_TOP((*(int *)(iVar2 + 0x28) + 0xc)));
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(uVar3 + 0xc) - (float10)(float)fVar5)));
  if ((float10)fVar1 <= (float10)*(float *)(iVar2 + 8)) {
    *(float *)(iVar2 + 8) = fVar1;
  }
  return uVar3;
}

/* ref: FUN_009fd4a0 */
uint F_009fd4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd4a0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar2 = in_ecx[1] * in_ecx[1];
  fVar3 = in_ecx[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_009fd4d0 */
uint F_009fd4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd4d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_2) {
    bVar1 = F_00d95690(param_1,this,param_2,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fd500 */
uint F_009fd500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd500u, gen_a0, gen_a1, gen_a2, 0u);
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
    bVar1 = F_00d95690(param_1,this,iVar3,0x30);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_2;
  return uVar2;
}

/* ref: FUN_009fd540 */
uint F_009fd540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd540u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fd570 */
uint F_009fd570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fd570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_2) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_2) {
      uVar2 = param_2;
    }
    F_00d95690(param_1,this,uVar2,4);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  iVar5 = param_2 - (int)puVar4;
  iVar6 = 0;
  iVar1 = *(int *)this + (int)((int)(uintptr_t)puVar4) * 4;
  if (3 < iVar5) {
    iVar7 = (iVar5 - 4U >> 2) + 1;
    iVar6 = iVar7 * 4;
    puVar3 = (undefined4 *)(iVar1 + 8);
    do {
      puVar4 = puVar3 + 4;
      iVar7 = iVar7 + -1;
      puVar3[-2] = *param_3;
      puVar3[-1] = *param_3;
      *puVar3 = *param_3;
      puVar3[1] = *param_3;
      puVar3 = puVar4;
    } while (iVar7 != 0);
  }
  if (iVar5 <= iVar6) {
    *(uint *)((int)this + 4) = param_2;
    return (uint)puVar4;
  }
  do {
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar1 + -4 + iVar6 * 4) = *param_3;
  } while (iVar6 < iVar5);
  *(uint *)((int)this + 4) = param_2;
  return param_2;
}

/* ref: FUN_009fd620 */
uint F_009fd620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd620u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fd650 */
uint F_009fd650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd650u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fd690 */
uint F_009fd690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd690u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fd6b0 */
uint F_009fd6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd6b0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fd6f0 */
unsigned int F_009fd6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd6f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
    *puVar1 = *param_3;
  }
  return 0;
}

/* ref: FUN_009fd710 */
unsigned int F_009fd710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd710u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fd730 */
uint F_009fd730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd730u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
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
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar1));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar2 = (*(float *)((char *)&auVar9 + 4));
  fVar3 = (*(float *)((char *)&auVar9 + 8));
  fVar4 = (*(float *)((char *)&auVar9 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x10e1574) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar6 = *(float *)&REFG(undefined, 0x10e1578) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar7 = *(float *)&REFG(undefined, 0x10e157c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x10e1584) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x10e1588) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x10e158c) * fVar4;
  *param_2 = ~-(uint)((*(float *)((char *)&auVar1 + 0)) <= 0.0) &
             (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10e1570) - ((*(float *)((char *)&auVar1 + 0)) * fVar8) * fVar8) *
                               (*(float *)&REFG(undefined, 0x10e1580) * fVar8));
  param_2[1] = ~-(uint)((*(float *)((char *)&auVar1 + 4)) <= 0.0) & (uint)gen_fl2bits(fVar5 * fVar2);
  param_2[2] = ~-(uint)((*(float *)((char *)&auVar1 + 8)) <= 0.0) & (uint)gen_fl2bits(fVar6 * fVar3);
  param_2[3] = ~-(uint)((*(float *)((char *)&auVar1 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar7 * fVar4);
  return (uint)param_2;
}

/* ref: FUN_009fd770 */
uint F_009fd770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fd7b0 */
uint F_009fd7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd7b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fd7f0 */
uint F_009fd7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd7f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fd830 */
unsigned int F_009fd830(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,0xc);
  }
  return 0;
}

/* ref: FUN_009fd870 */
uint F_009fd870(unsigned int gen_a0)
{
  GEN_ENTER(0x9fd870u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf1 */
uint F_009fd8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: Client::Graphics::Animation::AnimationAllocator::vf2 */
uint F_009fd8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fd8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009fd8e0 */
uint F_009fd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_00d96d40(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x290);
  }
  return (uint)this;
}

/* ref: FUN_009fd920 */
uint F_009fd920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  uint uVar3;
  
  F_009fb280(*(undefined4 *)(param_2 + 0x1c),*(float *)(param_1 + 4));
  if (0 < (short)*(ushort *)(param_1 + 0xe)) {
    iVar2 = *(int *)(param_2 + 0x1c);
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_1 + 0xe) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)(iVar2 + 0x7c) = fVar1;
    if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
      *(float *)(iVar2 + 8) = fVar1;
    }
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x10);
  if (0 < (short)*(ushort *)(param_1 + 0x10)) {
    uVar3 = F_009fd340(param_2,uVar3);
  }
  return uVar3;
}

/* ref: FUN_009fd990 */
uint F_009fd990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fd990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined4 * puVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    if (*(int *)((int)this + 0x40) != 0) {
      iVar4 = *(int *)((int)this + 0x40) + -0x10;
      if (iVar4 != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar4);
      }
      *(undefined4 *)((int)this + 0x40) = 0;
    }
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
    }
    return (uint)this;
  }
  piVar1 = (int *)((int)this + -0x10);
  iVar4 = *piVar1 + -1;
  if (-1 < iVar4) {
    puVar3 = (undefined4 *)((int)this + *piVar1 * 0x50 + 0x40);
    do {
      iVar2 = puVar3[-0x14];
      puVar3 = puVar3 + -0x14;
      if (iVar2 != 0) {
        F_00401530(iVar2,0x60,*(undefined4 *)(iVar2 + -0x10),((code *)REFP(0x9fb5f0)));
        if (iVar2 + -0x10 != 0) {
          ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2 + -0x10);
        }
        *puVar3 = 0;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_009fda60 */
unsigned int F_009fda60(unsigned int gen_a0)
{
  GEN_ENTER(0x9fda60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1,4);
  }
  return 0;
}

/* ref: hkaRaycastInterface::vf0 */
uint F_009fda90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fda90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e163c));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_009fdad0 */
uint F_009fdad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fdad0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 4))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),param_1);
  *(short *)(uVar2 + 4) = (short)param_1;
  return uVar2;
}

/* ref: FUN_009fdb00 */
uint F_009fdb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e163c));
  if ((param_1 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,4);
  }
  return (uint)this;
}

/* ref: FUN_009fdb40 */
uint F_009fdb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb60 */
uint F_009fdb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb80 */
uint F_009fdb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdb90 */
uint F_009fdb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fdba0 */
uint F_009fdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009fdbe0 */
unsigned int F_009fdbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009fdbe0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,0xcb);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return 0;
}

/* ref: FUN_009fdc20 */
uint F_009fdc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x11) == '\0') {
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

/* ref: FUN_009fdca0 */
uint F_009fdca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  puVar4 = puVar3;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        if ((*(char *)((int)puVar3 + 0x11) != '\0') && (*param_2 < (uint)puVar1[3])) {
          puVar3 = puVar1;
        }
        puVar2 = (undefined4 *)*puVar1;
        puVar4 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if (*(char *)((int)puVar3 + 0x11) == '\0') {
    puVar1 = (undefined4 *)*puVar3;
  }
  else {
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  }
  if (*(char *)((int)puVar1 + 0x11) == '\0') {
    do {
      if (*param_2 < (uint)puVar1[3]) {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      else {
        puVar2 = (undefined4 *)puVar1[2];
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  *param_1 = (int)puVar4;
  param_1[1] = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009fdd70 */
uint F_009fdd70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fdd70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_009fdd90 */
uint F_009fdd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fdd90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_4 = (int *)(uintptr_t)gen_a4;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  int * piVar6;
  
  if (0xfffffffd < *(uint *)((int)this + 8)) {
    F_00429760(param_4,0x14,0xcb);
                    
    F_00c4579a("map/set<T> too long");
  }
  *(uint *)((int)this + 8) = *(uint *)((int)this + 8) + 1;
  param_4[1] = (int)param_3;
  if (param_3 == *(undefined4 * PTR32 *)((int)this + 4)) {
    (*(undefined4 * PTR32 *)((int)this + 4))[1] = param_4;
    **(undefined4 * PTR32 *)((int)this + 4) = param_4;
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
  }
  else if ((char)param_2 == '\0') {
    param_3[2] = param_4;
    if (param_3 == *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8)))) {
      *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = param_4;
    }
  }
  else {
    *param_3 = param_4;
    if (param_3 == ((undefined4 *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) {
      **(int * PTR32 *)((int)this + 4) = (int)param_4;
    }
  }
  cVar1 = *(char *)(param_4[1] + 0x10);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x10) == '\0') {
        *(undefined1 *)(piVar5 + 4) = 1;
        *(undefined1 *)(iVar2 + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x11) == '\0') {
            *(int * PTR32 *)(*piVar4 + 4) = piVar5;
          }
          piVar4[1] = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          }
          else {
            piVar6 = (int *)piVar5[1];
            if (piVar5 == (int *)*piVar6) {
              *piVar6 = (int)piVar4;
            }
            else {
              piVar6[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar5;
          piVar5[1] = (int)piVar4;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x11) == '\0') {
          *(int * PTR32 *)(piVar6[2] + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
          piVar6[2] = (int)piVar5;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)piVar3[2]) {
            piVar3[2] = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
          else {
            *piVar3 = (int)piVar6;
            piVar6[2] = (int)piVar5;
          }
        }
LAB_009fdf8d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x10) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x11))) == '\0') {
            *((int * PTR32 *)GEN_TOP((*(int *)(iVar2 + 8) + 4))) = piVar5;
          }
          *(int *)(iVar2 + 4) = piVar5[1];
          if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
            *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = iVar2;
          }
          else {
            piVar4 = (int *)piVar5[1];
            if (piVar5 == (int *)piVar4[2]) {
              piVar4[2] = iVar2;
            }
            else {
              *piVar4 = iVar2;
            }
          }
          *(int * PTR32 *)(iVar2 + 8) = piVar5;
          piVar5[1] = iVar2;
          piVar4 = piVar5;
        }
        *(undefined1 *)(piVar4[1] + 0x10) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x11) == '\0') {
          *(int * PTR32 *)(*piVar6 + 4) = piVar5;
        }
        piVar6[1] = piVar5[1];
        if (piVar5 == *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar6;
        }
        else {
          piVar3 = (int *)piVar5[1];
          if (piVar5 == (int *)*piVar3) {
            *piVar3 = (int)piVar6;
          }
          else {
            piVar3[2] = (int)piVar6;
          }
        }
        *piVar6 = (int)piVar5;
        goto LAB_009fdf8d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_009fdfc0 */
uint F_009fdfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fdfc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_009fe010 */
byte F_009fe010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe010u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_009fe050 */
unsigned int F_009fe050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_009fcac0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_009fe070 */
uint F_009fe070(unsigned int gen_a0)
{
  GEN_ENTER(0x9fe070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 0x20 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_009fe0b0 */
uint F_009fe0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe0b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 0x20 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_009fe100 */
uint F_009fe100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fe100u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  undefined4 * puVar2;
  bool bVar3;
  
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar3 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar2[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar1;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) < (uint)puVar2[3];
      }
      else {
        bVar3 = *(uint *)((*(int *)&gen_args[2]) + 0xc) <= (uint)puVar2[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar3);
      if (bVar3 == false) {
        puVar1 = (undefined4 *)puVar2[2];
      }
      else {
        puVar1 = (undefined4 *)*puVar2;
      }
    } while (*(char *)((int)puVar1 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_009fdd90((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009fa5d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_009fdd90((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00429760((*(int *)&gen_args[2]),0x14,0xcb);
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009fe1e0 */
uint F_009fe1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fe1e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009fe220 */
uint F_009fe220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fe220u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_009fcba0(param_1,param_2,param_3,param_4,param_5);
  return param_1;
}

/* ref: FUN_009fe250 */
uint F_009fe250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9fe250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = param_2;
  while (piVar3 != param_3) {
    (*param_4)(piVar3[3] + param_5,(undefined4)gen_fl2bits(param_6));
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x11);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = (undefined4)gen_fl2bits(param_6);
  param_1[3] = param_7;
  return (uint)param_1;
}

/* ref: FUN_009fe2e0 */
int F_009fe2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe2e0u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  char cVar1;
  int * piVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  iVar3 = 0;
  piVar2 = param_1;
  do {
    do {
      while( true ) {
        do {
          piVar5 = piVar2;
          if (piVar5 == param_2) {
            return iVar3;
          }
          if (*((int *)GEN_TOP((*(int *)(piVar5[3] + 0x1c) + 0x78))) == 1) {
            iVar3 = iVar3 + 1;
          }
          piVar2 = piVar5;
        } while (*(char *)((int)piVar5 + 0x11) != '\0');
        piVar2 = (int *)piVar5[2];
        if (*(char *)((int)piVar2 + 0x11) != '\0') break;
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar5 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar5 + 0x11);
          piVar2 = piVar5;
          piVar5 = (int *)*piVar5;
        }
      }
      piVar2 = (int *)piVar5[1];
    } while (*(char *)((int)piVar2 + 0x11) != '\0');
    do {
      piVar4 = piVar2;
      piVar2 = piVar4;
      if (piVar5 != (int *)piVar4[2]) break;
      piVar2 = (int *)piVar4[1];
      piVar5 = piVar4;
    } while (*(char *)((int)piVar2 + 0x11) == '\0');
  } while( true );
}

/* ref: FUN_009fe350 */
uint F_009fe350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fe350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = param_2;
  while ((piVar3 != param_3 && (*((char *)GEN_TOP((*(int *)(piVar3[3] + 0x24) + 0xe))) != '\x01'))) {
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x11);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009fe3d0 */
unsigned int F_009fe3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 * puVar4;
  int iVar5;
  
  puVar4 = param_1;
  iVar5 = param_2;
  if (0 < param_2) {
    do {
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = *param_3;
        puVar4[1] = param_3[1];
        uVar1 = *(undefined4 *)(param_3 + 10);
        uVar2 = *(undefined4 *)(param_3 + 0xc);
        uVar3 = *(undefined4 *)(param_3 + 0xe);
        *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_3 + 8);
        *(undefined4 *)(puVar4 + 10) = uVar1;
        *(undefined4 *)(puVar4 + 0xc) = uVar2;
        *(undefined4 *)(puVar4 + 0xe) = uVar3;
      }
      puVar4 = puVar4 + 0x10;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

/* ref: FUN_009fe410 */
uint F_009fe410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9fe410u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  int * piVar6;
  int * piVar7;
  bool bVar8;
  float10 fVar9;
  
  piVar6 = (*(int * PTR32 *)&gen_args[1]);
  while (piVar6 != (*(int * PTR32 *)&gen_args[2])) {
    iVar3 = piVar6[3];
    iVar4 = *(int *)(iVar3 + 0x1c);
    if ((*(int *)(iVar4 + 0x78) == 2) || (*(int *)(iVar4 + 0x78) == 3)) {
      *(float *)(iVar4 + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar4 + 0x74))));
    }
    if (REFG(float, 0x10905c4) < (*(float *)&gen_args[4])) {
      fVar9 = (float10)1 / (float10)(*(float *)&gen_args[4]);
    }
    else {
      fVar9 = (float10)REFG(double, 0x10e1668);
    }
    *(float *)(iVar4 + 0x70) = (float)fVar9;
    bVar8 = GEN_ISNAN(*(float *)(iVar4 + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
    *(uint *)(iVar4 + 0x78) = (uint)(bVar8 != (bVar8 || *(float *)(iVar4 + 0x74) == REFG(float, 0x1087f04)));
    if (0 < (short)(*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[6]) + 2))) {
      iVar4 = *(int *)(iVar3 + 0x1c);
      fVar1 = ((float)GEN_TOF(((float10)(*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[6]) + 2)) / (float10)*(double *)&REFG(undefined, 0x1088070))));
      *(float *)(iVar4 + 0x7c) = fVar1;
      if ((float10)*(float *)(iVar4 + 8) < (float10)fVar1) {
        *(float *)(iVar4 + 8) = fVar1;
      }
    }
    if (0 < (short)(*(uint *)&gen_args[7])) {
      F_009fd340(iVar3,(*(uint *)&gen_args[7]));
    }
    if (*(char *)((int)piVar6 + 0x11) == '\0') {
      piVar5 = (int *)piVar6[2];
      if (*(char *)((int)piVar5 + 0x11) == '\0') {
        cVar2 = *(char *)(*piVar5 + 0x11);
        piVar6 = piVar5;
        piVar5 = (int *)*piVar5;
        while (cVar2 == '\0') {
          cVar2 = *(char *)(*piVar5 + 0x11);
          piVar6 = piVar5;
          piVar5 = (int *)*piVar5;
        }
      }
      else {
        cVar2 = *(char *)(piVar6[1] + 0x11);
        piVar7 = (int *)piVar6[1];
        piVar5 = piVar6;
        while ((piVar6 = piVar7, cVar2 == '\0' && (piVar5 == (int *)piVar6[2]))) {
          cVar2 = *(char *)(piVar6[1] + 0x11);
          piVar7 = (int *)piVar6[1];
          piVar5 = piVar6;
        }
      }
    }
  }
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)&gen_args[0])[1] = (undefined4)gen_fl2bits((*(float *)&gen_args[4]));
  (*(undefined4 * PTR32 *)&gen_args[0])[2] = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 * PTR32 *)&gen_args[0])[3] = (*(undefined4 *)&gen_args[6]);
  (*(undefined4 * PTR32 *)&gen_args[0])[4] = (*(uint *)&gen_args[7]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_009fe550 */
uint F_009fe550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9fe550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  piVar3 = param_2;
  while (piVar3 != param_3) {
    (*param_4)(piVar3[3] + param_5,param_6);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x11);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  param_1[3] = param_7;
  return (uint)param_1;
}

/* ref: FUN_009fe5e0 */
uint F_009fe5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_009fe600 */
uint F_009fe600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9fe600u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2 - param_1 >> 2;
  uVar2 = iVar3 - (param_2 - param_1 >> 0x1f);
  iVar4 = (int)uVar2 >> 1;
  if (0 < iVar4) {
    iVar5 = iVar4 * 2 + 2;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + -1;
      (*(int *)(gen_frame + 0x8)) = iVar5 + -2;
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_1 + -4 + iVar1);
      iVar1 = iVar4;
      for (iVar5 = iVar5 + -2; iVar5 < iVar3; iVar5 = iVar5 * 2 + 2) {
        uVar2 = (*param_3)(*(undefined4 *)(param_1 + iVar5 * 4),
                           *(undefined4 *)(param_1 + -4 + iVar5 * 4));
        if ((char)uVar2 != '\0') {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        iVar1 = iVar5;
      }
      param_2 = iVar1;
      if (iVar5 == iVar3) {
        param_2 = iVar3 + -1;
        *(undefined4 *)(param_1 + iVar1 * 4) = *(undefined4 *)(param_1 + -4 + iVar3 * 4);
      }
      uVar2 = F_009faa20(param_1,param_2,iVar4,&(*(undefined4 *)(gen_frame + 0x4)),param_3);
      iVar5 = (*(int *)(gen_frame + 0x8));
    } while (0 < iVar4);
  }
  return uVar2;
}

/* ref: FUN_009fe6b0 */
uint F_009fe6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fe6b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  code * param_3 = (code *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  
  puVar6 = param_2;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      uVar1 = *puVar2;
      uVar4 = (*param_3)(uVar1,*param_1);
      if ((char)uVar4 == '\0') {
        uVar4 = (*param_3)(uVar1,puVar2[-1]);
        cVar3 = (char)uVar4;
        puVar6 = puVar2;
        while (cVar3 != '\0') {
          *puVar6 = puVar6[-1];
          uVar4 = (*param_3)(uVar1,puVar6[-2]);
          puVar6 = puVar6 + -1;
          cVar3 = (char)uVar4;
        }
        *puVar6 = uVar1;
      }
      else {
        iVar5 = (int)puVar2 - (int)((int)(uintptr_t)param_1) >> 2;
        puVar6 = (undefined4 *)F_00c46e20(puVar2 + (1 - iVar5),param_1,iVar5 * 4)
        ;
        *param_1 = uVar1;
      }
    }
  }
  return (uint)puVar6;
}

/* ref: FUN_009fe750 */
uint F_009fe750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fe750u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  uint uVar1;
  
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  uVar1 = (*param_4)(*param_3,*param_2);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_3;
    *param_3 = *param_2;
    *param_2 = uVar1;
  }
  uVar1 = (*param_4)(*param_2,*param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *param_2;
    *param_2 = *param_1;
    *param_1 = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009fe7b0 */
uint F_009fe7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fe7b0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_009fcce0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_009fe7f0 */
uint F_009fe7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe7f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fe820 */
uint F_009fe820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe820u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  (*(uint *)(gen_frame + 0x3c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40);
  uVar1 = param_2[0xe];
  uVar2 = param_2[6];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar3 = param_2[8];
  uVar4 = param_2[9];
  uVar5 = param_2[10];
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar9;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar10;
  (*(undefined4 *)(gen_frame + 0xc)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = uVar6;
  (*(undefined4 *)(gen_frame + 0x14)) = uVar7;
  (*(undefined4 *)(gen_frame + 0x18)) = uVar8;
  (*(undefined4 *)(gen_frame + 0x1c)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x20)) = uVar3;
  (*(undefined4 *)(gen_frame + 0x24)) = uVar4;
  (*(undefined4 *)(gen_frame + 0x28)) = uVar5;
  (*(undefined4 *)(gen_frame + 0x2c)) = uVar1;
  uVar11 = F_00d991c0(param_1,&(*(undefined4 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x3c)) ^ (uint)(uint)(gen_frame + 0x40));
  return uVar11;
}

/* ref: FUN_009fe970 */
uint F_009fe970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fe970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (0 < *(int *)((int)this + 0x88)) {
    piVar2 = *(int * PTR32 *)((int)this + 0x84);
    do {
      if (*piVar2 == param_1) goto LAB_009fe99f;
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while ((int)uVar1 < *(int *)((int)this + 0x88));
  }
  uVar1 = 0xffffffff;
LAB_009fe99f: ;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + -1;
  if (*(uint *)((int)this + 0x88) != uVar1) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + uVar1 * 4))) =
         *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + *(uint *)((int)this + 0x88) * 4)));
  }
  return uVar1;
}

/* ref: FUN_009fe9d0 */
uint F_009fe9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9fe9d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x40) != 0) {
    iVar1 = *(int *)((int)this + 0x40) + -0x10;
    if (iVar1 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar1);
    }
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) & 0xfffffffe;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return 0;
}

/* ref: FUN_009fea20 */
uint F_009fea20(unsigned int gen_a0)
{
  GEN_ENTER(0x9fea20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e1654));
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e16d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e16bc));
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  for (puVar1 = (undefined4 *)((int)this + 0xc); puVar1 != (undefined4 *)((int)this + 0x1c);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  return (uint)this;
}

/* ref: FUN_009fea70 */
unsigned int F_009fea70(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9fea70u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = 4;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x10))
                ((int *)*piVar2,param_1 + -2,(undefined4)gen_fl2bits(param_3),param_4);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_009feab0 */
unsigned int F_009feab0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9feab0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int * piVar2;
  
  iVar1 = 4;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x14))
                ((int *)*piVar2,param_1 + -2,(undefined4)gen_fl2bits(param_3),param_4);
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_009feaf0 */
unsigned int F_009feaf0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9feaf0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int iVar1;
  int * piVar2;
  
  iVar1 = 4;
  piVar2 = param_1;
  do {
    piVar2 = piVar2 + 1;
    if (*piVar2 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar2 + 8))
                ((int *)*piVar2,param_1 + -2,(undefined4)gen_fl2bits(param_3));
    }
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_009feb30 */
unsigned int F_009feb30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9feb30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 4;
  piVar3 = param_1;
  do {
    piVar3 = piVar3 + 1;
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1 + -2,(undefined4)gen_fl2bits(param_3));
      *piVar3 = 0;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

/* ref: FUN_009feb70 */
uint F_009feb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9feb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a00300((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_009feb80 */
uint F_009feb80(unsigned int gen_a0)
{
  GEN_ENTER(0x9feb80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_009feba0 */
uint F_009feba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9feba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  *(undefined2 *)((int)this + 0x28) = (undefined2)param_1;
  uVar1 = F_009fd340(this,param_2);
  *(undefined1 *)((int)this + 0x2a) = 1;
  return uVar1;
}

/* ref: FUN_009febd0 */
unsigned int F_009febd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9febd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 != (int *)0x0) {
    piVar3 = (int *)((int)this + 0xc);
    for (piVar1 = piVar3; piVar1 != (int *)((int)this + 0x1c); piVar1 = piVar1 + 1) {
      if ((int *)*piVar1 == param_1) {
        return 0;
      }
    }
    if ((int *)*piVar1 != param_1) {
      iVar2 = 0;
      while (*piVar3 != 0) {
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
        if (3 < iVar2) {
          return 0;
        }
      }
      *(int * PTR32 *)((int)this + iVar2 * 4 + 0xc) = param_1;
      ((code *)*(gen_code32 *)(*param_1 + 0x20))(param_1,this);
    }
  }
  return 0;
}

/* ref: FUN_009fec30 */
uint F_009fec30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fec30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if ((int)(*(uint *)((int)this + 8) & 0x3fffffff) < param_1) {
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,param_1,0x30);
    return CONCAT31(extraout_var,bVar1);
  }
  return 0;
}

/* ref: FUN_009fec60 */
uint F_009fec60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fec60u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,iVar3,0x30);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *(int *)((int)this + 4) = param_1;
  return uVar2;
}

/* ref: FUN_009feca0 */
uint F_009feca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9feca0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fecd0 */
uint F_009fecd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fecd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = *(uint *)((int)this + 8) & 0x3fffffff;
  if ((int)uVar2 < (int)param_1) {
    uVar2 = uVar2 * 2;
    if ((int)uVar2 <= (int)param_1) {
      uVar2 = param_1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),this,uVar2,4);
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  iVar5 = param_1 - (int)puVar4;
  iVar6 = 0;
  iVar1 = *(int *)this + (int)((int)(uintptr_t)puVar4) * 4;
  if (3 < iVar5) {
    iVar7 = (iVar5 - 4U >> 2) + 1;
    iVar6 = iVar7 * 4;
    puVar3 = (undefined4 *)(iVar1 + 8);
    do {
      puVar4 = puVar3 + 4;
      iVar7 = iVar7 + -1;
      puVar3[-2] = *param_2;
      puVar3[-1] = *param_2;
      *puVar3 = *param_2;
      puVar3[1] = *param_2;
      puVar3 = puVar4;
    } while (iVar7 != 0);
  }
  if (iVar5 <= iVar6) {
    *(uint *)((int)this + 4) = param_1;
    return (uint)puVar4;
  }
  do {
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar1 + -4 + iVar6 * 4) = *param_2;
  } while (iVar6 < iVar5);
  *(uint *)((int)this + 4) = param_1;
  return param_1;
}

/* ref: FUN_009fed80 */
uint F_009fed80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fed80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fedb0 */
uint F_009fedb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fedb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fedf0 */
uint F_009fedf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fedf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009fee00 */
uint F_009fee00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fee00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fee40 */
undefined4 * F_009fee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009feed0 */
uint F_009feed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9feed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009fef10 */
uint F_009fef10(unsigned int gen_a0)
{
  GEN_ENTER(0x9fef10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009fef50 */
uint F_009fef50(unsigned int gen_a0)
{
  GEN_ENTER(0x9fef50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009fef90 */
uint F_009fef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9fef90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_009fefd0 */
uint F_009fefd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9fefd0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  undefined4 * puVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  int * piVar7;
  
  piVar3 = (*(int * PTR32 *)&gen_args[2]);
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x11))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_009fa500(&(*(int * PTR32 *)&gen_args[2]));
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x11) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x11) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x11) == '\0') {
          piVar7[1] = (int)piVar6;
        }
        *piVar6 = (int)piVar7;
        (*(int * PTR32 *)&gen_args[2])[2] = piVar3[2];
        *(int * PTR32 *)(piVar3[2] + 4) = (*(int * PTR32 *)&gen_args[2]);
      }
      if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
        *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = (*(int * PTR32 *)&gen_args[2]);
      }
      else {
        puVar2 = (undefined4 *)piVar3[1];
        if ((int *)*puVar2 == piVar3) {
          *puVar2 = (*(int * PTR32 *)&gen_args[2]);
        }
        else {
          puVar2[2] = (*(int * PTR32 *)&gen_args[2]);
        }
      }
      (*(int * PTR32 *)&gen_args[2])[1] = piVar3[1];
      iVar1 = (*(int * PTR32 *)&gen_args[2])[4];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 4))) = (char)piVar3[4];
      *(char *)(piVar3 + 4) = (char)iVar1;
      goto LAB_009ff0ec;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x11) == '\0') {
    piVar7[1] = (int)piVar6;
  }
  if (*((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) == piVar3) {
    *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))) = piVar7;
  }
  else if ((int *)*piVar6 == piVar3) {
    *piVar6 = (int)piVar7;
  }
  else {
    piVar6[2] = (int)piVar7;
  }
  if (((int *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))))) == piVar3) {
    piVar4 = piVar6;
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      piVar4 = (int *)F_009fa3f0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x11) == '\0') {
      uVar5 = F_009fa3d0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_009ff0ec: ;
  if ((char)piVar3[4] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[4] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_009fdc20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(*piVar6 + 0x10) != '\x01') || (*(char *)(piVar6[2] + 0x10) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x10) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x10) = 1;
                *(undefined1 *)(piVar6 + 4) = 0;
                F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]),piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 4) = (char)piVar4[4];
              *(undefined1 *)(piVar4 + 4) = 1;
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              F_009fdc20((*(undefined * PTR32 *)&gen_args[0]),piVar4);
              break;
            }
LAB_009ff1b1: ;
            *(undefined1 *)(piVar6 + 4) = 0;
          }
        }
        else {
          if ((char)piVar6[4] == '\0') {
            *(undefined1 *)(piVar6 + 4) = 1;
            *(undefined1 *)(piVar4 + 4) = 0;
            F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x11) == '\0') {
            if ((*(char *)(piVar6[2] + 0x10) == '\x01') && (*(char *)(*piVar6 + 0x10) == '\x01'))
            goto LAB_009ff1b1;
            if (*(char *)(*piVar6 + 0x10) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x10) = 1;
              *(undefined1 *)(piVar6 + 4) = 0;
              F_009fdc20((*(undefined * PTR32 *)&gen_args[0]),piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 4) = (char)piVar4[4];
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined1 *)(*piVar6 + 0x10) = 1;
            F_009fc7a0((*(undefined * PTR32 *)&gen_args[0]),piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 4) = 1;
  }
  F_00429760(piVar3,0x14,0xcb);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + -1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ff230 */
uint F_009ff230(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x11);
  while (cVar1 == '\0') {
    F_009fdbe0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00429760(piVar2,0x14,0xcb);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x11);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009ff290 */
uint F_009ff290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_009ff300 */
uint F_009ff300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  F_00c46e20(param_2,param_2 + 4,(*(int *)((int)this + 4) - (param_2 + 4) >> 2) * 4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -4;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009ff380 */
uint F_009ff380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ff380u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar3 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_009ff230(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x11) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x11);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x11);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x11);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x11);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_009fefd0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_009ff420 */
uint F_009ff420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_009fdca0(this,param_1,param_2);
  return param_1;
}

/* ref: FUN_009ff440 */
uint F_009ff440(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009ff380(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_009ff460 */
uint F_009ff460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ff460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_4;
  }
  F_009fdd90(this,param_1,param_2,param_3,puVar1);
  return param_1;
}

/* ref: FUN_009ff4c0 */
uint F_009ff4c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ff4c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009fcba0(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4)
  ;
  return param_1;
}

/* ref: FUN_009ff4f0 */
uint F_009ff4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ff4f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_009fe250(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ff530 */
uint F_009ff530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,0xcb);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_2;
  }
  F_009fe100(this,param_1,puVar1,0);
  return param_1;
}

/* ref: FUN_009ff5a0 */
uint F_009ff5a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ff5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_009fe350(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_009ff5d0 */
uint F_009ff5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 * puVar4;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(param_1,this,0x20);
  }
  puVar4 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = *param_2;
    puVar4[1] = param_2[1];
    uVar1 = *(undefined4 *)(param_2 + 10);
    uVar2 = *(undefined4 *)(param_2 + 0xc);
    uVar3 = *(undefined4 *)(param_2 + 0xe);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(puVar4 + 10) = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar2;
    *(undefined4 *)(puVar4 + 0xe) = uVar3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar4;
}

/* ref: FUN_009ff620 */
uint F_009ff620(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff620u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009ff660 */
uint F_009ff660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x9ff660u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  F_009fe410(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return param_1;
}

/* ref: FUN_009ff6a0 */
uint F_009ff6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ff6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_009fe550(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ff6e0 */
uint F_009ff6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff6e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_2;
  if (4 < (int)(param_2 - param_1 & 0xfffffffc)) {
    uVar1 = F_009fe600(param_1,param_2,param_3,0,0);
  }
  return uVar1;
}

/* ref: FUN_009ff710 */
uint F_009ff710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff710u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_009fe6b0(param_1,param_2,param_3,0);
  return uVar1;
}

/* ref: FUN_009ff730 */
uint F_009ff730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ff730u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    F_009fe750(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    F_009fe750(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    F_009fe750(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    uVar4 = F_009fe750(iVar1,param_2,iVar3,param_4);
    return uVar4;
  }
  uVar4 = F_009fe750(param_1,param_2,param_3,param_4);
  return uVar4;
}

/* ref: FUN_009ff7d0 */
uint F_009ff7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff7d0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)((*(int *)&gen_args[1]) + -4);
  *(undefined4 *)((*(int *)&gen_args[1]) + -4) = *(*(undefined4 * PTR32 *)&gen_args[0]);
  iVar2 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  (*(int *)&gen_args[1]) = uVar1;
  uVar3 = F_009fcce0((*(undefined4 * PTR32 *)&gen_args[0]),0,iVar2 + -4 >> 2,&(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[2]));
  return uVar3;
}

/* ref: FUN_009ff810 */
uint F_009ff810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff810u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
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
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar13 [16];
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *param_3 = *param_1 + *param_2;
  param_3[1] = fVar1 + fVar4;
  param_3[2] = fVar2 + fVar5;
  param_3[3] = fVar3 + fVar6;
  fVar1 = param_1[5];
  fVar2 = param_1[6];
  fVar3 = param_1[7];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  param_3[4] = param_1[4] + param_2[4];
  param_3[5] = fVar1 + fVar4;
  param_3[6] = fVar2 + fVar5;
  param_3[7] = fVar3 + fVar6;
  fVar1 = param_3[4];
  fVar2 = param_3[5];
  fVar3 = param_3[6];
  fVar4 = param_3[7];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar6 = fVar4 * fVar4 + fVar2 * fVar2;
  fVar7 = fVar1 * fVar1 + fVar3 * fVar3;
  fVar8 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar9 = fVar6 + fVar5;
  fVar5 = fVar5 + fVar6;
  fVar6 = fVar8 + fVar7;
  fVar7 = fVar7 + fVar8;
  (*(undefined4 *)((char *)&auVar13 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar13 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar13 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar13 + 12)) = (undefined4)gen_fl2bits(fVar7);
  gen_rsqrtps(&(auVar13), &(in_XMM3), &(auVar13));
  fVar12 = (*(float *)((char *)&auVar13 + 0));
  fVar8 = (*(float *)((char *)&auVar13 + 4));
  fVar10 = (*(float *)((char *)&auVar13 + 8));
  fVar11 = (*(float *)((char *)&auVar13 + 12));
  fVar5 = *(float *)&REFG(undefined, 0x10e1574) - (fVar8 * fVar5) * fVar8;
  fVar6 = *(float *)&REFG(undefined, 0x10e1578) - (fVar10 * fVar6) * fVar10;
  fVar7 = *(float *)&REFG(undefined, 0x10e157c) - (fVar11 * fVar7) * fVar11;
  fVar8 = *(float *)&REFG(undefined, 0x10e1584) * fVar8;
  fVar10 = *(float *)&REFG(undefined, 0x10e1588) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x10e158c) * fVar11;
  param_3[4] = fVar1 * ((*(float *)&REFG(undefined, 0x10e1570) - (fVar12 * fVar9) * fVar12) *
                       (*(float *)&REFG(undefined, 0x10e1580) * fVar12));
  param_3[5] = fVar2 * (fVar5 * fVar8);
  param_3[6] = fVar3 * (fVar6 * fVar10);
  param_3[7] = fVar4 * (fVar7 * fVar11);
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar4 = param_2[9];
  fVar5 = param_2[10];
  fVar6 = param_2[0xb];
  param_3[8] = param_1[8] * param_2[8];
  param_3[9] = fVar1 * fVar4;
  param_3[10] = fVar2 * fVar5;
  param_3[0xb] = fVar3 * fVar6;
  return (uint)param_3;
}

/* ref: FUN_009ff890 */
uint F_009ff890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ff890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (*(uint *)((int)this + 0x88) == (*(uint *)((int)this + 0x8c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)((int)this + 0x84),4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x84) + *(int *)((int)this + 0x88) * 4)));
  *puVar1 = param_1;
  *(int *)((int)this + 0x88) = *(int *)((int)this + 0x88) + 1;
  return (uint)puVar1;
}

/* ref: FUN_009ff8d0 */
uint F_009ff8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9ff8d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_009ff970 */
uint F_009ff970(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_009ff9b0 */
uint F_009ff9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff9b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009ff9f0 */
uint F_009ff9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ff9f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009ffa30 */
uint F_009ffa30(unsigned int gen_a0)
{
  GEN_ENTER(0x9ffa30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_009ffa70 */
uint F_009ffa70(unsigned int gen_a0)
{
  GEN_ENTER(0x9ffa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x38);
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x30),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x24);
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x1c),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),(uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  uVar1 = *(uint *)((int)this + 0xc);
  *(undefined4 *)((int)this + 8) = 0;
  if ((uVar1 & 0x80000000) == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 4),
                       (uVar1 & 0x3fffffff) * 0x30);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  return uVar1;
}

/* ref: FUN_009ffb40 */
uint F_009ffb40(unsigned int gen_a0)
{
  GEN_ENTER(0x9ffb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_009ffb80 */
uint F_009ffb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ffb80u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  F_009fdca0((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),(*(uint *)&gen_args[1]));
  (*(uint *)&gen_args[1]) = 0;
  F_009fcac0((*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]),0);
  F_009ff380((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x8)),(*(undefined4 *)(gen_frame + 0x4)),(*(undefined4 *)(gen_frame + 0x8)));
  return (*(uint *)&gen_args[1]);
}

/* ref: FUN_009ffbe0 */
uint F_009ffbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ffbe0u, gen_a0, gen_a1, 0u, 0u);
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
    uVar2 = param_1 * 0x20 + 0x7f & 0xffffff80;
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

/* ref: FUN_009ffc50 */
uint F_009ffc50(unsigned int gen_a0)
{
  GEN_ENTER(0x9ffc50u, gen_a0, 0u, 0u, 0u);
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
  uVar3 = iVar2 * 0x20 + 0x7fU & 0xffffff80;
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
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar3 << 5);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar3;
}

/* ref: FUN_009ffce0 */
uint F_009ffce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ffce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined2 * puVar4;
  
  if (*(uint *)((int)this + 4) == (*(uint *)((int)this + 8) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),this,0x20);
  }
  puVar4 = ((undefined2 *)GEN_TOP((*(int *)((int)this + 4) * 0x20 + *(int *)this)));
  if (puVar4 != (undefined2 *)0x0) {
    *puVar4 = *param_1;
    puVar4[1] = param_1[1];
    uVar1 = *(undefined4 *)(param_1 + 10);
    uVar2 = *(undefined4 *)(param_1 + 0xc);
    uVar3 = *(undefined4 *)(param_1 + 0xe);
    *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(puVar4 + 10) = uVar1;
    *(undefined4 *)(puVar4 + 0xc) = uVar2;
    *(undefined4 *)(puVar4 + 0xe) = uVar3;
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return (uint)puVar4;
}

/* ref: FUN_009ffd30 */
uint F_009ffd30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ffd30u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  bool bVar4;
  
  puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  bVar4 = true;
  gen_piece_set(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3, (unsigned long long)((undefined3)((uint)(*(undefined * PTR32 *)&gen_args[0]) >> 8)));
  (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),1);
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if ((char)(*(undefined4 * PTR32 *)&gen_args[3]) == '\0') {
        bVar4 = *(*(uint * PTR32 *)&gen_args[2]) < (uint)puVar3[3];
      }
      else {
        bVar4 = *(*(uint * PTR32 *)&gen_args[2]) <= (uint)puVar3[3];
      }
      (*(undefined4 *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x8)), 1, 3),bVar4);
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar3;
  if (bVar4 != false) {
    if (puVar3 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar3 = (undefined4 *)F_009ff460((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar3,(*(uint * PTR32 *)&gen_args[2]));
      uVar1 = *puVar3;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      *(*(undefined4 * PTR32 *)&gen_args[1]) = uVar1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_009fa5d0(&(*(undefined4 * PTR32 *)&gen_args[3]));
  }
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(*(uint * PTR32 *)&gen_args[2])) {
    puVar3 = (undefined4 *)F_009ff460((*(undefined * PTR32 *)&gen_args[0]),&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar3,(*(uint * PTR32 *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar3;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(undefined4 * PTR32 *)&gen_args[3]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_009ffe00 */
uint F_009ffe00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ffe00u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  F_009fe410(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6,param_7);
  return param_1;
}

/* ref: FUN_009ffe50 */
uint F_009ffe50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9ffe50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_009fe250(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6);
  return param_1;
}

/* ref: FUN_009ffe90 */
uint F_009ffe90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9ffe90u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  F_009fe550(param_1,**(undefined4 * PTR32 *)(param_2 + 4),*(undefined4 * PTR32 *)(param_2 + 4),param_3,param_4,
               param_5,param_6);
  return param_1;
}

/* ref: FUN_009ffed0 */
uint F_009ffed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9ffed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  undefined4 uVar1;
  undefined4 * puVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * local_8;
  
  puVar6 = param_2 + (((int)param_3 - (int)((int)(uintptr_t)param_2) >> 2) - ((int)param_3 - (int)((int)(uintptr_t)param_2) >> 0x1f) >>
                     1);
  F_009ff730(param_2,puVar6,param_3 + -1,param_4);
  puVar5 = puVar6;
  while (((param_2 < puVar5 && (uVar3 = (*param_4)(puVar5[-1],*puVar5), (char)uVar3 == '\0')) &&
         (uVar3 = (*param_4)(*puVar5,puVar5[-1]), (char)uVar3 == '\0'))) {
    puVar5 = puVar5 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar2 = puVar6;
    puVar4 = puVar5;
    if ((param_3 <= puVar6) || (uVar3 = (*param_4)(*puVar6,*puVar5), (char)uVar3 != '\0')) break;
    uVar3 = (*param_4)(*puVar5,*puVar6);
  } while ((char)uVar3 == '\0');
joined_r0x009fff73: ;
  do {
    if (puVar6 < param_3) {
      uVar3 = (*param_4)(*puVar5,*puVar6);
      local_8 = puVar2;
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar6,*puVar5);
        if ((char)uVar3 != '\0') goto joined_r0x009fffb3;
        local_8 = puVar2 + 1;
        uVar1 = *puVar2;
        *puVar2 = *puVar6;
        *puVar6 = uVar1;
      }
      puVar6 = puVar6 + 1;
      puVar2 = local_8;
      goto joined_r0x009fff73;
    }
joined_r0x009fffb3: ;
    for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
      uVar3 = (*param_4)(puVar4[-1],*puVar5);
      if ((char)uVar3 == '\0') {
        uVar3 = (*param_4)(*puVar5,puVar4[-1]);
        if ((char)uVar3 != '\0') break;
        uVar1 = puVar5[-1];
        puVar5 = puVar5 + -1;
        *puVar5 = puVar4[-1];
        puVar4[-1] = uVar1;
      }
    }
    if (puVar4 == param_2) {
      if (puVar6 == param_3) {
        *param_1 = puVar5;
        param_1[1] = puVar2;
        return (uint)param_1;
      }
      if (puVar2 != puVar6) {
        uVar1 = *puVar5;
        *puVar5 = *puVar2;
        *puVar2 = uVar1;
      }
      uVar1 = *puVar5;
      *puVar5 = *puVar6;
      puVar5 = puVar5 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
      puVar2 = puVar2 + 1;
    }
    else {
      puVar4 = puVar4 + -1;
      if (puVar6 == param_3) {
        puVar5 = puVar5 + -1;
        if (puVar4 != puVar5) {
          uVar1 = *puVar4;
          *puVar4 = *puVar5;
          *puVar5 = uVar1;
        }
        uVar1 = *puVar5;
        *puVar5 = puVar2[-1];
        puVar2[-1] = uVar1;
        puVar2 = puVar2 + -1;
      }
      else {
        uVar1 = *puVar6;
        *puVar6 = *puVar4;
        *puVar4 = uVar1;
        puVar6 = puVar6 + 1;
      }
    }
  } while( true );
}

/* ref: FUN_00a00080 */
uint F_00a00080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00080u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = (*(undefined4 *)&gen_args[2]);
  uVar1 = (*(int *)&gen_args[1]) - (int)(*(undefined4 * PTR32 *)&gen_args[0]);
  while (4 < (int)(uVar1 & 0xfffffffc)) {
    (*(int *)&gen_args[1]) = *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined4 * PTR32 *)&gen_args[0]) + (uVar1 - 4)))) = *(*(undefined4 * PTR32 *)&gen_args[0]);
    F_009fcce0((*(undefined4 * PTR32 *)&gen_args[0]),0,(int)(uVar1 - 4) >> 2,&(*(int *)&gen_args[1]),uVar2);
    uVar1 = uVar1 - 4;
  }
  return uVar1;
}

/* ref: FUN_00a00140 */
uint F_00a00140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0x80000000;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0x80000000;
  *(undefined2 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0x80000000;
  iVar1 = *(int *)(*(int *)this + 0x1c);
  *(int *)((int)this + 0x2c) = iVar1;
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x18) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,uVar4,0x30);
  }
  if ((int)(*(uint *)((int)this + 0xc) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,uVar4,0x30);
  }
  if ((int)(*(uint *)((int)this + 0x24) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,uVar4,4);
  }
  uVar4 = *(uint *)((int)this + 0x18) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x10,iVar2,0x30);
  }
  *(int *)((int)this + 0x14) = iVar1;
  uVar4 = *(uint *)((int)this + 0xc) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 4,iVar2,0x30);
  }
  *(int *)((int)this + 8) = iVar1;
  uVar4 = *(uint *)((int)this + 0x24) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x1c,iVar2,4);
  }
  *(int *)((int)this + 0x20) = iVar1;
  iVar1 = *(int *)(*(int *)this + 0x40);
  uVar4 = iVar1 + 3U & 0xfffffffc;
  if ((int)(*(uint *)((int)this + 0x38) & 0x3fffffff) < (int)uVar4) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,uVar4,4);
  }
  uVar4 = *(uint *)((int)this + 0x38) & 0x3fffffff;
  if ((int)uVar4 < iVar1) {
    iVar3 = uVar4 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),(int)this + 0x30,iVar3,4);
  }
  iVar3 = iVar1 - *(int *)((int)this + 0x34);
  puVar5 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x30) + *(int *)((int)this + 0x34) * 4)));
  if (0 < iVar3) {
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
  }
  *(int *)((int)this + 0x34) = iVar1;
  return (uint)this;
}

/* ref: Client::Graphics::Animation::AnimationController::vf0 */
uint F_00a00300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f5260(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
  }
  return (uint)this;
}

/* ref: FUN_00a00330 */
uint F_00a00330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((uint)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00a003a0 */
uint F_00a003a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa003a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a003e0 */
uint F_00a003e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa003e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x14);
  *(undefined4 *)((int)this + 0x10) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0xc),uVar1 * 4);
  }
  *(undefined4 *)((int)this + 0x14) = 0x80000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  return uVar1;
}

/* ref: FUN_00a00420 */
uint F_00a00420(unsigned int gen_a0)
{
  GEN_ENTER(0xa00420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_00a00460 */
uint F_00a00460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  F_009ffa70(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar1 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar1 + 0x2c),this,0x3c);
  }
  return (uint)this;
}

/* ref: FUN_00a004e0 */
uint F_00a004e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa004e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_009ffd30(this,param_1,param_2,0);
  return param_1;
}

/* ref: FUN_00a00500 */
uint F_00a00500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a00080(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00a00510 */
uint F_00a00510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00510u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xe8))) != (*(int *)&gen_args[1])) {
    if ((char)(*(int *)&gen_args[2]) != '\0') {
      F_00a00330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xac))),&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
      iVar1 = (*(int *)&gen_args[2]);
      if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xb0)))) goto LAB_00a00545;
    }
    F_00a00330(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xbc))),&(*(int *)&gen_args[2]),&(*(int *)&gen_args[1]));
    iVar1 = (*(int *)&gen_args[2]);
    if ((*(int *)&gen_args[2]) != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc0)))) {
LAB_00a00545: ;
      return *(uint *)(iVar1 + 0x10);
    }
  }
  return 0;
}

/* ref: FUN_00a00580 */
uint F_00a00580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00580u, gen_a0, gen_a1, 0u, 0u);
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
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 8))))(*(int * PTR32 *)((int)pvVar2 + 0x2c),this,0xc);
  }
  return (uint)this;
}

/* ref: FUN_00a00630 */
uint F_00a00630(unsigned int gen_a0)
{
  GEN_ENTER(0xa00630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009ff380(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_00a00670 */
uint F_00a00670(unsigned int gen_a0)
{
  GEN_ENTER(0xa00670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_00a00690 */
uint F_00a00690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa00690u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_2 - param_1;
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  do {
    uVar2 = iVar1 >> 2;
    if ((int)uVar2 < 0x21) {
LAB_00a00722: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009fe6b0(iVar3,iVar5,param_4,0);
      }
      return uVar2;
    }
    if (iVar4 < 1) {
      if (0x20 < (int)uVar2) {
        if (4 < (int)(iVar5 - iVar3 & 0xfffffffcU)) {
          F_009fe600(iVar3,iVar5,param_4,0,0);
        }
        uVar2 = F_00a00080(iVar3,iVar5,param_4);
        return uVar2;
      }
      goto LAB_00a00722;
    }
    F_009ffed0(&(*(int *)(gen_frame + 0x4)),iVar3,iVar5,param_4);
    iVar4 = iVar4 / 2 + (iVar4 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - iVar3 & 0xfffffffcU) < (int)(iVar5 - (*(int *)(gen_frame + 0x8)) & 0xfffffffcU)) {
      F_00a00690(iVar3,(*(int *)(gen_frame + 0x4)),iVar4,param_4);
      iVar3 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_00a00690((*(int *)(gen_frame + 0x8)),iVar5,iVar4,param_4);
      iVar5 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = iVar5 - iVar3;
  } while( true );
}

/* ref: FUN_00a00780 */
unsigned int F_00a00780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00780u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_2 + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(param_1 + 8 + iVar3 * 0xc);
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -3;
    } while (-1 < iVar3);
  }
  return 0;
}

/* ref: Client::Graphics::Animation::AnimationControllerHandle::vf0 */
uint F_00a007e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa007e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f7b70(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
  }
  return (uint)this;
}

/* ref: FUN_00a00810 */
uint F_00a00810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00810u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a00690(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return uVar1;
}

/* ref: FUN_00a00840 */
unsigned int F_00a00840(unsigned int gen_a0)
{
  GEN_ENTER(0xa00840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar3) {
    piVar2 = (int *)(*(int *)this + 8 + iVar3 * 0xc);
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 + -1;
      piVar2 = piVar2 + -3;
    } while (-1 < iVar3);
    *(undefined4 *)((int)this + 4) = 0;
    return 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return 0;
}

/* ref: FUN_00a008c0 */
uint F_00a008c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa008c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 4) + -1;
  if (-1 < iVar4) {
    piVar3 = (int *)(*(int *)this + 8 + iVar4 * 0xc);
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 + -3;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)((int)this + 4) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1,*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0xc);
  }
  *(undefined4 *)((int)this + 8) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00a00960 */
uint F_00a00960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f95b0(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),this);
  }
  return (uint)this;
}

/* ref: FUN_00a00990 */
uint F_00a00990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009f9cd0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a00ae0 */
uint F_00a00ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xa00ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *(int *)((int)this + 0x14) + -1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8 + iVar4 * 0xc)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      iVar4 = iVar4 + -1;
      piVar3 = piVar3 + -3;
    } while (-1 < iVar4);
  }
  uVar2 = *(uint *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if ((int)uVar2 < 0) {
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined4 *)((int)this + 0x18) = 0x80000000;
    return uVar2;
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                    (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)((int)this + 0x10),
                     (uVar2 & 0x3fffffff) * 0xc);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00a00b90 */
uint F_00a00b90(unsigned int gen_a0)
{
  GEN_ENTER(0xa00b90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d96ba0(this);
  *(undefined4 *)((int)this + 0x1c) = 0x14;
  return (uint)this;
}

/* ref: FUN_00a00c00 */
unsigned int F_00a00c00(float gen_a0)
{
  GEN_ENTER(0xa00c00u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00a00c20 */
uint F_00a00c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa00c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_004cefe0(this);
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
  *(undefined4 *)((int)this + 0x1c) = param_3;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined1 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00a00c60 */
unsigned int F_00a00c60(void)
{
  GEN_ENTER(0xa00c60u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4 * PTR32, 0x14a2444) != (undefined4 *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x14a2444))))(REFG(undefined4 * PTR32, 0x14a2444),1);
    REFG(undefined4 * PTR32, 0x14a2444) = (undefined4 *)0x0;
  }
  return 0;
}

/* ref: FUN_00a00c80 */
uint F_00a00c80(unsigned int gen_a0)
{
  GEN_ENTER(0xa00c80u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_004a0020(in_ecx);
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  in_ecx[10] = 0;
  in_ecx[0xb] = 1;
  *(undefined1 *)(in_ecx + 0xc) = 0;
  in_ecx[0x10] = 3;
  F_00429f90(in_ecx + 0x11);
  in_ecx[0x93] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a00cc0 */
uint F_00a00cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa00cc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  if (*(undefined * PTR32 *)((int)this + 0x28) != (undefined *)0x0) {
    F_004cf020(*(undefined * PTR32 *)((int)this + 0x28));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  F_00429fa0();
  uVar2 = F_004a05c0(this);
  return uVar2;
}

/* ref: FUN_00a00d00 */
unsigned int F_00a00d00(unsigned int gen_a0)
{
  GEN_ENTER(0xa00d00u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x14a2444);
  if (REFG(int, 0x14a2444) != 0) {
    if (*param_1 == 0) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 0;
    }
    else if (*param_1 == 1) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 2;
    }
    else if ((*(int *)(REFG(int, 0x14a2444) + 0x28) == 0) ||
            (*((char *)GEN_TOP((*(int *)(REFG(int, 0x14a2444) + 0x28) + 0x24))) == '\0')) {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 3;
    }
    else {
      *(undefined4 *)(REFG(int, 0x14a2444) + 0x34) = 1;
    }
    if (*(char *)(iVar1 + 0x2d) != '\0') {
      if ((code *)*(gen_code32 *)(iVar1 + 0x38) != (code *)0x0) {
        ((code *)*(gen_code32 *)(iVar1 + 0x38))(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x34));
      }
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      *(undefined1 *)(iVar1 + 0x2d) = 0;
      *(undefined1 *)(iVar1 + 0x2f) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00a00d80 */
uint F_00a00d80(unsigned int gen_a0)
{
  GEN_ENTER(0xa00d80u, gen_a0, 0u, 0u, 0u);
  wchar_t * param_1 = (wchar_t *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  int iVar1;
  wchar_t * _Dst;
  
  iVar1 = REFG(int, 0x14a2444);
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  _Dst = param_1;
  if (REFG(int, 0x14a2444) != 0) {
    F_0042a3a0(((wchar_t *)(gen_frame + 0x0)),param_1,1);
    _Dst = (wchar_t *)(iVar1 + 0x44);
    if (((wchar_t *)(gen_frame + 0x0)) != _Dst) {
      _Dst = (wchar_t *)F_00c4a8e0(_Dst,0x104,((wchar_t *)(gen_frame + 0x0)));
    }
    F_00429fa0();
    *(undefined1 *)(iVar1 + 0x2e) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c));
  return (uint)_Dst;
}

/* ref: FUN_00a00df0 */
uint F_00a00df0(unsigned int gen_a0)
{
  GEN_ENTER(0xa00df0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_004cefe0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e189c));
  *(undefined4 *)((int)this + 0x220) = 0;
  return (uint)this;
}

/* ref: FUN_00a00e20 */
uint F_00a00e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_00c4983b((int)this + 0x18,0x104,param_1,0x104);
  *(undefined4 *)((int)this + 0x220) = param_2;
  uVar1 = F_004cf9e0(this,0,0,0x2000,"FFXIV_ScreenShotThread");
  return uVar1;
}

/* ref: Client::System::Photo::ScreenShotThreadWin::vf5 */
uint F_00a00e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined * pSVar1;
  uint uVar2;
  
  F_004f88e0(((undefined1 *)(gen_frame + 0xc)));
  pSVar1 = this + 0x18;
  uVar2 = F_004f7d10(pSVar1,1);
  if (uVar2 == 1) {
    F_004f7c20(pSVar1);
    gen_imp_D3DXSaveSurfaceToFileW(pSVar1,1,*(undefined4 *)(this + 0x220),0,0);
  }
  uVar2 = F_004f9ed0(((undefined1 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_00a00ed0 */
uint F_00a00ed0(void)
{
  GEN_ENTER(0xa00ed0u, 0u, 0u, 0u, 0u);
  undefined4 * in_ecx;
  uint uVar1;
  
  if (REFG(undefined4 * PTR32, 0x14a2444) == (undefined4 *)0x0) {
    in_ecx = (undefined4 *)F_00406b90(0x250,0,0);
    if (in_ecx == (undefined4 *)0x0) {
      REFG(undefined4 * PTR32, 0x14a2444) = (undefined4 *)0x0;
    }
    else {
      F_004a0020(in_ecx);
      *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
      in_ecx[10] = 0;
      in_ecx[0xb] = 1;
      *(undefined1 *)(in_ecx + 0xc) = 0;
      in_ecx[0x10] = 3;
      F_00429f90(in_ecx + 0x11);
      in_ecx[0x93] = 0;
      REFG(undefined4 * PTR32, 0x14a2444) = in_ecx;
    }
  }
  uVar1 = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0x1d,REFG(undefined4 * PTR32, 0x14a2444));
  return uVar1;
}

/* ref: Client::System::Photo::ScreenShot::vf1 */
unsigned int F_00a00f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa00f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  if (this[0x2f] != (undefined1)0x0) {
    F_004cf020(*(undefined * PTR32 *)(this + 0x28));
    puVar1 = *(undefined4 * PTR32 *)(this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x28) = 0;
    }
    this[0x2f] = (undefined1)0x0;
  }
  if (this[0x2e] != (undefined1)0x0) {
    if (REFG(int, 0x1370b90) != 0) {
      F_00a01660(this + 0x44);
    }
    this[0x2e] = (undefined1)0x0;
  }
  return 0;
}

/* ref: FUN_00a00fa0 */
byte F_00a00fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa00fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 * this_00;
  ulonglong uVar3;
  
  if (((*(char *)((int)this + 0x2c) != '\0') && (*(char *)((int)this + 0x2d) == '\0')) &&
     (*(int *)((int)this + 0x28) == 0)) {
    uVar2 = F_00414500(*(undefined4 *)(REFG(int, 0x137104c) + 0x10),0x3e);
    if ((*(int *)(uVar2 + 0x14) == 0) || (*(int *)(uVar2 + 0x14) != 1)) {
      *(undefined4 *)((int)this + 0x40) = 3;
    }
    else {
      *(undefined4 *)((int)this + 0x40) = 1;
    }
    uVar3 = F_0046ff40();
    *(int *)((int)this + 0x24c) = (int)(uVar3 / 1000);
    *(undefined4 *)((int)this + 0x38) = param_1;
    *(undefined4 *)((int)this + 0x3c) = param_2;
    *(undefined1 *)((int)this + 0x2d) = 1;
    if (REFG(void * PTR32, 0x1370b90) != (undefined *)0x0) {
      F_00a01590(REFG(void * PTR32, 0x1370b90),0,*(undefined4 *)((int)this + 0x40),1,((code *)REFP(0xa00d00)));
    }
    this_00 = (undefined4 *)F_00406b90(0x28,0,0);
    if (this_00 == (undefined4 *)0x0) {
      this_00 = (undefined4 *)0x0;
    }
    else {
      uVar1 = *(undefined4 *)((int)this + 0x40);
      F_004cefe0(this_00);
      this_00[6] = uVar1;
      *this_00 = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
      this_00[7] = ((code *)REFP(0xa00d00));
      this_00[8] = this;
      *(undefined1 *)(this_00 + 9) = 0;
    }
    *(undefined4 * PTR32 *)((int)this + 0x28) = this_00;
    F_004cf9e0(this_00,0,0,0x10000,"ScreenShotThread");
    return 1;
  }
  return 0;
}

/* ref: FUN_00a01090 */
byte F_00a01090(unsigned int gen_a0)
{
  GEN_ENTER(0xa01090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x380];
  int iVar1;
  int iVar2;
  byte bVar3;
  wchar_t * _Src;
  uint uVar4;
  LPCWSTR lpDirectoryName;
  BOOL BVar5;
  ULARGE_INTEGER * lpFreeBytesAvailableToCaller;
  ULARGE_INTEGER * lpTotalNumberOfBytes;
  char * _Format;
  ULARGE_INTEGER * lpTotalNumberOfFreeBytes;
  undefined * puVar6;
  
  (*(uint *)(gen_frame + 0x378)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x37c);
  if ((REFG(void * PTR32, 0x137104c) == (undefined *)0x0) || (REFG(int, 0x1370b90) == 0)) goto LAB_00a011ff;
  F_00429f90(((wchar_t *)(gen_frame + 0x9c)));
  (*(undefined4 *)(gen_frame + 0x40)) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 0x24c)));
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  F_00c4f4ca(((undefined *)(gen_frame + 0x2f8)),&(*(undefined4 *)(gen_frame + 0x40)));
  if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1d))) == '\x02') {
    _Format = "ffxiv_%m%d%Y_%H%M%S";
  }
  else if (*((char *)GEN_TOP(((int)REFG(void * PTR32, 0x137104c) + 0x1d))) == '\x03') {
    _Format = "ffxiv_%d%m%Y_%H%M%S";
  }
  else {
    _Format = "ffxiv_%Y%m%d_%H%M%S";
  }
  F_00c5071b(((char *)(gen_frame + 0x338)),0x40,_Format,((undefined *)(gen_frame + 0x2f8)));
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x18))) {
  case 0: ;
    puVar6 = &REFG(undefined, 0x10e1810);
    break;
  case 1: ;
    puVar6 = &REFG(undefined, 0x10e1818);
    break;
  default: ;
    goto switchD_00a0115a_caseD_2;
  case 3: ;
    puVar6 = &REFG(undefined, 0x10e1820);
    break;
  case 4: ;
    puVar6 = &REFG(undefined, 0x10e1828);
  }
  F_00c473c8(((char *)(gen_frame + 0x338)),0x40,puVar6);
  F_004f88e0(((undefined1 *)(gen_frame + 0x18)));
  _Src = (wchar_t *)F_004308f0(REFG(void * PTR32, 0x137104c));
  F_00c4a8e0(((wchar_t *)(gen_frame + 0x9c)),0x104,_Src);
  F_0042a2a0(((wchar_t *)(gen_frame + 0x9c)),"screenshots");
  uVar4 = F_004f7d10(((wchar_t *)(gen_frame + 0x9c)),0);
  if (uVar4 == 1) {
    F_0042a2a0(((wchar_t *)(gen_frame + 0x9c)),((char *)(gen_frame + 0x338)));
    iVar1 = *((int *)GEN_TOP((*(int *)(REFG(int, 0x1370b90) + 0x2c) + 0x34)));
    iVar2 = *(int *)(iVar1 + 0x18);
    iVar1 = *(int *)(iVar1 + 0x1c);
    F_00a013b0(((wchar_t *)(gen_frame + 0x9c)),((undefined1 *)(gen_frame + 0x2a4)));
    lpTotalNumberOfFreeBytes = &(*(ULARGE_INTEGER *)(gen_frame + 0x8));
    lpTotalNumberOfBytes = &(*(ULARGE_INTEGER *)(gen_frame + 0x10));
    ((undefined2 *)(gen_frame + 0x31c))[0] = 0;
    lpFreeBytesAvailableToCaller = &(*(ULARGE_INTEGER *)(gen_frame + 0x38));
    (*(undefined4 *)(gen_frame + 0x330)) = 7;
    (*(undefined4 *)(gen_frame + 0x32c)) = 0;
    lpDirectoryName = (LPCWSTR)F_0042eb40(((undefined1 *)(gen_frame + 0x2a4)),((undefined2 *)(gen_frame + 0x31c)));
    BVar5 = gen_imp_GetDiskFreeSpaceExW(lpDirectoryName,lpFreeBytesAvailableToCaller,lpTotalNumberOfBytes,
                                lpTotalNumberOfFreeBytes);
    if (BVar5 == 1) {
      if (((*(ULARGE_INTEGER *)(gen_frame + 0x38)).s.HighPart == 0) && ((uint)(*(undefined4 *)((char *)&(*(ULARGE_INTEGER *)(gen_frame + 0x38)) + 0)) < iVar1 * iVar2 * 3 + 0x400U)) {
        *(undefined1 *)((int)this + 0x24) = 1;
      }
      else {
        bVar3 = F_004f7c20(((wchar_t *)(gen_frame + 0x9c)));
        if (bVar3 == 0) {
          uVar4 = F_00429fb0(((wchar_t *)(gen_frame + 0x9c)),((undefined1 *)(gen_frame + 0x48)));
          F_00a00d80(uVar4);
          F_0042c880(((undefined1 *)(gen_frame + 0x48)));
          F_00403330(((undefined2 *)(gen_frame + 0x31c)));
          F_0042c880(((undefined1 *)(gen_frame + 0x2a4)));
          F_004f9ed0(((undefined1 *)(gen_frame + 0x18)));
          F_00429fa0();
          F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
          return 1;
        }
      }
    }
    F_00403330(((undefined2 *)(gen_frame + 0x31c)));
    F_0042c880(((undefined1 *)(gen_frame + 0x2a4)));
    F_004f9ed0(((undefined1 *)(gen_frame + 0x18)));
    F_00429fa0();
    F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
    return 0;
  }
  F_004f9ed0(((undefined1 *)(gen_frame + 0x18)));
switchD_00a0115a_caseD_2: ;
  F_00429fa0();
LAB_00a011ff: ;
  F_00c47745((*(uint *)(gen_frame + 0x378)) ^ (uint)(uint)(gen_frame + 0x37c));
  return 0;
}

/* ref: Client::System::Photo::ScreenShot::ScreenShotThread::vf5 */
uint F_00a01370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  
  bVar2 = F_00a01090(this);
  if (bVar2 == 0) {
    pcVar1 = *(gen_code32 *)(this + 0x1c);
    ((undefined4 *)(gen_frame + 0x4))[0] = 2;
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(((undefined4 *)(gen_frame + 0x4)));
    }
  }
  uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  return uVar3;
}

/* ref: FUN_00a013b0 */
uint F_00a013b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa013b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  F_0042b630(param_1);
  F_0042e170(((undefined1 *)(gen_frame + 0x4)),this);
  F_004fecf0(param_1,((undefined1 *)(gen_frame + 0x4)));
  F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return param_1;
}

/* ref: Client::System::Photo::ScreenShot::ScreenShotThread::vf0 */
uint F_00a01420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e1870));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Photo::ScreenShot::vf0 */
uint F_00a01450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10e188c));
  if (*(undefined * PTR32 *)(this + 0x28) != (undefined *)0x0) {
    F_004cf020(*(undefined * PTR32 *)(this + 0x28));
    puVar1 = *(undefined4 * PTR32 *)(this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x28) = 0;
    }
  }
  F_00429fa0();
  F_004a05c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Photo::ScreenShotThreadWin::vf0 */
uint F_00a014b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa014b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10e189c));
  F_004cf880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a014e0 */
uint F_00a014e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa014e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_004d4760(this,0x14);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xe;
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = (uint)((char)param_3 != '\0') | puVar1[3] & 0xfffffffe;
    puVar1[4] = param_4;
    uVar2 = F_004d4810(this,puVar1);
  }
  return uVar2;
}

/* ref: FUN_00a01530 */
uint F_00a01530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCWSTR param_1 = (LPCWSTR)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined4 *)F_004d4760(this,8);
  uVar4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0xf;
    iVar2 = gen_imp_lstrlenW(param_1);
    iVar2 = iVar2 * 2 + 2;
    uVar3 = F_004d4760(this,iVar2);
    uVar4 = 0;
    if (uVar3 != 0) {
      F_00c46aa0(uVar3,param_1,iVar2);
      puVar1[1] = uVar3;
      uVar4 = F_004d4810(this,puVar1);
    }
  }
  return uVar4;
}

/* ref: FUN_00a01590 */
uint F_00a01590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa01590u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 * puVar6;
  
  this_00 = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar1 = *(uint *)((int)this_00 + 8);
  uVar2 = *(uint *)((int)this_00 + 8);
  uVar3 = *(uint *)((int)this_00 + 8);
  uVar5 = *(uint *)((int)this_00 + 8);
  *(undefined4 *)((int)this_00 + 8) = 0xff47ffff;
  uVar4 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x2c) + 0x34)));
  uVar5 = uVar5 & 0x7ffff;
  puVar6 = (undefined4 *)F_004d4760(this_00,0x14);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0xe;
    puVar6[1] = param_2;
    puVar6[2] = uVar4;
    puVar6[3] = (uint)((char)param_3 != '\0') | puVar6[3] & 0xfffffffe;
    puVar6[4] = param_4;
    F_004d4810(this_00,puVar6);
  }
  if (param_1 != 0) {
    F_00a01530(this_00,param_1);
  }
  *(uint *)((int)this_00 + 8) =
       ((uVar2 >> 0x17 & 0xf | (uVar1 >> 0x1b) << 4) << 4 | uVar3 >> 0x13 & 0xf) << 0x13 | uVar5;
  return uVar5;
}

/* ref: FUN_00a01660 */
uint F_00a01660(unsigned int gen_a0)
{
  GEN_ENTER(0xa01660u, gen_a0, 0u, 0u, 0u);
  LPCWSTR param_1 = (LPCWSTR)gen_a0;
  undefined * this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 * puVar5;
  int iVar6;
  uint uVar7;
  
  this = *((undefined * PTR32 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1a8)));
  uVar1 = *(uint *)((int)this + 8);
  uVar2 = *(uint *)((int)this + 8);
  uVar3 = *(uint *)((int)this + 8);
  uVar4 = *(uint *)((int)this + 8) & 0x7ffff;
  *(undefined4 *)((int)this + 8) = 0xff47ffff;
  puVar5 = (undefined4 *)F_004d4760(this,8);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0xf;
    iVar6 = gen_imp_lstrlenW(param_1);
    iVar6 = iVar6 * 2 + 2;
    uVar7 = F_004d4760(this,iVar6);
    if (uVar7 != 0) {
      F_00c46aa0(uVar7,param_1,iVar6);
      puVar5[1] = uVar7;
      F_004d4810(this,puVar5);
    }
  }
  *(uint *)((int)this + 8) =
       ((uVar2 >> 0x17 & 0xf | (uVar1 >> 0x1b) << 4) << 4 | uVar3 >> 0x13 & 0xf) << 0x13 | uVar4;
  return uVar4;
}

/* ref: FUN_00a01730 */
unsigned int F_00a01730(unsigned int gen_a0)
{
  GEN_ENTER(0xa01730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00a01750 */
uint F_00a01750(unsigned int gen_a0)
{
  GEN_ENTER(0xa01750u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  *(undefined4 *)(in_ecx + 4) = 0;
  *(undefined4 *)(in_ecx + 8) = 0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined4 *)(in_ecx + 0x10) = 0;
  *(undefined4 *)(in_ecx + 0x14) = 0;
  return in_ecx;
}

/* ref: FUN_00a01790 */
uint F_00a01790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa01790u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_3 + 8))(*(undefined4 *)(param_3 + 0xc),param_3 + 0x10);
  return uVar1;
}

/* ref: FUN_00a017b0 */
unsigned int F_00a017b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa017b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_00a017d0 */
unsigned int F_00a017d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xa017d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  UINT param_1 = (UINT)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint MVar1;
  
  if (*(UINT *)((int)this + 4) != 0) {
    gen_imp_timeKillEvent(*(UINT *)((int)this + 4));
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_3;
  *(undefined4 *)((int)this + 0x10) = param_4;
  *(UINT *)this = param_1;
  *(undefined4 *)((int)this + 0x14) = param_5;
  MVar1 = gen_imp_timeSetEvent(param_1,param_1,((code *)REFP(0xa01790)),(DWORD_PTR)this,1);
  *(uint *)((int)this + 4) = MVar1;
  return 0;
}

/* ref: FUN_00a01840 */
uint F_00a01840(unsigned int gen_a0)
{
  GEN_ENTER(0xa01840u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a01860 */
uint F_00a01860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00a01890 */
unsigned int F_00a01890(unsigned int gen_a0)
{
  GEN_ENTER(0xa01890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  return 0;
}

/* ref: FUN_00a018a0 */
uint F_00a018a0(void)
{
  GEN_ENTER(0xa018a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00a018b0 */
uint F_00a018b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa018b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = F_00b9a750(param_1);
  F_00b9b070(param_1,0xffffd8ee,"tostring");
  iVar4 = 1;
  if (0 < (int)uVar1) {
    do {
      F_00b9a910(param_1,0xffffffff);
      F_00b9a910(param_1,iVar4);
      F_00b9b510(param_1,1,1);
      uVar2 = F_00b9abf0(param_1,0xffffffff,0);
      if (uVar2 == 0) {
        uVar1 = F_00b9bbd0(param_1,"\'tostring\' must return a string to \'print\'");
        F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
        return uVar1;
      }
      if (1 < iVar4) {
        uVar3 = F_00c50860();
        F_00c5075a("\t",(undefined *)(uVar3 + 0x20));
      }
      F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x100,&REFG(undefined, 0x10e18f4),uVar2);
      F_00b9a760(param_1,0xfffffffe);
      iVar4 = iVar4 + 1;
    } while (iVar4 <= (int)uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return 0;
}

/* ref: FUN_00a019a0 */
uint F_00a019a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa019a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_00bb8aa0(*(int *)((int)this + 8));
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return uVar1;
}

/* ref: FUN_00a019d0 */
uint F_00a019d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa019d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9a750(*(undefined4 *)(in_ecx + 8));
  return uVar1;
}

/* ref: FUN_00a019e0 */
uint F_00a019e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa019e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01a00 */
uint F_00a01a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),-1 - param_1);
  return uVar1;
}

/* ref: FUN_00a01a20 */
uint F_00a01a20(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xa01a20u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x100,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00b9bbd0(*(undefined4 *)(param_1 + 8),((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar1;
}

/* ref: FUN_00a01a80 */
uint F_00a01a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a01a20(this,"invalid arg#d",param_1);
  return uVar1;
}

/* ref: FUN_00a01aa0 */
uint F_00a01aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
    return uVar1;
  }
  uVar1 = F_00b9adc0(*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00a01ad0 */
uint F_00a01ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00b9ae00(*(undefined4 *)((int)this + 8),uVar2 + 1);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar2 + 1;
}

/* ref: FUN_00a01b60 */
uint F_00a01b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  uVar2 = F_00b9ab70(*(undefined4 *)((int)this + 8),0xffffffff);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00b9ae00(*(undefined4 *)((int)this + 8),uVar2 - 1);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,"referenceCount");
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar2 - 1;
}

/* ref: FUN_00a01bf0 */
uint F_00a01bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  uVar1 = F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8f0,param_1);
  return uVar1;
}

/* ref: FUN_00a01c40 */
uint F_00a01c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa01c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_3);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01c80 */
uint F_00a01c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa01c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9ae00(*(undefined4 *)((int)this + 8),param_3);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01cc0 */
uint F_00a01cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa01cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  F_00b9ae60(*(undefined4 *)((int)this + 8),param_2);
  F_00b9af30(*(undefined4 *)((int)this + 8),param_3,0);
  uVar1 = F_00b9b2f0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01d00 */
uint F_00a01d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa01d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a01d20 */
uint F_00a01d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * puVar2;
  
  F_00b9b070(*(undefined4 *)((int)this + 8),param_1,"className");
  puVar2 = REFG(undefined * PTR32, 0x13333f4);
  uVar1 = F_00b9a9f0(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 != 0) {
    puVar2 = (undefined *)F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return (uint)puVar2;
}

/* ref: FUN_00a01d80 */
byte F_00a01d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar1 == 1) {
    uVar2 = F_00b9abc0(*(undefined4 *)((int)this + 8),0xffffffff);
    *(bool *)param_1 = uVar2 != 0;
  }
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  return uVar1 == 1;
}

/* ref: FUN_00a01dd0 */
float10 F_00a01dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01dd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  fVar1 = F_00b9c8e0(*(undefined4 *)(param_1 + 8),param_2);
  return (float10)fVar1;
}

/* ref: FUN_00a01df0 */
float F_00a01df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00b9c8e0(*(undefined4 *)((int)this + 8),param_1);
  return fVar1;
}

/* ref: FUN_00a01e10 */
byte F_00a01e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00b9c7a0(*(undefined4 *)((int)this + 8),param_1,1);
  uVar1 = F_00b9abc0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 != 0;
}

/* ref: FUN_00a01e40 */
uint F_00a01e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9c820(*(undefined4 *)((int)this + 8),param_1,0);
  return uVar1;
}

/* ref: FUN_00a01e60 */
uint F_00a01e60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xa01e60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ade0(*(undefined4 *)(in_ecx + 8),(double)param_2);
  return uVar1;
}

/* ref: FUN_00a01e80 */
uint F_00a01e80(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xa01e80u, gen_a0, (unsigned int)gen_trace_d(gen_a1), (unsigned int)(gen_trace_d(gen_a1) >> 32), 0u);
  int in_ecx = (int)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ade0(*(undefined4 *)(in_ecx + 8),param_2);
  return uVar1;
}

/* ref: FUN_00a01ea0 */
uint F_00a01ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9afd0(*(undefined4 *)((int)this + 8),(uint)((char)param_1 != '\0'));
  return uVar1;
}

/* ref: FUN_00a01ec0 */
uint F_00a01ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9ae60(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a01ee0 */
uint F_00a01ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
    return uVar1;
  }
  uVar1 = F_00b9adc0(*(undefined4 *)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00a01f20 */
byte F_00a01f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01f20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return 1 - (uVar1 != 0);
}

/* ref: FUN_00a01f40 */
byte F_00a01f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 == 3;
}

/* ref: FUN_00a01f60 */
byte F_00a01f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 == 4;
}

/* ref: FUN_00a01f80 */
byte F_00a01f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a940(*(undefined4 *)((int)this + 8),param_1);
  return 1 - (uVar1 != 1);
}

/* ref: FUN_00a01fa0 */
byte F_00a01fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa01fa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9abc0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1 != 0;
}

/* ref: FUN_00a01fc0 */
uint F_00a01fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa01fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_2);
  return uVar1;
}

/* ref: FUN_00a01fe0 */
uint F_00a01fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa01fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar1 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x400,"lua error(%d): %s",param_1,uVar1);
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),param_2);
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar1;
}

/* ref: FUN_00a02040 */
uint F_00a02040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa02040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  uVar2 = F_00b9a940(*(undefined4 *)((int)this + 8),0xffffffff);
  if (uVar2 == 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
    F_00b9b150(*(undefined4 *)((int)this + 8),0,0);
    F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
    F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  }
  uVar2 = F_00b9a710(*(undefined4 *)((int)this + 8));
  *(uint *)(param_1 + 8) = uVar2;
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x14,&REFG(undefined, 0x10e1a80),uVar2);
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00a02120 */
uint F_00a02120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa02120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8f0,"Thread");
  F_00c472af(((undefined1 *)(gen_frame + 0x4)),0x14,&REFG(undefined, 0x10e1a8c),*(undefined4 *)(param_1 + 8));
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),uVar1 + 1,((undefined1 *)(gen_frame + 0x4)));
  uVar1 = F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffe);
  *(undefined4 *)(param_1 + 8) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00a021b0 */
uint F_00a021b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa021b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00a021d0 */
uint F_00a021d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa021d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)((int)this + 0xc) = 0;
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),0,0);
  return uVar1;
}

/* ref: FUN_00a021f0 */
uint F_00a021f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa021f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9b730(*(undefined4 *)((int)this + 8),5,param_1);
  return uVar1;
}

/* ref: FUN_00a02210 */
uint F_00a02210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa02210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[2] = param_2;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a9c));
  return (uint)in_ecx;
}

/* ref: FUN_00a02240 */
unsigned int F_00a02240(unsigned int gen_a0)
{
  GEN_ENTER(0xa02240u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a94));
  return 0;
}

/* ref: FUN_00a02250 */
uint F_00a02250(unsigned int gen_a0)
{
  GEN_ENTER(0xa02250u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[2] = 0;
  *(undefined1 *)(in_ecx + 3) = 1;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10e1a9c));
  return (uint)in_ecx;
}

/* ref: FUN_00a02270 */
byte F_00a02270(unsigned int gen_a0)
{
  GEN_ENTER(0xa02270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 1) && (param_1 != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a02290 */
uint F_00a02290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa02290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb91c0(*(undefined4 *)((int)this + 8),param_1);
  return uVar1;
}

/* ref: FUN_00a022b0 */
uint F_00a022b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa022b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00b9b720(*(undefined4 *)(in_ecx + 8));
  return uVar1;
}

/* ref: FUN_00a022c0 */
uint F_00a022c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa022c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = F_00b9c490(*(undefined4 *)((int)this + 8),param_1,param_2,param_3);
  if (uVar2 != 0) {
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
    return uVar2;
  }
  uVar2 = 0;
  if ((char)param_4 != '\0') {
    uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),0,0,0);
    if (uVar2 != 0) {
      F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
    }
  }
  return uVar2;
}

/* ref: FUN_00a02340 */
uint F_00a02340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa02340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x410];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x408)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40c);
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  uVar2 = F_00b9c250(*(undefined4 *)((int)this + 8),param_1);
  if (uVar2 == 0) {
    if (((char)param_2 != '\0') &&
       (uVar2 = F_00b9b570(*(undefined4 *)((int)this + 8),0,0,0), uVar2 != 0)) {
      F_00a01fe0(this,uVar2,uVar1);
    }
  }
  else {
    uVar3 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
    F_00c472af(((undefined1 *)(gen_frame + 0x8)),0x400,"lua error(%d): %s",uVar2,uVar3);
    F_00b9a760(*(undefined4 *)((int)this + 8),uVar1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x408)) ^ (uint)(uint)(gen_frame + 0x40c));
  return uVar2;
}

/* ref: FUN_00a023f0 */
uint F_00a023f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa023f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b9a750(*(undefined4 *)((int)this + 8));
  F_00b9b070(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  F_00b9b070(*(undefined4 *)((int)this + 8),uVar1 + 1,"className");
  uVar1 = F_00b9abf0(*(undefined4 *)((int)this + 8),0xffffffff,0);
  uVar1 = F_00a01b60(this,uVar1);
  F_00b9a760(*(undefined4 *)((int)this + 8),0xfffffffd);
  F_00b9adc0(*(undefined4 *)((int)this + 8));
  F_00b9b290(*(undefined4 *)((int)this + 8),0xffffd8ee,param_1);
  return uVar1;
}

/* ref: FUN_00a02470 */
uint F_00a02470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa02470u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint uVar1;
  uint uVar2;
  
  F_00b9a610(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),((int)(*(uint *)&gen_args[2]) < 0) - 1 & (*(uint *)&gen_args[2]));
  uVar1 = F_00b9a750(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))));
  uVar2 = F_00b9b570(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),(*(undefined4 *)&gen_args[1]),(*(uint *)&gen_args[2]),(*(undefined4 *)&gen_args[3]));
  if (uVar2 != 0) {
    F_00b9a760(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar1);
  }
  return uVar2;
}

