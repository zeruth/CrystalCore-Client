#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: Client::LayoutEngine::Streaming::BoundingBoxQuadTree::vf0 */
uint F_00609090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a395c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006090e0 */
uint F_006090e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6090e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(undefined4 *)(in_ecx + 0x40) = param_2[4];
  *(undefined4 *)(in_ecx + 0x44) = param_2[5];
  *(undefined4 *)(in_ecx + 0x48) = param_2[6];
  return (uint)param_2;
}

/* ref: FUN_00609110 */
uint F_00609110(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x609110u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a0, sizeof gen_a0);
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x8)) = (*(float *)&gen_args[0]);
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1094884);
  pfVar1 = &(*(float *)&gen_args[1]);
  if (!(REFG(double, 0x1094800) < (double)(*(float *)&gen_args[1]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x8));
  }
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x50) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_00609150 */
uint F_00609150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)((int)this + 8) =
       (ushort)((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
       ~(1 << ((byte)param_1 & 0x1f)) & *(ushort *)((int)this + 8);
  return (uint)this;
}

/* ref: FUN_00609190 */
uint F_00609190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(ushort *)(in_ecx + 8) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_006091f0 */
uint F_006091f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6091f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006011a0(this);
  return (uint)this;
}

/* ref: FUN_00609220 */
uint F_00609220(unsigned int gen_a0)
{
  GEN_ENTER(0x609220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601220(this);
  return (uint)this;
}

/* ref: FUN_00609250 */
uint F_00609250(unsigned int gen_a0)
{
  GEN_ENTER(0x609250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006012a0(this);
  return (uint)this;
}

/* ref: FUN_006092c0 */
byte F_006092c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6092c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00609330 */
uint F_00609330(unsigned int gen_a0)
{
  GEN_ENTER(0x609330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601640(this);
  return (uint)this;
}

/* ref: FUN_00609350 */
byte F_00609350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006093a0 */
uint F_006093a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6093a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601220(this);
  return (uint)this;
}

/* ref: FUN_006093f0 */
uint F_006093f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6093f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601850(this);
  return (uint)this;
}

/* ref: FUN_00609410 */
uint F_00609410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00609450 */
uint F_00609450(unsigned int gen_a0)
{
  GEN_ENTER(0x609450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006019b0(this);
  return (uint)this;
}

/* ref: FUN_006094a0 */
uint F_006094a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6094a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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

/* ref: FUN_00609500 */
uint F_00609500(unsigned int gen_a0)
{
  GEN_ENTER(0x609500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00609540 */
uint F_00609540(unsigned int gen_a0)
{
  GEN_ENTER(0x609540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609580 */
uint F_00609580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x91))) == '\0') {
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

/* ref: FUN_006095e0 */
unsigned int F_006095e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6095e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)gen_fl2bits((float)(REFG(float, 0x10a0d00)));
  uVar2 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1094880)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined4 *)((int)this + 4) = 4;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined4 *)this = 0x1030080;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = uVar2;
  *(undefined4 *)((int)this + 0x34) = uVar3;
  *(undefined4 *)((int)this + 0x38) = uVar2;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x48) = uVar1;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = uVar1;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined2 *)((int)this + 0x74) = 0;
  *(undefined2 *)((int)this + 0x76) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  return 0;
}

/* ref: FUN_006096b0 */
uint F_006096b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6096b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00609710 */
unsigned int F_00609710(unsigned int gen_a0)
{
  GEN_ENTER(0x609710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *(undefined2 *)((int)this + 3) = 0x400;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 6) = 0;
  *(undefined4 *)((int)this + 0x10) = uVar1;
  *(undefined4 *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = uVar1;
  *(undefined4 *)((int)this + 0x1c) = uVar1;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0xd) = 0;
  *(undefined1 *)((int)this + 2) = 8;
  *(undefined2 *)this = 0x70;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = uVar1;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = uVar1;
  *(undefined4 *)((int)this + 0x60) = uVar1;
  *(undefined4 *)((int)this + 100) = uVar1;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return 0;
}

/* ref: FUN_006097c0 */
uint F_006097c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6097c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609800 */
uint F_00609800(unsigned int gen_a0)
{
  GEN_ENTER(0x609800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609810 */
uint F_00609810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00609830 */
unsigned int F_00609830(unsigned int gen_a0)
{
  GEN_ENTER(0x609830u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006098f0 */
uint F_006098f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6098f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00609950 */
uint F_00609950(unsigned int gen_a0)
{
  GEN_ENTER(0x609950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609990 */
uint F_00609990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609990u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_006099f0 */
uint F_006099f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6099f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609a50 */
byte F_00609a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x609a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float * pfVar1;
  byte bVar2;
  
  bVar2 = *(byte *)((int)this + 2);
  if (((*(uint *)((int)this + 0x78) >> 2 & 1) != 0) &&
     (pfVar1 = (float *)((int)this + 0x6c), !GEN_ISNAN(*pfVar1) && (!(0.0 < *pfVar1) && *pfVar1 != 0.0)))
  {
    bVar2 = 0;
  }
  pfVar1 = (float *)((int)this + 4);
  if ((!GEN_ISNAN(REFG(float, 0x1088068)) && !GEN_ISNAN(*pfVar1)) &&
      (!(REFG(float, 0x1088068) < *pfVar1) && REFG(uint, 0x1088068) != *pfVar1)) {
    bVar2 = (byte)param_1;
  }
  return bVar2;
}

/* ref: FUN_00609a90 */
float10 F_00609a90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x609a90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 8);
  if ((*(uint *)(in_ecx + 0x78) >> 3 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0xc)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 0xc))));
}

/* ref: FUN_00609ae0 */
uint F_00609ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x609ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00609af0 */
float10 F_00609af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x609af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 0x10);
  if ((*(uint *)(in_ecx + 0x78) >> 4 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x70) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0x14)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 0x14))));
}

/* ref: FUN_00609b40 */
uint F_00609b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609b40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  float local_28;
  
  uVar3 = *(uint *)((int)this + 0x78);
  if ((uVar3 >> 9 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x28);
    *param_1 = *(float *)((int)this + 0x24);
    fVar2 = *(float *)((int)this + 0x2c);
    param_1[1] = fVar1;
    param_1[2] = fVar2;
    if ((uVar3 >> 5 & 1) != 0) {
      fVar6 = (float10)*(float *)((int)this + 0x74);
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
    }
    fVar6 = (float10)*(float *)((int)this + 0x30);
    fVar7 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x30))));
    fVar4 = (float10)(float)(fVar7 * (float10)*param_2) +
            (float10)(float)(fVar6 * (float10)*param_1);
    fVar5 = (float10)(float)((float10)param_2[1] * fVar7) +
            (float10)(float)((float10)param_1[1] * fVar6);
    fVar6 = (float10)(float)(fVar7 * (float10)param_2[2]) +
            (float10)(float)(fVar6 * (float10)param_1[2]);
  }
  else {
    fVar1 = *(float *)((int)this + 0x28);
    fVar2 = *(float *)((int)this + 0x2c);
    fVar4 = (float10)*(float *)((int)this + 0x30);
    fVar5 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x30))));
    fVar6 = (float10)REFG(float, 0x1302c10);
    fVar7 = (float10)REFG(float, 0x1302c14);
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)REFG(float, 0x1302c0c)) +
                      (float10)((float)GEN_TOF((fVar4 * (float10)*(float *)((int)this + 0x24)))))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar5 * fVar6) + (float10)(float)((float10)fVar1 * fVar4))))
    ;
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar5 * fVar7) + (float10)(float)(fVar4 * (float10)fVar2))))
    ;
    if ((uVar3 >> 5 & 1) != 0) {
      fVar6 = (float10)*(float *)((int)this + 0x74);
      *param_1 = (float)(fVar6 * (float10)*param_1);
      param_1[1] = (float)((float10)param_1[1] * fVar6);
      param_1[2] = (float)(fVar6 * (float10)param_1[2]);
    }
    fVar4 = (float10)*param_2 * (float10)*param_1;
    fVar5 = (float10)param_2[1] * (float10)param_1[1];
    fVar6 = (float10)param_2[2] * (float10)param_1[2];
  }
  local_28 = (float)fVar5;
  local_2c = (float)fVar4;
  *param_1 = local_2c;
  param_1[1] = local_28;
  param_1[2] = (float)fVar6;
  return (uint)param_1;
}

