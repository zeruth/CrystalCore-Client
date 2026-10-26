#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00663230 */
byte F_00663230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663280 */
uint F_00663280(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00663380(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006633b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00663480(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006634c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6634c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_006634e0 */
uint F_006634e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6634e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00663500 */
uint F_00663500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00663520 */
uint F_00663520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663520u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663550 */
uint F_00663550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  *(undefined1 *)(in_ecx + 0x4d) = 1;
  return param_2;
}

/* ref: FUN_00663580 */
unsigned int F_00663580(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x663580u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return 0;
}

/* ref: FUN_006635b0 */
unsigned int F_006635b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6635b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x30) = param_2;
  return 0;
}

/* ref: FUN_006635e0 */
unsigned int F_006635e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6635e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x34) = param_2;
  return 0;
}

/* ref: FUN_00663600 */
byte F_00663600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663610 */
uint F_00663610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00663640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x68) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663660 */
uint F_00663660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)((*(uint *)((int)this + 0x6c) & 1 << ((byte)param_1 & 0x1f)) != 0);
}

/* ref: FUN_00663690 */
byte F_00663690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = F_0065f650(param_1,(int)this + 0x20);
  return bVar1 == 0;
}

/* ref: FUN_006636b0 */
byte F_006636b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6636b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x13) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_006636e0 */
uint F_006636e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
    *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = REFG(float, 0x1087f04);
    *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + param_1 * 4 + 0x2c) = 0;
  *((uint *)GEN_TOP((*(int *)((int)this + param_1 * 4 + 0x7c) + 0x140))) = uVar1;
  return uVar1;
}

/* ref: FUN_00663760 */
byte F_00663760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x11) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663770 */
byte F_00663770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x12) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00663780 */
uint F_00663780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10 + param_2 * 4);
}

/* ref: FUN_006637a0 */
uint F_006637a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6637a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x24 + param_2 * 4);
}

/* ref: FUN_00663890 */
uint F_00663890(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006638b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006638d0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006638f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6638f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0xcc + param_2 * 4);
}

/* ref: FUN_00663950 */
uint F_00663950(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_006639a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6639a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x1a0 + param_2 * 4);
}

/* ref: FUN_006639c0 */
uint F_006639c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6639c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52c10(this,*(undefined4 *)(param_1 + 0x98));
  return (uint)this;
}

/* ref: FUN_006639f0 */
uint F_006639f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6639f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  uVar1 = F_00b52cb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  return uVar1;
}

/* ref: Client::Graphics::Render::ScopedShaderKey::vf0 */
uint F_00663a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  F_00b52cb0(this);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00663b70 */
uint F_00663b70(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00663c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c10 */
uint F_00663c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663c20 */
uint F_00663c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00663c90 */
uint F_00663c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x663c90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00663d10 */
byte F_00663d10(void)
{
  GEN_ENTER(0x663d10u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00406b90(0x140,0,0);
  if (uVar1 != 0) {
    uVar1 = F_00b800e0(uVar1);
    REFG(undefined4, 0x1487c64) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c64) = 0;
  return 0;
}

/* ref: FUN_00663d80 */
byte F_00663d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00663f10(unsigned int gen_a0)
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
unsigned int F_00663f40(unsigned int gen_a0)
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
uint F_00663f70(unsigned int gen_a0)
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
uint F_00663fa0(unsigned int gen_a0)
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
uint F_00663fd0(unsigned int gen_a0)
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
uint F_00664000(unsigned int gen_a0)
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
uint F_00664050(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664080(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006640f0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664150(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006641c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006641f0 */
uint F_006641f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6641f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664240 */
uint F_00664240(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006642a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_006642d0 */
uint F_006642d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6642d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00664300 */
uint F_00664300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664300u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(bool *)param_2 = in_ecx[3] != *in_ecx;
  return param_2;
}

/* ref: FUN_00664360 */
byte F_00664360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x30) == param_2;
}

/* ref: FUN_00664410 */
uint F_00664410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_00664440 */
uint F_00664440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x50 + param_2 * 8;
}

/* ref: FUN_00664480 */
uint F_00664480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664480u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x80 + param_2 * 4);
}

/* ref: FUN_006644b0 */
byte F_006644b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664540 */
uint F_00664540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664540u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664560 */
uint F_00664560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664580 */
uint F_00664580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664590 */
uint F_00664590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664590u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_006645d0 */
uint F_006645d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6645d0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006645f0 */
uint F_006645f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6645f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_00664620 */
uint F_00664620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664620u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0xd3);
  return uVar1;
}

/* ref: FUN_00664660 */
uint F_00664660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,0xd2);
  return uVar1;
}

/* ref: FUN_006646a0 */
uint F_006646a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6646a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006646c0 */
uint F_006646c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6646c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664740 */
uint F_00664740(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006648c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6648c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  puVar1 = (uint *)((int)this + 0xc);
  LOCK();
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  if (*(uint *)((int)this + 8) <= uVar2) {
    return 0;
  }
  return *(int *)((int)this + 4) + uVar2 * 0x14;
}

/* ref: FUN_00664a70 */
uint F_00664a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664a70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -(uint)((char)param_2 != '\0');
  return (uint)in_ecx;
}

/* ref: FUN_00664aa0 */
uint F_00664aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00664ab0 */
byte F_00664ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00664ad0 */
uint F_00664ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664ad0u, gen_a0, gen_a1, 0u, 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = -((char)param_2 != '\0');
  return (uint)in_ecx;
}

