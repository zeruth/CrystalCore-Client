#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_005ba8a0 */
GEN_NOFRAME uint GEN_THISCALL F_005ba8a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ba8a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  uVar1 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar1;
}

/* ref: FUN_005ba930 */
GEN_NOFRAME uint GEN_THISCALL F_005ba930(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5ba930u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_005ba940 */
GEN_FRAME uint GEN_THISCALL F_005ba940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005ba970 */
GEN_FRAME byte GEN_STDCALL F_005ba970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ba970u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x84);
  }
  if (((param_2 != 0) && (uVar1 < (ushort)*(undefined4 *)(param_2 + 0x84))) &&
     (*(int *)(param_1 + 8) == *(int *)(param_2 + 8))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ba9d0 */
GEN_FRAME uint GEN_THISCALL F_005ba9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5ba9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  uVar2 = *(ushort *)param_4;
  uVar3 = *(ushort *)param_5;
  fVar4 = (float10)*(double *)&REFG(undefined, 0x1088070);
  fVar5 = (float10)(param_3 - 1);
  if (param_3 - 1 < 0) {
    fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  *param_1 = (undefined1)param_2;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  fVar6 = (float10)((float)GEN_TOF(((float10)(int)(uVar2 - 1) / fVar4)));
  fVar7 = (float10)((float)GEN_TOF(((float10)(int)(uVar3 - 1) / fVar4)));
  *(float *)(param_1 + 0x14) = ((float)GEN_TOF(((fVar6 - (float10)(float)(fVar5 / fVar4)) / (fVar6 - fVar7))));
  fVar1 = (float)(fVar7 - fVar6);
  fVar7 = (float10)fVar1;
  *(float *)(param_1 + 4) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar5 / fVar4) - fVar6)));
  *(float *)(param_1 + 8) = fVar1;
  *(float *)(param_1 + 0xc) = ((float)GEN_TOF(((float10)*(float *)(param_4 + 4) * fVar7)));
  *(float *)(param_1 + 0x10) = ((float)GEN_TOF(((float10)*(float *)(param_4 + 8) * fVar7)));
  if ((float10)fVar1 < (float10)0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return (uint)param_1;
}

/* ref: FUN_005baa90 */
GEN_FRAME float10 GEN_THISCALL F_005baa90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5baa90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  char * in_ecx = (char *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  char cVar1;
  bool bVar2;
  float10 fVar3;
  
  cVar1 = *in_ecx;
  if (cVar1 == '\0') {
    *(float *)(in_ecx + 0x20) = param_2;
    return (float10)*(float *)(in_ecx + 0x20);
  }
  if (cVar1 == '\x01') {
    *(float *)(in_ecx + 0x20) =
         ((float)GEN_TOF((((float10)1 - (float10)*(float *)(in_ecx + 0x14)) * (float10)param_2 +
                (float10)param_3 * (float10)*(float *)(in_ecx + 0x14))));
    return (float10)*(float *)(in_ecx + 0x20);
  }
  if ((cVar1 == '\x02') &&
     ((bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x18)) || GEN_ISNAN((float10)param_2),
      bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x18) == (float10)param_2) ||
      (bVar2 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x1c)) || GEN_ISNAN((float10)param_3),
      bVar2 == (bVar2 || (float10)*(float *)(in_ecx + 0x1c) == (float10)param_3))))) {
    *(float *)(in_ecx + 0x18) = param_2;
    *(float *)(in_ecx + 0x1c) = param_3;
    fVar3 = F_0055e870(param_2,param_3,*(float *)(in_ecx + 4),*(float *)(in_ecx + 8),
                         *(float *)(in_ecx + 0xc),*(float *)(in_ecx + 0x10));
    *(float *)(in_ecx + 0x20) = (float)fVar3;
    return (float10)*(float *)(in_ecx + 0x20);
  }
  return (float10)*(float *)(in_ecx + 0x20);
}

/* ref: FUN_005bab70 */
GEN_FRAME uint GEN_THISCALL F_005bab70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bab70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_005babb0 */
GEN_FRAME uint GEN_THISCALL F_005babb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5babb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Component::GUI2::AtkCrest::vf0 */
GEN_FRAME uint GEN_THISCALL F_005bac70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c9c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005bacb0 */
GEN_FRAME uint GEN_THISCALL F_005bacb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bacb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_005bacf0 */
GEN_FRAME byte GEN_THISCALL F_005bacf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x5bacf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(byte *)((int)this + 0x2c) =
       *(byte *)((int)this + 0x2c) ^ ((char)param_1 * '\x04' ^ *(byte *)((int)this + 0x2c)) & 4;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(byte *)((int)this + 0x2e) =
       ((byte)param_5 & 1) * '\x04' | *(byte *)((int)this + 0x2e) & 0xfa | (byte)param_4 & 1;
  return (byte)param_4 & 1;
}

/* ref: FUN_005bad60 */
GEN_FRAME uint GEN_THISCALL F_005bad60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bad60u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0xc) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_005bad70 */
GEN_FRAME uint GEN_THISCALL F_005bad70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bad70u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return *(uint *)((*(int *)&gen_args[0]) + 0x18) & (*(uint *)&gen_args[1]);
}

/* ref: FUN_005badb0 */
GEN_FRAME uint GEN_THISCALL F_005badb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5badb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) == 0) {
    if ((param_1 & 1) != 0) {
      F_00406ad0(this);
    }
  }
  else {
    this = (undefined *)((int)this - 4);
    if ((param_1 & 1) != 0) {
      F_00406b30(this);
      return (uint)this;
    }
  }
  return (uint)this;
}

