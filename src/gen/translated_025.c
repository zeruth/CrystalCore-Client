#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_0054c160 */
uint F_0054c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54c160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  *(uint *)((int)this + 0x230) = *(uint *)((int)this + 0x230) & ~param_1;
  uVar1 = *(uint *)((int)this + 0x230);
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | param_1;
    *(uint *)((int)this + 0x230) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_0054c1a0 */
unsigned int F_0054c1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x240);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_0054c1d0 */
unsigned int F_0054c1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c1d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x280);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_0054c200 */
byte F_0054c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2c0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c220 */
uint F_0054c220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c220u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(undefined4 *)(in_ecx + 0x2c8) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(in_ecx + 0x2cc) = *(undefined4 *)(param_2 + 8);
  return param_2;
}

/* ref: FUN_0054c250 */
byte F_0054c250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c250u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2d0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c280 */
byte F_0054c280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c2a0 */
byte F_0054c2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c2a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c2c0 */
uint F_0054c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c2c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x300 + 0x20 + in_ecx;
}

/* ref: FUN_0054c2f0 */
unsigned int F_0054c2f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c2f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x920) = param_2;
  return 0;
}

/* ref: FUN_0054c320 */
uint F_0054c320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x924) = param_2;
  return param_2;
}

/* ref: FUN_0054c340 */
byte F_0054c340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x928) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c3c0 */
byte F_0054c3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2db8 + in_ecx);
}

/* ref: FUN_0054c430 */
byte F_0054c430(unsigned int gen_a0)
{
  GEN_ENTER(0x54c430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    if ((char)uVar1 == '\x03') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054c460 */
byte F_0054c460(unsigned int gen_a0)
{
  GEN_ENTER(0x54c460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if (uVar1 == 2) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 8))(this);
    if ((char)uVar1 == '\x02') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054c4c0 */
unsigned int F_0054c4c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c4c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ec8) = (float)((float10)1 / (float10)param_2);
  return 0;
}

/* ref: FUN_0054c4e0 */
unsigned int F_0054c4e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54c4e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2ec8) = (float)((float10)REFG(double, 0x1094890) / (float10)param_2);
  return 0;
}

/* ref: FUN_0054c530 */
byte F_0054c530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2f1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054c540 */
uint F_0054c540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 4 + param_2 * 4);
}

/* ref: FUN_0054c550 */
uint F_0054c550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::IFilterCommand::vf0 */
uint F_0054c5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::IGameObjectEventListener::vf2 */
uint F_0054c5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109c9a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054c660 */
uint F_0054c660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908(this,0x20,param_1);
  return uVar1;
}

/* ref: FUN_0054c690 */
uint F_0054c690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(uint *)(in_ecx + 0x20) != param_2) {
    *(uint *)(in_ecx + 0x50) = *(uint *)(in_ecx + 0x50) | 1;
    *(uint *)(in_ecx + 0x20) = param_2;
  }
  return param_2;
}

/* ref: FUN_0054c6c0 */
uint F_0054c6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x24 + param_2 * 4);
}

/* ref: FUN_0054c710 */
uint F_0054c710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != *(uint *)(in_ecx + 0xeac)) {
    *(uint *)(in_ecx + 0xea8) = *(uint *)(in_ecx + 0xea8) | 1;
    *(uint *)(in_ecx + 0xeac) = param_2;
  }
  return param_2;
}

/* ref: FUN_0054c770 */
uint F_0054c770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xf04) = param_2;
  return param_2;
}

/* ref: FUN_0054c7a0 */
byte F_0054c7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c7a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 == 7;
}

/* ref: FUN_0054c8a0 */
byte F_0054c8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c8a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  return uVar1 == 9;
}

/* ref: FUN_0054c930 */
uint F_0054c930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54c930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x3b08);
}

/* ref: FUN_0054c950 */
uint F_0054c950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54c950u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x3b08) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x3b0c) = param_3;
  return param_1;
}

/* ref: FUN_0054c990 */
uint F_0054c990(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x54c990u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_0054c9b0 */
float F_0054c9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54c9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4)))))));
}

/* ref: FUN_0054c9e0 */
uint F_0054c9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54c9e0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca00 */
uint F_0054ca00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ca00u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca20 */
uint F_0054ca20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ca20u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 * (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_3[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca40 */
uint F_0054ca40(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54ca40u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (float)((float10)param_3 * (float10)*param_2);
  param_1[1] = (float)((float10)param_3 * (float10)param_2[1]);
  return (uint)param_1;
}

/* ref: FUN_0054ca60 */
uint F_0054ca60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54ca60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2 * (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_0054ca80 */
uint F_0054ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x54ca80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)((int)this + 4);
  fVar2 = (float10)*(float *)this;
  fVar1 = (float10)(float)(fVar2 * fVar2 + fVar1 * fVar1);
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    return (uint)this;
  }
  fVar1 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar1))));
  *(float *)this = (float)(fVar1 * (float10)*(float *)this);
  *(float *)((int)this + 4) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 4))));
  return (uint)this;
}

/* ref: FUN_0054cb00 */
uint F_0054cb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cb00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_0054cb20 */
uint F_0054cb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0054cc90 */
uint F_0054cc90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54cc90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = (float)((float10)param_2 * (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2 * (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_0054ccb0 */
byte F_0054ccb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ccb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  uint uVar1;
  int iVar2;
  byte * pbVar3;
  
  uVar1 = 0xc;
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

/* ref: FUN_0054cd20 */
double F_0054cd20(unsigned int gen_a0)
{
  GEN_ENTER(0x54cd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (double)((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                             (float10)*(float *)((int)this + 8) *
                                             (float10)*(float *)((int)this + 8)))))));
}

/* ref: FUN_0054cd50 */
unsigned int F_0054cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x54cd50u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_0054cd80 */
uint F_0054cd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cd80u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0054cdb0 */
uint F_0054cdb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x54cdb0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = (float10)param_4;
  *param_1 = ((float)GEN_TOF((fVar1 * ((float10)*param_3 - (float10)*(float *)param_2) +
                    (float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) +
                      fVar1 * ((float10)param_3[1] - (float10)*(float *)(param_2 + 4)))));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)(param_2 + 8) +
                      ((float10)param_3[2] - (float10)*(float *)(param_2 + 8)) * fVar1)));
  return (uint)param_1;
}

/* ref: FUN_0054ce10 */
uint F_0054ce10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ce10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_0054cec0 */
uint F_0054cec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0054ccb0(this,param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0054ced0 */
byte F_0054ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ced0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_0054ccb0(this,param_1);
  return bVar1 == 0;
}

/* ref: FUN_0054cef0 */
double F_0054cef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = F_004eea10(this,param_1);
  return (double)fVar1;
}

/* ref: FUN_0054cf00 */
uint F_0054cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54cf00u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  return (uint)in_ecx;
}

/* ref: FUN_0054cf30 */
uint F_0054cf30(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54cf30u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_0054cf80 */
uint F_0054cf80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54cf80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (float)fVar2;
  return (uint)param_1;
}

/* ref: FUN_0054cfd0 */
uint F_0054cfd0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54cfd0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_3 * fVar2))));
  fVar1 = (float10)(float)fVar1;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_3 * fVar2))));
  param_1[3] = (float)fVar2;
  return (uint)param_1;
}

/* ref: FUN_0054d030 */
float * F_0054d030(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d030u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar3 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar4 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar1 = param_1[1];
  fVar3 = (float10)(float)fVar3;
  fVar4 = (float10)(float)fVar4;
  fVar2 = param_1[2];
  param_1[1] = (float)(fVar3 * (float10)param_1[3] + fVar4 * (float10)fVar1);
  param_1[2] = (float)((float10)fVar2 * fVar4 - (float10)*param_1 * fVar3);
  param_1[3] = (float)(fVar4 * (float10)param_1[3] - fVar3 * (float10)fVar1);
  *param_1 = (float)((float10)*param_1 * fVar4 + fVar3 * (float10)fVar2);
  return param_1;
}

/* ref: FUN_0054d0f0 */
float * F_0054d0f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d0f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar3 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * (float10)REFG(double, 0x1088108)))));
  fVar1 = *param_1;
  fVar3 = (float10)(float)fVar3;
  fVar4 = (float10)(float)fVar4;
  fVar2 = param_1[2];
  *param_1 = (float)(fVar3 * (float10)fVar1 - fVar4 * (float10)param_1[1]);
  param_1[2] = (float)((float10)fVar2 * fVar3 + (float10)param_1[3] * fVar4);
  param_1[3] = (float)((float10)param_1[3] * fVar3 - (float10)fVar2 * fVar4);
  param_1[1] = (float)((float10)fVar1 * fVar4 + (float10)param_1[1] * fVar3);
  return param_1;
}

/* ref: FUN_0054d200 */
uint F_0054d200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d200u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  in_ecx[1] = 0;
  *in_ecx = uVar1;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = param_2[1];
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = param_2[2];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0054d250 */
unsigned int F_0054d250(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54d250u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x30) = param_2;
  *(float *)(in_ecx + 0x34) = param_3;
  *(float *)(in_ecx + 0x38) = param_4;
  return 0;
}

/* ref: FUN_0054d280 */
uint F_0054d280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d280u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *(float *)(in_ecx + 0x30) = ((float)GEN_TOF(((float10)*param_2 + (float10)*(float *)(in_ecx + 0x30))));
  *(float *)(in_ecx + 0x34) = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)(in_ecx + 0x34))));
  *(float *)(in_ecx + 0x38) = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)(in_ecx + 0x38))));
  return in_ecx;
}

/* ref: FUN_0054d2b0 */
unsigned int F_0054d2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_004ef9d0(in_ecx,param_2);
  return 0;
}

/* ref: FUN_0054d2e0 */
uint F_0054d2e0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54d2e0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: Client::Game::Control::TargetSystem::TargetFilter::vf0 */
uint F_0054d420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ShowFilter::vf0 */
uint F_0054d450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircle::vf0 */
uint F_0054d530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ConfigCircleManager::vf0 */
uint F_0054d560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054d5c0 */
uint F_0054d5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::SpaceFilter::vf0 */
uint F_0054d600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::CircleFilter::vf0 */
uint F_0054d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ExecActionFilter::vf0 */
uint F_0054d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::VisibleFilter::vf0 */
uint F_0054d690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::ScreenProjectionFilter::vf0 */
uint F_0054d6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::TargetTypeFilter::vf0 */
uint F_0054d6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d6f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054d740 */
unsigned int F_0054d740(unsigned int gen_a0)
{
  GEN_ENTER(0x54d740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint * puVar2;
  
  iVar1 = 0x23;
  puVar2 = (uint *)((int)this + 0x50);
  do {
    puVar2[-0xb] = 0x11;
    puVar2[-10] = 0x11;
    puVar2[-9] = 0x11;
    puVar2[-8] = 0x11;
    puVar2[-7] = 0x11;
    puVar2[-6] = 0x11;
    puVar2[-5] = 0x11;
    puVar2[-4] = 0x11;
    puVar2[-3] = 0x11;
    puVar2[-2] = 0x11;
    *puVar2 = *puVar2 | 1;
    puVar2 = puVar2 + 0x15;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)((int)this + 0xed4) = 0x11;
  *(undefined4 *)((int)this + 0xed8) = 0x11;
  *(undefined4 *)((int)this + 0xedc) = 0x11;
  *(undefined4 *)((int)this + 0xee0) = 0x11;
  *(undefined4 *)((int)this + 0xee4) = 0x11;
  *(undefined4 *)((int)this + 0xee8) = 0x11;
  *(undefined4 *)((int)this + 0xeec) = 0x11;
  *(undefined4 *)((int)this + 0xef0) = 0x11;
  *(undefined4 *)((int)this + 0xef4) = 0x11;
  *(undefined4 *)((int)this + 0xef8) = 0x11;
  *(uint *)((int)this + 0xf00) = *(uint *)((int)this + 0xf00) | 1;
  return 0;
}

/* ref: FUN_0054d7d0 */
uint F_0054d7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d7d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined1 *)((int)this + 0x10) = *(undefined1 *)(param_1 + 0x10);
  *(undefined1 *)((int)this + 0x11) = *(undefined1 *)(param_1 + 0x11);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  return (uint)this;
}

/* ref: FUN_0054d810 */
uint F_0054d810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c984));
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  return (uint)this;
}

/* ref: FUN_0054d840 */
unsigned int F_0054d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x41) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x42) = *(undefined1 *)(param_1 + 0x42);
  *(undefined1 *)((int)this + 0x43) = *(undefined1 *)(param_1 + 0x43);
  return 0;
}

/* ref: FUN_0054d8b0 */
uint F_0054d8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  return (uint)this;
}

/* ref: FUN_0054d900 */
uint F_0054d900(unsigned int gen_a0)
{
  GEN_ENTER(0x54d900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x6c);
  if (uVar1 == 0) {
    if (*(int *)(in_ecx + 4) != 0) {
      *(undefined4 *)(in_ecx + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)(in_ecx + 4) + 4)));
    }
    uVar1 = *(uint *)(in_ecx + 0x6c);
  }
  return uVar1;
}

/* ref: FUN_0054d920 */
uint F_0054d920(unsigned int gen_a0)
{
  GEN_ENTER(0x54d920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(uint *)((int)this + 0x70) != 0) {
    return *(uint *)((int)this + 0x70);
  }
  iVar1 = *(int *)((int)this + 0x6c);
  if (iVar1 == 0) {
    if (*(int *)((int)this + 4) != 0) {
      *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
    }
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) goto LAB_0054d948;
  }
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
LAB_0054d948: ;
  return *(uint *)((int)this + 0x70);
}

/* ref: FUN_0054d950 */
uint F_0054d950(unsigned int gen_a0)
{
  GEN_ENTER(0x54d950u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(uint *)((int)this + 0x74) != 0) {
    return *(uint *)((int)this + 0x74);
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x70);
  if (piVar3 == (int *)0x0) {
    iVar1 = *(int *)((int)this + 0x6c);
    if (iVar1 == 0) {
      if (*(int *)((int)this + 4) != 0) {
        *(undefined4 *)((int)this + 0x6c) = *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      }
      iVar1 = *(int *)((int)this + 0x6c);
      if (iVar1 != 0) goto LAB_0054d97c;
    }
    else {
LAB_0054d97c: ;
      *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(iVar1 + 4);
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x70);
    if (piVar3 == (int *)0x0) goto LAB_0054d993;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3);
  *(uint *)((int)this + 0x74) = uVar2;
LAB_0054d993: ;
  return *(uint *)((int)this + 0x74);
}

/* ref: FUN_0054d9b0 */
byte F_0054d9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54d9b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0054d9d0 */
unsigned int F_0054d9d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54d9d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_0054da50 */
unsigned int F_0054da50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54da50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x8c) = param_2;
  return 0;
}

/* ref: FUN_0054da80 */
unsigned int F_0054da80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54da80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_0054daa0 */
unsigned int F_0054daa0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54daa0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x98) = param_2;
  return 0;
}

/* ref: FUN_0054dad0 */
unsigned int F_0054dad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54dad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x9c) = param_2;
  return 0;
}

/* ref: FUN_0054db50 */
unsigned int F_0054db50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54db50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x8c) = param_2;
  return 0;
}

/* ref: FUN_0054db80 */
unsigned int F_0054db80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54db80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_0054dba0 */
unsigned int F_0054dba0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54dba0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x94) = param_2;
  return 0;
}

/* ref: FUN_0054dbc0 */
uint F_0054dbc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dbc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 0x9c);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0xa0);
  return (uint)param_2;
}

/* ref: FUN_0054dbf0 */
unsigned int F_0054dbf0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54dbf0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0x9c) = param_3;
  *(float *)(in_ecx + 0xa0) = param_4;
  return 0;
}

/* ref: FUN_0054dc20 */
uint F_0054dc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  param_2[1] = *(undefined4 *)(in_ecx + 0xa8);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[2] = *(undefined4 *)(in_ecx + 0xac);
  return (uint)param_2;
}

/* ref: FUN_0054dc50 */
unsigned int F_0054dc50(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54dc50u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *(float *)(in_ecx + 0xa8) = param_3;
  *(float *)(in_ecx + 0xac) = param_4;
  return 0;
}

/* ref: FUN_0054dca0 */
byte F_0054dca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)this < 0x158) {
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}

/* ref: FUN_0054dcd0 */
byte F_0054dcd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dcd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)this;
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      this = (undefined *)((int)this + 4);
      if (*(int *)this == *param_1) {
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return 0;
}

/* ref: FUN_0054dd00 */
uint F_0054dd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (0 < iVar1) {
    do {
      this = (undefined *)((int)this + 4);
      if (*(int *)this == *param_1) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return 0xffffffff;
}

/* ref: FUN_0054dd30 */
unsigned int F_0054dd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = this;
    do {
      piVar3 = piVar3 + 1;
      if (*piVar3 == *param_1) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  if (iVar1 < 0x158) {
    *(int *)((int)this + iVar1 * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
  }
  return 0;
}

/* ref: FUN_0054dd70 */
uint F_0054dd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  iVar1 = param_1 + 1;
  if (iVar1 < *(int *)this) {
    puVar2 = (undefined4 *)((int)this + iVar1 * 4);
    puVar3 = puVar2;
    for (iVar1 = *(int *)this - iVar1; puVar2 = puVar2 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)this = *(int *)this + -1;
  return (uint)this;
}

/* ref: FUN_0054ddb0 */
uint F_0054ddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0054ddc0 */
uint F_0054ddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 4 + param_2 * 4;
}

/* ref: FUN_0054ddd0 */
uint F_0054ddd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ddd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)((int)this + param_1 * 4 + 4) = *param_2;
  return param_1;
}

/* ref: FUN_0054ddf0 */
unsigned int F_0054ddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *param_1) {
    puVar1 = this;
    do {
      puVar1 = puVar1 + 1;
      *puVar1 = *((undefined4 *)GEN_TOP((((int)param_1 - (int)this) + (int)puVar1)));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *param_1);
    *(int *)this = *param_1;
    return 0;
  }
  *(int *)this = *param_1;
  return 0;
}

/* ref: FUN_0054deb0 */
uint F_0054deb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54deb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_0054dec0 */
uint F_0054dec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dec0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x4c + 4 + in_ecx;
}

/* ref: FUN_0054df00 */
byte F_0054df00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54df00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)this < 0x10) {
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 4) = *param_1;
    *(int *)this = *(int *)this + 1;
    return 1;
  }
  return 0;
}