/* ref: FUN_00609e50 */
uint F_00609e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x609e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar2 = *(float *)((int)this + 0x34);
  uVar6 = *(uint *)((int)this + 0x78);
  if ((uVar6 >> 10 & 1) == 0) {
    fVar1 = *(float *)((int)this + 0x3c);
    fVar5 = *(float *)((int)this + 0x38);
    fVar3 = param_2[1];
    fVar4 = param_2[2];
    fVar10 = (float10)*(float *)((int)this + 0x4c);
    fVar7 = (float10)((float)GEN_TOF(((float10)1 - (float10)*(float *)((int)this + 0x4c))));
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar7 * (float10)*param_2) +
                      (float10)(float)(fVar10 * (float10)fVar2))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar7) +
                        (float10)(float)((float10)fVar5 * fVar10))));
    fVar2 = *(float *)((int)this + 0x4c);
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar7 * (float10)fVar4) +
                        (float10)(float)(fVar10 * (float10)fVar1))));
    param_1[3] = fVar2;
  }
  else {
    fVar1 = *(float *)((int)this + 0x4c);
    fVar3 = *(float *)((int)this + 0x38);
    fVar4 = *(float *)((int)this + 0x3c);
    param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x1090708));
    fVar7 = (float10)fVar1;
    fVar8 = (float10)(float)((float10)1 - (float10)fVar1);
    fVar9 = (float10)REFG(float, 0x1302c10);
    fVar10 = (float10)REFG(float, 0x1302c14);
    *param_1 = ((float)GEN_TOF(((float10)(float)(fVar8 * (float10)REFG(float, 0x1302c0c)) +
                      (float10)(float)(fVar7 * (float10)fVar2))));
    param_1[1] = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar8) + (float10)(float)((float10)fVar3 * fVar7))))
    ;
    param_1[2] = ((float)GEN_TOF(((float10)(float)(fVar8 * fVar10) + (float10)(float)(fVar7 * (float10)fVar4)
                        )));
  }
  if ((uVar6 >> 6 & 1) != 0) {
    fVar10 = (float10)*(float *)((int)this + 0x74);
    *param_1 = (float)(fVar10 * (float10)*param_1);
    param_1[1] = (float)((float10)param_1[1] * fVar10);
    param_1[2] = (float)((float10)param_1[2] * fVar10);
    param_1[3] = (float)(fVar10 * (float10)param_1[3]);
  }
  return (uint)param_1;
}

/* ref: FUN_0060a0a0 */
uint F_0060a0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a0b0 */
float10 F_0060a0b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x60a0b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float10 in_ST0 = 0;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  
  fVar3 = REFG(float, 0x1090708);
  fVar9 = *(float *)(param_1 + 0x4c);
  uVar4 = *(uint *)(param_1 + 0x78);
  if ((uVar4 >> 0xb & 1) == 0) {
    fVar3 = *(float *)(param_1 + 0x44);
    fVar1 = *(float *)(param_1 + 0x48);
    fVar8 = (float10)fVar9;
    fVar5 = (float10)(float)((float10)1 - (float10)fVar9);
    *param_2 = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)param_3) +
                      (float10)((float)GEN_TOF((fVar8 * (float10)*(float *)(param_1 + 0x40)))))));
    param_2[1] = ((float)GEN_TOF(((float10)(float)((float10)param_4 * fVar5) +
                        (float10)(float)((float10)fVar3 * fVar8))));
    param_2[2] = ((float)GEN_TOF(((float10)(float)(fVar5 * (float10)param_5) +
                        (float10)(float)(fVar8 * (float10)fVar1))));
  }
  else {
    fVar1 = *(float *)(param_1 + 0x44);
    fVar2 = *(float *)(param_1 + 0x48);
    fVar5 = (float10)fVar9;
    fVar6 = (float10)(float)((float10)1 - (float10)fVar9);
    fVar7 = (float10)REFG(float, 0x1302c10);
    fVar8 = (float10)REFG(float, 0x1302c14);
    *param_2 = ((float)GEN_TOF(((float10)(float)(fVar6 * (float10)REFG(float, 0x1302c0c)) +
                      (float10)((float)GEN_TOF((fVar5 * (float10)*(float *)(param_1 + 0x40)))))));
    param_2[1] = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar6) + (float10)(float)((float10)fVar1 * fVar5))))
    ;
    param_2[2] = ((float)GEN_TOF(((float10)(float)(fVar6 * fVar8) + (float10)(float)(fVar5 * (float10)fVar2))))
    ;
    fVar9 = fVar3;
  }
  param_2[3] = fVar9;
  if ((uVar4 >> 7 & 1) != 0) {
    fVar8 = (float10)*(float *)(param_1 + 0x74);
    *param_2 = (float)(fVar8 * (float10)*param_2);
    param_2[1] = (float)((float10)param_2[1] * fVar8);
    param_2[2] = (float)((float10)param_2[2] * fVar8);
    param_2[3] = (float)(fVar8 * (float10)fVar9);
  }
  return in_ST0;
}

/* ref: FUN_0060a2d0 */
uint F_0060a2d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a2d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)param_2 = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x5c);
  if ((*(uint *)(param_1 + 0x78) >> 8 & 1) != 0) {
    *(float *)param_2 = ((float)GEN_TOF(((float10)*(float *)param_2 * (float10)*(float *)(param_1 + 0x74))));
    *(float *)(param_2 + 4) =
         ((float)GEN_TOF(((float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_1 + 0x74))));
    *(float *)(param_2 + 8) =
         ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x74) * (float10)*(float *)(param_2 + 8))));
  }
  F_004a3b40(param_2,((float)GEN_TOF(((float10)1 - (float10)*(float *)(param_1 + 0x60)))),param_3,
               *(float *)(param_1 + 0x60),param_2);
  return param_2;
}

/* ref: FUN_0060a370 */
float10 F_0060a370(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60a370u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float local_8;
  
  local_8 = *(float *)(in_ecx + 100);
  if ((*(uint *)(in_ecx + 0x78) >> 2 & 1) != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) * (float10)local_8)));
  }
  return (float10)((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 4)) * (float10)param_2 +
                         (float10)local_8 * (float10)*(float *)(in_ecx + 4))));
}

/* ref: FUN_0060a3c0 */
uint F_0060a3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a3c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a420 */
uint F_0060a420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a420u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060a4b0 */
uint F_0060a4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a4b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a510 */
uint F_0060a510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a510u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060a570 */
uint F_0060a570(unsigned int gen_a0)
{
  GEN_ENTER(0x60a570u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a5c0 */
uint F_0060a5c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a5c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a5d0 */
uint F_0060a5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a5d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a610 */
uint F_0060a610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a620 */
unsigned int F_0060a620(unsigned int gen_a0)
{
  GEN_ENTER(0x60a620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060a6a0 */
uint F_0060a6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x21))) == '\0') {
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

/* ref: FUN_0060a700 */
uint F_0060a700(unsigned int gen_a0)
{
  GEN_ENTER(0x60a700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_0060a730 */
uint F_0060a730(unsigned int gen_a0)
{
  GEN_ENTER(0x60a730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006022d0(this);
  return (uint)this;
}

/* ref: FUN_0060a770 */
uint F_0060a770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a770u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060a7d0 */
uint F_0060a7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060a800 */
uint F_0060a800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a820 */
unsigned int F_0060a820(unsigned int gen_a0)
{
  GEN_ENTER(0x60a820u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x19) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x19);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x19);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x19);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060a870 */
uint F_0060a870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a8b0 */
uint F_0060a8b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a8b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a8f0 */
uint F_0060a8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a900 */
uint F_0060a900(unsigned int gen_a0)
{
  GEN_ENTER(0x60a900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00602450(this);
  return (uint)this;
}

/* ref: FUN_0060a920 */
uint F_0060a920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a940 */
uint F_0060a940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a960 */
uint F_0060a960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a970 */
byte F_0060a970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60a970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060a990 */
uint F_0060a990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a9a0 */
uint F_0060a9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60a9a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060a9c0 */
unsigned int F_0060a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60a9c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0060aa10 */
uint F_0060aa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60aa10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aa40 */
uint F_0060aa40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60aa40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aa50 */
uint F_0060aa50(unsigned int gen_a0)
{
  GEN_ENTER(0x60aa50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00602540(this);
  return (uint)this;
}

/* ref: FUN_0060aa60 */
uint F_0060aa60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aa60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 2;
  return (uint)param_2;
}

/* ref: FUN_0060aa80 */
uint F_0060aa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aa80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x40) = *param_1;
  *(undefined4 *)((int)this + 0x44) = param_1[1];
  *(undefined4 *)((int)this + 0x48) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  *(uint *)((int)this + 0x4c) = uVar1;
  return uVar1;
}

/* ref: FUN_0060aab0 */
uint F_0060aab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x50) = *param_2;
  *(undefined4 *)(in_ecx + 0x54) = param_2[1];
  *(undefined4 *)(in_ecx + 0x58) = param_2[2];
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) | 2;
  return (uint)param_2;
}