/* ref: FUN_00664b00 */
uint F_00664b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664b00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00664b50 */
uint F_00664b50(unsigned int gen_a0)
{
  GEN_ENTER(0x664b50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b60 */
uint F_00664b60(unsigned int gen_a0)
{
  GEN_ENTER(0x664b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b70 */
uint F_00664b70(unsigned int gen_a0)
{
  GEN_ENTER(0x664b70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b80 */
uint F_00664b80(unsigned int gen_a0)
{
  GEN_ENTER(0x664b80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664b90 */
uint F_00664b90(unsigned int gen_a0)
{
  GEN_ENTER(0x664b90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664ba0 */
uint F_00664ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x664ba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664be0 */
uint F_00664be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664be0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(param_2 * 0xa0 + 0x100 + in_ecx);
}

/* ref: FUN_00664c00 */
uint F_00664c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664c00u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00664c20 */
uint F_00664c20(unsigned int gen_a0)
{
  GEN_ENTER(0x664c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00664c60 */
uint F_00664c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664c60u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00664c70 */
uint F_00664c70(unsigned int gen_a0, unsigned int gen_a1)
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
unsigned int F_00664c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00664cb0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664cd0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664cf0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00664d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664d90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,200);
  return uVar1;
}

/* ref: FUN_00664de0 */
uint F_00664de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x664de0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00664df0 */
uint F_00664df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x664df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00664e20 */
unsigned int F_00664e20(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00664ef0 */
unsigned int F_00664ef0(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 5;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0xb0;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 0x14);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00664fc0 */
unsigned int F_00664fc0(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x90;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00665090 */
unsigned int F_00665090(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0xb0 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 5;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar8 = (uVar7 & 0x1f) * 0xb0;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 0x14);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00665160 */
unsigned int F_00665160(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00665230 */
unsigned int F_00665230(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00665300 */
unsigned int F_00665300(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x50 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x50;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_006653d0 */
unsigned int F_006653d0(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x30 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x30;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 4);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_006654a0 */
unsigned int F_006654a0(unsigned int gen_a0)
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
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < iVar4 - 1U) {
    piVar6 = ((int *)GEN_TOP(((uVar7 & 0x1f) * 0x90 + *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c))))));
    iVar8 = *piVar6;
    if (iVar8 != 0) {
      piVar6 = piVar6 + 4;
      do {
        (*pcVar3)(uVar2,piVar6);
        piVar6 = piVar6 + 2;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    puVar1 = (uint *)((int)this + 0x60);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  uVar7 = *(int *)((int)this + 0x5c) - 1;
  iVar4 = *((int *)GEN_TOP(((int)this + (uVar7 >> 5) * 4 + 0x1c)));
  iVar8 = (uVar7 & 0x1f) * 0x90;
  uVar5 = *(uint *)(iVar4 + iVar8);
  puVar1 = (uint *)((int)this + 100);
  LOCK();
  uVar7 = *puVar1;
  *puVar1 = *puVar1 + 1;
  UNLOCK();
  while (uVar7 < uVar5) {
    (*pcVar3)(uVar2,iVar4 + iVar8 + 0x10 + uVar7 * 8);
    puVar1 = (uint *)((int)this + 100);
    LOCK();
    uVar7 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
  }
  return 0;
}

/* ref: FUN_00665590 */
unsigned int F_00665590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_006655c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655d0 */
uint F_006655d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655e0 */
uint F_006655e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006655f0 */
uint F_006655f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6655f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665600 */
uint F_00665600(unsigned int gen_a0)
{
  GEN_ENTER(0x665600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665610 */
uint F_00665610(unsigned int gen_a0)
{
  GEN_ENTER(0x665610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665620 */
uint F_00665620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00665650(unsigned int gen_a0)
{
  GEN_ENTER(0x665650u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665660 */
uint F_00665660(unsigned int gen_a0)
{
  GEN_ENTER(0x665660u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665670 */
uint F_00665670(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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

/* ref: FUN_006656e0 */
uint F_006656e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6656e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006656f0 */
uint F_006656f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00665710(unsigned int gen_a0)
{
  GEN_ENTER(0x665710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665720 */
uint F_00665720(unsigned int gen_a0)
{
  GEN_ENTER(0x665720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665750 */
byte F_00665750(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_006657c0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00665800(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665860(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006658d0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665900(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665970(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_006659e0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665a50(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665ac0(unsigned int gen_a0, unsigned int gen_a1)
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
byte F_00665b30(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00665ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665c40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665c80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
uint F_00665cc0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00665d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00665d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x665d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)this)(*(undefined4 *)((int)this + 4),(int)this + 8,param_1);
  return uVar1;
}

/* ref: FUN_00665d90 */
uint F_00665d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x665d90u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x20 + *in_ecx;
}

/* ref: FUN_00665ea0 */
uint F_00665ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x665ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00665f30 */
uint F_00665f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00665f50(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00665f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00665fb0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00665fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x665fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00665ff0 */
uint F_00665ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00666010(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666040(unsigned int gen_a0)
{
  GEN_ENTER(0x666040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: Singleton_VManager_Render_Graphics_Client_Graphics::vf0 */
uint F_00666050(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666080(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006660b0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_006660e0(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666110(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666130(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666150(unsigned int gen_a0)
{
  GEN_ENTER(0x666150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666170 */
unsigned int F_00666170(unsigned int gen_a0)
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
unsigned int F_006661a0(unsigned int gen_a0)
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
unsigned int F_006661d0(unsigned int gen_a0)
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
unsigned int F_00666200(unsigned int gen_a0)
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
uint F_00666230(unsigned int gen_a0, unsigned int gen_a1)
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
uint F_00666260(unsigned int gen_a0)
{
  GEN_ENTER(0x666260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666270 */
uint F_00666270(unsigned int gen_a0)
{
  GEN_ENTER(0x666270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006662b0 */
uint F_006662b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006662c0 */
uint F_006662c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_006662e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006662f0 */
uint F_006662f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6662f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666300 */
uint F_00666300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
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
uint F_00666320(unsigned int gen_a0)
{
  GEN_ENTER(0x666320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666370 */
uint F_00666370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
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
         (iVar3 = (iVar2 + -1) / 2,
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
uint F_006663e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6663e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006663f0 */
uint F_006663f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6663f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666400 */
uint F_00666400(unsigned int gen_a0)
{
  GEN_ENTER(0x666400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666410 */
uint F_00666410(unsigned int gen_a0)
{
  GEN_ENTER(0x666410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666450 */
uint F_00666450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,0xd8);
  return (uint)uVar1;
}

/* ref: FUN_00666480 */
uint F_00666480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_006664c0 */
uint F_006664c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6664c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666500 */
uint F_00666500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666550 */
uint F_00666550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666550u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_00666572 */
unsigned int F_00666572(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666572u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00666590 */
uint F_00666590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_006665c0 */
uint F_006665c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6665c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_00666600 */
uint F_00666600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: FUN_00666630 */
uint F_00666630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666630u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00666640 */
byte F_00666640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00666660 */
uint F_00666660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return CONCAT31((int3)((uint)*(int *)((int)(uintptr_t)this) >> 8),*(int *)this != *param_1);
}

/* ref: FUN_0066666f */
unsigned int F_0066666f(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x66666fu, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00666680 */
byte F_00666680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006666a0 */
byte F_006666a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6666a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006666c0 */
uint F_006666c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006666d0 */
uint F_006666d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_006666e0 */
uint F_006666e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006666f0 */
uint F_006666f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6666f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00666700 */
uint F_00666700(unsigned int gen_a0)
{
  GEN_ENTER(0x666700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00666710 */
uint F_00666710(unsigned int gen_a0)
{
  GEN_ENTER(0x666710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00666720 */
uint F_00666720(unsigned int gen_a0)
{
  GEN_ENTER(0x666720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00666740 */
uint F_00666740(unsigned int gen_a0)
{
  GEN_ENTER(0x666740u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00666760 */
uint F_00666760(unsigned int gen_a0)
{
  GEN_ENTER(0x666760u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_00666770 */
uint F_00666770(unsigned int gen_a0)
{
  GEN_ENTER(0x666770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00666780 */
uint F_00666780(unsigned int gen_a0)
{
  GEN_ENTER(0x666780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666790 */
uint F_00666790(unsigned int gen_a0)
{
  GEN_ENTER(0x666790u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006667a0 */
uint F_006667a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006667b0 */
uint F_006667b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006667c0 */
uint F_006667c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x19)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x19);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006667e0 */
uint F_006667e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6667e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00666810 */
uint F_00666810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00666840 */
unsigned int F_00666840(unsigned int gen_a0)
{
  GEN_ENTER(0x666840u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00666890 */
uint F_00666890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006668a0 */
unsigned int F_006668a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6668a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_006668f0 */
uint F_006668f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6668f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 + param_1;
}

/* ref: FUN_00666910 */
uint F_00666910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00666960 */
uint F_00666960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666960u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 2;
}

/* ref: FUN_00666980 */
uint F_00666980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666980u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_006669a0 */
uint F_006669a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6669a0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x30 + *in_ecx;
}

/* ref: FUN_006669d0 */
uint F_006669d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6669d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006669f0 */
uint F_006669f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6669f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = (1 << ((byte)param_2 & 0x1f)) - 1;
  }
  return *(uint *)((int)(uintptr_t)this) >> ((byte)param_1 & 0x1f) & uVar1;
}

/* ref: FUN_00666a30 */
uint F_00666a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666a30u, gen_a0, gen_a1, 0u, 0u);
  short * in_ecx = (short *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = ((ushort)(byte)param_2 - (ushort)(byte)param_2) - (ushort)((byte)param_2 != 0);
  return (uint)in_ecx;
}

/* ref: FUN_00666a50 */
uint F_00666a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(byte * PTR32 *)this =
       ~('\x01' << (bVar1 & 0x1f)) & **(byte * PTR32 *)this | ((char)param_1 != '\0') << (bVar1 & 0x1f);
  return (uint)this;
}

/* ref: FUN_00666a80 */
uint F_00666a80(unsigned int gen_a0)
{
  GEN_ENTER(0x666a80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666a90 */
uint F_00666a90(unsigned int gen_a0)
{
  GEN_ENTER(0x666a90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666aa0 */
uint F_00666aa0(unsigned int gen_a0)
{
  GEN_ENTER(0x666aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666ab0 */
unsigned int F_00666ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00666af0 */
uint F_00666af0(unsigned int gen_a0)
{
  GEN_ENTER(0x666af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666b00 */
uint F_00666b00(unsigned int gen_a0)
{
  GEN_ENTER(0x666b00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666b80 */
uint F_00666b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00666ba0 */
uint F_00666ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666ba0u, gen_a0, gen_a1, 0u, 0u);
  gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x10ab964) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x10ab968) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x10ab96c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x10ab974) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x10ab978) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x10ab97c) * fVar4;
  *param_2 = (*(float *)&REFG(undefined, 0x10ab960) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar5);
  param_2[1] = fVar7 * fVar2;
  param_2[2] = fVar8 * fVar3;
  param_2[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00666bd0 */
uint F_00666bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x666bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666c10 */
uint F_00666c10(unsigned int gen_a0)
{
  GEN_ENTER(0x666c10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00666c30 */
uint F_00666c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(uint *)((int)this + 8) = param_1[2] & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_00666c60 */
uint F_00666c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666c60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xd4) +
                 (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xd8) +
                        ((uint)(ushort)param_2 + (uint)(ushort)param_1 * 0x42) * 2))) * 4))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: FUN_00666ca0 */
uint F_00666ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return (uint)(ushort)param_2 * 0x20 + *(int *)(in_ecx + 0x100);
}

/* ref: FUN_00666cd0 */
uint F_00666cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_0065e920(((undefined1 *)(gen_frame + 0x0)),(uint)this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00666d70 */
uint F_00666d70(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0x666d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  F_0065ed60(param_1,param_3);
  F_0065ee80(param_1,param_4);
  return (uint)param_1;
}

/* ref: FUN_00666e10 */
double F_00666e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x666e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  float * param_3 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  float10 fVar8;
  
  uVar7 = REFG(float, 0x10920d0);
  uVar6 = REFG(float, 0x1087f04);
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar6;
  *(undefined4 *)((int)this + 0x14) = uVar6;
  *(undefined4 *)((int)this + 0x28) = uVar6;
  *(uint *)((int)this + 0x30) = uVar1 ^ uVar7;
  *(uint *)((int)this + 0x34) = uVar2 ^ uVar7;
  *(uint *)((int)this + 0x38) = uVar3 ^ uVar7;
  (*(float *)(gen_frame + 0x10)) = gen_bits2f(*param_2 ^ uVar7);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[1] ^ uVar7);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(param_2[1] ^ uVar7);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar1 ^ uVar7);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(float *)(gen_frame + 0x0)) = gen_bits2f(*param_2 ^ uVar7);
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar1 ^ uVar7);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  F_004efe70(this,(uint)&(*(float *)(gen_frame + 0x0)));
  fVar8 = (float10)1;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar8 / (float10)*param_3);
  fVar4 = param_3[1];
  (*(float *)(gen_frame + 0x14)) = (float)(fVar8 / (float10)fVar4);
  fVar5 = param_3[2];
  (*(float *)(gen_frame + 0x18)) = (float)(fVar8 / (float10)fVar5);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar8 / (float10)*param_3);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar8 / (float10)fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar8 / (float10)fVar5);
  fVar8 = (float10)F_0065f020(this,&(*(float *)(gen_frame + 0x0)));
  return (double)fVar8;
}

/* ref: FUN_00666fd0 */
byte F_00666fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x666fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_006601a0(param_1,(uint)this);
  return bVar1;
}

/* ref: FUN_00666fe0 */
byte F_00666fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x666fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_006602f0(param_1,(uint)this,param_2);
  return bVar1;
}

/* ref: FUN_00667000 */
byte F_00667000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00660580(param_1,this,param_2);
  return bVar1;
}

/* ref: FUN_00667020 */
byte F_00667020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f4d40(this,&(*(float *)(gen_frame + 0x0)),param_1);
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

/* ref: FUN_006670b0 */
uint F_006670b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6670b0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + in_ecx);
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return (uint)puVar1;
}

/* ref: FUN_00667210 */
uint F_00667210(unsigned int gen_a0)
{
  GEN_ENTER(0x667210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_00667240 */
uint F_00667240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (*(int *)this != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),*(int *)this);
    *(undefined4 *)this = 0;
  }
  if (param_2 != 0) {
    uVar2 = param_2 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))
                              (*(int * PTR32 *)(REFG(int, 0x1371270) + 4),uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)((char)param_1 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    *(int *)((int)this + 4) = param_2;
    *(int * PTR32 *)this = piVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  return (uint)this;
}

/* ref: FUN_006672d0 */
uint F_006672d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6672d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_00667300 */
uint F_00667300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_00667330 */
uint F_00667330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00667370 */
uint F_00667370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667370u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_006673a0 */
uint F_006673a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6673a0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: FUN_006673d0 */
uint F_006673d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6673d0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
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
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00667400 */
uint F_00667400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667400u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
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
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: FUN_00667470 */
uint F_00667470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006674a0 */
uint F_006674a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6674a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_006674d0 */
uint F_006674d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6674d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667500 */
uint F_00667500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667550 */
uint F_00667550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667580 */
uint F_00667580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667580u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_006675b0 */
unsigned int F_006675b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6675b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *(float *)this = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  *(float *)((int)this + 4) = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  *(float *)((int)this + 8) = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  *(float *)((int)this + 0xc) = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  return 0;
}

/* ref: FUN_00667680 */
uint F_00667680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667680u, gen_a0, gen_a1, gen_a2, 0u);
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
  return (uint)param_1;
}

/* ref: FUN_006676b0 */
unsigned int F_006676b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6676b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar9 [16];
  
  F_00d95160(this,param_1 + 0x10,param_1);
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c);
  fVar4 = *(float *)&REFG(undefined, 0x10ab958);
  fVar3 = *(float *)&REFG(undefined, 0x10ab954);
  fVar2 = *(float *)&REFG(undefined, 0x10ab950);
  uVar6 = *(uint *)((int)this + 4) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar7 = *(uint *)((int)this + 8) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar8 = *(uint *)((int)this + 0xc) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *(uint *)this = *(uint *)this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *(uint *)((int)this + 4) = uVar6;
  *(uint *)((int)this + 8) = uVar7;
  *(uint *)((int)this + 0xc) = uVar8;
  uVar6 = *(uint *)&REFG(undefined, 0x10ab9b4) ^ *(uint *)(param_1 + 0x14);
  uVar7 = *(uint *)&REFG(undefined, 0x10ab9b8) ^ *(uint *)(param_1 + 0x18);
  uVar8 = *(uint *)&REFG(undefined, 0x10ab9bc) ^ *(uint *)(param_1 + 0x1c);
  *(uint *)((int)this + 0x10) = *(uint *)&REFG(undefined, 0x10ab9b0) ^ *(uint *)(param_1 + 0x10);
  *(uint *)((int)this + 0x14) = uVar6;
  *(uint *)((int)this + 0x18) = uVar7;
  *(uint *)((int)this + 0x1c) = uVar8;
  memcpy(&(auVar1), &(*(gen_v16 *)(param_1 + 0x20)), sizeof(*(gen_v16 *)(param_1 + 0x20)) < sizeof(auVar1) ? sizeof(*(gen_v16 *)(param_1 + 0x20)) : sizeof(auVar1));
  gen_rcpps(&(auVar9), &(in_XMM1), &(auVar1));
  *(float *)((int)this + 0x20) = (fVar2 - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar9 + 0))) * (*(float *)((char *)&auVar9 + 0));
  *(float *)((int)this + 0x24) = (fVar3 - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar9 + 4))) * (*(float *)((char *)&auVar9 + 4));
  *(float *)((int)this + 0x28) = (fVar4 - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar9 + 8))) * (*(float *)((char *)&auVar9 + 8));
  *(float *)((int)this + 0x2c) = (fVar5 - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar9 + 12))) * (*(float *)((char *)&auVar9 + 12));
  uVar6 = *(uint *)((int)this + 0x24) & *(uint *)&REFG(undefined, 0x10abc24);
  uVar7 = *(uint *)((int)this + 0x28) & *(uint *)&REFG(undefined, 0x10abc28);
  uVar8 = *(uint *)((int)this + 0x2c) & *(uint *)&REFG(undefined, 0x10abc2c);
  *(uint *)((int)this + 0x20) = *(uint *)((int)this + 0x20) & *(uint *)&REFG(undefined, 0x10abc20);
  *(uint *)((int)this + 0x24) = uVar6;
  *(uint *)((int)this + 0x28) = uVar7;
  *(uint *)((int)this + 0x2c) = uVar8;
  return 0;
}

/* ref: FUN_00667710 */
uint F_00667710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  return *((uint *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x1c) + (*(int *)&gen_args[1]) * 4))) & (*(uint *)&gen_args[2]);
}

/* ref: FUN_00667730 */
uint F_00667730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x1c);
  puVar1 = (uint *)(iVar2 + param_1 * 4);
  *puVar1 = *puVar1 | param_2;
  return iVar2 + param_1 * 4;
}

/* ref: FUN_00667750 */
uint F_00667750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4)));
  *puVar1 = *puVar1 & ~param_2;
  return (uint)puVar1;
}

/* ref: FUN_00667770 */
uint F_00667770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + param_1 * 4))) & 2) == 0) {
    return param_1 * 0x30 + *(int *)((int)this + 0x10);
  }
  uVar1 = F_00d31930(this,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf6 */
byte F_006677b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6677b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x28) != 0;
}

/* ref: FUN_006677c0 */
uint F_006677c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6677c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  iVar1 = *(int *)(uVar3 + 0x1c);
  uVar2 = param_1;
  while (uVar2 = uVar2 + 1, (int)uVar2 < iVar1) {
    uVar3 = (uint)*((short *)GEN_TOP((*(int *)(*(int *)this + 0xc) + uVar2 * 2)));
    if (uVar3 == param_1) {
      if ((*((byte *)GEN_TOP((*(int *)((int)this + 0x1c) + uVar2 * 4))) & 2) != 0) {
        uVar3 = F_00d31930(this,uVar2);
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + uVar2 * 4))) = 1;
      *(undefined1 *)((int)this + 0x29) = 0;
    }
  }
  return uVar3;
}

/* ref: FUN_00667820 */
uint F_00667820(unsigned int gen_a0)
{
  GEN_ENTER(0x667820u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: Client::Graphics::Render::FigureRenderer::vf2 */
unsigned int F_00667840(void)
{
  GEN_ENTER(0x667840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Graphics::Render::ShaderManager::vf0 */
uint F_00667860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667890 */
uint F_00667890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_006689b0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_006678a0 */
uint F_006678a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6678a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006678c0 */
uint F_006678c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6678c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_006678e0 */
uint F_006678e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x6678e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined2 *)((int)this + 0x21) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x14) = (undefined1)param_1;
  *(undefined4 *)((int)this + 0x10) = 5;
  *(undefined4 *)((int)this + 0x1d) = 0x101;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00667920 */
uint F_00667920(unsigned int gen_a0)
{
  GEN_ENTER(0x667920u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667940 */
uint F_00667940(unsigned int gen_a0)
{
  GEN_ENTER(0x667940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_00667960 */
uint F_00667960(unsigned int gen_a0)
{
  GEN_ENTER(0x667960u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667980 */
uint F_00667980(unsigned int gen_a0)
{
  GEN_ENTER(0x667980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_006679a0 */
uint F_006679a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6679a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),param_1);
  }
  return uVar1;
}

/* ref: FUN_006679e0 */
uint F_006679e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6679e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  if ((*(undefined * PTR32 *)((int)this + 0xbc) != (undefined *)0x0) && (-1 < (short)param_2)) {
    piVar4 = (int *)F_00d32a50(*(undefined * PTR32 *)((int)this + 0xbc));
    puVar5 = (undefined4 *)((short)param_2 * 0x30 + *piVar4);
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = puVar5[5];
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    param_1[4] = puVar5[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = puVar5[9];
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    param_1[8] = puVar5[8];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  param_1[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00667a50 */
uint F_00667a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667a50u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  ushort uVar1;
  int iVar2;
  undefined * this_01;
  undefined * pvVar3;
  undefined * PTR32 * ppvVar4;
  undefined4 * puVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  iVar2 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)(*(undefined * PTR32 *)&gen_args[2]) * 4 + 0xb4)));
  this_01 = *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (-(uint)((*(undefined * PTR32 *)&gen_args[2]) != (undefined *)0x0) & 2) * 4 + 0xbc)));
  this_00 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + (int)(*(undefined * PTR32 *)&gen_args[2]) * 0x50 + 0x10)));
  F_009f9a30((*(undefined * PTR32 *)&gen_args[0]));
  uVar1 = *(ushort *)((int)this_00 + 0x4a);
  pvVar3 = *(undefined * PTR32 *)(iVar2 + 0x14);
  (*(undefined * PTR32 *)&gen_args[2]) = pvVar3;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)(uint)uVar1;
  ppvVar4 = &(*(undefined * PTR32 *)&gen_args[2]);
  if (pvVar3 <= (undefined *)(uint)uVar1) {
    ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0x8));
  }
  if ((undefined *)0x4f < *ppvVar4) {
    return 0;
  }
  puVar5 = (undefined4 *)F_00d314f0(this_01);
  F_00d36cf0(this_00,iVar2,*puVar5,0,0,0xffffffff,0xffffffff);
  return (uint)this_00;
}

/* ref: FUN_00667ad0 */
uint F_00667ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xbc) == (undefined *)0x0) {
    return 0x1351770;
  }
  if (-1 < (short)param_1) {
    piVar1 = (int *)F_00d321b0(*(undefined * PTR32 *)((int)this + 0xbc));
    return (short)param_1 * 0x30 + *piVar1;
  }
  return 0x1351770;
}

/* ref: Client::Graphics::Kernel::ShaderSceneKey::vf0 */
uint F_00667b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ShaderSubViewKey::vf0 */
uint F_00667b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Kernel::ShaderKey::vf0 */
uint F_00667ba0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667ba0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667bd0 */
unsigned int F_00667bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (*(int *)((int)this + 8) != 0)) {
    uVar2 = 0;
    if (*(uint *)(iVar1 + 0x58) != 0) {
      piVar3 = *(int * PTR32 *)(iVar1 + 0x70);
      while (*piVar3 != *(int *)(param_1 + 4)) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*(uint *)(iVar1 + 0x58) <= uVar2) {
          return 0;
        }
      }
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = *(undefined4 *)(param_1 + 8);
    }
  }
  return 0;
}

/* ref: FUN_00667c30 */
unsigned int F_00667c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + 0x58)));
  uVar2 = 0;
  if (uVar1 != 0) {
    while (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 0x70))) + uVar2 * 4))) != *(int *)(param_1 + 4))
    {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + uVar2 * 4))) = *(undefined4 *)(param_1 + 8);
  }
  return 0;
}