/* ref: AndFilter_TargetSystem_Control_Game_Client::vf0 */
uint F_0054df40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54df40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054dff0 */
byte F_0054dff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54dff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0054e030 */
uint F_0054e030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_0054e040 */
uint F_0054e040(unsigned int gen_a0)
{
  GEN_ENTER(0x54e040u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 1 << ((byte)param_1 & 0xf);
}

/* ref: FUN_0054e060 */
uint F_0054e060(unsigned int gen_a0)
{
  GEN_ENTER(0x54e060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_0054e070 */
uint F_0054e070(unsigned int gen_a0)
{
  GEN_ENTER(0x54e070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0054e080 */
uint F_0054e080(unsigned int gen_a0)
{
  GEN_ENTER(0x54e080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0054e090 */
uint F_0054e090(unsigned int gen_a0)
{
  GEN_ENTER(0x54e090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0054e0a0 */
uint F_0054e0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54e0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0054e0b0 */
uint F_0054e0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54e0b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0054e0d0 */
uint F_0054e0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054e0e0 */
uint F_0054e0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 600;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054e100 */
uint F_0054e100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x259;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: FUN_0054e180 */
uint F_0054e180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
    return 0xffff;
  }
  uVar1 = F_00623160(*(undefined * PTR32 *)((int)this + 0x78),param_1);
  return uVar1;
}

/* ref: FUN_0054e1a0 */
uint F_0054e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) == (undefined *)0x0) {
    puVar2 = &REFG(float, 0x1302d00);
    puVar3 = param_1;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    return (uint)param_1;
  }
  F_0064ce50(*(undefined * PTR32 *)((int)this + 0x78),param_1,param_2);
  return (uint)param_1;
}

/* ref: AndFilter_TargetSystem_Control_Game_Client::vf1 */
byte F_0054e200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar2 = this;
  if (*(int *)((int)this + 0xc) != 0) {
    do {
      piVar1 = (int *)puVar2[1];
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      uVar4 = uVar4 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar4 < *(uint *)((int)this + 0xc));
  }
  return 1;
}

/* ref: FUN_0054e240 */
uint F_0054e240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xc);
  if (uVar1 < 2) {
    *(undefined4 *)((int)this + uVar1 * 4 + 4) = param_1;
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  }
  return uVar1;
}

/* ref: FUN_0054e280 */
uint F_0054e280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e280u, gen_a0, gen_a1, 0u, 0u);
  ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0054e2a0 */
uint F_0054e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)this =
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)this |
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_0054e2e0 */
uint F_0054e2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e2e0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  
  puVar1 = param_2;
  if (*param_1 <= *param_2) {
    puVar1 = param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_0054e340 */
uint F_0054e340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(undefined1 *)(in_ecx + 0x20) = 1;
  return (uint)param_2;
}

/* ref: FUN_0054e370 */
uint F_0054e370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_0054e390 */
uint F_0054e390(unsigned int gen_a0)
{
  GEN_ENTER(0x54e390u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_0054e3f0 */
unsigned int F_0054e3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e3f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x40) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x41) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x42) = *(undefined1 *)(param_1 + 0x42);
  *(undefined1 *)((int)this + 0x43) = *(undefined1 *)(param_1 + 0x43);
  return 0;
}

/* ref: FUN_0054e460 */
uint F_0054e460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x120) = *param_2;
  *(undefined4 *)(in_ecx + 0x124) = param_2[1];
  *(undefined4 *)(in_ecx + 0x128) = param_2[2];
  *(undefined4 *)(in_ecx + 0x140) = *param_2;
  *(undefined4 *)(in_ecx + 0x144) = param_2[1];
  *(undefined4 *)(in_ecx + 0x148) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e4a0 */
uint F_0054e4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e4a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x130) = *param_2;
  *(undefined4 *)(in_ecx + 0x134) = param_2[1];
  *(undefined4 *)(in_ecx + 0x138) = param_2[2];
  *(undefined4 *)(in_ecx + 0x150) = *param_2;
  *(undefined4 *)(in_ecx + 0x154) = param_2[1];
  *(undefined4 *)(in_ecx + 0x158) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e4e0 */
uint F_0054e4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  uint uVar2;
  float * pfVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if ((param_1 != 0) && (1 < param_2)) {
    *(uint *)this = param_2 - 1;
    uVar2 = 0;
    puVar4 = this;
    do {
      puVar4 = puVar4 + 1;
      iVar5 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      *puVar4 = *(undefined4 *)(param_1 + iVar5);
    } while (uVar2 <= *(uint *)this);
    fVar7 = (float10)*(double *)&REFG(undefined, 0x10944e0);
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x24) = 0;
    uVar2 = 1;
    *(undefined4 *)((int)this + 0x24) = 0;
    if (1 < *(uint *)this) {
      fVar8 = (float10)*(double *)&REFG(undefined, 0x1092098);
      pfVar3 = (float *)((int)this + 0xc);
      do {
        uVar2 = uVar2 + 1;
        pfVar3[7] = ((float)GEN_TOF(((((float10)pfVar3[-2] - (float10)pfVar3[-1] * fVar8) + (float10)*pfVar3)
                           * fVar7)));
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
    uVar2 = 1;
    ((float *)(gen_frame + 0x4))[1] = 0.0;
    if (1 < *(uint *)this) {
      fVar8 = (float10)*(double *)&REFG(undefined, 0x1094788);
      pfVar3 = (float *)((int)this + 0x28);
      do {
        fVar1 = ((float *)(gen_frame + 0x4))[(int)(uVar2)];
        uVar2 = uVar2 + 1;
        ((float *)(gen_frame + 0x4))[0] = (float)(fVar8 - (float10)fVar1);
        fVar9 = (float10)(float)(fVar8 - (float10)fVar1);
        *pfVar3 = ((float)GEN_TOF((((float10)*pfVar3 - (float10)pfVar3[-1]) / fVar9)));
        ((float *)(gen_frame + 0x4))[(int)(uVar2)] = (float)((float10)1 / fVar9);
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
    iVar5 = *(int *)this + -1;
    if (iVar5 != 0) {
      pfVar3 = (float *)((int)this + iVar5 * 4 + 0x24);
      do {
        iVar6 = iVar5 + -1;
        *pfVar3 = (float)((float10)*pfVar3 - (float10)((float *)(gen_frame + 0x4))[(int)(iVar5 + 1)] * (float10)pfVar3[1]);
        pfVar3 = pfVar3 + -1;
        iVar5 = iVar6;
      } while (iVar6 != 0);
    }
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x34) = 0;
    uVar2 = 0;
    *(undefined4 *)((int)this + *(int *)((int)(uintptr_t)this) * 4 + 0x14) = 0;
    if (*(int *)this != 0) {
      pfVar3 = (float *)((int)this + 0x34);
      do {
        fVar1 = pfVar3[-4];
        uVar2 = uVar2 + 1;
        ((float *)(gen_frame + 0x4))[0] = fVar1;
        fVar8 = (float10)fVar1;
        fVar1 = ((float)GEN_TOF((((float10)pfVar3[-3] - fVar8) / fVar7)));
        ((float *)(gen_frame + 0x4))[0] = fVar1;
        *pfVar3 = fVar1;
        pfVar3[-8] = ((float)GEN_TOF(((((float10)pfVar3[-0xb] - (float10)pfVar3[-0xc]) - fVar8) -
                            (float10)fVar1)));
        pfVar3 = pfVar3 + 1;
      } while (uVar2 < *(uint *)this);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)this;
}

/* ref: FUN_0054e630 */
float10 F_0054e630(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e630u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  float10 fVar2;
  uint local_10;
  float local_8;
  
  local_8 = param_2;
  if ((char)param_3 != '\0') {
    fVar2 = (float10)(int)*param_1;
    if ((int)*param_1 < 0) {
      fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    local_8 = (float)(fVar2 * (float10)param_2);
  }
  if (!GEN_ISNAN(local_8) && !(0.0 <= local_8)) {
    local_8 = 0.0;
  }
  fVar2 = F_00c4d2a0((uint)(ulonglong)gen_d2bits((double)local_8),
                       (int)((ulonglong)gen_d2bits((double)local_8) >> 0x20));
  local_10 = (uint)(longlong)TRUNC((float10)(float)fVar2);
  uVar1 = local_10;
  if (*param_1 <= local_10) {
    uVar1 = *param_1 - 1;
  }
  fVar2 = (float10)(int)uVar1;
  if ((int)uVar1 < 0) {
    fVar2 = fVar2 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  fVar2 = (float10)(float)((float10)local_8 - fVar2);
  return (float10)((float)GEN_TOF((fVar2 * (((float10)GEN_TOD(gen_bits2f(param_1[uVar1 + 5]))) +
                                  fVar2 * (((float10)GEN_TOD(gen_bits2f(param_1[uVar1 + 9]))) +
                                          fVar2 * ((float10)GEN_TOD(gen_bits2f(param_1[uVar1 + 0xd]))))) +
                         ((float10)GEN_TOD(gen_bits2f(param_1[uVar1 + 1]))))));
}

/* ref: FUN_0054e6f0 */
unsigned int F_0054e6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54e6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_0054e4e0(this,param_1,param_3);
  F_0054e4e0((undefined *)((int)this + 0x44),param_2,param_3);
  return 0;
}

/* ref: FUN_0054e720 */
uint F_0054e720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)fVar1 + (float10)fVar2));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)fVar3 + (float10)fVar4));
  return (uint)param_1;
}

/* ref: FUN_0054e760 */
uint F_0054e760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_3 + 4);
  fVar3 = *(float *)(param_2 + 8);
  fVar4 = *(float *)(param_3 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)fVar1 - (float10)fVar2));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)fVar3 - (float10)fVar4));
  return (uint)param_1;
}

/* ref: FUN_0054e7a0 */
uint F_0054e7a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x54e7a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = *(float *)(param_2 + 8);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_1[1] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)fVar1));
  param_1[2] = (undefined4)gen_fl2bits((float)((float10)param_3 * (float10)fVar2));
  return (uint)param_1;
}

/* ref: FUN_0054e800 */
byte F_0054e800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00414500(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)this);
  return *(int *)(uVar1 + 0x14) != 0;
}

/* ref: FUN_0054e820 */
uint F_0054e820(unsigned int gen_a0)
{
  GEN_ENTER(0x54e820u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1090708);
  in_ecx[1] = GEN_FLT_TO(in_ecx[1], REFG(float, 0x1090708));
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  in_ecx[4] = uVar1;
  in_ecx[5] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = 0;
  *(undefined1 *)(in_ecx + 0xb) = 0;
  in_ecx[0xc] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0054e8d0 */
uint F_0054e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e8d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  param_2[1] = *(undefined4 *)(in_ecx + 0x14);
  param_2[2] = *(undefined4 *)(in_ecx + 0x18);
  return (uint)param_2;
}

/* ref: FUN_0054e8f0 */
uint F_0054e8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e910 */
uint F_0054e910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054e930 */
byte F_0054e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54e930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0xb0) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0xb1) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0xb2) = *(undefined1 *)(param_1 + 0x42);
  bVar1 = *(byte *)(param_1 + 0x43);
  *(byte *)((int)this + 0xb3) = bVar1;
  return bVar1;
}

/* ref: FUN_0054e9c0 */
uint F_0054e9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54e9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(char *)((int)this + 0xc4) = (char)param_2;
  *(char *)((int)this + 0xc5) = (char)(param_2 >> 8);
  *(char *)((int)this + 0xc6) = (char)(param_2 >> 0x10);
  return param_2 >> 0x10;
}

/* ref: FUN_0054eaa0 */
uint F_0054eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x18);
  param_2[1] = *(undefined4 *)(in_ecx + 0x1c);
  param_2[2] = *(undefined4 *)(in_ecx + 0x20);
  return (uint)param_2;
}

/* ref: FUN_0054eac0 */
byte F_0054eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (*(int *)((int)this + 0x28) == *(int *)(param_1 + 0x28)) {
    bVar1 = F_0054ccb0((undefined *)((int)this + 0x30),param_1 + 0x30);
    if (bVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0054eaf0 */
uint F_0054eaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eaf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054eb10 */
uint F_0054eb10(unsigned int gen_a0)
{
  GEN_ENTER(0x54eb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  *(undefined4 *)((int)this + 0x28) = 0xe0000000;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0xffffffff;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x74) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x78) = REFG(float, 0x1375ac8);
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0xa0) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0xa8) = REFG(float, 0x1375ac8);
  uVar1 = REFG(float, 0x1090708);
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined1 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = uVar1;
  *(undefined4 *)((int)this + 0x220) = uVar1;
  *(undefined4 *)((int)this + 0x224) = uVar1;
  *(undefined4 *)((int)this + 0x228) = uVar1;
  *(undefined4 *)((int)this + 0x22c) = 0;
  *(undefined4 *)((int)this + 0x230) = 0;
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = (undefined4 *)((int)this + 0x240);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &REFG(float, 0x1302d00);
  puVar4 = (undefined4 *)((int)this + 0x280);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)((int)this + 0x2c0) = 0;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2cc) = 0;
  *(undefined1 *)((int)this + 0x2d0) = 1;
  *(undefined4 *)((int)this + 0x2e0) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x2e4) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x2e8) = REFG(float, 0x1375ac8);
  *(undefined2 *)((int)this + 0x2f0) = 0;
  return (uint)this;
}

/* ref: FUN_0054ecc0 */
uint F_0054ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ecc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ece0 */
uint F_0054ece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ece0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xa0) = *param_2;
  *(undefined4 *)(in_ecx + 0xa4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ed10 */
uint F_0054ed10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ed10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x2e0) = *param_2;
  *(undefined4 *)(in_ecx + 0x2e4) = param_2[1];
  *(undefined4 *)(in_ecx + 0x2e8) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ed40 */
unsigned int F_0054ed40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ed40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return 0;
}

/* ref: FUN_0054edf0 */
uint F_0054edf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54edf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109ca80));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054ee10 */
uint F_0054ee10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ee10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca8c));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0054ee30 */
uint F_0054ee30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ee30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109ca98));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_0054ee50 */
uint F_0054ee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ee50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x109caa4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Control::TargetSystem::DelayedRayFilter::vf0 */
uint F_0054ee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ee70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::PetFilter::vf0 */
uint F_0054eea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::OrFilter::vf0 */
uint F_0054eed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54eed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Control::TargetSystem::NotFilter::vf0 */
uint F_0054ef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054efa0 */
uint F_0054efa0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54efa0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *param_1 = (float)fVar1;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  param_1[3] = (float)fVar2;
  F_0054d030(param_1,param_3);
  F_0054d0f0(param_1,param_4);
  return (uint)param_1;
}

/* ref: FUN_0054f010 */
uint F_0054f010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54f010u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  *in_ecx = *param_4;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = param_4[1];
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = param_4[2];
  in_ecx[0xc] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xe] = 0;
  F_004efe70(in_ecx,param_3);
  in_ecx[0xc] = (undefined4)
                gen_fl2bits((float)((float10)*param_2 + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xc])))));
  in_ecx[0xd] = (undefined4)
                gen_fl2bits((float)((float10)param_2[1] + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xd])))));
  in_ecx[0xe] = (undefined4)
                gen_fl2bits((float)((float10)param_2[2] + ((float10)GEN_TOD(gen_bits2f(in_ecx[0xe])))));
  return (uint)in_ecx;
}

/* ref: FUN_0054f090 */
ushort F_0054f090(float gen_a0)
{
  GEN_ENTER(0x54f090u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  int iVar1;
  
  iVar1 = (int)((((float10)(*(float *)&gen_args[0]) + (float10)*(double *)&REFG(undefined, 0x1080228)) *
                (float10)*(double *)&REFG(undefined, 0x1088118)) /
               (((float10)*(double *)&REFG(undefined, 0x1088118) * (float10)*(float *)&REFG(undefined, 0x1305b6c)) /
               (float10)REFG(double, 0x109cab0)));
  if (0xfffe < iVar1) {
    return 0xffff;
  }
  if (0 < iVar1) {
    (*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0)) = (ushort)iVar1;
    return (*(undefined2 *)((char *)&(*(float *)&gen_args[0]) + 0));
  }
  return 0;
}

/* ref: FUN_0054f100 */
uint F_0054f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f100u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)(float)((float10)param_2[1] - (float10)in_ecx[1]);
  fVar3 = (float10)(float)((float10)*param_2 - (float10)*in_ecx);
  fVar4 = (float10)(float)((float10)param_2[2] - (float10)in_ecx[2]);
  fVar1 = ((float)GEN_TOF(((fVar2 * (float10)param_2[5] + fVar3 * (float10)param_2[4]) +
                 fVar4 * (float10)param_2[6])));
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) -
                          (float10)in_ecx[3] * (float10)in_ecx[3])));
  if (((float10)0 < fVar2) &&
     ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return (uint)param_2 & 0xffffff00;
  }
  if ((float10)0 <= (float10)fVar1 * (float10)fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Control::TargetSystem::RayFilter::vf0 */
uint F_0054f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054f210 */
unsigned int F_0054f210(unsigned int gen_a0)
{
  GEN_ENTER(0x54f210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = (undefined4 *)((int)this + 4);
  iVar1 = 0xf;
  puVar2 = (undefined4 *)((int)this + 0x18);
  do {
    *puVar3 = 0;
    puVar2[-4] = 0;
    puVar2[-3] = 0;
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar3 = puVar3 + 0x13;
    puVar2 = puVar2 + 0x13;
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x4c4) = 0;
  *(undefined4 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0xa6c) = 0;
  *(undefined4 *)((int)this + 0xfd0) = 0;
  return 0;
}

/* ref: FUN_0054f2a0 */
float F_0054f2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint in_eax;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  in_eax = ((code *)*(gen_code32 *)(*(int *)this + 0xec))();
  F_00536840(in_eax,&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  return ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x8)))));
}

/* ref: FUN_0054f2d0 */
unsigned int F_0054f2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f2d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x109c038);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x109c800);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x109c03c);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087ef8);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_0054f370 */
unsigned int F_0054f370(unsigned int gen_a0)
{
  GEN_ENTER(0x54f370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*(undefined4 *)(gen_frame + 0xc)) = REFG(float, 0x109c038);
  (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x109c800);
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x109c03c);
  (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x24)) = REFG(float, 0x1087ef8);
  (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1087f04);
  F_0054e4e0((undefined *)((int)this + 4),&(*(undefined4 *)(gen_frame + 0x18)),4);
  F_0054e4e0((undefined *)((int)this + 0x48),&(*(undefined4 *)(gen_frame + 0x8)),4);
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c));
  return 0;
}

/* ref: FUN_0054f410 */
byte F_0054f410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0054f430 */
byte F_0054f430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2))) & 1 << ((byte)param_1 & 0xf)) != 0;
}

/* ref: FUN_0054f460 */
float10 F_0054f460(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f460u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_0054e630(param_1 + 0x48,param_2,param_3);
  return fVar1;
}

/* ref: FUN_0054f480 */
float10 F_0054f480(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f480u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float10 fVar1;
  
  fVar1 = F_0054e630(param_1 + 0x48,param_2,param_3);
  return fVar1;
}

/* ref: FUN_0054f4b0 */
uint F_0054f4b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f4b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054f4d0 */
unsigned int F_0054f4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f4d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0054f550 */
uint F_0054f550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 0x70) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0054f570 */
uint F_0054f570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 0x70) =
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)((int)this + 0x70);
  return (uint)this;
}