/* ref: FUN_0060aad0 */
uint F_0060aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x30) = *param_1;
  *(undefined4 *)((int)this + 0x34) = param_1[1];
  *(undefined4 *)((int)this + 0x38) = param_1[2];
  *(undefined4 *)((int)this + 0x40) = param_1[4];
  *(undefined4 *)((int)this + 0x44) = param_1[5];
  *(undefined4 *)((int)this + 0x48) = param_1[6];
  *(undefined4 *)((int)this + 0x4c) = param_1[7];
  *(undefined4 *)((int)this + 0x50) = param_1[8];
  *(undefined4 *)((int)this + 0x54) = param_1[9];
  *(undefined4 *)((int)this + 0x58) = param_1[10];
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 2;
  return (uint)param_1;
}

/* ref: FUN_0060ab20 */
uint F_0060ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ab20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(byte *)(in_ecx + 100) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_0060ab40 */
byte F_0060ab40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ab40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = ((char)param_2 != '\0') << ((byte)param_1 & 0x1f) |
          ~('\x01' << ((byte)param_1 & 0x1f)) & *(byte *)((int)this + 100);
  *(byte *)((int)this + 100) = bVar1;
  return bVar1;
}

/* ref: FUN_0060ab70 */
uint F_0060ab70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60ab70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  float * pfVar2;
  
  iVar1 = *(int *)(in_ecx + 0x70);
  (*(float *)(gen_frame + 0x8)) = param_2;
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1094884);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  if (!(REFG(double, 0x1094800) < (double)param_2)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  *(float *)(iVar1 + 0x50) = *pfVar2;
  return (uint)pfVar2;
}

/* ref: FUN_0060abb0 */
uint F_0060abb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60abb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060abd0 */
uint F_0060abd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60abd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060abe0 */
byte F_0060abe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60abe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060ac10 */
uint F_0060ac10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ac10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060ac20 */
uint F_0060ac20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ac20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 | 1 << ((byte)param_1 & 0xf);
  return (uint)this;
}

/* ref: FUN_0060ac50 */
uint F_0060ac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  ushort * puVar1;
  
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  *puVar1 = *puVar1 & ~(1 << ((byte)param_1 & 0xf));
  return (uint)this;
}

/* ref: FUN_0060ac80 */
uint F_0060ac80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ac80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060acd0 */
uint F_0060acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60acd0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060ad30 */
uint F_0060ad30(unsigned int gen_a0)
{
  GEN_ENTER(0x60ad30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060ad50 */
uint F_0060ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ad50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060ad80 */
uint F_0060ad80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ad80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060aeb0 */
uint F_0060aeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0060af00 */
undefined4 * F_0060af00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060af30 */
undefined4 * F_0060af30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x91) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x91) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060af70 */
undefined4 * F_0060af70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60af70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x91) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x91) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060afb0 */
uint F_0060afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x60afb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0060afc0 */
undefined4 * F_0060afc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60afc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x25) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x25) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060aff0 */
undefined4 * F_0060aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b020 */
undefined4 * F_0060b020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b050 */
uint F_0060b050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b050u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b090 */
uint F_0060b090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b090u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b0c0 */
undefined4 * F_0060b0c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((int)puVar2[3] < *param_1) {
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

/* ref: FUN_0060b0f0 */
undefined4 * F_0060b0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b120 */
undefined4 * F_0060b120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort * param_1 = (ushort *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(ushort *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b160 */
uint F_0060b160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b160u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b190 */
undefined4 * F_0060b190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b1c0 */
undefined4 * F_0060b1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if (*(byte *)(puVar2 + 3) < *param_1) {
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

/* ref: FUN_0060b1f0 */
undefined4 * F_0060b1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b1f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b220 */
undefined4 * F_0060b220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b220u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b250 */
undefined4 * F_0060b250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b280 */
undefined4 * F_0060b280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar3 + 0x19) == '\0');
  }
  return puVar2;
}

/* ref: FUN_0060b2c0 */
uint F_0060b2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b2c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b2f0 */
uint F_0060b2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0060b300 */
undefined4 * F_0060b300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b300u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b340 */
uint F_0060b340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b340u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b370 */
undefined4 * F_0060b370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b370u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b3a0 */
undefined4 * F_0060b3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b3a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b3d0 */
uint F_0060b3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b3d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b400 */
uint F_0060b400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b410 */
uint F_0060b410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((param_1[1] < (uint)puVar2[5]) ||
         ((param_1[1] <= (uint)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return (uint)puVar2;
}

/* ref: FUN_0060b460 */
uint F_0060b460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b470 */
undefined4 * F_0060b470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b470u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b4b0 */
uint F_0060b4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
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

/* ref: FUN_0060b4f0 */
unsigned int F_0060b4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b4f0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0060b540 */
unsigned int F_0060b540(unsigned int gen_a0)
{
  GEN_ENTER(0x60b540u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0060b590 */
uint F_0060b590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601640(this);
  return (uint)param_1;
}

/* ref: FUN_0060b5b0 */
undefined4 * F_0060b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b5b0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060b5e0 */
uint F_0060b5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b5f0 */
unsigned int F_0060b5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x60b5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x25) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x25) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x25);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x25);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x25);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0060b640 */
uint F_0060b640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b650 */
uint F_0060b650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b660 */
uint F_0060b660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b670 */
uint F_0060b670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b680 */
uint F_0060b680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60b680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0060b6a0 */
byte F_0060b6a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60b6a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int iVar1;
  double dVar3;
  
  dVar3 = (GEN_X87MATH(((double)(float)((float10)(*(float *)&gen_args[1]) * (float10)*(double *)&REFG(undefined, 0x1088100) + (float10)REFG(double, 0x1088108))),0xd));
  iVar1 = (int)dVar3;
  if (0xfe < iVar1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8b) = 0xff;
    return 0xff;
  }
  if (0 < iVar1) {
    (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) = (byte)iVar1;
    *(byte *)((*(int *)&gen_args[0]) + 0x8b) = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
    return (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x8b) = 0;
  return 0xf4;
}

/* ref: FUN_0060b730 */
uint F_0060b730(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x60b730u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  double dVar3;
  
  (*(undefined4 *)(gen_frame + 0x8)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  dVar3 = (GEN_X87MATH(((double)(float)((float10)(*(float *)&gen_args[1]) * (float10)*(double *)&REFG(undefined, 0x1088100) + (float10)REFG(double, 0x1088108))),0xd));
  uVar1 = (uint)dVar3;
  if (0xfe < (int)uVar1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = 0xff;
    return CONCAT31((int3)(uVar1 >> 8),0xff);
  }
  if (0 < (int)uVar1) {
    (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0)) = (undefined1)uVar1;
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = (*(undefined1 *)((char *)&(*(float *)&gen_args[1]) + 0));
    return uVar1;
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x8c) = 0;
  return (uint)&(*(undefined4 *)(gen_frame + 0x4));
}