/* ref: FUN_005bae00 */
GEN_FRAME uint GEN_THISCALL F_005bae00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bae00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005bae40 */
GEN_FRAME uint GEN_THISCALL F_005bae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bae40u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 0x14;
}

/* ref: FUN_005baeb0 */
GEN_FRAME uint GEN_THISCALL F_005baeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baeb0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baee0 */
GEN_FRAME uint GEN_THISCALL F_005baee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baee0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf10 */
GEN_FRAME uint GEN_THISCALL F_005baf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf10u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf20 */
GEN_FRAME uint GEN_THISCALL F_005baf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf20u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf50 */
GEN_FRAME uint GEN_THISCALL F_005baf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_005baf60 */
GEN_FRAME byte GEN_THISCALL F_005baf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005baf80 */
GEN_FRAME byte GEN_THISCALL F_005baf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5baf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_005bb080 */
GEN_FRAME uint GEN_THISCALL F_005bb080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb080u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb0d0 */
GEN_FRAME uint F_005bb0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb0e0 */
GEN_FRAME uint F_005bb0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb0e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb110 */
GEN_FRAME uint GEN_STDCALL F_005bb110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb160 */
GEN_FRAME uint GEN_STDCALL F_005bb160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb1c0 */
GEN_FRAME uint GEN_STDCALL F_005bb1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb1e0 */
GEN_FRAME uint F_005bb1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb1e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb1f0 */
GEN_FRAME uint F_005bb1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb1f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb220 */
GEN_FRAME uint GEN_STDCALL F_005bb220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb220u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb250 */
GEN_FRAME uint F_005bb250(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb250u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_005bb260 */
GEN_FRAME uint F_005bb260(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb260u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_005bb270 */
GEN_FRAME uint F_005bb270(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb280 */
GEN_FRAME uint F_005bb280(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb290 */
GEN_FRAME uint F_005bb290(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bb2a0 */
GEN_FRAME uint F_005bb2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bb2b0 */
GEN_FRAME uint F_005bb2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2b0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bb2d0 */
GEN_FRAME uint F_005bb2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb2d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bb310 */
GEN_FRAME uint GEN_STDCALL F_005bb310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb310u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_005bb330 */
GEN_FRAME uint GEN_STDCALL F_005bb330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb380 */
GEN_FRAME uint GEN_THISCALL F_005bb380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb380u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb3e0 */
GEN_FRAME uint GEN_STDCALL F_005bb3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb3e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb410 */
GEN_FRAME uint GEN_STDCALL F_005bb410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb410u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb460 */
GEN_FRAME uint F_005bb460(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb470 */
GEN_FRAME uint F_005bb470(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb4a0 */
GEN_FRAME uint GEN_STDCALL F_005bb4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb4a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb4c0 */
GEN_FRAME uint F_005bb4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb4c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb4d0 */
GEN_FRAME uint F_005bb4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb4d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb500 */
GEN_FRAME uint GEN_STDCALL F_005bb500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb570 */
GEN_FRAME uint F_005bb570(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb580 */
GEN_FRAME uint F_005bb580(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb580u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb5b0 */
GEN_FRAME uint GEN_STDCALL F_005bb5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb600 */
GEN_FRAME uint GEN_STDCALL F_005bb600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb630 */
GEN_FRAME uint GEN_THISCALL F_005bb630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb630u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb690 */
GEN_FRAME uint GEN_THISCALL F_005bb690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb690u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb6e0 */
GEN_FRAME uint GEN_THISCALL F_005bb6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb6e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb730 */
GEN_FRAME uint F_005bb730(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bb740 */
GEN_FRAME uint F_005bb740(unsigned int gen_a0)
{
  GEN_ENTER(0x5bb740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bb770 */
GEN_FRAME uint GEN_STDCALL F_005bb770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bb7a0 */
GEN_FRAME uint GEN_THISCALL F_005bb7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb7a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb7e0 */
GEN_FRAME uint GEN_THISCALL F_005bb7e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb7e0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb830 */
GEN_FRAME uint GEN_THISCALL F_005bb830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb830u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb880 */
GEN_FRAME uint GEN_THISCALL F_005bb880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb880u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb8d0 */
GEN_FRAME uint GEN_THISCALL F_005bb8d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb8d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb930 */
GEN_FRAME uint GEN_THISCALL F_005bb930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb930u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bb990 */
GEN_FRAME uint GEN_STDCALL F_005bb990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bb9c0 */
GEN_FRAME uint GEN_STDCALL F_005bb9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bb9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bba30 */
GEN_FRAME uint GEN_STDCALL F_005bba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bba30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bba60 */
GEN_FRAME uint GEN_STDCALL F_005bba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bba60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbac0 */
GEN_FRAME byte GEN_THISCALL F_005bbac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbaf0 */
GEN_FRAME uint F_005bbaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbaf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bbb00 */
GEN_FRAME uint F_005bbb00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbb00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bbb30 */
GEN_FRAME uint GEN_STDCALL F_005bbb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbb30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbb70 */
GEN_FRAME uint GEN_THISCALL F_005bbb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbb70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbb90 */
GEN_FRAME byte GEN_THISCALL F_005bbb90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbbc0 */
GEN_FRAME uint GEN_THISCALL F_005bbbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbbc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbbf0 */
GEN_FRAME uint GEN_THISCALL F_005bbbf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbbf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbc70 */
GEN_FRAME uint GEN_THISCALL F_005bbc70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbc70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbc90 */
GEN_FRAME byte GEN_THISCALL F_005bbc90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbcf0 */
GEN_FRAME uint F_005bbcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbcf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bbd00 */
GEN_FRAME uint F_005bbd00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bbd00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bbd10 */
GEN_FRAME uint GEN_STDCALL F_005bbd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbd10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bbd40 */
GEN_FRAME uint GEN_THISCALL F_005bbd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbd40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005bbda0 */
GEN_FRAME byte GEN_THISCALL F_005bbda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbe10 */
GEN_FRAME uint GEN_THISCALL F_005bbe10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbe10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbe40 */
GEN_FRAME byte GEN_THISCALL F_005bbe40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbe40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbea0 */
GEN_FRAME uint GEN_THISCALL F_005bbea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbec0 */
GEN_FRAME byte GEN_THISCALL F_005bbec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbf10 */
GEN_FRAME byte GEN_THISCALL F_005bbf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbf50 */
GEN_FRAME uint GEN_THISCALL F_005bbf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bbf70 */
GEN_FRAME byte GEN_THISCALL F_005bbf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbfa0 */
GEN_FRAME byte GEN_THISCALL F_005bbfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bbfa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bbfe0 */
GEN_FRAME uint GEN_THISCALL F_005bbfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bbfe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bc000 */
GEN_FRAME byte GEN_THISCALL F_005bc000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bc040 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005bc040(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5bc040u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bc0a0 */
GEN_FRAME uint F_005bc0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc0a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bc0b0 */
GEN_FRAME uint F_005bc0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc0b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bc0e0 */
GEN_FRAME uint GEN_STDCALL F_005bc0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc120 */
GEN_FRAME uint GEN_THISCALL F_005bc120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_005bc140 */
GEN_FRAME byte GEN_THISCALL F_005bc140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bc190 */
GEN_FRAME uint GEN_THISCALL F_005bc190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc1c0 */
GEN_FRAME uint GEN_STDCALL F_005bc1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc1f0 */
GEN_FRAME uint GEN_THISCALL F_005bc1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc1f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc250 */
GEN_FRAME uint GEN_STDCALL F_005bc250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc280 */
GEN_FRAME uint F_005bc280(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc280u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc2b0 */
GEN_FRAME uint GEN_STDCALL F_005bc2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc2b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc300 */
GEN_FRAME uint GEN_STDCALL F_005bc300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc340 */
GEN_FRAME uint GEN_STDCALL F_005bc340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc370 */
GEN_FRAME uint GEN_STDCALL F_005bc370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc3c0 */
GEN_FRAME uint GEN_STDCALL F_005bc3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc3f0 */
GEN_FRAME uint GEN_STDCALL F_005bc3f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc3f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc420 */
GEN_FRAME uint GEN_STDCALL F_005bc420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc450 */
GEN_FRAME uint F_005bc450(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc480 */
GEN_FRAME uint GEN_STDCALL F_005bc480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc4f0 */
GEN_FRAME uint F_005bc4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc4f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_005bc500 */
GEN_FRAME uint F_005bc500(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc500u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bc510 */
GEN_FRAME uint F_005bc510(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bc520 */
GEN_FRAME uint F_005bc520(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc530 */
GEN_FRAME uint F_005bc530(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc530u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bc560 */
GEN_FRAME uint GEN_STDCALL F_005bc560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc590 */
GEN_FRAME uint F_005bc590(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc5c0 */
GEN_FRAME uint GEN_STDCALL F_005bc5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc5c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc5e0 */
GEN_FRAME uint F_005bc5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc5e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc610 */
GEN_FRAME uint GEN_STDCALL F_005bc610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc640 */
GEN_FRAME uint GEN_THISCALL F_005bc640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bc640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bc680 */
GEN_FRAME uint GEN_STDCALL F_005bc680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bc6c0 */
GEN_FRAME uint GEN_STDCALL F_005bc6c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc6c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bc6f0 */
GEN_FRAME uint F_005bc6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc6f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc720 */
GEN_FRAME uint GEN_STDCALL F_005bc720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc720u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc770 */
GEN_FRAME uint GEN_STDCALL F_005bc770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc7b0 */
GEN_FRAME uint GEN_STDCALL F_005bc7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc7b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bc7e0 */
GEN_FRAME uint GEN_STDCALL F_005bc7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc840 */
GEN_FRAME uint GEN_STDCALL F_005bc840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc8a0 */
GEN_FRAME uint GEN_STDCALL F_005bc8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc900 */
GEN_FRAME uint GEN_STDCALL F_005bc900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc930 */
GEN_FRAME uint F_005bc930(unsigned int gen_a0)
{
  GEN_ENTER(0x5bc930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bc950 */
GEN_FRAME uint GEN_STDCALL F_005bc950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bc990 */
GEN_FRAME uint GEN_STDCALL F_005bc990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bc990u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bca40 */
GEN_FRAME uint GEN_STDCALL F_005bca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bca40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcab0 */
GEN_FRAME uint GEN_STDCALL F_005bcab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcab0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcb20 */
GEN_FRAME uint GEN_STDCALL F_005bcb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcb20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcb90 */
GEN_FRAME uint GEN_STDCALL F_005bcb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcb90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcc00 */
GEN_FRAME uint F_005bcc00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_005bcc10 */
GEN_FRAME uint F_005bcc10(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bcc20 */
GEN_FRAME uint F_005bcc20(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005bcc30 */
GEN_FRAME uint F_005bcc30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcc40 */
GEN_FRAME uint F_005bcc40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bcc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005bcc70 */
GEN_FRAME uint GEN_STDCALL F_005bcc70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcc70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,400);
  return (uint)uVar1;
}

/* ref: FUN_005bccb0 */
GEN_FRAME uint F_005bccb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bccb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcce0 */
GEN_FRAME uint GEN_STDCALL F_005bcce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcce0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bcda0 */
GEN_FRAME uint GEN_STDCALL F_005bcda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcda0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xb0,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bcdd0 */
GEN_FRAME uint GEN_THISCALL F_005bcdd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcdd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce00 */
GEN_FRAME uint GEN_THISCALL F_005bce00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bce00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce30 */
GEN_FRAME uint GEN_THISCALL F_005bce30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bce30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bce50 */
GEN_FRAME uint GEN_THISCALL F_005bce50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005bce80 */
GEN_FRAME uint F_005bce80(unsigned int gen_a0)
{
  GEN_ENTER(0x5bce80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bcea0 */
GEN_FRAME uint GEN_STDCALL F_005bcea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bcf10 */
GEN_FRAME uint GEN_STDCALL F_005bcf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcf10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,400);
  return (uint)uVar1;
}

/* ref: FUN_005bcf50 */
GEN_FRAME uint GEN_THISCALL F_005bcf50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcf50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcf70 */
GEN_FRAME uint GEN_THISCALL F_005bcf70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bcf70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcf80 */
GEN_FRAME uint GEN_THISCALL F_005bcf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcfa0 */
GEN_FRAME uint GEN_THISCALL F_005bcfa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcfa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bcfc0 */
GEN_FRAME uint GEN_THISCALL F_005bcfc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bcfc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd010 */
GEN_FRAME uint GEN_THISCALL F_005bd010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd020 */
GEN_FRAME uint F_005bd020(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005bd050 */
GEN_FRAME uint GEN_STDCALL F_005bd050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd050u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd080 */
GEN_FRAME uint GEN_THISCALL F_005bd080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd0e0 */
GEN_FRAME uint GEN_THISCALL F_005bd0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd0e0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_005bd120 */
GEN_FRAME uint GEN_THISCALL F_005bd120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd120u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_005bd180 */
GEN_FRAME uint GEN_STDCALL F_005bd180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_005bd1b0 */
GEN_FRAME uint GEN_STDCALL F_005bd1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd1b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x2c0);
  return (uint)uVar1;
}

/* ref: FUN_005bd1e0 */
GEN_FRAME uint GEN_STDCALL F_005bd1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd1e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd240 */
GEN_FRAME uint GEN_STDCALL F_005bd240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd240u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd270 */
GEN_FRAME uint F_005bd270(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd270u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_005bd280 */
GEN_FRAME uint F_005bd280(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd280u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bd2a0 */
GEN_FRAME uint F_005bd2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd2a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bd2c0 */
GEN_FRAME uint GEN_STDCALL F_005bd2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd300 */
GEN_FRAME uint GEN_STDCALL F_005bd300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd300u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd340 */
GEN_FRAME uint GEN_STDCALL F_005bd340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd340u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd380 */
GEN_FRAME uint GEN_STDCALL F_005bd380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd380u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd3c0 */
GEN_FRAME uint GEN_STDCALL F_005bd3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd3c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd400 */
GEN_FRAME uint GEN_STDCALL F_005bd400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd400u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd440 */
GEN_FRAME uint GEN_STDCALL F_005bd440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd440u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd480 */
GEN_FRAME uint GEN_STDCALL F_005bd480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd480u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd4c0 */
GEN_FRAME uint GEN_STDCALL F_005bd4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd4c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd500 */
GEN_FRAME uint F_005bd500(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x18;
}

/* ref: FUN_005bd510 */
GEN_FRAME uint F_005bd510(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd510u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bd530 */
GEN_FRAME uint F_005bd530(unsigned int gen_a0)
{
  GEN_ENTER(0x5bd530u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bd550 */
GEN_FRAME uint GEN_STDCALL F_005bd550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd550u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x1c,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd580 */
GEN_FRAME uint GEN_THISCALL F_005bd580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd590 */
GEN_FRAME uint GEN_THISCALL F_005bd590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd5a0 */
GEN_FRAME uint GEN_STDCALL F_005bd5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd5a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xb0,param_2,0x2c0);
  return uVar1;
}

/* ref: FUN_005bd5e0 */
GEN_FRAME uint GEN_THISCALL F_005bd5e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd600 */
GEN_FRAME uint GEN_STDCALL F_005bd600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,400);
  return uVar1;
}

/* ref: FUN_005bd640 */
GEN_FRAME uint GEN_THISCALL F_005bd640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd650 */
GEN_FRAME uint GEN_THISCALL F_005bd650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd660 */
GEN_FRAME uint GEN_THISCALL F_005bd660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd670 */
GEN_FRAME uint GEN_THISCALL F_005bd670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd680 */
GEN_FRAME uint GEN_THISCALL F_005bd680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd690 */
GEN_FRAME uint GEN_THISCALL F_005bd690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd6a0 */
GEN_FRAME uint GEN_THISCALL F_005bd6a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd6a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd6b0 */
GEN_FRAME uint GEN_THISCALL F_005bd6b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd6b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd6c0 */
GEN_FRAME uint GEN_THISCALL F_005bd6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd6c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_005bd6d0 */
GEN_FRAME uint GEN_THISCALL F_005bd6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd6d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005bd6f0 */
GEN_FRAME uint GEN_THISCALL F_005bd6f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd6f0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_005bd700 */
GEN_FRAME uint GEN_THISCALL F_005bd700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005bd720 */
GEN_FRAME uint GEN_THISCALL F_005bd720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd730 */
GEN_FRAME uint GEN_THISCALL F_005bd730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd740 */
GEN_FRAME uint GEN_THISCALL F_005bd740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005bd760 */
GEN_FRAME uint GEN_THISCALL F_005bd760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bd770 */
GEN_FRAME uint GEN_THISCALL F_005bd770(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 8;
  return (uint)this;
}

/* ref: FUN_005bd810 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005bd810(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5bd810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005bd880 */
GEN_FRAME uint GEN_THISCALL F_005bd880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd880u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0xc;
  return (uint)in_ecx;
}

/* ref: FUN_005bd8c0 */
GEN_FRAME uint GEN_THISCALL F_005bd8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd8c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x14;
  return (uint)in_ecx;
}

/* ref: FUN_005bd8f0 */
GEN_FRAME uint GEN_THISCALL F_005bd8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd8f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_005bd930 */
GEN_FRAME unsigned int F_005bd930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bd930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if ((param_2 < param_1) && (puVar3 = param_2 + param_3, param_1 < puVar3)) {
    puVar4 = param_1 + param_3;
    iVar2 = param_3;
    if (param_3 != 0) {
      do {
        puVar1 = puVar3 - 1;
        puVar3 = puVar3 - 1;
        puVar4 = puVar4 - 1;
        iVar2 = iVar2 - 1;
        *puVar4 = *puVar1;
      } while (iVar2 != 0);
      return 0;
    }
  }
  else if (param_3 != 0) {
    iVar2 = param_3;
    puVar3 = param_2;
    do {
      *((undefined4 *)GEN_TOP((((int)param_1 - (int)param_2) + (int)puVar3))) = *puVar3;
      puVar3 = puVar3 + 1;
      iVar2 = iVar2 - 1;
    } while (iVar2 != 0);
  }
  return 0;
}

/* ref: FUN_005bd980 */
GEN_FRAME uint GEN_THISCALL F_005bd980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bd9d0 */
GEN_FRAME uint GEN_THISCALL F_005bd9d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bd9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bda20 */
GEN_FRAME uint GEN_THISCALL F_005bda20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bda20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bda70 */
GEN_FRAME uint GEN_THISCALL F_005bda70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bda70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdac0 */
GEN_FRAME uint GEN_THISCALL F_005bdac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdb10 */
GEN_FRAME uint GEN_THISCALL F_005bdb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bdb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  byte bVar2;
  
  uVar1 = F_0055d920((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  if (((uVar1 != 0) && (999 < *(ushort *)(uVar1 + 0x18))) &&
     (uVar1 = *(uint *)(uVar1 + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_2) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdb70 */
GEN_FRAME uint GEN_THISCALL F_005bdb70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdbc0 */
GEN_FRAME uint GEN_THISCALL F_005bdbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdc10 */
GEN_FRAME uint GEN_THISCALL F_005bdc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdc60 */
GEN_FRAME uint GEN_THISCALL F_005bdc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdcb0 */
GEN_FRAME uint GEN_THISCALL F_005bdcb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdcb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005bdd00 */
GEN_FRAME uint GEN_THISCALL F_005bdd00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bdd00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + param_2 * 4)));
}

/* ref: FUN_005bdd10 */
GEN_FRAME uint F_005bdd10(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd20 */
GEN_FRAME uint F_005bdd20(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd30 */
GEN_FRAME uint F_005bdd30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd40 */
GEN_FRAME uint F_005bdd40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd50 */
GEN_FRAME uint F_005bdd50(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd60 */
GEN_FRAME uint F_005bdd60(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd70 */
GEN_FRAME uint F_005bdd70(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd80 */
GEN_FRAME uint F_005bdd80(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdd90 */
GEN_FRAME uint F_005bdd90(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdd90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdda0 */
GEN_FRAME uint F_005bdda0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdda0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bddb0 */
GEN_FRAME uint F_005bddb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bddb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bddc0 */
GEN_FRAME uint F_005bddc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bddc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bddd0 */
GEN_FRAME uint F_005bddd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bddd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdde0 */
GEN_FRAME uint F_005bdde0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdde0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bddf0 */
GEN_FRAME uint F_005bddf0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bddf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bde40 */
GEN_FRAME uint F_005bde40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bde40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bde50 */
GEN_FRAME uint F_005bde50(unsigned int gen_a0)
{
  GEN_ENTER(0x5bde50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bde60 */
GEN_FRAME uint F_005bde60(unsigned int gen_a0)
{
  GEN_ENTER(0x5bde60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdeb0 */
GEN_FRAME uint F_005bdeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdeb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdec0 */
GEN_FRAME uint F_005bdec0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bded0 */
GEN_FRAME uint F_005bded0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bded0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdef0 */
GEN_FRAME uint F_005bdef0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdf10 */
GEN_FRAME uint F_005bdf10(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdf10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdf30 */
GEN_FRAME uint F_005bdf30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdf30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdf50 */
GEN_FRAME uint F_005bdf50(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdf50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdf70 */
GEN_FRAME uint F_005bdf70(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdf70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdf90 */
GEN_FRAME uint F_005bdf90(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdf90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdfb0 */
GEN_FRAME uint F_005bdfb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdfb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bdfd0 */
GEN_FRAME uint F_005bdfd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bdfd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be020 */
GEN_FRAME uint GEN_STDCALL F_005be020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be040 */
GEN_FRAME uint GEN_STDCALL F_005be040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be070 */
GEN_FRAME uint GEN_STDCALL F_005be070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be0b0 */
GEN_FRAME uint GEN_STDCALL F_005be0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be0b0u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be0f0 */
GEN_FRAME uint GEN_STDCALL F_005be0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be130 */
GEN_FRAME uint GEN_STDCALL F_005be130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_005be170 */
GEN_FRAME unsigned int GEN_STDCALL F_005be170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_005be1a0 */
GEN_FRAME uint GEN_STDCALL F_005be1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be1f0 */
GEN_FRAME uint GEN_STDCALL F_005be1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be230 */
GEN_FRAME uint GEN_STDCALL F_005be230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be250 */
GEN_FRAME uint GEN_STDCALL F_005be250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be270 */
GEN_FRAME uint GEN_STDCALL F_005be270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be270u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be290 */
GEN_FRAME uint GEN_STDCALL F_005be290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be290u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be2c0 */
GEN_FRAME uint GEN_STDCALL F_005be2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_005be2f0 */
GEN_FRAME uint GEN_STDCALL F_005be2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be310 */
GEN_FRAME uint GEN_STDCALL F_005be310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be330 */
GEN_FRAME uint GEN_STDCALL F_005be330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be350 */
GEN_FRAME uint GEN_STDCALL F_005be350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be380 */
GEN_FRAME uint GEN_STDCALL F_005be380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be3c0 */
GEN_FRAME uint GEN_STDCALL F_005be3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_005be3e0 */
GEN_FRAME uint GEN_STDCALL F_005be3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5be3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_005be410 */
GEN_FRAME unsigned int GEN_STDCALL F_005be410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_005be440 */
GEN_FRAME uint GEN_THISCALL F_005be440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5be440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this GEN_EDX_FWD,param_1);
  F_0042cbc0((undefined *)((int)this + 0x54) GEN_EDX_ARG,param_1 + 0x54);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)((int)this + 0xac) = *(undefined4 *)(param_1 + 0xac);
  return (uint)this;
}

/* ref: FUN_005be480 */
GEN_FRAME uint GEN_THISCALL F_005be480(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5be480u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *in_ecx - *param_2 >> 2;
}

/* ref: FUN_005be4d0 */
GEN_NOFRAME uint GEN_THISCALL F_005be4d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5be4d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x19) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x19) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x19) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x19) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x19);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x19);
    }
    if (*(char *)(*(int *)this + 0x19) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_005be530 */
GEN_NOFRAME uint GEN_THISCALL F_005be530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5be530u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005be590 */
GEN_NOFRAME uint GEN_THISCALL F_005be590(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5be590u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005be5f0 */
GEN_FRAME uint F_005be5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be5f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be600 */
GEN_FRAME uint F_005be600(unsigned int gen_a0)
{
  GEN_ENTER(0x5be600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be610 */
GEN_FRAME uint GEN_THISCALL F_005be610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005be630 */
GEN_FRAME uint F_005be630(unsigned int gen_a0)
{
  GEN_ENTER(0x5be630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be640 */
GEN_FRAME uint F_005be640(unsigned int gen_a0)
{
  GEN_ENTER(0x5be640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be650 */
GEN_FRAME unsigned int GEN_STDCALL F_005be650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be650u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  ushort * puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar1 <= param_1) {
      *param_4 = puVar1;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 10;
      if ((int)(uint)(ushort)param_3 <= iVar2) {
        return;
      }
    }
    *param_5 = (int)(param_2 + iVar2 * 10);
  }
  return;
}

/* ref: FUN_005be6a0 */
GEN_FRAME uint GEN_STDCALL F_005be6a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be6a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  ushort * puVar1;
  ushort * puVar2;
  
  puVar1 = (ushort *)0x0;
  puVar2 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar2 <= param_1) {
      *param_4 = puVar2;
      puVar1 = (ushort *)((int)puVar1 + 1);
      puVar2 = puVar2 + 8;
      if ((int)(uint)(ushort)param_3 <= (int)puVar1) {
        return (uint)puVar1;
      }
    }
    puVar1 = param_2 + (int)((int)(uintptr_t)puVar1) * 8;
    *param_5 = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_005be6f0 */
GEN_FRAME uint GEN_STDCALL F_005be6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  ushort * puVar1;
  ushort * puVar2;
  
  puVar1 = (ushort *)0x0;
  puVar2 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar2 <= param_1) {
      *param_4 = puVar2;
      puVar1 = (ushort *)((int)puVar1 + 1);
      puVar2 = puVar2 + 8;
      if ((int)(uint)(ushort)param_3 <= (int)puVar1) {
        return (uint)puVar1;
      }
    }
    puVar1 = param_2 + (int)((int)(uintptr_t)puVar1) * 8;
    *param_5 = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_005be740 */
GEN_FRAME unsigned int GEN_STDCALL F_005be740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be740u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  ushort * puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar1 <= param_1) {
      *param_4 = puVar1;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0xc;
      if ((int)(uint)(ushort)param_3 <= iVar2) {
        return;
      }
    }
    *param_5 = (int)(param_2 + iVar2 * 0xc);
  }
  return;
}

/* ref: FUN_005be790 */
GEN_FRAME uint GEN_STDCALL F_005be790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be790u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  ushort * puVar1;
  ushort * puVar2;
  
  puVar1 = (ushort *)0x0;
  puVar2 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar2 <= param_1) {
      *param_4 = puVar2;
      puVar1 = (ushort *)((int)puVar1 + 1);
      puVar2 = puVar2 + 8;
      if ((int)(uint)(ushort)param_3 <= (int)puVar1) {
        return (uint)puVar1;
      }
    }
    puVar1 = param_2 + (int)((int)(uintptr_t)puVar1) * 8;
    *param_5 = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_005be7e0 */
GEN_FRAME uint GEN_STDCALL F_005be7e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5be7e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  ushort * puVar1;
  ushort * puVar2;
  
  puVar1 = (ushort *)0x0;
  puVar2 = param_2;
  if ((ushort)param_3 != 0) {
    while (*puVar2 <= param_1) {
      *param_4 = puVar2;
      puVar1 = (ushort *)((int)puVar1 + 1);
      puVar2 = puVar2 + 8;
      if ((int)(uint)(ushort)param_3 <= (int)puVar1) {
        return (uint)puVar1;
      }
    }
    puVar1 = param_2 + (int)((int)(uintptr_t)puVar1) * 8;
    *param_5 = puVar1;
  }
  return (uint)puVar1;
}

/* ref: FUN_005be830 */
GEN_FRAME uint F_005be830(unsigned int gen_a0)
{
  GEN_ENTER(0x5be830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be840 */
GEN_FRAME uint F_005be840(unsigned int gen_a0)
{
  GEN_ENTER(0x5be840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be850 */
GEN_FRAME uint F_005be850(unsigned int gen_a0)
{
  GEN_ENTER(0x5be850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be860 */
GEN_FRAME unsigned int F_005be860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = param_1;
  for (iVar1 = param_2; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar2 = *param_3;
    puVar2 = puVar2 + 1;
  }
  return 0;
}

/* ref: FUN_005be880 */
GEN_FRAME uint F_005be880(unsigned int gen_a0)
{
  GEN_ENTER(0x5be880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be890 */
GEN_FRAME uint GEN_THISCALL F_005be890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005be8b0 */
GEN_FRAME uint F_005be8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be8c0 */
GEN_FRAME uint F_005be8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be8c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be8d0 */
GEN_FRAME uint F_005be8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be8d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be8e0 */
GEN_FRAME uint GEN_THISCALL F_005be8e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be8e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005be900 */
GEN_FRAME uint F_005be900(unsigned int gen_a0)
{
  GEN_ENTER(0x5be900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be910 */
GEN_FRAME uint GEN_THISCALL F_005be910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5be910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  byte bVar2;
  
  if (((this != (undefined *)0x0) && (999 < *(ushort *)((int)this + 0x18))) &&
     (uVar1 = *(uint *)((int)this + 0x8c), uVar1 != 0)) {
    if ((((*(byte *)(uVar1 + 0x60) & 1) == 0) || ((*(byte *)(uVar1 + 0x60) & 4) == 0)) ||
       (*(char *)(uVar1 + 0x1c) != '\x01')) {
      bVar2 = 0;
    }
    else {
      bVar2 = *((byte *)GEN_TOP((*(int *)(uVar1 + 0xc) + 0xf)));
    }
    if (bVar2 == param_1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_005be960 */
GEN_FRAME byte F_005be960(void)
{
  GEN_ENTER(0x5be960u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005be970 */
GEN_FRAME uint F_005be970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be970u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005be9a0 */
GEN_FRAME uint F_005be9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be9a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be9b0 */
GEN_FRAME uint F_005be9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5be9b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005be9c0 */
GEN_FRAME byte F_005be9c0(void)
{
  GEN_ENTER(0x5be9c0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005be9d0 */
GEN_FRAME uint F_005be9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5be9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005bea00 */
GEN_FRAME uint F_005bea00(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea10 */
GEN_FRAME uint F_005bea10(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea20 */
GEN_FRAME uint F_005bea20(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea30 */
GEN_FRAME uint F_005bea30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea40 */
GEN_FRAME uint F_005bea40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea50 */
GEN_FRAME uint F_005bea50(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea60 */
GEN_FRAME uint F_005bea60(unsigned int gen_a0)
{
  GEN_ENTER(0x5bea60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bea70 */
GEN_FRAME byte F_005bea70(void)
{
  GEN_ENTER(0x5bea70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bea80 */
GEN_FRAME uint F_005bea80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bea80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005beab0 */
GEN_FRAME uint F_005beab0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beac0 */
GEN_FRAME uint F_005beac0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beac0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bead0 */
GEN_FRAME byte F_005bead0(void)
{
  GEN_ENTER(0x5bead0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005beae0 */
GEN_FRAME uint F_005beae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5beae0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005beb10 */
GEN_FRAME uint F_005beb10(unsigned int gen_a0)
{
  GEN_ENTER(0x5beb10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beb20 */
GEN_FRAME uint F_005beb20(unsigned int gen_a0)
{
  GEN_ENTER(0x5beb20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beb30 */
GEN_FRAME byte F_005beb30(void)
{
  GEN_ENTER(0x5beb30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005beb40 */
GEN_FRAME uint F_005beb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5beb40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005beb70 */
GEN_FRAME uint F_005beb70(unsigned int gen_a0)
{
  GEN_ENTER(0x5beb70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beb80 */
GEN_FRAME uint F_005beb80(unsigned int gen_a0)
{
  GEN_ENTER(0x5beb80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beb90 */
GEN_FRAME uint F_005beb90(unsigned int gen_a0)
{
  GEN_ENTER(0x5beb90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beba0 */
GEN_FRAME uint F_005beba0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beba0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bebb0 */
GEN_FRAME uint F_005bebb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bebb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bebc0 */
GEN_FRAME uint F_005bebc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bebc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bebd0 */
GEN_FRAME byte F_005bebd0(void)
{
  GEN_ENTER(0x5bebd0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bebe0 */
GEN_FRAME uint F_005bebe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bebe0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005bec20 */
GEN_FRAME byte F_005bec20(void)
{
  GEN_ENTER(0x5bec20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bec30 */
GEN_FRAME uint F_005bec30(unsigned int gen_a0)
{
  GEN_ENTER(0x5bec30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bec40 */
GEN_FRAME uint F_005bec40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bec40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bec70 */
GEN_FRAME byte F_005bec70(void)
{
  GEN_ENTER(0x5bec70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bec80 */
GEN_FRAME byte F_005bec80(void)
{
  GEN_ENTER(0x5bec80u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005becb0 */
GEN_FRAME byte F_005becb0(void)
{
  GEN_ENTER(0x5becb0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005becc0 */
GEN_FRAME byte F_005becc0(void)
{
  GEN_ENTER(0x5becc0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005becf0 */
GEN_FRAME byte F_005becf0(void)
{
  GEN_ENTER(0x5becf0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bed00 */
GEN_FRAME byte F_005bed00(void)
{
  GEN_ENTER(0x5bed00u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bed50 */
GEN_FRAME byte F_005bed50(void)
{
  GEN_ENTER(0x5bed50u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bed60 */
GEN_FRAME uint F_005bed60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bed60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005beda0 */
GEN_FRAME byte F_005beda0(void)
{
  GEN_ENTER(0x5beda0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bedb0 */
GEN_FRAME byte F_005bedb0(void)
{
  GEN_ENTER(0x5bedb0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bedc0 */
GEN_FRAME uint F_005bedc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bedc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005bee00 */
GEN_FRAME uint F_005bee00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bee00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005bee40 */
GEN_FRAME byte F_005bee40(void)
{
  GEN_ENTER(0x5bee40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bee50 */
GEN_FRAME uint F_005bee50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bee50u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_005bee80 */
GEN_FRAME uint F_005bee80(unsigned int gen_a0)
{
  GEN_ENTER(0x5bee80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bee90 */
GEN_FRAME uint F_005bee90(unsigned int gen_a0)
{
  GEN_ENTER(0x5bee90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beea0 */
GEN_FRAME uint F_005beea0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beeb0 */
GEN_FRAME uint GEN_THISCALL F_005beeb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5beeb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005beed0 */
GEN_FRAME uint F_005beed0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beee0 */
GEN_FRAME uint F_005beee0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005beef0 */
GEN_FRAME uint F_005beef0(unsigned int gen_a0)
{
  GEN_ENTER(0x5beef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bef40 */
GEN_FRAME uint F_005bef40(unsigned int gen_a0)
{
  GEN_ENTER(0x5bef40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bef50 */
GEN_FRAME uint GEN_THISCALL F_005bef50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bef50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bef70 */
GEN_FRAME uint F_005bef70(unsigned int gen_a0)
{
  GEN_ENTER(0x5bef70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bef90 */
GEN_FRAME byte F_005bef90(void)
{
  GEN_ENTER(0x5bef90u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005befb0 */
GEN_FRAME uint F_005befb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5befb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005befc0 */
GEN_FRAME uint F_005befc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5befc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005befd0 */
GEN_FRAME uint F_005befd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5befd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005befe0 */
GEN_FRAME uint F_005befe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5befe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bf090 */
GEN_FRAME uint GEN_THISCALL F_005bf090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bf0a0 */
GEN_FRAME uint GEN_THISCALL F_005bf0a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bf0b0 */
GEN_FRAME uint GEN_THISCALL F_005bf0b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf0b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_005bf0d0 */
GEN_FRAME byte GEN_THISCALL F_005bf0d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_005bf0f0 */
GEN_FRAME byte GEN_THISCALL F_005bf0f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_005bf110 */
GEN_FRAME uint GEN_THISCALL F_005bf110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf110u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(undefined4 *)(in_ecx + 8) = param_3;
  return in_ecx;
}

/* ref: FUN_005bf130 */
GEN_FRAME byte GEN_THISCALL F_005bf130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_005bf150 */
GEN_FRAME byte GEN_THISCALL F_005bf150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_005bf190 */
GEN_FRAME byte GEN_THISCALL F_005bf190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bf1d0 */
GEN_FRAME byte GEN_THISCALL F_005bf1d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_005bf210 */
GEN_FRAME uint GEN_THISCALL F_005bf210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bf220 */
GEN_FRAME uint GEN_THISCALL F_005bf220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005bf230 */
GEN_FRAME uint GEN_THISCALL F_005bf230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_005bf250 */
GEN_FRAME uint GEN_THISCALL F_005bf250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_005bf270 */
GEN_FRAME uint GEN_THISCALL F_005bf270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_005bf290 */
GEN_FRAME uint GEN_THISCALL F_005bf290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = param_1;
  return (uint)this;
}

/* ref: FUN_005bf2b0 */
GEN_FRAME uint GEN_THISCALL F_005bf2b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005bf2d0 */
GEN_FRAME byte F_005bf2d0(void)
{
  GEN_ENTER(0x5bf2d0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bf2e0 */
GEN_FRAME byte F_005bf2e0(void)
{
  GEN_ENTER(0x5bf2e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_005bf310 */
GEN_FRAME uint F_005bf310(unsigned int gen_a0)
{
  GEN_ENTER(0x5bf310u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bf320 */
GEN_FRAME uint F_005bf320(unsigned int gen_a0)
{
  GEN_ENTER(0x5bf320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bf330 */
GEN_FRAME uint F_005bf330(unsigned int gen_a0)
{
  GEN_ENTER(0x5bf330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bf3d0 */
GEN_FRAME uint F_005bf3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5bf3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005bf3e0 */
GEN_FRAME uint GEN_THISCALL F_005bf3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf400 */
GEN_FRAME uint GEN_THISCALL F_005bf400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf420 */
GEN_FRAME uint GEN_THISCALL F_005bf420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5bf420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_005bf470 */
GEN_FRAME uint GEN_THISCALL F_005bf470(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_005bf580 */
GEN_FRAME uint GEN_THISCALL F_005bf580(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5bf580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x54) GEN_EDX_FWD);
  F_0042c880(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