/* ref: FUN_0054f5b0 */
uint F_0054f5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x54f5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109c94c));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = uVar2;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x34) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x38) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_0054f610 */
uint F_0054f610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 uVar1;
  undefined4 uVar2;
  uint * puVar3;
  uint uVar4;
  undefined * this_00;
  uint uVar5;
  
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this + 0x18);
  if (*(int *)((int)this + 0x50) != 0) {
    F_0053c340(this,*(int *)((int)this + 0x50),0,*(undefined4 *)((int)this + 0x27c),0);
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  puVar3 = (uint *)F_00ab2a20(0);
  *(uint * PTR32 *)((int)this + 0x27c) = puVar3;
  if (puVar3 == (uint *)0x0) {
    *(char * PTR32 *)((int)this + 0x20c) = "cbbm_id0";
  }
  else {
    *(uint *)((int)this + 0x20c) = (*puVar3 & 0xffffff) + (int)puVar3;
  }
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this + 0x20c);
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  uVar4 = F_00b5a860(&(*(undefined4 *)(gen_frame + 0x0)));
  uVar2 = REFG(undefined4, 0x13059d0);
  uVar1 = REFG(float, 0x1087f04);
  *(uint *)((int)this + 0x244) = uVar4;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = uVar2;
  *(undefined4 *)((int)this + 0x128) = 0xffffffff;
  *(undefined4 *)((int)this + 300) = uVar1;
  *(undefined4 *)((int)this + 0x130) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x134) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x138) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0x140) = 0;
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x16c) = uVar1;
    *(undefined1 *)((int)this + 0x1a4) = 1;
  }
  *(undefined1 *)((int)this + 0x1e0) = 1;
  uVar4 = *(uint *)((int)this + 0x50);
  *(undefined4 *)((int)this + 0x1a8) = uVar1;
  if (*(uint *)((int)this + 0x18) == uVar4) {
    uVar5 = *(uint *)((int)this + 0x27c);
  }
  else {
    uVar4 = F_00ab2a20(uVar4);
    uVar5 = uVar4;
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    uVar4 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar4 = F_00aa7040(this_00,0,0,0,uVar5,(*(undefined4 *)(gen_frame + 0x8)));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    *(undefined4 *)((int)this + 0x14) = 2;
    uVar4 = F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar4 != 0) {
      F_00aa0750(0,0,0);
    }
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)((int)this + 0xc0);
    *(undefined4 *)((int)this + 0x50) = 0;
  }
  return uVar4;
}

/* ref: FUN_0054f7a0 */
uint F_0054f7a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54f7a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_EAX = 0;
  undefined * this_00;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1;
  if (param_1 < 0xe) {
    uVar1 = *(undefined4 *)((int)this + param_1 * 4 + 0x18);
    iVar2 = *(int *)((int)this + param_1 * 4 + 0x50);
    if (iVar2 != 0) {
      F_0053c340(this,iVar2,param_1,*(undefined4 *)((int)this + param_1 * 4 + 0x27c),0);
    }
  }
  else {
    param_1 = 0;
    uVar1 = param_1;
  }
  param_1 = uVar1;
  F_005365b0(this,uVar3,0);
  uVar1 = REFG(float, 0x1087f04);
  uVar4 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
  if ((char)param_2 != '\0') {
    *(undefined4 *)((int)this + uVar3 * 4 + 0x16c) = REFG(float, 0x1087f04);
    *(undefined1 *)((int)this + 0x1a4) = 1;
  }
  *(undefined4 *)((int)this + uVar3 * 4 + 0x1a8) = uVar1;
  *(undefined1 *)(uVar3 + 0x1e0 + (int)this) = 1;
  if (uVar3 < 0xe) {
    uVar4 = *(uint *)((int)this + uVar3 * 4 + 0x50);
    if (*(uint *)((int)this + uVar3 * 4 + 0x18) == uVar4) {
      uVar5 = *(uint *)((int)this + uVar3 * 4 + 0x27c);
    }
    else {
      uVar4 = F_00ab2a20(uVar4);
      uVar5 = uVar4;
    }
  }
  else {
    uVar5 = 0;
  }
  if ((*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) &&
     (this_00 = (undefined *)F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10)), uVar4 = 0,
     this_00 != (undefined *)0x0)) {
    uVar4 = F_00aa7040(this_00,0,uVar3,0,uVar5,param_1);
  }
  if (*(undefined * PTR32 *)((int)this + 0x10) != (undefined *)0x0) {
    if (uVar3 == 0) {
      *(undefined4 *)((int)this + 0x14) = 2;
    }
    uVar4 = F_00a5f290(*(undefined * PTR32 *)((int)this + 0x10));
    if (uVar4 != 0) {
      F_00aa0750(0,uVar3,0);
    }
    uVar4 = *(uint *)((int)this + uVar3 * 4 + 0xc0);
    *(uint *)((int)this + uVar3 * 4 + 0x88) = uVar4;
    *(undefined4 *)((int)this + uVar3 * 4 + 0x50) = 0;
  }
  return uVar4;
}

/* ref: FUN_0054f8b0 */
byte F_0054f8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x38);
  *(undefined1 *)((int)this + 0x140) = *(undefined1 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x141) = *(undefined1 *)(param_1 + 0x41);
  *(undefined1 *)((int)this + 0x142) = *(undefined1 *)(param_1 + 0x42);
  bVar1 = *(byte *)(param_1 + 0x43);
  *(byte *)((int)this + 0x143) = bVar1;
  return bVar1;
}

/* ref: FUN_0054f940 */
uint F_0054f940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  return param_1;
}

/* ref: FUN_0054f970 */
unsigned int F_0054f970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x38);
  return 0;
}

/* ref: FUN_0054f9d0 */
uint F_0054f9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54f9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  if ((char)param_1 == '\0') {
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  *(undefined4 *)((int)this + 0x920) = 0;
  *(undefined4 *)((int)this + 0x924) = 0xffffffff;
  *(undefined1 *)((int)this + 0x928) = 0;
  this_00 = (undefined *)((int)this + 0x20);
  iVar2 = 3;
  do {
    uVar1 = F_0054eb10(this_00);
    this_00 = (undefined *)((int)this_00 + 0x300);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0054fa20 */
uint F_0054fa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fa20u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  
  fVar1 = param_2[8];
  in_ecx[1] = 0.0;
  *in_ecx = fVar1;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = param_2[9];
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_2[10];
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  F_004efe70(in_ecx,(uint)(param_2 + 4));
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] + (float10)*param_2);
  in_ecx[0xd] = (float)((float10)param_2[1] + (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)((float10)param_2[2] + (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: Client::Game::Control::TargetSystem::vf3 */
uint F_0054faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54faa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xfac) = param_2;
  return param_2;
}

/* ref: Client::Game::Control::TargetSystem::vf4 */
uint F_0054fab0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xfac);
}

/* ref: Client::Game::Control::TargetSystem::vf5 */
uint F_0054fac0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xf54) * 0x54 + in_ecx + 0xa8;
}

/* ref: Client::Game::Control::TargetSystem::vf2 */
uint F_0054fae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109c9a0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054fb20 */
uint F_0054fb20(unsigned int gen_a0)
{
  GEN_ENTER(0x54fb20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  
  if ((*(byte *)((int)this + 0xe) & 1) != 0) {
    fVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x20))();
    return (uint)gen_fl2bits(fVar1);
  }
  fVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x1c))();
  return (uint)gen_fl2bits(fVar1);
}

/* ref: FUN_0054fbe0 */
float10 F_0054fbe0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54fbe0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar3 = F_0054e630(param_1 + 0x48,param_2,param_3);
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = (float)fVar3;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar4 = F_0054e630(param_1 + 0x48,fVar1,param_3);
    fVar5 = F_0054e630(param_1 + 0x48,(float)(float10)1,param_3);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(float)fVar3 - (float10)(float)fVar4) /
                   (float10)(float)(fVar5 - (float10)(float)fVar4))));
  }
  param_3 = (uint)gen_fl2bits(fVar2);
  return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x9c) -
                                          (float10)*(float *)(param_1 + 0x98)))) *
                          ((float10)GEN_TOD(gen_bits2f(param_3))) + (float10)*(float *)(param_1 + 0x98))));
}

/* ref: FUN_0054fc90 */
unsigned int F_0054fc90(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x54fc90u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  uint param_4 = (uint)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar5 = F_0054e630(param_1 + 0x48,param_3,param_4);
  fVar1 = *(float *)(param_1 + 0x94);
  fVar2 = (float)fVar5;
  if ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) ==
      ((GEN_ISNAN(fVar1) || GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) || fVar1 == *(float *)&REFG(undefined, 0x1088114))) {
    fVar6 = F_0054e630(param_1 + 0x48,fVar1,param_4);
    fVar7 = F_0054e630(param_1 + 0x48,(float)(float10)1,param_4);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(float)fVar5 - (float10)(float)fVar6) /
                   (float10)(float)((float10)(float)fVar7 - (float10)(float)fVar6))));
  }
  param_4 = (uint)gen_fl2bits(fVar2);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar1 = *(float *)(param_1 + 0x9c);
  fVar4 = *(float *)(param_1 + 0xac);
  fVar2 = *(float *)(param_1 + 0xa0);
  *param_2 = (*(undefined * PTR32 (*)[1])REFP(0x109c95c));
  param_2[1] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)fVar1 +
                                  (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4))) *
                                                  (float10)(float)((float10)fVar3 - (float10)fVar1))))
                                  ))));
  param_2[2] = (undefined4)
               gen_fl2bits(((float)GEN_TOF(((float10)fVar2 +
                                  (float10)((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(param_4))) *
                                                  (float10)(float)((float10)fVar4 - (float10)fVar2))))
                                  ))));
  return 0;
}

/* ref: FUN_0054fdb0 */
uint F_0054fdb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fdb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0054fdd0 */
uint F_0054fdd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54fdd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0054fde0 */
uint F_0054fde0(unsigned int gen_a0)
{
  GEN_ENTER(0x54fde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0054f4d0(this);
  return (uint)this;
}

/* ref: FUN_0054fe10 */
uint F_0054fe10(unsigned int gen_a0)
{
  GEN_ENTER(0x54fe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00b74aa0(this);
  F_0053f7a0((undefined *)((int)this + 0x30));
  *(undefined4 *)((int)this + 0x3af4) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x3af0) = (*(undefined * PTR32 (*)[1])REFP(0x109c954));
  *(undefined2 *)((int)this + 0x3af8) = 0x100;
  return (uint)this;
}

/* ref: FUN_0054fe40 */
byte F_0054fe40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54fe40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  byte bVar1;
  
  *(float *)((int)param_1 + 8) = param_2;
  bVar1 = F_0054fb60(param_1);
  return bVar1;
}

/* ref: Common::Component::BGCollision::Object::vf0 */
uint F_0054feb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54feb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0054fee0 */
uint F_0054fee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x54fee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0054ff00 */
uint F_0054ff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_0054ff20 */
unsigned int F_0054ff20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x54ff20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return 0;
}

/* ref: FUN_0054ff50 */
uint F_0054ff50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ff70 */
uint F_0054ff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x54ff70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_0054ff90 */
uint F_0054ff90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ff90u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] + (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] + (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_0054ffc0 */
uint F_0054ffc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54ffc0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return (uint)param_1;
}

/* ref: FUN_0054fff0 */
uint F_0054fff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x54fff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*(float *)this - (float10)*param_2);
  param_1[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) - (float10)param_2[1])));
  param_1[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 8) - (float10)param_2[2])));
  return (uint)param_1;
}

/* ref: FUN_00550100 */
uint F_00550100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00550130 */
uint F_00550130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550130u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_00550160 */
uint F_00550160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00550180 */
uint F_00550180(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550180u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)(fVar1 * (float10)in_ecx[2]);
  return (uint)param_2;
}

/* ref: FUN_005501b0 */
uint F_005501b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5501b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  return (uint)param_1;
}

/* ref: FUN_005501e0 */
float F_005501e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5501e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4))))))));
}

/* ref: FUN_00550270 */
uint F_00550270(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550270u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_005502a0 */
uint F_005502a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5502a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_005502d0 */
uint F_005502d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5502d0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_00550300 */
uint F_00550300(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550300u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_2 = (float)(fVar1 * (float10)*in_ecx);
  param_2[1] = (float)((float10)in_ecx[1] * fVar1);
  param_2[2] = (float)((float10)in_ecx[2] * fVar1);
  param_2[3] = (float)(fVar1 * (float10)in_ecx[3]);
  return (uint)param_2;
}

/* ref: FUN_00550330 */
uint F_00550330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 + (float10)*(float *)this);
  param_1[1] = ((float)GEN_TOF(((float10)param_2[1] + (float10)*(float *)((int)this + 4))));
  param_1[2] = ((float)GEN_TOF(((float10)param_2[2] + (float10)*(float *)((int)this + 8))));
  param_1[3] = ((float)GEN_TOF(((float10)param_2[3] + (float10)*(float *)((int)this + 0xc))));
  return (uint)param_1;
}

/* ref: FUN_00550360 */
uint F_00550360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)in_ecx;
}

/* ref: FUN_00550380 */
unsigned int F_00550380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550380u, gen_a0, gen_a1, 0u, 0u);
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
  return 0;
}

/* ref: FUN_005503f0 */
unsigned int F_005503f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5503f0u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = ((float)GEN_TOF((((float10)param_2[8] * (float10)param_3[2] +
                     ((float10)*param_2 * (float10)*param_3 +
                     (float10)param_2[4] * (float10)param_3[1])) + (float10)param_2[0xc])));
  param_1[1] = ((float)GEN_TOF((((float10)param_2[9] * (float10)param_3[2] +
                       ((float10)param_2[5] * (float10)param_3[1] +
                       (float10)param_2[1] * (float10)*param_3)) + (float10)param_2[0xd])));
  param_1[2] = ((float)GEN_TOF((((float10)param_2[10] * (float10)param_3[2] +
                       ((float10)param_2[6] * (float10)param_3[1] +
                       (float10)param_2[2] * (float10)*param_3)) + (float10)param_2[0xe])));
  return 0;
}

/* ref: FUN_00550450 */
uint F_00550450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550450u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar9 = (float10)*(float *)(param_3 + 8);
  fVar1 = in_ecx[9];
  fVar2 = in_ecx[10];
  fVar10 = (float10)*(float *)(param_3 + 4);
  fVar3 = in_ecx[5];
  fVar4 = in_ecx[6];
  fVar11 = (float10)*(float *)param_3;
  fVar5 = in_ecx[1];
  fVar6 = in_ecx[2];
  fVar7 = in_ecx[0xd];
  fVar8 = in_ecx[0xe];
  *param_2 = ((float)GEN_TOF(((float10)in_ecx[0xc] +
                    (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar11 * (float10)*in_ecx) +
                                                     (float10)(float)(fVar10 * (float10)in_ecx[4]))))
                                    + (float10)(float)(fVar9 * (float10)in_ecx[8])))))));
  param_2[1] = ((float)GEN_TOF(((float10)fVar7 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar5 * fVar11) +
                                                       (float10)(float)((float10)fVar3 * fVar10)))) +
                                      (float10)(float)((float10)fVar1 * fVar9)))))));
  param_2[2] = ((float)GEN_TOF(((float10)fVar8 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar11 * (float10)fVar6) +
                                                       (float10)(float)(fVar10 * (float10)fVar4)))) +
                                      (float10)(float)(fVar9 * (float10)fVar2)))))));
  return (uint)param_2;
}

/* ref: FUN_00550560 */
uint F_00550560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550560u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  in_ecx[2] = (float)((float10)in_ecx[2] - (float10)param_2[2]);
  in_ecx[3] = (float)((float10)in_ecx[3] + (float10)*param_2);
  in_ecx[4] = (float)((float10)in_ecx[4] + (float10)param_2[1]);
  in_ecx[5] = (float)((float10)param_2[2] + (float10)in_ecx[5]);
  return (uint)param_2;
}

/* ref: FUN_005505a0 */
uint F_005505a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5505a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005505c0 */
uint F_005505c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5505c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_005505e0 */
uint F_005505e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5505e0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*in_ecx - (float10)*param_2);
  in_ecx[1] = (float)((float10)in_ecx[1] - (float10)param_2[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00550600 */
uint F_00550600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550600u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *in_ecx = (float)((float10)*param_2 + (float10)*in_ecx);
  in_ecx[1] = (float)((float10)param_2[1] + (float10)in_ecx[1]);
  return (uint)in_ecx;
}

/* ref: FUN_00550620 */
uint F_00550620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550620u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = param_2[2];
  *in_ecx = *param_2;
  in_ecx[1] = uVar1;
  uVar1 = param_2[2];
  in_ecx[2] = *param_2;
  in_ecx[3] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00550650 */
unsigned int F_00550650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x550650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)param_2;
  *in_ecx = (float)((float10)*in_ecx - fVar1);
  in_ecx[1] = (float)((float10)in_ecx[1] - fVar1);
  in_ecx[2] = (float)((float10)in_ecx[2] + fVar1);
  in_ecx[3] = (float)(fVar1 + (float10)in_ecx[3]);
  return 0;
}

/* ref: FUN_00550680 */
unsigned int F_00550680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550680u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((float10)*(float *)param_2 < (float10)*in_ecx) {
    *in_ecx = *(float *)param_2;
  }
  if ((float10)*(float *)(param_2 + 8) < (float10)in_ecx[1]) {
    in_ecx[1] = *(float *)(param_2 + 8);
  }
  if ((float10)in_ecx[2] < (float10)*(float *)param_2) {
    in_ecx[2] = *(float *)param_2;
  }
  if ((float10)in_ecx[3] < (float10)*(float *)(param_2 + 8)) {
    in_ecx[3] = *(float *)(param_2 + 8);
  }
  return 0;
}

/* ref: FUN_00550710 */
uint F_00550710(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x550710u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
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

/* ref: FUN_00550740 */
unsigned int F_00550740(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550740u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00550770 */
unsigned int F_00550770(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x550770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  return 0;
}

/* ref: FUN_005507d0 */
byte F_005507d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5507d0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  float10 fVar5;
  float10 fVar6;
  float local_8;
  
  uVar4 = param_1;
  local_8 = 0.0;
  fVar1 = (float)((float10)*(float *)param_3 - (float10)*(float *)param_1);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 8) - (float10)*(float *)param_1)));
  fVar5 = (float10)*(float *)param_2;
  if ((double)(float)(fVar5 * fVar5) < *(double *)&REFG(undefined, 0x109cc40)) {
    if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
      return 0;
    }
    if (!GEN_ISNAN(fVar2) && (!(0.0 < fVar2) && fVar2 != 0.0)) {
      return 0;
    }
    param_1 = REFG(float, 0x1090998);
  }
  else {
    fVar5 = (float10)(float)((float10)1 / fVar5);
    fVar1 = (float)(fVar5 * (float10)fVar1);
    fVar2 = (float)(fVar5 * (float10)fVar2);
    if ((float10)fVar2 < (float10)fVar1) {
      param_1 = (uint)gen_fl2bits(fVar1);
      if (0.0 < fVar2) {
        local_8 = fVar2;
      }
    }
    else {
      param_1 = (uint)gen_fl2bits(fVar2);
      if (0.0 < fVar1) {
        local_8 = fVar1;
      }
    }
    if ((!GEN_ISNAN((float10)local_8) && !GEN_ISNAN(((float10)GEN_TOD(gen_bits2f(param_1))))) &&
        !((float10)local_8 <= ((float10)GEN_TOD(gen_bits2f(param_1))))) {
      return 0;
    }
  }
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 4) - (float10)*(float *)(uVar4 + 8))));
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_3 + 0xc) - (float10)*(float *)(uVar4 + 8))));
  fVar5 = (float10)*(float *)(param_2 + 8);
  if ((double)(float)(fVar5 * fVar5) < *(double *)&REFG(undefined, 0x109cc40)) {
    if ((!(0.0 < fVar1)) && (!(fVar2 < 0.0))) {
      return 1;
    }
    return 0;
  }
  fVar5 = (float10)(float)((float10)1 / fVar5);
  fVar1 = (float)(fVar5 * (float10)fVar1);
  fVar2 = (float)(fVar5 * (float10)fVar2);
  fVar5 = (float10)fVar2;
  fVar6 = (float10)fVar1;
  if (fVar5 < fVar6) {
    if ((float10)local_8 < fVar5) {
      local_8 = fVar2;
    }
    bVar3 = fVar6 < ((float10)GEN_TOD(gen_bits2f(param_1)));
    fVar2 = local_8;
  }
  else {
    if ((float10)local_8 < fVar6) {
      local_8 = fVar1;
    }
    bVar3 = fVar5 < ((float10)GEN_TOD(gen_bits2f(param_1)));
    fVar1 = fVar2;
    fVar2 = local_8;
  }
  if (bVar3) {
    param_1 = (uint)gen_fl2bits(fVar1);
  }
  if (((float10)GEN_TOD(gen_bits2f(param_1))) < (float10)fVar2) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00550990 */