/* ref: FUN_0060b7c0 */
uint F_0060b7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60b7c0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  double dVar7;
  float * pfVar8;
  float * pfVar9;
  
  uVar5 = (*(uint *)&gen_args[1]);
  fVar1 = *(float *)((*(uint *)&gen_args[1]) + 8);
  pfVar8 = (float *)((*(uint *)&gen_args[1]) + 8);
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x0)) = 0.0;
  (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
  if (!(REFG(float, 0x1087f04) < fVar1)) {
    pfVar8 = &(*(float *)(gen_frame + 0x8));
  }
  pfVar9 = (float *)(*(uint *)&gen_args[1]);
  if (!((float10)*(float *)((*(uint *)&gen_args[1]) + 4) < (float10)*(float *)(*(uint *)&gen_args[1]))) {
    pfVar9 = (float *)((*(uint *)&gen_args[1]) + 4);
  }
  if (!((float10)*pfVar8 < (float10)*pfVar9)) {
    pfVar9 = pfVar8;
  }
  dVar7 = (GEN_X87MATH(((double)*pfVar9),0xe));
  uVar4 = (uint)dVar7;
  (*(uint *)&gen_args[1]) = uVar4;
  if ((int)uVar4 < 0xff) {
    pfVar8 = (float *)&(*(uint *)&gen_args[1]);
    if ((int)uVar4 < 1) {
      pfVar8 = &(*(float *)(gen_frame + 0x0));
    }
  }
  else {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  bVar3 = *(byte *)pfVar8;
  *(byte *)((*(int *)&gen_args[0]) + 0x8d) = bVar3;
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  fVar1 = (float)((float10)*(double *)&REFG(undefined, 0x1088100) / (float10)bVar3);
  (*(uint *)&gen_args[1]) = (uint)gen_fl2bits(fVar1);
  fVar2 = (float)((float10)*(float *)uVar5 * (float10)fVar1 + (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x0)) = fVar2;
  dVar7 = (GEN_X87MATH(((double)fVar2),0xd));
  (*(float *)(gen_frame + 0x0)) = (float)dVar7;
  fVar2 = gen_bits2f((int)dVar7);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  if ((int)gen_fl2bits(fVar2) < 0xff) {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
    if ((int)gen_fl2bits(fVar2) < 1) {
      pfVar8 = &(*(float *)(gen_frame + 0x8));
    }
  }
  else {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x90) = *(undefined1 *)pfVar8;
  fVar2 = *(float *)(uVar5 + 4);
  (*(float *)(gen_frame + 0x4)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x8)) = 0.0;
  fVar2 = (float)((float10)fVar2 * (float10)fVar1 + (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x0)) = fVar2;
  dVar7 = (GEN_X87MATH(((double)fVar2),0xd));
  (*(float *)(gen_frame + 0x0)) = (float)dVar7;
  fVar2 = gen_bits2f((int)dVar7);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  if ((int)gen_fl2bits(fVar2) < 0xff) {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
    if ((int)gen_fl2bits(fVar2) < 1) {
      pfVar8 = &(*(float *)(gen_frame + 0x8));
    }
  }
  else {
    pfVar8 = &(*(float *)(gen_frame + 0x4));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x91) = *(undefined1 *)pfVar8;
  fVar2 = *(float *)(uVar5 + 8);
  (*(float *)(gen_frame + 0x0)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  dVar7 = (GEN_X87MATH(((double)(float)((float10)fVar1 * (float10)fVar2 + (float10)REFG(double, 0x1088108))),0xd));
  uVar4 = (uint)dVar7;
  (*(uint *)&gen_args[1]) = uVar4;
  if ((int)uVar4 < 0xff) {
    pfVar8 = (float *)&(*(uint *)&gen_args[1]);
    if ((int)uVar4 < 1) {
      pfVar8 = &(*(float *)(gen_frame + 0x4));
    }
  }
  else {
    pfVar8 = &(*(float *)(gen_frame + 0x0));
  }
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x92) = *(undefined1 *)pfVar8;
  fVar1 = *(float *)(uVar5 + 0xc);
  (*(float *)(gen_frame + 0x0)) = 3.57331e-43;
  (*(float *)(gen_frame + 0x4)) = 0.0;
  dVar7 = (GEN_X87MATH(((double)(float)((float10)fVar1 * (float10)*(double *)&REFG(undefined, 0x1088100) + (float10)REFG(double, 0x1088108))),0xd));
  uVar5 = (uint)dVar7;
  if (0xfe < (int)uVar5) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = 0xff;
    return uVar5;
  }
  if ((int)uVar5 < 1) {
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = 0;
    return (uint)&(*(float *)(gen_frame + 0x4));
  }
  (*(undefined1 *)((char *)&(*(uint *)&gen_args[1]) + 0)) = (undefined1)uVar5;
  *(undefined1 *)((*(int *)&gen_args[0]) + 0x93) = (undefined1)(*(uint *)&gen_args[1]);
  return uVar5;
}

/* ref: FUN_0060bab0 */
uint F_0060bab0(unsigned int gen_a0)
{
  GEN_ENTER(0x60bab0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060baf0 */
uint F_0060baf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60baf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006011a0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb10 */
uint F_0060bb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601220(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb30 */
uint F_0060bb30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006012a0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb60 */
uint F_0060bb60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006022d0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bb90 */
uint F_0060bb90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bb90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00602450(this);
  return (uint)param_1;
}

/* ref: FUN_0060bbb0 */
uint F_0060bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bbb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00602540(this);
  return (uint)param_1;
}

/* ref: FUN_0060bbd0 */
uint F_0060bbd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bbd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00601850(this);
  return (uint)param_1;
}

/* ref: FUN_0060bc00 */
uint F_0060bc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60bc00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_006019b0(this);
  return (uint)param_1;
}