/* ref: Client::Graphics::Render::LightingManager::LightShape::vf0 */
uint F_00667c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x10) = 0;
  }
  piVar1 = *(int * PTR32 *)(this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)(this + 0x14) = 0;
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667cd0 */
uint F_00667cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = REFG(int, 0x1370b90);
  uVar5 = param_1 + 0xfU & 0xfffffff0;
  if (0x8000 < uVar5) {
    return 0;
  }
  if (*(int *)((int)this + 0x24) == 0) {
    piVar1 = (int *)(REFG(int, 0x1370b90) + 0xc0);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + 0x8000;
    UNLOCK();
    if (*(uint *)(iVar3 + 0xb8) < (uint)(*(int *)(iVar3 + 0xc4) * 3 + *piVar1)) {
      LOCK();
      *piVar1 = *piVar1 + -0x8000;
      UNLOCK();
      return 0;
    }
    uVar4 = *(int *)(iVar3 + 0xbc) + iVar2;
    if (uVar4 != 0) {
      *(uint *)((int)this + 0x28) = uVar5;
      *(uint *)((int)this + 0x24) = uVar4;
      return uVar4;
    }
  }
  else {
    iVar3 = *(int *)((int)this + 0x28);
    uVar5 = iVar3 + uVar5;
    if (uVar5 < 0x8001) {
      *(uint *)((int)this + 0x28) = uVar5;
      return iVar3 + *(int *)((int)this + 0x24);
    }
  }
  return 0;
}