byte F_00550990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x550990u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar1 = *(float *)param_3;
  fVar2 = *(float *)param_4;
  (*(float *)(gen_frame + 0x28)) = 0.0;
  fVar7 = (float10)fVar1;
  (*(float *)(gen_frame + 0x2c)) = 0.0;
  (*(float *)(gen_frame + 0x30)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  (*(float *)(gen_frame + 0xc)) = 0.0;
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar2 - fVar7);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(param_4 + 4) - (float10)*(float *)(param_3 + 4))));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(param_4 + 8) - (float10)*(float *)(param_3 + 8))));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)*(float *)param_5 - fVar7);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 4) - (float10)*(float *)(param_3 + 4))));
  (*(float *)(gen_frame + 0x20)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_5 + 8) - (float10)*(float *)(param_3 + 8))));
  (*(float *)(gen_frame + 0x24)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = *(float *)param_2;
  fVar1 = *(float *)(param_2 + 4);
  fVar8 = (float10)fVar6;
  fVar9 = (float10)fVar1;
  fVar10 = (float10)*(float *)(param_2 + 8);
  (*(float *)(gen_frame + 0x34)) = *(float *)(param_2 + 8);
  fVar11 = (float10)fVar5;
  fVar12 = (float10)(float)((float10)*(float *)param_5 - fVar7);
  fVar13 = (float10)*(float *)param_2;
  fVar14 = (float10)(float)(fVar12 * fVar10 - fVar13 * fVar8);
  fVar8 = (float10)(float)(fVar9 * fVar8 - fVar11 * fVar10);
  fVar9 = (float10)(float)(fVar13 * fVar11 - fVar9 * fVar12);
  fVar2 = ((float)GEN_TOF((fVar9 * (float10)fVar4 +
                 (fVar8 * (float10)(float)((float10)fVar2 - fVar7) + fVar14 * (float10)fVar3))));
  fVar10 = (float10)fVar2;
  if ((float10)REFG(float, 0x109cc48) < fVar10) {
    fVar3 = *param_1;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar3 - fVar7);
    fVar4 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)(param_3 + 4))));
    (*(float *)(gen_frame + 0x2c)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)(param_3 + 8))));
    (*(float *)(gen_frame + 0x30)) = fVar5;
    fVar3 = ((float)GEN_TOF((fVar9 * (float10)fVar5 +
                   (fVar8 * (float10)(float)((float10)fVar3 - fVar7) + (float10)fVar4 * fVar14))));
    fVar7 = (float10)fVar3;
    if ((!(fVar7 < (float10)0)) && (!(fVar10 < fVar7))) {
      F_00550080(&(*(float *)(gen_frame + 0x4)),(uint)&(*(float *)(gen_frame + 0x28)),(uint)&(*(float *)(gen_frame + 0x10)));
      fVar7 = (float10)((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x8)) * (float10)fVar1 +
                               (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x38))) +
                              (float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0x34)))));
      if ((!(fVar7 < (float10)0)) && (fVar8 = (float10)fVar2, !(fVar8 < fVar7 + (float10)fVar3))) {
        *param_6 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xc)) * (float10)(*(float *)(gen_frame + 0x24)) +
                                           ((float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x8)) +
                                           (float10)(*(float *)(gen_frame + 0x1c)) * (float10)(*(float *)(gen_frame + 0x4)))))) / fVar8)));
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00550ba0 */
uint F_00550ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00550bc0 */
unsigned int F_00550bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  return 0;
}

/* ref: FUN_00550c40 */
uint F_00550c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x550c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = (undefined4)gen_fl2bits(param_6);
  param_1[5] = param_7;
  param_1[7] = 0;
  return (uint)param_1;
}

/* ref: FUN_00550cc0 */
unsigned int F_00550cc0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x550cc0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x14) = param_2;
  *(float *)(in_ecx + 0x18) = param_3;
  *(float *)(in_ecx + 0x1c) = param_4;
  *(float *)(in_ecx + 0x20) = param_5;
  return 0;
}

/* ref: FUN_00550cf0 */
unsigned int F_00550cf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x550cf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 100) = param_2;
  return 0;
}

/* ref: FUN_00550d20 */
uint F_00550d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00550d40 */
uint F_00550d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0xc);
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 8 + param_2 * 4) + iVar1;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
    return param_1;
  }
  return 0;
}

/* ref: FUN_00550d70 */
uint F_00550d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_3;
  return (uint)in_ecx;
}

/* ref: FUN_00550d80 */
uint F_00550d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550d80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0xc;
}

/* ref: FUN_00550e10 */
unsigned int F_00550e10(float gen_a0)
{
  GEN_ENTER(0x550e10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00550e50 */
uint F_00550e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x550e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c93010(this,param_1,param_2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  return (uint)this;
}

/* ref: FUN_00550e90 */
uint F_00550e90(unsigned int gen_a0)
{
  GEN_ENTER(0x550e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  HANDLE pvVar2;
  uint uVar3;
  
  *(undefined2 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  F_004a0020((int)this + 0x28);
  pvVar2 = gen_imp_CreateEventA((GEN_LPANY)0x0,0,1,(LPCSTR)0x0);
  *(HANDLE *)((int)this + 0x50) = pvVar2;
  *(undefined4 *)((int)this + 0x54) = 1;
  uVar3 = F_00406b90(0x24,0,0);
  uVar1 = REFG(float, 0x1090708);
  if (uVar3 != 0) {
    uVar3 = F_00c97030(uVar3);
    uVar1 = REFG(float, 0x1090708);
    *(uint *)((int)this + 8) = uVar3;
    *(undefined4 *)((int)this + 100) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 100) = uVar1;
  return (uint)this;
}

/* ref: FUN_00550f20 */
unsigned int F_00550f20(unsigned int gen_a0)
{
  GEN_ENTER(0x550f20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 8) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  gen_imp_CloseHandle(*(HANDLE *)((int)this + 0x50));
  F_004a05c0((undefined *)((int)this + 0x28));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00550f70 */
uint F_00550f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x550f70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x18) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00550fa0 */
unsigned int F_00550fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x50),0xffffffff);
  }
  return 0;
}

/* ref: FUN_00550fc0 */
byte F_00550fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  *(undefined1 *)((int)this + 1) = 1;
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar1 = F_00c976f0(*(undefined * PTR32 *)((int)this + 8));
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00550fe0 */
unsigned int F_00550fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x550fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c975f0(*(undefined * PTR32 *)((int)this + 8));
  return 0;
}

/* ref: FUN_00550ff0 */
byte F_00550ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x550ff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) &&
     (bVar1 = F_00c97070(*(undefined * PTR32 *)((int)this + 8)), bVar1 != 0)) {
    return 1;
  }
  if (0 < *(int *)((int)this + 0x54)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00551030 */
float10 F_00551030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551030u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *(float * PTR32 *)param_4;
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = (float10)(float)(fVar12 - (float10)fVar2);
  fVar15 = (float10)fVar5;
  fVar13 = (float10)(float)(fVar13 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = (float10)(float)(fVar11 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)));
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551200 */
byte F_00551200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  uint param_5 = (uint)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  int iVar2;
  byte bVar3;
  byte * pbVar4;
  
  iVar2 = *(int *)((int)this + 0xc);
  pbVar4 = ((byte *)GEN_TOP((iVar2 + 1 +
                   (*(ushort *)(iVar2 + 0x28) + 8 + (uint)*(ushort *)(iVar2 + 0x2c) * 2) * 6)));
  (*(uint *)(gen_frame + 0x10)) = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = param_5;
  F_00c90030(this,param_5);
  iVar2 = *(int *)((int)this + 0xc);
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  param_5 = 0;
  if (*(short *)(iVar2 + 0x2a) != 0) {
    do {
      bVar3 = F_00553ba0(param_2,param_3,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[-1] * 0xc,
                           (*(int *)(gen_frame + 0x14)) + (uint)*pbVar4 * 0xc,(*(int *)(gen_frame + 0x14)) + (uint)pbVar4[1] * 0xc,&(*(float *)(gen_frame + 0x0)),
                           &(*(float *)(gen_frame + 0x18)));
      if ((((bVar3 != 0) && ((float10)(*(float *)(gen_frame + 0x18)) <= (float10)*param_4)) &&
          ((!GEN_ISNAN((*(float *)(gen_frame + 0x18))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !((*(float *)(gen_frame + 0x18)) < *(float *)&REFG(undefined, 0x1088114)))
          ) && (fVar1 = ((float)GEN_TOF(((float10)param_3[2] * (float10)(*(float *)(gen_frame + 0x8)) +
                               ((float10)*param_3 * (float10)(*(float *)(gen_frame + 0x0)) +
                               (float10)param_3[1] * (float10)(*(float *)(gen_frame + 0x4)))))), (*(float *)(gen_frame + 0xc)) = fVar1,
               (float10)fVar1 < (float10)0)) {
        (*(uint *)(gen_frame + 0x10)) = param_5;
        *param_4 = (*(float *)(gen_frame + 0x18));
      }
      param_5 = param_5 + 1;
      pbVar4 = pbVar4 + 6;
    } while (param_5 < *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))));
  }
  bVar3 = F_00c901b0(this,(*(uint *)(gen_frame + 0x10)),param_1,&(*(int *)(gen_frame + 0x14)),param_2,param_3,*param_4);
  return bVar3;
}

/* ref: FUN_00551330 */
float10 F_00551330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551330u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  uint param_4 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float * pfVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  pfVar10 = *(float * PTR32 *)param_4;
  (*(float *)(gen_frame + 0x28)) = *in_esi;
  (*(float *)(gen_frame + 0x24)) = in_esi[2];
  fVar11 = (float10)in_esi[1];
  fVar12 = (float10)*in_esi;
  fVar13 = (float10)in_esi[2];
  fVar1 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0xc)) = fVar1;
  fVar2 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar3 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x24)) = *in_edx;
  (*(float *)(gen_frame + 0x28)) = in_edx[2];
  fVar11 = (float10)in_edx[1];
  fVar12 = (float10)*in_edx;
  fVar13 = (float10)in_edx[2];
  fVar4 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar5 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x20)) = fVar6;
  (*(float *)(gen_frame + 0x24)) = *in_ecx;
  (*(float *)(gen_frame + 0x28)) = in_ecx[2];
  fVar11 = (float10)in_ecx[1];
  fVar12 = (float10)*in_ecx;
  fVar13 = (float10)in_ecx[2];
  fVar7 = ((float)GEN_TOF((((fVar12 * (float10)*pfVar10 + fVar11 * (float10)pfVar10[4]) +
                  fVar13 * (float10)pfVar10[8]) + (float10)pfVar10[0xc])));
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = ((float)GEN_TOF((((float10)pfVar10[9] * fVar13 +
                  ((float10)pfVar10[5] * fVar11 + (float10)pfVar10[1] * fVar12)) +
                 (float10)pfVar10[0xd])));
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = ((float)GEN_TOF((((fVar12 * (float10)pfVar10[2] + (float10)pfVar10[6] * fVar11) +
                  (float10)pfVar10[10] * fVar13) + (float10)pfVar10[0xe])));
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar11 = (float10)fVar4;
  fVar12 = (float10)fVar5;
  fVar13 = (float10)fVar6;
  fVar4 = (float)((float10)fVar7 - fVar11);
  (*(float *)(gen_frame + 0xc)) = fVar4;
  fVar5 = (float)((float10)fVar8 - fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar6 = (float)((float10)fVar9 - fVar13);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar14 = (float10)fVar6;
  fVar12 = (float10)(float)(fVar12 - (float10)fVar2);
  fVar15 = (float10)fVar5;
  fVar13 = (float10)(float)(fVar13 - (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar12 * fVar14 - fVar13 * fVar15);
  fVar16 = (float10)fVar4;
  fVar11 = (float10)(float)(fVar11 - (float10)fVar1);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13 - fVar11 * fVar14);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar15 * fVar11 - fVar12 * fVar16);
  F_00553ac0(&(*(float *)(gen_frame + 0x0)));
  return (float10)(*(float *)(gen_frame + 0x4));
}

/* ref: FUN_00551500 */
byte F_00551500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551500u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c971c0(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551590 */
byte F_00551590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551590u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c97440(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551620 */
byte F_00551620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, float gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x551620u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float param_5 = (float)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_4;
    (*(undefined4 *)(gen_frame + 0x4)) = param_4[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_4[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    bVar1 = F_00c974a0(*(undefined * PTR32 *)(param_1 + 8),param_2,param_6,param_7,param_3,&(*(undefined4 *)(gen_frame + 0x0)),
                         (undefined4)gen_fl2bits(param_5));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005516b0 */
byte F_005516b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5516b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)param_5;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_5 + 8);
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97340(*(undefined4 *)(param_1 + 8),param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551750 */
byte F_00551750(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x551750u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)(param_1 + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)param_5;
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(param_5 + 4);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_5 + 8);
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x0)));
    fVar2 = ((float10)GEN_TOD(fcos((float10)param_3)));
    bVar1 = F_00c97550(*(undefined4 *)(param_1 + 8),param_2,param_7,(float)fVar2,param_4,&(*(undefined4 *)(gen_frame + 0x0))
                         ,(undefined4)gen_fl2bits(param_6));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005517f0 */
byte F_005517f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5517f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x20)));
    (*(undefined4 *)(gen_frame + 0x0)) = 7;
    (*(undefined4 *)(gen_frame + 0x4)) = (*(undefined4 *)&gen_args[3]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005518b0 */
byte F_005518b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x5518b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined * this_00;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(int *)&gen_args[1]) + 0x44) = 0;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x109cc48);
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[4]);
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 *)(gen_frame + 0x0)) = 4;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(this_00,(*(int *)&gen_args[1]),(*(undefined4 *)&gen_args[5]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_005519a0 */
byte F_005519a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5519a0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  float10 fVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((*(int *)&gen_args[0]) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(undefined4 *)((*(uint *)&gen_args[1]) + 0x44) = 0;
  if (*(int *)((*(int *)&gen_args[0]) + 8) != 0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = REFG(float, 0x109cc48);
    (*(undefined4 *)(gen_frame + 0x30)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
    F_00553ac0(&(*(undefined4 *)(gen_frame + 0x30)));
    (*(undefined4 *)(gen_frame + 0x0)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = &(*(undefined4 *)(gen_frame + 0x20));
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = &(*(undefined4 *)(gen_frame + 0x30));
    (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = &(*(undefined4 *)&gen_args[5]);
    fVar2 = ((float10)GEN_TOD(fcos((float10)(*(float *)&gen_args[2]))));
    (*(float *)(gen_frame + 0x10)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[7]);
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    bVar1 = F_00c975b0(*(undefined * PTR32 *)((*(int *)&gen_args[0]) + 8),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551a90 */
byte F_00551a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x551a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    bVar1 = F_00c975d0(*(undefined * PTR32 *)((int)this + 8),param_1,param_3,param_2);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return bVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551ae0 */
unsigned int F_00551ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x551ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  if ((*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) && (param_1 != 0)) {
    F_00c97130(*(undefined * PTR32 *)((int)this + 8),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00551b20 */
uint F_00551b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x551b20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c97080(*(undefined * PTR32 *)((int)this + 8),param_2,param_1);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551b70 */
uint F_00551b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x551b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  ((byte *)(gen_frame + 0x4))[0xa4] = (char)uVar1;
  ((byte *)(gen_frame + 0x4))[0xa5] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x4))[0xa6] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x4))[0xa7] = (char)(uVar1 >> 0x18);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)) = param_2;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = ((char *)REFP(0x109cbe4));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = ((char *)REFP(0x109cbec));
  ((byte *)(gen_frame + 0x4))[8] = 0;
  ((byte *)(gen_frame + 0x4))[9] = 0;
  ((byte *)(gen_frame + 0x4))[10] = 0;
  ((byte *)(gen_frame + 0x4))[0xb] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = ((char *)REFP(0x109cbf4));
  ((byte *)(gen_frame + 0x4))[0x10] = 0;
  ((byte *)(gen_frame + 0x4))[0x11] = 0;
  ((byte *)(gen_frame + 0x4))[0x12] = 0;
  ((byte *)(gen_frame + 0x4))[0x13] = 0;
  ((byte *)(gen_frame + 0x4))[0x14] = 0;
  ((byte *)(gen_frame + 0x4))[0x15] = 0;
  ((byte *)(gen_frame + 0x4))[0x16] = 0;
  ((byte *)(gen_frame + 0x4))[0x17] = 0;
  ((byte *)(gen_frame + 0x4))[0x18] = 0;
  ((byte *)(gen_frame + 0x4))[0x19] = 0;
  ((byte *)(gen_frame + 0x4))[0x1a] = 0;
  ((byte *)(gen_frame + 0x4))[0x1b] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 28)) = &REFG(undefined, 0x109cc04);
  if ((param_1 < 9) && (*(int *)(((byte *)(gen_frame + 0x4)) + param_1 * 4) != 0)) {
    F_00c472af(((byte *)(gen_frame + 0x4)) + 0x24,0x80,"%s/collision/list.pcb",*(int *)(((byte *)(gen_frame + 0x4)) + param_1 * 4));
    gen_imp_EnterCriticalSection(lpCriticalSection);
    if (*(undefined * PTR32 *)((int)this + 8) == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00c97080(*(undefined * PTR32 *)((int)this + 8),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 32)),((byte *)(gen_frame + 0x4)) + 0x24);
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 164)) ^ (uint)(uint)(gen_frame + 0xac));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 164)) ^ (uint)(uint)(gen_frame + 0xac));
  return 0;
}