/* ref: FUN_0060bc20 */
uint F_0060bc20(unsigned int gen_a0)
{
  GEN_ENTER(0x60bc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0060bc80 */
byte F_0060bc80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bca0 */
byte F_0060bca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bcc0 */
byte F_0060bcc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bcc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bce0 */
byte F_0060bce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bd00 */
byte F_0060bd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060bd20 */
uint F_0060bd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060bd80 */
uint F_0060bd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bd80u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060bde0 */
uint F_0060bde0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bde0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060be40 */
uint F_0060be40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60be40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060bea0 */
uint F_0060bea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x25) == '\0') {
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

/* ref: FUN_0060bf00 */
uint F_0060bf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x25))) == '\0') {
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

/* ref: FUN_0060bf60 */
uint F_0060bf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bf60u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060bfc0 */
uint F_0060bfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60bfc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c020 */
uint F_0060c020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c020u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c080 */
uint F_0060c080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c080u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c0e0 */
uint F_0060c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c0e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c140 */
uint F_0060c140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c140u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c1a0 */
uint F_0060c1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x19) == '\0') {
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

/* ref: FUN_0060c200 */
uint F_0060c200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x19))) == '\0') {
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

/* ref: FUN_0060c260 */
uint F_0060c260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c260u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c2c0 */
uint F_0060c2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60c2c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060c320 */
uint F_0060c320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c350 */
uint F_0060c350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_0060c370 */
uint F_0060c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c390 */
uint F_0060c390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3b0 */
uint F_0060c3b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3d0 */
uint F_0060c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c3f0 */
uint F_0060c3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c410 */
uint F_0060c410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c430 */
uint F_0060c430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60c430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060c450 */
uint F_0060c450(unsigned int gen_a0)
{
  GEN_ENTER(0x60c450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x48,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x18);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x18) {
        *(byte *)(puVar3 + 2) = *(byte *)(puVar3 + 2) | 7;
        puVar3[3] = puVar3[3] & 0xfffffffd | 1;
        *(byte *)((int)puVar3 + 0x11) = *(byte *)((int)puVar3 + 0x11) & 0xf8 | 8;
        puVar3[-4] = 0;
        *puVar3 = 0;
        puVar3[1] = 0xffffffff;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(undefined1 *)((int)puVar3 + 0x12) = 0xff;
        *(byte *)((int)puVar3 + 0x13) = *(byte *)((int)puVar3 + 0x13) & 0xfa | 0x7a;
        puVar3[-2] = 0;
        puVar3[-1] = 0;
        puVar3[-6] = (*(undefined * PTR32 (*)[68])REFP(0x10a45b4));
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
        puVar3[9] = 0;
        puVar3[10] = 0;
        puVar3[0xb] = 0xffffffff;
      }
      puVar3 = puVar3 + 0x12;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c530 */
uint F_0060c530(unsigned int gen_a0)
{
  GEN_ENTER(0x60c530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd1f0(this);
      *this = (*(undefined * PTR32 (*)[74])REFP(0x10a3db4));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c5b0 */
uint F_0060c5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c5b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd1f0(this);
      *this = (*(undefined * PTR32 (*)[74])REFP(0x10a3ee4));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c630 */
uint F_0060c630(unsigned int gen_a0)
{
  GEN_ENTER(0x60c630u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  int * piVar3;
  uint uVar4;
  undefined4 * puVar5;
  int local_8;
  
  piVar3 = (int *)F_00404310();
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xa0,0x10)));
  if (piVar3 == (int *)0x0) {
    F_00510db0();
    piVar3 = (int *)F_00404310();
    piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_1 * 0xa0,0x10)));
    if (piVar3 == (int *)0x0) {
      return 0;
    }
  }
  uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1090708)));
  if (param_1 != 0) {
    local_8 = param_1;
    puVar5 = (undefined4 *)(uVar4 + 0x68);
    do {
      if (puVar5 != (undefined4 *)0x68) {
        *(byte *)(puVar5 + -0x12) = *(byte *)(puVar5 + -0x12) | 7;
        puVar5[-0x11] = puVar5[-0x11] & 0xfffffffd | 1;
        *(byte *)((int)puVar5 + -0x3f) = *(byte *)((int)puVar5 + -0x3f) & 0xf8 | 8;
        puVar5[-0x18] = 0;
        puVar5[-0x14] = 0;
        puVar5[-0x13] = 0xffffffff;
        *(undefined1 *)(puVar5 + -0x10) = 0;
        *(undefined1 *)((int)puVar5 + -0x3e) = 0xff;
        puVar5[-0x16] = 0;
        puVar5[-0x15] = 0;
        puVar5[-0x1a] = (*(undefined * PTR32 (*)[68])REFP(0x10a46cc));
        puVar5[-0xe] = 0;
        *(byte *)((int)puVar5 + -0x3d) = *(byte *)((int)puVar5 + -0x3d) & 0xfa | 0x7a;
        puVar5[-10] = GEN_FLT_TO(puVar5[-10], REFG(float, 0x1302df0));
        puVar5[-9] = GEN_FLT_TO(puVar5[-9], REFG(float, 0x1302df4));
        puVar5[-8] = GEN_FLT_TO(puVar5[-8], REFG(float, 0x1302df8));
        puVar5[-6] = REFG(undefined4, 0x1302e00);
        puVar5[-5] = REFG(undefined4, 0x1302e04);
        puVar5[-4] = REFG(undefined4, 0x1302e08);
        puVar5[-3] = REFG(undefined4, 0x1302e0c);
        puVar5[-2] = GEN_FLT_TO(puVar5[-2], REFG(float, 0x1302e10));
        puVar5[-1] = GEN_FLT_TO(puVar5[-1], REFG(float, 0x1302e14));
        *puVar5 = GEN_FLT_TO(*puVar5, REFG(float, 0x1302e18));
        puVar5[2] = 0;
        *(undefined2 *)(puVar5 + 3) = 0;
        *(undefined2 *)((int)puVar5 + 0xe) = 0;
        *(undefined2 *)(puVar5 + 4) = 0;
        *(undefined2 *)((int)puVar5 + 0x12) = 0;
        puVar5[5] = 0;
        puVar5[6] = 0;
        puVar5[7] = uVar1;
        uVar2 = REFG(undefined4, 0x1302e24);
        *(byte *)(puVar5 + 9) = *(byte *)(puVar5 + 9) & 0xf0;
        puVar5[8] = uVar2;
        puVar5[10] = puVar5[10] & 0xfffffe00;
        *(undefined2 *)((int)puVar5 + 0x26) = 0xffff;
      }
      puVar5 = puVar5 + 0x28;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar3;
}

/* ref: FUN_0060c7d0 */
uint F_0060c7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4134));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c850 */
uint F_0060c850(unsigned int gen_a0)
{
  GEN_ENTER(0x60c850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4374));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c8d0 */
uint F_0060c8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c8d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4254));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c950 */
uint F_0060c950(unsigned int gen_a0)
{
  GEN_ENTER(0x60c950u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dd660(this);
      *this = (*(undefined * PTR32 (*)[70])REFP(0x10a4494));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060c9d0 */
uint F_0060c9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x60c9d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    uVar4 = 0;
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a48fc));
        puVar3[-1] = 1;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        puVar3[4] = uVar4;
      }
      puVar3 = puVar3 + 0x28;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ca80 */
uint F_0060ca80(unsigned int gen_a0)
{
  GEN_ENTER(0x60ca80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dea10(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a4a14));
    }
    this = this + 0x24;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cb00 */
uint F_0060cb00(unsigned int gen_a0)
{
  GEN_ENTER(0x60cb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  int local_8;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0xa0,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    local_8 = param_1;
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        *(byte *)((int)puVar3 + 0x12) = *(byte *)((int)puVar3 + 0x12) & 0xfe;
        puVar3[5] = puVar3[5] & 0xffff8000;
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a4b2c));
        puVar3[-1] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *(undefined2 *)(puVar3 + 4) = 0;
      }
      puVar3 = puVar3 + 0x28;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cbc0 */
uint F_0060cbc0(unsigned int gen_a0)
{
  GEN_ENTER(0x60cbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a4f8c));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cc40 */
uint F_0060cc40(unsigned int gen_a0)
{
  GEN_ENTER(0x60cc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005dea10(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a4c44));
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ccc0 */
uint F_0060ccc0(unsigned int gen_a0)
{
  GEN_ENTER(0x60ccc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a31b4));
      this[0x1c] = 0;
      F_00994550(this + 0x1d,this);
    }
    this = this + 0x24;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cd50 */
