#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00c31430 */
GEN_FRAME uint GEN_THISCALL F_00c31430(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31430u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31440 */
GEN_FRAME byte GEN_THISCALL F_00c31440(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31460 */
GEN_FRAME byte GEN_THISCALL F_00c31460(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31480 */
GEN_FRAME uint F_00c31480(unsigned int gen_a0)
{
  GEN_ENTER(0xc31480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31490 */
GEN_FRAME uint F_00c31490(unsigned int gen_a0)
{
  GEN_ENTER(0xc31490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c314a0 */
GEN_FRAME uint F_00c314a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c314b0 */
GEN_FRAME uint F_00c314b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c314c0 */
GEN_FRAME uint F_00c314c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc314c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c314f0 */
GEN_FRAME uint GEN_THISCALL F_00c314f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc314f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31510 */
GEN_FRAME uint F_00c31510(unsigned int gen_a0)
{
  GEN_ENTER(0xc31510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31520 */
GEN_FRAME uint F_00c31520(unsigned int gen_a0)
{
  GEN_ENTER(0xc31520u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31550 */
GEN_NOFRAME uint GEN_THISCALL F_00c31550(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cd0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c31560 */
GEN_NOFRAME uint GEN_THISCALL F_00c31560(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) == 0) {
    return 0;
  }
  uVar1 = F_00e33cf0(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00c31570 */
GEN_NOFRAME uint GEN_THISCALL F_00c31570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31570u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (*(int *)(in_ecx + 0x78) != 0) {
    uVar1 = F_00e33d10(*((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x78) + 8))) GEN_EDX_FWD);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00c315a0 */
GEN_FRAME uint GEN_THISCALL F_00c315a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315c0 */
GEN_FRAME uint GEN_THISCALL F_00c315c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc315c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c315e0 */
GEN_FRAME uint F_00c315e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c315f0 */
GEN_FRAME uint F_00c315f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc315f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31600 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c31600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31600u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c31630 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c31630(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31630u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c31670 */
GEN_FRAME uint GEN_THISCALL F_00c31670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31680 */
GEN_FRAME uint GEN_THISCALL F_00c31680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31690 */
GEN_FRAME uint GEN_THISCALL F_00c31690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31690u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c316d0 */
GEN_FRAME uint GEN_THISCALL F_00c316d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc316d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c31710 */
GEN_FRAME uint GEN_THISCALL F_00c31710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31720 */
GEN_FRAME uint GEN_THISCALL F_00c31720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c31730 */
GEN_FRAME uint GEN_THISCALL F_00c31730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31730u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c317a0 */
GEN_FRAME uint GEN_THISCALL F_00c317a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc317a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c31810 */
GEN_FRAME uint GEN_THISCALL F_00c31810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31810u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  piVar2 = (int *)F_00c31730(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c31860 */
GEN_FRAME uint GEN_THISCALL F_00c31860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31860u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  F_00c317a0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c318c0 */
GEN_NOFRAME uint GEN_THISCALL F_00c318c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc318c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  ulonglong uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x78);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x78) = 0;
  }
  if (*(int *)((int)this + 0x60) != 0) {
    F_00406ad0(*(int *)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  uVar2 = F_0042c880(this GEN_EDX_ARG);
  return (uint)uVar2;
}

/* ref: FUN_00c31900 */
GEN_FRAME uint GEN_THISCALL F_00c31900(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31900u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD);
  piVar1 = (int *)F_00c31730((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c31860(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c31970 */
GEN_FRAME uint GEN_THISCALL F_00c31970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31970u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00e351c0(this GEN_EDX_FWD,param_1);
  *(undefined4 *)((int)this + 0x78) = 0;
  return (uint)this;
}

/* ref: FUN_00c31990 */
GEN_NOFRAME uint GEN_THISCALL F_00c31990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x78) != (undefined *)0x0) {
    uVar1 = F_00c31900(*(undefined * PTR32 *)((int)this + 0x78) GEN_EDX_FWD);
    if (uVar1 != 0) {
      if (*(int *)(uVar1 + 0x20) != 0) {
        return *((uint *)GEN_TOP((*(int *)(uVar1 + 0x20) + 8)));
      }
      return *(uint *)(uVar1 + 0x1c);
    }
  }
  return 0;
}

/* ref: FUN_00c319e0 */
GEN_FRAME byte GEN_THISCALL F_00c319e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc319e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  if ((*(int *)this != 0) && (*(int *)this == *param_1)) {
    return *(int *)((int)this + 4) == param_1[1];
  }
  return 0;
}

/* ref: FUN_00c31a30 */
GEN_FRAME uint GEN_THISCALL F_00c31a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  LOCK();
  uVar1 = *(uint *)this;
  if (param_1 == uVar1) {
    *(undefined4 *)this = param_2;
    uVar1 = param_1;
  }
  UNLOCK();
  return uVar1;
}

/* ref: FUN_00c31a50 */
GEN_FRAME uint GEN_THISCALL F_00c31a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00c31a70 */
GEN_FRAME uint GEN_THISCALL F_00c31a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc31a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e40eb0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  F_00e37350((undefined *)((int)this + 0x358) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x3b0) = 0;
  *(undefined4 *)((int)this + 0x3b4) = 0;
  F_0042cbc0((undefined *)((int)this + 0x3b8) GEN_EDX_ARG,param_3);
  F_0042b630((int)this + 0x40c GEN_EDX_ARG);
  F_0042b630((int)this + 0x460 GEN_EDX_ARG);
  F_0042b630((int)this + 0x4b4 GEN_EDX_ARG);
  *(undefined2 *)((int)this + 0x508) = 0;
  *(undefined4 *)((int)this + 0x510) = 0;
  F_0042b630((int)this + 0x514 GEN_EDX_ARG);
  F_0042b630((int)this + 0x568 GEN_EDX_ARG);
  F_0042ccf0((undefined *)((int)this + 0x358) GEN_EDX_ARG,param_1);
  *(undefined2 *)((int)this + 0x3ac) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0x350) = param_4;
  return (uint)this;
}

/* ref: FUN_00c31b30 */
GEN_FRAME uint GEN_THISCALL F_00c31b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x460) GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c31b40 */
GEN_FRAME uint GEN_THISCALL F_00c31b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  byte bVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  if (*(char *)*param_1 != '\0') {
    bVar1 = F_0042b6a0(param_1 GEN_EDX_FWD,&REFG(undefined, 0x10c4408));
    if (bVar1 == 0) {
      F_0042cc20(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG,&REFG(undefined, 0x110f8a4),REFG(undefined4, 0x108cc50));
      F_0042ccf0((undefined *)((int)this + 0x40c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)));
      F_0042c880(((undefined1 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      uVar2 = F_0042e360((undefined *)((int)this + 0x40c) GEN_EDX_ARG,param_1);
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
      return uVar2;
    }
  }
  uVar2 = F_0042aca0((int)this + 0x40c GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c31be0 */
GEN_NOFRAME byte GEN_THISCALL F_00c31be0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0xe0,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00e47780(this_00 GEN_EDX_ARG,(int)this + 0x358);
    *(uint *)((int)this + 0x3b0) = uVar1;
    return uVar1 != 0;
  }
  *(undefined4 *)((int)this + 0x3b0) = 0;
  return 0;
}

/* ref: FUN_00c31c30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c31c30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31c30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  return;
}

/* ref: FUN_00c31c60 */
GEN_FRAME uint GEN_THISCALL F_00c31c60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    bVar1 = F_00e47880(*(undefined * PTR32 *)((int)this + 0x3b0) GEN_EDX_FWD,param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00c31c80 */
GEN_FRAME byte GEN_THISCALL F_00c31c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc31c80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  byte bVar1;
  
  if (*(int *)((int)this + 0x3b0) != 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = param_2;
    (*(undefined4 *)(gen_frame + 0x8)) = param_3;
    bVar1 = F_00e476f0(param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    return bVar1;
  }
  return 0;
}

/* ref: FUN_00c31cd0 */
GEN_NOFRAME byte GEN_THISCALL F_00c31cd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x3b4) != 3) && (*(int *)(in_ecx + 0x3b4) != 4)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00c31cf0 */
GEN_NOFRAME byte GEN_THISCALL F_00c31cf0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x3b4) == 2;
}

/* ref: FUN_00c31d00 */
GEN_NOFRAME byte GEN_THISCALL F_00c31d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31d00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) != 2) {
    return 0;
  }
  if ((**(char * PTR32 *)(in_ecx + 0x4b4) != '\0') && (*(short *)(in_ecx + 0x508) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c31d30 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c31d30(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31d30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x3b4) == 2) {
    *(undefined4 *)(in_ecx + 0x3b4) = 0;
  }
  return;
}

/* ref: FUN_00c31dc0 */
GEN_NOFRAME uint GEN_THISCALL F_00c31dc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc31dc0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_01050b60(in_ecx + 2 GEN_EDX_FWD);
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  return (uint)in_ecx;
}

/* ref: PacketBufferTmpl_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c31de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31de0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c31e60 */
GEN_FRAME uint GEN_THISCALL F_00c31e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00c31e70 */
GEN_FRAME uint GEN_THISCALL F_00c31e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00c31e80 */
GEN_FRAME uint GEN_THISCALL F_00c31e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31e80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00c31ea0 */
GEN_FRAME byte GEN_THISCALL F_00c31ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31ec0 */
GEN_FRAME uint F_00c31ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c31ed0 */
GEN_FRAME uint F_00c31ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31ee0 */
GEN_FRAME uint F_00c31ee0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31ef0 */
GEN_FRAME uint F_00c31ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c31f00 */
GEN_FRAME uint F_00c31f00(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c31f10 */
GEN_FRAME uint GEN_STDCALL F_00c31f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c31f40 */
GEN_FRAME uint F_00c31f40(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c31f50 */
GEN_FRAME uint F_00c31f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc31f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c31f60 */
GEN_FRAME uint GEN_THISCALL F_00c31f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc31f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c31f70 */
GEN_FRAME byte GEN_THISCALL F_00c31f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31f90 */
GEN_FRAME byte GEN_THISCALL F_00c31f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31fb0 */
GEN_FRAME byte GEN_THISCALL F_00c31fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c31fd0 */
GEN_FRAME byte GEN_THISCALL F_00c31fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc31fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c31ff0 */
GEN_FRAME uint F_00c31ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xc31ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32000 */
GEN_FRAME uint F_00c32000(unsigned int gen_a0)
{
  GEN_ENTER(0xc32000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32010 */
GEN_FRAME uint F_00c32010(unsigned int gen_a0)
{
  GEN_ENTER(0xc32010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32020 */
GEN_FRAME uint F_00c32020(unsigned int gen_a0)
{
  GEN_ENTER(0xc32020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32030 */
GEN_FRAME uint F_00c32030(unsigned int gen_a0)
{
  GEN_ENTER(0xc32030u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32040 */
GEN_FRAME uint F_00c32040(unsigned int gen_a0)
{
  GEN_ENTER(0xc32040u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00c32050 */
GEN_FRAME uint F_00c32050(unsigned int gen_a0)
{
  GEN_ENTER(0xc32050u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32060 */
GEN_FRAME uint F_00c32060(unsigned int gen_a0)
{
  GEN_ENTER(0xc32060u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00c32070 */
GEN_FRAME uint F_00c32070(unsigned int gen_a0)
{
  GEN_ENTER(0xc32070u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c32080 */
GEN_FRAME uint F_00c32080(unsigned int gen_a0)
{
  GEN_ENTER(0xc32080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c320c0 */
GEN_FRAME uint GEN_THISCALL F_00c320c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c320d0 */
GEN_FRAME uint GEN_THISCALL F_00c320d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc320d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32130 */
GEN_FRAME uint GEN_THISCALL F_00c32130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)((int)this + 0xc);
  if (puVar1 != param_1) {
    *puVar1 = *param_1;
    *(undefined4 *)((int)this + 0x10) = param_1[1];
  }
  return (uint)puVar1;
}

/* ref: FUN_00c32180 */
GEN_FRAME uint GEN_THISCALL F_00c32180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32190 */
GEN_FRAME uint GEN_THISCALL F_00c32190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: FUN_00c321c0 */
GEN_FRAME uint F_00c321c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321d0 */
GEN_FRAME uint F_00c321d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c321e0 */
GEN_FRAME uint F_00c321e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc321e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32250 */
GEN_FRAME uint GEN_THISCALL F_00c32250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c32280 */
GEN_FRAME uint GEN_THISCALL F_00c32280(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c322a0 */
GEN_FRAME byte GEN_THISCALL F_00c322a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc322a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c322d0 */
GEN_FRAME uint F_00c322d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00c322f0 */
GEN_FRAME uint F_00c322f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc322f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c32300 */
GEN_FRAME uint F_00c32300(unsigned int gen_a0)
{
  GEN_ENTER(0xc32300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00c323a0 */
GEN_FRAME byte GEN_THISCALL F_00c323a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc323a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00c323c0 */
GEN_FRAME uint GEN_THISCALL F_00c323c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc323c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c323d0 */
GEN_FRAME uint F_00c323d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc323d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00c323e0 */
GEN_FRAME uint F_00c323e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc323e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c32400 */
GEN_FRAME uint GEN_THISCALL F_00c32400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32410 */
GEN_FRAME byte GEN_THISCALL F_00c32410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0xc) == *(int *)this)) {
    return *(int *)(param_1 + 0x10) == *(int *)((int)this + 4);
  }
  return 0;
}

/* ref: FUN_00c32440 */
GEN_NOFRAME uint GEN_THISCALL F_00c32440(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc32440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  iVar1 = *(int *)((int)this + 0x10a4);
  iVar2 = *(int *)((int)this + 0x10a0);
  iVar3 = *(int *)((int)this + 0x34);
  iVar4 = *(int *)((int)this + 0x30);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x10e0));
  return ((iVar1 - iVar2) - iVar3) + iVar4;
}

/* ref: FUN_00c32480 */
GEN_NOFRAME uint GEN_THISCALL F_00c32480(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc32480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x3b0);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110f8a0));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
    *(undefined4 *)((int)this + 0x3b0) = 0;
  }
  F_0042c880((undefined *)((int)this + 0x568) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x514) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x4b4) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x460) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x40c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x3b8) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x358) GEN_EDX_ARG);
  uVar2 = F_00e40a10(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00c32510 */
GEN_FRAME uint GEN_THISCALL F_00c32510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 8);
  puVar2 = (undefined4 *)(iVar1 + 0x20);
  if (param_1 != puVar2) {
    *param_1 = *puVar2;
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    puVar2 = *(undefined4 * PTR32 *)(iVar1 + 0x44);
    param_1[9] = puVar2;
  }
  return (uint)puVar2;
}

/* ref: FUN_00c32590 */
GEN_FRAME uint GEN_THISCALL F_00c32590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325c0 */
GEN_FRAME uint GEN_THISCALL F_00c325c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325d0 */
GEN_FRAME uint GEN_THISCALL F_00c325d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c325e0 */
GEN_FRAME uint GEN_THISCALL F_00c325e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc325e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x38))(this GEN_EDX_FWD)));
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1 GEN_EDX_ARG,*param_2,0);
  if (uVar2 != 0) {
    *(uint *)(param_1 + 0xc) = uVar2;
    return param_1;
  }
  return 0;
}

/* ref: FUN_00c32660 */
GEN_FRAME uint F_00c32660(unsigned int gen_a0)
{
  GEN_ENTER(0xc32660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32670 */
GEN_FRAME uint F_00c32670(unsigned int gen_a0)
{
  GEN_ENTER(0xc32670u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c32680 */
GEN_FRAME uint F_00c32680(unsigned int gen_a0)
{
  GEN_ENTER(0xc32680u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00c326a0 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c326a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc326a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c326d0 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c326d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc326d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c32700 */
GEN_FRAME undefined4 * GEN_THISCALL F_00c32700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32700u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00c32730 */
GEN_FRAME uint GEN_THISCALL F_00c32730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32740 */
GEN_FRAME uint GEN_THISCALL F_00c32740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0xc);
  if (((-1 < param_1) || ((uint)-param_1 <= (uint)piVar1[8])) &&
     ((param_1 < 1 || ((uint)(piVar1[8] + param_1) < 0x241)))) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,param_1);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
    return (uint)piVar1;
  }
  piVar1[8] = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return (uint)piVar1;
}

/* ref: FUN_00c327b0 */
GEN_FRAME byte GEN_THISCALL F_00c327b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc327b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c327f0 */
GEN_FRAME uint GEN_STDCALL F_00c327f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc327f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x15555556) && (uVar1 = F_004069f0(param_1 * 0xc), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00c32840 */
GEN_NOFRAME byte GEN_THISCALL F_00c32840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32840u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_SUSPECT(0xc32840u, "uStack_1a");
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * piVar1;
  short * psVar2;
  undefined8 * puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulonglong * puVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined2 uStack_1a;
  
  if (*(char *)((int)this + 0x18) != '\0') {
    iVar6 = _InterlockedCompareExchange((volatile long *)(((int *)((int)this + 0x14))), (long)(1), (long)(0));
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x10) != 0) {
    if (*(char *)((int)this + 0x18) != '\0') {
      _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x14))), (long)(0));
    }
    return 0;
  }
  iVar6 = *(int *)(param_1 + 0x20);
  uVar9 = iVar6 + 0x13U & 0xfffffffc;
  if (*(int *)((int)this + 0xc) + 0x20 + uVar9 <= *(uint *)this) {
    if (*(int *)((int)this + 0xc) == 0) {
      puVar3 = *(undefined8 * PTR32 *)((int)this + 8);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x10))) = 0x20;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = 1;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x14))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + 0x16))) = 0;
      *(undefined4 *)((int)this + 0xc) = 0x20;
      **(undefined1 * PTR32 *)((int)this + 8) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 1))) = 0x52;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 2))) = 0xa0;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 3))) = 0x41;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = 0xff;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x14);
    uVar5 = *(undefined4 *)(param_1 + 0x18);
    puVar7 = ((ulonglong *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8))));
    *puVar7 = CONCAT44(uVar4,iVar6 + 0x13U) & 0xfffffffffffffffc;
    puVar7[1] = CONCAT26(uStack_1a,CONCAT24(3,uVar5));
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 0x10;
    F_00c46aa0(*(int *)((int)this + 8) + *(int *)((int)this + 0xc),*(undefined4 *)(param_1 + 0x24),
               iVar6);
    if (param_2 != (int *)0x0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_2 + 0x18))
                (param_2 GEN_EDX_ARG,uVar4,*(int *)((int)this + 0xc) + *(int *)((int)this + 8),iVar6);
    }
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + iVar6;
    piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 8) + 0x10)));
    *piVar1 = *piVar1 + uVar9;
    psVar2 = ((short *)GEN_TOP((*(int *)((int)this + 8) + 0x16)));
    *psVar2 = *psVar2 + 1;
    uVar10 = F_0046ff40();
    *((ulonglong *)GEN_TOP((*(int *)((int)this + 8) + 8))) = uVar10;
    for (uVar8 = iVar6 + 0x10; uVar8 < uVar9; uVar8 = uVar8 + 1) {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 0xc) + *(int *)((int)this + 8)))) = 0;
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    }
    if (*(char *)((int)this + 0x18) != '\0') {
      _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x14))), (long)(0));
    }
    return 1;
  }
  if (*(char *)((int)this + 0x18) != '\0') {
    _InterlockedExchange((volatile long *)(((undefined4 *)((int)this + 0x14))), (long)(0));
  }
  return 0;
}

/* ref: FUN_00c32a00 */
GEN_FRAME uint GEN_STDCALL F_00c32a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00c32a20 */
GEN_FRAME uint GEN_THISCALL F_00c32a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c32a30 */
GEN_FRAME byte GEN_THISCALL F_00c32a30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c32a70 */
GEN_FRAME uint F_00c32a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc32a70u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  int iVar1;
  int * piVar2;
  
  piVar2 = param_2;
  if (param_2 == param_3) {
    *param_1 = (int)param_2;
    return (uint)param_1;
  }
  do {
    iVar1 = *(int *)(piVar2[2] + 0xc);
    if (((iVar1 != 0) && (iVar1 == param_4)) && (*(int *)(piVar2[2] + 0x10) == param_5)) break;
    piVar2 = (int *)*piVar2;
  } while (piVar2 != param_3);
  *param_1 = (int)piVar2;
  return (uint)param_1;
}

/* ref: FUN_00c32ac0 */
GEN_FRAME uint F_00c32ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClientModule::vf0 */
GEN_FRAME uint GEN_THISCALL F_00c32b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c32480(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c32b40 */
GEN_FRAME unsigned int GEN_THISCALL F_00c32b40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32510(*(undefined * PTR32 *)((int)this + 0x3b0) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00c32c00 */
GEN_FRAME uint GEN_THISCALL F_00c32c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c10 */
GEN_FRAME uint GEN_THISCALL F_00c32c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c20 */
GEN_FRAME uint GEN_THISCALL F_00c32c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32c50 */
GEN_FRAME uint GEN_THISCALL F_00c32c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if ((param_1 < 0) && ((uint)piVar1[8] < (uint)-param_1)) {
    piVar1[8] = 0;
  }
  else if ((param_1 < 1) || ((uint)(piVar1[8] + param_1) < 0x241)) {
    if (param_1 != 0) {
      piVar1[8] = piVar1[8] + param_1;
      ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 8))(piVar1 GEN_EDX_FWD,param_1);
    }
  }
  else {
    piVar1[8] = 0;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  uVar2 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 4))(this GEN_EDX_ARG);
  if (piVar1 + 3 != (int *)(uVar2 + 8)) {
    piVar1[3] = *(int *)(uVar2 + 8);
    piVar1[4] = *(int *)(uVar2 + 0xc);
  }
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xc))(this GEN_EDX_ARG,piVar1[9],piVar1[8]);
  return (uint)piVar1;
}

/* ref: FUN_00c32d00 */
GEN_FRAME uint GEN_THISCALL F_00c32d00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d00u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32d40 */
GEN_FRAME uint GEN_THISCALL F_00c32d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d40u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32d80 */
GEN_FRAME uint GEN_THISCALL F_00c32d80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32d80u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c32dc0 */
GEN_FRAME uint GEN_THISCALL F_00c32dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c32de0 */
GEN_FRAME uint GEN_STDCALL F_00c32de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32df0 */
GEN_FRAME uint GEN_THISCALL F_00c32df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (0x3ffffffeU - *(int *)((int)this + 4) < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00c32e20 */
GEN_FRAME uint F_00c32e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00c32e30 */
GEN_FRAME uint F_00c32e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32e30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00c32e50 */
GEN_FRAME uint GEN_THISCALL F_00c32e50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32e50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 8);
  if (param_1 != (undefined4 *)(iVar1 + 0x20)) {
    *param_1 = *(undefined4 *)(iVar1 + 0x20);
    param_1[1] = *(undefined4 *)(iVar1 + 0x24);
    param_1[2] = *(undefined4 *)(iVar1 + 0x28);
    param_1[3] = *(undefined4 *)(iVar1 + 0x2c);
    param_1[4] = *(undefined4 *)(iVar1 + 0x30);
    param_1[5] = *(undefined4 *)(iVar1 + 0x34);
    param_1[6] = *(undefined4 *)(iVar1 + 0x38);
    param_1[7] = *(undefined4 *)(iVar1 + 0x3c);
    param_1[10] = *(undefined4 *)(iVar1 + 0x48);
    param_1[0xb] = *(undefined4 *)(iVar1 + 0x4c);
    param_1[8] = *(undefined4 *)(iVar1 + 0x40);
    param_1[9] = *(undefined4 *)(iVar1 + 0x44);
  }
  uVar2 = *(uint *)((int)this + 8);
  *(undefined4 *)(uVar2 + 0x20) = 0;
  *(undefined4 *)(uVar2 + 0x24) = 0;
  *(undefined4 *)(uVar2 + 0x28) = 0;
  *(undefined4 *)(uVar2 + 0x2c) = 0;
  *(undefined4 *)(uVar2 + 0x30) = 0;
  *(undefined4 *)(uVar2 + 0x34) = 0;
  *(undefined4 *)(uVar2 + 0x38) = 0;
  *(undefined4 *)(uVar2 + 0x3c) = 0;
  *(undefined4 *)(uVar2 + 0x48) = 0;
  *(undefined4 *)(uVar2 + 0x4c) = 0;
  *(undefined4 *)(uVar2 + 0x40) = 0;
  *(undefined4 *)(uVar2 + 0x44) = 0;
  return uVar2;
}

/* ref: FUN_00c32ee0 */
GEN_FRAME uint GEN_THISCALL F_00c32ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  gen_size32 * psVar4;
  undefined4 uVar5;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x10);
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_FWD)));
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0x38))(piVar2 GEN_EDX_ARG)));
  uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2 GEN_EDX_ARG,*puVar1,0);
  if (uVar3 == 0) {
    return 0;
  }
  param_1[5] = uVar3;
  if (param_1 != (int *)0xfffffff8) {
    *(undefined4 *)(uVar3 + 0x14) = *(undefined4 *)((int)this + 0x14);
    if (*(int *)((int)this + 0x20) == 0) {
      uVar5 = *(undefined4 *)((int)this + 0x1c);
    }
    else {
      uVar5 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + 8)));
    }
    *(undefined4 *)(uVar3 + 0x18) = uVar5;
    puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG)));
    *(undefined4 *)(uVar3 + 0x20) = *puVar1;
    psVar4 = ((gen_size32 *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*param_1 + 4))(param_1 GEN_EDX_ARG)));
    F_00c48350(*(undefined * PTR32 *)(uVar3 + 0x24),0,*psVar4);
    if (param_1[5] != 0) {
      ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,*(undefined4 *)(param_1[5] + 0x24));
      return (uint)(param_1 + 2);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*param_1 + 8))(param_1 GEN_EDX_ARG,0);
    return (uint)(param_1 + 2);
  }
  return 0;
}

/* ref: FUN_00c32fb0 */
GEN_FRAME uint GEN_THISCALL F_00c32fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fc0 */
GEN_FRAME uint GEN_THISCALL F_00c32fc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fd0 */
GEN_FRAME uint GEN_THISCALL F_00c32fd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc32fd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00c32fe0 */
GEN_FRAME uint GEN_THISCALL F_00c32fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc32fe0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c33050 */
GEN_FRAME uint GEN_THISCALL F_00c33050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33050u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c330c0 */
GEN_FRAME uint GEN_THISCALL F_00c330c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc330c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00c33130 */
GEN_FRAME uint GEN_THISCALL F_00c33130(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33140 */
GEN_FRAME uint GEN_THISCALL F_00c33140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c33150 */
GEN_FRAME byte GEN_THISCALL F_00c33150(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33150u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x68);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  F_00c32fe0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) GEN_EDX_ARG,&(*(int *)&gen_args[1]),(*(int *)&gen_args[1]));
  if ((*(int *)&gen_args[1]) == *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)))) {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    return 0;
  }
  piVar1 = *(int * PTR32 *)((*(int *)&gen_args[1]) + 0x10);
  if ((char)(*(undefined4 *)&gen_args[3]) == '\0') {
    uVar6 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
    if ((char)uVar6 == '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return 0;
    }
  }
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  uVar2 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  iVar3 = piVar1[5];
  uVar4 = (undefined3)(*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) = iVar3 == 0;
  bVar5 = F_00c32840(piVar1 + 2 GEN_EDX_ARG,(*(undefined4 *)&gen_args[2]),uVar2);
  if ((bVar5 != 0) &&
     (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 1, (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 3)) != '\0')) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3)) = bVar5;
  if (((char)(*(undefined4 *)&gen_args[3]) != '\0') && (piVar1[5] != 0)) {
    uVar4 = (undefined3)(*(undefined4 *)&gen_args[2]);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG,(*(undefined * PTR32 *)&gen_args[0]));
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50));
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 3));
}

/* ref: FUN_00c33230 */
GEN_FRAME uint GEN_THISCALL F_00c33230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int * PTR32 *)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    F_00406ad0(param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  *param_1 = iVar1;
  return (uint)param_1;
}

/* ref: FUN_00c33270 */
GEN_FRAME uint GEN_STDCALL F_00c33270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    if (puVar1 + 2 != (undefined4 *)0x0) {
      puVar1[2] = *param_3;
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00c332c0 */
GEN_FRAME uint F_00c332c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc332c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00c32a70(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00c332f0 */
GEN_FRAME unsigned int GEN_THISCALL F_00c332f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc332f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00c32e50(*(undefined * PTR32 *)((int)this + 0x3b0) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00c33310 */
GEN_FRAME uint GEN_THISCALL F_00c33310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33310u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * piVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  piVar2 = (int *)F_00c33050(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if (*piVar2 != *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    uVar1 = *(uint *)(*piVar2 + 0x10);
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return uVar1;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00c33360 */
GEN_FRAME uint GEN_THISCALL F_00c33360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33360u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  F_00c330c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) == *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
    return 0;
  }
  uVar1 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00c333c0 */
GEN_NOFRAME uint GEN_THISCALL F_00c333c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc333c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)this));
  if (piVar1 != *(int * PTR32 *)this) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    piVar1 = (int *)F_00406ad0(piVar1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) - 1;
  }
  return (uint)piVar1;
}

/* ref: FUN_00c333f0 */
GEN_FRAME uint GEN_THISCALL F_00c333f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc333f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int * piVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = (int *)F_004069f0(0xc);
  if (piVar2 == (int *)0x0) {
    (*(undefined * PTR32 *)(gen_frame + 0x8)) = (undefined *)0x0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  *piVar2 = param_1;
  piVar2[1] = iVar1;
  if (piVar2 + 2 != (int *)0x0) {
    piVar2[2] = *param_2;
  }
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 4) + 1;
  *(int * PTR32 *)(param_1 + 4) = piVar2;
  *(int * PTR32 *)piVar2[1] = piVar2;
  return (uint)piVar2;
}

/* ref: FUN_00c33470 */
GEN_FRAME uint GEN_THISCALL F_00c33470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc33470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0xbc) == 0) {
    return 0;
  }
  (*(int *)(gen_frame + 0x8)) = *(int *)((int)this + 0xbc);
  ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_FWD);
  piVar1 = (int *)F_00c33050((undefined *)((int)this + 0x1c) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),&(*(int *)(gen_frame + 0x8)));
  if (*piVar1 == *(int *)((int)this + 0x20)) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
  }
  else {
    this_00 = *(undefined * PTR32 *)(*piVar1 + 0x10);
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00c33360(this_00 GEN_EDX_ARG,*(undefined4 *)((int)this + 0xbc));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00c334e0 */
GEN_FRAME uint GEN_THISCALL F_00c334e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc334e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = **(int * PTR32 *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33560 */
GEN_FRAME uint GEN_THISCALL F_00c33560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  int * piVar3;
  
  iVar1 = *(int *)this;
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
    F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 2 != (int *)0x0) {
    piVar3[2] = *param_1;
  }
  if (*(int *)((int)this + 4) == 0x3ffffffe) {
                    
    F_00c4579a("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int * PTR32 *)piVar3[1] = piVar3;
  return (uint)piVar3;
}

/* ref: FUN_00c33650 */
GEN_FRAME uint GEN_THISCALL F_00c33650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33650u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  undefined4 * puVar5;
  uint uVar6;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    if (*(int *)((*(int *)&gen_args[1]) + 0xc) != 0) {
      piVar4 = (int *)F_00c32a70(((undefined1 *)(gen_frame + 0x4)),**((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),
                                   *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))),*(undefined4 *)((*(int *)&gen_args[1]) + 0xc),
                                   *(undefined4 *)((*(int *)&gen_args[1]) + 0x10));
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
      if ((undefined4 *)*piVar4 != puVar1) {
        puVar5 = (undefined4 *)
                 F_00c32a70(((undefined1 *)(gen_frame + 0x4)),*(undefined4 *)*piVar4,puVar1,*(undefined4 *)(iVar2 + 0xc),
                              *(undefined4 *)(iVar2 + 0x10));
        puVar5 = (undefined4 *)*puVar5;
        if (puVar5 != puVar1) {
          iVar2 = puVar5[2];
          F_00c33230(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x4)),puVar5);
          piVar4 = *(int * PTR32 *)(iVar2 + 8);
          ((GEN_TCODE *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4 GEN_EDX_ARG,iVar2);
        }
      }
    }
    F_00c33560(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_ARG,&(*(int *)&gen_args[1]));
  }
  piVar4 = *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  uVar6 = 0;
  if ((int *)*piVar4 != piVar4) {
    piVar3 = (int *)*piVar4;
    uVar6 = ((int *)*piVar4)[2];
    if (piVar3 != piVar4) {
      *(int *)piVar3[1] = *piVar3;
      *(int *)(*piVar3 + 4) = piVar3[1];
      F_00406ad0(piVar3);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
    }
  }
  return uVar6;
}

/* ref: FUN_00c33710 */
GEN_FRAME unsigned int GEN_THISCALL F_00c33710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33710u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if ((*(int *)&gen_args[1]) != 0) {
    F_00c334e0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) GEN_EDX_FWD,&(*(int *)&gen_args[1]));
  }
  return;
}

/* ref: FUN_00c33730 */
GEN_FRAME uint GEN_THISCALL F_00c33730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc33730u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * PTR32 * ppuVar6;
  undefined4 * puVar7;
  int iVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*(undefined * PTR32 *)&gen_args[0]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) == 0) {
    uVar3 = 0;
    if ((*(uint *)&gen_args[1]) != 0) {
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) GEN_EDX_FWD,(*(uint *)&gen_args[1]));
      return uVar3;
    }
  }
  else {
    if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 8)));
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) GEN_EDX_ARG);
    (*(uint *)&gen_args[1]) = F_00c33650(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
    while ((*(uint *)&gen_args[1]) != 0) {
      if (iVar8 == 0) {
joined_r0x00c338c0: ;
        if ((*(uint *)&gen_args[1]) != 0) {
          F_00c334e0(((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
        }
        break;
      }
      lpCriticalSection = (LPCRITICAL_SECTION)(iVar8 + 0x68);
      gen_imp_EnterCriticalSection(lpCriticalSection);
      puVar7 = *(undefined4 * PTR32 *)(iVar8 + 0x10);
      if (*(char *)((int)puVar7[1] + 0x15) == '\0') {
        puVar4 = (undefined4 *)puVar7[1];
        do {
          if ((uint)puVar4[3] < *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)))) {
            puVar5 = (undefined4 *)puVar4[2];
          }
          else {
            puVar5 = (undefined4 *)*puVar4;
            puVar7 = puVar4;
          }
          puVar4 = puVar5;
        } while (*(char *)((int)puVar5 + 0x15) == '\0');
      }
      puVar4 = *(undefined4 * PTR32 *)(iVar8 + 0x10);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = puVar7;
      if ((puVar7 == puVar4) || (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) < (uint)puVar7[3])) {
        (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = puVar4;
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0xc));
      }
      else {
        ppuVar6 = &(*(undefined4 * PTR32 *)(gen_frame + 0x10));
      }
      if (*ppuVar6 == *(undefined4 * PTR32 *)(iVar8 + 0x10)) {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        goto joined_r0x00c338c0;
      }
      piVar1 = ((int *)GEN_TOP((*ppuVar6)[4]));
      uVar3 = ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1 GEN_EDX_ARG);
      if ((char)uVar3 == '\0') {
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        goto joined_r0x00c338c0;
      }
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      (*(bool *)(gen_frame + 0x1b)) = piVar1[5] == 0;
      bVar2 = F_00c32840(piVar1 + 2 GEN_EDX_ARG,(*(uint *)&gen_args[1]),*(undefined4 *)(iVar8 + 0x80));
      (*(byte *)(gen_frame + 0x1a)) = bVar2;
      if ((bVar2 != 0) && (*(int *)(iVar8 + 0x24) = *(int *)(iVar8 + 0x24) + 1, (*(bool *)(gen_frame + 0x1b)) != false)) {
        *(int *)(iVar8 + 0x20) = *(int *)(iVar8 + 0x20) + 1;
      }
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar8 + 0x50));
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
      if ((*(byte *)(gen_frame + 0x1a)) == 0) goto joined_r0x00c338c0;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) + 0x10))))(*(int * PTR32 *)((*(uint *)&gen_args[1]) + 8) GEN_EDX_ARG,(*(uint *)&gen_args[1]));
      (*(uint *)&gen_args[1]) = F_00c33650(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x14)) + 0x24) GEN_EDX_ARG,0);
      (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x14));
    }
    uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) GEN_EDX_ARG);
  }
  return uVar3;
}

/* ref: FUN_00c338d0 */
GEN_FRAME uint GEN_THISCALL F_00c338d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc338d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c32c50(param_1 GEN_EDX_FWD,param_2);
  uVar1 = F_00c33730(*(undefined * PTR32 *)((int)this + 0x20) GEN_EDX_ARG,uVar1);
  return uVar1;
}

/* ref: FUN_00c338f0 */
GEN_FRAME uint GEN_THISCALL F_00c338f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc338f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  byte bVar1;
  undefined * pvVar2;
  uint uVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  if (*(undefined * PTR32 *)((int)this + 0x3b0) == (undefined *)0x0) goto LAB_00c33c5a;
  if (*(int *)((int)this + 0x3b4) == 0) {
    pvVar2 = (undefined *)F_00c33470(*(undefined * PTR32 *)((int)this + 0x3b0) GEN_EDX_FWD);
    (*(undefined * PTR32 *)(gen_frame + 0x50)) = pvVar2;
    if (pvVar2 != (undefined *)0x0) {
      if (**(char * PTR32 *)((int)this + 0x460) == '\0') {
LAB_00c33958: ;
        if ((**(char * PTR32 *)((int)this + 0x514) != '\0') || (**(char * PTR32 *)((int)this + 0x568) != '\0'))
        goto LAB_00c33a19;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)) GEN_EDX_ARG,0x1f5,0x38,0);
        uVar3 = F_00c32ee0(pvVar2 GEN_EDX_ARG,((int *)(gen_frame + 0x18)));
        if (uVar3 != 0) {
          puVar4 = (undefined4 *)F_00e3bc00(((int *)(gen_frame + 0x18)) GEN_EDX_ARG);
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar4 = *(undefined4 *)((int)this + 0x510);
          uVar3 = F_0042a990((int)this + 0x3b8 GEN_EDX_ARG);
          uVar3 = F_00c4c74c(uVar3);
          puVar4[1] = uVar3 | 0x80000000;
          *(undefined8 *)(puVar4 + 2) = 0;
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 8) = 0;
          uVar3 = F_0042a970((int)this + 0x40c GEN_EDX_ARG);
          uVar5 = F_0042a990((int)this + 0x40c GEN_EDX_ARG);
          F_00c4d9ef(puVar4 + 2,0x20,uVar5,uVar3);
          goto LAB_00c33b2b;
        }
      }
      else {
        bVar1 = F_0042b6a0((undefined *)((int)this + 0x460) GEN_EDX_ARG,&REFG(undefined, 0x10c4408));
        if (bVar1 != 0) goto LAB_00c33958;
LAB_00c33a19: ;
        F_00e39ed0((undefined *)((int *)(gen_frame + 0x18)) GEN_EDX_ARG,0x1f6,0x98,0);
        uVar3 = F_00c32ee0(pvVar2 GEN_EDX_ARG,((int *)(gen_frame + 0x18)));
        if (uVar3 != 0) {
          puVar4 = (undefined4 *)F_00e3bc20(((int *)(gen_frame + 0x18)) GEN_EDX_ARG);
          *(int *)((int)this + 0x510) = *(int *)((int)this + 0x510) + 1;
          *puVar4 = *(undefined4 *)((int)this + 0x510);
          uVar3 = F_0042a990((int)this + 0x3b8 GEN_EDX_ARG);
          uVar3 = F_00c4c74c(uVar3);
          puVar4[1] = uVar3 | 0x80000000;
          *(undefined8 *)(puVar4 + 2) = 0;
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 8) = 0;
          F_00c48350(puVar4 + 10,0,0x40);
          uVar3 = F_0042a970((int)this + 0x40c GEN_EDX_ARG);
          uVar5 = F_0042a990((int)this + 0x40c GEN_EDX_ARG);
          F_00c4d9ef(puVar4 + 2,0x20,uVar5,uVar3);
          uVar3 = F_0042a970((int)this + 0x460 GEN_EDX_ARG);
          uVar5 = F_0042a990((int)this + 0x460 GEN_EDX_ARG);
          F_00c4d9ef(puVar4 + 0x1a,0x20,uVar5,uVar3);
          bVar1 = F_0042b6a0((undefined *)((int)this + 0x460) GEN_EDX_ARG,&REFG(undefined, 0x10c4408));
          if (bVar1 != 0) {
            F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
            F_0042ccf0((undefined *)((int)this + 0x460) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
            F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
          }
LAB_00c33b2b: ;
          iVar6 = (*(int *)(gen_frame + 0x2c));
          (*(int *)(gen_frame + 0x2c)) = 0;
          uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 4))(((int *)(gen_frame + 0x18)) GEN_EDX_ARG);
          if ((undefined4 *)(iVar6 + 0xc) != (undefined4 *)(uVar3 + 8)) {
            *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(uVar3 + 8);
            *(undefined4 *)(iVar6 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
          }
          ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x18))[0] + 0xc))
                    (((int *)(gen_frame + 0x18)) GEN_EDX_ARG,*(undefined4 *)(iVar6 + 0x24),*(undefined4 *)(iVar6 + 0x20));
          F_00c33730(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0x20) GEN_EDX_ARG,iVar6);
          *(undefined4 *)((int)this + 0x3b4) = 1;
        }
      }
      F_00e39da0(((int *)(gen_frame + 0x18)) GEN_EDX_ARG);
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x3b0) != (undefined *)0x0) {
    F_00e47910(*(undefined * PTR32 *)((int)this + 0x3b0) GEN_EDX_ARG);
  }
  F_01050b60(((undefined1 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  pvVar2 = *(undefined * PTR32 *)((int)this + 0x3b0);
  iVar6 = 0;
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  (*(int *)(gen_frame + 0xc)) = 0;
  (*(undefined8 *)(gen_frame + 0x10)) = 0;
  if (pvVar2 != (undefined *)0x0) {
    bVar1 = F_00e47880(pvVar2 GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
    if (bVar1 != 0) {
      if ((*(int *)(gen_frame + 0xc)) != 0) {
        iVar6 = *(int *)((*(int *)(gen_frame + 0xc)) + 0x24);
      }
      if (*(short *)(iVar6 + 2) == 0x1f5) {
        F_0042cc20(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG,iVar6 + 0x1c,REFG(undefined4, 0x108cc50));
        F_0042ccf0((undefined *)((int)this + 0x4b4) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x54)));
        F_0042c880(((undefined1 *)(gen_frame + 0x54)) GEN_EDX_ARG);
        *(undefined2 *)((int)this + 0x508) = *(undefined2 *)(iVar6 + 0x1a);
        *(undefined4 *)((int)this + 0x50c) = *(undefined4 *)(iVar6 + 0x14);
        *(undefined4 *)((int)this + 0x3b4) = 2;
      }
    }
  }
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = (*(undefined * PTR32 (*)[1])REFP(0x110f8ac));
  F_01050b70();
LAB_00c33c5a: ;
  uVar3 = F_00e40300(this GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00c33c70 */
GEN_FRAME uint F_00c33c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c33c90 */
GEN_FRAME uint F_00c33c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_2 + 0x58);
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      (&REFG(undefined1, 0x14c5c30))[(int)(iVar3)] = *(undefined1 *)(iVar1 + iVar3);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  uVar4 = F_00c46aa0(*(undefined4 *)(param_2 + 0x60),&REFG(undefined1, 0x14c5c30),*(undefined4 *)(param_2 + 0x68));
  return (uint)uVar4;
}

/* ref: FUN_00c33cf0 */
GEN_FRAME uint F_00c33cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c33d10 */
GEN_FRAME uint F_00c33d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33d10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(*(undefined4 *)(param_2 + 0x60),*(undefined4 *)(param_1 + 4),
                     *(undefined4 *)(param_2 + 0x58));
  return (uint)uVar1;
}

/* ref: FUN_00c33d30 */
GEN_FRAME uint F_00c33d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc33d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(*(undefined4 *)(param_4 + 4),param_1,(uint)*(ushort *)(param_4 + 2));
  return (uint)uVar1;
}

/* ref: FUN_00c33d60 */
GEN_FRAME uint F_00c33d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33d60u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = REFG(undefined4, 0x14c9c30); 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00c33d8e;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00c33d8e: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return iVar1 >> 0x1f | 1;
}

/* ref: FUN_00c33de0 */
GEN_FRAME uint F_00c33de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33de0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  int iVar1;
  byte * pbVar2;
  byte * pbVar3;
  uint uVar4;
  
  pbVar3 = param_1;
  pbVar2 = param_2;
  for (uVar4 = REFG(undefined4, 0x14c9c30); 3 < uVar4; uVar4 = uVar4 - 4) {
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00c33e0e;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00c33e0e: ;
  iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  if (iVar1 == 0) {
    if (uVar4 < 2) {
      return 0;
    }
    iVar1 = (uint)pbVar3[1] - (uint)pbVar2[1];
    if (iVar1 == 0) {
      if (uVar4 < 3) {
        return 0;
      }
      iVar1 = (uint)pbVar3[2] - (uint)pbVar2[2];
      if (iVar1 == 0) {
        if (uVar4 < 4) {
          return 0;
        }
        iVar1 = (uint)pbVar3[3] - (uint)pbVar2[3];
      }
    }
  }
  return -(iVar1 >> 0x1f | 1U);
}

/* ref: FUN_00c33e60 */
GEN_FRAME uint F_00c33e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc33e60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined * _Base;
  int iVar2;
  code * _PtFuncCompare;
  uint uVar3;
  ulonglong uVar4;
  
  REFG(undefined4, 0x14c9c30) = *(gen_size32 *)(param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x68);
  _Base = *(undefined * PTR32 *)(param_1 + 4);
  uVar3 = *(gen_size32 *)(param_2 + 0x60) * REFG(undefined4, 0x14c9c30);
  _PtFuncCompare = ((code *)REFP(0xc33d60));
  if (*(int *)(param_2 + 0x70) == 0 && *(int *)(param_2 + 0x74) == 0) {
    _PtFuncCompare = ((code *)REFP(0xc33de0));
  }
  F_00c4f040(_Base,*(gen_size32 *)(param_2 + 0x60),REFG(undefined4, 0x14c9c30),_PtFuncCompare);
  iVar2 = *(int *)(param_1 + 8);
  *(short *)(iVar2 + 2) = (short)uVar3;
  *(undefined4 *)(iVar2 + 4) = uVar1;
  uVar4 = F_00c46aa0(uVar1,_Base,uVar3 & 0xffff);
  return (uint)uVar4;
}

/* ref: FUN_00c33f00 */
GEN_FRAME unsigned int F_00c33f00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc33f00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float in_xmm0 = (float)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  float fVar11;
  undefined1 in_register_00001204 [12];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  
  if ((REFG(undefined4, 0x14c9c70) & 1) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 1;
    *(uint *)&REFG(undefined, 0x14c9c60) = *(uint *)&REFG(undefined, 0x110f8c0);
    REFG(uint, 0x014c9c64) = *(uint *)&REFG(undefined, 0x110f8c4);
    REFG(uint, 0x014c9c68) = *(uint *)&REFG(undefined, 0x110f8c8);
    REFG(uint, 0x014c9c6c) = *(uint *)&REFG(undefined, 0x110f8cc);
  }
  if ((REFG(undefined4, 0x14c9c70) & 2) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 2;
    *(uint *)&REFG(undefined, 0x14c9c50) = *(uint *)&REFG(undefined, 0x110f8d0);
    REFG(uint, 0x014c9c54) = *(uint *)&REFG(undefined, 0x110f8d4);
    REFG(uint, 0x014c9c58) = *(uint *)&REFG(undefined, 0x110f8d8);
    REFG(uint, 0x014c9c5c) = *(uint *)&REFG(undefined, 0x110f8dc);
  }
  if ((REFG(undefined4, 0x14c9c70) & 4) == 0) {
    REFG(undefined4, 0x14c9c70) = REFG(undefined4, 0x14c9c70) | 4;
    *(uint *)&REFG(undefined, 0x14c9c40) = *(uint *)&REFG(undefined, 0x110f8e0);
    REFG(uint, 0x014c9c44) = *(uint *)&REFG(undefined, 0x110f8e4);
    REFG(uint, 0x014c9c48) = *(uint *)&REFG(undefined, 0x110f8e8);
    REFG(uint, 0x014c9c4c) = *(uint *)&REFG(undefined, 0x110f8ec);
  }
  uVar16 = (uint)(*(float *)&REFG(undefined, 0x110f9b4) * (*(float *)((char *)&in_register_00001204 + 0)));
  uVar19 = (uint)(*(float *)&REFG(undefined, 0x110f9b8) * (*(float *)((char *)&in_register_00001204 + 4)));
  uVar22 = (uint)(*(float *)&REFG(undefined, 0x110f9bc) * (*(float *)((char *)&in_register_00001204 + 8)));
  uVar2 = (int)(*(float *)&REFG(undefined, 0x110f9b0) * in_xmm0) & *(uint *)&REFG(undefined, 0x14c9c60);
  uVar5 = uVar16 & REFG(uint, 0x014c9c64);
  uVar9 = uVar19 & REFG(uint, 0x014c9c68);
  uVar25 = uVar22 & REFG(uint, 0x014c9c6c);
  fVar14 = (float)(int)(*(float *)&REFG(undefined, 0x110f9b0) * in_xmm0);
  fVar17 = (float)(int)uVar16;
  fVar20 = (float)(int)uVar19;
  fVar23 = (float)(int)uVar22;
  fVar14 = (in_xmm0 - *(float *)&REFG(undefined, 0x110f9a0) * fVar14) - *(float *)&REFG(undefined, 0x110f990) * fVar14;
  fVar10 = ((*(float *)((char *)&in_register_00001204 + 0)) - *(float *)&REFG(undefined, 0x110f9a4) * fVar17) -
           *(float *)&REFG(undefined, 0x110f994) * fVar17;
  fVar11 = ((*(float *)((char *)&in_register_00001204 + 4)) - *(float *)&REFG(undefined, 0x110f9a8) * fVar20) -
           *(float *)&REFG(undefined, 0x110f998) * fVar20;
  fVar12 = ((*(float *)((char *)&in_register_00001204 + 8)) - *(float *)&REFG(undefined, 0x110f9ac) * fVar23) -
           *(float *)&REFG(undefined, 0x110f99c) * fVar23;
  fVar17 = fVar14 * fVar14;
  fVar20 = fVar10 * fVar10;
  fVar23 = fVar11 * fVar11;
  fVar13 = fVar12 * fVar12;
  fVar15 = ((*(float *)&REFG(undefined, 0x110f980) * fVar17 + *(float *)&REFG(undefined, 0x110f960)) * fVar17 +
           *(float *)&REFG(undefined, 0x110f950)) * fVar17 + *(float *)&REFG(undefined, 0x110f930);
  fVar18 = ((*(float *)&REFG(undefined, 0x110f984) * fVar20 + *(float *)&REFG(undefined, 0x110f964)) * fVar20 +
           *(float *)&REFG(undefined, 0x110f954)) * fVar20 + *(float *)&REFG(undefined, 0x110f934);
  fVar21 = ((*(float *)&REFG(undefined, 0x110f988) * fVar23 + *(float *)&REFG(undefined, 0x110f968)) * fVar23 +
           *(float *)&REFG(undefined, 0x110f958)) * fVar23 + *(float *)&REFG(undefined, 0x110f938);
  fVar24 = ((*(float *)&REFG(undefined, 0x110f98c) * fVar13 + *(float *)&REFG(undefined, 0x110f96c)) * fVar13 +
           *(float *)&REFG(undefined, 0x110f95c)) * fVar13 + *(float *)&REFG(undefined, 0x110f93c);
  fVar14 = ((*(float *)&REFG(undefined, 0x110f970) * fVar17 + *(float *)&REFG(undefined, 0x110f940)) * fVar17 +
           *(float *)&REFG(undefined, 0x110f920)) * (fVar17 * fVar14) + fVar14;
  fVar10 = ((*(float *)&REFG(undefined, 0x110f974) * fVar20 + *(float *)&REFG(undefined, 0x110f944)) * fVar20 +
           *(float *)&REFG(undefined, 0x110f924)) * (fVar20 * fVar10) + fVar10;
  fVar11 = ((*(float *)&REFG(undefined, 0x110f978) * fVar23 + *(float *)&REFG(undefined, 0x110f948)) * fVar23 +
           *(float *)&REFG(undefined, 0x110f928)) * (fVar23 * fVar11) + fVar11;
  fVar12 = ((*(float *)&REFG(undefined, 0x110f97c) * fVar13 + *(float *)&REFG(undefined, 0x110f94c)) * fVar13 +
           *(float *)&REFG(undefined, 0x110f92c)) * (fVar13 * fVar12) + fVar12;
  uVar16 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x14c9c50)) == *(float *)&REFG(undefined, 0x110f910));
  uVar19 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x014c9c54)) == *(float *)&REFG(undefined, 0x110f914));
  uVar22 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x014c9c58)) == *(float *)&REFG(undefined, 0x110f918));
  uVar6 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x014c9c5c)) == *(float *)&REFG(undefined, 0x110f91c));
  fVar23 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar13 = gen_bits2f(uVar19 & (uint)gen_fl2bits(fVar10) | ~uVar19 & (uint)gen_fl2bits(fVar18));
  fVar26 = gen_bits2f(uVar22 & (uint)gen_fl2bits(fVar11) | ~uVar22 & (uint)gen_fl2bits(fVar21));
  fVar27 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar12) | ~uVar6 & (uint)gen_fl2bits(fVar24));
  uVar16 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x14c9c50) + uVar2 & *(uint *)&REFG(undefined, 0x14c9c50)) ==
                  *(float *)&REFG(undefined, 0x110f910));
  uVar6 = -(uint)((float)(int)(REFG(uint, 0x014c9c54) + uVar5 & REFG(uint, 0x014c9c54)) == *(float *)&REFG(undefined, 0x110f914));
  uVar3 = -(uint)((float)(int)(REFG(uint, 0x014c9c58) + uVar9 & REFG(uint, 0x014c9c58)) == *(float *)&REFG(undefined, 0x110f918));
  uVar7 = -(uint)((float)(int)(REFG(uint, 0x014c9c5c) + uVar25 & REFG(uint, 0x014c9c5c)) == *(float *)&REFG(undefined, 0x110f91c));
  uVar19 = -(uint)((float)(int)(uVar2 & *(uint *)&REFG(undefined, 0x14c9c40)) == *(float *)&REFG(undefined, 0x110f910));
  uVar1 = -(uint)((float)(int)(uVar5 & REFG(uint, 0x014c9c44)) == *(float *)&REFG(undefined, 0x110f914));
  uVar4 = -(uint)((float)(int)(uVar9 & REFG(uint, 0x014c9c48)) == *(float *)&REFG(undefined, 0x110f918));
  uVar8 = -(uint)((float)(int)(uVar25 & REFG(uint, 0x014c9c4c)) == *(float *)&REFG(undefined, 0x110f91c));
  uVar22 = -(uint)((float)(int)(*(uint *)&REFG(undefined, 0x14c9c50) + uVar2 & *(uint *)&REFG(undefined, 0x14c9c40)) ==
                  *(float *)&REFG(undefined, 0x110f910));
  uVar2 = -(uint)((float)(int)(REFG(uint, 0x014c9c54) + uVar5 & REFG(uint, 0x014c9c44)) == *(float *)&REFG(undefined, 0x110f914));
  uVar5 = -(uint)((float)(int)(REFG(uint, 0x014c9c58) + uVar9 & REFG(uint, 0x014c9c48)) == *(float *)&REFG(undefined, 0x110f918));
  uVar9 = -(uint)((float)(int)(REFG(uint, 0x014c9c5c) + uVar25 & REFG(uint, 0x014c9c4c)) == *(float *)&REFG(undefined, 0x110f91c));
  fVar28 = *(float *)&REFG(undefined, 0x110f914) - fVar13;
  fVar29 = *(float *)&REFG(undefined, 0x110f918) - fVar26;
  fVar30 = *(float *)&REFG(undefined, 0x110f91c) - fVar27;
  fVar15 = gen_bits2f(uVar16 & (uint)gen_fl2bits(fVar14) | ~uVar16 & (uint)gen_fl2bits(fVar15));
  fVar18 = gen_bits2f(uVar6 & (uint)gen_fl2bits(fVar10) | ~uVar6 & (uint)gen_fl2bits(fVar18));
  fVar11 = gen_bits2f(uVar3 & (uint)gen_fl2bits(fVar11) | ~uVar3 & (uint)gen_fl2bits(fVar21));
  fVar12 = gen_bits2f(uVar7 & (uint)gen_fl2bits(fVar12) | ~uVar7 & (uint)gen_fl2bits(fVar24));
  fVar14 = *(float *)&REFG(undefined, 0x110f910) - fVar15;
  fVar17 = *(float *)&REFG(undefined, 0x110f914) - fVar18;
  fVar10 = *(float *)&REFG(undefined, 0x110f918) - fVar11;
  fVar20 = *(float *)&REFG(undefined, 0x110f91c) - fVar12;
  *param_3 = ~uVar19 & (uint)gen_fl2bits(*(float *)&REFG(undefined, 0x110f910) - fVar23) |
             (uint)gen_fl2bits(fVar23) & uVar19;
  param_3[1] = ~uVar1 & (uint)gen_fl2bits(fVar28) | (uint)gen_fl2bits(fVar13) & uVar1;
  param_3[2] = ~uVar4 & (uint)gen_fl2bits(fVar29) | (uint)gen_fl2bits(fVar26) & uVar4;
  param_3[3] = ~uVar8 & (uint)gen_fl2bits(fVar30) | (uint)gen_fl2bits(fVar27) & uVar8;
  *in_ecx = ~uVar22 & (uint)gen_fl2bits(fVar14) | (uint)gen_fl2bits(fVar15) & uVar22;
  in_ecx[1] = ~uVar2 & (uint)gen_fl2bits(fVar17) | (uint)gen_fl2bits(fVar18) & uVar2;
  in_ecx[2] = ~uVar5 & (uint)gen_fl2bits(fVar10) | (uint)gen_fl2bits(fVar11) & uVar5;
  in_ecx[3] = ~uVar9 & (uint)gen_fl2bits(fVar20) | (uint)gen_fl2bits(fVar12) & uVar9;
  return 0;
}

/* ref: FUN_00c34080 */
GEN_FRAME uint F_00c34080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34080u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  undefined * this;
  int iVar3;
  undefined * pvVar4;
  int iVar5;
  ulonglong uVar6;
  
  pvVar4 = *(undefined * PTR32 *)(param_1 + 4);
  iVar1 = *(int *)(param_2 + 0x60);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(param_2 + 0x58);
  iVar2 = *(int *)(param_2 + 0x78);
  iVar5 = *(int *)(param_2 + 0x7c);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar4;
  (*(float *)(gen_frame + 0x24)) = *(float *)(param_2 + 0x6c);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(param_2 + 0x70);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(param_2 + 0x80);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(param_2 + 0x88);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(param_2 + 0x90);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(param_2 + 0x98);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(param_2 + 0xa0);
  this = pvVar4;
  iVar3 = iVar1;
  if (iVar2 != 0 || iVar5 != 0) {
    for (; iVar3 != 0; iVar3 = iVar3 - 1) {
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar4;
      F_00c34870(this GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)));
      this = (undefined *)((int)this + 0x40);
      pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x28));
    }
  }
  iVar5 = *(int *)(param_1 + 8);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = (undefined *)iVar5;
  for (iVar2 = iVar1; iVar2 != 0; iVar2 = iVar2 - 1) {
    F_00c34d30(pvVar4 GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x8)),(*(float *)(gen_frame + 0x24)),iVar5);
    iVar5 = iVar5 + 0x30;
    pvVar4 = (undefined *)((int)pvVar4 + 0x40);
  }
  F_00c46aa0((*(undefined4 *)(gen_frame + 0x1c)),*(undefined4 *)(param_1 + 4),(*(undefined4 *)(gen_frame + 0x20)));
  uVar6 = F_00c46aa0((*(undefined4 *)(gen_frame + 0x18)),(*(undefined * PTR32 *)(gen_frame + 0x28)),iVar1 * 0x30);
  return (uint)uVar6;
}

/* ref: FUN_00c34180 */
GEN_NOFRAME uint GEN_THISCALL F_00c34180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc34180u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  *(ulonglong *)in_ecx =
       CONCAT44((uint)gen_fl2bits(gen_bits2f((uint)((ulonglong)*(undefined8 *)((int)(uintptr_t)param_2) >> 0x20)) +
                                  in_ecx[1]),(uint)gen_fl2bits(*param_2 + *in_ecx));
  *(ulonglong *)(in_ecx + 2) =
       CONCAT44((uint)gen_fl2bits(fVar2 + in_ecx[3]),(uint)gen_fl2bits(fVar1 + in_ecx[2]));
  return (uint)in_ecx;
}

/* ref: FUN_00c34320 */
GEN_NOFRAME uint GEN_THISCALL F_00c34320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34320u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar16;
  
  fVar1 = param_3[3];
  fVar2 = param_3[2];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = in_ecx[7];
  fVar6 = in_ecx[3];
  fVar7 = in_ecx[5];
  fVar8 = in_ecx[6];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[1];
  fVar11 = in_ecx[0xb];
  fVar12 = in_ecx[10];
  fVar13 = in_ecx[9];
  fVar14 = in_ecx[0xf];
  fVar15 = in_ecx[0xe];
  fVar16 = in_ecx[0xd];
  *param_2 = ((in_ecx[4] * fVar4 + *in_ecx * fVar3) + in_ecx[8] * fVar2) + in_ecx[0xc] * fVar1;
  param_2[1] = ((fVar7 * fVar4 + fVar10 * fVar3) + fVar13 * fVar2) + fVar16 * fVar1;
  param_2[2] = ((fVar8 * fVar4 + fVar9 * fVar3) + fVar12 * fVar2) + fVar15 * fVar1;
  param_2[3] = ((fVar5 * fVar4 + fVar6 * fVar3) + fVar11 * fVar2) + fVar14 * fVar1;
  return (uint)param_2;
}

/* ref: FUN_00c34430 */
GEN_NOFRAME unsigned int F_00c34430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc34430u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  (*(float *)(gen_frame + 0x20)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d0) == *(float *)&REFG(undefined, 0x110f9c0)));
  (*(float *)(gen_frame + 0x24)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d4) == *(float *)&REFG(undefined, 0x110f9c4)));
  (*(float *)(gen_frame + 0x28)) = gen_bits2f(-(uint)(*(float *)&REFG(undefined, 0x110f9d8) == *(float *)&REFG(undefined, 0x110f9c8)));
  (*(float *)(gen_frame + 0x2c)) = gen_bits2f(-(uint)(REFG(float, 0x110f9dc) == *(float *)&REFG(undefined, 0x110f9cc)));
  F_00c33f00(&(*(float *)(gen_frame + 0x10)),GEN_TOF(gen_bits2f(*param_2 & -(uint)(*(float *)&REFG(undefined, 0x110f9d0) == *(float *)&REFG(undefined, 0x110f9c0)))),
               &(*(float *)(gen_frame + 0x0)));
  fVar3 = (*(float *)(gen_frame + 0x1c));
  fVar6 = (*(float *)(gen_frame + 0x18));
  fVar9 = (*(float *)(gen_frame + 0x14));
  fVar2 = (*(float *)(gen_frame + 0x10));
  fVar10 = (*(float *)(gen_frame + 0xc));
  fVar7 = (*(float *)(gen_frame + 0x8));
  fVar8 = (*(float *)(gen_frame + 0x4));
  fVar11 = (*(float *)(gen_frame + 0x0));
  fVar1 = REFG(float, 0x110f9dc);
  fVar12 = *(float *)&REFG(undefined, 0x110f9c0) - (*(float *)(gen_frame + 0x0));
  fVar13 = *(float *)&REFG(undefined, 0x110f9c4) - (*(float *)(gen_frame + 0x4));
  fVar15 = *(float *)&REFG(undefined, 0x110f9c8) - (*(float *)(gen_frame + 0x8));
  fVar16 = *(float *)&REFG(undefined, 0x110f9cc) - (*(float *)(gen_frame + 0xc));
  (*(float *)(gen_frame + 0x0)) = fVar12;
  (*(float *)(gen_frame + 0x4)) = fVar13;
  (*(float *)(gen_frame + 0x8)) = fVar15;
  (*(float *)(gen_frame + 0xc)) = fVar16;
  fVar15 = gen_bits2f((uint)gen_fl2bits(fVar15) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x20))));
  fVar14 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x24))));
  fVar16 = gen_bits2f((uint)gen_fl2bits(fVar16) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x28))));
  fVar17 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x1c))) & (uint)gen_fl2bits((*(float *)(gen_frame + 0x2c))));
  fVar4 = (*(float *)(gen_frame + 0x14)) * (*(float *)(gen_frame + 0x18));
  fVar5 = (*(float *)(gen_frame + 0x14)) * fVar7;
  fVar13 = fVar13 * (*(float *)(gen_frame + 0x1c));
  fVar12 = fVar12 * fVar10;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  (*(float *)(gen_frame + 0x8)) = fVar13;
  (*(float *)(gen_frame + 0xc)) = fVar12;
  (*(float *)(gen_frame + 0x10)) = 0.0;
  (*(float *)(gen_frame + 0x14)) = 0.0;
  (*(float *)(gen_frame + 0x18)) = 0.0;
  (*(float *)(gen_frame + 0x1c)) = REFG(float, 0x110f9dc);
  fVar6 = fVar8 * fVar6;
  fVar8 = fVar8 * fVar7;
  fVar10 = fVar2 * fVar10;
  fVar18 = fVar6 * fVar2 - fVar11 * fVar15;
  fVar19 = fVar8 * fVar2 - fVar11 * fVar14;
  fVar20 = (fVar9 * fVar3) * fVar2 - fVar11 * fVar16;
  fVar21 = fVar10 * fVar2 - fVar11 * fVar17;
  (*(float *)(gen_frame + 0x30)) = fVar18;
  (*(float *)(gen_frame + 0x34)) = fVar19;
  (*(float *)(gen_frame + 0x38)) = fVar20;
  (*(float *)(gen_frame + 0x3c)) = fVar21;
  (*(float *)(gen_frame + 0x20)) = fVar18;
  (*(float *)(gen_frame + 0x24)) = fVar19;
  (*(float *)(gen_frame + 0x28)) = fVar20;
  (*(float *)(gen_frame + 0x2c)) = fVar21;
  fVar7 = fVar6 * fVar11 + fVar2 * fVar15;
  fVar8 = fVar8 * fVar11 + fVar2 * fVar14;
  fVar9 = (fVar9 * fVar3) * fVar11 + fVar2 * fVar16;
  fVar11 = fVar10 * fVar11 + fVar2 * fVar17;
  (*(float *)(gen_frame + 0x40)) = fVar7;
  (*(float *)(gen_frame + 0x44)) = fVar8;
  (*(float *)(gen_frame + 0x48)) = fVar9;
  (*(float *)(gen_frame + 0x4c)) = fVar11;
  (*(float *)(gen_frame + 0x30)) = fVar7;
  (*(float *)(gen_frame + 0x34)) = fVar8;
  (*(float *)(gen_frame + 0x38)) = fVar9;
  (*(float *)(gen_frame + 0x3c)) = fVar11;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = fVar13;
  (*(float *)(gen_frame + 0x4c)) = fVar12;
  *param_1 = CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits(fVar4));
  param_1[1] = CONCAT44((uint)gen_fl2bits(fVar12),(uint)gen_fl2bits(fVar13));
  param_1[2] = CONCAT44((uint)gen_fl2bits(fVar8),(uint)gen_fl2bits(fVar7));
  param_1[3] = CONCAT44((uint)gen_fl2bits(fVar11),(uint)gen_fl2bits(fVar9));
  param_1[4] = CONCAT44((uint)gen_fl2bits(fVar19),(uint)gen_fl2bits(fVar18));
  param_1[5] = CONCAT44((uint)gen_fl2bits(fVar21),(uint)gen_fl2bits(fVar20));
  param_1[6] = 0;
  param_1[7] = (ulonglong)(uint)gen_fl2bits(fVar1) << 0x20;
  return 0;
}

/* ref: FUN_00c345f0 */
GEN_FRAME uint GEN_THISCALL F_00c345f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc345f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[1];
  uVar2 = in_ecx[2];
  uVar3 = in_ecx[3];
  *param_2 = *in_ecx;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: FUN_00c34600 */
GEN_FRAME uint GEN_THISCALL F_00c34600(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0xc34600u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0.0;
  in_ecx[2] = 0.0;
  in_ecx[3] = 0.0;
  return (uint)in_ecx;
}

/* ref: FUN_00c34620 */
GEN_FRAME uint GEN_THISCALL F_00c34620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34620u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = in_ecx[1];
  fVar2 = in_ecx[2];
  fVar3 = in_ecx[3];
  *param_2 = *in_ecx / *param_3;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  return (uint)param_2;
}

/* ref: FUN_00c34640 */
GEN_FRAME uint GEN_THISCALL F_00c34640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc34640u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00c34690 */
GEN_FRAME float GEN_THISCALL F_00c34690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xc34690u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00c346e0 */
GEN_FRAME uint GEN_THISCALL F_00c346e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc346e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  *(uint *)((int)in_ecx + 0xc) = param_3;
  return param_3;
}

/* ref: FUN_00c34800 */
GEN_FRAME uint F_00c34800(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc34800u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = param_2 / *param_3;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  return (uint)param_1;
}

/* ref: FUN_00c34820 */
GEN_FRAME uint GEN_THISCALL F_00c34820(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc34820u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00c34840 */
GEN_FRAME uint GEN_THISCALL F_00c34840(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc34840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x88);
  param_1[1] = *(undefined4 *)((int)this + 0x90);
  uVar1 = *(undefined4 *)((int)this + 0xa0);
  param_1[2] = *(undefined4 *)((int)this + 0x98);
  param_1[3] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00c34870 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00c34870(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc34870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)((int)this + 8) = 0;
  uVar3 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar1 = param_1[3];
  uVar3 = (uVar1 >> 0xb ^ uVar3) >> 8 ^ uVar1 ^ uVar3;
  param_1[2] = uVar1;
  uVar4 = *param_1 << 0xb ^ *param_1;
  param_1[3] = uVar3;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar3;
  param_1[3] = param_1[3] ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
  uVar4 = param_1[3];
  param_1[1] = uVar1;
  dVar2 = REFG(double, 0x1088130);
  uVar5 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar4;
  param_1[3] = param_1[3] ^ (uVar4 >> 0xb ^ uVar5) >> 8 ^ uVar5;
  uVar5 = param_1[3];
  param_1[1] = uVar1;
  fVar10 = REFG(float, 0x110f9dc);
  fVar7 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar3 >> 9 | 0x3f800000))) - dVar2))) -
                 REFG(double, 0x1088108))));
  fVar12 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar5 >> 9 | 0x3f800000))) - dVar2))) -
                  REFG(double, 0x1088108))));
  uVar3 = *param_1 << 0xb ^ *param_1;
  fVar14 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar4 >> 9 | 0x3f800000))) - dVar2))) -
                  *(double *)&REFG(undefined, 0x1090b18))));
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar5;
  param_1[3] = param_1[3] ^ (uVar5 >> 0xb ^ uVar3) >> 8 ^ uVar3;
  fVar8 = fVar10 / SQRT((fVar7 * fVar7 + fVar12 * fVar12) + fVar14 * fVar14);
  fVar9 = ((float)GEN_TOF(((double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(param_1[3] >> 9 | 0x3f800000))) - dVar2))) +
                 REFG(double, 0x1094800))));
  param_1[1] = uVar1;
  fVar7 = (fVar9 * (fVar8 * fVar7)) * *(float *)&REFG(undefined, 0x110f8f8);
  fVar10 = (fVar9 * (fVar8 * fVar10)) * *(float *)&REFG(undefined, 0x110f8fc);
  *(ulonglong *)((int)this + 0x10) =
       CONCAT44((uint)gen_fl2bits((fVar9 * (fVar8 * fVar14)) * *(float *)&REFG(undefined, 0x110f8f4)),
                (uint)gen_fl2bits((fVar9 * (fVar8 * fVar12)) * *(float *)&REFG(undefined, 0x110f8f0)));
  *(ulonglong *)((int)this + 0x18) = CONCAT44((uint)gen_fl2bits(fVar10),(uint)gen_fl2bits(fVar7));
  uVar1 = param_1[3];
  uVar3 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar3 = (uVar1 >> 0xb ^ uVar3) >> 8 ^ uVar1 ^ uVar3;
  param_1[2] = uVar1;
  uVar4 = *param_1 << 0xb ^ *param_1;
  param_1[3] = uVar3;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar3;
  param_1[3] = param_1[3] ^ (uVar3 >> 0xb ^ uVar4) >> 8 ^ uVar4;
  uVar4 = param_1[3];
  param_1[1] = uVar1;
  uVar5 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar4;
  param_1[3] = param_1[3] ^ (uVar4 >> 0xb ^ uVar5) >> 8 ^ uVar5;
  uVar5 = param_1[3];
  param_1[1] = uVar1;
  uVar6 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  uVar1 = param_1[2];
  param_1[2] = uVar5;
  param_1[1] = uVar1;
  param_1[3] = param_1[3] ^ (uVar5 >> 0xb ^ uVar6) >> 8 ^ uVar6;
  dVar13 = (double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar4 >> 9 | 0x3f800000))) - dVar2))) *
           *(double *)&REFG(undefined, 0x1094810);
  dVar11 = (double)((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar3 >> 9 | 0x3f800000))) - dVar2))) *
           *(double *)&REFG(undefined, 0x1094810);
  *(ulonglong *)((int)this + 0x20) =
       CONCAT44((uint)gen_fl2bits(((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(uVar5 >> 9 | 0x3f800000))) - dVar2))) *
                                  REFG(float, 0x134a810)),
                (uint)gen_fl2bits(((float)GEN_TOF((((double)GEN_TOD(gen_bits2f(param_1[3] >> 9 | 0x3f800000))) - dVar2)))
                                  * REFG(float, 0x134a810)));
  *(ulonglong *)((int)this + 0x28) =
       CONCAT44((uint)gen_fl2bits((float)dVar11),(uint)gen_fl2bits((float)dVar13));
  uVar1 = param_1[3];
  uVar4 = *param_1 << 0xb ^ *param_1;
  *param_1 = param_1[1];
  param_1[1] = param_1[2];
  uVar4 = (uVar1 >> 0xb ^ uVar4) >> 8 ^ uVar1 ^ uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  *(uint *)((int)this + 0x30) = uVar4;
  return 0;
}

/* ref: FUN_00c34cd0 */
GEN_FRAME uint GEN_THISCALL F_00c34cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc34cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(in_ecx + 8);
  uVar2 = *(undefined4 *)(in_ecx + 0xc);
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  return (uint)param_2;
}

/* ref: FUN_00c34d30 */
GEN_NOFRAME uint GEN_THISCALL F_00c34d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc34d30u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  undefined8 * param_4 = (undefined8 *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float * pfVar1;
  undefined8 uVar2;
  undefined8 * puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar10 = REFG(float, 0x110f9dc);
  if ((REFG(undefined4, 0x14c9cb4) & 1) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 1;
    REFG(float, 0x14c9ca4) = 0.0;
    REFG(float, 0x14c9ca8) = REFG(float, 0x10df028);
    REFG(float, 0x14c9cac) = 0.0;
    REFG(float, 0x14c9cb0) = REFG(float, 0x110f9dc);
  }
  pfVar1 = param_1 + 8;
  fVar4 = param_1[4] * param_3;
  fVar5 = gen_bits2f((uint)((ulonglong)*(undefined8 *)(param_1 + 4) >> 0x20)) * param_3;
  (*(float *)(gen_frame + 0x50)) = fVar4;
  (*(float *)(gen_frame + 0x54)) = fVar5;
  (*(float *)(gen_frame + 0x58)) = param_1[6] * param_3;
  (*(float *)(gen_frame + 0x5c)) = param_1[7] * param_3;
  fVar4 = *param_1 + fVar4;
  fVar5 = param_1[1] + fVar5;
  fVar6 = param_1[2] + param_1[6] * param_3;
  fVar7 = param_1[3] + param_1[7] * param_3;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x4c)) = fVar7;
  (*(float *)(gen_frame + 0x50)) = fVar4;
  (*(float *)(gen_frame + 0x54)) = fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  (*(float *)(gen_frame + 0x5c)) = fVar7;
  *(ulonglong *)param_1 = CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits(fVar4));
  *(ulonglong *)(param_1 + 2) = CONCAT44((uint)gen_fl2bits(fVar7),(uint)gen_fl2bits(fVar6));
  fVar4 = param_1[6];
  fVar5 = param_1[7];
  fVar6 = param_1[5];
  (*(float *)(gen_frame + 0x40)) = REFG(float, 0x14c9ca4) * param_3;
  (*(float *)(gen_frame + 0x44)) = REFG(float, 0x14c9ca8) * param_3;
  (*(float *)(gen_frame + 0x48)) = REFG(float, 0x14c9cac) * param_3;
  (*(float *)(gen_frame + 0x4c)) = REFG(float, 0x14c9cb0) * param_3;
  fVar7 = param_1[4] + REFG(float, 0x14c9ca4) * param_3;
  fVar6 = fVar6 + REFG(float, 0x14c9ca8) * param_3;
  fVar4 = fVar4 + REFG(float, 0x14c9cac) * param_3;
  fVar5 = fVar5 + REFG(float, 0x14c9cb0) * param_3;
  (*(float *)(gen_frame + 0x40)) = fVar7;
  (*(float *)(gen_frame + 0x44)) = fVar6;
  (*(float *)(gen_frame + 0x48)) = fVar4;
  (*(float *)(gen_frame + 0x4c)) = fVar5;
  (*(float *)(gen_frame + 0x50)) = fVar7;
  (*(float *)(gen_frame + 0x54)) = fVar6;
  (*(float *)(gen_frame + 0x58)) = fVar4;
  (*(float *)(gen_frame + 0x5c)) = fVar5;
  *(ulonglong *)(param_1 + 4) = CONCAT44((uint)gen_fl2bits(fVar6),(uint)gen_fl2bits(fVar7));
  *(ulonglong *)(param_1 + 6) = CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits(fVar4));
  fVar4 = *pfVar1;
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  uVar2 = *(undefined8 *)(param_1 + 10);
  fVar8 = fVar6 * param_3;
  fVar9 = fVar7 * param_3;
  (*(float *)(gen_frame + 0x40)) = fVar4 * param_3;
  (*(float *)(gen_frame + 0x44)) = fVar5 * param_3;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  (*(float *)(gen_frame + 0x4c)) = fVar9;
  fVar4 = fVar8 + fVar4;
  fVar5 = fVar9 + fVar5;
  (*(float *)(gen_frame + 0x40)) = fVar4;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x48)) = fVar8 + fVar6;
  (*(float *)(gen_frame + 0x4c)) = fVar9 + fVar7;
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x4c)) = fVar7;
  (*(float *)(gen_frame + 0x50)) = fVar4;
  (*(float *)(gen_frame + 0x54)) = fVar5;
  (*(float *)(gen_frame + 0x58)) = fVar6;
  (*(float *)(gen_frame + 0x5c)) = fVar7;
  *(ulonglong *)pfVar1 = CONCAT44((uint)gen_fl2bits(fVar5),(uint)gen_fl2bits(fVar4));
  *(undefined8 *)(param_1 + 10) = uVar2;
  if ((!GEN_ISNAN(param_1[1]) && !GEN_ISNAN(REFG(float, 0x10a0d00))) && !(param_1[1] <= REFG(float, 0x10a0d00))) {
    F_00c34870(param_1 GEN_EDX_FWD,param_2);
    fVar10 = REFG(float, 0x110f9dc);
  }
  if ((REFG(undefined4, 0x14c9cb4) & 2) == 0) {
    *(undefined4 *)&REFG(undefined, 0x14c9c94) = 0;
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 2;
    *(undefined4 *)&REFG(undefined, 0x14c9c98) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c9c98), REFG(float, 0x110f9e4));
    *(undefined4 *)&REFG(undefined, 0x14c9c9c) = 0;
    *(float *)&REFG(undefined, 0x14c9ca0) = fVar10;
  }
  if ((REFG(undefined4, 0x14c9cb4) & 4) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 4;
    *(undefined4 *)&REFG(undefined, 0x14c9c84) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c9c84), REFG(float, 0x10b2cc4));
    *(undefined4 *)&REFG(undefined, 0x14c9c88) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c9c88), REFG(float, 0x10c75a0));
    *(undefined4 *)&REFG(undefined, 0x14c9c8c) = 0;
    *(float *)&REFG(undefined, 0x14c9c90) = fVar10;
  }
  if ((REFG(undefined4, 0x14c9cb4) & 8) == 0) {
    REFG(undefined4, 0x14c9cb4) = REFG(undefined4, 0x14c9cb4) | 8;
    *(undefined4 *)&REFG(undefined, 0x14c9c78) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c9c78), REFG(float, 0x10c75a0));
    *(undefined4 *)&REFG(undefined, 0x14c9c74) = GEN_FLT_TO(*(undefined4 *)&REFG(undefined, 0x14c9c74), REFG(float, 0x110f9e0));
    *(undefined4 *)&REFG(undefined, 0x14c9c7c) = 0;
    *(float *)&REFG(undefined, 0x14c9c80) = fVar10;
  }
  F_00c34430(((undefined1 *)(gen_frame + 0x0)),pfVar1);
  (*(undefined8 *)(gen_frame + 0x30)) = *(undefined8 *)param_1;
  (*(undefined8 *)(gen_frame + 0x38)) = *(undefined8 *)(param_1 + 2);
  (*(float *)(gen_frame + 0x6c)) = param_1[0xc];
  puVar3 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c94));
  *param_4 = *puVar3;
  param_4[1] = puVar3[1];
  *(float *)((int)param_4 + 0xc) = (*(float *)(gen_frame + 0x6c));
  (*(float *)(gen_frame + 0x6c)) = param_1[0xc];
  puVar3 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c84));
  param_4[2] = *puVar3;
  param_4[3] = puVar3[1];
  *(float *)((int)param_4 + 0x1c) = (*(float *)(gen_frame + 0x6c));
  fVar10 = param_1[0xc];
  puVar3 = (undefined8 *)F_00c34320(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x40)),&REFG(undefined, 0x14c9c74));
  param_4[4] = *puVar3;
  param_4[5] = puVar3[1];
  *(float *)((int)param_4 + 0x2c) = fVar10;
  return (uint)puVar3;
}

/* ref: FUN_00c35130 */
GEN_FRAME uint F_00c35130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35130u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x110faf0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x110fef0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11102f0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x110faf0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11106f0) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x110faf0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c353f0 */
GEN_FRAME uint F_00c353f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc353f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx - 4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11112f0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110ef0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11116f0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1110af0) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c35710 */
GEN_NOFRAME uint GEN_FASTCALL F_00c35710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc35710u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c35730 */
GEN_FRAME uint F_00c35730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc35730u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c35710(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c35760 */
GEN_FRAME uint GEN_THISCALL F_00c35760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c35730(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c35730(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c35730(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c35710(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c35730(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c35710(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)this ^ param_1;
}

/* ref: FUN_00c35850 */
GEN_FRAME uint GEN_STDCALL F_00c35850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35760(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c35870 */
GEN_FRAME uint GEN_STDCALL F_00c35870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35870u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35760(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c35890 */
GEN_FRAME uint GEN_STDCALL F_00c35890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35890u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c35b00 */
GEN_FRAME uint F_00c35b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35b00u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c35ba0 */
GEN_FRAME uint GEN_STDCALL F_00c35ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35ba0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35b00(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c35bc0 */
GEN_FRAME uint GEN_STDCALL F_00c35bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc35bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c35b00(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c35be0 */
GEN_FRAME uint F_00c35be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc35be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort * puVar12;
  int iVar13;
  bool bVar14;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((ushort *)(gen_frame + 0x68))[0] = 0;
  ((ushort *)(gen_frame + 0x68))[1] = 0;
  ((ushort *)(gen_frame + 0x68))[2] = 0;
  ((ushort *)(gen_frame + 0x68))[3] = 0;
  ((ushort *)(gen_frame + 0x68))[4] = 0;
  ((ushort *)(gen_frame + 0x68))[5] = 0;
  ((ushort *)(gen_frame + 0x68))[6] = 0;
  ((ushort *)(gen_frame + 0x68))[7] = 0;
  ((ushort *)(gen_frame + 0x68))[8] = 0;
  ((ushort *)(gen_frame + 0x68))[9] = 0;
  ((ushort *)(gen_frame + 0x68))[10] = 0;
  ((ushort *)(gen_frame + 0x68))[0xb] = 0;
  ((ushort *)(gen_frame + 0x68))[0xc] = 0;
  ((ushort *)(gen_frame + 0x68))[0xd] = 0;
  ((ushort *)(gen_frame + 0x68))[0xe] = 0;
  ((ushort *)(gen_frame + 0x68))[0xf] = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] = ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = 0xf;
  do {
    if (((ushort *)(gen_frame + 0x68))[(int)(uVar2)] != 0) break;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(uint *)(gen_frame + 0x40)) = *param_5;
  if (uVar2 < *param_5) {
    (*(uint *)(gen_frame + 0x40)) = uVar2;
  }
  if (uVar2 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0;
  }
  (*(uint *)(gen_frame + 0x3c)) = 1;
  if (1 < uVar2) {
    do {
      if (((ushort *)(gen_frame + 0x68))[(int)((*(uint *)(gen_frame + 0x3c)))] != 0) break;
      (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
    } while ((*(uint *)(gen_frame + 0x3c)) < uVar2);
  }
  if ((*(uint *)(gen_frame + 0x40)) < (*(uint *)(gen_frame + 0x3c))) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x3c));
  }
  iVar13 = 1;
  uVar9 = 1;
  do {
    iVar13 = iVar13 * 2 - (uint)((ushort *)(gen_frame + 0x68))[(int)(uVar9)];
    if (iVar13 < 0) goto LAB_00c35d81;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  if ((0 < iVar13) && ((param_1 == 0 || (uVar2 != 1)))) {
LAB_00c35d81: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0xffffffff;
  }
  ((ushort *)(gen_frame + 0x48))[1] = 0;
  uVar9 = 2;
  do {
    uVar3 = uVar9 + 2;
    *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9 + 2) =
         *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9) + *(short *)((int)((ushort *)(gen_frame + 0x68)) + uVar9);
    uVar9 = uVar3;
  } while (uVar3 < 0x1e);
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar9 * 2) != 0) {
        param_6[((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))]] = (ushort)uVar9;
        ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] =
             ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (param_1 == 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_6;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_6;
    (*(int *)(gen_frame + 0x18)) = 0x13;
  }
  else if (param_1 == 1) {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)0x1111c46;
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)0x1111c06;
    (*(int *)(gen_frame + 0x18)) = 0x100;
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x1111ec8);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x1111e88);
    (*(int *)(gen_frame + 0x18)) = -1;
  }
  (*(int *)(gen_frame + 0x30)) = *param_4;
  bVar5 = (byte)(*(uint *)(gen_frame + 0x40));
  (*(uint *)(gen_frame + 0xc)) = 1 << (bVar5 & 0x1f);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0xc)) - 1;
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x354;
  }
  else {
    if (param_1 != 2) goto LAB_00c35e0c;
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x250;
  }
  if (!bVar14) {
LAB_00c36040: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
LAB_00c35e0c: ;
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0xc));
LAB_00c35e14: ;
  do {
    bVar11 = (byte)uVar3;
    bVar8 = (char)(*(uint *)(gen_frame + 0x3c)) - bVar11;
    uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x24));
    if ((int)(uint)uVar1 < (*(int *)(gen_frame + 0x18))) {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = (ushort)bVar8 << 8;
LAB_00c35e54: ;
      (*(uint *)(gen_frame + 0x44)) = CONCAT22(uVar1,(ushort)(*(uint *)(gen_frame + 0x44)));
    }
    else {
      if ((int)(uint)uVar1 <= (*(int *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x44)) = CONCAT31((uint3)bVar8,0x60);
        uVar1 = 0;
        goto LAB_00c35e54;
      }
      (*(uint *)(gen_frame + 0x44)) = CONCAT22((*(ushort * PTR32 *)(gen_frame + 0x20))[*(*(ushort * PTR32 *)(gen_frame + 0x24))],CONCAT11(bVar8,(char)(*(ushort * PTR32 *)(gen_frame + 0x14))[*(*(ushort * PTR32 *)(gen_frame + 0x24))]));
    }
    iVar13 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - bVar11 & 0x1f);
    puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (((*(uint *)(gen_frame + 0x2c)) >> (bVar11 & 0x1f)) + (*(uint *)(gen_frame + 0xc))) * 4)));
    uVar4 = (*(uint *)(gen_frame + 0xc));
    do {
      puVar6 = puVar6 - iVar13;
      uVar4 = uVar4 - iVar13;
      *puVar6 = (*(uint *)(gen_frame + 0x44));
    } while (uVar4 != 0);
    for (uVar4 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - 1U & 0x1f); ((*(uint *)(gen_frame + 0x2c)) & uVar4) != 0; uVar4 = uVar4 >> 1) {
    }
    if (uVar4 == 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = (uVar4 - 1 & (*(uint *)(gen_frame + 0x2c))) + uVar4;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + 1;
    puVar12 = ((ushort *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x3c));
    *puVar12 = *puVar12 - 1;
    if (*puVar12 == 0) {
      if ((*(uint *)(gen_frame + 0x3c)) == uVar2) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11((char)(*(uint *)(gen_frame + 0x3c)) - bVar11,0x40);
        (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
        uVar2 = (*(uint *)(gen_frame + 0x2c));
        iVar13 = (*(int *)(gen_frame + 0x30));
        uVar4 = (*(uint *)(gen_frame + 0x3c));
        goto joined_r0x00c35fbc;
      }
      (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_2 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * 2);
    }
  } while (((*(uint *)(gen_frame + 0x3c)) <= (*(uint *)(gen_frame + 0x40))) || (uVar4 = uVar9 & (*(uint *)(gen_frame + 0x2c)), uVar4 == (*(uint *)(gen_frame + 0x1c))));
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0xc)) * 4;
  if (uVar3 == 0) {
    uVar3 = (*(uint *)(gen_frame + 0x40));
  }
  iVar7 = (*(uint *)(gen_frame + 0x3c)) - uVar3;
  uVar10 = uVar3 + iVar7;
  iVar13 = 1 << ((byte)iVar7 & 0x1f);
  if (uVar10 < uVar2) {
    puVar12 = ((ushort *)(gen_frame + 0x68)) + uVar10;
    do {
      uVar1 = *puVar12;
      if ((int)(iVar13 - (uint)uVar1) < 1) break;
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
      iVar13 = (iVar13 - (uint)uVar1) * 2;
    } while (uVar10 < uVar2);
  }
  (*(uint *)(gen_frame + 0xc)) = 1 << ((byte)iVar7 & 0x1f);
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0xc));
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x354;
LAB_00c35f79: ;
    if (!bVar14) goto LAB_00c36040;
  }
  else if (param_1 == 2) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x250;
    goto LAB_00c35f79;
  }
  *(byte *)(*param_4 + uVar4 * 4) = (byte)iVar7;
  *(byte *)(*param_4 + 1 + uVar4 * 4) = bVar5;
  *(short *)(*param_4 + 2 + uVar4 * 4) = (short)((*(int *)(gen_frame + 0x30)) - *param_4 >> 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  goto LAB_00c35e14;
joined_r0x00c35fbc: ;
  if (uVar2 == 0) {
LAB_00c36013: ;
    *param_4 = *param_4 + (*(uint *)(gen_frame + 0x38)) * 4;
    *param_5 = (*(uint *)(gen_frame + 0x40));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0;
  }
  if ((uVar3 != 0) && ((uVar9 & uVar2) != (*(uint *)(gen_frame + 0x1c)))) {
    iVar13 = *param_4;
    uVar3 = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11(bVar5,(undefined1)(*(uint *)(gen_frame + 0x44)));
    (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
    uVar4 = (*(uint *)(gen_frame + 0x40));
  }
  *((uint *)GEN_TOP((iVar13 + (uVar2 >> ((byte)uVar3 & 0x1f)) * 4))) = (*(uint *)(gen_frame + 0x44));
  for (uVar10 = 1 << ((char)uVar4 - 1U & 0x1f); (uVar2 & uVar10) != 0; uVar10 = uVar10 >> 1) {
  }
  if (uVar10 == 0) goto LAB_00c36013;
  uVar2 = (uVar2 & uVar10 - 1) + uVar10;
  goto joined_r0x00c35fbc;
}

/* ref: FUN_00c36080 */
GEN_FRAME uint GEN_STDCALL F_00c36080(unsigned int gen_a0)
{
  GEN_ENTER(0xc36080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x1111b5c))[(int)(-param_1)];
}

/* ref: FUN_00c360a0 */
GEN_FRAME uint F_00c360a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc360a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (0x10000 < (uint)(param_2 * param_3)) {
    uVar1 = F_00406a50(param_2 * param_3);
    return uVar1;
  }
  return *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d8;
}

/* ref: FUN_00c360e0 */
GEN_FRAME uint F_00c360e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc360e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2;
  if (*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1d8U != param_2) {
    uVar2 = F_00406b30(param_2);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c36110 */
GEN_FRAME uint F_00c36110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36110u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte * pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte * local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 - 1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] - 5;
  puVar20 = (undefined1 *)(param_1[3] - 1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] - 0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00c36198: ;
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *((uint *)GEN_TOP((iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *((uint *)GEN_TOP((iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4)));
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00c3629a;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c364b6;
      }
      *puVar3 = 0xb;
      goto LAB_00c364bf;
    }
    uVar17 = *((uint *)GEN_TOP((iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      )));
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00c3646a;
joined_r0x00c3629a: ;
  if ((uVar17 & 0x10) != 0) goto LAB_00c362d6;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    goto LAB_00c364b6;
  }
  uVar17 = *((uint *)GEN_TOP((iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00c3629a;
LAB_00c362d6: ;
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if ((uVar5 < uVar17) && (puVar3[0x6f0] != 0)) {
      param_1[6] = (int)"invalid distance too far back";
LAB_00c364b6: ;
      *puVar3 = 0x1d;
LAB_00c364bf: ;
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return (uint)puVar3;
    }
    iVar15 = iVar24 - 1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00c363da: ;
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 - 1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00c363da;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00c363da;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 - 1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00c3646c;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00c3646c;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00c3646c;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00c3646c;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00c3646a: ;
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00c3646c: ;
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00c364bf;
  goto LAB_00c36198;
}

/* ref: FUN_00c36520 */
GEN_FRAME uint GEN_STDCALL F_00c36520(unsigned int gen_a0)
{
  GEN_ENTER(0xc36520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    puVar2[0x6f0] = 1;
    puVar2[0x6f1] = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c365a0 */
GEN_FRAME uint GEN_STDCALL F_00c365a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc365a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    iVar2 = 0;
    uVar3 = -param_2;
  }
  else {
    iVar2 = ((int)param_2 >> 4) + 1;
    uVar3 = param_2;
    if ((int)param_2 < 0x30) {
      uVar3 = param_2 & 0xf;
    }
  }
  if ((uVar3 != 0) && (((int)uVar3 < 8 || (0xf < (int)uVar3)))) {
    return 0xfffffffe;
  }
  if ((*(int *)(iVar1 + 0x34) != 0) && (*(uint *)(iVar1 + 0x24) != uVar3)) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  *(uint *)(iVar1 + 0x24) = uVar3;
  uVar3 = F_00c36520(param_1);
  return uVar3;
}

/* ref: FUN_00c36630 */
GEN_FRAME uint GEN_STDCALL F_00c36630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc36630u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc360a0));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc360e0));
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (uVar1 == 0) {
    return 0xfffffffc;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  uVar2 = F_00c365a0(param_1,param_2);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c366f0 */
GEN_FRAME uint GEN_STDCALL F_00c366f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc366f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c36630(param_1,0xf,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c36710 */
GEN_FRAME uint GEN_STDCALL F_00c36710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36710u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)&gen_args[0]) != 0) && (iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x1c), iVar2 != 0)) {
    if ((*(int *)&gen_args[1]) < 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      return 0;
    }
    if ((*(int *)&gen_args[1]) < 0x11) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar1 = iVar3 + (*(int *)&gen_args[1]);
      if (uVar1 < 0x21) {
        *(uint *)(iVar2 + 0x3c) = uVar1;
        *(int *)(iVar2 + 0x38) =
             *(int *)(iVar2 + 0x38) +
             (((1 << ((byte)(*(int *)&gen_args[1]) & 0x1f)) - 1U & (*(uint *)&gen_args[2])) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36780 */
GEN_NOFRAME unsigned int F_00c36780(unsigned int gen_a0)
{
  GEN_ENTER(0xc36780u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  *(undefined * PTR32 *)(in_eax + 0x4c) = &REFG(undefined, 0x1111f88);
  *(undefined4 *)(in_eax + 0x54) = 9;
  *(undefined * PTR32 *)(in_eax + 0x50) = &REFG(undefined, 0x1111f08);
  *(undefined4 *)(in_eax + 0x58) = 5;
  return 0;
}

/* ref: FUN_00c367a0 */
GEN_FRAME uint F_00c367a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc367a0u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(param_2 + 0x20))
                      (*(undefined4 *)(param_2 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(uint *)(iVar1 + 0x34) = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_eax - *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 <= uVar3) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - uVar2,uVar2);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar2 = uVar2 - *(int *)(iVar1 + 0x30);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  F_00c46aa0(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(param_2 + 0xc) - uVar3,uVar2);
  iVar4 = uVar3 - uVar2;
  if (iVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - iVar4,iVar4);
    *(int *)(iVar1 + 0x30) = iVar4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar2;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar2;
  }
  return 0;
}

/* ref: FUN_00c368a0 */
GEN_FRAME uint GEN_STDCALL F_00c368a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc368a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     ((code *)*(gen_code32 *)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x34)));
    if (iVar1 != 0) {
      ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36900 */
GEN_FRAME uint GEN_STDCALL F_00c36900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36900u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_00c36965;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  iVar4 = param_2;
  uVar3 = param_3;
  uVar2 = F_00c35890(0,0,0);
  uVar3 = F_00c35890(uVar2,iVar4,uVar3);
  if (uVar3 != piVar1[6]) {
    return 0xfffffffd;
  }
LAB_00c36965: ;
  uVar3 = F_00c367a0(*(undefined4 *)(param_1 + 0x10),param_1);
  if (uVar3 != 0) {
    *piVar1 = 0x1e;
    return 0xfffffffc;
  }
  uVar3 = piVar1[10];
  if (param_3 <= uVar3) {
    F_00c46aa0((piVar1[0xd] - param_3) + uVar3,param_2,param_3);
    piVar1[0xb] = param_3;
    piVar1[3] = 1;
    return 0;
  }
  F_00c46aa0(piVar1[0xd],(param_2 - uVar3) + param_3,uVar3);
  piVar1[0xb] = piVar1[10];
  piVar1[3] = 1;
  return 0;
}

/* ref: FUN_00c369f0 */
GEN_FRAME uint GEN_STDCALL F_00c369f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc369f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 8) & 2) != 0)) {
    *(int *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36a30 */
GEN_FRAME uint F_00c36a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36a30u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + in_esi) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + in_esi) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  *param_2 = uVar2;
  return uVar1;
}

/* ref: FUN_00c36a90 */
GEN_FRAME uint GEN_STDCALL F_00c36a90(unsigned int gen_a0)
{
  GEN_ENTER(0xc36a90u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (((*(int * PTR32 *)&gen_args[0])[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar1 != 0x1f) {
    uVar3 = piVar1[0xf] & 7;
    piVar1[0xe] = piVar1[0xe] << (sbyte)uVar3;
    uVar3 = piVar1[0xf] - uVar3;
    iVar4 = 0;
    *piVar1 = 0x1f;
    piVar1[0xf] = uVar3;
    if (7 < uVar3) {
      uVar5 = piVar1[0xe];
      do {
        uVar3 = uVar3 - 8;
        *((char *)GEN_TOP(((int)&(*(int * PTR32 *)&gen_args[0]) + iVar4))) = (char)piVar1[0xe];
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + 1;
        piVar1[0xe] = uVar5;
        piVar1[0xf] = uVar3;
      } while (7 < uVar3);
    }
    piVar1[0x1a] = 0;
    F_00c36a30(&(*(int * PTR32 *)&gen_args[0]),piVar1 + 0x1a,iVar4);
  }
  uVar3 = F_00c36a30(*piVar2,piVar1 + 0x1a,piVar2[1]);
  piVar2[2] = piVar2[2] + uVar3;
  piVar2[1] = piVar2[1] - uVar3;
  *piVar2 = *piVar2 + uVar3;
  iVar4 = piVar2[2];
  if (piVar1[0x1a] != 4) {
    return 0xfffffffd;
  }
  (*(int * PTR32 *)&gen_args[0]) = (int *)piVar2[5];
  F_00c36520(piVar2);
  piVar2[2] = iVar4;
  piVar2[5] = (int)(*(int * PTR32 *)&gen_args[0]);
  *piVar1 = 0xb;
  return 0;
}

/* ref: FUN_00c36b80 */
GEN_FRAME uint GEN_STDCALL F_00c36b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc36b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 0xd) && (piVar1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c36bc0 */
GEN_FRAME uint GEN_STDCALL F_00c36bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = param_2[7], iVar1 == 0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  uVar3 = (*(code *)param_2[8])(param_2[10],1,0x1bcc);
  if (uVar3 == 0) {
    return 0xfffffffc;
  }
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(iVar1 + 0x34) != 0) &&
     (param_2 = ((undefined4 *)GEN_TOP((*(code *)puVar5[8])(puVar5[10],1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1)))
     , param_2 == (undefined4 *)0x0)) {
    (*(code *)puVar5[9])(puVar5[10],uVar3);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00c46aa0(uVar3,iVar1,0x1bcc);
  uVar2 = *(uint *)(iVar1 + 0x4c);
  if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x1bbcU)) {
    *(uint *)(uVar3 + 0x4c) = uVar3 + 0x530 + ((int)((uVar2 - iVar1) - 0x530) >> 2) * 4;
    *(uint *)(uVar3 + 0x50) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x50) - iVar1) - 0x530 >> 2) * 4;
  }
  *(uint *)(uVar3 + 0x6c) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x6c) - iVar1) - 0x530 >> 2) * 4;
  if (param_2 != (undefined4 *)0x0) {
    F_00c46aa0(param_2,*(undefined4 *)(iVar1 + 0x34),
               1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f));
  }
  *(undefined4 * PTR32 *)(uVar3 + 0x34) = param_2;
  param_1[7] = uVar3;
  return 0;
}

/* ref: FUN_00c36d20 */
GEN_FRAME uint GEN_STDCALL F_00c36d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36d20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1bc0))) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c36d50 */
GEN_FRAME uint GEN_STDCALL F_00c36d50(unsigned int gen_a0)
{
  GEN_ENTER(0xc36d50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xffff0000;
  }
  if (*piVar1 == 0xf) {
    return piVar1[0x6f1] * 0x10000 + piVar1[0x10];
  }
  if (*piVar1 == 0x18) {
    return piVar1[0x6f1] * 0x10000 + (piVar1[0x6f2] - piVar1[0x10]);
  }
  return piVar1[0x6f1] << 0x10;
}

/* ref: FUN_00c36dc0 */
GEN_FRAME uint GEN_STDCALL F_00c36dc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc36dc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c35130(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c36df0 */
GEN_FRAME uint GEN_STDCALL F_00c36df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc36df0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  uint * in_eax;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte * pbVar10;
  byte * pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (in_eax = (uint *)param_1[7], in_eax == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return 0xfffffffe;
  }
  if (*in_eax == 0xb) {
    *in_eax = 0xc;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
  pbVar10 = (byte *)*param_1;
  (*(uint *)(gen_frame + 0xc)) = param_1[4];
  uVar6 = param_1[1];
  uVar14 = in_eax[0xe];
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  uVar4 = *in_eax;
  uVar16 = in_eax[0xf];
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    pbVar11 = pbVar10;
    uVar13 = (*(uint *)(gen_frame + 0x20));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (in_eax[2] == 0) {
        *in_eax = 0xc;
      }
      else {
        for (; (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        if (((in_eax[2] & 2) == 0) || (uVar14 != 0x8b1f)) {
          in_eax[4] = 0;
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x30) = 0xffffffff;
          }
          if (((in_eax[2] & 1) == 0) || (((uVar14 & 0xff) * 0x100 + (uVar14 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else {
            if (((byte)uVar14 & 0xf) == 8) {
              uVar16 = uVar16 - 4;
              uVar4 = (uVar14 >> 4 & 0xf) + 8;
              if (in_eax[9] == 0) {
                in_eax[9] = uVar4;
              }
              else if (in_eax[9] < uVar4) {
                param_1[6] = (int)"invalid window size";
                uVar14 = uVar14 >> 4;
                goto LAB_00c38101;
              }
              in_eax[5] = 1 << (sbyte)uVar4;
              uVar4 = F_00c35890(0,0,0);
              in_eax[6] = uVar4;
              param_1[0xc] = uVar4;
              *in_eax = ~(uVar14 >> 0xc) & 2 | 9;
              uVar14 = 0;
              uVar16 = 0;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              break;
            }
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00c38101;
        }
        uVar4 = F_00c36dc0(0,0,0);
        in_eax[6] = uVar4;
        (*(undefined2 *)(gen_frame + 0x18)) = 0x8b1f;
        uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
        uVar14 = 0;
        in_eax[6] = uVar4;
        uVar16 = 0;
        *in_eax = 1;
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
      }
      break;
    case 1: ;
      for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[4] = uVar14;
      if ((char)uVar14 == '\b') {
        if ((uVar14 & 0xe000) == 0) {
          if ((uint *)in_eax[8] != (uint *)0x0) {
            *(uint *)in_eax[8] = uVar14 >> 8 & 1;
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 2;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
joined_r0x00c37057: ;
          } while (uVar16 < 0x20);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 4) = uVar14;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            (*(undefined1 *)(gen_frame + 0x1a)) = (char)(uVar14 >> 0x10);
            (*(undefined1 *)(gen_frame + 0x1b)) = (char)(uVar14 >> 0x18);
            uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),4);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 3;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar16;
            pbVar10 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar14 = uVar14 + ((uint)*pbVar11 << (bVar7 & 0x1f));
joined_r0x00c370d2: ;
            pbVar11 = pbVar10;
          } while (uVar16 < 0x10);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 8) = uVar14 & 0xff;
            *(uint *)(in_eax[8] + 0xc) = uVar14 >> 8;
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 4;
          goto switchD_00c36e68_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00c38101;
    case 2: ;
      goto joined_r0x00c37057;
    case 3: ;
      goto joined_r0x00c370d2;
    case 4: ;
switchD_00c36e68_caseD_4: ;
      if ((in_eax[4] & 0x400) == 0) {
        if (in_eax[8] != 0) {
          *(undefined4 *)(in_eax[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        in_eax[0x10] = uVar14;
        if (in_eax[8] != 0) {
          *(uint *)(in_eax[8] + 0x14) = uVar14;
        }
        if ((in_eax[4] & 0x200) != 0) {
          uVar4 = in_eax[6];
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
          (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
          uVar4 = F_00c36dc0(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
          in_eax[6] = uVar4;
          pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 5;
    case 5: ;
      if ((in_eax[4] & 0x400) == 0) {
LAB_00c37262: ;
        in_eax[0x10] = 0;
        *in_eax = 6;
switchD_00c36e68_caseD_6: ;
        if ((in_eax[4] & 0x800) == 0) {
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x1c) = 0;
          }
LAB_00c3730e: ;
          in_eax[0x10] = 0;
          *in_eax = 7;
switchD_00c36e68_caseD_7: ;
          if ((in_eax[4] & 0x1000) == 0) {
            if (in_eax[8] != 0) {
              *(undefined4 *)(in_eax[8] + 0x24) = 0;
            }
LAB_00c373ba: ;
            *in_eax = 8;
switchD_00c36e68_caseD_8: ;
            pbVar11 = pbVar10;
            if ((in_eax[4] & 0x200) != 0) {
              for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                pbVar10 = pbVar11;
                uVar13 = (*(uint *)(gen_frame + 0x20));
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
                uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
                pbVar11 = pbVar11 + 1;
              }
              if (uVar14 != (ushort)in_eax[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00c38101;
              }
              uVar14 = 0;
              uVar16 = 0;
            }
            if (in_eax[8] != 0) {
              *(uint *)(in_eax[8] + 0x2c) = (int)in_eax[4] >> 9 & 1;
              *(undefined4 *)(in_eax[8] + 0x30) = 1;
            }
            uVar4 = F_00c36dc0(0,0,0);
            in_eax[6] = uVar4;
            param_1[0xc] = uVar4;
            *in_eax = 0xb;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            break;
          }
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x24) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x28))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x24) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c373ba;
          }
        }
        else {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x1c) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x20))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x1c) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3730e;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          if ((in_eax[8] != 0) && (iVar5 = *(int *)(in_eax[8] + 0x10), iVar5 != 0)) {
            iVar15 = *(int *)(in_eax[8] + 0x14) - in_eax[0x10];
            uVar4 = *(uint *)(in_eax[8] + 0x18);
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (uVar4 < iVar15 + (*(uint *)(gen_frame + 0x20))) {
              uVar13 = uVar4 - iVar15;
            }
            F_00c46aa0(iVar5 + iVar15,(*(byte * PTR32 *)(gen_frame + 0x24)),uVar13);
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = F_00c36dc0(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
          pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
          in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        }
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if (in_eax[0x10] == 0) goto LAB_00c37262;
      }
LAB_00c38165: ;
      (*(uint *)(gen_frame + 0x20)) = uVar13;
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)pbVar10;
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar14;
      in_eax[0xf] = uVar16;
      if (((in_eax[10] == 0) && ((0x19 < (int)*in_eax || ((*(uint *)(gen_frame + 0xc)) == param_1[4])))) ||
         (uVar4 = F_00c367a0((*(uint *)(gen_frame + 0xc)),param_1), uVar4 == 0)) {
        iVar5 = uVar6 - param_1[1];
        iVar15 = (*(uint *)(gen_frame + 0xc)) - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + iVar15;
        in_eax[7] = in_eax[7] + iVar15;
        if ((in_eax[2] != 0) && (iVar15 != 0)) {
          if (in_eax[4] == 0) {
            uVar6 = F_00c35890(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          else {
            uVar6 = F_00c36dc0(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          in_eax[6] = uVar6;
          param_1[0xc] = uVar6;
        }
        uVar6 = *in_eax;
        if ((uVar6 == 0x13) || (param_1 = (int *)0x0, uVar6 == 0xe)) {
          param_1 = (int *)0x100;
        }
        piVar2[0xb] = ((uVar6 != 0xb) - 1 & 0x80) + (-(uint)(in_eax[1] != 0) & 0x40) + (int)param_1
                      + in_eax[0xf];
        if (((iVar5 != 0) || (iVar15 != 0)) && ((*(int *)&gen_a1) != 4)) {
          return (*(uint *)(gen_frame + 0x4));
        }
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          return (*(uint *)(gen_frame + 0x4));
        }
        return 0xfffffffb;
      }
      *in_eax = 0x1e;
switchD_00c36e68_caseD_1e: ;
      return 0xfffffffc;
    case 6: ;
      goto switchD_00c36e68_caseD_6;
    case 7: ;
      goto switchD_00c36e68_caseD_7;
    case 8: ;
      goto switchD_00c36e68_caseD_8;
    case 9: ;
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = (uVar14 >> 8 & 0xff00) + ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 +
              (uVar14 >> 0x18);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      uVar14 = 0;
      uVar16 = 0;
      *in_eax = 10;
    case 10: ;
      if (in_eax[3] == 0) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)pbVar10;
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xf] = uVar16;
        in_eax[0xe] = uVar14;
        return 2;
      }
      uVar4 = F_00c35890(0,0,0);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      *in_eax = 0xb;
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
switchD_00c36e68_caseD_b: ;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if (((*(int *)&gen_a1) == 5) || ((*(int *)&gen_a1) == 6)) goto LAB_00c38165;
switchD_00c36e68_caseD_c: ;
      if (in_eax[1] != 0) {
        uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
        uVar16 = uVar16 - (uVar16 & 7);
        *in_eax = 0x1a;
        break;
      }
      for (; uVar16 < 3; uVar16 = uVar16 + 8) {
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[1] = uVar14 & 1;
      switch((unsigned int)(uintptr_t)(uVar14 >> 1 & 3)) {
      case 0: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0xd;
        uVar16 = uVar16 - 3;
        goto LAB_00c38107;
      case 1: ;
        F_00c36780(in_eax);
        *in_eax = 0x13;
        if ((*(int *)&gen_a1) == 6) {
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          goto LAB_00c38165;
        }
        break;
      case 2: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0x10;
        uVar16 = uVar16 - 3;
        goto LAB_00c38107;
      case 3: ;
        param_1[6] = (int)"invalid block type";
        *in_eax = 0x1d;
      }
      uVar14 = uVar14 >> 3;
      uVar16 = uVar16 - 3;
      break;
    case 0xb: ;
      goto switchD_00c36e68_caseD_b;
    case 0xc: ;
      goto switchD_00c36e68_caseD_c;
    case 0xd: ;
      uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); pbVar10 = pbVar11, uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = uVar14 & 0xffff;
      if (uVar4 == ~uVar14 >> 0x10) {
        uVar14 = 0;
        uVar16 = 0;
        in_eax[0x10] = uVar4;
        *in_eax = 0xe;
        if ((*(int *)&gen_a1) != 6) goto switchD_00c36e68_caseD_e;
        goto LAB_00c38165;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_00c38101;
    case 0xe: ;
switchD_00c36e68_caseD_e: ;
      *in_eax = 0xf;
    case 0xf: ;
      (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
LAB_00c37cd1: ;
        *in_eax = 0xb;
        pbVar10 = pbVar11;
        break;
      }
      if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
      }
      if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
      }
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x20));
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
        break;
      }
      goto LAB_00c38165;
    case 0x10: ;
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[0x18] = (uVar14 & 0x1f) + 0x101;
      uVar12 = uVar14 >> 10;
      uVar4 = (uVar14 >> 5 & 0x1f) + 1;
      uVar14 = uVar14 >> 0xe;
      uVar16 = uVar16 - 0xe;
      in_eax[0x19] = uVar4;
      in_eax[0x17] = (uVar12 & 0xf) + 4;
      if ((in_eax[0x18] < 0x11f) && (uVar4 < 0x1f)) {
        in_eax[0x1a] = 0;
        *in_eax = 0x11;
        goto switchD_00c36e68_caseD_11;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00c38101;
    case 0x11: ;
switchD_00c36e68_caseD_11: ;
      if (in_eax[0x1a] < in_eax[0x17]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar10 = pbVar11;
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          }
          *((ushort *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1112788) + in_eax[0x1a] * 2) * 2 + 0x70)))
               = (ushort)uVar14 & 7;
          in_eax[0x1a] = in_eax[0x1a] + 1;
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
        } while (in_eax[0x1a] < in_eax[0x17]);
      }
      uVar4 = in_eax[0x1a];
      while (uVar4 < 0x13) {
        *((undefined2 *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x1112788) + in_eax[0x1a] * 2) * 2 + 0x70))) = 0;
        in_eax[0x1a] = in_eax[0x1a] + 1;
        uVar4 = in_eax[0x1a];
      }
      in_eax[0x1b] = (uint)(in_eax + 0x14c);
      in_eax[0x13] = (uint)(in_eax + 0x14c);
      in_eax[0x15] = 7;
      (*(uint *)(gen_frame + 0x4)) = F_00c35be0(0,in_eax + 0x1c,0x13,in_eax + 0x1b,in_eax + 0x15,in_eax + 0xbc);
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        in_eax[0x1a] = 0;
        *in_eax = 0x12;
        goto switchD_00c36e68_caseD_12;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00c38101: ;
      *in_eax = 0x1d;
      pbVar10 = pbVar11;
      break;
    case 0x12: ;
switchD_00c36e68_caseD_12: ;
      if (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]) {
        do {
          uVar13 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar16 < (uVar13 >> 8 & 0xff)) {
            do {
              pbVar10 = pbVar11;
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
              bVar7 = *pbVar11;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              bVar9 = (byte)uVar16;
              pbVar11 = pbVar11 + 1;
              uVar16 = uVar16 + 8;
              uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
              uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar13;
            } while (uVar16 < (uVar13 >> 8 & 0xff));
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = (short)(uVar13 >> 0x10);
          bVar7 = (byte)(uVar13 >> 8);
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar13 >> 0x10 < 0x10) {
            if (uVar16 < (uVar13 >> 8 & 0xff)) {
              do {
                pbVar10 = pbVar11;
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                bVar9 = *pbVar11;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                bVar8 = (byte)uVar16;
                pbVar11 = pbVar11 + 1;
                uVar16 = uVar16 + 8;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
              } while (uVar16 < (uVar13 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> (bVar7 & 0x1f);
            uVar16 = uVar16 - (uVar13 >> 8 & 0xff);
            *(short *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2));
            in_eax[0x1a] = in_eax[0x1a] + 1;
          }
          else {
            if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x10) {
              uVar4 = uVar13 >> 8 & 0xff;
              if (uVar16 < uVar4 + 2) {
                do {
                  pbVar10 = pbVar11;
                  if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                  bVar9 = *pbVar11;
                  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                  bVar8 = (byte)uVar16;
                  pbVar11 = pbVar11 + 1;
                  uVar16 = uVar16 + 8;
                  uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                } while (uVar16 < uVar4 + 2);
              }
              uVar13 = uVar14 >> (bVar7 & 0x1f);
              uVar16 = uVar16 - uVar4;
              if (in_eax[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                uVar14 = uVar13;
                goto LAB_00c38101;
              }
              uVar1 = *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x6e);
              uVar14 = uVar13 >> 2;
              (*(uint *)(gen_frame + 0x20)) = (uVar13 & 3) + 3;
              uVar16 = uVar16 - 2;
            }
            else {
              uVar4 = uVar13 >> 8 & 0xff;
              if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x11) {
                if (uVar16 < uVar4 + 3) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 3);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 7) + 3;
                uVar14 = uVar14 >> 3;
                iVar5 = -3;
              }
              else {
                if (uVar16 < uVar4 + 7) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 7);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 0x7f) + 0xb;
                uVar14 = uVar14 >> 7;
                iVar5 = -7;
              }
              uVar16 = uVar16 + (iVar5 - uVar4);
              uVar1 = 0;
            }
            if (in_eax[0x19] + in_eax[0x18] < in_eax[0x1a] + (*(uint *)(gen_frame + 0x20))) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_00c38101;
            }
            while ((*(uint *)(gen_frame + 0x20)) != 0) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
              *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = uVar1;
              in_eax[0x1a] = in_eax[0x1a] + 1;
            }
          }
        } while (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]);
      }
      pbVar10 = pbVar11;
      if (*in_eax != 0x1d) {
        if ((short)in_eax[0x9c] == 0) {
          param_1[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          in_eax[0x1b] = (uint)(in_eax + 0x14c);
          in_eax[0x13] = (uint)(in_eax + 0x14c);
          in_eax[0x15] = 9;
          (*(uint *)(gen_frame + 0x4)) = F_00c35be0(1,in_eax + 0x1c,in_eax[0x18],in_eax + 0x1b,in_eax + 0x15,
                                  in_eax + 0xbc);
          if ((*(uint *)(gen_frame + 0x4)) == 0) {
            in_eax[0x14] = in_eax[0x1b];
            in_eax[0x16] = 6;
            (*(uint *)(gen_frame + 0x4)) = F_00c35be0(2,(int)in_eax + in_eax[0x18] * 2 + 0x70,in_eax[0x19],
                                    in_eax + 0x1b,in_eax + 0x16,in_eax + 0xbc);
            if ((*(uint *)(gen_frame + 0x4)) == 0) {
              *in_eax = 0x13;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(int *)&gen_a1) != 6) goto switchD_00c36e68_caseD_13;
              goto LAB_00c38165;
            }
            param_1[6] = (int)"invalid distances set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
        }
        goto LAB_00c38101;
      }
      break;
    case 0x13: ;
switchD_00c36e68_caseD_13: ;
      *in_eax = 0x14;
      pbVar11 = pbVar10;
    case 0x14: ;
      if ((5 < (*(uint *)(gen_frame + 0x28))) && (0x101 < (*(uint *)(gen_frame + 0x1c)))) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)(*(byte * PTR32 *)(gen_frame + 0x24));
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xe] = uVar14;
        in_eax[0xf] = uVar16;
        F_00c36110(param_1,(*(uint *)(gen_frame + 0xc)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
        uVar14 = in_eax[0xe];
        uVar16 = in_eax[0xf];
        pbVar10 = (byte *)*param_1;
        (*(uint *)(gen_frame + 0x1c)) = param_1[4];
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = param_1[1];
        if (*in_eax == 0xb) {
          in_eax[0x6f1] = 0xffffffff;
        }
        break;
      }
      in_eax[0x6f1] = 0;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      cVar3 = (char)uVar4;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((cVar3 != '\0') && ((uVar4 & 0xf0) == 0)) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                          ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                              ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                              (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      in_eax[0x10] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
        *in_eax = 0x19;
        pbVar10 = pbVar11;
        break;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x20) != 0) {
        in_eax[0x6f1] = 0xffffffff;
        goto LAB_00c37cd1;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c38101;
      }
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x15;
switchD_00c36e68_caseD_15: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x10] = in_eax[0x10] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      in_eax[0x6f2] = in_eax[0x10];
      *in_eax = 0x16;
switchD_00c36e68_caseD_16: ;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((uVar4 & 0xf0) == 0) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                          ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                              ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >>
                               (bVar7 & 0x1f)) + (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = in_eax[0x6f1] + (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00c38101;
      }
      in_eax[0x11] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x17;
switchD_00c36e68_caseD_17: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x11] = in_eax[0x11] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      *in_eax = 0x18;
switchD_00c36e68_caseD_18: ;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) != 0) {
        uVar4 = in_eax[0x11];
        if ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)) < uVar4) {
          (*(uint *)(gen_frame + 0x20)) = uVar4 - ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)));
          if ((in_eax[0xb] < (*(uint *)(gen_frame + 0x20))) && (in_eax[0x6f0] != 0)) {
            param_1[6] = (int)"invalid distance too far back";
            goto LAB_00c38101;
          }
          if (in_eax[0xc] < (*(uint *)(gen_frame + 0x20))) {
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - in_eax[0xc];
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] + in_eax[10]) - (*(uint *)(gen_frame + 0x20));
          }
          else {
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] - (*(uint *)(gen_frame + 0x20))) + in_eax[0xc];
          }
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
          if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x20))) goto LAB_00c37f7c;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - uVar4;
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
LAB_00c37f7c: ;
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x8));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x20));
        iVar5 = (*(int *)(gen_frame + 0x0)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        do {
          *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar5];
          (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
          uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar4 != 0);
        if (in_eax[0x10] == 0) {
          *in_eax = 0x14;
        }
        break;
      }
      goto LAB_00c38165;
    case 0x15: ;
      goto switchD_00c36e68_caseD_15;
    case 0x16: ;
      goto switchD_00c36e68_caseD_16;
    case 0x17: ;
      goto switchD_00c36e68_caseD_17;
    case 0x18: ;
      goto switchD_00c36e68_caseD_18;
    case 0x19: ;
      if ((*(uint *)(gen_frame + 0x1c)) == 0) goto LAB_00c38165;
      *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (char)in_eax[0x10];
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - 1;
      *in_eax = 0x14;
      break;
    case 0x1a: ;
      if (in_eax[2] != 0) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
          uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
          pbVar11 = pbVar11 + 1;
        }
        iVar5 = (*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c));
        param_1[5] = param_1[5] + iVar5;
        in_eax[7] = in_eax[7] + iVar5;
        if (iVar5 != 0) {
          if (in_eax[4] == 0) {
            uVar4 = F_00c35890(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          else {
            uVar4 = F_00c36dc0(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          in_eax[6] = uVar4;
          param_1[0xc] = uVar4;
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c));
        uVar4 = uVar14;
        if (in_eax[4] == 0) {
          uVar4 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
                  (uVar14 >> 0x18);
        }
        if (uVar4 != in_eax[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00c38101;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1b;
    case 0x1b: ;
      if ((in_eax[2] != 0) && (in_eax[4] != 0)) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c38165;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar11 = pbVar11 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        if (uVar14 != in_eax[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00c38101;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1c;
switchD_00c36e68_caseD_1c: ;
      (*(uint *)(gen_frame + 0x4)) = 1;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00c38165;
    case 0x1c: ;
      goto switchD_00c36e68_caseD_1c;
    case 0x1d: ;
      (*(uint *)(gen_frame + 0x4)) = 0xfffffffd;
      goto LAB_00c38165;
    case 0x1e: ;
      goto switchD_00c36e68_caseD_1e;
    default: ;
      return 0xfffffffe;
    }
LAB_00c38107: ;
    uVar4 = *in_eax;
  } while( true );
}

/* ref: FUN_00c38320 */
GEN_FRAME uint F_00c38320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc38320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00c36630(((byte *)(gen_frame + 0x4)),0xfffffff1,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar1 = F_00c36df0(((byte *)(gen_frame + 0x4)),4);
    if (uVar1 != 1) {
      F_00c368a0(((byte *)(gen_frame + 0x4)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
    uVar1 = F_00c368a0(((byte *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00c383c0 */
GEN_NOFRAME uint F_00c383c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc383c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14030];
  undefined8 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  (*(uint *)(gen_frame + 0x1401c)) = 0xc383e0;
  (*(uint *)(gen_frame + 0x1401c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar1 = *(undefined8 * PTR32 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_2 + 0x60);
  (*(int *)(gen_frame + 0x10000)) = (int)*puVar1;
  (*(undefined4 *)(gen_frame + 0x10008)) = (undefined4)puVar1[1];
  F_00c38320(((undefined1 *)(gen_frame + 0x10010)),&REFG(undefined4, 0x134a814),(*(int *)(gen_frame + 0x10000)) + (int)puVar1,(*(undefined4 *)(gen_frame + 0x10008)));
  uVar3 = REFG(undefined4, 0x134a814) + 0xf & 0xfffffff0;
  REFG(undefined4, 0x134a814) = uVar3;
  uVar4 = F_00c46aa0(uVar2,((undefined1 *)(gen_frame + 0x10010)),uVar3);
  F_00c47745((*(uint *)(gen_frame + 0x1401c)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)uVar4;
}

/* ref: FUN_00c38490 */
GEN_FRAME uint F_00c38490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38490u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (*(int *)&gen_args[0]) - ((*(int *)&gen_args[0]) - 1U & (*(uint *)&gen_args[1])) & (*(int *)&gen_args[0]) - 1U;
}

/* ref: FUN_00c384b0 */
GEN_FRAME uint F_00c384b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc384b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8);
  uVar5 = *(int *)(param_2 + 0x60) + 8;
  uVar9 = 8;
  iVar10 = 0;
  if (8 < uVar5) {
    do {
      uVar6 = (uint)*(byte *)(uVar9 + iVar2);
      bVar4 = *(byte *)(uVar9 + iVar2) >> 6;
      if (bVar4 == 0) {
        for (iVar8 = (uVar6 & 0xffffff3f) + 1; iVar8 != 0; iVar8 = iVar8 - 1) {
          iVar1 = uVar9 + 1;
          uVar9 = uVar9 + 1;
          *(undefined1 *)(iVar10 + iVar3) = *(undefined1 *)(iVar1 + iVar2);
          iVar10 = iVar10 + 1;
        }
        uVar9 = uVar9 + 1;
      }
      else if (bVar4 == 1) {
        iVar8 = (uVar6 & 0xffffff3f) + 2;
        if (iVar8 != 0) {
          puVar7 = ((undefined1 *)GEN_TOP(((iVar10 - (uint)*(byte *)(uVar9 + 1 + iVar2)) - 1 + iVar3)));
          do {
            *(undefined1 *)(iVar10 + iVar3) = *puVar7;
            iVar10 = iVar10 + 1;
            puVar7 = puVar7 + 1;
            iVar8 = iVar8 - 1;
          } while (iVar8 != 0);
        }
        uVar9 = uVar9 + 2;
      }
      else if (bVar4 == 3) {
        param_1 = *(byte *)(uVar9 + 2 + iVar2) + 3;
        if (param_1 != 0) {
          puVar7 = ((undefined1 *)GEN_TOP(((iVar10 - ((uint)*(byte *)(uVar9 + 1 + iVar2) | (uVar6 & 0xffffff3f) << 8)) - 1
                   + iVar3)));
          do {
            *(undefined1 *)(iVar10 + iVar3) = *puVar7;
            iVar10 = iVar10 + 1;
            puVar7 = puVar7 + 1;
            param_1 = param_1 - 1;
          } while (param_1 != 0);
        }
        uVar9 = uVar9 + 3;
      }
    } while (uVar9 < uVar5);
  }
  uVar9 = F_00c38490(0x10,iVar10);
  uVar11 = F_00c46aa0(*(undefined4 *)(param_2 + 0x58),iVar3,uVar9 + iVar10);
  return (uint)uVar11;
}

/* ref: FUN_00c385b0 */
GEN_FRAME uint F_00c385b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc385b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x11128c0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x1112cc0) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11130c0) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11128c0) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11134c0) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x11128c0) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c38870 */
GEN_FRAME uint F_00c38870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38870u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx - 4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11140c0) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1113cc0) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11144c0) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x11138c0) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c38b90 */
GEN_NOFRAME uint GEN_FASTCALL F_00c38b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38b90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c38bb0 */
GEN_FRAME uint F_00c38bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc38bb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c38b90(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c38be0 */
GEN_FRAME uint GEN_THISCALL F_00c38be0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c38bb0(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c38bb0(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c38bb0(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c38b90(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c38bb0(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c38b90(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)this ^ param_1;
}

/* ref: FUN_00c38cd0 */
GEN_FRAME uint GEN_STDCALL F_00c38cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38be0(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c38cf0 */
GEN_FRAME uint GEN_STDCALL F_00c38cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38be0(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c38d10 */
GEN_FRAME uint GEN_STDCALL F_00c38d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38d10u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c38f80 */
GEN_FRAME uint F_00c38f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc38f80u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c39020 */
GEN_FRAME uint GEN_STDCALL F_00c39020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38f80(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c39040 */
GEN_FRAME uint GEN_STDCALL F_00c39040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c38f80(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c39060 */
GEN_FRAME uint F_00c39060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc39060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  uint * param_5 = (uint *)(uintptr_t)gen_a4;
  ushort * param_6 = (ushort *)(uintptr_t)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined4 * puVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  ushort * puVar12;
  int iVar13;
  bool bVar14;
  
  (*(uint *)(gen_frame + 0x88)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  ((ushort *)(gen_frame + 0x68))[0] = 0;
  ((ushort *)(gen_frame + 0x68))[1] = 0;
  ((ushort *)(gen_frame + 0x68))[2] = 0;
  ((ushort *)(gen_frame + 0x68))[3] = 0;
  ((ushort *)(gen_frame + 0x68))[4] = 0;
  ((ushort *)(gen_frame + 0x68))[5] = 0;
  ((ushort *)(gen_frame + 0x68))[6] = 0;
  ((ushort *)(gen_frame + 0x68))[7] = 0;
  ((ushort *)(gen_frame + 0x68))[8] = 0;
  ((ushort *)(gen_frame + 0x68))[9] = 0;
  ((ushort *)(gen_frame + 0x68))[10] = 0;
  ((ushort *)(gen_frame + 0x68))[0xb] = 0;
  ((ushort *)(gen_frame + 0x68))[0xc] = 0;
  ((ushort *)(gen_frame + 0x68))[0xd] = 0;
  ((ushort *)(gen_frame + 0x68))[0xe] = 0;
  ((ushort *)(gen_frame + 0x68))[0xf] = 0;
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] = ((ushort *)(gen_frame + 0x68))[(int)(*(ushort *)(param_2 + uVar2 * 2))] + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
  }
  uVar2 = 0xf;
  do {
    if (((ushort *)(gen_frame + 0x68))[(int)(uVar2)] != 0) break;
    uVar2 = uVar2 - 1;
  } while (uVar2 != 0);
  (*(uint *)(gen_frame + 0x40)) = *param_5;
  if (uVar2 < *param_5) {
    (*(uint *)(gen_frame + 0x40)) = uVar2;
  }
  if (uVar2 == 0) {
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *(undefined4 *)*param_4 = 0x140;
    *param_4 = *param_4 + 4;
    *param_5 = 1;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0;
  }
  (*(uint *)(gen_frame + 0x3c)) = 1;
  if (1 < uVar2) {
    do {
      if (((ushort *)(gen_frame + 0x68))[(int)((*(uint *)(gen_frame + 0x3c)))] != 0) break;
      (*(uint *)(gen_frame + 0x3c)) = (*(uint *)(gen_frame + 0x3c)) + 1;
    } while ((*(uint *)(gen_frame + 0x3c)) < uVar2);
  }
  if ((*(uint *)(gen_frame + 0x40)) < (*(uint *)(gen_frame + 0x3c))) {
    (*(uint *)(gen_frame + 0x40)) = (*(uint *)(gen_frame + 0x3c));
  }
  iVar13 = 1;
  uVar9 = 1;
  do {
    iVar13 = iVar13 * 2 - (uint)((ushort *)(gen_frame + 0x68))[(int)(uVar9)];
    if (iVar13 < 0) goto LAB_00c39201;
    uVar9 = uVar9 + 1;
  } while (uVar9 < 0x10);
  if ((0 < iVar13) && ((param_1 == 0 || (uVar2 != 1)))) {
LAB_00c39201: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0xffffffff;
  }
  ((ushort *)(gen_frame + 0x48))[1] = 0;
  uVar9 = 2;
  do {
    uVar3 = uVar9 + 2;
    *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9 + 2) =
         *(short *)((int)((ushort *)(gen_frame + 0x48)) + uVar9) + *(short *)((int)((ushort *)(gen_frame + 0x68)) + uVar9);
    uVar9 = uVar3;
  } while (uVar3 < 0x1e);
  uVar9 = 0;
  if (param_3 != 0) {
    do {
      if (*(short *)(param_2 + uVar9 * 2) != 0) {
        param_6[((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))]] = (ushort)uVar9;
        ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] =
             ((ushort *)(gen_frame + 0x48))[(int)(*(ushort *)(param_2 + uVar9 * 2))] + 1;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < param_3);
  }
  if (param_1 == 0) {
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = param_6;
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = param_6;
    (*(int *)(gen_frame + 0x18)) = 0x13;
  }
  else if (param_1 == 1) {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x111757e);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x111753e);
    (*(int *)(gen_frame + 0x18)) = 0x100;
  }
  else {
    (*(ushort * PTR32 *)(gen_frame + 0x20)) = (ushort *)&REFG(undefined, 0x1117800);
    (*(ushort * PTR32 *)(gen_frame + 0x14)) = (ushort *)&REFG(undefined, 0x11177c0);
    (*(int *)(gen_frame + 0x18)) = -1;
  }
  (*(int *)(gen_frame + 0x30)) = *param_4;
  bVar5 = (byte)(*(uint *)(gen_frame + 0x40));
  (*(uint *)(gen_frame + 0xc)) = 1 << (bVar5 & 0x1f);
  uVar3 = 0;
  (*(uint *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x2c)) = 0;
  uVar9 = (*(uint *)(gen_frame + 0xc)) - 1;
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x354;
  }
  else {
    if (param_1 != 2) goto LAB_00c3928c;
    bVar14 = (*(uint *)(gen_frame + 0xc)) < 0x250;
  }
  if (!bVar14) {
LAB_00c394c0: ;
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 1;
  }
LAB_00c3928c: ;
  (*(ushort * PTR32 *)(gen_frame + 0x24)) = param_6;
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0xc));
LAB_00c39294: ;
  do {
    bVar11 = (byte)uVar3;
    bVar8 = (char)(*(uint *)(gen_frame + 0x3c)) - bVar11;
    uVar1 = *(*(ushort * PTR32 *)(gen_frame + 0x24));
    if ((int)(uint)uVar1 < (*(int *)(gen_frame + 0x18))) {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = (ushort)bVar8 << 8;
LAB_00c392d4: ;
      (*(uint *)(gen_frame + 0x44)) = CONCAT22(uVar1,(ushort)(*(uint *)(gen_frame + 0x44)));
    }
    else {
      if ((int)(uint)uVar1 <= (*(int *)(gen_frame + 0x18))) {
        (*(uint *)(gen_frame + 0x44)) = CONCAT31((uint3)bVar8,0x60);
        uVar1 = 0;
        goto LAB_00c392d4;
      }
      (*(uint *)(gen_frame + 0x44)) = CONCAT22((*(ushort * PTR32 *)(gen_frame + 0x20))[*(*(ushort * PTR32 *)(gen_frame + 0x24))],CONCAT11(bVar8,(char)(*(ushort * PTR32 *)(gen_frame + 0x14))[*(*(ushort * PTR32 *)(gen_frame + 0x24))]));
    }
    iVar13 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - bVar11 & 0x1f);
    puVar6 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x30)) + (((*(uint *)(gen_frame + 0x2c)) >> (bVar11 & 0x1f)) + (*(uint *)(gen_frame + 0xc))) * 4)));
    uVar4 = (*(uint *)(gen_frame + 0xc));
    do {
      puVar6 = puVar6 - iVar13;
      uVar4 = uVar4 - iVar13;
      *puVar6 = (*(uint *)(gen_frame + 0x44));
    } while (uVar4 != 0);
    for (uVar4 = 1 << ((char)(*(uint *)(gen_frame + 0x3c)) - 1U & 0x1f); ((*(uint *)(gen_frame + 0x2c)) & uVar4) != 0; uVar4 = uVar4 >> 1) {
    }
    if (uVar4 == 0) {
      (*(uint *)(gen_frame + 0x2c)) = 0;
    }
    else {
      (*(uint *)(gen_frame + 0x2c)) = (uVar4 - 1 & (*(uint *)(gen_frame + 0x2c))) + uVar4;
    }
    (*(ushort * PTR32 *)(gen_frame + 0x24)) = (*(ushort * PTR32 *)(gen_frame + 0x24)) + 1;
    puVar12 = ((ushort *)(gen_frame + 0x68)) + (*(uint *)(gen_frame + 0x3c));
    *puVar12 = *puVar12 - 1;
    if (*puVar12 == 0) {
      if ((*(uint *)(gen_frame + 0x3c)) == uVar2) {
        (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11((char)(*(uint *)(gen_frame + 0x3c)) - bVar11,0x40);
        (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
        uVar2 = (*(uint *)(gen_frame + 0x2c));
        iVar13 = (*(int *)(gen_frame + 0x30));
        uVar4 = (*(uint *)(gen_frame + 0x3c));
        goto joined_r0x00c3943c;
      }
      (*(uint *)(gen_frame + 0x3c)) = (uint)*(ushort *)(param_2 + (uint)*(*(ushort * PTR32 *)(gen_frame + 0x24)) * 2);
    }
  } while (((*(uint *)(gen_frame + 0x3c)) <= (*(uint *)(gen_frame + 0x40))) || (uVar4 = uVar9 & (*(uint *)(gen_frame + 0x2c)), uVar4 == (*(uint *)(gen_frame + 0x1c))));
  (*(int *)(gen_frame + 0x30)) = (*(int *)(gen_frame + 0x30)) + (*(uint *)(gen_frame + 0xc)) * 4;
  if (uVar3 == 0) {
    uVar3 = (*(uint *)(gen_frame + 0x40));
  }
  iVar7 = (*(uint *)(gen_frame + 0x3c)) - uVar3;
  uVar10 = uVar3 + iVar7;
  iVar13 = 1 << ((byte)iVar7 & 0x1f);
  if (uVar10 < uVar2) {
    puVar12 = ((ushort *)(gen_frame + 0x68)) + uVar10;
    do {
      uVar1 = *puVar12;
      if ((int)(iVar13 - (uint)uVar1) < 1) break;
      uVar10 = uVar10 + 1;
      iVar7 = iVar7 + 1;
      puVar12 = puVar12 + 1;
      iVar13 = (iVar13 - (uint)uVar1) * 2;
    } while (uVar10 < uVar2);
  }
  (*(uint *)(gen_frame + 0xc)) = 1 << ((byte)iVar7 & 0x1f);
  (*(uint *)(gen_frame + 0x38)) = (*(uint *)(gen_frame + 0x38)) + (*(uint *)(gen_frame + 0xc));
  if (param_1 == 1) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x354;
LAB_00c393f9: ;
    if (!bVar14) goto LAB_00c394c0;
  }
  else if (param_1 == 2) {
    bVar14 = (*(uint *)(gen_frame + 0x38)) < 0x250;
    goto LAB_00c393f9;
  }
  *(byte *)(*param_4 + uVar4 * 4) = (byte)iVar7;
  *(byte *)(*param_4 + 1 + uVar4 * 4) = bVar5;
  *(short *)(*param_4 + 2 + uVar4 * 4) = (short)((*(int *)(gen_frame + 0x30)) - *param_4 >> 2);
  (*(uint *)(gen_frame + 0x1c)) = uVar4;
  goto LAB_00c39294;
joined_r0x00c3943c: ;
  if (uVar2 == 0) {
LAB_00c39493: ;
    *param_4 = *param_4 + (*(uint *)(gen_frame + 0x38)) * 4;
    *param_5 = (*(uint *)(gen_frame + 0x40));
    F_00c47745((*(uint *)(gen_frame + 0x88)) ^ (uint)(uint)(gen_frame + 0x8c) GEN_EDX_ARG);
    return 0;
  }
  if ((uVar3 != 0) && ((uVar9 & uVar2) != (*(uint *)(gen_frame + 0x1c)))) {
    iVar13 = *param_4;
    uVar3 = 0;
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x44)) + 0)) = CONCAT11(bVar5,(undefined1)(*(uint *)(gen_frame + 0x44)));
    (*(uint *)(gen_frame + 0x44)) = (uint)(ushort)(*(uint *)(gen_frame + 0x44));
    uVar4 = (*(uint *)(gen_frame + 0x40));
  }
  *((uint *)GEN_TOP((iVar13 + (uVar2 >> ((byte)uVar3 & 0x1f)) * 4))) = (*(uint *)(gen_frame + 0x44));
  for (uVar10 = 1 << ((char)uVar4 - 1U & 0x1f); (uVar2 & uVar10) != 0; uVar10 = uVar10 >> 1) {
  }
  if (uVar10 == 0) goto LAB_00c39493;
  uVar2 = (uVar2 & uVar10 - 1) + uVar10;
  goto joined_r0x00c3943c;
}

/* ref: FUN_00c39500 */
GEN_FRAME uint GEN_STDCALL F_00c39500(unsigned int gen_a0)
{
  GEN_ENTER(0xc39500u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x111492c))[(int)(-param_1)];
}

/* ref: FUN_00c39520 */
GEN_FRAME uint F_00c39520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39520u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (0x10000 < (uint)(param_2 * param_3)) {
    uVar1 = F_00406a50(param_2 * param_3);
    return uVar1;
  }
  return *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x101d8;
}

/* ref: FUN_00c39560 */
GEN_FRAME uint F_00c39560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = param_2;
  if (*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x101d8U != param_2) {
    uVar2 = F_00406b30(param_2);
    uVar1 = (uint)uVar2;
  }
  return uVar1;
}

/* ref: FUN_00c39590 */
GEN_FRAME uint F_00c39590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39590u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte * pbVar1;
  undefined1 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  undefined1 uVar12;
  byte * pbVar13;
  uint uVar14;
  int iVar15;
  undefined1 * puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 * puVar20;
  undefined1 * puVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  byte * local_8;
  
  puVar3 = (undefined4 *)param_1[7];
  local_8 = (byte *)(*param_1 - 1);
  uVar19 = puVar3[0xe];
  pbVar1 = local_8 + param_1[1] - 5;
  puVar20 = (undefined1 *)(param_1[3] - 1);
  puVar16 = puVar20 + (param_1[4] - param_2);
  puVar2 = puVar20 + param_1[4] - 0x101;
  iVar4 = puVar3[10];
  uVar5 = puVar3[0xb];
  uVar6 = puVar3[0xc];
  iVar24 = puVar3[0xd];
  iVar7 = puVar3[0x13];
  iVar8 = puVar3[0x14];
  uVar9 = puVar3[0x15];
  uVar10 = puVar3[0x16];
  uVar22 = puVar3[0xf];
LAB_00c39618: ;
  if (uVar22 < 0xf) {
    pbVar13 = local_8 + 1;
    local_8 = local_8 + 2;
    uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
             ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
    uVar22 = uVar22 + 0x10;
  }
  uVar17 = *((uint *)GEN_TOP((iVar7 + ((1 << ((byte)uVar9 & 0x1f)) - 1U & uVar19) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  cVar11 = (char)uVar17;
  while (cVar11 != '\0') {
    if ((uVar17 & 0x10) != 0) {
      param_2 = uVar17 >> 0x10;
      uVar17 = uVar17 & 0xf;
      if (uVar17 != 0) {
        if (uVar22 < uVar17) {
          local_8 = local_8 + 1;
          uVar19 = uVar19 + ((uint)*local_8 << ((byte)uVar22 & 0x1f));
          uVar22 = uVar22 + 8;
        }
        param_2 = param_2 + ((1 << (sbyte)uVar17) - 1U & uVar19);
        uVar19 = uVar19 >> (sbyte)uVar17;
        uVar22 = uVar22 - uVar17;
      }
      if (uVar22 < 0xf) {
        pbVar13 = local_8 + 1;
        local_8 = local_8 + 2;
        uVar19 = uVar19 + ((uint)*pbVar13 << ((byte)uVar22 & 0x1f)) +
                 ((uint)*local_8 << ((byte)uVar22 + 8 & 0x1f));
        uVar22 = uVar22 + 0x10;
      }
      uVar17 = *((uint *)GEN_TOP((iVar8 + ((1 << ((byte)uVar10 & 0x1f)) - 1U & uVar19) * 4)));
      uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
      uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
      goto joined_r0x00c3971a;
    }
    if ((uVar17 & 0x40) != 0) {
      if ((uVar17 & 0x20) == 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c39936;
      }
      *puVar3 = 0xb;
      goto LAB_00c3993f;
    }
    uVar17 = *((uint *)GEN_TOP((iVar7 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4
                      )));
    uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
    uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
    cVar11 = (char)uVar17;
  }
  uVar12 = (undefined1)(uVar17 >> 0x10);
  goto LAB_00c398ea;
joined_r0x00c3971a: ;
  if ((uVar17 & 0x10) != 0) goto LAB_00c39756;
  if ((uVar17 & 0x40) != 0) {
    param_1[6] = (int)"invalid distance code";
    goto LAB_00c39936;
  }
  uVar17 = *((uint *)GEN_TOP((iVar8 + (((1 << ((byte)uVar17 & 0x1f)) - 1U & uVar19) + (uVar17 >> 0x10)) * 4)));
  uVar19 = uVar19 >> ((byte)(uVar17 >> 8) & 0x1f);
  uVar22 = uVar22 - (uVar17 >> 8 & 0xff);
  goto joined_r0x00c3971a;
LAB_00c39756: ;
  uVar14 = uVar17 & 0xf;
  uVar23 = uVar22;
  pbVar13 = local_8;
  if (uVar22 < uVar14) {
    uVar23 = uVar22 + 8;
    uVar19 = uVar19 + ((uint)local_8[1] << ((byte)uVar22 & 0x1f));
    pbVar13 = local_8 + 1;
    if (uVar23 < uVar14) {
      uVar19 = uVar19 + ((uint)local_8[2] << ((byte)uVar23 & 0x1f));
      uVar23 = uVar22 + 0x10;
      pbVar13 = local_8 + 2;
    }
  }
  local_8 = pbVar13;
  uVar22 = uVar23 - uVar14;
  uVar23 = (1 << (sbyte)uVar14) - 1U & uVar19;
  uVar19 = uVar19 >> (sbyte)uVar14;
  uVar23 = (uVar17 >> 0x10) + uVar23;
  if ((uint)((int)puVar20 - (int)puVar16) < uVar23) {
    uVar17 = uVar23 - ((int)puVar20 - (int)puVar16);
    if ((uVar5 < uVar17) && (puVar3[0x6f0] != 0)) {
      param_1[6] = (int)"invalid distance too far back";
LAB_00c39936: ;
      *puVar3 = 0x1d;
LAB_00c3993f: ;
      iVar4 = (int)local_8 - (uVar22 >> 3);
      iVar24 = uVar22 + (uVar22 >> 3) * -8;
      *param_1 = iVar4 + 1;
      param_1[3] = (int)(puVar20 + 1);
      param_1[4] = (int)(puVar2 + (0x101 - (int)puVar20));
      param_1[1] = (int)(pbVar1 + (5 - iVar4));
      puVar3[0xf] = iVar24;
      puVar3[0xe] = uVar19 & (1 << ((byte)iVar24 & 0x1f)) - 1U;
      return (uint)puVar3;
    }
    iVar15 = iVar24 - 1;
    if (uVar6 == 0) {
      iVar15 = iVar15 + (iVar4 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
LAB_00c3985a: ;
        iVar15 = (int)puVar20 - uVar23;
      }
    }
    else if (uVar6 < uVar17) {
      uVar14 = uVar17 - uVar6;
      iVar15 = iVar15 + (uVar6 - uVar17) + iVar4;
      if (uVar14 < param_2) {
        param_2 = param_2 - uVar14;
        iVar15 = iVar15 - (int)puVar20;
        do {
          puVar21 = puVar20 + iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar14 = uVar14 - 1;
          *puVar20 = *puVar21;
        } while (uVar14 != 0);
        iVar15 = iVar24 - 1;
        if (uVar6 < param_2) {
          param_2 = param_2 - uVar6;
          uVar17 = uVar6;
          do {
            puVar21 = (undefined1 *)(iVar15 + 1);
            iVar15 = iVar15 + 1;
            puVar20 = puVar20 + 1;
            uVar17 = uVar17 - 1;
            *puVar20 = *puVar21;
          } while (uVar17 != 0);
          goto LAB_00c3985a;
        }
      }
    }
    else {
      iVar15 = iVar15 + (uVar6 - uVar17);
      if (uVar17 < param_2) {
        param_2 = param_2 - uVar17;
        do {
          puVar21 = (undefined1 *)(iVar15 + 1);
          iVar15 = iVar15 + 1;
          puVar20 = puVar20 + 1;
          uVar17 = uVar17 - 1;
          *puVar20 = *puVar21;
        } while (uVar17 != 0);
        goto LAB_00c3985a;
      }
    }
    if (2 < param_2) {
      iVar18 = (param_2 - 3) / 3 + 1;
      do {
        param_2 = param_2 - 3;
        puVar20[1] = *(undefined1 *)(iVar15 + 1);
        puVar20[2] = *(undefined1 *)(iVar15 + 2);
        puVar21 = (undefined1 *)(iVar15 + 3);
        iVar15 = iVar15 + 3;
        puVar20 = puVar20 + 3;
        iVar18 = iVar18 - 1;
        *puVar20 = *puVar21;
      } while (iVar18 != 0);
    }
    if (param_2 == 0) goto LAB_00c398ec;
    puVar20 = puVar20 + 1;
    *puVar20 = *(undefined1 *)(iVar15 + 1);
    if (param_2 < 2) goto LAB_00c398ec;
    uVar12 = *(undefined1 *)(iVar15 + 2);
  }
  else {
    iVar15 = (int)puVar20 - uVar23;
    do {
      puVar21 = puVar20;
      iVar18 = iVar15;
      puVar21[1] = *(undefined1 *)(iVar18 + 1);
      puVar21[2] = *(undefined1 *)(iVar18 + 2);
      puVar20 = puVar21 + 3;
      *puVar20 = *(undefined1 *)(iVar18 + 3);
      param_2 = param_2 - 3;
      iVar15 = iVar18 + 3;
    } while (2 < param_2);
    if (param_2 == 0) goto LAB_00c398ec;
    puVar20 = puVar21 + 4;
    *puVar20 = *(undefined1 *)(iVar18 + 4);
    if (param_2 < 2) goto LAB_00c398ec;
    uVar12 = *(undefined1 *)(iVar18 + 5);
  }
LAB_00c398ea: ;
  puVar20 = puVar20 + 1;
  *puVar20 = uVar12;
LAB_00c398ec: ;
  if ((pbVar1 <= local_8) || (puVar2 <= puVar20)) goto LAB_00c3993f;
  goto LAB_00c39618;
}

/* ref: FUN_00c399a0 */
GEN_FRAME uint GEN_STDCALL F_00c399a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc399a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  if ((param_1 != 0) && (puVar2 = *(undefined4 * PTR32 *)(param_1 + 0x1c), puVar2 != (undefined4 *)0x0)) {
    puVar2[7] = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x30) = 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[3] = 0;
    puVar2[8] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar1 = puVar2 + 0x14c;
    puVar2[5] = 0x8000;
    puVar2[0x1b] = puVar1;
    puVar2[0x14] = puVar1;
    puVar2[0x13] = puVar1;
    puVar2[0x6f0] = 1;
    puVar2[0x6f1] = 0xffffffff;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39a20 */
GEN_FRAME uint GEN_STDCALL F_00c39a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if ((int)param_2 < 0) {
    iVar2 = 0;
    uVar3 = -param_2;
  }
  else {
    iVar2 = ((int)param_2 >> 4) + 1;
    uVar3 = param_2;
    if ((int)param_2 < 0x30) {
      uVar3 = param_2 & 0xf;
    }
  }
  if ((uVar3 != 0) && (((int)uVar3 < 8 || (0xf < (int)uVar3)))) {
    return 0xfffffffe;
  }
  if ((*(int *)(iVar1 + 0x34) != 0) && (*(uint *)(iVar1 + 0x24) != uVar3)) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 0x34));
    *(undefined4 *)(iVar1 + 0x34) = 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  *(uint *)(iVar1 + 0x24) = uVar3;
  uVar3 = F_00c399a0(param_1);
  return uVar3;
}

/* ref: FUN_00c39ab0 */
GEN_FRAME uint GEN_STDCALL F_00c39ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc39ab0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint uVar2;
  
  if (((param_3 == (char *)0x0) || (*param_3 != '1')) || (param_4 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc39520));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc39560));
  }
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x1bcc);
  if (uVar1 == 0) {
    return 0xfffffffc;
  }
  *(uint *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(uVar1 + 0x34) = 0;
  uVar2 = F_00c39a20(param_1,param_2);
  if (uVar2 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),uVar1);
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c39b70 */
GEN_FRAME uint GEN_STDCALL F_00c39b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39b70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c39ab0(param_1,0xf,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c39b90 */
GEN_FRAME uint GEN_STDCALL F_00c39b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39b90u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (((*(int *)&gen_args[0]) != 0) && (iVar2 = *(int *)((*(int *)&gen_args[0]) + 0x1c), iVar2 != 0)) {
    if ((*(int *)&gen_args[1]) < 0) {
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      return 0;
    }
    if ((*(int *)&gen_args[1]) < 0x11) {
      iVar3 = *(int *)(iVar2 + 0x3c);
      uVar1 = iVar3 + (*(int *)&gen_args[1]);
      if (uVar1 < 0x21) {
        *(uint *)(iVar2 + 0x3c) = uVar1;
        *(int *)(iVar2 + 0x38) =
             *(int *)(iVar2 + 0x38) +
             (((1 << ((byte)(*(int *)&gen_args[1]) & 0x1f)) - 1U & (*(uint *)&gen_args[2])) << ((byte)iVar3 & 0x1f));
        return 0;
      }
    }
    return 0xfffffffe;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39c00 */
GEN_NOFRAME unsigned int F_00c39c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc39c00u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  *(undefined * PTR32 *)(in_eax + 0x4c) = &REFG(undefined, 0x11178c0);
  *(undefined4 *)(in_eax + 0x54) = 9;
  *(undefined * PTR32 *)(in_eax + 0x50) = &REFG(undefined, 0x1117840);
  *(undefined4 *)(in_eax + 0x58) = 5;
  return 0;
}

/* ref: FUN_00c39c20 */
GEN_FRAME uint F_00c39c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39c20u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (*(int *)(iVar1 + 0x34) == 0) {
    uVar2 = ((code *)*(gen_code32 *)(param_2 + 0x20))
                      (*(undefined4 *)(param_2 + 0x28),
                       1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1);
    *(uint *)(iVar1 + 0x34) = uVar2;
    if (uVar2 == 0) {
      return 1;
    }
  }
  if (*(int *)(iVar1 + 0x28) == 0) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(int *)(iVar1 + 0x28) = 1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f);
  }
  uVar3 = in_eax - *(int *)(param_2 + 0x10);
  uVar2 = *(uint *)(iVar1 + 0x28);
  if (uVar2 <= uVar3) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - uVar2,uVar2);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x30) = 0;
    return 0;
  }
  uVar2 = uVar2 - *(int *)(iVar1 + 0x30);
  if (uVar3 < uVar2) {
    uVar2 = uVar3;
  }
  F_00c46aa0(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x30),*(int *)(param_2 + 0xc) - uVar3,uVar2);
  iVar4 = uVar3 - uVar2;
  if (iVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(iVar1 + 0x34),*(int *)(param_2 + 0xc) - iVar4,iVar4);
    *(int *)(iVar1 + 0x30) = iVar4;
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(iVar1 + 0x28);
    return 0;
  }
  *(int *)(iVar1 + 0x30) = *(int *)(iVar1 + 0x30) + uVar2;
  if (*(uint *)(iVar1 + 0x30) == *(uint *)(iVar1 + 0x28)) {
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
  if (*(uint *)(iVar1 + 0x2c) < *(uint *)(iVar1 + 0x28)) {
    *(uint *)(iVar1 + 0x2c) = *(uint *)(iVar1 + 0x2c) + uVar2;
  }
  return 0;
}

/* ref: FUN_00c39d20 */
GEN_FRAME uint GEN_STDCALL F_00c39d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc39d20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) &&
     ((code *)*(gen_code32 *)(param_1 + 0x24) != (code *)0x0)) {
    iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x34)));
    if (iVar1 != 0) {
      ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
    }
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39d80 */
GEN_FRAME uint GEN_STDCALL F_00c39d80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39d80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (piVar1[2] == 0) {
    if (*piVar1 != 10) goto LAB_00c39de5;
  }
  else if (*piVar1 != 10) {
    return 0xfffffffe;
  }
  iVar4 = param_2;
  uVar3 = param_3;
  uVar2 = F_00c38d10(0,0,0);
  uVar3 = F_00c38d10(uVar2,iVar4,uVar3);
  if (uVar3 != piVar1[6]) {
    return 0xfffffffd;
  }
LAB_00c39de5: ;
  uVar3 = F_00c39c20(*(undefined4 *)(param_1 + 0x10),param_1);
  if (uVar3 != 0) {
    *piVar1 = 0x1e;
    return 0xfffffffc;
  }
  uVar3 = piVar1[10];
  if (param_3 <= uVar3) {
    F_00c46aa0((piVar1[0xd] - param_3) + uVar3,param_2,param_3);
    piVar1[0xb] = param_3;
    piVar1[3] = 1;
    return 0;
  }
  F_00c46aa0(piVar1[0xd],(param_2 - uVar3) + param_3,uVar3);
  piVar1[0xb] = piVar1[10];
  piVar1[3] = 1;
  return 0;
}

/* ref: FUN_00c39e70 */
GEN_FRAME uint GEN_STDCALL F_00c39e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc39e70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 8) & 2) != 0)) {
    *(int *)(iVar1 + 0x20) = param_2;
    *(undefined4 *)(param_2 + 0x30) = 0;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c39eb0 */
GEN_FRAME uint F_00c39eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc39eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_esi = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      if (3 < uVar2) break;
      if ((uint)*(byte *)(uVar1 + in_esi) == (-(uint)(uVar2 < 2) & 0xffffff01) + 0xff) {
        uVar2 = uVar2 + 1;
      }
      else if (*(byte *)(uVar1 + in_esi) == 0) {
        uVar2 = 4 - uVar2;
      }
      else {
        uVar2 = 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  *param_2 = uVar2;
  return uVar1;
}

/* ref: FUN_00c39f10 */
GEN_FRAME uint GEN_STDCALL F_00c39f10(unsigned int gen_a0)
{
  GEN_ENTER(0xc39f10u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  if (((*(int * PTR32 *)&gen_args[0]) == (int *)0x0) || (piVar1 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[7])), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (((*(int * PTR32 *)&gen_args[0])[1] == 0) && ((uint)piVar1[0xf] < 8)) {
    return 0xfffffffb;
  }
  if (*piVar1 != 0x1f) {
    uVar3 = piVar1[0xf] & 7;
    piVar1[0xe] = piVar1[0xe] << (sbyte)uVar3;
    uVar3 = piVar1[0xf] - uVar3;
    iVar4 = 0;
    *piVar1 = 0x1f;
    piVar1[0xf] = uVar3;
    if (7 < uVar3) {
      uVar5 = piVar1[0xe];
      do {
        uVar3 = uVar3 - 8;
        *((char *)GEN_TOP(((int)&(*(int * PTR32 *)&gen_args[0]) + iVar4))) = (char)piVar1[0xe];
        uVar5 = uVar5 >> 8;
        iVar4 = iVar4 + 1;
        piVar1[0xe] = uVar5;
        piVar1[0xf] = uVar3;
      } while (7 < uVar3);
    }
    piVar1[0x1a] = 0;
    F_00c39eb0(&(*(int * PTR32 *)&gen_args[0]),piVar1 + 0x1a,iVar4);
  }
  uVar3 = F_00c39eb0(*piVar2,piVar1 + 0x1a,piVar2[1]);
  piVar2[2] = piVar2[2] + uVar3;
  piVar2[1] = piVar2[1] - uVar3;
  *piVar2 = *piVar2 + uVar3;
  iVar4 = piVar2[2];
  if (piVar1[0x1a] != 4) {
    return 0xfffffffd;
  }
  (*(int * PTR32 *)&gen_args[0]) = (int *)piVar2[5];
  F_00c399a0(piVar2);
  piVar2[2] = iVar4;
  piVar2[5] = (int)(*(int * PTR32 *)&gen_args[0]);
  *piVar1 = 0xb;
  return 0;
}

/* ref: FUN_00c3a000 */
GEN_FRAME uint GEN_STDCALL F_00c3a000(unsigned int gen_a0)
{
  GEN_ENTER(0xc3a000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if ((*piVar1 == 0xd) && (piVar1[0xf] == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c3a040 */
GEN_FRAME uint GEN_STDCALL F_00c3a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar5 = param_2;
  if ((((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (iVar1 = param_2[7], iVar1 == 0)) ||
     (((code *)param_2[8] == (code *)0x0 || (param_2[9] == 0)))) {
    return 0xfffffffe;
  }
  uVar3 = (*(code *)param_2[8])(param_2[10],1,0x1bcc);
  if (uVar3 == 0) {
    return 0xfffffffc;
  }
  param_2 = (undefined4 *)0x0;
  if ((*(int *)(iVar1 + 0x34) != 0) &&
     (param_2 = ((undefined4 *)GEN_TOP((*(code *)puVar5[8])(puVar5[10],1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f),1)))
     , param_2 == (undefined4 *)0x0)) {
    (*(code *)puVar5[9])(puVar5[10],uVar3);
    return 0xfffffffc;
  }
  puVar6 = param_1;
  for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 - 1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  F_00c46aa0(uVar3,iVar1,0x1bcc);
  uVar2 = *(uint *)(iVar1 + 0x4c);
  if ((iVar1 + 0x530U <= uVar2) && (uVar2 <= iVar1 + 0x1bbcU)) {
    *(uint *)(uVar3 + 0x4c) = uVar3 + 0x530 + ((int)((uVar2 - iVar1) - 0x530) >> 2) * 4;
    *(uint *)(uVar3 + 0x50) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x50) - iVar1) - 0x530 >> 2) * 4;
  }
  *(uint *)(uVar3 + 0x6c) = uVar3 + 0x530 + ((*(int *)(iVar1 + 0x6c) - iVar1) - 0x530 >> 2) * 4;
  if (param_2 != (undefined4 *)0x0) {
    F_00c46aa0(param_2,*(undefined4 *)(iVar1 + 0x34),
               1 << ((byte)*(undefined4 *)(iVar1 + 0x24) & 0x1f));
  }
  *(undefined4 * PTR32 *)(uVar3 + 0x34) = param_2;
  param_1[7] = uVar3;
  return 0;
}

/* ref: FUN_00c3a1a0 */
GEN_FRAME uint GEN_STDCALL F_00c3a1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a1a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x1bc0))) = 1;
    return 0xfffffffd;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3a1d0 */
GEN_FRAME uint GEN_STDCALL F_00c3a1d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3a1d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if ((param_1 == 0) || (piVar1 = *(int * PTR32 *)(param_1 + 0x1c), piVar1 == (int *)0x0)) {
    return 0xffff0000;
  }
  if (*piVar1 == 0xf) {
    return piVar1[0x6f1] * 0x10000 + piVar1[0x10];
  }
  if (*piVar1 == 0x18) {
    return piVar1[0x6f1] * 0x10000 + (piVar1[0x6f2] - piVar1[0x10]);
  }
  return piVar1[0x6f1] << 0x10;
}

/* ref: FUN_00c3a250 */
GEN_FRAME uint F_00c3a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a250u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint * in_ecx = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = ~in_eax;
  uVar3 = param_3;
  for (; (uVar3 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = (uint *)((int)in_ecx + 1)) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1114bd8) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    uVar3 = uVar3 - 1;
  }
  if (0x1f < uVar3) {
    uVar4 = uVar3 >> 5;
    puVar2 = in_ecx;
    do {
      uVar1 = uVar1 ^ *puVar2;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[1];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[2];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[3];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[4];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[5];
      in_ecx = puVar2 + 8;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[6];
      uVar3 = uVar3 - 0x20;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4) ^ puVar2[7];
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4);
      uVar4 = uVar4 - 1;
      puVar2 = in_ecx;
    } while (uVar4 != 0);
  }
  if (3 < uVar3) {
    uVar4 = uVar3 >> 2;
    do {
      uVar1 = uVar1 ^ *in_ecx;
      in_ecx = in_ecx + 1;
      uVar1 = *(uint *)(&REFG(undefined, 0x1114fd8) + (uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11153d8) + (uVar1 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1114bd8) + (uVar1 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x11157d8) + (uVar1 & 0xff) * 4);
      uVar3 = uVar3 - 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  for (; uVar3 != 0; uVar3 = uVar3 - 1) {
    uVar1 = uVar1 >> 8 ^ *(uint *)(&REFG(undefined, 0x1114bd8) + (((byte)*in_ecx ^ uVar1) & 0xff) * 4);
    in_ecx = (uint *)((int)in_ecx + 1);
  }
  return ~uVar1;
}

/* ref: FUN_00c3a510 */
GEN_FRAME uint F_00c3a510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a510u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  byte * in_ecx = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = ~(((in_eax & 0xff00) + in_eax * 0x10000) * 0x100 + (in_eax >> 8 & 0xff00) +
           (in_eax >> 0x18));
  uVar4 = param_3;
  for (; (uVar4 != 0 && (((uint)in_ecx & 3) != 0)); in_ecx = in_ecx + 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 >> 0x18 ^ (uint)*in_ecx) * 4);
    uVar4 = uVar4 - 1;
  }
  puVar2 = (uint *)(in_ecx - 4);
  if (0x1f < uVar4) {
    uVar5 = uVar4 >> 5;
    puVar1 = puVar2;
    do {
      uVar3 = uVar3 ^ puVar1[1];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[2];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[3];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[4];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[5];
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[6];
      puVar2 = puVar1 + 8;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ puVar1[7];
      uVar4 = uVar4 - 0x20;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4) ^ *puVar2;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4);
      uVar5 = uVar5 - 1;
      puVar1 = puVar2;
    } while (uVar5 != 0);
  }
  if (3 < uVar4) {
    uVar5 = uVar4 >> 2;
    do {
      uVar3 = uVar3 ^ puVar2[1];
      puVar2 = puVar2 + 1;
      uVar3 = *(uint *)(&REFG(undefined, 0x11163d8) + (uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115fd8) + (uVar3 >> 8 & 0xff) * 4) ^
              *(uint *)(&REFG(undefined, 0x11167d8) + (uVar3 >> 0x18) * 4) ^
              *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 & 0xff) * 4);
      uVar4 = uVar4 - 4;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  puVar2 = puVar2 + 1;
  for (; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = uVar3 << 8 ^ *(uint *)(&REFG(undefined, 0x1115bd8) + (uVar3 >> 0x18 ^ (uint)(byte)*puVar2) * 4);
    puVar2 = (uint *)((int)puVar2 + 1);
  }
  uVar3 = ~uVar3;
  return ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
}

/* ref: FUN_00c3a830 */
GEN_NOFRAME uint GEN_FASTCALL F_00c3a830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      uVar1 = uVar1 ^ *param_2;
    }
    param_2 = param_2 + 1;
  }
  return uVar1;
}

/* ref: FUN_00c3a850 */
GEN_FRAME uint F_00c3a850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3a850u, gen_a0, gen_a1, 0u, 0u);
  uint * in_eax = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - (int)in_eax;
  iVar2 = 0x20;
  do {
    uVar1 = F_00c3a830(*(undefined4 *)(iVar3 + (int)in_eax),param_2);
    *in_eax = uVar1;
    in_eax = in_eax + 1;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00c3a880 */
GEN_FRAME uint GEN_THISCALL F_00c3a880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  int iVar1;
  int iVar2;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  if ((int)param_2 < 1) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_FWD);
    return (uint)this;
  }
  iVar2 = 1;
  ((int *)(gen_frame + 0x88))[0] = -0x12477ce0;
  iVar1 = 1;
  do {
    ((int *)(gen_frame + 0x88))[(int)(iVar1)] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 * 2;
  } while (iVar1 < 0x20);
  F_00c3a850(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
  F_00c3a850(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
  uVar3 = param_2;
  do {
    F_00c3a850(((undefined1 *)(gen_frame + 0x8)),((int *)(gen_frame + 0x88)));
    if ((uVar3 & 1) != 0) {
      this = (undefined *)F_00c3a830(this,((undefined1 *)(gen_frame + 0x8)));
    }
    if ((int)uVar3 >> 1 == 0) break;
    F_00c3a850(((int *)(gen_frame + 0x88)),((undefined1 *)(gen_frame + 0x8)));
    if (((int)uVar3 >> 1 & 1U) != 0) {
      this = (undefined *)F_00c3a830(this,((int *)(gen_frame + 0x88)));
    }
    uVar3 = (int)uVar3 >> 2;
  } while (uVar3 != 0);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c) GEN_EDX_ARG);
  return (uint)this ^ param_1;
}

/* ref: FUN_00c3a970 */
GEN_FRAME uint GEN_STDCALL F_00c3a970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3a880(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3a990 */
GEN_FRAME uint GEN_STDCALL F_00c3a990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3a880(param_1 GEN_EDX_ARG,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3a9b0 */
GEN_FRAME uint GEN_STDCALL F_00c3a9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3a9b0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  byte * pbVar20;
  uint uVar21;
  
  uVar21 = param_1 >> 0x10;
  uVar3 = param_1 & 0xffff;
  if (param_3 == 1) {
    uVar3 = uVar3 + *param_2;
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    uVar21 = uVar21 + uVar3;
    if (0xfff0 < uVar21) {
      uVar21 = uVar21 - 0xfff1;
    }
    return uVar21 << 0x10 | uVar3;
  }
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  pbVar20 = param_2;
  uVar19 = param_3;
  if (param_3 < 0x10) {
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    if (0xfff0 < uVar3) {
      uVar3 = uVar3 - 0xfff1;
    }
    return ((uVar21 / 0xfff1) * 0xf + uVar21) * 0x10000 | uVar3;
  }
  if (0x15af < param_3) {
    param_2 = (byte *)(param_3 / 0x15b0);
    do {
      uVar19 = uVar19 - 0x15b0;
      iVar1 = 0x15b;
      do {
        iVar4 = uVar3 + *pbVar20;
        iVar5 = iVar4 + (uint)pbVar20[1];
        iVar6 = iVar5 + (uint)pbVar20[2];
        iVar7 = iVar6 + (uint)pbVar20[3];
        iVar8 = iVar7 + (uint)pbVar20[4];
        iVar9 = iVar8 + (uint)pbVar20[5];
        iVar10 = iVar9 + (uint)pbVar20[6];
        iVar11 = iVar10 + (uint)pbVar20[7];
        iVar12 = iVar11 + (uint)pbVar20[8];
        iVar13 = iVar12 + (uint)pbVar20[9];
        iVar14 = iVar13 + (uint)pbVar20[10];
        iVar15 = iVar14 + (uint)pbVar20[0xb];
        iVar16 = iVar15 + (uint)pbVar20[0xc];
        iVar17 = iVar16 + (uint)pbVar20[0xd];
        iVar18 = iVar17 + (uint)pbVar20[0xe];
        uVar3 = iVar18 + (uint)pbVar20[0xf];
        uVar21 = uVar21 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 + iVar12 +
                 iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + iVar18 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
      uVar3 = uVar3 % 0xfff1;
      uVar21 = uVar21 % 0xfff1;
      param_2 = (byte *)((int)param_2 - 1);
    } while (param_2 != (byte *)0x0);
  }
  if (uVar19 != 0) {
    if (0xf < uVar19) {
      uVar2 = uVar19 >> 4;
      do {
        iVar1 = uVar3 + *pbVar20;
        iVar4 = iVar1 + (uint)pbVar20[1];
        iVar5 = iVar4 + (uint)pbVar20[2];
        iVar6 = iVar5 + (uint)pbVar20[3];
        iVar7 = iVar6 + (uint)pbVar20[4];
        iVar8 = iVar7 + (uint)pbVar20[5];
        iVar9 = iVar8 + (uint)pbVar20[6];
        iVar10 = iVar9 + (uint)pbVar20[7];
        iVar11 = iVar10 + (uint)pbVar20[8];
        iVar12 = iVar11 + (uint)pbVar20[9];
        iVar13 = iVar12 + (uint)pbVar20[10];
        iVar14 = iVar13 + (uint)pbVar20[0xb];
        iVar15 = iVar14 + (uint)pbVar20[0xc];
        iVar16 = iVar15 + (uint)pbVar20[0xd];
        iVar17 = iVar16 + (uint)pbVar20[0xe];
        uVar3 = iVar17 + (uint)pbVar20[0xf];
        uVar19 = uVar19 - 0x10;
        uVar21 = uVar21 + iVar1 + iVar4 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 + iVar10 + iVar11 +
                 iVar12 + iVar13 + iVar14 + iVar15 + iVar16 + iVar17 + uVar3;
        pbVar20 = pbVar20 + 0x10;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    for (; uVar19 != 0; uVar19 = uVar19 - 1) {
      uVar3 = uVar3 + *pbVar20;
      pbVar20 = pbVar20 + 1;
      uVar21 = uVar21 + uVar3;
    }
    uVar3 = uVar3 % 0xfff1;
    uVar21 = uVar21 % 0xfff1;
  }
  return uVar21 << 0x10 | uVar3;
}

/* ref: FUN_00c3ac20 */
GEN_FRAME uint F_00c3ac20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ac20u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_eax = (uint)gen_a0;
  uint in_ecx = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (in_ecx & 0xffff) * (in_eax % 0xfff1);
  uVar1 = (in_ecx & 0xffff) + 0xfff0 + (param_3 & 0xffff);
  uVar3 = uVar3 + 0xfff1 +
          (((in_ecx >> 0x10) + (uVar3 / 0xfff1) * -0xfff1 + (param_3 >> 0x10)) - in_eax % 0xfff1);
  uVar2 = uVar1;
  if ((0xfff0 < uVar1) && (uVar2 = uVar1 - 0xfff1, 0xfff0 < uVar2)) {
    uVar2 = uVar1 - 0x1ffe2;
  }
  if (0x1ffe1 < uVar3) {
    uVar3 = uVar3 - 0x1ffe2;
  }
  if (0xfff0 < uVar3) {
    uVar3 = uVar3 - 0xfff1;
  }
  return uVar3 << 0x10 | uVar2;
}

/* ref: FUN_00c3acc0 */
GEN_FRAME uint GEN_STDCALL F_00c3acc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3acc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3ac20(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c3ace0 */
GEN_FRAME uint GEN_STDCALL F_00c3ace0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ace0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c3ac20(param_3,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c3ad10 */
GEN_NOFRAME uint F_00c3ad10(unsigned int gen_a0)
{
  GEN_ENTER(0xc3ad10u, gen_a0, 0u, 0u, 0u);
  int in_edx = (int)gen_a0;
  undefined2 * puVar1;
  int iVar2;
  
  puVar1 = (undefined2 *)(in_edx + 0x94);
  iVar2 = 0x11e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0x988);
  iVar2 = 0x1e;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  puVar1 = (undefined2 *)(in_edx + 0xa7c);
  iVar2 = 0x13;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  *(undefined2 *)(in_edx + 0x494) = 1;
  *(undefined4 *)(in_edx + 0x16ac) = 0;
  *(undefined4 *)(in_edx + 0x16a8) = 0;
  *(undefined4 *)(in_edx + 0x16b0) = 0;
  *(undefined4 *)(in_edx + 0x16a0) = 0;
  return 0;
}

/* ref: FUN_00c3ad90 */
GEN_FRAME ulonglong F_00c3ad90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3ad90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar7 = *(int *)(in_eax + 0x1450);
  iVar3 = *(int *)(in_eax + 0xb5c + param_3 * 4);
  iVar6 = param_3 * 2;
  bVar8 = SBORROW4(iVar6,iVar7);
  iVar5 = iVar6 - iVar7;
  if (iVar7 < iVar6) {
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
    return CONCAT44(iVar7,in_eax);
  }
  while( true ) {
    iVar7 = iVar6;
    if (bVar8 != iVar5 < 0) {
      iVar5 = *(int *)(in_eax + 0xb60 + iVar6 * 4);
      uVar1 = *(ushort *)(in_edi + iVar5 * 4);
      uVar2 = *((ushort *)GEN_TOP((in_edi + *(int *)(in_eax + 0xb5c + iVar6 * 4) * 4)));
      if ((uVar1 < uVar2) ||
         ((uVar1 == uVar2 &&
          (*(byte *)(iVar5 + 0x1458 + in_eax) <=
           *((byte *)GEN_TOP((*(int *)(in_eax + 0xb5c + iVar6 * 4) + 0x1458 + in_eax))))))) {
        iVar7 = iVar6 + 1;
      }
    }
    iVar5 = *(int *)(in_eax + 0xb5c + iVar7 * 4);
    uVar1 = *(ushort *)(in_edi + iVar3 * 4);
    uVar2 = *(ushort *)(in_edi + iVar5 * 4);
    if ((uVar1 < uVar2) ||
       ((uVar1 == uVar2 &&
        (*(byte *)(iVar3 + 0x1458 + in_eax) <= *(byte *)(iVar5 + 0x1458 + in_eax))))) break;
    *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar5;
    iVar4 = *(int *)(in_eax + 0x1450);
    iVar6 = iVar7 * 2;
    bVar8 = SBORROW4(iVar6,iVar4);
    iVar5 = iVar6 - iVar4;
    param_3 = iVar7;
    if (iVar4 < iVar6) {
      *(int *)(in_eax + 0xb5c + iVar7 * 4) = iVar3;
      return CONCAT44(iVar4,in_eax);
    }
  }
  *(int *)(in_eax + 0xb5c + param_3 * 4) = iVar3;
  return CONCAT44(iVar3,in_eax);
}

/* ref: FUN_00c3ae70 */
GEN_FRAME unsigned int F_00c3ae70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ae70u, gen_a0, gen_a1, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * in_ecx = (int *)(uintptr_t)gen_a1;
  short sVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  short * psVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ushort * puVar15;
  int local_18;
  int local_14;
  int * local_10;
  int local_c;
  
  iVar2 = in_ecx[1];
  iVar3 = *in_ecx;
  piVar4 = (int *)in_ecx[2];
  iVar9 = *piVar4;
  iVar5 = piVar4[1];
  iVar6 = piVar4[2];
  uVar11 = piVar4[4];
  *(undefined4 *)(in_eax + 0xb3c) = 0;
  *(undefined4 *)(in_eax + 0xb40) = 0;
  *(undefined4 *)(in_eax + 0xb44) = 0;
  *(undefined4 *)(in_eax + 0xb48) = 0;
  *(undefined4 *)(in_eax + 0xb4c) = 0;
  *(undefined4 *)(in_eax + 0xb50) = 0;
  *(undefined4 *)(in_eax + 0xb54) = 0;
  *(undefined4 *)(in_eax + 0xb58) = 0;
  *((undefined2 *)GEN_TOP((iVar3 + 2 + *((int *)GEN_TOP((in_eax + 0xb5c + *(int *)(in_eax + 0x1454) * 4))) * 4))) = 0;
  iVar12 = 0;
  iVar7 = *(int *)(in_eax + 0x1454) + 1;
  local_c = 0;
  if (iVar7 < 0x23d) {
    local_10 = (int *)(in_eax + 0xb5c + iVar7 * 4);
    local_18 = 0x23d - iVar7;
    local_14 = iVar7 + local_18;
    do {
      iVar7 = *local_10;
      uVar8 = *((ushort *)GEN_TOP((iVar3 + 2 + (uint)*(ushort *)(iVar3 + 2 + iVar7 * 4) * 4))) + 1;
      if ((int)uVar11 < (int)uVar8) {
        iVar12 = iVar12 + 1;
        uVar8 = uVar11;
        local_c = iVar12;
      }
      *(short *)(iVar3 + 2 + iVar7 * 4) = (short)uVar8;
      if (iVar7 <= iVar2) {
        psVar10 = (short *)(in_eax + 0xb3c + uVar8 * 2);
        *psVar10 = *psVar10 + 1;
        iVar13 = 0;
        if (iVar6 <= iVar7) {
          iVar13 = *((int *)GEN_TOP((iVar5 + (iVar7 - iVar6) * 4)));
        }
        uVar14 = (uint)*(ushort *)(iVar3 + iVar7 * 4);
        *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar8 + iVar13) * uVar14;
        iVar12 = local_c;
        if (iVar9 != 0) {
          *(int *)(in_eax + 0x16ac) =
               *(int *)(in_eax + 0x16ac) +
               ((uint)*(ushort *)(iVar9 + 2 + iVar7 * 4) + iVar13) * uVar14;
        }
      }
      local_10 = local_10 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
    if (iVar12 != 0) {
      puVar15 = (ushort *)(in_eax + 0xb3c + uVar11 * 2);
      do {
        iVar9 = uVar11 - 1;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        sVar1 = *(short *)(in_eax + 0xb3c + iVar9 * 2);
        while (sVar1 == 0) {
          psVar10 = psVar10 - 1;
          iVar9 = iVar9 - 1;
          sVar1 = *psVar10;
        }
        psVar10 = (short *)(in_eax + 0xb3e + iVar9 * 2);
        *psVar10 = *psVar10 + 2;
        psVar10 = (short *)(in_eax + 0xb3c + iVar9 * 2);
        *psVar10 = *psVar10 - 1;
        *puVar15 = *puVar15 - 1;
        iVar12 = iVar12 - 2;
      } while (0 < iVar12);
      for (; uVar11 != 0; uVar11 = uVar11 - 1) {
        uVar8 = (uint)*puVar15;
        if (uVar8 != 0) {
          iVar9 = in_eax + 0xb5c + local_14 * 4;
          local_10 = (int *)uVar8;
          do {
            iVar5 = *(int *)(iVar9 - 4);
            local_14 = local_14 - 1;
            iVar9 = iVar9 - 4;
            if (iVar5 <= iVar2) {
              uVar8 = (uint)*(ushort *)(iVar3 + 2 + iVar5 * 4);
              if (uVar8 != uVar11) {
                *(int *)(in_eax + 0x16a8) =
                     *(int *)(in_eax + 0x16a8) +
                     (uVar11 - uVar8) * (uint)*(ushort *)(iVar3 + iVar5 * 4);
                *(short *)(iVar3 + 2 + iVar5 * 4) = (short)uVar11;
              }
              uVar8 = (int)local_10 - 1;
              local_10 = (int *)uVar8;
            }
          } while (uVar8 != 0);
        }
        puVar15 = puVar15 - 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c3b070 */
GEN_FRAME unsigned int F_00c3b070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b070u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  ushort * param_3 = (ushort *)(uintptr_t)gen_a2;
  short * psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int local_c;
  uint local_8;
  
  uVar2 = *(ushort *)(in_eax + 2);
  iVar4 = 0;
  local_8 = 0xffffffff;
  iVar3 = 7;
  iVar7 = 4;
  if (uVar2 == 0) {
    iVar3 = 0x8a;
    iVar7 = 3;
  }
  *(undefined2 *)(in_eax + 6 + (int)((int)(uintptr_t)param_3) * 4) = 0xffff;
  if (-1 < (int)param_3) {
    local_c = (int)param_3 + 1;
    uVar5 = (uint)uVar2;
    param_3 = (ushort *)(in_eax + 6);
    do {
      uVar6 = (uint)*param_3;
      iVar4 = iVar4 + 1;
      if ((iVar3 <= iVar4) || (uVar5 != uVar6)) {
        if (iVar4 < iVar7) {
          psVar1 = (short *)(param_2 + 0xa7c + uVar5 * 4);
          *psVar1 = *psVar1 + (short)iVar4;
        }
        else if (uVar5 == 0) {
          if (iVar4 < 0xb) {
            *(short *)(param_2 + 0xac0) = *(short *)(param_2 + 0xac0) + 1;
          }
          else {
            *(short *)(param_2 + 0xac4) = *(short *)(param_2 + 0xac4) + 1;
          }
        }
        else {
          if (uVar5 != local_8) {
            psVar1 = (short *)(param_2 + 0xa7c + uVar5 * 4);
            *psVar1 = *psVar1 + 1;
          }
          *(short *)(param_2 + 0xabc) = *(short *)(param_2 + 0xabc) + 1;
        }
        iVar4 = 0;
        local_8 = uVar5;
        if (uVar6 == 0) {
          iVar3 = 0x8a;
          iVar7 = 3;
        }
        else if (uVar5 == uVar6) {
          iVar3 = 6;
          iVar7 = 3;
        }
        else {
          iVar3 = 7;
          iVar7 = 4;
        }
      }
      param_3 = param_3 + 2;
      local_c = local_c - 1;
      uVar5 = uVar6;
    } while (local_c != 0);
  }
  return 0;
}

/* ref: FUN_00c3b150 */
GEN_FRAME unsigned int F_00c3b150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b150u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int in_ecx = (int)gen_a1;
  int param_3 = (int)gen_a2;
  byte bVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int local_18;
  uint local_14;
  ushort * local_10;
  uint local_c;
  int local_8;
  
  local_14 = 0xffffffff;
  iVar2 = 7;
  local_8 = 4;
  if (*(ushort *)(param_3 + 2) == 0) {
    iVar2 = 0x8a;
    local_8 = 3;
  }
  if (-1 < in_ecx) {
    local_10 = (ushort *)(param_3 + 6);
    local_18 = in_ecx + 1;
    iVar4 = 0;
    local_c = (uint)*(ushort *)(param_3 + 2);
    do {
      uVar6 = (uint)*local_10;
      param_3 = iVar4 + 1;
      if ((iVar2 <= param_3) || (local_c != uVar6)) {
        if (param_3 < local_8) {
          do {
            uVar7 = (uint)*(ushort *)(in_eax + 0xa7e + local_c * 4);
            iVar2 = *(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < iVar2) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_c * 4);
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              iVar2 = *(int *)(in_eax + 0x16bc) - 0x10;
              *(ushort *)(in_eax + 0x16b8) =
                   uVar3 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_c * 4) << ((byte)iVar2 & 0x1f);
            }
            param_3 = param_3 - 1;
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar7;
          } while (param_3 != 0);
        }
        else if (local_c == 0) {
          if (param_3 < 0xb) {
            uVar7 = (uint)*(ushort *)(in_eax + 0xac2);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac0);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 - 0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac0) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 - 2);
            if (iVar2 < 0xe) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 3;
LAB_00c3b679: ;
              *(int *)(in_eax + 0x16bc) = iVar2;
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(int *)(in_eax + 0x16bc) = iVar2 - 0xd;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
          }
          else {
            uVar7 = (uint)*(ushort *)(in_eax + 0xac6);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xac4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 - 0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xac4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
            iVar2 = *(int *)(in_eax + 0x16bc);
            uVar3 = (ushort)(iVar4 - 10);
            if (iVar2 < 10) {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
              iVar2 = iVar2 + 7;
              goto LAB_00c3b679;
            }
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(int *)(in_eax + 0x16bc) = iVar2 - 9;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
        }
        else {
          iVar5 = param_3;
          if (local_c != local_14) {
            uVar7 = (uint)*(ushort *)(in_eax + 0xa7e + local_c * 4);
            bVar1 = (byte)*(int *)(in_eax + 0x16bc);
            iVar5 = iVar4;
            if ((int)(0x10 - uVar7) < *(int *)(in_eax + 0x16bc)) {
              uVar3 = *(ushort *)(in_eax + 0xa7c + local_c * 4);
              *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar3 << (bVar1 & 0x1f);
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                   *(undefined1 *)(in_eax + 0x16b8);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                   *(undefined1 *)(in_eax + 0x16b9);
              iVar2 = *(int *)(in_eax + 0x16bc);
              *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
              *(uint *)(in_eax + 0x16bc) = iVar2 - 0x10 + uVar7;
              *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
            }
            else {
              *(ushort *)(in_eax + 0x16b8) =
                   *(ushort *)(in_eax + 0x16b8) |
                   *(short *)(in_eax + 0xa7c + local_c * 4) << (bVar1 & 0x1f);
              *(uint *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) + uVar7;
            }
          }
          uVar7 = (uint)*(ushort *)(in_eax + 0xabe);
          iVar2 = *(int *)(in_eax + 0x16bc);
          if ((int)(0x10 - uVar7) < iVar2) {
            uVar3 = *(ushort *)(in_eax + 0xabc);
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            iVar2 = *(int *)(in_eax + 0x16bc);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *(uint *)(in_eax + 0x16bc) = iVar2 - 0x10 + uVar7;
            *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | *(short *)(in_eax + 0xabc) << ((byte)iVar2 & 0x1f);
            *(uint *)(in_eax + 0x16bc) = iVar2 + uVar7;
          }
          iVar2 = *(int *)(in_eax + 0x16bc);
          uVar3 = (ushort)(iVar5 - 3);
          if (iVar2 < 0xf) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
            iVar2 = iVar2 + 2;
            goto LAB_00c3b679;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar3 << ((byte)iVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar2 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(int *)(in_eax + 0x16bc) = iVar2 - 0xe;
          *(ushort *)(in_eax + 0x16b8) = uVar3 >> (0x10U - (char)iVar2 & 0x1f);
        }
        param_3 = 0;
        local_14 = local_c;
        if (uVar6 == 0) {
          iVar2 = 0x8a;
          local_8 = 3;
        }
        else if (local_c == uVar6) {
          iVar2 = 6;
          local_8 = 3;
        }
        else {
          iVar2 = 7;
          local_8 = 4;
        }
      }
      local_10 = local_10 + 2;
      local_18 = local_18 - 1;
      iVar4 = param_3;
      local_c = uVar6;
    } while (local_18 != 0);
  }
  return 0;
}

/* ref: FUN_00c3b6d0 */
GEN_FRAME unsigned int F_00c3b6d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3b6d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_esi = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_2 - 0x101;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 - 0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_3 - 1;
  if (iVar3 < 0xc) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 5;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 - 0xb;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = *(int *)(in_esi + 0x16bc);
  uVar2 = (short)param_4 - 4;
  if (iVar3 < 0xd) {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *(int *)(in_esi + 0x16bc) = iVar3 + 4;
  }
  else {
    *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar3 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b8);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
         *(undefined1 *)(in_esi + 0x16b9);
    iVar3 = *(int *)(in_esi + 0x16bc);
    *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
    *(int *)(in_esi + 0x16bc) = iVar3 - 0xc;
    *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)iVar3 & 0x1f);
  }
  iVar3 = 0;
  if (0 < param_4) {
    do {
      iVar1 = *(int *)(in_esi + 0x16bc);
      if (iVar1 < 0xe) {
        *(ushort *)(in_esi + 0x16b8) =
             *(ushort *)(in_esi + 0x16b8) |
             *(short *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[(int)(iVar3)] * 4) <<
             ((byte)iVar1 & 0x1f);
        *(int *)(in_esi + 0x16bc) = iVar1 + 3;
      }
      else {
        uVar2 = *(ushort *)(in_esi + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[(int)(iVar3)] * 4);
        *(ushort *)(in_esi + 0x16b8) = *(ushort *)(in_esi + 0x16b8) | uVar2 << ((byte)iVar1 & 0x1f);
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b8);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *((undefined1 *)GEN_TOP((*(int *)(in_esi + 0x14) + *(int *)(in_esi + 8)))) =
             *(undefined1 *)(in_esi + 0x16b9);
        *(int *)(in_esi + 0x14) = *(int *)(in_esi + 0x14) + 1;
        *(ushort *)(in_esi + 0x16b8) = uVar2 >> (0x10U - (char)*(int *)(in_esi + 0x16bc) & 0x1f);
        *(int *)(in_esi + 0x16bc) = *(int *)(in_esi + 0x16bc) - 0xd;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  F_00c3b150(in_esi,param_2 - 1,in_esi + 0x94);
  F_00c3b150(in_esi,param_3 - 1,in_esi + 0x988);
  return;
}

/* ref: FUN_00c3b920 */
GEN_FRAME uint F_00c3b920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b920u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  short * psVar1;
  byte bVar2;
  
  *((short *)GEN_TOP((*(int *)(param_1 + 0x16a4) + *(int *)(param_1 + 0x16a0) * 2))) = (short)param_2;
  *((char *)GEN_TOP((*(int *)(param_1 + 0x1698) + *(int *)(param_1 + 0x16a0)))) = (char)param_3;
  *(int *)(param_1 + 0x16a0) = *(int *)(param_1 + 0x16a0) + 1;
  if (param_2 == 0) {
    psVar1 = (short *)(param_1 + 0x94 + param_3 * 4);
    *psVar1 = *psVar1 + 1;
  }
  else {
    *(int *)(param_1 + 0x16b0) = *(int *)(param_1 + 0x16b0) + 1;
    psVar1 = (short *)(param_1 + 0x498 + (uint)(byte)(&REFG(undefined, 0x1117428))[(int)(param_3)] * 4);
    *psVar1 = *psVar1 + 1;
    if (param_2 - 1U < 0x100) {
      bVar2 = (&REFG(undefined, 0x1117227))[(int)(param_2)];
    }
    else {
      bVar2 = (&REFG(undefined, 0x1117328))[(int)(param_2 - 1U >> 7)];
    }
    psVar1 = (short *)(param_1 + 0x988 + (uint)bVar2 * 4);
    *psVar1 = *psVar1 + 1;
  }
  return (uint)(*(int *)(param_1 + 0x16a0) == *(int *)(param_1 + 0x169c) - 1);
}

/* ref: FUN_00c3b9d0 */
GEN_FRAME unsigned int F_00c3b9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3b9d0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_eax = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar6 = 0;
  if (*(int *)(in_eax + 0x16a0) != 0) {
    do {
      uVar4 = (uint)*((ushort *)GEN_TOP((*(int *)(in_eax + 0x16a4) + uVar6 * 2)));
      bVar3 = *((byte *)GEN_TOP((uVar6 + *(int *)(in_eax + 0x1698))));
      uVar8 = (uint)bVar3;
      uVar6 = uVar6 + 1;
      iVar5 = *(int *)(in_eax + 0x16bc);
      bVar2 = (byte)iVar5;
      if (uVar4 == 0) {
        uVar4 = (uint)*(ushort *)(param_2 + 2 + uVar8 * 4);
        if ((int)(0x10 - uVar4) < iVar5) {
          uVar7 = *(ushort *)(param_2 + uVar8 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 - 0x10 + uVar4;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + uVar8 * 4) << (bVar2 & 0x1f);
          iVar5 = iVar5 + uVar4;
LAB_00c3bd0f: ;
          *(int *)(in_eax + 0x16bc) = iVar5;
        }
      }
      else {
        uVar9 = (uint)(byte)(&REFG(undefined, 0x1117428))[(int)(uVar8)];
        uVar8 = (uint)*(ushort *)(param_2 + 0x406 + uVar9 * 4);
        if ((int)(0x10 - uVar8) < iVar5) {
          uVar7 = *(ushort *)(param_2 + 0x404 + uVar9 * 4);
          *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << (bVar2 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 - 0x10 + uVar8;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_2 + 0x404 + uVar9 * 4) << (bVar2 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar8;
        }
        iVar5 = *(int *)(&REFG(undefined, 0x1116bd8) + uVar9 * 4);
        if (iVar5 != 0) {
          uVar7 = (ushort)bVar3 - (short)*(undefined4 *)(&REFG(undefined, 0x1117528) + uVar9 * 4);
          iVar1 = *(int *)(in_eax + 0x16bc);
          if (0x10 - iVar5 < iVar1) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar1 & 0x1f);
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
                 *(undefined1 *)(in_eax + 0x16b8);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
                 *(undefined1 *)(in_eax + 0x16b9);
            *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
            iVar1 = *(int *)(in_eax + 0x16bc) - 0x10;
            *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f)
            ;
          }
          else {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar1 & 0x1f);
          }
          *(int *)(in_eax + 0x16bc) = iVar1 + iVar5;
        }
        uVar8 = uVar4 - 1;
        if (uVar8 < 0x100) {
          bVar3 = (&REFG(undefined, 0x1117227))[(int)(uVar4)];
        }
        else {
          bVar3 = (&REFG(undefined, 0x1117328))[(int)(uVar8 >> 7)];
        }
        uVar4 = (uint)bVar3;
        uVar9 = (uint)*(ushort *)(param_3 + 2 + uVar4 * 4);
        iVar5 = *(int *)(in_eax + 0x16bc);
        if ((int)(0x10 - uVar9) < iVar5) {
          uVar7 = *(ushort *)(param_3 + uVar4 * 4);
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          iVar5 = *(int *)(in_eax + 0x16bc);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(uint *)(in_eax + 0x16bc) = iVar5 - 0x10 + uVar9;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
        }
        else {
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) |
               *(short *)(param_3 + uVar4 * 4) << ((byte)iVar5 & 0x1f);
          *(uint *)(in_eax + 0x16bc) = iVar5 + uVar9;
        }
        iVar1 = *(int *)(&REFG(undefined, 0x1116c60) + uVar4 * 4);
        if (iVar1 != 0) {
          uVar7 = (short)uVar8 - (short)*(undefined4 *)(&REFG(undefined, 0x11175a8) + uVar4 * 4);
          iVar5 = *(int *)(in_eax + 0x16bc);
          if (iVar5 <= 0x10 - iVar1) {
            *(ushort *)(in_eax + 0x16b8) =
                 *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
            iVar5 = iVar5 + iVar1;
            goto LAB_00c3bd0f;
          }
          *(ushort *)(in_eax + 0x16b8) =
               *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
               *(undefined1 *)(in_eax + 0x16b8);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
               *(undefined1 *)(in_eax + 0x16b9);
          *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
          *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)*(int *)(in_eax + 0x16bc) & 0x1f);
          *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) - 0x10 + iVar1;
        }
      }
    } while (uVar6 < *(uint *)(in_eax + 0x16a0));
  }
  uVar6 = (uint)*(ushort *)(param_2 + 0x402);
  iVar5 = *(int *)(in_eax + 0x16bc);
  if (iVar5 <= (int)(0x10 - uVar6)) {
    *(ushort *)(in_eax + 0x16b8) =
         *(ushort *)(in_eax + 0x16b8) | *(short *)(param_2 + 0x400) << ((byte)iVar5 & 0x1f);
    *(uint *)(in_eax + 0x16bc) = iVar5 + uVar6;
    *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
    return 0;
  }
  uVar7 = *(ushort *)(param_2 + 0x400);
  *(ushort *)(in_eax + 0x16b8) = *(ushort *)(in_eax + 0x16b8) | uVar7 << ((byte)iVar5 & 0x1f);
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = *(undefined1 *)(in_eax + 0x16b8)
  ;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = *(undefined1 *)(in_eax + 0x16b9)
  ;
  iVar5 = *(int *)(in_eax + 0x16bc);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *(uint *)(in_eax + 0x16bc) = iVar5 - 0x10 + uVar6;
  *(ushort *)(in_eax + 0x16b8) = uVar7 >> (0x10U - (char)iVar5 & 0x1f);
  *(uint *)(in_eax + 0x16b4) = (uint)*(ushort *)(param_2 + 0x402);
  return 0;
}

/* ref: FUN_00c3bde0 */
GEN_NOFRAME uint F_00c3bde0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3bde0u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  int iVar1;
  short * psVar2;
  uint uVar3;
  
  uVar3 = 0xf3ffc07f;
  iVar1 = 0;
  psVar2 = (short *)(in_esi + 0x94);
  while (((uVar3 & 1) == 0 || (*psVar2 == 0))) {
    iVar1 = iVar1 + 1;
    psVar2 = psVar2 + 2;
    uVar3 = uVar3 >> 1;
    if (0x1f < iVar1) {
      if (((*(short *)(in_esi + 0xb8) == 0) && (*(short *)(in_esi + 0xbc) == 0)) &&
         (*(short *)(in_esi + 200) == 0)) {
        iVar1 = 0x20;
        psVar2 = (short *)(in_esi + 0x114);
        while (*psVar2 == 0) {
          iVar1 = iVar1 + 1;
          psVar2 = psVar2 + 2;
          if (0xff < iVar1) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c3be50 */
GEN_NOFRAME ushort GEN_FASTCALL F_00c3be50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3be50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    uVar3 = param_1 & 1;
    param_2 = param_2 - 1;
    param_1 = param_1 >> 1;
    uVar1 = (uVar2 | uVar3) * 2;
  } while (0 < param_2);
  return (ushort)uVar2 | (ushort)uVar3;
}

/* ref: FUN_00c3be70 */
GEN_NOFRAME uint F_00c3be70(unsigned int gen_a0)
{
  GEN_ENTER(0xc3be70u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  if (*(int *)(in_eax + 0x16bc) == 0x10) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) =
         *(undefined1 *)(in_eax + 0x16b9);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(undefined2 *)(in_eax + 0x16b8) = 0;
    *(undefined4 *)(in_eax + 0x16bc) = 0;
    return in_eax;
  }
  if (7 < *(int *)(in_eax + 0x16bc)) {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    *(int *)(in_eax + 0x16bc) = *(int *)(in_eax + 0x16bc) - 8;
    *(ushort *)(in_eax + 0x16b8) = (ushort)*(byte *)(in_eax + 0x16b9);
  }
  return in_eax;
}

/* ref: FUN_00c3bef0 */
GEN_NOFRAME uint F_00c3bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3bef0u, gen_a0, 0u, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  if (*(int *)(in_eax + 0x16bc) < 9) {
    if (*(int *)(in_eax + 0x16bc) < 1) goto LAB_00c3bf34;
    iVar1 = *(int *)(in_eax + 8);
    iVar2 = *(int *)(in_eax + 0x14);
    uVar3 = *(undefined1 *)(in_eax + 0x16b8);
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) =
         *(undefined1 *)(in_eax + 0x16b8);
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
    iVar1 = *(int *)(in_eax + 0x14);
    iVar2 = *(int *)(in_eax + 8);
    uVar3 = *(undefined1 *)(in_eax + 0x16b9);
  }
  *(undefined1 *)(iVar1 + iVar2) = uVar3;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
LAB_00c3bf34: ;
  *(undefined2 *)(in_eax + 0x16b8) = 0;
  *(undefined4 *)(in_eax + 0x16bc) = 0;
  return in_eax;
}

/* ref: FUN_00c3bf50 */
GEN_FRAME uint F_00c3bf50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3bf50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  byte bVar2;
  int iVar3;
  
  uVar1 = F_00c3bef0(in_eax);
  *(undefined4 *)(uVar1 + 0x16b4) = 8;
  iVar3 = param_3;
  if (param_4 != 0) {
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = (byte)param_3;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    bVar2 = (byte)((uint)param_3 >> 8);
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~(byte)param_3;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    *((byte *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = ~bVar2;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
  }
  for (; iVar3 != 0; iVar3 = iVar3 - 1) {
    *((undefined1 *)GEN_TOP((*(int *)(uVar1 + 0x14) + *(int *)(uVar1 + 8)))) = *in_ecx;
    *(int *)(uVar1 + 0x14) = *(int *)(uVar1 + 0x14) + 1;
    in_ecx = in_ecx + 1;
  }
  return uVar1;
}

/* ref: FUN_00c3c000 */
GEN_FRAME uint GEN_STDCALL F_00c3c000(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x1117690))[(int)(-param_1)];
}

/* ref: FUN_00c3c020 */
GEN_FRAME uint F_00c3c020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined * pvVar1;
  
  pvVar1 = F_00c51787(param_2 * param_3);
  return (uint)pvVar1;
}

/* ref: FUN_00c3c040 */
GEN_FRAME uint F_00c3c040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  uint extraout_EAX = 0;
  
  F_00c4c68f(param_2);
  return extraout_EAX;
}

/* ref: FUN_00c3c060 */
GEN_FRAME uint GEN_STDCALL F_00c3c060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) && ((*(int *)&gen_a1) != 0)) &&
     ((iVar3 = *(int *)(iVar1 + 0x18), iVar3 != 2 && ((iVar3 != 1 || (*(int *)(iVar1 + 4) == 0x2a)))
      ))) {
    if (iVar3 != 0) {
      uVar2 = F_00c3a9b0(*(undefined4 *)(param_1 + 0x30),(*(int *)&gen_a1),param_3);
      *(uint *)(param_1 + 0x30) = uVar2;
    }
    if (2 < param_3) {
      uVar2 = *(uint *)(iVar1 + 0x2c);
      iVar3 = (*(int *)&gen_a1);
      uVar5 = param_3;
      if (uVar2 < param_3) {
        iVar3 = (*(int *)&gen_a1) + (param_3 - uVar2);
        uVar5 = uVar2;
      }
      F_00c46aa0(*(undefined4 *)(iVar1 + 0x38),iVar3,uVar5);
      *(uint *)(iVar1 + 0x6c) = uVar5;
      *(uint *)(iVar1 + 0x5c) = uVar5;
      uVar2 = (uint)**(byte * PTR32 *)(iVar1 + 0x38);
      *(uint *)(iVar1 + 0x48) = uVar2;
      uVar4 = 0;
      *(uint *)(iVar1 + 0x48) =
           (uVar2 << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f) ^
           (uint)(*(byte * PTR32 *)(iVar1 + 0x38))[1]) & *(uint *)(iVar1 + 0x54);
      do {
        uVar2 = ((uint)*((byte *)GEN_TOP((*(int *)(iVar1 + 0x38) + 2 + uVar4))) ^
                *(int *)(iVar1 + 0x48) << ((byte)*(undefined4 *)(iVar1 + 0x58) & 0x1f)) &
                *(uint *)(iVar1 + 0x54);
        *(uint *)(iVar1 + 0x48) = uVar2;
        *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x40) + (*(uint *)(iVar1 + 0x34) & uVar4) * 2))) =
             *((undefined2 *)GEN_TOP((*(int *)(iVar1 + 0x44) + uVar2 * 2)));
        *((short *)GEN_TOP((*(int *)(iVar1 + 0x44) + *(int *)(iVar1 + 0x48) * 2))) = (short)uVar4;
        uVar4 = uVar4 + 1;
      } while (uVar4 <= uVar5 - 3);
    }
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c160 */
GEN_FRAME uint GEN_STDCALL F_00c3c160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c160u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  
  if (((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) &&
     (*(int *)(iVar1 + 0x18) == 2)) {
    *(undefined4 *)(iVar1 + 0x1c) = param_2;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c190 */
GEN_FRAME uint GEN_STDCALL F_00c3c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c190u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((param_1 != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16bc))) = param_2;
    *((ushort *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x16b8))) =
         (1 << ((byte)param_2 & 0x1f)) - 1U & (ushort)param_3;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c1e0 */
GEN_FRAME uint GEN_STDCALL F_00c3c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc3c1e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x1c), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x8c) = param_2;
    *(undefined4 *)(iVar1 + 0x80) = param_3;
    *(undefined4 *)(iVar1 + 0x90) = param_4;
    *(undefined4 *)(iVar1 + 0x7c) = param_5;
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3c230 */
GEN_FRAME uint GEN_STDCALL F_00c3c230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c230u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char * pcVar6;
  
  iVar1 = (param_2 + 7 >> 3) + 5 + (param_2 + 0x3f >> 6) + param_2;
  if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 0x1c), iVar3 == 0)) {
    return iVar1 + 6;
  }
  iVar5 = *(int *)(iVar3 + 0x18);
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else if (iVar5 == 1) {
    iVar5 = (-(uint)(*(int *)(iVar3 + 0x6c) != 0) & 4) + 6;
  }
  else if (iVar5 == 2) {
    iVar4 = *(int *)(iVar3 + 0x1c);
    iVar5 = 0x12;
    if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x10) != 0) {
        iVar5 = *(int *)(iVar4 + 0x14) + 0x14;
      }
      pcVar6 = *(char * PTR32 *)(iVar4 + 0x1c);
      if (pcVar6 != (char *)0x0) {
        do {
          cVar2 = *pcVar6;
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      pcVar6 = *(char * PTR32 *)(iVar4 + 0x24);
      if (pcVar6 != (char *)0x0) {
        do {
          cVar2 = *pcVar6;
          iVar5 = iVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar2 != '\0');
      }
      if (*(int *)(iVar4 + 0x2c) != 0) {
        iVar5 = iVar5 + 2;
      }
    }
  }
  else {
    iVar5 = 6;
  }
  if ((*(int *)(iVar3 + 0x30) == 0xf) && (*(int *)(iVar3 + 0x50) == 0xf)) {
    return (param_2 >> 0xc) + (param_2 >> 0xe) + iVar5 + (param_2 >> 0x19) + 7 + param_2;
  }
  return iVar5 + iVar1;
}

/* ref: FUN_00c3c310 */
GEN_NOFRAME uint F_00c3c310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c310u, gen_a0, gen_a1, 0u, 0u);
  uint in_eax = (uint)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  *((char *)GEN_TOP((*(int *)(in_eax + 8) + *(int *)(in_eax + 0x14)))) = (char)((uint)in_ecx >> 8);
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  *((char *)GEN_TOP((*(int *)(in_eax + 0x14) + *(int *)(in_eax + 8)))) = (char)in_ecx;
  *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + 1;
  return in_eax;
}

/* ref: FUN_00c3c340 */
GEN_NOFRAME uint F_00c3c340(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c340u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  int * piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(in_eax + 0x1c);
  uVar4 = *(uint *)(uVar3 + 0x14);
  if (*(uint *)(in_eax + 0x10) < *(uint *)(uVar3 + 0x14)) {
    uVar4 = *(uint *)(in_eax + 0x10);
  }
  if (uVar4 != 0) {
    F_00c46aa0(*(undefined4 *)(in_eax + 0xc),*(undefined4 *)(uVar3 + 0x10),uVar4)
    ;
    *(int *)(in_eax + 0xc) = *(int *)(in_eax + 0xc) + uVar4;
    piVar1 = ((int *)GEN_TOP((*(int *)(in_eax + 0x1c) + 0x10)));
    *piVar1 = *piVar1 + uVar4;
    *(int *)(in_eax + 0x14) = *(int *)(in_eax + 0x14) + uVar4;
    *(int *)(in_eax + 0x10) = *(int *)(in_eax + 0x10) - uVar4;
    uVar3 = *(uint *)(in_eax + 0x1c);
    *(int *)(uVar3 + 0x14) = *(int *)(uVar3 + 0x14) - uVar4;
    iVar2 = *(int *)(in_eax + 0x1c);
    if (*(int *)(iVar2 + 0x14) == 0) {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 8);
    }
  }
  return uVar3;
}

/* ref: FUN_00c3c390 */
GEN_FRAME uint GEN_STDCALL F_00c3c390(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  iVar2 = *(int *)(iVar1 + 4);
  if ((((iVar2 != 0x2a) && (iVar2 != 0x45)) && (iVar2 != 0x49)) &&
     (((iVar2 != 0x5b && (iVar2 != 0x67)) && ((iVar2 != 0x71 && (iVar2 != 0x29a)))))) {
    return 0xfffffffe;
  }
  if (*(int *)(iVar1 + 8) != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(int *)(iVar1 + 8));
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x44)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x40)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  iVar1 = *((int *)GEN_TOP((*(int *)(param_1 + 0x1c) + 0x38)));
  if (iVar1 != 0) {
    ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),iVar1);
  }
  ((code *)*(gen_code32 *)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return (iVar2 != 0x71) - 1 & 0xfffffffd;
}

/* ref: FUN_00c3c470 */
GEN_FRAME uint GEN_STDCALL F_00c3c470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  if (((param_2 == (undefined4 *)0x0) || (param_1 == (undefined4 *)0x0)) ||
     (iVar1 = param_2[7], iVar1 == 0)) {
    return 0xfffffffe;
  }
  puVar3 = param_2;
  puVar6 = param_1;
  for (iVar5 = 0xe; iVar5 != 0; iVar5 = iVar5 - 1) {
    *puVar6 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar3 = ((undefined4 *)GEN_TOP((*(code *)param_1[8])(param_1[10],1,0x16c4)));
  if (puVar3 != (undefined4 *)0x0) {
    uVar16 = 0x16c4;
    param_1[7] = puVar3;
    puVar6 = puVar3;
    iVar5 = iVar1;
    F_00c46aa0(puVar3,iVar1,0x16c4);
    uVar14 = puVar3[0xb];
    *puVar3 = param_1;
    uVar13 = param_1[10];
    uVar15 = 2;
    uVar4 = (*(code *)param_1[8])(uVar13,uVar14,2);
    uVar11 = puVar3[0xb];
    puVar3[0xe] = uVar4;
    uVar10 = param_1[10];
    uVar12 = 2;
    uVar4 = (*(code *)param_1[8])(uVar10,uVar11,2);
    uVar8 = puVar3[0x13];
    puVar3[0x10] = uVar4;
    uVar7 = param_1[10];
    uVar9 = 2;
    uVar4 = (*(code *)param_1[8])(uVar7,uVar8,2);
    puVar3[0x11] = uVar4;
    uVar4 = (*(code *)param_1[8])
                      (param_1[10],puVar3[0x5a7],4,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,puVar6,iVar5,uVar16);
    puVar3[2] = uVar4;
    if (((puVar3[0xe] != 0) && (puVar3[0x10] != 0)) && ((puVar3[0x11] != 0 && (uVar4 != 0)))) {
      F_00c46aa0(puVar3[0xe],*(undefined4 *)(iVar1 + 0x38),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x10],*(undefined4 *)(iVar1 + 0x40),puVar3[0xb] * 2);
      F_00c46aa0(puVar3[0x11],*(undefined4 *)(iVar1 + 0x44),puVar3[0x13] * 2);
      F_00c46aa0(puVar3[2],*(undefined4 *)(iVar1 + 8),puVar3[3]);
      uVar2 = puVar3[0x5a7];
      puVar3[4] = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 8)) + puVar3[2];
      puVar3[0x5a9] = uVar4 + (uVar2 & 0xfffffffe);
      puVar3[0x5a6] = puVar3[2] + uVar2 * 2 + uVar2;
      puVar3[0x2c9] = puVar3 + 0x262;
      puVar3[0x2c6] = puVar3 + 0x25;
      puVar3[0x2cc] = puVar3 + 0x29f;
      return 0;
    }
    F_00c3c390(param_1);
  }
  return 0xfffffffc;
}

/* ref: FUN_00c3c610 */
GEN_NOFRAME uint F_00c3c610(unsigned int gen_a0)
{
  GEN_ENTER(0xc3c610u, gen_a0, 0u, 0u, 0u);
  int in_esi = (int)gen_a0;
  ushort uVar1;
  int iVar2;
  
  *(int *)(in_esi + 0x3c) = *(int *)(in_esi + 0x2c) * 2;
  *((undefined2 *)GEN_TOP((*(int *)(in_esi + 0x44) - 2 + *(int *)(in_esi + 0x4c) * 2))) = 0;
  F_00c48350(*(undefined * PTR32 *)(in_esi + 0x44),0,*(int *)(in_esi + 0x4c) * 2 - 2);
  iVar2 = *(int *)(in_esi + 0x84) * 0xc;
  *(uint *)(in_esi + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x11176ba) + *(int *)(in_esi + 0x84) * 0xc);
  *(uint *)(in_esi + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x11176b8) + iVar2);
  *(uint *)(in_esi + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x11176bc) + iVar2);
  uVar1 = *(ushort *)(&REFG(undefined, 0x11176be) + iVar2);
  *(undefined4 *)(in_esi + 0x6c) = 0;
  *(undefined4 *)(in_esi + 0x5c) = 0;
  *(undefined4 *)(in_esi + 0x74) = 0;
  *(undefined4 *)(in_esi + 0x68) = 0;
  *(undefined4 *)(in_esi + 0x48) = 0;
  *(uint *)(in_esi + 0x7c) = (uint)uVar1;
  *(undefined4 *)(in_esi + 0x78) = 2;
  *(undefined4 *)(in_esi + 0x60) = 2;
  return 2;
}

/* ref: FUN_00c3c6a0 */
GEN_FRAME uint F_00c3c6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c6a0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  char * pcVar1;
  uint uVar2;
  char * pcVar3;
  char * pcVar4;
  char * pcVar5;
  char * pcVar6;
  char * pcVar7;
  uint local_14;
  uint local_10;
  uint local_c;
  char local_6;
  char local_5;
  
  uVar2 = *(uint *)((*(int *)&gen_args[0]) + 0x6c);
  local_c = *(uint *)((*(int *)&gen_args[0]) + 0x7c);
  pcVar4 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + uVar2)));
  pcVar3 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x78);
  if (*(int *)((*(int *)&gen_args[0]) + 0x2c) - 0x106U < uVar2) {
    local_14 = (uVar2 - *(int *)((*(int *)&gen_args[0]) + 0x2c)) + 0x106;
  }
  else {
    local_14 = 0;
  }
  local_5 = pcVar4[(int)(pcVar3 - 1)];
  local_6 = pcVar4[(int)pcVar3];
  pcVar1 = pcVar4 + 0x102;
  if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x8c) <= pcVar3) {
    local_c = local_c >> 2;
  }
  local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x90);
  if (*(uint *)((*(int *)&gen_args[0]) + 0x74) < *(uint *)((*(int *)&gen_args[0]) + 0x90)) {
    local_10 = *(uint *)((*(int *)&gen_args[0]) + 0x74);
  }
  do {
    pcVar7 = ((char *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x38) + (*(uint *)&gen_args[1]))));
    if ((((pcVar7[(int)pcVar3] == local_6) && (pcVar7[(int)(pcVar3 - 1)] == local_5)) &&
        (*pcVar7 == *pcVar4)) && (pcVar7[1] == pcVar4[1])) {
      pcVar7 = pcVar7 + 2;
      pcVar5 = pcVar4 + 2;
      while (((((pcVar6 = pcVar5 + 1, pcVar5[1] == pcVar7[1] &&
                (pcVar6 = pcVar5 + 2, pcVar5[2] == pcVar7[2])) &&
               ((pcVar6 = pcVar5 + 3, pcVar5[3] == pcVar7[3] &&
                ((pcVar6 = pcVar5 + 4, pcVar5[4] == pcVar7[4] &&
                 (pcVar6 = pcVar5 + 5, pcVar5[5] == pcVar7[5])))))) &&
              (pcVar6 = pcVar5 + 6, pcVar5[6] == pcVar7[6])) &&
             (pcVar6 = pcVar5 + 7, pcVar5[7] == pcVar7[7]))) {
        pcVar6 = pcVar5 + 8;
        pcVar7 = pcVar7 + 8;
        if ((pcVar5[8] != *pcVar7) || (pcVar5 = pcVar6, pcVar1 <= pcVar6)) break;
      }
      pcVar7 = pcVar6 + (0x102 - (int)pcVar1);
      if ((int)pcVar3 < (int)pcVar7) {
        *(uint *)((*(int *)&gen_args[0]) + 0x70) = (*(uint *)&gen_args[1]);
        if ((int)local_10 <= (int)pcVar7) {
LAB_00c3c7ea: ;
          if (*(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74) < pcVar7) {
            pcVar7 = *(char * PTR32 *)((*(int *)&gen_args[0]) + 0x74);
          }
          return (uint)pcVar7;
        }
        local_5 = pcVar4[(int)(pcVar6 + (0x101 - (int)pcVar1))];
        local_6 = pcVar4[(int)pcVar7];
        pcVar3 = pcVar7;
      }
    }
    pcVar7 = pcVar3;
    (*(uint *)&gen_args[1]) = (uint)*((ushort *)GEN_TOP((*(int *)((*(int *)&gen_args[0]) + 0x40) + (*(uint *)((*(int *)&gen_args[0]) + 0x34) & (*(uint *)&gen_args[1])) * 2)));
    if (((*(uint *)&gen_args[1]) <= local_14) || (local_c = local_c - 1, pcVar3 = pcVar7, local_c == 0))
    goto LAB_00c3c7ea;
  } while( true );
}

/* ref: FUN_00c3c800 */
GEN_FRAME uint GEN_STDCALL F_00c3c800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3c800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c385b0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3c830 */
GEN_FRAME uint GEN_STDCALL F_00c3c830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3c830u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined2 uVar1;
  uint * in_eax;
  int * piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte * pbVar10;
  byte * pbVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  
  piVar2 = param_1;
  if ((((param_1 == (int *)0x0) || (in_eax = (uint *)param_1[7], in_eax == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return 0xfffffffe;
  }
  if (*in_eax == 0xb) {
    *in_eax = 0xc;
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
  pbVar10 = (byte *)*param_1;
  (*(uint *)(gen_frame + 0xc)) = param_1[4];
  uVar6 = param_1[1];
  uVar14 = in_eax[0xe];
  (*(uint *)(gen_frame + 0x28)) = uVar6;
  uVar4 = *in_eax;
  uVar16 = in_eax[0xf];
  (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0xc));
  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
  (*(uint *)(gen_frame + 0x4)) = 0;
  do {
    pbVar11 = pbVar10;
    uVar13 = (*(uint *)(gen_frame + 0x20));
    switch((unsigned int)(uintptr_t)(uVar4)) {
    case 0: ;
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if (in_eax[2] == 0) {
        *in_eax = 0xc;
      }
      else {
        for (; (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11, uVar16 < 0x10; uVar16 = uVar16 + 8) {
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        if (((in_eax[2] & 2) == 0) || (uVar14 != 0x8b1f)) {
          in_eax[4] = 0;
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x30) = 0xffffffff;
          }
          if (((in_eax[2] & 1) == 0) || (((uVar14 & 0xff) * 0x100 + (uVar14 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else {
            if (((byte)uVar14 & 0xf) == 8) {
              uVar16 = uVar16 - 4;
              uVar4 = (uVar14 >> 4 & 0xf) + 8;
              if (in_eax[9] == 0) {
                in_eax[9] = uVar4;
              }
              else if (in_eax[9] < uVar4) {
                param_1[6] = (int)"invalid window size";
                uVar14 = uVar14 >> 4;
                goto LAB_00c3db41;
              }
              in_eax[5] = 1 << (sbyte)uVar4;
              uVar4 = F_00c38d10(0,0,0);
              in_eax[6] = uVar4;
              param_1[0xc] = uVar4;
              *in_eax = ~(uVar14 >> 0xc) & 2 | 9;
              uVar14 = 0;
              uVar16 = 0;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              break;
            }
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00c3db41;
        }
        uVar4 = F_00c3c800(0,0,0);
        in_eax[6] = uVar4;
        (*(undefined2 *)(gen_frame + 0x18)) = 0x8b1f;
        uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
        uVar14 = 0;
        in_eax[6] = uVar4;
        uVar16 = 0;
        *in_eax = 1;
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
      }
      break;
    case 1: ;
      for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[4] = uVar14;
      if ((char)uVar14 == '\b') {
        if ((uVar14 & 0xe000) == 0) {
          if ((uint *)in_eax[8] != (uint *)0x0) {
            *(uint *)in_eax[8] = uVar14 >> 8 & 1;
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 2;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
joined_r0x00c3ca97: ;
          } while (uVar16 < 0x20);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 4) = uVar14;
          }
          if ((in_eax[4] & 0x200) != 0) {
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            (*(undefined1 *)(gen_frame + 0x1a)) = (char)(uVar14 >> 0x10);
            (*(undefined1 *)(gen_frame + 0x1b)) = (char)(uVar14 >> 0x18);
            uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),4);
            in_eax[6] = uVar4;
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 3;
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar7 = (byte)uVar16;
            pbVar10 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar14 = uVar14 + ((uint)*pbVar11 << (bVar7 & 0x1f));
joined_r0x00c3cb12: ;
            pbVar11 = pbVar10;
          } while (uVar16 < 0x10);
          if (in_eax[8] != 0) {
            *(uint *)(in_eax[8] + 8) = uVar14 & 0xff;
            *(uint *)(in_eax[8] + 0xc) = uVar14 >> 8;
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = in_eax[6];
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
            (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
            (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
            uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          uVar14 = 0;
          uVar16 = 0;
          *in_eax = 4;
          goto switchD_00c3c8a8_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00c3db41;
    case 2: ;
      goto joined_r0x00c3ca97;
    case 3: ;
      goto joined_r0x00c3cb12;
    case 4: ;
switchD_00c3c8a8_caseD_4: ;
      if ((in_eax[4] & 0x400) == 0) {
        if (in_eax[8] != 0) {
          *(undefined4 *)(in_eax[8] + 0x10) = 0;
        }
      }
      else {
        for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar10;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar10 = pbVar10 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        in_eax[0x10] = uVar14;
        if (in_eax[8] != 0) {
          *(uint *)(in_eax[8] + 0x14) = uVar14;
        }
        if ((in_eax[4] & 0x200) != 0) {
          uVar4 = in_eax[6];
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 0)) = (char)uVar14;
          (*(undefined1 *)((char *)&(*(undefined2 *)(gen_frame + 0x18)) + 1)) = (char)(uVar14 >> 8);
          (*(undefined2 *)(gen_frame + 0x18)) = (undefined2)uVar14;
          uVar4 = F_00c3c800(uVar4,&(*(undefined2 *)(gen_frame + 0x18)),2);
          in_eax[6] = uVar4;
          pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 5;
    case 5: ;
      if ((in_eax[4] & 0x400) == 0) {
LAB_00c3cca2: ;
        in_eax[0x10] = 0;
        *in_eax = 6;
switchD_00c3c8a8_caseD_6: ;
        if ((in_eax[4] & 0x800) == 0) {
          if (in_eax[8] != 0) {
            *(undefined4 *)(in_eax[8] + 0x1c) = 0;
          }
LAB_00c3cd4e: ;
          in_eax[0x10] = 0;
          *in_eax = 7;
switchD_00c3c8a8_caseD_7: ;
          if ((in_eax[4] & 0x1000) == 0) {
            if (in_eax[8] != 0) {
              *(undefined4 *)(in_eax[8] + 0x24) = 0;
            }
LAB_00c3cdfa: ;
            *in_eax = 8;
switchD_00c3c8a8_caseD_8: ;
            pbVar11 = pbVar10;
            if ((in_eax[4] & 0x200) != 0) {
              for (; uVar16 < 0x10; uVar16 = uVar16 + 8) {
                pbVar10 = pbVar11;
                uVar13 = (*(uint *)(gen_frame + 0x20));
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
                uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
                pbVar11 = pbVar11 + 1;
              }
              if (uVar14 != (ushort)in_eax[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00c3db41;
              }
              uVar14 = 0;
              uVar16 = 0;
            }
            if (in_eax[8] != 0) {
              *(uint *)(in_eax[8] + 0x2c) = (int)in_eax[4] >> 9 & 1;
              *(undefined4 *)(in_eax[8] + 0x30) = 1;
            }
            uVar4 = F_00c3c800(0,0,0);
            in_eax[6] = uVar4;
            param_1[0xc] = uVar4;
            *in_eax = 0xb;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            break;
          }
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x24) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x28))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x24) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3cdfa;
          }
        }
        else {
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) != 0) {
            uVar4 = 0;
            do {
              bVar7 = pbVar10[uVar4];
              uVar4 = uVar4 + 1;
              (*(uint *)(gen_frame + 0x20)) = uVar4;
              uVar13 = in_eax[8];
              if (((uVar13 != 0) && (*(int *)(uVar13 + 0x1c) != 0)) &&
                 (in_eax[0x10] < *(uint *)(uVar13 + 0x20))) {
                *((byte *)GEN_TOP((*(int *)(uVar13 + 0x1c) + in_eax[0x10]))) = bVar7;
                in_eax[0x10] = in_eax[0x10] + 1;
                pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              }
            } while ((bVar7 != 0) && (uVar4 = (*(uint *)(gen_frame + 0x20)), uVar4 < (*(uint *)(gen_frame + 0x28))));
            if ((in_eax[4] & 0x200) != 0) {
              uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),uVar4);
              in_eax[6] = uVar4;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
            }
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
            pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (bVar7 == 0) goto LAB_00c3cd4e;
          }
        }
      }
      else {
        (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
        if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
        }
        if ((*(uint *)(gen_frame + 0x20)) != 0) {
          if ((in_eax[8] != 0) && (iVar5 = *(int *)(in_eax[8] + 0x10), iVar5 != 0)) {
            iVar15 = *(int *)(in_eax[8] + 0x14) - in_eax[0x10];
            uVar4 = *(uint *)(in_eax[8] + 0x18);
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if (uVar4 < iVar15 + (*(uint *)(gen_frame + 0x20))) {
              uVar13 = uVar4 - iVar15;
            }
            F_00c46aa0(iVar5 + iVar15,(*(byte * PTR32 *)(gen_frame + 0x24)),uVar13);
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          if ((in_eax[4] & 0x200) != 0) {
            uVar4 = F_00c3c800(in_eax[6],(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
            in_eax[6] = uVar4;
            pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
          pbVar10 = pbVar10 + (*(uint *)(gen_frame + 0x20));
          in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        }
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if (in_eax[0x10] == 0) goto LAB_00c3cca2;
      }
LAB_00c3dba5: ;
      (*(uint *)(gen_frame + 0x20)) = uVar13;
      param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
      *param_1 = (int)pbVar10;
      param_1[4] = (*(uint *)(gen_frame + 0x1c));
      param_1[1] = (*(uint *)(gen_frame + 0x28));
      in_eax[0xe] = uVar14;
      in_eax[0xf] = uVar16;
      if (((in_eax[10] == 0) && ((0x19 < (int)*in_eax || ((*(uint *)(gen_frame + 0xc)) == param_1[4])))) ||
         (uVar4 = F_00c39c20((*(uint *)(gen_frame + 0xc)),param_1), uVar4 == 0)) {
        iVar5 = uVar6 - param_1[1];
        iVar15 = (*(uint *)(gen_frame + 0xc)) - param_1[4];
        param_1[2] = param_1[2] + iVar5;
        param_1[5] = param_1[5] + iVar15;
        in_eax[7] = in_eax[7] + iVar15;
        if ((in_eax[2] != 0) && (iVar15 != 0)) {
          if (in_eax[4] == 0) {
            uVar6 = F_00c38d10(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          else {
            uVar6 = F_00c3c800(in_eax[6],param_1[3] - iVar15,iVar15);
          }
          in_eax[6] = uVar6;
          param_1[0xc] = uVar6;
        }
        uVar6 = *in_eax;
        if ((uVar6 == 0x13) || (param_1 = (int *)0x0, uVar6 == 0xe)) {
          param_1 = (int *)0x100;
        }
        piVar2[0xb] = ((uVar6 != 0xb) - 1 & 0x80) + (-(uint)(in_eax[1] != 0) & 0x40) + (int)param_1
                      + in_eax[0xf];
        if (((iVar5 != 0) || (iVar15 != 0)) && ((*(int *)&gen_a1) != 4)) {
          return (*(uint *)(gen_frame + 0x4));
        }
        if ((*(uint *)(gen_frame + 0x4)) != 0) {
          return (*(uint *)(gen_frame + 0x4));
        }
        return 0xfffffffb;
      }
      *in_eax = 0x1e;
switchD_00c3c8a8_caseD_1e: ;
      return 0xfffffffc;
    case 6: ;
      goto switchD_00c3c8a8_caseD_6;
    case 7: ;
      goto switchD_00c3c8a8_caseD_7;
    case 8: ;
      goto switchD_00c3c8a8_caseD_8;
    case 9: ;
      for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = (uVar14 >> 8 & 0xff00) + ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 +
              (uVar14 >> 0x18);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      uVar14 = 0;
      uVar16 = 0;
      *in_eax = 10;
    case 10: ;
      if (in_eax[3] == 0) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)pbVar10;
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xf] = uVar16;
        in_eax[0xe] = uVar14;
        return 2;
      }
      uVar4 = F_00c38d10(0,0,0);
      in_eax[6] = uVar4;
      param_1[0xc] = uVar4;
      *in_eax = 0xb;
      pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
switchD_00c3c8a8_caseD_b: ;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if (((*(int *)&gen_a1) == 5) || ((*(int *)&gen_a1) == 6)) goto LAB_00c3dba5;
switchD_00c3c8a8_caseD_c: ;
      if (in_eax[1] != 0) {
        uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
        uVar16 = uVar16 - (uVar16 & 7);
        *in_eax = 0x1a;
        break;
      }
      for (; uVar16 < 3; uVar16 = uVar16 + 8) {
        uVar13 = (*(uint *)(gen_frame + 0x20));
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar10 = pbVar10 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[1] = uVar14 & 1;
      switch((unsigned int)(uintptr_t)(uVar14 >> 1 & 3)) {
      case 0: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0xd;
        uVar16 = uVar16 - 3;
        goto LAB_00c3db47;
      case 1: ;
        F_00c39c00(in_eax);
        *in_eax = 0x13;
        if ((*(int *)&gen_a1) == 6) {
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          goto LAB_00c3dba5;
        }
        break;
      case 2: ;
        uVar14 = uVar14 >> 3;
        *in_eax = 0x10;
        uVar16 = uVar16 - 3;
        goto LAB_00c3db47;
      case 3: ;
        param_1[6] = (int)"invalid block type";
        *in_eax = 0x1d;
      }
      uVar14 = uVar14 >> 3;
      uVar16 = uVar16 - 3;
      break;
    case 0xb: ;
      goto switchD_00c3c8a8_caseD_b;
    case 0xc: ;
      goto switchD_00c3c8a8_caseD_c;
    case 0xd: ;
      uVar14 = uVar14 >> (sbyte)(uVar16 & 7);
      for (uVar16 = uVar16 - (uVar16 & 7); pbVar10 = pbVar11, uVar16 < 0x20; uVar16 = uVar16 + 8) {
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      uVar4 = uVar14 & 0xffff;
      if (uVar4 == ~uVar14 >> 0x10) {
        uVar14 = 0;
        uVar16 = 0;
        in_eax[0x10] = uVar4;
        *in_eax = 0xe;
        if ((*(int *)&gen_a1) != 6) goto switchD_00c3c8a8_caseD_e;
        goto LAB_00c3dba5;
      }
      param_1[6] = (int)"invalid stored block lengths";
      goto LAB_00c3db41;
    case 0xe: ;
switchD_00c3c8a8_caseD_e: ;
      *in_eax = 0xf;
    case 0xf: ;
      (*(uint *)(gen_frame + 0x20)) = in_eax[0x10];
      if ((*(uint *)(gen_frame + 0x20)) == 0) {
LAB_00c3d711: ;
        *in_eax = 0xb;
        pbVar10 = pbVar11;
        break;
      }
      if ((*(uint *)(gen_frame + 0x28)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x28));
      }
      if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
        (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
      }
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x20)) != 0) {
        F_00c46aa0((*(undefined1 * PTR32 *)(gen_frame + 0x14)),(*(byte * PTR32 *)(gen_frame + 0x24)),(*(uint *)(gen_frame + 0x20)));
        pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24)) + (*(uint *)(gen_frame + 0x20));
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - (*(uint *)(gen_frame + 0x20));
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = in_eax[0x10] - (*(uint *)(gen_frame + 0x20));
        break;
      }
      goto LAB_00c3dba5;
    case 0x10: ;
      for (; uVar16 < 0xe; uVar16 = uVar16 + 8) {
        pbVar10 = pbVar11;
        if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
        bVar7 = *pbVar11;
        (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
        pbVar11 = pbVar11 + 1;
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
        uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
      }
      in_eax[0x18] = (uVar14 & 0x1f) + 0x101;
      uVar12 = uVar14 >> 10;
      uVar4 = (uVar14 >> 5 & 0x1f) + 1;
      uVar14 = uVar14 >> 0xe;
      uVar16 = uVar16 - 0xe;
      in_eax[0x19] = uVar4;
      in_eax[0x17] = (uVar12 & 0xf) + 4;
      if ((in_eax[0x18] < 0x11f) && (uVar4 < 0x1f)) {
        in_eax[0x1a] = 0;
        *in_eax = 0x11;
        goto switchD_00c3c8a8_caseD_11;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00c3db41;
    case 0x11: ;
switchD_00c3c8a8_caseD_11: ;
      if (in_eax[0x1a] < in_eax[0x17]) {
        do {
          for (; uVar16 < 3; uVar16 = uVar16 + 8) {
            pbVar10 = pbVar11;
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
          }
          *((ushort *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x11180c0) + in_eax[0x1a] * 2) * 2 + 0x70)))
               = (ushort)uVar14 & 7;
          in_eax[0x1a] = in_eax[0x1a] + 1;
          uVar14 = uVar14 >> 3;
          uVar16 = uVar16 - 3;
        } while (in_eax[0x1a] < in_eax[0x17]);
      }
      uVar4 = in_eax[0x1a];
      while (uVar4 < 0x13) {
        *((undefined2 *)GEN_TOP(((int)in_eax + (uint)*(ushort *)(&REFG(undefined, 0x11180c0) + in_eax[0x1a] * 2) * 2 + 0x70))) = 0;
        in_eax[0x1a] = in_eax[0x1a] + 1;
        uVar4 = in_eax[0x1a];
      }
      in_eax[0x1b] = (uint)(in_eax + 0x14c);
      in_eax[0x13] = (uint)(in_eax + 0x14c);
      in_eax[0x15] = 7;
      (*(uint *)(gen_frame + 0x4)) = F_00c39060(0,in_eax + 0x1c,0x13,in_eax + 0x1b,in_eax + 0x15,in_eax + 0xbc);
      pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
      if ((*(uint *)(gen_frame + 0x4)) == 0) {
        in_eax[0x1a] = 0;
        *in_eax = 0x12;
        goto switchD_00c3c8a8_caseD_12;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00c3db41: ;
      *in_eax = 0x1d;
      pbVar10 = pbVar11;
      break;
    case 0x12: ;
switchD_00c3c8a8_caseD_12: ;
      if (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]) {
        do {
          uVar13 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar16 < (uVar13 >> 8 & 0xff)) {
            do {
              pbVar10 = pbVar11;
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
              bVar7 = *pbVar11;
              (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
              bVar9 = (byte)uVar16;
              pbVar11 = pbVar11 + 1;
              uVar16 = uVar16 + 8;
              uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
              (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
              uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                                ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
              (*(uint *)(gen_frame + 0x20)) = uVar13;
            } while (uVar16 < (uVar13 >> 8 & 0xff));
          }
          (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = (short)(uVar13 >> 0x10);
          bVar7 = (byte)(uVar13 >> 8);
          (*(uint *)(gen_frame + 0x20)) = uVar13;
          if (uVar13 >> 0x10 < 0x10) {
            if (uVar16 < (uVar13 >> 8 & 0xff)) {
              do {
                pbVar10 = pbVar11;
                if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                bVar9 = *pbVar11;
                (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                bVar8 = (byte)uVar16;
                pbVar11 = pbVar11 + 1;
                uVar16 = uVar16 + 8;
                (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
              } while (uVar16 < (uVar13 >> 8 & 0xff));
            }
            uVar14 = uVar14 >> (bVar7 & 0x1f);
            uVar16 = uVar16 - (uVar13 >> 8 & 0xff);
            *(short *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2));
            in_eax[0x1a] = in_eax[0x1a] + 1;
          }
          else {
            if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x10) {
              uVar4 = uVar13 >> 8 & 0xff;
              if (uVar16 < uVar4 + 2) {
                do {
                  pbVar10 = pbVar11;
                  if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                  bVar9 = *pbVar11;
                  (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                  bVar8 = (byte)uVar16;
                  pbVar11 = pbVar11 + 1;
                  uVar16 = uVar16 + 8;
                  uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                  (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                } while (uVar16 < uVar4 + 2);
              }
              uVar13 = uVar14 >> (bVar7 & 0x1f);
              uVar16 = uVar16 - uVar4;
              if (in_eax[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                uVar14 = uVar13;
                goto LAB_00c3db41;
              }
              uVar1 = *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x6e);
              uVar14 = uVar13 >> 2;
              (*(uint *)(gen_frame + 0x20)) = (uVar13 & 3) + 3;
              uVar16 = uVar16 - 2;
            }
            else {
              uVar4 = uVar13 >> 8 & 0xff;
              if ((*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) == 0x11) {
                if (uVar16 < uVar4 + 3) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 3);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 7) + 3;
                uVar14 = uVar14 >> 3;
                iVar5 = -3;
              }
              else {
                if (uVar16 < uVar4 + 7) {
                  do {
                    pbVar10 = pbVar11;
                    if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
                    bVar9 = *pbVar11;
                    (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
                    bVar8 = (byte)uVar16;
                    pbVar11 = pbVar11 + 1;
                    uVar16 = uVar16 + 8;
                    uVar14 = uVar14 + ((uint)bVar9 << (bVar8 & 0x1f));
                    (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
                  } while (uVar16 < uVar4 + 7);
                }
                uVar14 = uVar14 >> (bVar7 & 0x1f);
                (*(uint *)(gen_frame + 0x20)) = (uVar14 & 0x7f) + 0xb;
                uVar14 = uVar14 >> 7;
                iVar5 = -7;
              }
              uVar16 = uVar16 + (iVar5 - uVar4);
              uVar1 = 0;
            }
            if (in_eax[0x19] + in_eax[0x18] < in_eax[0x1a] + (*(uint *)(gen_frame + 0x20))) {
              param_1[6] = (int)"invalid bit length repeat";
              goto LAB_00c3db41;
            }
            while ((*(uint *)(gen_frame + 0x20)) != 0) {
              (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - 1;
              *(undefined2 *)((int)in_eax + in_eax[0x1a] * 2 + 0x70) = uVar1;
              in_eax[0x1a] = in_eax[0x1a] + 1;
            }
          }
        } while (in_eax[0x1a] < in_eax[0x19] + in_eax[0x18]);
      }
      pbVar10 = pbVar11;
      if (*in_eax != 0x1d) {
        if ((short)in_eax[0x9c] == 0) {
          param_1[6] = (int)"invalid code -- missing end-of-block";
        }
        else {
          in_eax[0x1b] = (uint)(in_eax + 0x14c);
          in_eax[0x13] = (uint)(in_eax + 0x14c);
          in_eax[0x15] = 9;
          (*(uint *)(gen_frame + 0x4)) = F_00c39060(1,in_eax + 0x1c,in_eax[0x18],in_eax + 0x1b,in_eax + 0x15,
                                  in_eax + 0xbc);
          if ((*(uint *)(gen_frame + 0x4)) == 0) {
            in_eax[0x14] = in_eax[0x1b];
            in_eax[0x16] = 6;
            (*(uint *)(gen_frame + 0x4)) = F_00c39060(2,(int)in_eax + in_eax[0x18] * 2 + 0x70,in_eax[0x19],
                                    in_eax + 0x1b,in_eax + 0x16,in_eax + 0xbc);
            if ((*(uint *)(gen_frame + 0x4)) == 0) {
              *in_eax = 0x13;
              pbVar10 = (*(byte * PTR32 *)(gen_frame + 0x24));
              uVar13 = (*(uint *)(gen_frame + 0x20));
              if ((*(int *)&gen_a1) != 6) goto switchD_00c3c8a8_caseD_13;
              goto LAB_00c3dba5;
            }
            param_1[6] = (int)"invalid distances set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
          else {
            param_1[6] = (int)"invalid literal/lengths set";
            pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
          }
        }
        goto LAB_00c3db41;
      }
      break;
    case 0x13: ;
switchD_00c3c8a8_caseD_13: ;
      *in_eax = 0x14;
      pbVar11 = pbVar10;
    case 0x14: ;
      if ((5 < (*(uint *)(gen_frame + 0x28))) && (0x101 < (*(uint *)(gen_frame + 0x1c)))) {
        param_1[3] = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        *param_1 = (int)(*(byte * PTR32 *)(gen_frame + 0x24));
        param_1[4] = (*(uint *)(gen_frame + 0x1c));
        param_1[1] = (*(uint *)(gen_frame + 0x28));
        in_eax[0xe] = uVar14;
        in_eax[0xf] = uVar16;
        F_00c39590(param_1,(*(uint *)(gen_frame + 0xc)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (undefined1 *)param_1[3];
        uVar14 = in_eax[0xe];
        uVar16 = in_eax[0xf];
        pbVar10 = (byte *)*param_1;
        (*(uint *)(gen_frame + 0x1c)) = param_1[4];
        (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar10;
        (*(uint *)(gen_frame + 0x28)) = param_1[1];
        if (*in_eax == 0xb) {
          in_eax[0x6f1] = 0xffffffff;
        }
        break;
      }
      in_eax[0x6f1] = 0;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x13] + ((1 << ((byte)in_eax[0x15] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      cVar3 = (char)uVar4;
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((cVar3 != '\0') && ((uVar4 & 0xf0) == 0)) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                          ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x13] +
                              ((((1 << (cVar3 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                              (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      in_eax[0x10] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      if ((char)(*(uint *)(gen_frame + 0x20)) == '\0') {
        *in_eax = 0x19;
        pbVar10 = pbVar11;
        break;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x20) != 0) {
        in_eax[0x6f1] = 0xffffffff;
        goto LAB_00c3d711;
      }
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid literal/length code";
        goto LAB_00c3db41;
      }
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x15;
switchD_00c3c8a8_caseD_15: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x10] = in_eax[0x10] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      in_eax[0x6f2] = in_eax[0x10];
      *in_eax = 0x16;
switchD_00c3c8a8_caseD_16: ;
      uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if (uVar16 < (uVar4 >> 8 & 0xff)) {
        do {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          bVar9 = (byte)uVar16;
          pbVar11 = pbVar11 + 1;
          uVar16 = uVar16 + 8;
          uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar4 = *((uint *)GEN_TOP((in_eax[0x14] + ((1 << ((byte)in_eax[0x16] & 0x1f)) - 1U & uVar14) * 4)));
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar16 < (uVar4 >> 8 & 0xff));
      }
      (*(uint *)(gen_frame + 0x20)) = uVar4;
      if ((uVar4 & 0xf0) == 0) {
        bVar7 = (byte)(uVar4 >> 8);
        uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                          ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >> (bVar7 & 0x1f)) +
                          (uVar4 >> 0x10)) * 4)));
        (*(uint *)(gen_frame + 0x20)) = uVar13;
        if (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff)) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar9 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            pbVar11 = pbVar11 + 1;
            uVar14 = uVar14 + ((uint)bVar9 << ((byte)uVar16 & 0x1f));
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar13 = *((uint *)GEN_TOP((in_eax[0x14] +
                              ((((1 << ((char)uVar4 + bVar7 & 0x1f)) - 1U & uVar14) >>
                               (bVar7 & 0x1f)) + (uVar4 >> 0x10)) * 4)));
            (*(uint *)(gen_frame + 0x20)) = uVar13;
          } while (uVar16 < (uVar13 >> 8 & 0xff) + (uVar4 >> 8 & 0xff));
        }
        uVar14 = uVar14 >> (bVar7 & 0x1f);
        uVar16 = uVar16 - bVar7;
        in_eax[0x6f1] = in_eax[0x6f1] + (uint)bVar7;
      }
      uVar4 = (*(uint *)(gen_frame + 0x20)) >> 8 & 0xff;
      in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      uVar14 = uVar14 >> ((byte)((*(uint *)(gen_frame + 0x20)) >> 8) & 0x1f);
      uVar16 = uVar16 - uVar4;
      if (((*(uint *)(gen_frame + 0x20)) & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00c3db41;
      }
      in_eax[0x11] = (*(uint *)(gen_frame + 0x20)) >> 0x10;
      in_eax[0x12] = (*(uint *)(gen_frame + 0x20)) & 0xf;
      *in_eax = 0x17;
switchD_00c3c8a8_caseD_17: ;
      if (in_eax[0x12] != 0) {
        if (uVar16 < in_eax[0x12]) {
          do {
            pbVar10 = pbVar11;
            uVar13 = (*(uint *)(gen_frame + 0x20));
            if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
            bVar7 = *pbVar11;
            (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
            bVar9 = (byte)uVar16;
            pbVar11 = pbVar11 + 1;
            uVar16 = uVar16 + 8;
            (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
            uVar14 = uVar14 + ((uint)bVar7 << (bVar9 & 0x1f));
          } while (uVar16 < in_eax[0x12]);
        }
        uVar4 = in_eax[0x12];
        uVar16 = uVar16 - uVar4;
        in_eax[0x11] = in_eax[0x11] + ((1 << ((byte)uVar4 & 0x1f)) - 1U & uVar14);
        uVar14 = uVar14 >> ((byte)uVar4 & 0x1f);
        in_eax[0x6f1] = in_eax[0x6f1] + uVar4;
      }
      *in_eax = 0x18;
switchD_00c3c8a8_caseD_18: ;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      if ((*(uint *)(gen_frame + 0x1c)) != 0) {
        uVar4 = in_eax[0x11];
        if ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)) < uVar4) {
          (*(uint *)(gen_frame + 0x20)) = uVar4 - ((*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c)));
          if ((in_eax[0xb] < (*(uint *)(gen_frame + 0x20))) && (in_eax[0x6f0] != 0)) {
            param_1[6] = (int)"invalid distance too far back";
            goto LAB_00c3db41;
          }
          if (in_eax[0xc] < (*(uint *)(gen_frame + 0x20))) {
            (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x20)) - in_eax[0xc];
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] + in_eax[10]) - (*(uint *)(gen_frame + 0x20));
          }
          else {
            (*(int *)(gen_frame + 0x0)) = (in_eax[0xd] - (*(uint *)(gen_frame + 0x20))) + in_eax[0xc];
          }
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
          if ((*(uint *)(gen_frame + 0x8)) < (*(uint *)(gen_frame + 0x20))) goto LAB_00c3d9bc;
        }
        else {
          (*(int *)(gen_frame + 0x0)) = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - uVar4;
          (*(uint *)(gen_frame + 0x8)) = in_eax[0x10];
LAB_00c3d9bc: ;
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x8));
        }
        if ((*(uint *)(gen_frame + 0x1c)) < (*(uint *)(gen_frame + 0x20))) {
          (*(uint *)(gen_frame + 0x20)) = (*(uint *)(gen_frame + 0x1c));
        }
        (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - (*(uint *)(gen_frame + 0x20));
        in_eax[0x10] = (*(uint *)(gen_frame + 0x8)) - (*(uint *)(gen_frame + 0x20));
        iVar5 = (*(int *)(gen_frame + 0x0)) - (int)(*(undefined1 * PTR32 *)(gen_frame + 0x14));
        do {
          *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14))[iVar5];
          (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
          uVar4 = (*(uint *)(gen_frame + 0x20)) - 1;
          (*(uint *)(gen_frame + 0x20)) = uVar4;
        } while (uVar4 != 0);
        if (in_eax[0x10] == 0) {
          *in_eax = 0x14;
        }
        break;
      }
      goto LAB_00c3dba5;
    case 0x15: ;
      goto switchD_00c3c8a8_caseD_15;
    case 0x16: ;
      goto switchD_00c3c8a8_caseD_16;
    case 0x17: ;
      goto switchD_00c3c8a8_caseD_17;
    case 0x18: ;
      goto switchD_00c3c8a8_caseD_18;
    case 0x19: ;
      if ((*(uint *)(gen_frame + 0x1c)) == 0) goto LAB_00c3dba5;
      *(*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (char)in_eax[0x10];
      (*(undefined1 * PTR32 *)(gen_frame + 0x14)) = (*(undefined1 * PTR32 *)(gen_frame + 0x14)) + 1;
      (*(uint *)(gen_frame + 0x1c)) = (*(uint *)(gen_frame + 0x1c)) - 1;
      *in_eax = 0x14;
      break;
    case 0x1a: ;
      if (in_eax[2] != 0) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11 + 1;
          uVar14 = uVar14 + ((uint)*pbVar11 << ((byte)uVar16 & 0x1f));
          pbVar11 = pbVar11 + 1;
        }
        iVar5 = (*(uint *)(gen_frame + 0xc)) - (*(uint *)(gen_frame + 0x1c));
        param_1[5] = param_1[5] + iVar5;
        in_eax[7] = in_eax[7] + iVar5;
        if (iVar5 != 0) {
          if (in_eax[4] == 0) {
            uVar4 = F_00c38d10(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          else {
            uVar4 = F_00c3c800(in_eax[6],(int)(*(undefined1 * PTR32 *)(gen_frame + 0x14)) - iVar5,iVar5);
          }
          in_eax[6] = uVar4;
          param_1[0xc] = uVar4;
          pbVar11 = (*(byte * PTR32 *)(gen_frame + 0x24));
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0x1c));
        uVar4 = uVar14;
        if (in_eax[4] == 0) {
          uVar4 = ((uVar14 & 0xff00) + uVar14 * 0x10000) * 0x100 + (uVar14 >> 8 & 0xff00) +
                  (uVar14 >> 0x18);
        }
        if (uVar4 != in_eax[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00c3db41;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1b;
    case 0x1b: ;
      if ((in_eax[2] != 0) && (in_eax[4] != 0)) {
        for (; uVar16 < 0x20; uVar16 = uVar16 + 8) {
          pbVar10 = pbVar11;
          uVar13 = (*(uint *)(gen_frame + 0x20));
          if ((*(uint *)(gen_frame + 0x28)) == 0) goto LAB_00c3dba5;
          bVar7 = *pbVar11;
          (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) - 1;
          pbVar11 = pbVar11 + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = pbVar11;
          uVar14 = uVar14 + ((uint)bVar7 << ((byte)uVar16 & 0x1f));
        }
        if (uVar14 != in_eax[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00c3db41;
        }
        uVar14 = 0;
        uVar16 = 0;
      }
      *in_eax = 0x1c;
switchD_00c3c8a8_caseD_1c: ;
      (*(uint *)(gen_frame + 0x4)) = 1;
      pbVar10 = pbVar11;
      uVar13 = (*(uint *)(gen_frame + 0x20));
      goto LAB_00c3dba5;
    case 0x1c: ;
      goto switchD_00c3c8a8_caseD_1c;
    case 0x1d: ;
      (*(uint *)(gen_frame + 0x4)) = 0xfffffffd;
      goto LAB_00c3dba5;
    case 0x1e: ;
      goto switchD_00c3c8a8_caseD_1e;
    default: ;
      return 0xfffffffe;
    }
LAB_00c3db47: ;
    uVar4 = *in_eax;
  } while( true );
}

/* ref: FUN_00c3dd60 */
GEN_FRAME uint F_00c3dd60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3dd60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = F_00c39ab0(((byte *)(gen_frame + 0x4)),0xfffffff1,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar1 = F_00c3c830(((byte *)(gen_frame + 0x4)),4);
    if (uVar1 != 1) {
      F_00c39d20(((byte *)(gen_frame + 0x4)));
      if ((uVar1 != 2) && ((uVar1 != 0xfffffffb || ((*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) != 0)))) {
        return uVar1;
      }
      return 0xfffffffd;
    }
    *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
    uVar1 = F_00c39d20(((byte *)(gen_frame + 0x4)));
  }
  return uVar1;
}

/* ref: FUN_00c3de00 */
GEN_FRAME uint GEN_STDCALL F_00c3de00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3de00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = F_00c3a250(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c3de30 */
GEN_FRAME uint F_00c3de30(unsigned int gen_a0)
{
  GEN_ENTER(0xc3de30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  *(int *)(param_1 + 0xb18) = param_1 + 0x94;
  *(int *)(param_1 + 0xb24) = param_1 + 0x988;
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb20) = &REFG(undefined * PTR32, 0x134a818);
  *(undefined * PTR32 * PTR32 *)(param_1 + 0xb2c) = &REFG(undefined * PTR32, 0x134a82c);
  *(int *)(param_1 + 0xb30) = param_1 + 0xa7c;
  *(undefined * PTR32 *)(param_1 + 0xb38) = &REFG(undefined, 0x134a840);
  *(undefined2 *)(param_1 + 0x16b8) = 0;
  *(undefined4 *)(param_1 + 0x16bc) = 0;
  *(undefined4 *)(param_1 + 0x16b4) = 8;
  uVar1 = F_00c3ad10(param_1);
  return uVar1;
}

/* ref: FUN_00c3dea0 */
GEN_FRAME ushort F_00c3dea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3dea0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_edx = (int)gen_a0;
  int in_edi = (int)gen_a1;
  int param_3 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar1 = 0;
  uVar2 = 1;
  do {
    uVar1 = (*(short *)(in_edx + uVar2 * 2 - 2) + uVar1) * 2;
    ((ushort *)(gen_frame + 0x8))[(int)(uVar2)] = uVar1;
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x10);
  iVar4 = 0;
  if (-1 < param_3) {
    do {
      uVar3 = (uint)*(ushort *)(in_edi + 2 + iVar4 * 4);
      if (uVar3 != 0) {
        uVar1 = ((ushort *)(gen_frame + 0x8))[(int)(uVar3)];
        ((ushort *)(gen_frame + 0x8))[(int)(uVar3)] = uVar1 + 1;
        uVar1 = F_00c3be50((uint)uVar1,uVar3);
        uVar2 = (uint)uVar1;
        *(ushort *)(in_edi + iVar4 * 4) = uVar1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 <= param_3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (ushort)uVar2;
}

/* ref: FUN_00c3df20 */
GEN_FRAME ushort F_00c3df20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3df20u, gen_a0, gen_a1, 0u, 0u);
  int in_esi = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  int in_edi;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  int local_c;
  int local_8;
  
  in_edi = *param_2;
  local_c = ((int *)param_2[2])[3];
  iVar8 = *(int *)param_2[2];
  iVar6 = -1;
  iVar5 = 0;
  local_8 = -1;
  *(undefined4 *)(in_esi + 0x1450) = 0;
  *(undefined4 *)(in_esi + 0x1454) = 0x23d;
  if (0 < local_c) {
    do {
      if (*(short *)(in_edi + iVar5 * 4) == 0) {
        *(undefined2 *)(in_edi + 2 + iVar5 * 4) = 0;
      }
      else {
        *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
        *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
        *(undefined1 *)(iVar5 + 0x1458 + in_esi) = 0;
        iVar6 = iVar5;
        local_8 = iVar5;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_c);
  }
  iVar5 = *(int *)(in_esi + 0x1450);
  iVar3 = local_8;
  while (iVar5 < 2) {
    if (iVar6 < 2) {
      iVar5 = iVar6 + 1;
      iVar6 = iVar5;
    }
    else {
      iVar5 = 0;
    }
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) + 1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4))) = iVar5;
    *(undefined2 *)(in_edi + iVar5 * 4) = 1;
    *(undefined1 *)(in_esi + 0x1458 + iVar5) = 0;
    *(int *)(in_esi + 0x16a8) = *(int *)(in_esi + 0x16a8) - 1;
    if (iVar8 != 0) {
      *(int *)(in_esi + 0x16ac) =
           *(int *)(in_esi + 0x16ac) - (uint)*(ushort *)(iVar8 + 2 + iVar5 * 4);
    }
    iVar3 = iVar6;
    iVar5 = *(int *)(in_esi + 0x1450);
  }
  param_2[1] = iVar6;
  for (iVar8 = *(int *)(in_esi + 0x1450) / 2; 0 < iVar8; iVar8 = iVar8 - 1) {
    F_00c3ad90(in_esi,in_edi,iVar8);
  }
  do {
    uVar2 = *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1450) * 4)));
    iVar8 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1450) = *(int *)(in_esi + 0x1450) - 1;
    *(undefined4 *)(in_esi + 0xb60) = uVar2;
    F_00c3ad90(in_esi,in_edi,1);
    iVar6 = *(int *)(in_esi + 0xb60);
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) - 1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar8;
    *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) - 1;
    *((int *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = iVar6;
    *(short *)(in_edi + local_c * 4) =
         *(short *)(in_edi + iVar6 * 4) + *(short *)(in_edi + iVar8 * 4);
    bVar1 = *(byte *)(in_esi + 0x1458 + iVar6);
    bVar7 = *(byte *)(in_esi + 0x1458 + iVar8);
    if (bVar7 < bVar1) {
      bVar7 = bVar1;
    }
    *(byte *)(in_esi + 0x1458 + local_c) = bVar7 + 1;
    *(short *)(in_edi + 2 + iVar6 * 4) = (short)local_c;
    *(short *)(in_edi + 2 + iVar8 * 4) = (short)local_c;
    *(int *)(in_esi + 0xb60) = local_c;
    local_c = local_c + 1;
    F_00c3ad90(in_esi,in_edi,1);
  } while (1 < *(int *)(in_esi + 0x1450));
  *(int *)(in_esi + 0x1454) = *(int *)(in_esi + 0x1454) - 1;
  *((undefined4 *)GEN_TOP((in_esi + 0xb5c + *(int *)(in_esi + 0x1454) * 4))) = *(undefined4 *)(in_esi + 0xb60);
  F_00c3ae70(in_esi,param_2);
  uVar4 = F_00c3dea0(in_esi + 0xb3c,in_edi,iVar3);
  return uVar4;
}

/* ref: FUN_00c3e120 */
GEN_NOFRAME uint F_00c3e120(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e120u, gen_a0, 0u, 0u, 0u);
  int in_eax = (int)gen_a0;
  uint uVar1;
  
  F_00c3b070(in_eax + 0x94,in_eax,*(undefined4 *)(in_eax + 0xb1c));
  F_00c3b070(in_eax + 0x988,in_eax,*(undefined4 *)(in_eax + 0xb28));
  F_00c3df20(in_eax,in_eax + 0xb30);
  uVar1 = 0x12;
  do {
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined1, 0x1116c4c))[(int)(uVar1)] * 4) != 0) {
LAB_00c3e1db: ;
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c4b))[(int)(uVar1)] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 1) * 3 + 0x11;
      return uVar1 - 1;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c4a))[(int)(uVar1)] * 4) != 0) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + (uVar1 - 2) * 3 + 0x11;
      return uVar1 - 2;
    }
    if (*(short *)(in_eax + 0xa7e + (uint)(byte)(&REFG(undefined, 0x1116c49))[(int)(uVar1)] * 4) != 0) {
      uVar1 = uVar1 - 3;
      goto LAB_00c3e1db;
    }
    uVar1 = uVar1 - 4;
    if ((int)uVar1 < 3) {
      *(int *)(in_eax + 0x16a8) = *(int *)(in_eax + 0x16a8) + uVar1 * 3 + 0x11;
      return uVar1;
    }
  } while( true );
}

/* ref: FUN_00c3e1f0 */
GEN_FRAME uint F_00c3e1f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3e1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  if (0xd < iVar1) {
    *(ushort *)(param_1 + 0x16b8) =
         *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 - 0xd;
    *(ushort *)(param_1 + 0x16b8) = (ushort)param_4 >> (0x10U - (char)iVar1 & 0x1f);
    uVar2 = F_00c3bf50(param_1,param_2,param_3,1);
    return uVar2;
  }
  *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  *(ushort *)(param_1 + 0x16b8) =
       *(ushort *)(param_1 + 0x16b8) | (ushort)param_4 << ((byte)iVar1 & 0x1f);
  uVar2 = F_00c3bf50(param_1,param_2,param_3,1);
  return uVar2;
}

/* ref: FUN_00c3e2a0 */
GEN_FRAME uint F_00c3e2a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 0xe) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 3;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 - 0xd;
    *(ushort *)(param_1 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
  }
  iVar1 = *(int *)(param_1 + 0x16bc);
  *(ushort *)(param_1 + 0x16b8) = *(ushort *)(param_1 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
  if (iVar1 < 10) {
    *(int *)(param_1 + 0x16bc) = iVar1 + 7;
  }
  else {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14)))) =
         *(undefined1 *)(param_1 + 0x16b8);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 0x14) + *(int *)(param_1 + 8)))) =
         *(undefined1 *)(param_1 + 0x16b9);
    iVar1 = *(int *)(param_1 + 0x16bc);
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    *(int *)(param_1 + 0x16bc) = iVar1 - 9;
    *(ushort *)(param_1 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
  }
  uVar2 = F_00c3be70(param_1);
  iVar1 = *(int *)(uVar2 + 0x16bc);
  if ((*(int *)(uVar2 + 0x16b4) - iVar1) + 0xb < 9) {
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 2 << ((byte)iVar1 & 0x1f);
    if (iVar1 < 0xe) {
      *(int *)(uVar2 + 0x16bc) = iVar1 + 3;
    }
    else {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 - 0xd;
      *(ushort *)(uVar2 + 0x16b8) = 2 >> (0x10U - (char)iVar1 & 0x1f);
    }
    iVar1 = *(int *)(uVar2 + 0x16bc);
    *(ushort *)(uVar2 + 0x16b8) = *(ushort *)(uVar2 + 0x16b8) | 0 << ((byte)iVar1 & 0x1f);
    if (9 < iVar1) {
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 8) + *(int *)(uVar2 + 0x14)))) =
           *(undefined1 *)(uVar2 + 0x16b8);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *((undefined1 *)GEN_TOP((*(int *)(uVar2 + 0x14) + *(int *)(uVar2 + 8)))) =
           *(undefined1 *)(uVar2 + 0x16b9);
      iVar1 = *(int *)(uVar2 + 0x16bc);
      *(int *)(uVar2 + 0x14) = *(int *)(uVar2 + 0x14) + 1;
      *(int *)(uVar2 + 0x16bc) = iVar1 - 9;
      *(ushort *)(uVar2 + 0x16b8) = 0 >> (0x10U - (char)iVar1 & 0x1f);
      uVar2 = F_00c3be70(uVar2);
      *(undefined4 *)(uVar2 + 0x16b4) = 7;
      return uVar2;
    }
    *(int *)(uVar2 + 0x16bc) = iVar1 + 7;
    uVar2 = F_00c3be70(uVar2);
  }
  *(undefined4 *)(uVar2 + 0x16b4) = 7;
  return uVar2;
}

/* ref: FUN_00c3e4a0 */
GEN_FRAME uint F_00c3e4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc3e4a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint local_8;
  
  local_8 = 0;
  if (param_1[0x21] < 1) {
    uVar2 = param_3 + 5;
  }
  else {
    iVar1 = *param_1;
    if (*(int *)(iVar1 + 0x2c) == 2) {
      uVar2 = F_00c3bde0(param_1);
      *(uint *)(iVar1 + 0x2c) = uVar2;
    }
    F_00c3df20(param_1,param_1 + 0x2c6);
    F_00c3df20(param_1,param_1 + 0x2c9);
    local_8 = F_00c3e120(param_1);
    uVar4 = param_1[0x5aa] + 10U >> 3;
    uVar2 = param_1[0x5ab] + 10U >> 3;
    if (uVar4 < uVar2) goto LAB_00c3e515;
  }
  uVar4 = uVar2;
LAB_00c3e515: ;
  if ((uVar4 < param_3 + 4U) || (param_2 == 0)) {
    if ((param_1[0x22] == 4) || (uVar2 == uVar4)) {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 2;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 - 0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00c3b9d0(param_1,&REFG(undefined, 0x1116d30),&REFG(undefined, 0x11171b0));
    }
    else {
      iVar1 = param_1[0x5af];
      uVar3 = (short)param_4 + 4;
      if (iVar1 < 0xe) {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        param_1[0x5af] = iVar1 + 3;
      }
      else {
        *(ushort *)(param_1 + 0x5ae) = *(ushort *)(param_1 + 0x5ae) | uVar3 << ((byte)iVar1 & 0x1f);
        *(char *)(param_1[5] + param_1[2]) = (char)param_1[0x5ae];
        param_1[5] = param_1[5] + 1;
        *(undefined1 *)(param_1[5] + param_1[2]) = *(undefined1 *)((int)param_1 + 0x16b9);
        iVar1 = param_1[0x5af];
        param_1[5] = param_1[5] + 1;
        param_1[0x5af] = iVar1 - 0xd;
        *(ushort *)(param_1 + 0x5ae) = uVar3 >> (0x10U - (char)iVar1 & 0x1f);
      }
      F_00c3b6d0(param_1,param_1[0x2c7] + 1,param_1[0x2ca] + 1,local_8 + 1);
      F_00c3b9d0(param_1,param_1 + 0x25,param_1 + 0x262);
    }
  }
  else {
    F_00c3e1f0(param_1,param_2,param_3,param_4);
  }
  uVar2 = F_00c3ad10(param_1);
  if (param_4 != 0) {
    uVar2 = F_00c3bef0(param_1);
  }
  return uVar2;
}

/* ref: FUN_00c3e6a0 */
GEN_FRAME uint GEN_STDCALL F_00c3e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e6a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_esi;
  uint uVar1;
  
  if ((((param_1 != 0) && (in_esi = *(int *)(param_1 + 0x1c), in_esi != 0)) &&
      (*(int *)(param_1 + 0x20) != 0)) && (*(int *)(param_1 + 0x24) != 0)) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 2;
    *(undefined4 *)(in_esi + 0x10) = *(undefined4 *)(in_esi + 8);
    *(undefined4 *)(in_esi + 0x14) = 0;
    if (*(int *)(in_esi + 0x18) < 0) {
      *(int *)(in_esi + 0x18) = -*(int *)(in_esi + 0x18);
    }
    *(uint *)(in_esi + 4) = (-(uint)(*(int *)(in_esi + 0x18) != 0) & 0xffffffb9) + 0x71;
    if (*(int *)(in_esi + 0x18) == 2) {
      uVar1 = F_00c3de00(0,0,0);
    }
    else {
      uVar1 = F_00c3a9b0(0,0,0);
    }
    *(uint *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(in_esi + 0x28) = 0;
    F_00c3de30(in_esi);
    F_00c3c610(in_esi);
    return 0;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3e740 */
GEN_FRAME uint F_00c3e740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc3e740u, gen_a0, gen_a1, gen_a2, 0u);
  uint in_ecx = (uint)gen_a0;
  int * in_esi = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_esi[1];
  uVar2 = uVar1;
  if (in_ecx < uVar1) {
    uVar2 = in_ecx;
  }
  if (uVar2 == 0) {
    return 0;
  }
  in_esi[1] = uVar1 - uVar2;
  if (*(int *)(in_esi[7] + 0x18) == 1) {
    uVar1 = F_00c3a9b0(in_esi[0xc],*in_esi,uVar2);
  }
  else {
    if (*(int *)(in_esi[7] + 0x18) != 2) goto LAB_00c3e78b;
    uVar1 = F_00c3de00(in_esi[0xc],*in_esi,uVar2);
  }
  in_esi[0xc] = uVar1;
LAB_00c3e78b: ;
  F_00c46aa0(param_3,*in_esi,uVar2);
  *in_esi = *in_esi + uVar2;
  in_esi[2] = in_esi[2] + uVar2;
  return uVar2;
}

/* ref: FUN_00c3e7b0 */
GEN_NOFRAME uint F_00c3e7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc3e7b0u, gen_a0, 0u, 0u, 0u);
  uint * in_edi = (uint *)(uintptr_t)gen_a0;
  ushort * puVar1;
  undefined * pvVar2;
  short sVar3;
  uint uVar4;
  undefined * pvVar5;
  short * psVar6;
  uint uVar7;
  uint uVar8;
  int in_ecx;
  undefined * pvVar9;
  
  uVar7 = in_edi[0xb];
  while( true ) {
    in_ecx = (in_edi[0xf] - in_edi[0x1d]) - in_edi[0x1b];
    if ((uVar7 - 0x106) + in_edi[0xb] <= in_edi[0x1b]) {
      F_00c46aa0(in_edi[0xe],in_edi[0xe] + uVar7,uVar7);
      uVar8 = in_edi[0x13];
      in_edi[0x1c] = in_edi[0x1c] - uVar7;
      in_edi[0x1b] = in_edi[0x1b] - uVar7;
      in_edi[0x17] = in_edi[0x17] - uVar7;
      psVar6 = (short *)(in_edi[0x11] + uVar8 * 2);
      do {
        puVar1 = (ushort *)(psVar6 - 1);
        psVar6 = psVar6 - 1;
        if (*puVar1 < uVar7) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar7;
        }
        uVar8 = uVar8 - 1;
        *psVar6 = sVar3;
      } while (uVar8 != 0);
      psVar6 = (short *)(in_edi[0x10] + uVar7 * 2);
      uVar8 = uVar7;
      do {
        puVar1 = (ushort *)(psVar6 - 1);
        psVar6 = psVar6 - 1;
        if (*puVar1 < uVar7) {
          sVar3 = 0;
        }
        else {
          sVar3 = *puVar1 - (short)uVar7;
        }
        uVar8 = uVar8 - 1;
        *psVar6 = sVar3;
      } while (uVar8 != 0);
      in_ecx = in_ecx + uVar7;
    }
    uVar8 = *in_edi;
    if (*(int *)(uVar8 + 4) == 0) break;
    uVar8 = F_00c3e740(in_ecx,uVar8,in_edi[0x1d] + in_edi[0x1b] + in_edi[0xe]);
    in_edi[0x1d] = in_edi[0x1d] + uVar8;
    uVar8 = in_edi[0x1d];
    if (2 < uVar8) {
      uVar4 = (uint)*(byte *)(in_edi[0x1b] + in_edi[0xe]);
      in_edi[0x12] = uVar4;
      in_edi[0x12] = (uVar4 << ((byte)in_edi[0x16] & 0x1f) ^
                     (uint)((byte *)(in_edi[0x1b] + in_edi[0xe]))[1]) & in_edi[0x15];
    }
    if ((0x105 < uVar8) || (*(int *)(*in_edi + 4) == 0)) {
      pvVar5 = (undefined *)in_edi[0x5b0];
      pvVar2 = (undefined *)in_edi[0xf];
      if (pvVar5 < pvVar2) {
        pvVar9 = (undefined *)(in_edi[0x1b] + uVar8);
        if (pvVar5 < pvVar9) {
          uVar7 = (int)pvVar2 - (int)pvVar9;
          if (0x102 < uVar7) {
            uVar7 = 0x102;
          }
          pvVar5 = F_00c48350((undefined *)(in_edi[0xe] + (int)pvVar9),0,uVar7);
          in_edi[0x5b0] = uVar7 + (int)pvVar9;
          return (uint)pvVar5;
        }
        if (pvVar5 < (undefined *)((int)pvVar9 + 0x102U)) {
          uVar7 = (int)pvVar9 + (0x102 - (int)pvVar5);
          if ((uint)((int)pvVar2 - (int)pvVar5) < uVar7) {
            uVar7 = (int)pvVar2 - (int)pvVar5;
          }
          pvVar5 = F_00c48350((undefined *)(in_edi[0xe] + (int)pvVar5),0,uVar7);
          in_edi[0x5b0] = in_edi[0x5b0] + uVar7;
        }
      }
      return (uint)pvVar5;
    }
  }
  return uVar8;
}

/* ref: FUN_00c3e900 */
GEN_FRAME uint F_00c3e900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3e900u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = 0xffff;
  if (param_1[3] - 5U < 0xffff) {
    uVar5 = param_1[3] - 5U;
  }
  do {
    uVar3 = param_1[0x1d];
    if (uVar3 < 2) {
      F_00c3e7b0(param_1);
      uVar3 = param_1[0x1d];
      if (uVar3 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar4,param_1[0x1b] - iVar2,(uint)(param_2 == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)(param_2 == 4) * 2 + 1;
        }
        return (param_2 != 4) - 1 & 2;
      }
    }
    piVar1 = param_1 + 0x1b;
    *piVar1 = *piVar1 + uVar3;
    iVar2 = param_1[0x17];
    param_1[0x1d] = 0;
    uVar3 = iVar2 + uVar5;
    if ((*piVar1 == 0) || (uVar3 <= (uint)param_1[0x1b])) {
      param_1[0x1d] = param_1[0x1b] - uVar3;
      param_1[0x1b] = uVar3;
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar4,uVar3 - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
    iVar2 = param_1[0x17];
    if (param_1[0xb] - 0x106U <= (uint)(param_1[0x1b] - iVar2)) {
      if (iVar2 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar4,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3ea40 */
GEN_FRAME uint F_00c3ea40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ea40u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  bool bVar8;
  
  do {
    uVar4 = param_1[0x1d];
    if (uVar4 < 0x106) {
      F_00c3e7b0(param_1);
      uVar4 = param_1[0x1d];
      if ((uVar4 < 0x106) && ((*(int *)&gen_a1) == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar5,param_1[0x1b] - iVar2,(uint)((*(int *)&gen_a1) == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) == 0) {
          return ((*(int *)&gen_a1) != 4) - 1 & 2;
        }
        return (uint)((*(int *)&gen_a1) == 4) * 2 + 1;
      }
    }
    if (2 < uVar4) {
      uVar4 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar4;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar4 * 2);
      uVar4 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
      if ((uVar4 != 0) && (param_1[0x1b] - uVar4 <= param_1[0xb] - 0x106U)) {
        uVar4 = F_00c3c6a0(param_1,uVar4);
        param_1[0x18] = uVar4;
      }
    }
    if ((uint)param_1[0x18] < 3) {
      bVar3 = *(byte *)(param_1[0x1b] + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar3 + 0x25) = (short)param_1[bVar3 + 0x25] + 1;
      bVar8 = param_1[0x5a8] == param_1[0x5a7] - 1;
      param_1[0x1d] = param_1[0x1d] - 1;
LAB_00c3ec81: ;
      param_1[0x1b] = param_1[0x1b] + 1;
    }
    else {
      sVar6 = (short)param_1[0x1b] - (short)param_1[0x1c];
      iVar2 = param_1[0x18];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar6;
      bVar3 = (char)iVar2 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar3;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x1117428))[(int)(bVar3)] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x1117428))[(int)(bVar3)] + 0x126] + 1;
      uVar7 = sVar6 - 1;
      if (uVar7 < 0x100) {
        bVar3 = (&REFG(undefined, 0x1117228))[(int)(uVar7)];
      }
      else {
        bVar3 = (&REFG(undefined, 0x1117328))[(int)(uVar7 >> 7)];
      }
      *(short *)(param_1 + bVar3 + 0x262) = (short)param_1[bVar3 + 0x262] + 1;
      uVar4 = param_1[0x18];
      bVar8 = param_1[0x5a8] == param_1[0x5a7] - 1;
      param_1[0x1d] = param_1[0x1d] - uVar4;
      if ((uVar4 <= (uint)param_1[0x20]) && (2 < (uint)param_1[0x1d])) {
        param_1[0x18] = uVar4 - 1;
        do {
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar4 = ((uint)*(byte *)(param_1[0x1b] + 2U + param_1[0xe]) ^
                  param_1[0x12] << ((byte)param_1[0x16] & 0x1f)) & param_1[0x15];
          param_1[0x12] = uVar4;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar4 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
          piVar1 = param_1 + 0x18;
          *piVar1 = *piVar1 - 1;
        } while (*piVar1 != 0);
        goto LAB_00c3ec81;
      }
      param_1[0x1b] = param_1[0x1b] + uVar4;
      param_1[0x18] = 0;
      uVar4 = (uint)*(byte *)(param_1[0xe] + param_1[0x1b]);
      param_1[0x12] = uVar4;
      param_1[0x12] =
           (uVar4 << ((byte)param_1[0x16] & 0x1f) ^
           (uint)((byte *)(param_1[0xe] + param_1[0x1b]))[1]) & param_1[0x15];
    }
    if (bVar8) {
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar5,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      if (*(int *)(*param_1 + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3ed30 */
GEN_FRAME uint F_00c3ed30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3ed30u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  short sVar10;
  
LAB_00c3ed40: ;
  do {
    uVar7 = param_1[0x1d];
    if (uVar7 < 0x106) {
      F_00c3e7b0(param_1);
      uVar7 = param_1[0x1d];
      if ((uVar7 < 0x106) && ((*(int *)&gen_a1) == 0)) {
        return 0;
      }
      if (uVar7 == 0) {
        if (param_1[0x1a] != 0) {
          bVar5 = *(byte *)(param_1[0x1b] - 1 + param_1[0xe]);
          *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
          *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
          param_1[0x5a8] = param_1[0x5a8] + 1;
          *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
          param_1[0x1a] = 0;
        }
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,(uint)((*(int *)&gen_a1) == 4));
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
        if (*(int *)(*param_1 + 0x10) != 0) {
          return (uint)((*(int *)&gen_a1) == 4) * 2 + 1;
        }
        return ((*(int *)&gen_a1) != 4) - 1 & 2;
      }
    }
    uVar6 = 0;
    if (2 < uVar7) {
      uVar7 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
              (uint)*(byte *)(param_1[0xe] + 2 + param_1[0x1b])) & param_1[0x15];
      param_1[0x12] = uVar7;
      *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & param_1[0x1b]) * 2))) =
           *(undefined2 *)(param_1[0x11] + uVar7 * 2);
      uVar6 = (uint)*((ushort *)GEN_TOP((param_1[0x10] + (param_1[0x1b] & param_1[0xd]) * 2)));
      *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
    }
    uVar7 = param_1[0x18];
    param_1[0x1e] = uVar7;
    param_1[0x19] = param_1[0x1c];
    param_1[0x18] = 2;
    if (((uVar6 != 0) && (uVar7 < (uint)param_1[0x20])) &&
       (param_1[0x1b] - uVar6 <= param_1[0xb] - 0x106U)) {
      uVar7 = F_00c3c6a0(param_1,uVar6);
      param_1[0x18] = uVar7;
      if ((uVar7 < 6) &&
         ((param_1[0x22] == 1 || ((uVar7 == 3 && (0x1000 < (uint)(param_1[0x1b] - param_1[0x1c])))))
         )) {
        param_1[0x18] = 2;
      }
    }
    if (((uint)param_1[0x1e] < 3) || ((uint)param_1[0x1e] < (uint)param_1[0x18])) {
      if (param_1[0x1a] == 0) {
        param_1[0x1b] = param_1[0x1b] + 1;
        param_1[0x1d] = param_1[0x1d] - 1;
        param_1[0x1a] = 1;
        goto LAB_00c3ed40;
      }
      bVar5 = *(byte *)(param_1[0x1b] - 1 + param_1[0xe]);
      *(undefined2 *)(param_1[0x5a9] + param_1[0x5a8] * 2) = 0;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + bVar5 + 0x25) = (short)param_1[bVar5 + 0x25] + 1;
      if (param_1[0x5a8] == param_1[0x5a7] - 1) {
        iVar2 = param_1[0x17];
        if (iVar2 < 0) {
          iVar9 = 0;
        }
        else {
          iVar9 = param_1[0xe] + iVar2;
        }
        F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,0);
        param_1[0x17] = param_1[0x1b];
        F_00c3c340(*param_1);
      }
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1d] = param_1[0x1d] - 1;
      iVar2 = *(int *)(*param_1 + 0x10);
    }
    else {
      sVar10 = (short)param_1[0x1b] - (short)param_1[0x19];
      iVar2 = param_1[0x1b];
      iVar9 = param_1[0x1d];
      iVar4 = param_1[0x1e];
      *(short *)(param_1[0x5a9] + param_1[0x5a8] * 2) = sVar10 - 1;
      bVar5 = (char)iVar4 - 3;
      *(byte *)(param_1[0x5a6] + param_1[0x5a8]) = bVar5;
      param_1[0x5a8] = param_1[0x5a8] + 1;
      *(short *)(param_1 + (byte)(&REFG(undefined, 0x1117428))[(int)(bVar5)] + 0x126) =
           (short)param_1[(byte)(&REFG(undefined, 0x1117428))[(int)(bVar5)] + 0x126] + 1;
      uVar8 = sVar10 - 2;
      if (uVar8 < 0x100) {
        bVar5 = (&REFG(undefined, 0x1117228))[(int)(uVar8)];
      }
      else {
        bVar5 = (&REFG(undefined, 0x1117328))[(int)(uVar8 >> 7)];
      }
      *(short *)(param_1 + bVar5 + 0x262) = (short)param_1[bVar5 + 0x262] + 1;
      iVar4 = param_1[0x5a7];
      iVar3 = param_1[0x5a8];
      param_1[0x1d] = param_1[0x1d] + (1 - param_1[0x1e]);
      param_1[0x1e] = param_1[0x1e] - 2;
      do {
        param_1[0x1b] = param_1[0x1b] + 1;
        uVar7 = param_1[0x1b];
        if (uVar7 <= (uint)(iVar2 - 3 + iVar9)) {
          uVar6 = (param_1[0x12] << ((byte)param_1[0x16] & 0x1f) ^
                  (uint)*(byte *)(param_1[0xe] + 2 + uVar7)) & param_1[0x15];
          param_1[0x12] = uVar6;
          *((undefined2 *)GEN_TOP((param_1[0x10] + (param_1[0xd] & uVar7) * 2))) =
               *(undefined2 *)(param_1[0x11] + uVar6 * 2);
          *(short *)(param_1[0x11] + param_1[0x12] * 2) = (short)param_1[0x1b];
        }
        piVar1 = param_1 + 0x1e;
        *piVar1 = *piVar1 - 1;
      } while (*piVar1 != 0);
      param_1[0x1b] = param_1[0x1b] + 1;
      param_1[0x1a] = 0;
      param_1[0x18] = 2;
      if (iVar3 != iVar4 - 1) goto LAB_00c3ed40;
      iVar2 = param_1[0x17];
      if (iVar2 < 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = param_1[0xe] + iVar2;
      }
      F_00c3e4a0(param_1,iVar9,param_1[0x1b] - iVar2,0);
      param_1[0x17] = param_1[0x1b];
      F_00c3c340(*param_1);
      iVar2 = *(int *)(*param_1 + 0x10);
    }
    if (iVar2 == 0) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00c3f100 */
GEN_FRAME uint F_00c3f100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f100u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  char * pcVar5;
  char * pcVar6;
  int iVar7;
  char * pcVar8;
  bool bVar9;
  
  do {
    uVar4 = in_eax[0x1d];
    if (uVar4 < 0x102) {
      F_00c3e7b0(in_eax);
      uVar4 = in_eax[0x1d];
      if ((uVar4 < 0x102) && ((*(int *)&gen_a1) == 0)) {
        return 0;
      }
      if (uVar4 == 0) {
        iVar2 = in_eax[0x17];
        if (iVar2 < 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = in_eax[0xe] + iVar2;
        }
        F_00c3e4a0(in_eax,iVar7,in_eax[0x1b] - iVar2,(uint)((*(int *)&gen_a1) == 4));
        in_eax[0x17] = in_eax[0x1b];
        F_00c3c340(*in_eax);
        if (*(int *)(*in_eax + 0x10) != 0) {
          return (uint)((*(int *)&gen_a1) == 4) * 2 + 1;
        }
        return ((*(int *)&gen_a1) != 4) - 1 & 2;
      }
    }
    in_eax[0x18] = 0;
    if ((2 < uVar4) && (in_eax[0x1b] != 0)) {
      pcVar8 = (char *)(in_eax[0xe] + in_eax[0x1b]);
      cVar1 = pcVar8[-1];
      if ((cVar1 == *pcVar8) && ((cVar1 == pcVar8[1] && (cVar1 == pcVar8[2])))) {
        pcVar5 = pcVar8 + 2;
        do {
          pcVar6 = pcVar5 + 1;
          if (((((cVar1 != pcVar5[1]) || (pcVar6 = pcVar5 + 2, cVar1 != pcVar5[2])) ||
               (pcVar6 = pcVar5 + 3, cVar1 != pcVar5[3])) ||
              ((pcVar6 = pcVar5 + 4, cVar1 != pcVar5[4] || (pcVar6 = pcVar5 + 5, cVar1 != pcVar5[5])
               ))) || ((pcVar6 = pcVar5 + 6, cVar1 != pcVar5[6] ||
                       ((pcVar6 = pcVar5 + 7, cVar1 != pcVar5[7] ||
                        (pcVar6 = pcVar5 + 8, cVar1 != pcVar5[8])))))) break;
          pcVar5 = pcVar6;
        } while (pcVar6 < pcVar8 + 0x102);
        in_eax[0x18] = (int)(pcVar6 + (0x102 - (int)(pcVar8 + 0x102)));
        if ((char *)in_eax[0x1d] < pcVar6 + (0x102 - (int)(pcVar8 + 0x102))) {
          in_eax[0x18] = in_eax[0x1d];
        }
      }
    }
    if ((uint)in_eax[0x18] < 3) {
      bVar3 = *(byte *)(in_eax[0xe] + in_eax[0x1b]);
      *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 0;
      *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar3;
      in_eax[0x5a8] = in_eax[0x5a8] + 1;
      *(short *)(in_eax + bVar3 + 0x25) = (short)in_eax[bVar3 + 0x25] + 1;
      bVar9 = in_eax[0x5a8] == in_eax[0x5a7] - 1;
      in_eax[0x1d] = in_eax[0x1d] - 1;
      in_eax[0x1b] = in_eax[0x1b] + 1;
    }
    else {
      bVar3 = (char)in_eax[0x18] - 3;
      *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 1;
      *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar3;
      in_eax[0x5a8] = in_eax[0x5a8] + 1;
      *(short *)(in_eax + (byte)(&REFG(undefined, 0x1117428))[(int)(bVar3)] + 0x126) =
           (short)in_eax[(byte)(&REFG(undefined, 0x1117428))[(int)(bVar3)] + 0x126] + 1;
      *(short *)(in_eax + 0x262) = (short)in_eax[0x262] + 1;
      iVar2 = in_eax[0x18];
      bVar9 = in_eax[0x5a8] == in_eax[0x5a7] - 1;
      in_eax[0x18] = 0;
      in_eax[0x1d] = in_eax[0x1d] - iVar2;
      in_eax[0x1b] = in_eax[0x1b] + iVar2;
    }
    if (bVar9) {
      iVar2 = in_eax[0x17];
      if (iVar2 < 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = in_eax[0xe] + iVar2;
      }
      F_00c3e4a0(in_eax,iVar7,in_eax[0x1b] - iVar2,0);
      in_eax[0x17] = in_eax[0x1b];
      F_00c3c340(*in_eax);
      if (*(int *)(*in_eax + 0x10) == 0) {
        return 0;
      }
    }
  } while( true );
}

/* ref: FUN_00c3f370 */
GEN_FRAME uint F_00c3f370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f370u, gen_a0, gen_a1, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  while ((in_eax[0x1d] != 0 || (F_00c3e7b0(in_eax), in_eax[0x1d] != 0))) {
    in_eax[0x18] = 0;
    bVar1 = *(byte *)(in_eax[0x1b] + in_eax[0xe]);
    *(undefined2 *)(in_eax[0x5a9] + in_eax[0x5a8] * 2) = 0;
    *(byte *)(in_eax[0x5a6] + in_eax[0x5a8]) = bVar1;
    in_eax[0x5a8] = in_eax[0x5a8] + 1;
    *(short *)(in_eax + bVar1 + 0x25) = (short)in_eax[bVar1 + 0x25] + 1;
    in_eax[0x1b] = in_eax[0x1b] + 1;
    in_eax[0x1d] = in_eax[0x1d] - 1;
    if (in_eax[0x5a8] == in_eax[0x5a7] - 1) {
      iVar2 = in_eax[0x17];
      if (iVar2 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = in_eax[0xe] + iVar2;
      }
      F_00c3e4a0(in_eax,iVar3,in_eax[0x1b] - iVar2,0);
      in_eax[0x17] = in_eax[0x1b];
      F_00c3c340(*in_eax);
      if (*(int *)(*in_eax + 0x10) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar2 = in_eax[0x17];
  if (iVar2 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_eax[0xe] + iVar2;
  }
  F_00c3e4a0(in_eax,iVar3,in_eax[0x1b] - iVar2,(uint)(param_2 == 4));
  in_eax[0x17] = in_eax[0x1b];
  F_00c3c340(*in_eax);
  if (*(int *)(*in_eax + 0x10) != 0) {
    return (uint)(param_2 == 4) * 2 + 1;
  }
  return (param_2 != 4) - 1 & 2;
}

/* ref: FUN_00c3f4a0 */
GEN_NOFRAME uint F_00c3f4a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f4a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x14040];
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 * puVar4;
  int iVar5;
  ulonglong uVar6;
  
  (*(uint *)(gen_frame + 0x1402c)) = 0xc3f4c0;
  (*(uint *)(gen_frame + 0x1402c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x0);
  puVar4 = *(undefined8 * PTR32 *)(param_1 + 4);
  uVar1 = *puVar4;
  uVar2 = puVar4[1];
  uVar3 = *(undefined4 *)(param_2 + 0x60);
  (*(int *)(gen_frame + 0x10014)) = (int)((ulonglong)uVar2 >> 0x20);
  (*(int *)(gen_frame + 0x1001c)) = *(int *)(param_2 + 100);
  (*(int *)(gen_frame + 0x1001c)) = 0x4000;
  if ((*(int *)(gen_frame + 0x10014)) != 0) {
    (*(int *)(gen_frame + 0x10010)) = (int)uVar2;
    (*(int *)(gen_frame + 0x10008)) = (int)uVar1;
    if ((*(int *)(gen_frame + 0x10010)) == 32000) {
      F_00c46aa0(((undefined1 *)(gen_frame + 0x10020)),(*(int *)(gen_frame + 0x10008)) + (int)puVar4,(*(int *)(gen_frame + 0x10014)));
      iVar5 = (*(int *)(gen_frame + 0x10014));
    }
    else {
      F_00c3dd60(((undefined1 *)(gen_frame + 0x10020)),&(*(int *)(gen_frame + 0x1001c)),(*(int *)(gen_frame + 0x10008)) + (int)puVar4,(*(int *)(gen_frame + 0x10010)));
      iVar5 = (*(int *)(gen_frame + 0x1001c));
    }
    uVar6 = F_00c46aa0(uVar3,((undefined1 *)(gen_frame + 0x10020)),iVar5);
    puVar4 = (undefined8 *)uVar6;
  }
  F_00c47745((*(uint *)(gen_frame + 0x1402c)) ^ (uint)(uint)(gen_frame + 0x0) GEN_EDX_ARG);
  return (uint)puVar4;
}

/* ref: FUN_00c3f590 */
GEN_FRAME uint GEN_STDCALL F_00c3f590(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc3f590u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_4 = (int)gen_a3;
  int param_5 = (int)gen_a4;
  char * param_7 = (char *)(uintptr_t)gen_a6;
  int param_8 = (int)gen_a7;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int local_8;
  
  local_8 = 1;
  if (((param_7 == (char *)0x0) || (*param_7 != '1')) || (param_8 != 0x38)) {
    return 0xfffffffa;
  }
  if (param_1 == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    *(gen_code32 *)(param_1 + 0x20) = ((code *)REFP(0xc3c020));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(gen_code32 *)(param_1 + 0x24) = ((code *)REFP(0xc3c040));
  }
  if (param_2 == 0xffffffff) {
    param_2 = 6;
  }
  if (param_4 < 0) {
    local_8 = 0;
    param_4 = -param_4;
  }
  else if (0xf < param_4) {
    local_8 = 2;
    param_4 = param_4 - 0x10;
  }
  if (((param_5 - 1U < 9) && ((*(int *)&gen_a2) == 8)) &&
     ((param_4 - 8U < 8 && ((param_2 < 10 && ((*(uint *)&gen_a5) < 5)))))) {
    if (param_4 == 8) {
      param_4 = 9;
    }
    piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x28),1,0x16c4)));
    if (piVar1 != (int *)0x0) {
      *(int * PTR32 *)(param_1 + 0x1c) = piVar1;
      piVar1[6] = local_8;
      piVar1[0xc] = param_4;
      iVar6 = 1 << ((byte)param_4 & 0x1f);
      iVar2 = 1 << ((byte)(param_5 + 7) & 0x1f);
      piVar1[0x14] = param_5 + 7;
      piVar1[0xd] = iVar6 - 1;
      piVar1[0x13] = iVar2;
      piVar1[0x15] = iVar2 - 1;
      *piVar1 = param_1;
      piVar1[7] = 0;
      piVar1[0xb] = iVar6;
      piVar1[0x16] = (param_5 + 9U) / 3;
      uVar12 = *(undefined4 *)(param_1 + 0x28);
      uVar13 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar12,iVar6,2);
      iVar2 = piVar1[0xb];
      piVar1[0xe] = uVar3;
      uVar10 = *(undefined4 *)(param_1 + 0x28);
      uVar11 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar10,iVar2,2);
      iVar8 = piVar1[0x13];
      piVar1[0x10] = uVar3;
      uVar7 = *(undefined4 *)(param_1 + 0x28);
      uVar9 = 2;
      uVar3 = ((code *)*(gen_code32 *)(param_1 + 0x20))(uVar7,iVar8,2);
      piVar1[0x11] = uVar3;
      iVar4 = 1 << ((char)param_5 + 6U & 0x1f);
      piVar1[0x5b0] = 0;
      piVar1[0x5a7] = iVar4;
      uVar5 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                        (*(undefined4 *)(param_1 + 0x28),iVar4,4,uVar7,iVar8,uVar9,uVar10,iVar2,
                         uVar11,uVar12,iVar6,uVar13);
      uVar3 = piVar1[0x5a7];
      piVar1[2] = uVar5;
      piVar1[3] = uVar3 * 4;
      if ((((piVar1[0xe] != 0) && (piVar1[0x10] != 0)) && (piVar1[0x11] != 0)) && (uVar5 != 0)) {
        piVar1[0x5a9] = uVar5 + (uVar3 & 0xfffffffe);
        piVar1[0x5a6] = uVar5 + uVar3 * 3;
        piVar1[0x21] = param_2;
        piVar1[0x22] = (*(uint *)&gen_a5);
        *(undefined1 *)(piVar1 + 9) = 8;
        uVar3 = F_00c3e6a0(param_1);
        return uVar3;
      }
      piVar1[1] = 0x29a;
      *(char * PTR32 *)(param_1 + 0x18) = "insufficient memory";
      F_00c3c390(param_1);
    }
    return 0xfffffffc;
  }
  return 0xfffffffe;
}

/* ref: FUN_00c3f7d0 */
GEN_FRAME uint GEN_STDCALL F_00c3f7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc3f7d0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * in_eax;
  int iVar2;
  int * piVar3;
  bool bVar4;
  int * in_eax_00;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  in_eax_00 = param_1;
  if (((param_1 == (int *)0x0) || (in_eax = (undefined4 *)param_1[7], in_eax == (undefined4 *)0x0))
     || (5 < (*(uint *)&gen_a1))) {
    return 0xfffffffe;
  }
  if (((param_1[3] == 0) || ((*param_1 == 0 && (param_1[1] != 0)))) ||
     ((in_eax[1] == 0x29a && ((*(uint *)&gen_a1) != 4)))) {
    param_1[6] = (int)"stream error";
    return 0xfffffffe;
  }
  if (param_1[4] == 0) {
    param_1[6] = (int)"buffer error";
    return 0xfffffffb;
  }
  iVar2 = in_eax[10];
  *in_eax = param_1;
  in_eax[10] = (*(uint *)&gen_a1);
  if (in_eax[1] == 0x2a) {
    if (in_eax[6] == 2) {
      uVar6 = F_00c3de00(0,0,0);
      param_1[0xc] = uVar6;
      *(undefined1 *)(in_eax[2] + in_eax[5]) = 0x1f;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 0x8b;
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = 8;
      in_eax[5] = in_eax[5] + 1;
      piVar3 = (int *)in_eax[7];
      if (piVar3 == (int *)0x0) {
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0;
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = 0xb;
        in_eax[5] = in_eax[5] + 1;
        in_eax[1] = 0x71;
      }
      else {
        *(byte *)(in_eax[5] + in_eax[2]) =
             (-(piVar3[9] != 0) & 0x10U) + (-(piVar3[0xb] != 0) & 2U) + (-(piVar3[7] != 0) & 8U) +
             (-(piVar3[4] != 0) & 4U) + (*piVar3 != 0);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 4);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 5);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 6);
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 7);
        in_eax[5] = in_eax[5] + 1;
        if (in_eax[0x21] == 9) {
          uVar5 = 2;
        }
        else if (((int)in_eax[0x22] < 2) && (1 < (int)in_eax[0x21])) {
          uVar5 = 0;
        }
        else {
          uVar5 = 4;
        }
        *(undefined1 *)(in_eax[5] + in_eax[2]) = uVar5;
        in_eax[5] = in_eax[5] + 1;
        *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0xc);
        in_eax[5] = in_eax[5] + 1;
        iVar7 = in_eax[5];
        if (*(int *)(in_eax[7] + 0x10) != 0) {
          *(undefined1 *)(iVar7 + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x14);
          in_eax[5] = in_eax[5] + 1;
          *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)(in_eax[7] + 0x15);
          in_eax[5] = in_eax[5] + 1;
          iVar7 = in_eax[5];
        }
        if (*(int *)(in_eax[7] + 0x2c) != 0) {
          uVar6 = F_00c3de00(param_1[0xc],in_eax[2],iVar7);
          param_1[0xc] = uVar6;
        }
        in_eax[8] = 0;
        in_eax[1] = 0x45;
      }
    }
    else {
      if (((int)in_eax[0x22] < 2) && (iVar7 = in_eax[0x21], 1 < iVar7)) {
        if (iVar7 < 6) {
          iVar7 = 1;
        }
        else {
          iVar7 = (iVar7 != 6) + 2;
        }
      }
      else {
        iVar7 = 0;
      }
      uVar6 = (in_eax[0xc] - 8) * 0x1000 + 0x800U | iVar7 << 6;
      if (in_eax[0x1b] != 0) {
        uVar6 = uVar6 | 0x20;
      }
      in_eax[1] = 0x71;
      uVar6 = F_00c3c310(in_eax,(uVar6 / 0x1f + 1) * 0x1f);
      if (in_eax[0x1b] != 0) {
        uVar6 = F_00c3c310(uVar6,(uint)*(ushort *)((int)param_1 + 0x32));
        F_00c3c310(uVar6,(uint)*(ushort *)(param_1 + 0xc));
      }
      uVar6 = F_00c3a9b0(0,0,0);
      param_1[0xc] = uVar6;
    }
  }
  if (in_eax[1] == 0x45) {
    if (*(int *)(in_eax[7] + 0x10) != 0) {
      uVar6 = in_eax[5];
      param_1 = (int *)uVar6;
      if ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14)) {
        do {
          uVar6 = in_eax[5];
          if (uVar6 == in_eax[3]) {
            if ((*(int *)(in_eax[7] + 0x2c) != 0) && (param_1 < uVar6)) {
              uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + (int)param_1,uVar6 - (int)param_1);
              in_eax_00[0xc] = uVar6;
            }
            F_00c3c340(in_eax_00);
            uVar6 = in_eax[5];
            param_1 = (int *)uVar6;
            if (uVar6 == in_eax[3]) break;
          }
          *(undefined1 *)(uVar6 + in_eax[2]) =
               *((undefined1 *)GEN_TOP((*(int *)(in_eax[7] + 0x10) + in_eax[8])));
          in_eax[5] = in_eax[5] + 1;
          in_eax[8] = in_eax[8] + 1;
          uVar6 = (uint)param_1;
        } while ((uint)in_eax[8] < (uint)*(ushort *)(in_eax[7] + 0x14));
      }
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,in_eax[5] - uVar6);
        in_eax_00[0xc] = uVar6;
      }
      if (in_eax[8] != *(int *)(in_eax[7] + 0x14)) goto LAB_00c3fbc8;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x49;
  }
LAB_00c3fbc8: ;
  if (in_eax[1] == 0x49) {
    if (*(int *)(in_eax[7] + 0x1c) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_00c3c340(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_00c3fc42;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x1c) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_00c3fc42: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_00c3fc75;
      in_eax[8] = 0;
    }
    in_eax[1] = 0x5b;
  }
LAB_00c3fc75: ;
  if (in_eax[1] == 0x5b) {
    if (*(int *)(in_eax[7] + 0x24) != 0) {
      uVar6 = in_eax[5];
      do {
        uVar8 = in_eax[5];
        if (uVar8 == in_eax[3]) {
          if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar6 < uVar8)) {
            uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar6,uVar8 - uVar6);
            in_eax_00[0xc] = uVar6;
          }
          F_00c3c340(in_eax_00);
          uVar8 = in_eax[5];
          uVar6 = uVar8;
          if (uVar8 == in_eax[3]) {
            bVar4 = true;
            goto LAB_00c3fcf0;
          }
        }
        cVar1 = *((char *)GEN_TOP((*(int *)(in_eax[7] + 0x24) + in_eax[8])));
        in_eax[8] = in_eax[8] + 1;
        *(char *)(uVar8 + in_eax[2]) = cVar1;
        in_eax[5] = in_eax[5] + 1;
      } while (cVar1 != '\0');
      bVar4 = false;
      uVar8 = uVar6;
LAB_00c3fcf0: ;
      if ((*(int *)(in_eax[7] + 0x2c) != 0) && (uVar8 < (uint)in_eax[5])) {
        uVar6 = F_00c3de00(in_eax_00[0xc],in_eax[2] + uVar8,in_eax[5] - uVar8);
        in_eax_00[0xc] = uVar6;
      }
      if (bVar4) goto LAB_00c3fd20;
    }
    in_eax[1] = 0x67;
  }
LAB_00c3fd20: ;
  if (in_eax[1] == 0x67) {
    if (*(int *)(in_eax[7] + 0x2c) != 0) {
      if ((uint)in_eax[3] < in_eax[5] + 2) {
        F_00c3c340(in_eax_00);
      }
      if ((uint)in_eax[3] < in_eax[5] + 2) goto LAB_00c3fd81;
      *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[0xc];
      in_eax[5] = in_eax[5] + 1;
      *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
      in_eax[5] = in_eax[5] + 1;
      uVar6 = F_00c3de00(0,0,0);
      in_eax_00[0xc] = uVar6;
    }
    in_eax[1] = 0x71;
  }
LAB_00c3fd81: ;
  if (in_eax[5] == 0) {
    if (((in_eax_00[1] == 0) && ((int)(*(uint *)&gen_a1) <= iVar2)) && ((*(uint *)&gen_a1) != 4)) {
      in_eax_00[6] = (int)"buffer error";
      return 0xfffffffb;
    }
  }
  else {
    F_00c3c340(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
  if (in_eax[1] == 0x29a) {
    if (in_eax_00[1] != 0) {
      in_eax_00[6] = (int)"buffer error";
      return 0xfffffffb;
    }
LAB_00c3fdfc: ;
    if ((in_eax[0x1d] == 0) && (((*(uint *)&gen_a1) == 0 || (in_eax[1] == 0x29a)))) goto LAB_00c3ff03;
  }
  else if (in_eax_00[1] == 0) goto LAB_00c3fdfc;
  if (in_eax[0x22] == 2) {
    uVar6 = F_00c3f370(in_eax,(*(uint *)&gen_a1));
  }
  else if (in_eax[0x22] == 3) {
    uVar6 = F_00c3f100(in_eax,(*(uint *)&gen_a1));
  }
  else {
    uVar6 = (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x11176c0))[in_eax[0x21] * 3])))(in_eax,(*(uint *)&gen_a1));
  }
  if ((uVar6 == 2) || (uVar6 == 3)) {
    in_eax[1] = 0x29a;
  }
  if ((uVar6 == 0) || (uVar6 == 2)) {
    if (in_eax_00[4] != 0) {
      return 0;
    }
    in_eax[10] = 0xffffffff;
    return 0;
  }
  if (uVar6 == 1) {
    if ((*(uint *)&gen_a1) == 1) {
      F_00c3e2a0(in_eax);
    }
    else if (((*(uint *)&gen_a1) != 5) && (F_00c3e1f0(in_eax,0,0,0), (*(uint *)&gen_a1) == 3)) {
      *(undefined2 *)(in_eax[0x11] - 2 + in_eax[0x13] * 2) = 0;
      F_00c48350((undefined *)in_eax[0x11],0,in_eax[0x13] * 2 - 2);
      if (in_eax[0x1d] == 0) {
        in_eax[0x1b] = 0;
        in_eax[0x17] = 0;
      }
    }
    F_00c3c340(in_eax_00);
    if (in_eax_00[4] == 0) {
      in_eax[10] = 0xffffffff;
      return 0;
    }
  }
LAB_00c3ff03: ;
  if ((*(uint *)&gen_a1) != 4) {
    return 0;
  }
  if ((int)in_eax[6] < 1) {
    return 1;
  }
  if (in_eax[6] == 2) {
    *(char *)(in_eax[2] + in_eax[5]) = (char)in_eax_00[0xc];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x31);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x32);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0x33);
    in_eax[5] = in_eax[5] + 1;
    *(char *)(in_eax[5] + in_eax[2]) = (char)in_eax_00[2];
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 9);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 10);
    in_eax[5] = in_eax[5] + 1;
    *(undefined1 *)(in_eax[5] + in_eax[2]) = *(undefined1 *)((int)in_eax_00 + 0xb);
    in_eax[5] = in_eax[5] + 1;
  }
  else {
    uVar6 = F_00c3c310(in_eax,(uint)*(ushort *)((int)in_eax_00 + 0x32));
    F_00c3c310(uVar6,(uint)*(ushort *)(in_eax_00 + 0xc));
  }
  F_00c3c340(in_eax_00);
  if (0 < (int)in_eax[6]) {
    in_eax[6] = -in_eax[6];
  }
  return (uint)(in_eax[5] == 0);
}

/* ref: FUN_00c40020 */
GEN_FRAME uint F_00c40020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc40020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  byte * param_5 = (byte *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte * pbVar1;
  uint uVar2;
  uint uVar3;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_2;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_1;
  pbVar1 = param_5;
  pbVar1[0] = 0;
  pbVar1[1] = 0;
  pbVar1[2] = 0;
  pbVar1[3] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = param_4;
  uVar2 = F_00c3f590(((byte *)(gen_frame + 0x4)),param_6,8,0xfffffff1,8,0,"1.2.5",0x38);
  if (uVar2 == 0) {
    uVar3 = F_00c3f7d0(((byte *)(gen_frame + 0x4)),4);
    if (uVar3 == 1) {
      *(undefined4 *)param_5 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
      uVar2 = 1;
    }
    else {
      F_00c3c390(((byte *)(gen_frame + 0x4)));
      uVar2 = 0xfffffffb;
      if (uVar3 != 0) {
        return uVar3;
      }
    }
  }
  return uVar2;
}

/* ref: FUN_00c400b0 */
GEN_FRAME uint F_00c400b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc400b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  uint uVar2;
  
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 4)) = param_4;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 12)) = param_1;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 0)) = param_3;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 16)) = *(undefined4 *)param_2;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  uVar1 = F_00c3f590(((byte *)(gen_frame + 0x4)),param_5,8,0xfffffff1,8,0,"1.2.5",0x38);
  if (uVar1 == 0) {
    uVar2 = F_00c3f7d0(((byte *)(gen_frame + 0x4)),4);
    if (uVar2 == 1) {
      *(undefined4 *)param_2 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x4)) + 20));
      uVar1 = F_00c3c390(((byte *)(gen_frame + 0x4)));
    }
    else {
      F_00c3c390(((byte *)(gen_frame + 0x4)));
      uVar1 = 0xfffffffb;
      if (uVar2 != 0) {
        return uVar2;
      }
    }
  }
  return uVar1;
}

/* ref: FUN_00c40150 */
GEN_FRAME uint F_00c40150(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40150u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c400b0(param_1,param_2,param_3,param_4,9);
  return uVar1;
}

/* ref: FUN_00c40170 */
GEN_FRAME uint GEN_STDCALL F_00c40170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c3f590(param_1,param_2,8,0xf,8,0,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c401a0 */
GEN_FRAME uint GEN_STDCALL F_00c401a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc401a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  uint local_8;
  
  local_8 = 0;
  if ((param_1 == 0) || (iVar1 = *(int *)(param_1 + 0x1c), iVar1 == 0)) {
    return 0xfffffffe;
  }
  if (param_2 == -1) {
    iVar3 = 6;
  }
  else {
    if (param_2 < 0) {
      return 0xfffffffe;
    }
    iVar3 = param_2;
    if (9 < param_2) {
      return 0xfffffffe;
    }
  }
  if (4 < param_3) {
    return 0xfffffffe;
  }
  if (((param_3 != *(uint *)(iVar1 + 0x88)) ||
      ((*(undefined * PTR32 (*)[1])REFP(0x11176c0))[*(int *)(iVar1 + 0x84) * 3] != (*(undefined * PTR32 (*)[1])REFP(0x11176c0))[iVar3 * 3])) &&
     (*(int *)(param_1 + 8) != 0)) {
    local_8 = F_00c3f7d0(param_1,5);
  }
  if (*(int *)(iVar1 + 0x84) != iVar3) {
    *(int *)(iVar1 + 0x84) = iVar3;
    iVar2 = iVar3 * 0xc;
    *(uint *)(iVar1 + 0x80) = (uint)*(ushort *)(&REFG(undefined, 0x11176ba) + iVar3 * 0xc);
    *(uint *)(iVar1 + 0x8c) = (uint)*(ushort *)(&REFG(undefined, 0x11176b8) + iVar2);
    *(uint *)(iVar1 + 0x90) = (uint)*(ushort *)(&REFG(undefined, 0x11176bc) + iVar2);
    *(uint *)(iVar1 + 0x7c) = (uint)*(ushort *)(&REFG(undefined, 0x11176be) + iVar2);
  }
  *(uint *)(iVar1 + 0x88) = param_3;
  return local_8;
}

/* ref: FUN_00c402a0 */
GEN_FRAME uint F_00c402a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc402a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined8 * puVar1;
  int * piVar2;
  
  puVar1 = *(undefined8 * PTR32 *)(param_2 + 0x60);
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  (*(undefined4 *)((char *)&REFG(undefined8, 0x14c9cc0) + 0)) = piVar2[1] + *piVar2;
  *puVar1 = CONCAT44((*(undefined4 *)((char *)&REFG(undefined8, 0x14c9cc0) + 4)),(int)REFG(undefined8, 0x14c9cc0));
  puVar1[1] = REFG(undefined8, 0x14c9cc8);
  return (uint)piVar2;
}

/* ref: FUN_00c40300 */
GEN_FRAME uint F_00c40300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40300u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * in_edx = (float *)(uintptr_t)gen_a1;
  float * in_esi = (float *)(uintptr_t)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float * pfVar9;
  float fVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  fVar1 = in_esi[1];
  pfVar9 = (float *)*param_4;
  fVar2 = *in_esi;
  fVar3 = in_esi[2];
  fVar4 = in_edx[2];
  fVar5 = *in_edx;
  fVar16 = in_edx[1];
  fVar15 = ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar16 + (double)fVar5 * (double)*pfVar9) +
                   (double)pfVar9[8] * (double)fVar4) + (double)pfVar9[0xc])));
  fVar6 = in_ecx[2];
  fVar7 = *in_ecx;
  fVar11 = ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar5 + (double)pfVar9[6] * (double)fVar16) +
                   (double)pfVar9[10] * (double)fVar4) + (double)pfVar9[0xe])));
  fVar8 = in_ecx[1];
  fVar16 = ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar5 + (double)pfVar9[5] * (double)fVar16) +
                   (double)pfVar9[9] * (double)fVar4) + (double)pfVar9[0xd])));
  fVar5 = fVar15 - ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar1 + (double)fVar2 * (double)*pfVar9) +
                           (double)pfVar9[8] * (double)fVar3) + (double)pfVar9[0xc])));
  fVar4 = ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar7 + (double)pfVar9[5] * (double)fVar8) +
                  (double)pfVar9[9] * (double)fVar6) + (double)pfVar9[0xd]))) - fVar16;
  fVar16 = fVar16 - ((float)GEN_TOF(((((double)pfVar9[1] * (double)fVar2 + (double)pfVar9[5] * (double)fVar1)
                            + (double)pfVar9[9] * (double)fVar3) + (double)pfVar9[0xd])));
  fVar10 = ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar7 + (double)pfVar9[6] * (double)fVar8) +
                   (double)pfVar9[10] * (double)fVar6) + (double)pfVar9[0xe]))) - fVar11;
  fVar11 = fVar11 - ((float)GEN_TOF(((((double)pfVar9[2] * (double)fVar2 + (double)pfVar9[6] * (double)fVar1)
                            + (double)pfVar9[10] * (double)fVar3) + (double)pfVar9[0xe])));
  fVar15 = ((float)GEN_TOF(((((double)pfVar9[4] * (double)fVar8 + (double)fVar7 * (double)*pfVar9) +
                   (double)pfVar9[8] * (double)fVar6) + (double)pfVar9[0xc]))) - fVar15;
  dVar12 = (double)(float)((double)fVar10 * (double)fVar16 - (double)fVar4 * (double)fVar11);
  dVar13 = (double)(float)((double)fVar11 * (double)fVar15 - (double)fVar10 * (double)fVar5);
  dVar14 = (double)(float)((double)fVar4 * (double)fVar5 - (double)fVar16 * (double)fVar15);
  if (0.0 < ((float)GEN_TOF((REFG(double, 0x1088130) /
                   ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar13 * dVar13 + dVar12 * dVar12) + dVar14 * dVar14)))))))))) {
    return (uint)pfVar9;
  }
  if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
    REFG(float, 0x1379700) = 0;
    REFG(float, 0x1379704) = REFG(float, 0x1087f04);
    REFG(float, 0x1379708) = 0;
  }
  return 1;
}

/* ref: FUN_00c40760 */
GEN_FRAME uint F_00c40760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40760u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  ulonglong uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 8);
  F_00554700(param_2 GEN_EDX_ARG,*(undefined4 *)(param_1 + 4),uVar1);
  uVar2 = F_00c46aa0(*(undefined4 *)((int)param_2 + 0x88),uVar1,0x60);
  return (uint)uVar2;
}

/* ref: FUN_00c40790 */
GEN_NOFRAME unsigned int F_00c40790(void)
{
  GEN_ENTER(0xc40790u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407a0 */
GEN_NOFRAME unsigned int F_00c407a0(void)
{
  GEN_ENTER(0xc407a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407b0 */
GEN_NOFRAME unsigned int F_00c407b0(void)
{
  GEN_ENTER(0xc407b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407c0 */
GEN_NOFRAME unsigned int F_00c407c0(void)
{
  GEN_ENTER(0xc407c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407d0 */
GEN_NOFRAME unsigned int F_00c407d0(void)
{
  GEN_ENTER(0xc407d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407e0 */
GEN_NOFRAME unsigned int F_00c407e0(void)
{
  GEN_ENTER(0xc407e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c407f0 */
GEN_NOFRAME unsigned int F_00c407f0(void)
{
  GEN_ENTER(0xc407f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c40800 */
GEN_NOFRAME unsigned int F_00c40800(void)
{
  GEN_ENTER(0xc40800u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00c40810 */
GEN_FRAME uint F_00c40810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_2,param_1,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c40830 */
GEN_FRAME uint F_00c40830(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40830u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_4);
  return (uint)uVar1;
}

/* ref: FUN_00c40890 */
GEN_FRAME uint GEN_THISCALL F_00c40890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc40890u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x10 + param_2 * 4);
}

/* ref: FUN_00c408b0 */
GEN_FRAME uint GEN_THISCALL F_00c408b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc408b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 4) * 0x20 + in_ecx;
}

/* ref: FUN_00c40910 */
GEN_FRAME uint GEN_THISCALL F_00c40910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc40910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c40930 */
GEN_FRAME uint F_00c40930(unsigned int gen_a0)
{
  GEN_ENTER(0xc40930u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14e9d80))[(int)(param_1)];
}

/* ref: FUN_00c40940 */
GEN_FRAME byte GEN_THISCALL F_00c40940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc40940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(uint *)((int)this + 0x18) <= (*(uint *)&gen_a1)) &&
     ((*(uint *)&gen_a1) < *(int *)((int)this + 0x10) + *(uint *)((int)this + 0x18))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c409a0 */
GEN_FRAME uint GEN_THISCALL F_00c409a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc409a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x10),param_1 & 0xff,*(gen_size32 *)((int)this + 8));
  return (uint)pvVar1;
}

/* ref: FUN_00c409f0 */
GEN_NOFRAME uint F_00c409f0(void)
{
  GEN_ENTER(0xc409f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c40a00 */
GEN_FRAME uint F_00c40a00(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (param_1 < 3) {
    (&REFG(undefined4, 0x14e9d80))[(int)(param_1)] = 0;
  }
  return param_1;
}

/* ref: FUN_00c40a20 */
GEN_FRAME uint GEN_STDCALL F_00c40a20(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 - 8);
}

/* ref: FUN_00c40a40 */
GEN_FRAME float10 F_00c40a40(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xc40a40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return (float10)((float)GEN_TOF(((float10)param_1 +
                         (float10)param_3 * ((float10)param_2 - (float10)param_1))));
}

/* ref: FUN_00c40a60 */
GEN_FRAME uint F_00c40a60(unsigned int gen_a0)
{
  GEN_ENTER(0xc40a60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00c40a80 */
GEN_FRAME uint F_00c40a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40a80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0x40;
  uVar1 = param_1;
  if (param_2 != 0) {
    iVar2 = 0x20;
    uVar1 = param_2;
  }
  if (uVar1 >> 0x10 != 0) {
    iVar2 = iVar2 - 0x10;
    uVar1 = uVar1 >> 0x10;
  }
  if (uVar1 >> 8 != 0) {
    iVar2 = iVar2 - 8;
    uVar1 = uVar1 >> 8;
  }
  if (uVar1 >> 4 != 0) {
    iVar2 = iVar2 - 4;
    uVar1 = uVar1 >> 4;
  }
  if (uVar1 >> 2 != 0) {
    iVar2 = iVar2 - 2;
    uVar1 = uVar1 >> 2;
  }
  if ((uVar1 & 0xfffffffe) == 0) {
    return (uVar1 - iVar2) + 0x3f;
  }
  return 0x41 - iVar2;
}

/* ref: FUN_00c40b20 */
GEN_FRAME uint F_00c40b20(float gen_a0)
{
  GEN_ENTER(0xc40b20u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (GEN_ISNAN(param_1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40b40 */
GEN_FRAME byte F_00c40b40(float gen_a0)
{
  GEN_ENTER(0xc40b40u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  if (REFG(double, 0x10909a0) < (double)param_1) {
    return 1;
  }
  return (!GEN_ISNAN(REFG(double, 0x10909a8)) && !GEN_ISNAN((double)param_1)) && !(REFG(double, 0x10909a8) <= (double)param_1);
}

/* ref: FUN_00c40b80 */
GEN_FRAME uint F_00c40b80(float gen_a0)
{
  GEN_ENTER(0xc40b80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_00c40b40(param_1);
  uVar2 = F_00c40b20(param_1);
  return uVar2 | bVar1;
}

/* ref: FUN_00c40bb0 */
GEN_FRAME uint F_00c40bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xc40bb0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  return (uint)(((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00c40bd0 */
GEN_FRAME uint F_00c40bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40bd0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  if (((*(uint *)&gen_args[0]) - 1 & (*(uint *)&gen_args[0])) == 0 && (((*(uint *)&gen_args[1]) - 1) + (uint)((*(uint *)&gen_args[0]) != 0) & (*(uint *)&gen_args[1])) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40c00 */
GEN_FRAME uint F_00c40c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40c00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (uint)(param_1 % param_2 == 0);
}

/* ref: FUN_00c40c20 */
GEN_FRAME uint F_00c40c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40c20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (CONCAT44(param_2,param_1) % CONCAT44(param_4,param_3) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40c50 */
GEN_FRAME uint F_00c40c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40c50u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return (uint)(((*(int *)&gen_args[1]) - 1U & (*(uint *)&gen_args[0])) == 0);
}

/* ref: FUN_00c40c70 */
GEN_FRAME uint F_00c40c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  if (((*(int *)&gen_args[2]) - 1U & (*(uint *)&gen_args[0])) == 0 && ((*(int *)&gen_args[3]) - 1 + (uint)((*(int *)&gen_args[2]) != 0) & (*(uint *)&gen_args[1])) == 0) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c40ca0 */
GEN_FRAME uint F_00c40ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40ca0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  return (param_1 / param_2) * param_2;
}

/* ref: FUN_00c40cc0 */
GEN_FRAME uint F_00c40cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40cc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(param_2,param_1);
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 0)) = (int)((*(ulonglong *)(gen_frame + 0x4)) / CONCAT44(param_4,param_3));
  return (int)(*(ulonglong *)(gen_frame + 0x4)) * param_3;
}

/* ref: FUN_00c40cf0 */
GEN_FRAME uint F_00c40cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40cf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  return ~((*(int *)&gen_args[1]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c40d00 */
GEN_FRAME uint F_00c40d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  return ~((*(int *)&gen_args[2]) - 1U) & (*(uint *)&gen_args[0]);
}

/* ref: FUN_00c40d20 */
GEN_FRAME uint F_00c40d20(unsigned int gen_a0)
{
  GEN_ENTER(0xc40d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 | param_1 >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  uVar1 = uVar1 | uVar1 >> 0x10;
  return uVar1 - (uVar1 >> 1);
}

/* ref: FUN_00c40d50 */
GEN_FRAME uint F_00c40d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40d50u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2 | param_2 >> 1;
  uVar1 = param_1 | param_1 >> 1 | param_2 << 0x1f;
  uVar3 = uVar2 | uVar2 >> 2;
  uVar1 = uVar1 | uVar1 >> 2 | uVar2 << 0x1e;
  uVar2 = uVar3 | uVar3 >> 4;
  uVar1 = uVar1 | uVar1 >> 4 | uVar3 << 0x1c;
  uVar3 = uVar2 | uVar2 >> 8;
  uVar1 = uVar1 | uVar1 >> 8 | uVar2 << 0x18;
  uVar2 = uVar3 | uVar3 >> 0x10;
  uVar1 = uVar1 | uVar1 >> 0x10 | uVar3 << 0x10 | uVar2;
  return uVar1 - (uVar1 >> 1 | uVar2 << 0x1f);
}

/* ref: FUN_00c40dc0 */
GEN_FRAME uint F_00c40dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40dc0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return ((param_1 - 1 + param_2) / param_2) * param_2;
}

/* ref: FUN_00c40de0 */
GEN_FRAME uint F_00c40de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  
  (*(ulonglong *)(gen_frame + 0x4)) = CONCAT44(param_2 + param_4 + (uint)CARRY4(param_1,param_3) - 1 +
                       (uint)(param_1 + param_3 != 0),param_1 + param_3 - 1);
  (*(undefined4 *)((char *)&(*(ulonglong *)(gen_frame + 0x4)) + 0)) = (int)((*(ulonglong *)(gen_frame + 0x4)) / CONCAT44(param_4,param_3));
  return (int)(*(ulonglong *)(gen_frame + 0x4)) * param_3;
}

/* ref: FUN_00c40e20 */
GEN_FRAME uint F_00c40e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40e20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_1 - 1 + param_2 & ~(param_2 - 1U);
}

/* ref: FUN_00c40e40 */
GEN_FRAME uint F_00c40e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc40e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  return (param_1 + param_3) - 1U & ~(param_3 - 1U);
}

/* ref: FUN_00c40e70 */
GEN_FRAME uint F_00c40e70(unsigned int gen_a0)
{
  GEN_ENTER(0xc40e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 - 1U | param_1 - 1U >> 1;
  uVar1 = uVar1 | uVar1 >> 2;
  uVar1 = uVar1 | uVar1 >> 4;
  uVar1 = uVar1 | uVar1 >> 8;
  return (uVar1 >> 0x10 | uVar1) + 1;
}

/* ref: FUN_00c40ea0 */
GEN_FRAME uint F_00c40ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_2 - 1 + (uint)(param_1 != 0);
  uVar2 = uVar1 | uVar1 >> 1;
  uVar3 = param_1 - 1U | param_1 - 1U >> 1 | uVar1 * ((int)0x80000000);
  uVar1 = uVar2 | uVar2 >> 2;
  uVar3 = uVar3 | uVar3 >> 2 | uVar2 << 0x1e;
  uVar2 = uVar1 | uVar1 >> 4;
  uVar3 = uVar3 | uVar3 >> 4 | uVar1 << 0x1c;
  uVar3 = uVar3 | uVar3 >> 8 | uVar2 << 0x18;
  uVar2 = uVar2 | uVar2 >> 8;
  return (uVar2 | uVar2 >> 0x10 | uVar3 | uVar3 >> 0x10 | uVar2 << 0x10) + 1;
}

/* ref: FUN_00c40f10 */
GEN_FRAME uint F_00c40f10(unsigned int gen_a0)
{
  GEN_ENTER(0xc40f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = (param_1 >> 1 & 0x55555555) + (param_1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = (uVar1 >> 4 & 0xf0f0f0f) + (uVar1 & 0xf0f0f0f);
  uVar1 = (uVar1 >> 8 & 0xff00ff) + (uVar1 & 0xff00ff);
  return (uVar1 >> 0x10) + (uVar1 & 0xffff);
}

/* ref: FUN_00c40f70 */
GEN_FRAME uint F_00c40f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc40f70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1 >> 1 & 0x55555555;
  uVar2 = uVar1 + (param_1 & 0x55555555);
  uVar3 = (param_2 >> 1 & 0x55555555) + (param_2 & 0x55555555) +
          (uint)CARRY4(uVar1,param_1 & 0x55555555);
  uVar1 = uVar2 & 0x33333333;
  uVar2 = uVar2 >> 2 & 0x33333333;
  uVar4 = uVar2 + uVar1;
  uVar5 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333) + (uint)CARRY4(uVar2,uVar1);
  uVar3 = uVar4 & 0xf0f0f0f;
  uVar1 = uVar4 >> 4 & 0xf0f0f0f;
  uVar2 = uVar1 + uVar3;
  uVar3 = (uVar5 >> 4 & 0xf0f0f0f) + (uVar5 & 0xf0f0f0f) + (uint)CARRY4(uVar1,uVar3);
  uVar4 = uVar2 >> 8 & 0xff00ff;
  uVar2 = uVar2 & 0xff00ff;
  uVar1 = uVar4 + uVar2;
  uVar3 = (uVar3 >> 8 & 0xff00ff) + (uVar3 & 0xff00ff) + (uint)CARRY4(uVar4,uVar2);
  uVar2 = uVar1 & 0xffff;
  uVar1 = uVar1 >> 0x10;
  return (uVar3 >> 0x10) + (uVar3 & 0xffff) + (uint)CARRY4(uVar1,uVar2) + uVar1 + uVar2;
}

/* ref: FUN_00c41040 */
GEN_FRAME uint F_00c41040(unsigned int gen_a0)
{
  GEN_ENTER(0xc41040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    for (; (param_1 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  return uVar1;
}

/* ref: FUN_00c41060 */
GEN_FRAME uint F_00c41060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41060u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c40f70(param_1 - 1 & ~param_1,(param_2 - 1) + (uint)(param_1 != 0) & ~param_2);
  return uVar1;
}

/* ref: FUN_00c41090 */
GEN_FRAME uint F_00c41090(unsigned int gen_a0)
{
  GEN_ENTER(0xc41090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 - 1) {
    }
  }
  if (param_1 == 0) {
    return 0x20;
  }
  return 0x1f - iVar1;
}

/* ref: FUN_00c410c0 */
GEN_FRAME uint F_00c410c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc410c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = 0x40;
  uVar2 = param_1;
  if (param_2 != 0) {
    iVar1 = 0x20;
    uVar2 = param_2;
  }
  if (uVar2 >> 0x10 != 0) {
    iVar1 = iVar1 - 0x10;
    uVar2 = uVar2 >> 0x10;
  }
  if (uVar2 >> 8 != 0) {
    iVar1 = iVar1 - 8;
    uVar2 = uVar2 >> 8;
  }
  if (uVar2 >> 4 != 0) {
    iVar1 = iVar1 - 4;
    uVar2 = uVar2 >> 4;
  }
  if (uVar2 >> 2 != 0) {
    iVar1 = iVar1 - 2;
    uVar2 = uVar2 >> 2;
  }
  if ((uVar2 & 0xfffffffe) == 0) {
    return iVar1 - uVar2;
  }
  return iVar1 - 2;
}

/* ref: FUN_00c41160 */
GEN_FRAME uint F_00c41160(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc41160u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *param_1 = 0;
  param_1[1] = (undefined4)gen_fl2bits(param_2);
  param_1[2] = 0;
  return (uint)param_1;
}

/* ref: FUN_00c41180 */
GEN_FRAME uint F_00c41180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_edx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(in_edx,param_3,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c411a0 */
GEN_FRAME uint F_00c411a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc411a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 in_eax = (undefined4)gen_a0;
  undefined4 in_ecx = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_3,in_ecx,in_eax);
  return (uint)uVar1;
}

/* ref: FUN_00c411d0 */
GEN_FRAME uint GEN_THISCALL F_00c411d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc411d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  if ((char)param_3 == '\0') {
    for (puVar1 = (undefined4 *)*in_ecx; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1
        ) {
      if (param_2 <= (int)puVar1[2]) {
        return (uint)puVar1;
      }
    }
  }
  else {
    uVar2 = in_ecx[1];
    if (uVar2 != 0) {
      do {
        if (param_2 <= *(int *)(uVar2 + 8)) {
          return uVar2;
        }
        uVar2 = *(uint *)(uVar2 + 4);
      } while (uVar2 != 0);
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00c41220 */
GEN_FRAME uint GEN_STDCALL F_00c41220(unsigned int gen_a0)
{
  GEN_ENTER(0xc41220u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c40a20(param_1);
  return uVar1;
}

/* ref: FUN_00c41230 */
GEN_FRAME uint GEN_THISCALL F_00c41230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  
  if ((char)param_3 == '\0') {
    piVar2 = (int *)((int)param_1 + param_2 + 0x10);
    piVar2[2] = (param_1[2] - param_2) - 0x10;
    *piVar2 = *param_1;
    piVar3 = (int *)param_1[1];
    piVar2[1] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      *piVar3 = (int)piVar2;
    }
    if (*piVar2 != 0) {
      *(int * PTR32 *)(*piVar2 + 4) = piVar2;
    }
    if (param_1 == *(int * PTR32 *)this) {
      *(int * PTR32 *)this = piVar2;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int * PTR32 *)((int)this + 4) = piVar2;
    }
    param_1[2] = param_2;
    *param_1 = 0;
    param_1[1] = 0;
    return (uint)param_1;
  }
  iVar4 = param_1[2] - param_2;
  puVar1 = (undefined4 *)(iVar4 + (int)param_1);
  puVar1[2] = param_2;
  *puVar1 = 0;
  puVar1[1] = 0;
  param_1[2] = iVar4 - 0x10;
  return (uint)puVar1;
}

/* ref: FUN_00c412c0 */
GEN_FRAME int GEN_STDCALL F_00c412c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc412c0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = 0;
  for (puVar1 = (undefined4 *)*param_1; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1)
  {
    iVar2 = iVar2 + puVar1[2];
  }
  return iVar2;
}

/* ref: FUN_00c413e0 */
GEN_FRAME uint F_00c413e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc413e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = REFG(float, 0x1087f04);
  fVar2 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar3 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = (float)fVar3;
  param_1[1] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = fVar1;
  param_1[6] = 0.0;
  param_1[2] = ((float)GEN_TOF(-(float10)(float)fVar2));
  param_1[9] = 0.0;
  param_1[0xc] = 0.0;
  param_1[8] = (float)fVar2;
  param_1[0xd] = 0.0;
  param_1[0xe] = 0.0;
  param_1[10] = (float)fVar3;
  return (uint)param_1;
}

/* ref: FUN_00c41550 */
GEN_FRAME unsigned int F_00c41550(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xc41550u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)param_1 = 0;
  fVar1 = ((float10)GEN_TOD(fsin((float10)(float)((float10)param_2 * fVar2))));
  *(float *)(param_1 + 4) = (float)fVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  fVar2 = ((float10)GEN_TOD(fcos((float10)(float)((float10)param_2 * fVar2))));
  *(float *)(param_1 + 0xc) = (float)fVar2;
  return 0;
}

/* ref: FUN_00c415a0 */
GEN_NOFRAME unsigned int F_00c415a0(void)
{
  GEN_ENTER(0xc415a0u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  
  for (puVar1 = REFG(undefined4 * PTR32, 0x14e9d8c); puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    F_00c411a0(puVar1[4],puVar1[3],puVar1[2],(int)puVar1[2] >> 0x1f);
    if ((undefined4 *)puVar1[5] != (undefined4 *)0x0) {
      *(undefined4 *)puVar1[5] = puVar1[2];
    }
  }
  return;
}

/* ref: FUN_00c415e0 */
GEN_FRAME uint F_00c415e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc415e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * this;
  
  this = (undefined4 *)((int)param_1 + 0xfU & 0xfffffff0);
  uVar2 = param_2;
  if (this != param_1) {
    uVar2 = (int)this + param_2 + (-0x10 - (int)param_1) & 0xfffffff0;
  }
  this[1] = 0;
  *this = 0;
  this[2] = 0;
  this[4] = (uVar2 & 0xfffffff0) - 0x50;
  puVar1 = this + 0x10;
  this[0x11] = 0;
  *puVar1 = 0;
  this[0x12] = this[4];
  F_00c41ec0(this GEN_EDX_ARG,puVar1);
  this[6] = puVar1;
  uVar2 = F_00c409f0();
  this[5] = uVar2;
  if (param_3 < 3) {
    (&REFG(undefined4, 0x14e9d80))[(int)(param_3)] = this;
  }
  return (uint)this;
}

/* ref: FUN_00c41650 */
GEN_FRAME uint GEN_THISCALL F_00c41650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc41650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int * piVar6;
  
  piVar6 = *(int * PTR32 *)this;
  if (piVar6 == (int *)0x0) {
    uVar5 = F_00c41f20(this GEN_EDX_FWD,param_1);
    return uVar5;
  }
  do {
    if (param_1 < piVar6) {
      if (piVar6 != (int *)0x0) {
        if (param_1 != (int *)0x0) {
          piVar4 = (int *)*param_1;
          piVar3 = param_1;
          while (piVar2 = piVar4, piVar2 != (int *)0x0) {
            piVar3 = piVar2;
            piVar4 = (int *)*piVar2;
          }
          *piVar3 = (int)piVar6;
          param_1[1] = piVar6[1];
          if ((undefined4 *)piVar6[1] != (undefined4 *)0x0) {
            *(undefined4 *)piVar6[1] = param_1;
          }
          piVar6[1] = (int)piVar3;
          if (piVar6 == *(int * PTR32 *)this) {
            *(int * PTR32 *)this = param_1;
          }
          *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
        }
        if ((int *)(param_1[2] + 0x10 + (int)param_1) == piVar6) {
          param_1[2] = piVar6[2] + 0x10 + param_1[2];
          if (piVar6 == *(int * PTR32 *)this) {
            *(int *)this = *piVar6;
          }
          if (piVar6 == *(int * PTR32 *)((int)this + 4)) {
            *(int *)((int)this + 4) = piVar6[1];
          }
          if (*piVar6 != 0) {
            *(int *)(*piVar6 + 4) = piVar6[1];
          }
          if ((int *)piVar6[1] != (int *)0x0) {
            *(int *)piVar6[1] = *piVar6;
          }
          *piVar6 = 0;
          piVar6[1] = 0;
          *(int *)((int)this + 8) = *(int *)((int)this + 8) - 1;
        }
        goto LAB_00c41745;
      }
      break;
    }
    piVar6 = (int *)*piVar6;
  } while (piVar6 != (int *)0x0);
  if (param_1 != (int *)0x0) {
    piVar6 = *(int * PTR32 *)((int)this + 4);
    if (piVar6 == (int *)0x0) {
      *(int * PTR32 *)((int)this + 4) = param_1;
      *(int * PTR32 *)this = param_1;
      *param_1 = 0;
      param_1[1] = 0;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
    else {
      piVar4 = (int *)*param_1;
      piVar3 = param_1;
      while (piVar2 = piVar4, piVar2 != (int *)0x0) {
        piVar3 = piVar2;
        piVar4 = (int *)*piVar2;
      }
      *piVar3 = *piVar6;
      param_1[1] = (int)piVar6;
      if (*piVar6 != 0) {
        *(int * PTR32 *)(*piVar6 + 4) = piVar3;
      }
      *piVar6 = (int)param_1;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
      *(int * PTR32 *)((int)this + 4) = param_1;
    }
  }
LAB_00c41745: ;
  iVar1 = param_1[1];
  if ((iVar1 != 0) && (((int *)GEN_TOP((*(int *)(iVar1 + 8) + 0x10 + iVar1))) == param_1)) {
    *(int *)(iVar1 + 8) = param_1[2] + 0x10 + *(int *)(iVar1 + 8);
    if (param_1 == *(int * PTR32 *)this) {
      *(int *)this = *param_1;
    }
    if (param_1 == *(int * PTR32 *)((int)this + 4)) {
      *(int *)((int)this + 4) = param_1[1];
    }
    if (*param_1 != 0) {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    if ((int *)param_1[1] != (int *)0x0) {
      *(int *)param_1[1] = *param_1;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00c417b0 */
GEN_FRAME uint GEN_THISCALL F_00c417b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc417b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00c41650(this GEN_EDX_FWD,param_1 - 0x10);
  }
  return uVar1;
}

/* ref: FUN_00c417d0 */
GEN_FRAME uint GEN_THISCALL F_00c417d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc417d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  
  if (param_1 < 1) {
    return 0;
  }
  uVar2 = param_1 + 0xfU & 0xfffffff0;
  if (0x10 < param_3) {
    uVar2 = uVar2 + 0x10 + param_3 * 2;
  }
  puVar1 = (undefined4 *)F_00c411d0(this GEN_EDX_FWD,uVar2,param_2);
  if (puVar1 != (undefined4 *)0x0) {
    if ((int)(puVar1[2] - uVar2) < 0x20) {
      F_00c41fd0(this GEN_EDX_ARG,puVar1);
    }
    else {
      puVar1 = (undefined4 *)F_00c41230(this GEN_EDX_ARG,puVar1,uVar2,param_2);
    }
    if ((0x10 < param_3) &&
       (uVar2 = ((param_3 + 0xf + (int)puVar1 & ~(param_3 - 1)) - (int)puVar1) - 0x10 >> 4,
       uVar2 != 0)) {
      if (uVar2 == 1) {
        uVar2 = (param_3 >> 4) + 1;
      }
      puVar1[uVar2 * 4] = 0;
      puVar1[uVar2 * 4 + 1] = 0;
      puVar1[uVar2 * 4 + 2] = puVar1[2] + uVar2 * -0x10;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = uVar2 * 0x10 - 0x10;
      F_00c41650(this GEN_EDX_ARG,puVar1);
      puVar1 = puVar1 + uVar2 * 4;
    }
    if (puVar1 != (undefined4 *)0x0) {
      return (uint)(puVar1 + 4);
    }
  }
  return 0;
}

/* ref: FUN_00c418a0 */
GEN_FRAME uint GEN_THISCALL F_00c418a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc418a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * _Dst;
  
  _Dst = (undefined *)F_00c417d0(this GEN_EDX_FWD,param_1 * param_2,0,0x10);
  if (_Dst != (undefined *)0x0) {
    F_00c48350(_Dst,0,param_1 * param_2);
  }
  return (uint)_Dst;
}

/* ref: FUN_00c418d0 */
GEN_FRAME float F_00c418d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc418d0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  float * pfVar1;
  
  (*(undefined4 *)(gen_frame + 0x8)) = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  pfVar1 = (float *)F_004c4060(&(*(undefined4 *)&gen_args[0]),&(*(undefined4 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)));
  return *pfVar1;
}

/* ref: FUN_00c41a30 */
GEN_NOFRAME uint F_00c41a30(void)
{
  GEN_ENTER(0xc41a30u, 0u, 0u, 0u, 0u);
  F_00c415e0(&REFG(undefined, 0x14c9d80),0x20000,0,0);
  REFG(undefined4, 0x14c9d00) = REFG(undefined4, 0x14e9d80);
  *(undefined4 *)&REFG(undefined, 0x14e9d90) = 0;
  REFG(undefined4, 0x14e9d8c) = 0;
  *(undefined4 *)&REFG(undefined, 0x14e9d94) = 0;
  return REFG(undefined4, 0x14e9d80);
}

/* ref: FUN_00c41a70 */
GEN_FRAME uint GEN_THISCALL F_00c41a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc41a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c417b0(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: FUN_00c41a80 */
GEN_FRAME uint GEN_THISCALL F_00c41a80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc41a80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c417d0(this GEN_EDX_FWD,param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c41a90 */
GEN_FRAME uint GEN_THISCALL F_00c41a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc41a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c418a0(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c41aa0 */
GEN_FRAME unsigned int F_00c41aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc41aa0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * this;
  uint in_edx;
  undefined4 * puVar1;
  
  this = REFG(void * PTR32, 0x14c9d00);
  if (*param_1 != 0) {
    in_edx = F_00c41a80(REFG(void * PTR32, 0x14c9d00) GEN_EDX_ARG,param_2,0,0x80);
    puVar1 = (undefined4 *)F_00c41a80(this GEN_EDX_ARG,0x18,0,0x80);
    puVar1[1] = 0;
    *puVar1 = 0;
    if ((char)param_3 != '\0') {
      F_00c41180(param_2,in_edx,*param_1,(int)*param_1 >> 0x1f);
    }
    if ((param_1 < *(uint * PTR32 *)((int)this + 0x18)) ||
       (((uint *)GEN_TOP((*(int *)((int)this + 0x10) + (int)*(uint * PTR32 *)((int)this + 0x18)))) <= param_1)) {
      puVar1[5] = 0;
    }
    else {
      puVar1[5] = param_1;
    }
    puVar1[2] = *param_1;
    puVar1[3] = in_edx;
    puVar1[4] = param_2;
    F_00c42030(&REFG(undefined4, 0x14e9d8c) GEN_EDX_ARG,puVar1);
    *param_1 = in_edx;
  }
  return;
}

/* ref: FUN_00c41b50 */
GEN_NOFRAME unsigned int F_00c41b50(unsigned int gen_a0)
{
  GEN_ENTER(0xc41b50u, gen_a0, 0u, 0u, 0u);
  int * in_eax = (int *)(uintptr_t)gen_a0;
  int * piVar1;
  
  F_00c41aa0(in_eax,0x3c,1);
  piVar1 = (int *)*in_eax;
  F_00c41aa0(piVar1 + 1,piVar1[2] * 0x30,1);
  F_00c41aa0(piVar1 + 4,piVar1[5] * 0x30,1);
  F_00c41aa0(piVar1 + 7,piVar1[8] * 4,1);
  F_00c41aa0(piVar1 + 0xc,piVar1[0xd] * 4,1);
  F_00c41aa0(piVar1,0x54,1);
  F_00c41aa0(*piVar1 + 0xc,*(int *)(*piVar1 + 0x10) * 2,1);
  return;
}

/* ref: FUN_00c41be0 */
GEN_FRAME unsigned int F_00c41be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * in_eax = (undefined *)(uintptr_t)gen_a0;
  undefined * in_ecx = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x4)) = in_eax;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = in_ecx;
  F_00c41b50(&(*(undefined * PTR32 *)(gen_frame + 0x4)));
  F_00c41b50(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
  uVar1 = F_00d32a50((*(undefined * PTR32 *)(gen_frame + 0x8)) GEN_EDX_ARG);
  F_00d31650((*(undefined * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG,uVar1);
  return;
}

/* ref: FUN_00c41c20 */
GEN_FRAME uint F_00c41c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc41c20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  int iVar3;
  ulonglong uVar4;
  
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  iVar3 = *piVar1;
  if (0 < iVar3) {
    piVar2 = piVar1 + 0x21;
    do {
      if (piVar2[-1] == 0) {
        F_00c41a30();
        F_00c41be0(*piVar2,piVar2[1]);
        if (piVar2[2] != 0) {
          F_00c41be0(piVar2[3],piVar2[4]);
        }
        F_00c415a0();
      }
      piVar2 = piVar2 + 8;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  piVar1[1] = 0;
  uVar4 = F_00c46aa0(*(undefined4 *)(param_2 + 0x58),piVar1,0x80);
  return (uint)uVar4;
}

/* ref: FUN_00c41cb0 */
GEN_FRAME uint GEN_THISCALL F_00c41cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc41cb0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c41cc0 */
GEN_FRAME uint GEN_THISCALL F_00c41cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xc41cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c41d00 */
GEN_FRAME uint GEN_STDCALL F_00c41d00(unsigned int gen_a0)
{
  GEN_ENTER(0xc41d00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 4);
}