/* ref: FUN_00551c70 */
uint F_00551c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x551c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c970b0(*(undefined * PTR32 *)((int)this + 8),param_5,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551cd0 */
uint F_00551cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c970f0(*(undefined * PTR32 *)((int)this + 8),param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551d20 */
uint F_00551d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * this_00;
  uint uVar3;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  uVar1 = *param_3;
  uVar2 = param_3[1];
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != (undefined *)0x0) {
    uVar3 = F_00c97100(this_00,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar3;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551da0 */
uint F_00551da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar1;
  undefined * this_00;
  uint uVar2;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  uVar1 = *param_3;
  this_00 = *(undefined * PTR32 *)((int)this + 8);
  (*(undefined4 *)(gen_frame + 0x0)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x4)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x8)) = uVar1;
  if (this_00 != (undefined *)0x0) {
    uVar2 = F_00c97110(this_00,param_4,param_1,param_2,&(*(undefined4 *)(gen_frame + 0x0)));
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar2;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e10 */
uint F_00551e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(undefined * PTR32 *)((int)this + 8) != (undefined *)0x0) {
    uVar1 = F_00c97120(*(undefined * PTR32 *)((int)this + 8),param_4,param_1,param_2,param_3);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return uVar1;
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00551e90 */
uint F_00551e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551e90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 uVar2;
  
  if (*(float *)&REFG(undefined, 0x1088114) <= *(float *)((int)this + 100)) {
    *param_1 = *(undefined4 *)((int)this + 0x58);
    *param_2 = *(undefined4 *)((int)this + 0x5c);
    *param_3 = *(undefined4 *)((int)this + 0x60);
    *param_4 = *(undefined4 *)((int)this + 100);
    return (uint)param_3;
  }
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
  *param_1 = *(undefined4 *)(iVar1 + 0x90);
  uVar2 = REFG(float, 0x109cdcc);
  *param_2 = *(undefined4 *)(iVar1 + 0x94);
  *param_3 = *(undefined4 *)(iVar1 + 0x98);
  *param_4 = uVar2;
  return (uint)param_3;
}

/* ref: FUN_00551f10 */
byte F_00551f10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x551f10u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x1a0];
  undefined * pvVar1;
  uint uVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  undefined * PTR32 * ppuVar7;
  byte bVar8;
  uint uVar9;
  float fVar10;
  float * pfVar11;
  float * pfVar12;
  int iVar13;
  undefined4 * puVar14;
  undefined4 * puVar15;
  byte * pbVar16;
  undefined2 * puVar17;
  uint uVar18;
  undefined * PTR32 * PTR32 * in_ecx;
  int iVar19;
  float10 fVar20;
  
  uVar9 = (*(uint *)&gen_args[3]);
  iVar19 = *(int *)((*(uint *)&gen_args[3]) + 4);
  (*(int *)(gen_frame + 0x174)) = iVar19;
  iVar5 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*(float * PTR32 *)(gen_frame + 0x184)) = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 8);
  fVar10 = *((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) + 0x34))) + 4))) + 4)));
  (*(undefined * PTR32 *)(gen_frame + 0x190)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(float *)(gen_frame + 0x194)) = fVar10;
  if (*(short *)(iVar5 + 0x2a) != 0) {
    if (*(char *)((int)gen_fl2bits(fVar10) + 0x18) == '\0') {
      (*(float *)(gen_frame + 0x180)) = -NAN;
      (*(uint *)(gen_frame + 0x188)) = iVar5 + (*(ushort *)(iVar5 + 0x28) + 8 + (uint)*(ushort *)(iVar5 + 0x2c) * 2) * 6;
      (*(uint *)(gen_frame + 0x178)) = (*(uint *)&gen_args[4]);
      F_00c90030((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[4]));
      pfVar12 = (*(float * PTR32 *)(gen_frame + 0x184));
      pfVar11 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0xc);
      uVar3 = *(undefined4 *)(*(uint *)&gen_args[3]);
      (*(float *)(gen_frame + 0x194)) = 0.0;
      ((float *)(gen_frame + 0x114))[5] = 0.0;
      ((float *)(gen_frame + 0x114))[6] = 0.0;
      ((float *)(gen_frame + 0x114))[7] = 0.0;
      switch((unsigned int)(uintptr_t)(uVar3)) {
      case 0: ;
        fVar10 = 0.0;
        if (*((short *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 1);
          do {
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) {
              (*(float *)(gen_frame + 0x180)) = fVar10;
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            pbVar16 = pbVar16 + 6;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 1: ;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 1);
          do {
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),pfVar12,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc,
                                 (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc,(*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[1] * 0xc,
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (bVar8 != 0) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                 ((fVar10 = ((float)GEN_TOF(((float10)pfVar12[2] * (float10)((float *)(gen_frame + 0x114))[7] +
                                   ((float10)((float *)(gen_frame + 0x114))[5] * (float10)*pfVar12 +
                                   (float10)pfVar12[1] * (float10)((float *)(gen_frame + 0x114))[6])))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                (*(float *)(gen_frame + 0x194)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 2: ;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(uint *)(gen_frame + 0x17c)) = (*(uint *)&gen_args[1]);
        (*(float *)(gen_frame + 0x194)) = fVar10;
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 2);
          do {
            uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-2] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc;
            fVar10 = gen_bits2f((*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc);
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
            bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,(uint)gen_fl2bits(fVar10),
                                 ((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]));
            if (((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               (((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                 !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)) &&
                (fVar20 = F_00551330((*(undefined * PTR32 *)(gen_frame + 0x198)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0x17c))),
                fVar20 <= (float10)(*(float *)(gen_frame + 0x194)))))) {
              (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            pbVar16 = pbVar16 + 6;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 3: ;
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = gen_bits2f((*(uint *)&gen_args[1]));
        (*(float *)(gen_frame + 0xfc)) = 0.0;
        (*(float *)(gen_frame + 0x100)) = 0.0;
        (*(float *)(gen_frame + 0x104)) = 0.0;
        (*(float *)(gen_frame + 0x16c)) = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          pbVar16 = (byte *)((*(uint *)(gen_frame + 0x188)) + 2);
          do {
            uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-1] * 0xc;
            uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)pbVar16[-2] * 0xc;
            iVar19 = (*(uint *)(gen_frame + 0x178)) + (uint)*pbVar16 * 0xc;
            (*(uint *)(gen_frame + 0x188)) = iVar19;
            bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),uVar18,uVar9,iVar19,&(*(float *)(gen_frame + 0xfc)),&(*(uint *)&gen_args[4]));
            if (bVar8 != 0) {
              if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                     (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                   (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                  ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0x104)) +
                                    ((float10)(*(float *)(gen_frame + 0xfc)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                    (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0x100)))))),
                   !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                   (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x188)),uVar9,uVar18,(uint)&(*(float *)(gen_frame + 0x170))),
                 fVar20 <= (float10)(*(float *)(gen_frame + 0x16c)))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                (*(float *)(gen_frame + 0x194)) = fVar10;
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            pbVar16 = pbVar16 + 6;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 4: ;
        (*(float *)(gen_frame + 0x16c)) = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          uVar9 = (*(uint *)(gen_frame + 0x178));
          do {
            if ((((gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 + -1),*puVar17) &
                              (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) &&
                 (bVar8 = F_00550990((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),
                                       uVar9 + (uint)*(byte *)(puVar17 + -2) * 0xc,
                                       uVar9 + (uint)*(byte *)((int)puVar17 + -3) * 0xc,
                                       uVar9 + (uint)*(byte *)(puVar17 + -1) * 0xc,&(*(uint *)&gen_args[4])),
                 bVar8 != 0)) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
               ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) {
              *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
              (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
              uVar9 = (*(uint *)(gen_frame + 0x178));
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 5: ;
        fVar10 = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar4 = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(uint *)(gen_frame + 0x17c)) = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(float *)(gen_frame + 0x16c)) = fVar10;
        iVar19 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
        (*(float *)(gen_frame + 0x170)) = fVar4;
        fVar10 = 0.0;
        (*(float *)(gen_frame + 0x108)) = 0.0;
        (*(float *)(gen_frame + 0x10c)) = 0.0;
        (*(float *)(gen_frame + 0x110)) = 0.0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if ((gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 + -1),*puVar17) &
                            (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) &&
               (bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -2) * 0xc,
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 + -3) * 0xc,
                                     (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -1) * 0xc,&(*(float *)(gen_frame + 0x108)),
                                     &(*(uint *)&gen_args[4])), bVar8 != 0)) {
              if (((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                    (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                  (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                 ((fVar4 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0x110)) +
                                  ((float10)(*(float *)(gen_frame + 0x108)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                  (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0x10c)))))),
                  !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                  (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar4))))) {
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                (*(float *)(gen_frame + 0x180)) = fVar10;
                (*(float *)(gen_frame + 0x194)) = fVar4;
              }
            }
            fVar10 = gen_bits2f((int)gen_fl2bits(fVar10) + 1);
            puVar17 = puVar17 + 3;
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 6: ;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        fVar4 = **(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar6 = (*(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14))[1];
        (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(uint *)&gen_args[1]));
        (*(float *)(gen_frame + 0x16c)) = fVar4;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = fVar6;
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
        (*(uint *)&gen_args[1]) = 0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if (gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 + -1),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) {
              uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 + -3) * 0xc;
              uVar2 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -1) * 0xc;
              (*(uint *)(gen_frame + 0x17c)) = uVar2;
              bVar8 = F_00c9bf20((*(int *)(gen_frame + 0x174)),(uint)(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,uVar2,((float *)(gen_frame + 0x114)) + 5,&(*(uint *)&gen_args[4]))
              ;
              if ((((bVar8 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <= (float10)*pfVar11)) &&
                  ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[4]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
                   !(gen_bits2f((*(uint *)&gen_args[4])) < *(float *)&REFG(undefined, 0x1088114)))) &&
                 (fVar20 = F_00551330((*(uint *)(gen_frame + 0x17c)),uVar18,uVar9,(uint)&(*(float *)(gen_frame + 0x194))),
                 fVar20 <= (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))))) {
                (*(float *)(gen_frame + 0x180)) = gen_bits2f((*(uint *)&gen_args[1]));
                *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
              }
            }
            (*(uint *)&gen_args[1]) = (*(uint *)&gen_args[1]) + 1;
            puVar17 = puVar17 + 3;
          } while ((*(uint *)&gen_args[1]) < *((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
        break;
      case 7: ;
        uVar9 = *(uint *)((*(uint *)&gen_args[3]) + 4);
        (*(float *)(gen_frame + 0xf0)) = 0.0;
        (*(float *)(gen_frame + 0xf4)) = 0.0;
        (*(float *)(gen_frame + 0xf8)) = 0.0;
        fVar10 = *(float *)((*(uint *)&gen_args[3]) + 0x10);
        pfVar12 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
        fVar4 = *pfVar12;
        (*(uint *)(gen_frame + 0x17c)) = uVar9;
        fVar6 = pfVar12[1];
        (*(uint *)(gen_frame + 0xdc)) = (*(uint *)&gen_args[1]);
        (*(float *)(gen_frame + 0x16c)) = fVar4;
        iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
        (*(float *)(gen_frame + 0x170)) = fVar6;
        ((float *)(gen_frame + 0x114))[0x14] = fVar10;
        (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
        if (*(short *)(iVar19 + 0x2a) != 0) {
          puVar17 = (undefined2 *)((*(uint *)(gen_frame + 0x188)) + 4);
          do {
            if (gen_bits2f((uint)CONCAT12(*(undefined1 *)((int)puVar17 + -1),*puVar17) &
                           (uint)gen_fl2bits((*(float *)(gen_frame + 0x16c)))) == (*(float *)(gen_frame + 0x170))) {
              uVar9 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -2) * 0xc;
              uVar18 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)((int)puVar17 + -3) * 0xc;
              iVar19 = (*(uint *)(gen_frame + 0x178)) + (uint)*(byte *)(puVar17 + -1) * 0xc;
              (*(uint *)(gen_frame + 0x188)) = iVar19;
              bVar8 = F_00553ba0((*(uint *)(gen_frame + 0x17c)),(*(float * PTR32 *)(gen_frame + 0x184)),uVar9,uVar18,iVar19,&(*(float *)(gen_frame + 0xf0)),&(*(uint *)&gen_args[4]));
              if (bVar8 != 0) {
                if ((((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) <=
                       (float10)*(double *)&REFG(undefined, 0x109ce00) + (float10)*pfVar11) &&
                     (*(float *)&REFG(undefined, 0x1088114) <= gen_bits2f((*(uint *)&gen_args[4])))) &&
                    ((fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)(*(float *)(gen_frame + 0xf8)) +
                                      ((float10)(*(float *)(gen_frame + 0xf0)) * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                                      (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)(*(float *)(gen_frame + 0xf4)))))),
                     !((float10)*pfVar11 - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4])))) < (float10)REFG(double, 0x109cdf8)) ||
                     (!((float10)(*(float *)(gen_frame + 0x194)) <= (float10)fVar10))))) &&
                   (fVar20 = F_00551330((*(uint *)(gen_frame + 0x188)),uVar18,uVar9,(uint)&(*(uint *)(gen_frame + 0xdc))),
                   fVar20 <= (float10)((float *)(gen_frame + 0x114))[0x14])) {
                  *pfVar11 = gen_bits2f((*(uint *)&gen_args[4]));
                  (*(float *)(gen_frame + 0x180)) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
                  (*(float *)(gen_frame + 0x194)) = fVar10;
                }
              }
            }
            fVar10 = gen_bits2f((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) + 1);
            puVar17 = puVar17 + 3;
            (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          } while ((uint)gen_fl2bits(fVar10) <
                   (uint)*((ushort *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc) + 0x2a))));
        }
      }
      bVar8 = F_00c901b0((*(undefined * PTR32 *)(gen_frame + 0x190)),(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x180))),(*(uint *)&gen_args[2]),&(*(uint *)(gen_frame + 0x178)),(*(int *)(gen_frame + 0x174)),
                           (*(float * PTR32 *)(gen_frame + 0x184)),*pfVar11);
      return bVar8;
    }
    pvVar1 = (undefined *)((int)gen_fl2bits(fVar10) + 0x24);
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = pvVar1;
    if (*(int *)((int)gen_fl2bits(fVar10) + 0x2003c) == 0) {
      uVar9 = F_00a4b910(pvVar1,0x1b0);
      *(uint *)((int)gen_fl2bits(fVar10) + 0x2003c) = uVar9;
      *(undefined4 *)(uVar9 + 0x1a0) = *(undefined4 *)((int)gen_fl2bits(fVar10) + 0x20040);
    }
    iVar19 = *(int *)((int)gen_fl2bits(fVar10) + 0x2003c);
    if (*(int *)((int)gen_fl2bits(fVar10) + 0x2003c) == 0) {
      uVar9 = F_00a4b910(pvVar1,0x1b0);
      *(uint *)((int)gen_fl2bits(fVar10) + 0x2003c) = uVar9;
      *(undefined4 *)(uVar9 + 0x1a0) = *(undefined4 *)((int)gen_fl2bits(fVar10) + 0x20040);
    }
    fVar4 = (*(float *)(gen_frame + 0x194));
    pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x190));
    iVar5 = *(int *)((int)gen_fl2bits(fVar10) + 0x2003c);
    iVar13 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
    uVar9 = ((uint)*(ushort *)(iVar13 + 0x2a) + (uint)*(ushort *)(iVar13 + 0x2c) * 2 +
            (uint)*(ushort *)(iVar13 + 0x28)) * 6 + 0x3f & 0xfffffff0;
    (*(uint *)(gen_frame + 0x188)) = uVar9;
    puVar14 = (undefined4 *)REFG(undefined * PTR32, 0x13066c0);
    puVar15 = (undefined4 *)(iVar19 + 0x80);
    for (iVar13 = 0x14; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(uint *)(iVar19 + 0xa4) = uVar9;
    *(undefined4 *)(iVar19 + 0xa0) = 0;
    *(undefined4 *)(iVar19 + 0xa8) = 0x60;
    *(undefined2 *)(iVar19 + 0x98) = 8;
    iVar13 = *(int *)(*(uint *)&gen_args[3]);
    *(int *)(iVar19 + 0xdc) = iVar13 >> 0x1f;
    *(int *)(iVar19 + 0xd8) = iVar13;
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 4);
    *(undefined4 *)(iVar19 + 0xe0) = *puVar14;
    *(undefined4 *)(iVar19 + 0xe4) = puVar14[1];
    *(undefined4 *)(iVar19 + 0xe8) = puVar14[2];
    *(undefined4 *)(iVar19 + 0xec) = puVar14[3];
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 8);
    *(undefined4 *)(iVar19 + 0xf0) = *puVar14;
    *(undefined4 *)(iVar19 + 0xf4) = puVar14[1];
    uVar3 = puVar14[2];
    *(int *)(iVar19 + 0x108) = iVar5;
    *(undefined4 *)(iVar19 + 0xf8) = uVar3;
    *(undefined4 *)(iVar19 + 0x10c) = 0;
    puVar14 = *(undefined4 * PTR32 *)((*(uint *)&gen_args[3]) + 0x14);
    *(undefined4 *)(iVar19 + 0x100) = *puVar14;
    *(undefined4 *)(iVar19 + 0x104) = puVar14[1];
    *(undefined4 *)(iVar19 + 0x110) = *(undefined4 *)((*(uint *)&gen_args[3]) + 0x10);
    puVar14 = (undefined4 *)(*(uint *)&gen_args[1]);
    puVar15 = (undefined4 *)(iVar19 + 0x118);
    for (iVar13 = 0x10; iVar13 != 0; iVar13 = iVar13 + -1) {
      *puVar15 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar15 = puVar15 + 1;
    }
    *(undefined4 *)(iVar19 + 0x158) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x20044);
    *(undefined4 *)(iVar19 + 0x15c) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x20048);
    *(undefined4 *)(iVar19 + 0x160) = *(undefined4 *)((int)gen_fl2bits((*(float *)(gen_frame + 0x194))) + 0x2004c);
    F_00a19bd0((undefined4 *)(iVar19 + 0x80),iVar19 + 0xd0,uVar9,
                 *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc));
    *(undefined4 *)(iVar5 + 0x50) = 0;
    *(undefined4 *)(iVar5 + 0x68) = *(undefined4 *)((int)pvVar1 + 8);
    *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)((int)pvVar1 + 0xc);
    *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)((int)pvVar1 + 0xc);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)((int)pvVar1 + 8);
    F_00556050((*(undefined * PTR32 *)(gen_frame + 0x198)),(undefined4)gen_fl2bits(fVar4));
    return 0;
  }
  (*(byte *)(gen_frame + 0x18f)) = 0;
  if (*(char *)((int)gen_fl2bits(fVar10) + 0x18) != '\0') {
    ((float *)(gen_frame + 0x114))[0xe] = 0.0;
    ((float *)(gen_frame + 0x114))[0xf] = 0.0;
    ((float *)(gen_frame + 0x114))[0x10] = 0.0;
    ((float *)(gen_frame + 0x114))[0x11] = 0.0;
    ((float *)(gen_frame + 0x114))[0x12] = 0.0;
    ((float *)(gen_frame + 0x114))[0x13] = 0.0;
    (*(undefined4 *)(gen_frame + 0xe8)) = 0;
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)(iVar19 + 0xc))));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)) = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe4)) = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
    uVar18 = 8;
    do {
      iVar19 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
      if (0 < *(int *)(iVar19 + 8)) {
        (*(int *)(gen_frame + 0xec)) = *(int *)(iVar19 + uVar18) + iVar19;
        (*(undefined4 *)(gen_frame + 0xe8)) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
      }
      pfVar11 = (float *)F_00c90300(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)));
      ((float *)(gen_frame + 0x114))[0xe] = *pfVar11;
      ((float *)(gen_frame + 0x114))[0xf] = pfVar11[1];
      ((float *)(gen_frame + 0x114))[0x10] = pfVar11[2];
      pfVar11 = (float *)F_00c90310(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)));
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198)))));
      ((float *)(gen_frame + 0x114))[0x11] = *pfVar11;
      ((float *)(gen_frame + 0x114))[0x12] = pfVar11[1];
      ((float *)(gen_frame + 0x114))[0xe] = (float)((float10)((float *)(gen_frame + 0x114))[0xe] - fVar20);
      ((float *)(gen_frame + 0x114))[0x13] = pfVar11[2];
      ((float *)(gen_frame + 0x114))[0xf] = (float)((float10)((float *)(gen_frame + 0x114))[0xf] - fVar20);
      ((float *)(gen_frame + 0x114))[0x10] = (float)((float10)((float *)(gen_frame + 0x114))[0x10] - fVar20);
      ((float *)(gen_frame + 0x114))[0x11] = (float)((float10)*pfVar11 + fVar20);
      ((float *)(gen_frame + 0x114))[0x12] = (float)((float10)pfVar11[1] + fVar20);
      ((float *)(gen_frame + 0x114))[0x13] = (float)(fVar20 + (float10)pfVar11[2]);
      bVar8 = F_00c996f0((*(int *)(gen_frame + 0x174)),(*(float * PTR32 *)(gen_frame + 0x184)),((float *)(gen_frame + 0x114)) + 0xe,((float *)(gen_frame + 0x114)) + 0x14);
      if (bVar8 != 0) {
        pfVar11 = *(float * PTR32 *)(uVar9 + 0xc);
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
        (*(undefined4 *)(gen_frame + 0x3c)) = 0;
        (*(undefined4 *)(gen_frame + 0x40)) = 0;
        (*(undefined4 *)(gen_frame + 0x44)) = 0;
        fVar10 = *pfVar11;
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar10);
        if (((float10)((float *)(gen_frame + 0x114))[0x14] - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))) < (float10)*pfVar11) &&
           (bVar8 = F_00551f10(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)),(*(uint *)&gen_args[1]),(uint)&(*(undefined4 *)(gen_frame + 0xc)),uVar9,(*(uint *)&gen_args[4])), bVar8 != 0)) {
          fVar4 = **(float * PTR32 *)(uVar9 + 0xc);
          (*(float *)(gen_frame + 0x194)) = fVar4;
          if ((float10)fVar4 < (float10)fVar10) {
            F_00550bc0((undefined *)(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
            (*(byte *)(gen_frame + 0x18f)) = 1;
            (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar4);
          }
        }
        **(uint * PTR32 *)(uVar9 + 0xc) = (*(uint *)&gen_args[3]);
      }
      uVar18 = uVar18 + 4;
    } while (uVar18 < 0x10);
    F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xe0)));
    return (*(byte *)(gen_frame + 0x18f));
  }
  ((float *)(gen_frame + 0x114))[8] = 0.0;
  ((float *)(gen_frame + 0x114))[9] = 0.0;
  ((float *)(gen_frame + 0x114))[10] = 0.0;
  ((float *)(gen_frame + 0x114))[0xb] = 0.0;
  ((float *)(gen_frame + 0x114))[0xc] = 0.0;
  ((float *)(gen_frame + 0x114))[0xd] = 0.0;
  fVar10 = *(float *)(iVar19 + 0xc);
  (*(float *)(gen_frame + 0x194)) = 0.0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[2] = (undefined * PTR32 *)0x0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[6] = (undefined * PTR32 *)0x0;
  pfVar11 = ((float *)(gen_frame + 0x114));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[5] = (*(undefined * PTR32 (*)[2])REFP(0x109cc5c));
  (*(float *)(gen_frame + 0x180)) = fVar10;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[4] = (*(undefined * PTR32 (*)[11])REFP(0x109cc68));
  (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x1;
  in_ecx = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58));
  ((float *)(gen_frame + 0x114))[0x14] = gen_bits2f(8 - (int)pfVar11);
  (*(uint *)(gen_frame + 0x188)) = 2;
  do {
    iVar19 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 0xc);
    if (0 < *(int *)(iVar19 + 8)) {
      ppuVar7 = *(undefined * PTR32 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x190)) + 8);
      in_ecx[3] = ((undefined * PTR32 *)GEN_TOP((*(int *)((int)gen_fl2bits(((float *)(gen_frame + 0x114))[0x14]) + iVar19 + (int)pfVar11) + iVar19)));
      in_ecx[2] = ppuVar7;
    }
    pfVar12 = (float *)F_00c90300(in_ecx);
    ((float *)(gen_frame + 0x114))[8] = *pfVar12;
    ((float *)(gen_frame + 0x114))[9] = pfVar12[1];
    ((float *)(gen_frame + 0x114))[10] = pfVar12[2];
    pfVar12 = (float *)F_00c90310(in_ecx);
    fVar20 = (float10)(*(float *)(gen_frame + 0x180));
    ((float *)(gen_frame + 0x114))[0xb] = *pfVar12;
    ((float *)(gen_frame + 0x114))[0xc] = pfVar12[1];
    ((float *)(gen_frame + 0x114))[8] = (float)((float10)((float *)(gen_frame + 0x114))[8] - fVar20);
    ((float *)(gen_frame + 0x114))[0xd] = pfVar12[2];
    ((float *)(gen_frame + 0x114))[9] = (float)((float10)((float *)(gen_frame + 0x114))[9] - fVar20);
    ((float *)(gen_frame + 0x114))[10] = (float)((float10)((float *)(gen_frame + 0x114))[10] - fVar20);
    ((float *)(gen_frame + 0x114))[0xb] = (float)((float10)*pfVar12 + fVar20);
    ((float *)(gen_frame + 0x114))[0xc] = (float)((float10)pfVar12[1] + fVar20);
    ((float *)(gen_frame + 0x114))[0xd] = (float)(fVar20 + (float10)pfVar12[2]);
    bVar8 = F_00c996f0((*(int *)(gen_frame + 0x174)),(*(float * PTR32 *)(gen_frame + 0x184)),((float *)(gen_frame + 0x114)) + 8,pfVar11);
    if (bVar8 != 0) {
      (*(float *)(gen_frame + 0x194)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x194))) | (uint)(*(undefined * PTR32 *)(gen_frame + 0x198)));
    }
    in_ecx = in_ecx + 4;
    pfVar11 = pfVar11 + 1;
    iVar19 = (*(uint *)(gen_frame + 0x188)) + -1;
    (*(uint *)(gen_frame + 0x188)) = iVar19;
    (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)((int)((int)(uintptr_t)(*(undefined * PTR32 *)(gen_frame + 0x198))) << 1 | (uint)((int)(*(undefined * PTR32 *)(gen_frame + 0x198)) < 0));
  } while (iVar19 != 0);
  switch((unsigned int)(uintptr_t)((undefined4)gen_fl2bits((*(float *)(gen_frame + 0x194))))) {
  case 0: ;
    (*(int *)(gen_frame + 0x168)) = -1;
    break;
  case 1: ;
    (*(float *)(gen_frame + 0x16c)) = -NAN;
    goto LAB_00552d89;
  case 2: ;
    (*(int *)(gen_frame + 0x168)) = 1;
    (*(float *)(gen_frame + 0x16c)) = -NAN;
    break;
  case 3: ;
    if ((float10)((float *)(gen_frame + 0x114))[1] < (float10)((float *)(gen_frame + 0x114))[0]) {
      (*(int *)(gen_frame + 0x168)) = 1;
      (*(float *)(gen_frame + 0x16c)) = 0.0;
      break;
    }
    (*(float *)(gen_frame + 0x16c)) = 1.4013e-45;
LAB_00552d89: ;
    (*(int *)(gen_frame + 0x168)) = 0;
  }
  pfVar11 = *(float * PTR32 *)((*(uint *)&gen_args[3]) + 0xc);
  (*(undefined * PTR32 *)(gen_frame + 0x198)) = (undefined *)0x0;
  ((float *)(gen_frame + 0x114))[2] = 0.0;
  ((float *)(gen_frame + 0x114))[3] = 0.0;
  ((float *)(gen_frame + 0x114))[4] = 0.0;
  (*(undefined4 *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = 0;
  (*(float *)(gen_frame + 0x9c)) = 0.0;
  (*(float *)(gen_frame + 0xa0)) = 0.0;
  (*(float *)(gen_frame + 0xa4)) = 0.0;
  (*(float *)(gen_frame + 0xa8)) = 0.0;
  (*(float *)(gen_frame + 0xac)) = 0.0;
  (*(float *)(gen_frame + 0xb0)) = 0.0;
  (*(float *)(gen_frame + 0xb4)) = 0.0;
  (*(float *)(gen_frame + 0xb8)) = 0.0;
  (*(float *)(gen_frame + 0xbc)) = 0.0;
  (*(undefined4 *)(gen_frame + 0xc0)) = 0;
  (*(undefined4 *)(gen_frame + 0xc4)) = 0;
  (*(undefined4 *)(gen_frame + 0xc8)) = 0;
  (*(float *)(gen_frame + 0x194)) = *pfVar11;
  uVar18 = 0;
  do {
    iVar19 = (&(*(int *)(gen_frame + 0x168)))[uVar18];
    if (iVar19 == -1) break;
    if (((float10)((float *)(gen_frame + 0x114))[(int)(iVar19)] - (float10)(*(float *)(gen_frame + 0x180)) < ((float10)GEN_TOD(**(float * PTR32 *)(uVar9 + 0xc)))) &&
       (bVar8 = F_00551f10(((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)) + iVar19 * 4,(*(uint *)&gen_args[1]),(uint)&(*(undefined4 *)(gen_frame + 0x90)),uVar9,(*(uint *)&gen_args[4])),
       bVar8 != 0)) {
      if ((*(byte *)uVar9 & 1) == 0) {
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(**(float * PTR32 *)(uVar9 + 0xc));
        if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)(*(float *)(gen_frame + 0x194))) {
LAB_00552f9b: ;
          (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(uint *)&gen_args[3]));
          F_00550bc0((undefined *)(*(uint *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x90)));
          (*(byte *)(gen_frame + 0x18f)) = 1;
        }
      }
      else if (((float10)GEN_TOD(**(float * PTR32 *)(uVar9 + 0xc))) <=
               (float10)(*(float *)(gen_frame + 0x194)) + (float10)*(double *)&REFG(undefined, 0x109ce00)) {
        (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0xa8)));
        (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0xac)));
        (*(float *)(gen_frame + 0x8c)) = (float)((float10)(*(float *)(gen_frame + 0xbc)) - (float10)(*(float *)(gen_frame + 0xb0)));
        (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0x9c)));
        (*(float *)(gen_frame + 0x7c)) = (float)((float10)(*(float *)(gen_frame + 0xac)) - (float10)(*(float *)(gen_frame + 0xa0)));
        (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0xa4)));
        F_00550080(((float *)(gen_frame + 0x114)) + 2,(uint)&(*(float *)(gen_frame + 0x78)),(uint)&(*(float *)(gen_frame + 0x84)));
        F_00553ac0(((float *)(gen_frame + 0x114)) + 2);
        fVar10 = ((float)GEN_TOF(((float10)(*(float * PTR32 *)(gen_frame + 0x184))[2] * (float10)((float *)(gen_frame + 0x114))[4] +
                        ((float10)((float *)(gen_frame + 0x114))[2] * (float10)*(*(float * PTR32 *)(gen_frame + 0x184)) +
                        (float10)(*(float * PTR32 *)(gen_frame + 0x184))[1] * (float10)((float *)(gen_frame + 0x114))[3]))));
        (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(**(float * PTR32 *)(uVar9 + 0xc));
        if ((!((float10)(*(float *)(gen_frame + 0x194)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)REFG(double, 0x109cdf8))) ||
           (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(undefined * PTR32 *)(gen_frame + 0x198))))) <= (float10)fVar10))) {
          (*(undefined * PTR32 *)(gen_frame + 0x198)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar10)));
          goto LAB_00552f9b;
        }
      }
    }
    uVar18 = uVar18 + 1;
  } while (uVar18 < 2);
  **(float * PTR32 *)(uVar9 + 0xc) = (*(float *)(gen_frame + 0x194));
  pfVar11 = &(*(float *)(gen_frame + 0x78));
  iVar19 = 1;
  do {
    pfVar11 = pfVar11 + -4;
    F_00c93040(pfVar11);
    iVar19 = iVar19 + -1;
  } while (-1 < iVar19);
  return (*(byte *)(gen_frame + 0x18f));
}