uint F_0060cd50(unsigned int gen_a0)
{
  GEN_ENTER(0x60cd50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    puVar3 = (undefined4 *)(uVar2 + 0x84);
    do {
      if (puVar3 != (undefined4 *)0x84) {
        F_005dea10(puVar3 + -0x21);
        puVar3[-0x21] = (*(undefined * PTR32 (*)[69])REFP(0x10a4d5c));
        puVar3[-1] = 0;
        *puVar3 = 0xffffffff;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 2) = 0;
      }
      puVar3 = puVar3 + 0x24;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ce00 */
uint F_0060ce00(unsigned int gen_a0)
{
  GEN_ENTER(0x60ce00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a50a4));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060ce80 */
uint F_0060ce80(unsigned int gen_a0)
{
  GEN_ENTER(0x60ce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  byte * pbVar3;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x90,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  if (param_1 != 0) {
    pbVar3 = (byte *)(uVar2 + 0x74);
    do {
      if (pbVar3 != &REFG(undefined, 0x74)) {
        F_005df720(pbVar3 + -0x74);
        *pbVar3 = *pbVar3 & 0xfe;
        *(uint *)(pbVar3 + 4) = *(uint *)(pbVar3 + 4) & 0xfffffff0;
        *(uint *)(pbVar3 + 0xc) = *(uint *)(pbVar3 + 0xc) & 0xfffff800;
        *(undefined * PTR32 * PTR32 *)(pbVar3 + -0x74) =
             (*(undefined * PTR32 (*)[68])REFP(0x10a51bc));
        pbVar3[-0xffffffff00000004] = 0;
        pbVar3[-0xffffffff00000003] = 0;
        pbVar3[-0xffffffff00000002] = 0;
        pbVar3[-0xffffffff00000001] = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
      }
      pbVar3 = pbVar3 + 0x90;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cf30 */
uint F_0060cf30(unsigned int gen_a0)
{
  GEN_ENTER(0x60cf30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a52d4));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060cfb0 */
uint F_0060cfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x60cfb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 << 7,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005df720(this);
      *this = (*(undefined * PTR32 (*)[68])REFP(0x10a53ec));
      this[0x1c] = 0;
    }
    this = this + 0x20;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d030 */
uint F_0060d030(unsigned int gen_a0)
{
  GEN_ENTER(0x60d030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005e10e0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a5624));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d0b0 */
uint F_0060d0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60d0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  undefined4 * this;
  int iVar2;
  
  piVar1 = (int *)F_00404310();
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
  if (piVar1 == (int *)0x0) {
    F_00510db0();
    piVar1 = (int *)F_00404310();
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,param_1 * 0x70,0x10)));
    if (piVar1 == (int *)0x0) {
      return 0;
    }
  }
  this = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
  for (iVar2 = param_1; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (this != (undefined4 *)0x0) {
      F_005e10e0(this);
      *this = (*(undefined * PTR32 (*)[69])REFP(0x10a573c));
    }
    this = this + 0x1c;
  }
  return (uint)piVar1;
}

/* ref: FUN_0060d130 */
uint F_0060d130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d130u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d150 */
uint F_0060d150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d150u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d1b0 */
byte F_0060d1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60d1b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  undefined * pvVar1;
  float * pfVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  float local_30;
  float local_2c;
  
  pvVar1 = (undefined *)F_00a1b710();
  puVar5 = &REFG(undefined4, 0x14a9a1c);
  do {
    this = (undefined *)*puVar5;
    if ((this != (undefined *)0x0) && ((pvVar1 == this || (*(int *)((int)this + 0x11c) == 0)))) {
      pfVar2 = (float *)F_00a5feb0(this);
      uVar4 = 0;
      while( true ) {
        if (uVar4 == 3) {
          local_30 = *(float *)(param_1 + 0x30);
          local_2c = *(float *)(param_1 + 0x34);
          fVar8 = *(float *)(param_1 + 0x38);
        }
        else {
          local_30 = *(float *)(uVar4 * 0x10 + param_1);
          iVar3 = uVar4 * 0x10 + param_1;
          local_2c = *(float *)(iVar3 + 4);
          fVar8 = *(float *)(iVar3 + 8);
        }
        fVar6 = (float10)((float)GEN_TOF(((float10)fVar8 *
                                 (float10)((float)GEN_TOF(((float10)pfVar2[2] -
                                                 (float10)*(float *)(param_1 + 0x38)))) +
                                ((float10)local_2c *
                                 (float10)((float)GEN_TOF(((float10)(float)((float10)pfVar2[1] +
                                                                  (float10)REFG(double, 0x1088130)) -
                                                 (float10)*(float *)(param_1 + 0x34)))) +
                                (float10)local_30 *
                                (float10)((float)GEN_TOF(((float10)*pfVar2 -
                                                (float10)*(float *)(param_1 + 0x30))))))));
        fVar7 = (float10)*(float *)(param_1 + 0x40 + uVar4 * 4);
        if (((!GEN_ISNAN(-fVar7) && !GEN_ISNAN(fVar6)) && !(-fVar7 <= fVar6)) ||
           ((!GEN_ISNAN(fVar6) && !GEN_ISNAN(fVar7)) && !(fVar6 <= fVar7))) break;
        uVar4 = uVar4 + 1;
        if (2 < uVar4) {
          return 1;
        }
      }
    }
    puVar5 = puVar5 + 1;
  } while ((int)puVar5 < 0x14a9bac);
  return 0;
}

/* ref: FUN_0060d300 */
byte F_0060d300(unsigned int gen_a0)
{
  GEN_ENTER(0x60d300u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined * this;
  undefined * pvVar1;
  float * pfVar2;
  undefined4 * puVar3;
  float10 fVar4;
  float10 fVar5;
  
  pvVar1 = (undefined *)F_00a1b710();
  puVar3 = &REFG(undefined4, 0x14a9a1c);
  do {
    this = (undefined *)*puVar3;
    if ((this != (undefined *)0x0) && ((pvVar1 == this || (*(int *)((int)this + 0x11c) == 0)))) {
      pfVar2 = (float *)F_00a5feb0(this);
      fVar4 = (float10)((float)GEN_TOF(((float10)param_1[1] -
                              (float10)(float)((float10)pfVar2[1] + (float10)REFG(double, 0x1088130)))));
      fVar4 = (float10)((float)GEN_TOF(((float10)(float)((float10)param_1[2] - (float10)pfVar2[2]) *
                               (float10)(float)((float10)param_1[2] - (float10)pfVar2[2]) +
                              (fVar4 * fVar4 +
                              (float10)(float)((float10)*param_1 - (float10)*pfVar2) *
                              (float10)(float)((float10)*param_1 - (float10)*pfVar2)))));
      fVar5 = (float10)param_1[3] * (float10)param_1[3];
      if ((!GEN_ISNAN(fVar5) && !GEN_ISNAN(fVar4)) && !(fVar5 < fVar4)) {
        return 1;
      }
    }
    puVar3 = puVar3 + 1;
  } while ((int)puVar3 < 0x14a9bac);
  return 0;
}

/* ref: FUN_0060d3e0 */
byte F_0060d3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x60d3e0u, gen_a0, 0u, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * this;
  undefined * pvVar2;
  float * pfVar3;
  undefined4 * puVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  pvVar2 = (undefined *)F_00a1b710();
  puVar4 = &REFG(undefined4, 0x14a9a1c);
  do {
    this = (undefined *)*puVar4;
    if ((this != (undefined *)0x0) && ((pvVar2 == this || (*(int *)((int)this + 0x11c) == 0)))) {
      pfVar3 = (float *)F_00a5feb0(this);
      fVar1 = (float)((float10)pfVar3[2] - (float10)param_1[2]);
      fVar5 = (float10)((float)GEN_TOF(((float10)(float)((float10)pfVar3[1] + (float10)REFG(double, 0x1088130)) -
                              (float10)param_1[1])));
      fVar6 = (float10)(float)((float10)param_1[5] - (float10)param_1[1]);
      fVar7 = (float10)(float)((float10)*pfVar3 - (float10)*param_1);
      fVar8 = (float10)(float)((float10)param_1[4] - (float10)*param_1);
      fVar9 = (float10)(float)((float10)param_1[6] - (float10)param_1[2]);
      fVar10 = (float10)((float)GEN_TOF(((fVar6 * fVar5 + fVar8 * fVar7) + fVar9 * (float10)fVar1)));
      if ((!(fVar10 < (float10)0)) &&
         ((fVar6 = (float10)((float)GEN_TOF(((fVar8 * fVar8 + fVar6 * fVar6) + fVar9 * fVar9))),
          !(fVar6 < fVar10) &&
          (fVar8 = (float10)fVar1,
          (float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar5 * fVar5)))) -
          (fVar10 * fVar10) / fVar6 < (float10)param_1[3] * (float10)param_1[3])))) {
        return 1;
      }
    }
    puVar4 = puVar4 + 1;
    if (0x14a9bab < (int)puVar4) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_0060d570 */
uint F_0060d570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d570u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d590 */
uint F_0060d590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d5b0 */
uint F_0060d5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d5b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060d5f0 */
uint F_0060d5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d5f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d610 */
uint F_0060d610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d630 */
uint F_0060d630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d670 */
uint F_0060d670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d690 */
uint F_0060d690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d6b0 */
uint F_0060d6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d6d0 */
uint F_0060d6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d6f0 */
uint F_0060d6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d6f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0060d730 */
uint F_0060d730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d750 */
uint F_0060d750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d770 */
uint F_0060d770(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d770u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0060d7b0 */
uint F_0060d7b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d7b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d7d0 */
uint F_0060d7d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060d810 */
uint F_0060d810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return (uint)param_2;
}

/* ref: FUN_0060d850 */
uint F_0060d850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60d850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0060d890 */
uint F_0060d890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d890u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0060d8d0 */
uint F_0060d8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d8d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0060d940 */
uint F_0060d940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60d940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_0060d980 */
uint F_0060d980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d980u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0060d9e0 */
uint F_0060d9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60d9e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060da10 */
uint F_0060da10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60da10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_0060da60 */
uint F_0060da60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x60da60u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00429760(param_4,0x14,900);
                    
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
LAB_0060dc5d: ;
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
        goto LAB_0060dc5d;
      }
      *(undefined1 *)(piVar5 + 4) = 1;
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x10))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x10);
  } while( true );
}

/* ref: FUN_0060dc90 */
uint F_0060dc90(unsigned int gen_a0)
{
  GEN_ENTER(0x60dc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605640(this);
  return (uint)this;
}

/* ref: FUN_0060dca0 */
uint F_0060dca0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006056a0(this);
  return (uint)this;
}

/* ref: FUN_0060dcb0 */
uint F_0060dcb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60dcb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060dcd0 */
uint F_0060dcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dcd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605730(this);
  return (uint)this;
}