/* ref: FUN_00667da0 */
uint F_00667da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *(uint *)(in_ecx + 4) >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: Client::Graphics::Render::GraphicsConfig::vf0 */
uint F_00667dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb2c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00667e00 */
uint F_00667e00(unsigned int gen_a0)
{
  GEN_ENTER(0x667e00u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667e20 */
uint F_00667e20(unsigned int gen_a0)
{
  GEN_ENTER(0x667e20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera::vf0 */
uint F_00667e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00667e70 */
uint F_00667e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00662250(in_ecx + 0xc0,param_2);
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::vf0 */
uint F_00667e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_SpecialShadow::vf0 */
uint F_00667eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::vf0 */
uint F_00667ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::CameraOmniFace::vf0 */
uint F_00667f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x667f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00667f60 */
uint F_00667f60(unsigned int gen_a0)
{
  GEN_ENTER(0x667f60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00667fd0 */
uint F_00667fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x667fd0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00667ff0 */
uint F_00667ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x667ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668010 */
uint F_00668010(unsigned int gen_a0)
{
  GEN_ENTER(0x668010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668030 */
uint F_00668030(unsigned int gen_a0)
{
  GEN_ENTER(0x668030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::vf0 */
uint F_00668050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668080 */
uint F_00668080(unsigned int gen_a0)
{
  GEN_ENTER(0x668080u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006680a0 */
uint F_006680a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6680a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingManager::vf0 */
uint F_006680d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6680d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 4) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb34));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668110 */
uint F_00668110(unsigned int gen_a0)
{
  GEN_ENTER(0x668110u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668130 */
uint F_00668130(unsigned int gen_a0)
{
  GEN_ENTER(0x668130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668150 */
uint F_00668150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::Light::vf0 */
uint F_00668180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_006681b0 */
uint F_006681b0(float gen_a0, float gen_a1)
{
  GEN_ENTER(0x6681b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
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
  *(float *)((int)gen_fl2bits((*(float *)&gen_args[0])) + 0x54) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_006681f0 */
uint F_006681f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6681f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float fVar1;
  float * pfVar2;
  
  fVar1 = *(float *)(in_ecx + 0x78);
  (*(float *)(gen_frame + 0x4)) = REFG(float, 0x10abe98);
  pfVar2 = &(*(float *)(gen_frame + 0x8));
  fVar1 = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x4));
  }
  return (uint)pfVar2;
}

/* ref: FUN_00668230 */
uint F_00668230(unsigned int gen_a0)
{
  GEN_ENTER(0x668230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668280 */
uint F_00668280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = (*(code *)*puVar1)(puVar1[1],puVar1 + 2,this,param_1);
  }
  return uVar2;
}

/* ref: FUN_006682b0 */
uint F_006682b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6682b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
  uVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    uVar2 = (*(code *)*puVar1)(puVar1[1],puVar1 + 2,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: FUN_006682f0 */
uint F_006682f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6682f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668310 */
uint F_00668310(unsigned int gen_a0)
{
  GEN_ENTER(0x668310u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668330 */
uint F_00668330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668360 */
uint F_00668360(unsigned int gen_a0)
{
  GEN_ENTER(0x668360u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00668380 */
uint F_00668380(unsigned int gen_a0)
{
  GEN_ENTER(0x668380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_006683a0 */
uint F_006683a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6683a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_006683e0 */
uint F_006683e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6683e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668430 */
unsigned int F_00668430(unsigned int gen_a0)
{
  GEN_ENTER(0x668430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 100) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abeb8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x78) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbac));
  puVar1 = (undefined4 *)((int)this + 0x4c);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x34);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0;
}

/* ref: Client::Graphics::Render::ModelRenderer::vf0 */
uint F_00668490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668430(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_006684c0 */
uint F_006684c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6684c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::vf0 */
uint F_006684f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6684f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668520 */
uint F_00668520(unsigned int gen_a0)
{
  GEN_ENTER(0x668520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abed0));
  puVar1 = (undefined4 *)((int)this + 0x224);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x20c);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 500);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1dc);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1c4);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  puVar1 = (undefined4 *)((int)this + 0x1a0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x170) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x164) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x158) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbb4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::vf0 */
uint F_00668610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668520(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf0 */
uint F_00668640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668670 */
uint F_00668670(unsigned int gen_a0)
{
  GEN_ENTER(0x668670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abee8));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x31fc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbbc));
  puVar1 = (undefined4 *)((int)this + 0x1e0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1c8);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x1b0);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x198);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x180);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  puVar1 = (undefined4 *)((int)this + 0x168);
  iVar2 = 1;
  do {
    puVar1 = puVar1 + -3;
    iVar2 = iVar2 + -1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x144) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x138) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 300) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x120) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x114) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::TerrainRenderer::vf0 */
uint F_00668770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00668670(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::WaterRenderObject::vf0 */
uint F_006687a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6687a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::WaterRenderer::vf0 */
uint F_00668810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pWVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  pWVar1 = this + 0x1cc;
  iVar2 = 1;
  do {
    pWVar1 = pWVar1 + -0xc;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pWVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x20) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  *(undefined * PTR32 * PTR32 *)(this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::vf0 */
uint F_00668890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::vf0 */
uint F_006688c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6688c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Render::ShadowMaskRenderer::vf0 */
uint F_00668930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pSVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)(this + 0x38) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x2c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  *(undefined * PTR32 * PTR32 *)(this + 0x44) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  pSVar1 = this + 0x2c;
  iVar2 = 1;
  do {
    pSVar1 = pSVar1 + -0xc;
    iVar2 = iVar2 + -1;
    *(undefined * PTR32 * PTR32 *)pSVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),this);
  }
  return (uint)this;
}