/* ref: FUN_00553020 */
byte F_00553020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x553020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  byte bVar1;
  undefined4 * puVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar2 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar2[-2] = 0;
    puVar2[-1] = 0;
    *puVar2 = 0;
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  bVar1 = F_00551f10(this,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return bVar1;
}

/* ref: FUN_00553090 */
unsigned int F_00553090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  fVar6 = *(float *)((int)this + 100);
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar6) {
    uVar3 = *(undefined4 *)((int)this + 0x58);
    uVar4 = *(undefined4 *)((int)this + 0x5c);
    uVar5 = *(undefined4 *)((int)this + 0x60);
  }
  else {
    iVar1 = *(int *)(REFG(int, 0x137127c) + 0x66f4);
    uVar3 = *(undefined4 *)(iVar1 + 0x90);
    uVar4 = *(undefined4 *)(iVar1 + 0x94);
    uVar5 = *(undefined4 *)(iVar1 + 0x98);
    fVar6 = REFG(float, 0x109cdcc);
  }
  iVar1 = *(int *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0x14) = uVar3;
  *(undefined4 *)(iVar1 + 0x18) = uVar4;
  *(undefined4 *)(iVar1 + 0x1c) = uVar5;
  *(float *)(iVar1 + 0x20) = fVar6;
  F_00c97620(*(undefined * PTR32 *)((int)this + 8));
  bVar2 = F_00c97070(*(undefined * PTR32 *)((int)this + 8));
  if (bVar2 == 0) {
    if (0 < *(int *)((int)this + 0x54)) {
      *(int *)((int)this + 0x54) = *(int *)((int)this + 0x54) + -1;
    }
  }
  else {
    *(undefined4 *)((int)this + 0x54) = 1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc));
  gen_imp_SetEvent(*(HANDLE *)((int)this + 0x50));
  return 0;
}

/* ref: FUN_00553140 */
unsigned int F_00553140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x553090));
    F_004a1280((undefined *)(REFG(int, 0x137104c) + 0x11b0),&(*(gen_code32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_005531a0 */
unsigned int F_005531a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5531a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 1) == '\0')) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(gen_code32 *)(gen_frame + 0x14)) = (code *)0x0;
    (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x553a60));
    (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x553090));
    F_004a1280((undefined *)(REFG(int, 0x137104c) + 0x11b0),&(*(gen_code32 *)(gen_frame + 0xc)));
  }
  return 0;
}

/* ref: FUN_00553200 */
uint F_00553200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  undefined4 * puVar2;
  
  *(undefined1 *)this = (undefined1)param_1;
  this_00 = (undefined *)F_00406b90(0x20050,0,0);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_005558b0(this_00);
  }
  *(uint *)((int)this + 4) = uVar1;
  F_00c97800(*(undefined * PTR32 *)((int)this + 8),uVar1,(uint)(*(char *)this != '\0'));
  puVar2 = (undefined4 *)F_00406b90(0x28,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
    puVar2[2] = ((code *)REFP(0x553a90));
    puVar2[3] = this;
    puVar2[5] = 0;
    puVar2[4] = ((code *)REFP(0x5531a0));
    puVar2[6] = "CollisionUpdate";
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = "CollisionUpdate";
  }
  F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0x27,puVar2);
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(gen_code32 *)((int)this + 0x30) = ((code *)REFP(0x553a80));
  *(undefined * PTR32 *)((int)this + 0x34) = this;
  *(gen_code32 *)((int)this + 0x38) = ((code *)REFP(0x550fa0));
  *(char * PTR32 *)((int)this + 0x40) = "BGCollisionModule::OnEndOfFrame";
  *(char * PTR32 *)((int)this + 0x4c) = "BGCollisionModule::OnEndOfFrame";
  uVar1 = F_004a0100((undefined *)(REFG(int, 0x137104c) + 0x11b0),0xf,(int)this + 0x28);
  return uVar1;
}

/* ref: FUN_005532e0 */
uint F_005532e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5532e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 0x58) = param_1;
  *(int *)((int)this + 0x5c) = (int)param_1 >> 0x1f;
  return param_1;
}

/* ref: FUN_00553310 */
uint F_00553310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x60) = *param_2;
  *(undefined4 *)(in_ecx + 100) = param_2[1];
  *(undefined4 *)(in_ecx + 0x68) = param_2[2];
  *(undefined4 *)(in_ecx + 0x6c) = param_2[3];
  return (uint)param_2;
}

/* ref: FUN_00553340 */
uint F_00553340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553340u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x60);
  param_2[1] = *(undefined4 *)(in_ecx + 100);
  param_2[2] = *(undefined4 *)(in_ecx + 0x68);
  param_2[3] = *(undefined4 *)(in_ecx + 0x6c);
  return (uint)param_2;
}

/* ref: FUN_00553370 */
uint F_00553370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x70) = *param_2;
  *(undefined4 *)(in_ecx + 0x74) = param_2[1];
  *(undefined4 *)(in_ecx + 0x78) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00553390 */
uint F_00553390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x70);
  param_2[1] = *(undefined4 *)(in_ecx + 0x74);
  param_2[2] = *(undefined4 *)(in_ecx + 0x78);
  return (uint)param_2;
}

/* ref: FUN_005533b0 */
uint F_005533b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5533b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x80) = *param_1;
  uVar1 = param_1[1];
  *(uint *)((int)this + 0x84) = uVar1;
  return uVar1;
}

/* ref: FUN_005533e0 */
uint F_005533e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5533e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x88) = param_2;
  *(undefined4 *)(in_ecx + 0x8c) = 0;
  return param_2;
}

/* ref: FUN_00553400 */
unsigned int F_00553400(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x553400u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x90) = param_2;
  return 0;
}

/* ref: FUN_00553430 */
unsigned int F_00553430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 0x98);
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00553460 */
uint F_00553460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xd8) = *param_2;
  *(undefined4 *)(in_ecx + 0xdc) = param_2[1];
  *(undefined4 *)(in_ecx + 0xe0) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005534a0 */
uint F_005534a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5534a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005534f0 */
uint F_005534f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5534f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(uint *)((int)this + 8) = (uint)*(ushort *)(*param_1 + 0x2c);
  *(int *)((int)this + 4) = *param_1 + 0x30;
  return (uint)this;
}

/* ref: FUN_00553520 */
uint F_00553520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(uint *)((int)this + 8)) {
    return *(int *)((int)this + 4) + param_1 * 0xc;
  }
  return *(int *)this + (param_1 - *(uint *)((int)this + 8)) * 0xc;
}