/* ref: FUN_0060dd20 */
uint F_0060dd20(unsigned int gen_a0)
{
  GEN_ENTER(0x60dd20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006057d0(this);
  return (uint)this;
}

/* ref: FUN_0060ddb0 */
uint F_0060ddb0(unsigned int gen_a0)
{
  GEN_ENTER(0x60ddb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006058b0(this);
  return (uint)this;
}

/* ref: FUN_0060ddc0 */
uint F_0060ddc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ddc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060dde0 */
uint F_0060dde0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605910(this);
  return (uint)this;
}

/* ref: FUN_0060ddf0 */
uint F_0060ddf0(unsigned int gen_a0)
{
  GEN_ENTER(0x60ddf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605970(this);
  return (uint)this;
}

/* ref: FUN_0060de00 */
uint F_0060de00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60de00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060de30 */
uint F_0060de30(unsigned int gen_a0)
{
  GEN_ENTER(0x60de30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006059e0(this);
  return (uint)this;
}

/* ref: FUN_0060de50 */
uint F_0060de50(unsigned int gen_a0)
{
  GEN_ENTER(0x60de50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605a50(this);
  return (uint)this;
}

/* ref: FUN_0060de60 */
uint F_0060de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60de60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060de80 */
uint F_0060de80(unsigned int gen_a0)
{
  GEN_ENTER(0x60de80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605ab0(this);
  return (uint)this;
}

/* ref: FUN_0060de90 */
uint F_0060de90(unsigned int gen_a0)
{
  GEN_ENTER(0x60de90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605b10(this);
  return (uint)this;
}

/* ref: FUN_0060dea0 */
uint F_0060dea0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605b70(this);
  return (uint)this;
}

/* ref: FUN_0060deb0 */
uint F_0060deb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60deb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060ded0 */
uint F_0060ded0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60ded0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060def0 */
uint F_0060def0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60def0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060df10 */
uint F_0060df10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60df10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060df30 */
uint F_0060df30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60df30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060df50 */
uint F_0060df50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60df50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060df70 */
uint F_0060df70(unsigned int gen_a0)
{
  GEN_ENTER(0x60df70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605bd0(this);
  return (uint)this;
}

/* ref: FUN_0060df80 */
uint F_0060df80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60df80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060dfa0 */
uint F_0060dfa0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605c30(this);
  return (uint)this;
}

/* ref: FUN_0060dfb0 */
uint F_0060dfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60dfb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060dfd0 */
uint F_0060dfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60dfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060dff0 */
uint F_0060dff0(unsigned int gen_a0)
{
  GEN_ENTER(0x60dff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605cb0(this);
  return (uint)this;
}

/* ref: FUN_0060e000 */
uint F_0060e000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e020 */
uint F_0060e020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e040 */
uint F_0060e040(unsigned int gen_a0)
{
  GEN_ENTER(0x60e040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00605d10(this);
  return (uint)this;
}

/* ref: FUN_0060e050 */
uint F_0060e050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e070 */
uint F_0060e070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,900);
  *puVar1 = *(undefined4 *)((int)this + 4);
  puVar1[1] = *(undefined4 *)((int)this + 4);
  puVar1[2] = *(undefined4 *)((int)this + 4);
  *(undefined2 *)(puVar1 + 4) = 0;
  if (puVar1 + 3 != (undefined4 *)0x0) {
    puVar1[3] = *param_1;
  }
  return (uint)puVar1;
}

/* ref: FUN_0060e0c0 */
uint F_0060e0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e0c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = *param_1;
  F_005da450((undefined *)((int)this + 0x10),param_2);
  return (uint)this;
}

/* ref: FUN_0060e0e0 */
unsigned int F_0060e0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x60e0e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_0060e170 */
unsigned int F_0060e170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 3) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1 = puVar1 + 3;
  }
  return 0;
}

/* ref: FUN_0060e1a0 */
uint F_0060e1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e1c0 */
uint F_0060e1c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e1c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e1e0 */
uint F_0060e1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e200 */
uint F_0060e200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e220 */
uint F_0060e220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e240 */
uint F_0060e240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e260 */
uint F_0060e260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e280 */
uint F_0060e280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e2a0 */
uint F_0060e2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e2a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e2c0 */
uint F_0060e2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e2e0 */
uint F_0060e2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e2e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e300 */
uint F_0060e300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e320 */
uint F_0060e320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e340 */
uint F_0060e340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e340u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e360 */
uint F_0060e360(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e360u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e380 */
uint F_0060e380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e3a0 */
uint F_0060e3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x60e3a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0060e3c0 */
uint F_0060e3c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e3c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e3e0 */
uint F_0060e3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060e400 */
byte F_0060e400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0060e430 */
uint F_0060e430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0060e450 */
uint F_0060e450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0060e470 */
uint F_0060e470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0060e490 */
uint F_0060e490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0060e4b0 */
uint F_0060e4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e4b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 2);
  return (uint)this;
}

/* ref: FUN_0060e4d0 */
uint F_0060e4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e4d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0060e4f0 */
uint F_0060e4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0060e510 */
uint F_0060e510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0060e530 */
uint F_0060e530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_0060e550 */
uint F_0060e550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0060e570 */
uint F_0060e570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_0060e590 */
uint F_0060e590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0060e5b0 */
uint F_0060e5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  F_005da450((undefined *)((int)this + 0x10),param_1 + 4);
  return (uint)this;
}

/* ref: FUN_0060e5d0 */
unsigned int F_0060e5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e5d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0060e600 */
uint F_0060e600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)in_ecx;
}

/* ref: FUN_0060e620 */
uint F_0060e620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060e650 */
uint F_0060e650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060e680 */
uint F_0060e680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060e6b0 */
uint F_0060e6b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_0060e6e0 */
uint F_0060e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Client::LayoutEngine::IManagerBase::vf0 */
uint F_0060e700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0060e740 */
uint F_0060e740(unsigned int gen_a0)
{
  GEN_ENTER(0x60e740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x38) != -1) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)((int)this + 0x11));
    uVar1 = F_00a1b870(local_8,*(int *)((int)this + 0x38));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_0060e770 */
uint F_0060e770(unsigned int gen_a0)
{
  GEN_ENTER(0x60e770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 local_8;
  
  if (*(int *)((int)this + 0x38) != -1) {
    local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),*(undefined1 *)((int)this + 0x11));
    uVar1 = F_00a1b870(local_8,*(int *)((int)this + 0x38));
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x7c) == 0)) {
      return *(uint *)(uVar1 + 0xf0);
    }
  }
  return 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf10 */
byte F_0060e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60e7b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_005d9c60(this);
  return bVar1 == 0;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf29 */
uint F_0060e7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60e7c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x38) == 0) && (*(int *)(in_ecx + 0x3c) == 0)) {
    return 0;
  }
  return 1;
}

/* ref: Client::LayoutEngine::Layer::BgPartsLayoutInstance::vf43 */
uint F_0060e7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_005dde30(this,param_1);
  return uVar1;
}

/* ref: FUN_0060e7f0 */
uint F_0060e7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e7f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(in_ecx + 0x30) != 0) {
    uVar1 = *((uint *)GEN_TOP((*(int *)(in_ecx + 0x30) + 0x70)));
    *(undefined4 *)(uVar1 + 0x30) = *param_2;
    *(undefined4 *)(uVar1 + 0x34) = param_2[1];
    *(undefined4 *)(uVar1 + 0x38) = param_2[2];
    *(undefined4 *)(uVar1 + 0x40) = param_2[4];
    *(undefined4 *)(uVar1 + 0x44) = param_2[5];
    *(undefined4 *)(uVar1 + 0x48) = param_2[6];
  }
  return uVar1;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf44 */
uint F_0060e830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar1 = param_1[3];
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar2 = (float)((float10)*param_1 * (float10)*param_1);
  (*(float *)(gen_frame + 0x1c)) = fVar2;
  fVar3 = (float)((float10)param_1[1] * (float10)param_1[1]);
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar4 = param_1[2];
  (*(float *)(gen_frame + 0xc)) = fVar2;
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar2 = (float)((float10)fVar4 * (float10)fVar4);
  (*(float *)(gen_frame + 0x24)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar2;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  uVar5 = F_005de250(this,&(*(float *)(gen_frame + 0xc)));
  return uVar5;
}