/* ref: FUN_00668990 */
unsigned int F_00668990(unsigned int gen_a0)
{
  GEN_ENTER(0x668990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined4 *)((int)this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680((undefined4 *)((int)this + 4));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  return 0;
}

/* ref: Client::Graphics::Render::RenderTargetManager::vf0 */
uint F_006689b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6689b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00668a10 */
uint F_00668a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  iVar1 = *(int *)(REFG(int, 0x137127c) + 0xaba0 + param_1 * 4);
  if (iVar1 != 0) {
    F_00b52c10(this,*(undefined4 *)(iVar1 + 0x98));
    return (uint)this;
  }
  F_00b52c10(this,0);
  return (uint)this;
}

/* ref: FUN_00668ba0 */
byte F_00668ba0(void)
{
  GEN_ENTER(0x668ba0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x10) + 8))))
                           (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x10),0xb8,0x10)));
  if (this != (undefined *)0x0) {
    uVar1 = F_00623880(this);
    REFG(undefined4, 0x1487c60) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c60) = 0;
  return 0;
}

/* ref: FUN_00668ca0 */
uint F_00668ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x668ca0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00668d00 */
uint F_00668d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d10 */
byte F_00668d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668d60 */
uint F_00668d60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d70 */
byte F_00668d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668db0 */
uint F_00668db0(unsigned int gen_a0)
{
  GEN_ENTER(0x668db0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668dd0 */
uint F_00668dd0(unsigned int gen_a0)
{
  GEN_ENTER(0x668dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668df0 */
uint F_00668df0(unsigned int gen_a0)
{
  GEN_ENTER(0x668df0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e10 */
uint F_00668e10(unsigned int gen_a0)
{
  GEN_ENTER(0x668e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e30 */
uint F_00668e30(unsigned int gen_a0)
{
  GEN_ENTER(0x668e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e50 */
uint F_00668e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668e60 */
byte F_00668e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00668e80 */
uint F_00668e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x668e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668e90 */
uint F_00668e90(unsigned int gen_a0)
{
  GEN_ENTER(0x668e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668eb0 */
uint F_00668eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x668eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668ed0 */
uint F_00668ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x668ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00668f10 */
uint F_00668f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668f10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668f50 */
uint F_00668f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668f50u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668f80 */
uint F_00668f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668f80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00668fa0 */
uint F_00668fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668fa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00668fe0 */
uint F_00668fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x668fe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669010 */
uint F_00669010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x669010u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669040 */
uint F_00669040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00669050 */
uint F_00669050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined2 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  *(undefined4 *)((int)this + 8) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00669070 */
uint F_00669070(unsigned int gen_a0)
{
  GEN_ENTER(0x669070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006690a0 */
byte F_006690a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6690a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006690c0 */
uint F_006690c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6690c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = F_00666d70(param_1,*(float *)((int)this + 0x30),*(float *)((int)this + 0x34),
                       *(float *)((int)this + 0x38));
  uVar1 = *(undefined4 *)((int)this + 0x28);
  uVar2 = *(undefined4 *)((int)this + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  return uVar3;
}

/* ref: FUN_00669110 */
uint F_00669110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x669110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x1c)) = *(float *)((int)this + 0x30);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x30) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  F_0054d030(&(*(float *)(gen_frame + 0x0)),*(float *)((int)this + 0x34));
  F_0054d0f0(&(*(float *)(gen_frame + 0x0)),*(float *)((int)this + 0x38));
  uVar2 = *(undefined4 *)((int)this + 0x28);
  uVar3 = *(undefined4 *)((int)this + 0x2c);
  *param_1 = *(undefined4 *)((int)this + 0x24);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  return (uint)param_1;
}

/* ref: FUN_006691f0 */
uint F_006691f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6691f0u, gen_a0, gen_a1, 0u, 0u);
  byte * in_ecx = (byte *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *in_ecx >> ((byte)param_2 & 0x1f) & 1;
}

/* ref: FUN_00669220 */
uint F_00669220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00669260 */
uint F_00669260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669280 */
uint F_00669280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692a0 */
unsigned int F_006692a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692c0 */
unsigned int F_006692c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006692e0 */
uint F_006692e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6692e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00669310 */
uint F_00669310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669330 */
uint F_00669330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669350 */
uint F_00669350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669370 */
uint F_00669370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669390 */
uint F_00669390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006693b0 */
uint F_006693b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6693b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)((int)this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)((int)this + 8)) && (uVar2 <= *(uint *)((int)this + 0x10))) {
    *(uint *)((int)this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this,uVar3);
  return uVar2;
}

/* ref: FUN_006693f0 */
uint F_006693f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6693f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)((int)this + 8)) && (uVar1 + param_1 == *(int *)((int)this + 0xc))) &&
     (*(int *)((int)this + 0x14) != param_1)) {
    *(int *)((int)this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00669440 */
uint F_00669440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x669440u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006694a0 */
uint F_006694a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6694a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_006694c0 */
uint F_006694c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6694c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = (byte)*(undefined4 *)((int)this + 4);
  **(byte * PTR32 *)this =
       (*(byte *)*param_1 >> (*(byte *)(param_1 + 1) & 0x1f) & 1) << (bVar1 & 0x1f) |
       ~('\x01' << (bVar1 & 0x1f)) & **(byte * PTR32 *)this;
  return (uint)this;
}

/* ref: FUN_00669510 */
uint F_00669510(unsigned int gen_a0)
{
  GEN_ENTER(0x669510u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669530 */
uint F_00669530(unsigned int gen_a0)
{
  GEN_ENTER(0x669530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00669550 */
uint F_00669550(unsigned int gen_a0)
{
  GEN_ENTER(0x669550u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00669570 */
uint F_00669570(unsigned int gen_a0)
{
  GEN_ENTER(0x669570u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669590 */
uint F_00669590(unsigned int gen_a0)
{
  GEN_ENTER(0x669590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006695b0 */
uint F_006695b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_006695d0 */
uint F_006695d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_006695f0 */
uint F_006695f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6695f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669610 */
uint F_00669610(unsigned int gen_a0)
{
  GEN_ENTER(0x669610u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00669630 */
uint F_00669630(unsigned int gen_a0)
{
  GEN_ENTER(0x669630u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669650 */
uint F_00669650(unsigned int gen_a0)
{
  GEN_ENTER(0x669650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1);
  }
  return uVar1;
}

/* ref: FUN_00669670 */
uint F_00669670(unsigned int gen_a0)
{
  GEN_ENTER(0x669670u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 4) + 8))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 4),param_1,0x10);
  return uVar1;
}