/* ref: FUN_00553550 */
unsigned int F_00553550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  ushort * puVar11;
  float * pfVar12;
  uint uVar13;
  float10 fVar14;
  
  iVar10 = *(int *)this;
  fVar1 = *(float *)(iVar10 + 0x10);
  fVar2 = *(float *)(iVar10 + 0x14);
  fVar3 = *(float *)(iVar10 + 0x18);
  uVar13 = 0;
  puVar11 = ((ushort *)GEN_TOP((iVar10 + ((uint)*(ushort *)(iVar10 + 0x2c) * 3 + 0xc) * 4)));
  fVar4 = *(float *)(iVar10 + 0x1c);
  fVar14 = (float10)REFG(double, 0x109cab0);
  fVar5 = *(float *)(iVar10 + 0x20);
  fVar6 = *(float *)(iVar10 + 0x24);
  if (*(short *)(iVar10 + 0x28) != 0) {
    pfVar12 = (float *)(param_1 + 8);
    do {
      uVar7 = puVar11[1];
      uVar8 = puVar11[2];
      uVar9 = *puVar11;
      uVar13 = uVar13 + 1;
      puVar11 = puVar11 + 3;
      pfVar12[-2] = ((float)GEN_TOF(((float10)uVar9 *
                            (float10)((float)GEN_TOF((((float10)fVar4 - (float10)fVar1) / fVar14))) +
                           (float10)fVar1)));
      pfVar12[-1] = ((float)GEN_TOF(((float10)uVar7 *
                            (float10)((float)GEN_TOF((((float10)fVar5 - (float10)fVar2) / fVar14))) +
                           (float10)fVar2)));
      *pfVar12 = ((float)GEN_TOF(((float10)uVar8 *
                         (float10)((float)GEN_TOF((((float10)fVar6 - (float10)fVar3) / fVar14))) +
                        (float10)fVar3)));
      pfVar12 = pfVar12 + 3;
    } while (uVar13 < *(ushort *)(iVar10 + 0x28));
    return 0;
  }
  return 0;
}

/* ref: FUN_00553640 */
byte F_00553640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0x553640u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  byte * pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  
  if (-1 < param_2) {
    iVar3 = *param_1;
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*(ushort *)(iVar3 + 0x28) + param_2 + 8 +
                              (uint)*(ushort *)(iVar3 + 0x2c) * 2) * 6)));
    fVar5 = (float10)param_7;
    *param_3 = (float)(fVar5 * (float10)*param_6);
    param_3[1] = (float)((float10)param_6[1] * fVar5);
    param_3[2] = (float)(fVar5 * (float10)param_6[2]);
    *param_3 = (float)((float10)*param_3 + (float10)*param_5);
    param_3[1] = (float)((float10)param_5[1] + (float10)param_3[1]);
    param_3[2] = (float)((float10)param_5[2] + (float10)param_3[2]);
    uVar4 = (uint)*pbVar1;
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      uVar4 = uVar4 - param_4[2];
      iVar3 = *param_4;
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[3] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[4] = *(float *)(iVar2 + 4);
    param_3[5] = *(float *)(iVar2 + 8);
    uVar4 = (uint)pbVar1[1];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      uVar4 = uVar4 - param_4[2];
      iVar3 = *param_4;
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[6] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[7] = *(float *)(iVar2 + 4);
    param_3[8] = *(float *)(iVar2 + 8);
    uVar4 = (uint)pbVar1[2];
    if (uVar4 < (uint)param_4[2]) {
      iVar3 = param_4[1];
    }
    else {
      iVar3 = *param_4;
      uVar4 = uVar4 - param_4[2];
    }
    iVar2 = iVar3 + uVar4 * 0xc;
    param_3[9] = *(float *)(iVar3 + uVar4 * 0xc);
    param_3[10] = *(float *)(iVar2 + 4);
    param_3[0xb] = *(float *)(iVar2 + 8);
    param_3[0xf] = gen_bits2f((uint)CONCAT12(pbVar1[3],*(undefined2 *)(pbVar1 + 4)));
    param_3[0x10] = param_7;
    param_3[0x13] = 1.4013e-45;
    return 1;
  }
  param_3[0x13] = 0.0;
  return 0;
}

/* ref: FUN_00553770 */
byte F_00553770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005537e0 */
uint F_005537e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5537e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1a0) = param_2;
  return param_2;
}

/* ref: FUN_00553810 */
unsigned int F_00553810(unsigned int gen_a0)
{
  GEN_ENTER(0x553810u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return 0;
}

/* ref: FUN_00553840 */
uint F_00553840(unsigned int gen_a0)
{
  GEN_ENTER(0x553840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(uint *)((int)this + 0x20018);
}

/* ref: FUN_00553870 */
uint F_00553870(unsigned int gen_a0)
{
  GEN_ENTER(0x553870u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(int *)((int)this + 0x20018) + 0x80;
}

/* ref: FUN_005538e0 */
uint F_005538e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5538e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf5 */
uint F_005538f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5538f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2a)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf6 */
uint F_00553900(unsigned int gen_a0)
{
  GEN_ENTER(0x553900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c))) +
         (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28)));
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf7 */
unsigned int F_00553910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  float * pfVar2;
  float * pfVar3;
  uint local_8;
  
  iVar1 = *(int *)(this + 0xc);
  if (*(short *)(iVar1 + 0x2a) != 0) {
    local_8 = 0;
    if (*(short *)(iVar1 + 0x2c) != 0) {
      pfVar2 = (float *)(iVar1 + 0x30);
      pfVar3 = (float *)(param_2 + 8);
      do {
        local_8 = local_8 + 1;
        pfVar3[-2] = ((float)GEN_TOF((((float10)pfVar2[2] * (float10)param_1[8] +
                             ((float10)pfVar2[1] * (float10)param_1[4] +
                             (float10)*pfVar2 * (float10)*param_1)) + (float10)param_1[0xc])));
        pfVar3[-1] = ((float)GEN_TOF((((float10)pfVar2[2] * (float10)param_1[9] +
                             ((float10)pfVar2[1] * (float10)param_1[5] +
                             (float10)*pfVar2 * (float10)param_1[1])) + (float10)param_1[0xd])));
        *pfVar3 = ((float)GEN_TOF((((float10)param_1[10] * (float10)pfVar2[2] +
                          ((float10)param_1[2] * (float10)*pfVar2 +
                          (float10)pfVar2[1] * (float10)param_1[6])) + (float10)param_1[0xe])));
        pfVar2 = pfVar2 + 3;
        pfVar3 = pfVar3 + 3;
      } while (local_8 < *(ushort *)(iVar1 + 0x2c));
    }
    F_00c8fd40(this,(uint)*(ushort *)(iVar1 + 0x2c),param_1,param_2);
  }
  return 0;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf8 */
uint F_005539d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5539d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(this + 0xc);
  return iVar1 + (*(ushort *)(iVar1 + 0x28) + 8 + (uint)*(ushort *)(iVar1 + 0x2c) * 2) * 6;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf9 */
uint F_005539f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5539f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0xc);
  *param_2 = *(undefined4 *)(uVar1 + 0x10);
  param_2[1] = *(undefined4 *)(uVar1 + 0x14);
  param_2[2] = *(undefined4 *)(uVar1 + 0x18);
  param_2[3] = *(undefined4 *)(uVar1 + 0x1c);
  param_2[4] = *(undefined4 *)(uVar1 + 0x20);
  param_2[5] = *(undefined4 *)(uVar1 + 0x24);
  return uVar1;
}

/* ref: FUN_00553a40 */
uint F_00553a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00553a60 */
uint F_00553a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553a60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00553a80 */
uint F_00553a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x553a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                              param_8);
  return uVar1;
}

/* ref: FUN_00553a90 */
uint F_00553a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x553a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3);
  return uVar1;
}

/* ref: FUN_00553ab0 */
uint F_00553ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x553ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00554520((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00553ac0 */
uint F_00553ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x553ac0u, gen_a0, 0u, 0u, 0u);
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
  if ((float10)0 < fVar1) {
    *(float *)this = (float)((float10)*(float *)((int)(uintptr_t)this) * fVar1);
    *(float *)((int)this + 4) = ((float)GEN_TOF(((float10)*(float *)((int)this + 4) * fVar1)));
    *(float *)((int)this + 8) = ((float)GEN_TOF((fVar1 * (float10)*(float *)((int)this + 8))));
    return (uint)this;
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  *(undefined4 *)this = REFG(float, 0x1379700);
  *(undefined4 *)((int)this + 4) = REFG(float, 0x1379704);
  *(undefined4 *)((int)this + 8) = REFG(float, 0x1379708);
  return (uint)this;
}

/* ref: FUN_00553ba0 */
byte F_00553ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x553ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float * pfVar13;
  byte bVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  uVar12 = (*(uint *)&gen_args[3]);
  uVar11 = (*(uint *)&gen_args[2]);
  uVar10 = (*(uint *)&gen_args[0]);
  fVar5 = *(float *)(*(uint *)&gen_args[3]);
  fVar1 = *(float *)((*(uint *)&gen_args[0]) + 0xc);
  fVar2 = *(float *)((*(uint *)&gen_args[2]) + 8);
  fVar3 = *(float *)(*(uint *)&gen_args[2]);
  (*(float *)(gen_frame + 0x4)) = fVar3;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x2c)) = fVar3;
  (*(float *)(gen_frame + 0xc)) = fVar3;
  if ((float10)fVar5 < (float10)fVar3) {
    (*(float *)(gen_frame + 0x4)) = fVar5;
  }
  fVar6 = *(float *)((*(uint *)&gen_args[3]) + 8);
  if ((float10)fVar6 < (float10)fVar2) {
    (*(float *)(gen_frame + 0x8)) = fVar6;
  }
  if ((float10)fVar3 < (float10)fVar5) {
    (*(float *)(gen_frame + 0xc)) = fVar5;
  }
  if ((float10)fVar2 < (float10)fVar6) {
    (*(float *)(gen_frame + 0x10)) = fVar6;
  }
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[4]));
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)(*(float *)(gen_frame + 0x4))) {
    (*(float *)(gen_frame + 0x4)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x48)) = fVar2;
  if ((float10)fVar2 < (float10)(*(float *)(gen_frame + 0x8))) {
    (*(float *)(gen_frame + 0x8)) = fVar2;
  }
  if ((float10)(*(float *)(gen_frame + 0xc)) < ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))))) {
    (*(float *)(gen_frame + 0xc)) = gen_bits2f((*(uint *)&gen_args[3]));
  }
  if ((float10)(*(float *)(gen_frame + 0x10)) < (float10)fVar2) {
    (*(float *)(gen_frame + 0x10)) = fVar2;
  }
  fVar15 = (float10)fVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) - fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x8)) - fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0xc)) + fVar15);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(fVar5);
  bVar14 = F_005507d0((*(uint *)&gen_args[0]),(uint)(*(float * PTR32 *)&gen_args[1]),(uint)&(*(float *)(gen_frame + 0x4)));
  if (bVar14 == 0) {
    return 0;
  }
  fVar15 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2]))));
  (*(float *)(gen_frame + 0x14)) = (float)(fVar15 - (float10)(*(float *)(gen_frame + 0x2c)));
  fVar2 = *(float *)(uVar12 + 4);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(uVar11 + 4))));
  (*(uint *)&gen_args[2]) = *(uint *)(uVar12 + 8);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) - (float10)*(float *)(uVar11 + 8))));
  (*(float *)(gen_frame + 0x8)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) - fVar15);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - (float10)fVar2)));
  (*(float *)(gen_frame + 0x10)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))));
  F_00550080((*(float * PTR32 *)&gen_args[5]),(uint)&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x8)));
  F_00553ac0((*(float * PTR32 *)&gen_args[5]));
  (*(float *)(gen_frame + 0x30)) = (*(float * PTR32 *)&gen_args[1])[1];
  (*(float *)(gen_frame + 0x3c)) = (*(float * PTR32 *)&gen_args[5])[1];
  (*(float *)(gen_frame + 0x34)) = *(*(float * PTR32 *)&gen_args[1]);
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(*(*(float * PTR32 *)&gen_args[5]));
  (*(float *)(gen_frame + 0x2c)) = (*(float * PTR32 *)&gen_args[1])[2];
  (*(float *)(gen_frame + 0x38)) = (*(float * PTR32 *)&gen_args[5])[2];
  fVar15 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[5])[1]));
  fVar16 = ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[5])[2]));
  (*(uint *)&gen_args[2]) = (uint)gen_fl2bits(((float)GEN_TOF((fVar16 * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[2])) +
                                     (fVar15 * ((float10)GEN_TOD((*(float * PTR32 *)&gen_args[1])[1])) +
                                     ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) * ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[1]))))))));
  if (!(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)0)) {
    return 0;
  }
  fVar17 = (float10)fVar1;
  fVar2 = (float)(fVar17 * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar3 = (float)(fVar15 * fVar17);
  (*(float *)(gen_frame + 0x24)) = fVar3;
  fVar5 = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = *(float *)(*(uint *)&gen_args[0]);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)*(float *)(*(uint *)&gen_args[0]) - (float10)fVar2);
  (*(float *)(gen_frame + 0x44)) = *(float *)((*(uint *)&gen_args[0]) + 4);
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)((*(uint *)&gen_args[0]) + 4) - (float10)fVar3)));
  (*(float *)(gen_frame + 0x40)) = *(float *)((*(uint *)&gen_args[0]) + 8);
  (*(float *)(gen_frame + 0x1c)) = ((float)GEN_TOF(((float10)*(float *)((*(uint *)&gen_args[0]) + 8) - (float10)fVar5)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x14)),(uint)(*(float * PTR32 *)&gen_args[1]),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) &&
     ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[2]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
      !(gen_bits2f((*(uint *)&gen_args[2])) < *(float *)&REFG(undefined, 0x1088114)))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    return 1;
  }
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x48)) + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x44)) + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x1c)) = (float)((float10)(*(float *)(gen_frame + 0x40)) + (float10)(*(float *)(gen_frame + 0x28)));
  fVar15 = (float10)REFG(double, 0x1094890);
  (*(float *)(gen_frame + 0x8)) = (float)(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) * fVar15);
  (*(float *)(gen_frame + 0xc)) = (float)((float10)(*(float *)(gen_frame + 0x3c)) * fVar15);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x38)));
  bVar14 = F_00550990(&(*(float *)(gen_frame + 0x14)),(uint)&(*(float *)(gen_frame + 0x8)),uVar11,uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),&(*(uint *)&gen_args[2]));
  if (((bVar14 != 0) && (0.0 <= gen_bits2f((*(uint *)&gen_args[2])))) &&
     (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)fVar1 + (float10)fVar1)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  fVar2 = *(float *)uVar11;
  fVar15 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - fVar15);
  fVar16 = (float10)*(float *)((*(uint *)&gen_args[0]) + 4);
  fVar3 = ((float)GEN_TOF(((float10)*(float *)(uVar11 + 4) - fVar16)));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar17 = (float10)*(float *)((*(uint *)&gen_args[0]) + 8);
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(uVar11 + 8) - fVar17)));
  (*(float *)(gen_frame + 0x1c)) = fVar5;
  fVar6 = *(float *)uVar12;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar6 - fVar15);
  fVar7 = ((float)GEN_TOF(((float10)*(float *)(uVar12 + 4) - fVar16)));
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)*(float *)(uVar12 + 8) - fVar17)));
  (*(float *)(gen_frame + 0x28)) = fVar8;
  fVar9 = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar9 - fVar15);
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17)));
  fVar18 = (float10)(float)((float10)fVar2 - fVar15);
  fVar19 = (float10)fVar3;
  fVar20 = (float10)fVar5;
  fVar2 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  fVar18 = (float10)(float)((float10)fVar6 - fVar15);
  fVar19 = (float10)fVar7;
  fVar20 = (float10)fVar8;
  fVar3 = ((float)GEN_TOF((fVar20 * fVar20 + (fVar19 * fVar19 + fVar18 * fVar18))));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar15 = (float10)(float)((float10)fVar9 - fVar15);
  fVar16 = (float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[1])) - fVar16)));
  fVar17 = (float10)((float)GEN_TOF((((float10)GEN_TOD((*(float * PTR32 *)&gen_args[4])[2])) - fVar17)));
  fVar5 = ((float)GEN_TOF((fVar17 * fVar17 + (fVar16 * fVar16 + fVar15 * fVar15))));
  (*(float *)(gen_frame + 0x3c)) = fVar5;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar2);
  if ((float10)fVar2 < (float10)fVar3) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar3);
  }
  if (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))) < (float10)fVar5) {
    (*(uint *)&gen_args[3]) = (uint)gen_fl2bits(fVar5);
  }
  fVar15 = (float10)fVar1;
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 0;
  (*(uint *)&gen_args[3]) = (uint)gen_fl2bits((float)(fVar15 + (float10)((float)GEN_TOF(SQRT(((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))))));
  fVar16 = ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3]))));
  (*(float *)(gen_frame + 0x20)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x34)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x30)) * fVar16);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar16 * (float10)(*(float *)(gen_frame + 0x2c)));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x34))))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) + (float10)(float)((float10)(*(float *)(gen_frame + 0x30)) * fVar16))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) + (float10)(float)(fVar16 * (float10)(*(float *)(gen_frame + 0x2c))))));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar15 * fVar15);
  bVar14 = F_00c9abd0(uVar10,uVar11,uVar12,(float)(fVar15 * fVar15));
  if (((bVar14 != 0) || (bVar14 = F_00c9abd0(uVar10,uVar12,(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48))), bVar14 != 0)) ||
     (bVar14 = F_00c9abd0(uVar10,(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48))), bVar14 != 0)) {
    *(*(float * PTR32 *)&gen_args[6]) = 0.0;
    return 1;
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar11,uVar12,(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
  if (bVar14 == 0) {
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
    if (bVar14 == 0) {
      bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48)),(*(float * PTR32 *)&gen_args[6]));
      if (bVar14 == 0) {
        *(*(float * PTR32 *)&gen_args[6]) = REFG(float, 0x1090998);
      }
      else {
        (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1;
        *(*(float * PTR32 *)&gen_args[6]) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))) * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))));
      }
      goto LAB_0055410a;
    }
  }
  else {
    bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),uVar12,(uint)(*(float * PTR32 *)&gen_args[4]),(*(float *)(gen_frame + 0x48)),&(*(uint *)&gen_args[2]));
    if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
      *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
    }
  }
  bVar14 = F_00c9b730(uVar10,(uint)&(*(float *)(gen_frame + 0x20)),(uint)(*(float * PTR32 *)&gen_args[4]),uVar11,(*(float *)(gen_frame + 0x48)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && (((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1;
  *(*(float * PTR32 *)&gen_args[6]) = ((float)GEN_TOF((((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))) * ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[3])))))));
LAB_0055410a: ;
  fVar1 = *(float *)(uVar11 + 4);
  uVar4 = *(undefined4 *)(uVar11 + 8);
  (*(float *)(gen_frame + 0x4)) = *(float *)uVar11;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4);
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x48));
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = *(float *)(uVar12 + 4);
  uVar4 = *(undefined4 *)(uVar12 + 8);
  (*(float *)(gen_frame + 0x4)) = *(float *)uVar12;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = gen_bits2f(uVar4);
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  pfVar13 = (*(float * PTR32 *)&gen_args[6]);
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < ((float10)GEN_TOD(*(*(float * PTR32 *)&gen_args[6]))))) {
    *(*(float * PTR32 *)&gen_args[6]) = gen_bits2f((*(uint *)&gen_args[2]));
  }
  fVar1 = (*(float * PTR32 *)&gen_args[4])[1];
  fVar2 = (*(float * PTR32 *)&gen_args[4])[2];
  (*(float *)(gen_frame + 0x4)) = *(*(float * PTR32 *)&gen_args[4]);
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0xc)) = fVar2;
  bVar14 = F_00c9afc0(uVar10,(*(float * PTR32 *)&gen_args[1]),&(*(float *)(gen_frame + 0x4)),&(*(uint *)&gen_args[2]));
  if ((bVar14 != 0) && ((*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3)) = 1, ((float10)GEN_TOD(gen_bits2f((*(uint *)&gen_args[2])))) < (float10)*pfVar13)) {
    *pfVar13 = gen_bits2f((*(uint *)&gen_args[2]));
  }
  return (*(undefined1 *)((char *)&(*(uint *)&gen_args[0]) + 3));
}