/* ref: Client::LayoutEngine::Layer::VfxLayoutInstance::vf10 */
uint F_0060e890(unsigned int gen_a0)
{
  GEN_ENTER(0x60e890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint3 extraout_var = 0;
  
  bVar1 = F_005d9c60(this);
  if (bVar1 != 0) {
    return (uint)extraout_var << 8;
  }
  return ~(uint)((byte)this[0x8c] >> 1) & 1;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf10 */
byte F_0060e8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x60e8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_005d9c60(this);
  return bVar1 == 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf10 */
byte F_0060e8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x60e8c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_005d9c60(this);
  return bVar1 == 0;
}

/* ref: FUN_0060e8d0 */
unsigned int F_0060e8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x60e8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(int *)((int)this + 0x30) = param_1;
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

/* ref: Client::LayoutEngine::Terrain::TerrainManager::vf0 */
uint F_0060e920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10a3974));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0060e950 */
uint F_0060e950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e970 */
uint F_0060e970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e980 */
uint F_0060e980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e9a0 */
uint F_0060e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e9a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e9b0 */
uint F_0060e9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e9b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e9c0 */
uint F_0060e9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e9c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e9d0 */
uint F_0060e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e9d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060e9f0 */
uint F_0060e9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60e9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ea10 */
uint F_0060ea10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ea10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ea20 */
uint F_0060ea20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ea20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ea30 */
uint F_0060ea30(unsigned int gen_a0)
{
  GEN_ENTER(0x60ea30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00609830(this);
  return (uint)this;
}

/* ref: FUN_0060ea70 */
uint F_0060ea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ea70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ea90 */
uint F_0060ea90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ea90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eaa0 */
uint F_0060eaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eac0 */
uint F_0060eac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eac0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ead0 */
uint F_0060ead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ead0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eae0 */
uint F_0060eae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eae0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eb00 */
uint F_0060eb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eb20 */
uint F_0060eb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eb30 */
uint F_0060eb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eb40 */
ushort F_0060eb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') | *(ushort *)((int)this + 8) & 0xfffe;
  *(ushort *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_0060eb80 */
uint F_0060eb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0060eb90 */
uint F_0060eb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eb90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eba0 */
ushort F_0060eba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') * 4 | *(ushort *)((int)this + 8) & 0xfffb;
  *(ushort *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_0060ebe0 */
ushort F_0060ebe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ebe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 3 | *(ushort *)((int)this + 8) & 0xfff7;
  *(ushort *)((int)this + 8) = uVar1;
  return uVar1;
}

/* ref: FUN_0060ec20 */
uint F_0060ec20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ec20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ec40 */
uint F_0060ec40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ec40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ec50 */
uint F_0060ec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ec50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ec70 */
uint F_0060ec70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ec70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ec90 */
uint F_0060ec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ec90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060eca0 */
uint F_0060eca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60eca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ecc0 */
uint F_0060ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0060ecd0 */
uint F_0060ecd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ecd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ece0 */
uint F_0060ece0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ece0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ed00 */
uint F_0060ed00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ed00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ed20 */
uint F_0060ed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ed20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ed30 */
uint F_0060ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ed30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ed70 */
uint F_0060ed70(unsigned int gen_a0)
{
  GEN_ENTER(0x60ed70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006011a0(this);
  return (uint)this;
}

/* ref: FUN_0060eda0 */
uint F_0060eda0(unsigned int gen_a0)
{
  GEN_ENTER(0x60eda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006012a0(this);
  return (uint)this;
}

/* ref: FUN_0060edc0 */
uint F_0060edc0(unsigned int gen_a0)
{
  GEN_ENTER(0x60edc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0060a620(this);
  return (uint)this;
}

/* ref: FUN_0060edf0 */
uint F_0060edf0(unsigned int gen_a0)
{
  GEN_ENTER(0x60edf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_006022d0(this);
  return (uint)this;
}

/* ref: FUN_0060ee00 */
uint F_0060ee00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ee00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ee20 */
uint F_0060ee20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ee20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060ee40 */
uint F_0060ee40(unsigned int gen_a0)
{
  GEN_ENTER(0x60ee40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0060a820(this);
  return (uint)this;
}

/* ref: FUN_0060ee70 */
uint F_0060ee70(unsigned int gen_a0)
{
  GEN_ENTER(0x60ee70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0060a820(this);
  return (uint)this;
}

/* ref: FUN_0060eed0 */
uint F_0060eed0(unsigned int gen_a0)
{
  GEN_ENTER(0x60eed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00602450(this);
  return (uint)this;
}

/* ref: FUN_0060ef10 */
byte F_0060ef10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ef10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0060ef30 */
uint F_0060ef30(unsigned int gen_a0)
{
  GEN_ENTER(0x60ef30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0060a9c0(this);
  return (uint)this;
}

/* ref: FUN_0060ef60 */
uint F_0060ef60(unsigned int gen_a0)
{
  GEN_ENTER(0x60ef60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0060a9c0(this);
  return (uint)this;
}

/* ref: FUN_0060ef90 */
byte F_0060ef90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60ef90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0060efd0 */
uint F_0060efd0(unsigned int gen_a0)
{
  GEN_ENTER(0x60efd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00601850(this);
  return (uint)this;
}

/* ref: FUN_0060efe0 */
uint F_0060efe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60efe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort * puVar1;
  ushort uVar2;
  
  uVar2 = 1 << ((byte)param_1 & 0xf);
  puVar1 = ((ushort *)GEN_TOP(((int)this + (param_1 >> 4) * 2)));
  if ((char)param_2 != '\0') {
    *puVar1 = *puVar1 | uVar2;
    return (uint)this;
  }
  *puVar1 = *puVar1 & ~uVar2;
  return (uint)this;
}

/* ref: FUN_0060f030 */
uint F_0060f030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f050 */
uint F_0060f050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f070 */
uint F_0060f070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f080 */
uint F_0060f080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f0e0 */
unsigned int F_0060f0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f0e0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_0060f120 */
uint F_0060f120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x21) == '\0') {
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

/* ref: FUN_0060f1a0 */
uint F_0060f1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f1a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0060f1e0 */
unsigned int F_0060f1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x11);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f1e0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x14,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x11);
  }
  return 0;
}

/* ref: FUN_0060f240 */
uint F_0060f240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x91) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((uint)puVar1[4] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x91) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0060f280 */
unsigned int F_0060f280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x91);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f280(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0xa0,0x385);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x91);
  }
  return 0;
}

/* ref: FUN_0060f2d0 */
uint F_0060f2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar2;
  if (*(char *)(*piVar2 + 0x91) == '\0') {
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

/* ref: FUN_0060f420 */
unsigned int F_0060f420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f420(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x385);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060f550 */
uint F_0060f550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f550u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_0060f590 */
uint F_0060f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_0060f5d0 */
unsigned int F_0060f5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f5d0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060f630 */
uint F_0060f630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f630u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0060f640 */
uint F_0060f640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f660 */
uint F_0060f660(unsigned int gen_a0)
{
  GEN_ENTER(0x60f660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,0x385);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_0060f6a0 */
uint F_0060f6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0060f6b0 */
uint F_0060f6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f6c0 */
unsigned int F_0060f6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f6c0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060f700 */
uint F_0060f700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060f780 */
uint F_0060f780(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f780u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_0060f7c0 */
unsigned int F_0060f7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f7c0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060f800 */
uint F_0060f800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f800u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0060f880 */
uint F_0060f880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0060f890 */
uint F_0060f890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_0060f8a0 */
uint F_0060f8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(byte *)(puVar1 + 3) < *param_2) {
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

/* ref: FUN_0060f8e0 */
unsigned int F_0060f8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f8e0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,0x385);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060f940 */
uint F_0060f940(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f940u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0060f980 */
uint F_0060f980(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60f980u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_0060f9c0 */
unsigned int F_0060f9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x60f9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_0060f9c0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,900);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_0060fa20 */
uint F_0060fa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60fa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_0060fa60 */
uint F_0060fa60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x60fa60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x19) == '\0') {
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
    } while (*(char *)((int)puVar2 + 0x19) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