/* ref: FUN_00554230 */
uint F_00554230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_005542b0 */
uint F_005542b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5542b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005542c0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_005542c0 */
uint F_005542c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5542c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: InterfaceHolderBase_InterfaceHolder_VNodeInterface_Mesh_RigidBody_BGCollision::vf0 */
uint F_005542f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5542f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554320 */
uint F_00554320(unsigned int gen_a0)
{
  GEN_ENTER(0x554320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(uint *)((int)this + 0x20018);
}

/* ref: FUN_00554350 */
uint F_00554350(unsigned int gen_a0)
{
  GEN_ENTER(0x554350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar1 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar1;
    *(undefined4 *)(uVar1 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  return *(int *)((int)this + 0x20018) + 0x80;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf3 */
uint F_00554440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf4 */
unsigned int F_00554450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf7 */
unsigned int F_00554460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554460u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf6 */
unsigned int F_00554470(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x554470u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf5 */
unsigned int F_00554480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554480u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00554490 */
uint F_00554490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005544d0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_005544a0 */
uint F_005544a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5544a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005544d0((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: Common::Component::BGCollision::EnvironmentInterface::vf0 */
uint F_005544d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5544d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554500 */
uint F_00554500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00554520 */
uint F_00554520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93040(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554550 */
uint F_00554550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a60));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00554570 */
uint F_00554570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a90));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00554590 */
uint F_00554590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x554590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x553a80));
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf0 */
uint F_005545d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5545d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93040(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00554600 */
uint F_00554600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005545d0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00554610 */
uint F_00554610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf10 */
uint F_00554640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x554640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(this + 0xc);
  if (*(short *)(uVar2 + 0x2a) != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
  }
  iVar1 = *(int *)(this + 0xc);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 8) + iVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
  }
  iVar1 = *(int *)(this + 0xc);
  if (0 < *(int *)(iVar1 + 8)) {
    (*(int *)(gen_frame + 0x18)) = *(int *)(iVar1 + 0xc) + iVar1;
    (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 8);
    uVar2 = F_00554640((undefined *)&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)),param_1);
  }
  F_00c93040(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)));
  return uVar2;
}

/* ref: FUN_005546d0 */
uint F_005546d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5546d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[3] = *(undefined4 *)((int)this + 8);
    param_1[2] = *(undefined4 *)((int)this + 4);
  }
  return (uint)param_1;
}

/* ref: FUN_005558b0 */
uint F_005558b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5558b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109ccfc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109ccec));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109ccd4));
  F_00509590((undefined *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = 0;
  F_00a4b9f0((undefined *)((int)this + 0x24),(int)this + 0x3c,0x20000,1);
  *(undefined4 *)((int)this + 0x2003c) = 0;
  *(undefined4 *)((int)this + 0x20040) = 0;
  *(undefined4 *)((int)this + 0x20044) = 0;
  *(undefined4 *)((int)this + 0x20048) = 0;
  *(undefined4 *)((int)this + 0x2004c) = 0;
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac);
  *(undefined * PTR32 *)((int)this + 0x1c) = this_00;
  uVar1 = F_00a1abd0(this_00);
  *(uint *)((int)this + 0x20) = uVar1;
  return (uint)this;
}

/* ref: FUN_00555960 */
uint F_00555960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = 0;
  F_00c9f100(param_1,(int)this + 0x30);
  return (uint)this;
}

/* ref: FUN_005559e0 */
uint F_005559e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5559e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00406bb0(param_1,0,0);
  return uVar1;
}

/* ref: FUN_00555a00 */
uint F_00555a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00406b30(param_1);
  return (uint)uVar1;
}

/* ref: FUN_00555a20 */
unsigned int F_00555a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00555a30 */
unsigned int F_00555a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((param_1 != 0) && (REFG(char, 0x1379710) == '\0')) {
    REFG(char, 0x1379710) = '\x01';
  }
  return 0;
}

/* ref: FUN_00555a50 */
unsigned int F_00555a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00555a60 */
unsigned int F_00555a60(void)
{
  GEN_ENTER(0x555a60u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00555a70 */
uint F_00555a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00555a90 */
uint F_00555a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c49908((int)this + 0x14,0x50,param_1);
  return uVar1;
}

/* ref: FUN_00555ab0 */
uint F_00555ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 100) = param_2;
  return param_2;
}

/* ref: FUN_00555ad0 */
uint F_00555ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_00555b10 */
unsigned int F_00555b10(unsigned int gen_a0)
{
  GEN_ENTER(0x555b10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x2001c);
  while (iVar1 != 0) {
    F_00a4b9d0(this,*(undefined4 *)((int)this + 0x2001c));
    iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x2001c) + 0x1a0)));
    *(int *)((int)this + 0x2001c) = iVar1;
  }
  *(undefined4 *)((int)this + 0x20018) = 0;
  return 0;
}

/* ref: FUN_00555b60 */
uint F_00555b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x555b60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00555b80 */
unsigned int F_00555b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20044) = *param_1;
  *(undefined4 *)((int)this + 0x20048) = param_1[1];
  *(undefined4 *)((int)this + 0x2004c) = param_1[2];
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20));
  }
  F_00555b10((undefined *)((int)this + 0x24));
  return 0;
}

/* ref: FUN_00555bc0 */
unsigned int F_00555bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555bc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float fVar1;
  undefined4 * puVar2;
  
  if (*(int *)(param_2 + 0x4c) != 0) {
    fVar1 = *(float *)(param_2 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x18);
    if ((float10)fVar1 < ((float10)GEN_TOD(gen_bits2f(puVar2[0x10])))) {
      puVar2[3] = *(undefined4 *)(param_2 + 0xc);
      puVar2[4] = *(undefined4 *)(param_2 + 0x10);
      puVar2[5] = *(undefined4 *)(param_2 + 0x14);
      puVar2[6] = *(undefined4 *)(param_2 + 0x18);
      puVar2[7] = *(undefined4 *)(param_2 + 0x1c);
      puVar2[8] = *(undefined4 *)(param_2 + 0x20);
      puVar2[9] = *(undefined4 *)(param_2 + 0x24);
      puVar2[10] = *(undefined4 *)(param_2 + 0x28);
      puVar2[0xb] = *(undefined4 *)(param_2 + 0x2c);
      *puVar2 = *(undefined4 *)param_2;
      puVar2[1] = *(undefined4 *)(param_2 + 4);
      puVar2[2] = *(undefined4 *)(param_2 + 8);
      puVar2[0x10] = (undefined4)gen_fl2bits(fVar1);
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x18) + 0x44))) = *(undefined4 *)(param_2 + 0x74);
      **(undefined1 * PTR32 *)(param_1 + 0x14) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00555c80 */
uint F_00555c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555c80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00555ca0 */
byte F_00555ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00555cf0 */
uint F_00555cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00555d00 */
uint F_00555d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00555d10 */
uint F_00555d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00555d20 */
uint F_00555d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00555d30 */
byte F_00555d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d30u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_00555d50 */
uint F_00555d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x555d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = (*(code *)*param_2)(param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00555d70 */
uint F_00555d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00555d80 */
uint F_00555d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00555d90 */
uint F_00555d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556300((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00555da0 */
uint F_00555da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
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
  *(undefined4 *)((int)this + 0x38) = 0;
  F_00555960(this,param_1);
  return (uint)this;
}

/* ref: FUN_00555e10 */
unsigned int F_00555e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x2001c);
  if (iVar1 != 0) {
    do {
      (*(code *)*param_1)(param_1[1],param_1 + 2,iVar1,0);
      iVar1 = *(int *)(iVar1 + 0x1a0);
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00555e50 */
unsigned int F_00555e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    (*(undefined4 *)(gen_frame + 0x0)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
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
    F_00555960(&(*(undefined4 *)(gen_frame + 0x0)),param_1);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(param_1 + 0x74);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1c) + 4))))(*(int * PTR32 *)((int)this + 0x1c),&(*(undefined4 *)(gen_frame + 0x0)));
  }
  return 0;
}

/* ref: FUN_00555ee0 */
uint F_00555ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    *(int *)(uVar1 + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return uVar1;
}

/* ref: FUN_00555f00 */
uint F_00555f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00555f10 */
uint F_00555f10(unsigned int gen_a0)
{
  GEN_ENTER(0x555f10u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00555f60 */
uint F_00555f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x555f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: FUN_00555f80 */
uint F_00555f80(unsigned int gen_a0)
{
  GEN_ENTER(0x555f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(*(undefined * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20));
  F_00a4b900((int)this + 0x24);
  uVar1 = F_005095f0((undefined *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  return uVar1;
}

/* ref: FUN_00555fe0 */
unsigned int F_00555fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x555fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(REFG(int, 0x137104c) + 0x25e0) + 0xc);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 != 0) {
    while ((*(int *)(iVar2 + 0x10) != param_1 ||
           (piVar1 = *(int * PTR32 *)(iVar2 + 100), piVar1 == (int *)0x0))) {
      iVar2 = *(int *)(iVar2 + 0xc);
      if (iVar2 == 0) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return 0;
      }
    }
    *(undefined4 *)(iVar2 + 100) = 0;
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,iVar2);
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00556050 */
float F_00556050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  float fVar3;
  
  if (*(int *)((int)this + 0x20018) == 0) {
    uVar2 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar2;
    *(undefined4 *)(uVar2 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  iVar1 = *(int *)((int)this + 0x20018);
  if (iVar1 == 0) {
    uVar2 = F_00a4b910(this,0x1b0);
    *(uint *)((int)this + 0x20018) = uVar2;
    *(undefined4 *)(uVar2 + 0x1a0) = *(undefined4 *)((int)this + 0x2001c);
  }
  fVar3 = F_00554700((undefined *)(iVar1 + 0x80),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20018) + 0x70))),
                       *(int *)((int)this + 0x20018));
  *(undefined4 *)((int)this + 0x2001c) = *(undefined4 *)((int)this + 0x20018);
  *(undefined4 *)((int)this + 0x20018) = 0;
  return fVar3;
}

/* ref: FUN_005560f0 */
uint F_005560f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5560f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x555bc0));
  return (uint)this;
}

/* ref: FUN_00556120 */
uint F_00556120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(int *)((int)this + 0x14) = (int)this + 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(gen_code32 *)this = ((code *)REFP(0x555d50));
  *(undefined * PTR32 *)((int)this + 4) = this;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x555e50));
  return (uint)this;
}

/* ref: FUN_00556150 */
unsigned int F_00556150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x556150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20));
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24));
  return 0;
}

/* ref: FUN_005561e0 */
unsigned int F_005561e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5561e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20));
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = param_2;
  (*(undefined4 *)(gen_frame + 0x1c)) = param_3;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555bc0));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24));
  return 0;
}

/* ref: FUN_00556270 */
unsigned int F_00556270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    F_00b1af80(*(undefined * PTR32 *)((int)this + 0x20));
  }
  iVar1 = *(int *)((int)this + 0x20040);
  (*(undefined4 *)(gen_frame + 0x14)) = param_1;
  (*(gen_code32 *)(gen_frame + 0xc)) = (code *)0x0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 * PTR32 *)(gen_frame + 0x18)) = ((undefined1 *)(gen_frame + 0x24));
  (*(undefined4 *)(gen_frame + 0x20)) = param_2;
  (*(gen_code32 *)(gen_frame + 0x4)) = ((code *)REFP(0x555d50));
  (*(gen_code32 * PTR32 *)(gen_frame + 0x8)) = &(*(gen_code32 *)(gen_frame + 0x4));
  (*(gen_code32 *)(gen_frame + 0xc)) = ((code *)REFP(0x555e50));
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1a0)) {
    ((code *)(*(gen_code32 *)(gen_frame + 0x4)))((*(gen_code32 * PTR32 *)(gen_frame + 0x8)),&(*(gen_code32 *)(gen_frame + 0xc)),iVar1,0);
  }
  F_00555b10((undefined *)((int)this + 0x24));
  return 0;
}

/* ref: FUN_00556300 */
uint F_00556300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x109cda4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109cd94));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109cd7c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[5])REFP(0x109cd64));
  F_00a1ac10(*(undefined * PTR32 *)((int)this + 0x1c),*(undefined4 *)((int)this + 0x20));
  F_00a4b900((int)this + 0x24);
  F_005095f0((undefined *)((int)this + 0xc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x109bebc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[3])REFP(0x109beac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109be9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556370 */
uint F_00556370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_005563c0 */
uint F_005563c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5563c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 != 0) {
    if (*(uint *)this == param_1) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return param_1;
}

/* ref: FUN_00556410 */
uint F_00556410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x556410u, gen_a0, gen_a1, gen_a2, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  for (iVar1 = *in_ecx; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    if (iVar1 == param_3) {
      *param_2 = iVar1;
      return (uint)param_2;
    }
    if (iVar1 == 0) break;
  }
  *param_2 = 0;
  return (uint)param_2;
}

/* ref: LinkList_VBGCollisionResourceHandle_Environment_A0x3663ed73_Collision_Component::vf0 */
uint F_00556450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005564a0 */
uint F_005564a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5564a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x108bef0));
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x553a90));
  *(undefined4 *)((int)this + 0x14) = 0;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)this;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)this;
}

/* ref: FUN_005564f0 */
uint F_005564f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5564f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char * param_3 = (char *)(uintptr_t)gen_a3;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0xc) = param_1;
  *(gen_code32 *)((int)this + 8) = ((code *)REFP(0x553a80));
  *(undefined4 *)((int)this + 0x10) = param_2;
  *(char * PTR32 *)((int)this + 0x18) = param_3;
  if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
    *(char * PTR32 *)((int)this + 0x24) = param_3;
    return (uint)param_3;
  }
  *(undefined * PTR32 *)((int)this + 0x24) = this;
  return (uint)param_3;
}

/* ref: FUN_00556570 */
uint F_00556570(unsigned int gen_a0)
{
  GEN_ENTER(0x556570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14;
}

/* ref: FUN_00556580 */
uint F_00556580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x556580u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x5c))))
                    (*(int * PTR32 *)((int)this + 0x10),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00556590 */
uint F_00556590(unsigned int gen_a0)
{
  GEN_ENTER(0x556590u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x68);
}

/* ref: FUN_005565a0 */
uint F_005565a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5565a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00556830((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_005565b0 */
byte F_005565b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5565b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x88)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return iVar1 == 2;
}

/* ref: FUN_005565d0 */
uint F_005565d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5565d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x1c)));
}

/* ref: FUN_005565e0 */
byte F_005565e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5565e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int * piVar2;
  
  piVar2 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x8c)));
  LOCK();
  iVar1 = *piVar2;
  *piVar2 = *piVar2;
  UNLOCK();
  return 7 < iVar1;
}

/* ref: FUN_00556640 */
uint F_00556640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x556640u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x140];
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  char * pcVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x138)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x13c);
  (*(char * PTR32 *)(gen_frame + 0x2c)) = param_1;
  (*(int * PTR32 *)(gen_frame + 0x30)) = param_2;
  puVar2 = (undefined4 *)F_00406b90(0x6c,0,0);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = (*(undefined * PTR32 (*)[7])REFP(0x109cddc));
    puVar2[1] = (*(undefined * PTR32 (*)[1])REFP(0x109cdd4));
    puVar2[4] = 0;
    puVar2[0x1a] = 0;
    *(undefined1 *)(puVar2 + 5) = 0;
  }
  puVar2[3] = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = puVar2;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(undefined4 * PTR32 *)((int)this + 0xc) = puVar2;
  pcVar6 = ((char *)(gen_frame + 0x34));
  pcVar7 = (*(char * PTR32 *)(gen_frame + 0x2c));
  do {
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
    if (cVar1 == '\\') {
      cVar1 = '/';
    }
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  F_00c49908(puVar2 + 5,0x50,(*(char * PTR32 *)(gen_frame + 0x2c)));
  puVar2[0x19] = (*(int * PTR32 *)(gen_frame + 0x30));
  puVar2[0x1a] = param_3;
  if (this == &REFG(undefined, 0x4)) {
    iVar3 = 0;
  }
  else {
    iVar3 = (int)this + 8;
  }
  ((int *)(gen_frame + 0x4))[0] = iVar3;
  ((int *)(gen_frame + 0x4))[2] = param_4;
  (*(undefined4 *)(gen_frame + 0x10)) = param_5;
  ((int *)(gen_frame + 0x4))[1] = 0;
  (*(int *)(gen_frame + 0x14)) = (-(uint)((char)param_6 != '\0') & 0xfffffffd) + 5;
  (*(undefined1 *)(gen_frame + 0x18)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x21)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x25)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar4 = F_00513dc0(((char *)(gen_frame + 0x34)),((int *)(gen_frame + 0x4)),0,0);
  puVar2[4] = uVar4;
  piVar5 = (int *)(uVar4 + 0x88);
  LOCK();
  iVar3 = *piVar5;
  *piVar5 = *piVar5;
  UNLOCK();
  if ((iVar3 == 2) && ((*(int * PTR32 *)(gen_frame + 0x30)) != (int *)0x0)) {
    puVar2[0x19] = 0;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x30)) + 4))((*(int * PTR32 *)(gen_frame + 0x30)),puVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0x138)) ^ (uint)(uint)(gen_frame + 0x13c));
  return (uint)puVar2;
}

/* ref: FUN_005567b0 */
unsigned int F_005567b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5567b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    while (puVar1 != param_1) {
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
      puVar1 = (undefined4 *)puVar1[3];
      if (puVar1 == (undefined4 *)0x0) {
        return 0;
      }
    }
    if (puVar1 != (undefined4 *)0x0) {
      F_0050c620(puVar1[4],0,0);
      if (*(undefined4 * PTR32 *)((int)this + 0xc) == puVar1) {
        *(undefined4 *)((int)this + 0xc) = puVar1[3];
      }
      if (puVar1[2] != 0) {
        *(undefined4 *)(puVar1[2] + 0xc) = puVar1[3];
      }
      if (puVar1[3] != 0) {
        *(undefined4 *)(puVar1[3] + 8) = puVar1[2];
      }
      puVar1[2] = 0;
      puVar1[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    }
  }
  return 0;
}

/* ref: FUN_00556830 */
uint F_00556830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x109cddc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x109cdd4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x109cdc8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x109bed4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556890 */
uint F_00556890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_005568b0 */
uint F_005568b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5568b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 6;
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00556970 */
uint F_00556970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_005569d0 */
uint F_005569d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5569d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  char cVar1;
  
  cVar1 = *(char *)((int)this + 0x1c);
  *(undefined1 *)((int)cVar1 + 0xcU + (int)this) = (undefined1)param_1;
  *(char *)((int)this + 0x1c) = *(char *)((int)this + 0x1c) + '\x01';
  *(undefined1 *)((int)this + 0x1d) = 2;
  return (int)cVar1;
}

