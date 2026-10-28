#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00518980 */
GEN_FRAME uint F_00518980(unsigned int gen_a0)
{
  GEN_ENTER(0x518980u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00518990 */
GEN_FRAME uint F_00518990(unsigned int gen_a0)
{
  GEN_ENTER(0x518990u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_005189a0 */
GEN_FRAME uint F_005189a0(unsigned int gen_a0)
{
  GEN_ENTER(0x5189a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_005189b0 */
GEN_FRAME uint F_005189b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5189b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_005189c0 */
GEN_FRAME uint F_005189c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5189c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_005189d0 */
GEN_FRAME uint F_005189d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5189d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005189e0 */
GEN_FRAME uint F_005189e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5189e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00518a00 */
GEN_FRAME uint F_00518a00(unsigned int gen_a0)
{
  GEN_ENTER(0x518a00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00518a40 */
GEN_FRAME uint GEN_STDCALL F_00518a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518ab0 */
GEN_FRAME unsigned int GEN_THISCALL F_00518ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518ab0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00518b10 */
GEN_FRAME uint F_00518b10(unsigned int gen_a0)
{
  GEN_ENTER(0x518b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00518b50 */
GEN_FRAME byte GEN_THISCALL F_00518b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518bd0 */
GEN_FRAME uint GEN_THISCALL F_00518bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * in_ecx = (undefined2 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (undefined2)param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00518be0 */
GEN_FRAME uint F_00518be0(unsigned int gen_a0)
{
  GEN_ENTER(0x518be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00518bf0 */
GEN_FRAME uint F_00518bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x518bf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00518c00 */
GEN_FRAME uint F_00518c00(unsigned int gen_a0)
{
  GEN_ENTER(0x518c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00518c10 */
GEN_FRAME uint F_00518c10(unsigned int gen_a0)
{
  GEN_ENTER(0x518c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00518c20 */
GEN_FRAME uint F_00518c20(unsigned int gen_a0)
{
  GEN_ENTER(0x518c20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00518c30 */
GEN_FRAME uint F_00518c30(unsigned int gen_a0)
{
  GEN_ENTER(0x518c30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00518c40 */
GEN_FRAME uint F_00518c40(unsigned int gen_a0)
{
  GEN_ENTER(0x518c40u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00518c60 */
GEN_FRAME uint F_00518c60(unsigned int gen_a0)
{
  GEN_ENTER(0x518c60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00518ca0 */
GEN_FRAME uint GEN_STDCALL F_00518ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_00518cf0 */
GEN_FRAME uint GEN_THISCALL F_00518cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x518cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00518d10 */
GEN_FRAME byte GEN_THISCALL F_00518d10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518d60 */
GEN_FRAME byte GEN_THISCALL F_00518d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518da0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00518da0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x518da0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00518e20 */
GEN_FRAME byte GEN_THISCALL F_00518e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x518e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00518e60 */
GEN_FRAME uint GEN_THISCALL F_00518e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x518e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00518ec0 */
GEN_FRAME uint GEN_STDCALL F_00518ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x30,0xd6);
  return (uint)uVar1;
}

/* ref: FUN_00518f00 */
GEN_FRAME uint GEN_STDCALL F_00518f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_00518fa0 */
GEN_FRAME uint GEN_STDCALL F_00518fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x518fa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_00519000 */
GEN_FRAME uint GEN_STDCALL F_00519000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519030 */
GEN_FRAME uint GEN_STDCALL F_00519030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_005190c0 */
GEN_FRAME uint GEN_THISCALL F_005190c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5190c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005190d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005190d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5190d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519120 */
GEN_FRAME uint GEN_THISCALL F_00519120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_00519150 */
GEN_FRAME uint F_00519150(unsigned int gen_a0)
{
  GEN_ENTER(0x519150u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00519160 */
GEN_FRAME uint F_00519160(unsigned int gen_a0)
{
  GEN_ENTER(0x519160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519170 */
GEN_FRAME uint F_00519170(unsigned int gen_a0)
{
  GEN_ENTER(0x519170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00519180 */
GEN_FRAME uint F_00519180(unsigned int gen_a0)
{
  GEN_ENTER(0x519180u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00519190 */
GEN_FRAME uint F_00519190(unsigned int gen_a0)
{
  GEN_ENTER(0x519190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_005191c0 */
GEN_FRAME uint GEN_STDCALL F_005191c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5191c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_005191f0 */
GEN_FRAME uint F_005191f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5191f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00519200 */
GEN_FRAME uint F_00519200(unsigned int gen_a0)
{
  GEN_ENTER(0x519200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519210 */
GEN_FRAME uint F_00519210(unsigned int gen_a0)
{
  GEN_ENTER(0x519210u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00519220 */
GEN_FRAME uint F_00519220(unsigned int gen_a0)
{
  GEN_ENTER(0x519220u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00519230 */
GEN_FRAME uint F_00519230(unsigned int gen_a0)
{
  GEN_ENTER(0x519230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00519260 */
GEN_FRAME uint GEN_STDCALL F_00519260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_005192d0 */
GEN_FRAME uint F_005192d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5192d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519300 */
GEN_FRAME uint GEN_THISCALL F_00519300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519300u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00519310 */
GEN_FRAME uint GEN_THISCALL F_00519310(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519310u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  *(int *)(in_ecx + 8) = *(int *)(in_ecx + 8) + param_2;
  return in_ecx;
}

/* ref: FUN_00519330 */
GEN_FRAME uint GEN_THISCALL F_00519330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519330u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00519370 */
GEN_FRAME uint GEN_STDCALL F_00519370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519370u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x30,0xd4);
  return (uint)uVar1;
}

/* ref: FUN_005193e0 */
GEN_FRAME uint F_005193e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5193e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_005193f0 */
GEN_FRAME uint F_005193f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5193f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519400 */
GEN_FRAME uint F_00519400(unsigned int gen_a0)
{
  GEN_ENTER(0x519400u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00519410 */
GEN_FRAME uint F_00519410(unsigned int gen_a0)
{
  GEN_ENTER(0x519410u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00519420 */
GEN_FRAME uint F_00519420(unsigned int gen_a0)
{
  GEN_ENTER(0x519420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00519430 */
GEN_FRAME uint F_00519430(unsigned int gen_a0)
{
  GEN_ENTER(0x519430u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519470 */
GEN_FRAME uint GEN_STDCALL F_00519470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519470u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_005194b0 */
GEN_FRAME uint GEN_THISCALL F_005194b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5194b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519500 */
GEN_FRAME uint GEN_THISCALL F_00519500(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519510 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00519510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x519510u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519560 */
GEN_FRAME uint GEN_THISCALL F_00519560(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519570 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00519570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x519570u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_005195e0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_005195e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x5195e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00519640 */
GEN_FRAME uint GEN_THISCALL F_00519640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519650 */
GEN_FRAME uint GEN_THISCALL F_00519650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519660 */
GEN_FRAME uint GEN_THISCALL F_00519660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519680 */
GEN_FRAME uint GEN_STDCALL F_00519680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 8,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_005196b0 */
GEN_FRAME uint GEN_STDCALL F_005196b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5196b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0x12e);
  return (uint)uVar1;
}

/* ref: FUN_005196e0 */
GEN_FRAME uint F_005196e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5196e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x2c;
}

/* ref: FUN_005196f0 */
GEN_FRAME uint F_005196f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5196f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x2d;
}

/* ref: FUN_00519700 */
GEN_FRAME uint F_00519700(unsigned int gen_a0)
{
  GEN_ENTER(0x519700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519710 */
GEN_FRAME uint F_00519710(unsigned int gen_a0)
{
  GEN_ENTER(0x519710u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00519720 */
GEN_FRAME uint F_00519720(unsigned int gen_a0)
{
  GEN_ENTER(0x519720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00519730 */
GEN_FRAME uint GEN_STDCALL F_00519730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519730u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x30,param_2,0xd6);
  return uVar1;
}

/* ref: FUN_00519760 */
GEN_FRAME uint GEN_STDCALL F_00519760(unsigned int gen_a0)
{
  GEN_ENTER(0x519760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519770 */
GEN_FRAME uint GEN_STDCALL F_00519770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x3c,param_2,0xd6);
  return uVar1;
}

/* ref: FUN_005197b0 */
GEN_FRAME uint GEN_THISCALL F_005197b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5197b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: FUN_005197d0 */
GEN_FRAME uint GEN_STDCALL F_005197d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5197d0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519800 */
GEN_FRAME uint F_00519800(unsigned int gen_a0)
{
  GEN_ENTER(0x519800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00519810 */
GEN_FRAME uint F_00519810(unsigned int gen_a0)
{
  GEN_ENTER(0x519810u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519830 */
GEN_FRAME uint GEN_STDCALL F_00519830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519830u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: hkBaseObject::vf1 */
GEN_NOFRAME unsigned int F_00519890(void)
{
  GEN_ENTER(0x519890u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: hkBaseObject::vf0 */
GEN_NOFRAME uint GEN_THISCALL F_005198b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5198b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return (uint)in_ecx;
}

/* ref: FUN_005198f0 */
GEN_FRAME uint F_005198f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5198f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00519900 */
GEN_FRAME uint F_00519900(unsigned int gen_a0)
{
  GEN_ENTER(0x519900u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519920 */
GEN_FRAME uint GEN_STDCALL F_00519920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519920u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519950 */
GEN_FRAME uint GEN_STDCALL F_00519950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519950u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519980 */
GEN_FRAME uint GEN_STDCALL F_00519980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519980u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_005199b0 */
GEN_FRAME uint GEN_STDCALL F_005199b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5199b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_005199e0 */
GEN_FRAME uint GEN_THISCALL F_005199e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x5199e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00519a10 */
GEN_FRAME uint F_00519a10(unsigned int gen_a0)
{
  GEN_ENTER(0x519a10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x2c;
}

/* ref: FUN_00519a20 */
GEN_FRAME uint F_00519a20(unsigned int gen_a0)
{
  GEN_ENTER(0x519a20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x2d;
}

/* ref: FUN_00519a30 */
GEN_FRAME uint F_00519a30(unsigned int gen_a0)
{
  GEN_ENTER(0x519a30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519a40 */
GEN_FRAME uint F_00519a40(unsigned int gen_a0)
{
  GEN_ENTER(0x519a40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00519a50 */
GEN_FRAME uint F_00519a50(unsigned int gen_a0)
{
  GEN_ENTER(0x519a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00519a60 */
GEN_FRAME uint GEN_STDCALL F_00519a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519a60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x30,param_2,0xd4);
  return uVar1;
}

/* ref: FUN_00519a90 */
GEN_FRAME byte GEN_THISCALL F_00519a90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00519ab0 */
GEN_FRAME uint GEN_THISCALL F_00519ab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519ac0 */
GEN_FRAME uint GEN_THISCALL F_00519ac0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519ac0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519ad0 */
GEN_FRAME uint GEN_THISCALL F_00519ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519ae0 */
GEN_FRAME uint F_00519ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00519af0 */
GEN_FRAME uint GEN_STDCALL F_00519af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519af0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519b20 */
GEN_FRAME uint GEN_STDCALL F_00519b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519b20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x12e);
  return uVar1;
}

/* ref: FUN_00519b50 */
GEN_FRAME uint GEN_THISCALL F_00519b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519b50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00519b70 */
GEN_FRAME uint F_00519b70(unsigned int gen_a0)
{
  GEN_ENTER(0x519b70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x2d)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x2d);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00519b90 */
GEN_FRAME uint F_00519b90(unsigned int gen_a0)
{
  GEN_ENTER(0x519b90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x2d);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00519be0 */
GEN_FRAME uint F_00519be0(unsigned int gen_a0)
{
  GEN_ENTER(0x519be0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519c10 */
GEN_FRAME uint F_00519c10(unsigned int gen_a0)
{
  GEN_ENTER(0x519c10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519c80 */
GEN_FRAME uint F_00519c80(unsigned int gen_a0)
{
  GEN_ENTER(0x519c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x2d)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x2d);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00519ca0 */
GEN_FRAME uint F_00519ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ca0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x2d);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x2d);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00519cd0 */
GEN_FRAME uint F_00519cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x519cd0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00519d10 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00519d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x519d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00519d60 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00519d60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x519d60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x2d) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x2d) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x2d);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x2d);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x2d);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00519db0 */
GEN_FRAME uint F_00519db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x519db0u, gen_a0, gen_a1, 0u, 0u);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte * pbVar1;
  
  pbVar1 = param_2;
  if (*param_1 <= *param_2) {
    pbVar1 = param_1;
  }
  return (uint)pbVar1;
}

/* ref: FUN_00519dd0 */
GEN_FRAME uint F_00519dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x519dd0u, gen_a0, gen_a1, gen_a2, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint * puVar5;
  int iVar6;
  
  uVar3 = param_2 - 1;
  uVar1 = *param_3;
  iVar6 = 0;
  if ((*param_1 <= uVar1) && (uVar2 = uVar3, uVar4 = uVar3, uVar1 <= param_1[uVar3])) {
    while (4 < uVar2) {
      uVar3 = uVar3 >> 1;
      if (uVar1 == param_1[uVar3]) {
        return uVar3;
      }
      if (uVar1 < param_1[uVar3]) {
        uVar4 = uVar3 - 1;
      }
      else {
        iVar6 = uVar3 + 1;
      }
      uVar3 = uVar4 + iVar6;
      uVar2 = uVar4 - iVar6;
    }
    uVar3 = 0;
    puVar5 = param_1 + iVar6;
    do {
      if (uVar1 == *puVar5) {
        return uVar3 + iVar6;
      }
      uVar3 = uVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar3 <= uVar2);
  }
  return 0xffffffff;
}

/* ref: FUN_00519e70 */
GEN_FRAME uint GEN_THISCALL F_00519e70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519e70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00519e80 */
GEN_FRAME uint GEN_THISCALL F_00519e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x519e80u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00519e90 */
GEN_FRAME uint F_00519e90(unsigned int gen_a0)
{
  GEN_ENTER(0x519e90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519eb0 */
GEN_FRAME uint F_00519eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x519eb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ec0 */
GEN_FRAME uint F_00519ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ed0 */
GEN_FRAME uint F_00519ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ed0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ee0 */
GEN_FRAME uint F_00519ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ee0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ef0 */
GEN_FRAME uint F_00519ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f00 */
GEN_FRAME uint F_00519f00(unsigned int gen_a0)
{
  GEN_ENTER(0x519f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f10 */
GEN_FRAME uint F_00519f10(unsigned int gen_a0)
{
  GEN_ENTER(0x519f10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f20 */
GEN_FRAME uint F_00519f20(unsigned int gen_a0)
{
  GEN_ENTER(0x519f20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f30 */
GEN_FRAME uint F_00519f30(unsigned int gen_a0)
{
  GEN_ENTER(0x519f30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f40 */
GEN_FRAME uint F_00519f40(unsigned int gen_a0)
{
  GEN_ENTER(0x519f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f50 */
GEN_FRAME uint F_00519f50(unsigned int gen_a0)
{
  GEN_ENTER(0x519f50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f60 */
GEN_FRAME uint F_00519f60(unsigned int gen_a0)
{
  GEN_ENTER(0x519f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519f90 */
GEN_FRAME uint F_00519f90(unsigned int gen_a0)
{
  GEN_ENTER(0x519f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fa0 */
GEN_FRAME uint F_00519fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fb0 */
GEN_FRAME uint F_00519fb0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fc0 */
GEN_FRAME uint F_00519fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fd0 */
GEN_FRAME uint F_00519fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519fe0 */
GEN_FRAME uint F_00519fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x519fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00519ff0 */
GEN_FRAME uint F_00519ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x519ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a000 */
GEN_FRAME uint F_0051a000(unsigned int gen_a0)
{
  GEN_ENTER(0x51a000u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a010 */
GEN_FRAME uint F_0051a010(unsigned int gen_a0)
{
  GEN_ENTER(0x51a010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a020 */
GEN_FRAME uint F_0051a020(unsigned int gen_a0)
{
  GEN_ENTER(0x51a020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a030 */
GEN_FRAME uint F_0051a030(unsigned int gen_a0)
{
  GEN_ENTER(0x51a030u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a040 */
GEN_FRAME uint F_0051a040(unsigned int gen_a0)
{
  GEN_ENTER(0x51a040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a060 */
GEN_FRAME uint F_0051a060(unsigned int gen_a0)
{
  GEN_ENTER(0x51a060u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a070 */
GEN_FRAME uint F_0051a070(unsigned int gen_a0)
{
  GEN_ENTER(0x51a070u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a090 */
GEN_FRAME uint F_0051a090(unsigned int gen_a0)
{
  GEN_ENTER(0x51a090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a110 */
GEN_FRAME uint F_0051a110(unsigned int gen_a0)
{
  GEN_ENTER(0x51a110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a160 */
GEN_FRAME uint GEN_STDCALL F_0051a160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0051a190 */
GEN_FRAME uint GEN_STDCALL F_0051a190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a190u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0051a1d0 */
GEN_FRAME uint GEN_STDCALL F_0051a1d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51a1d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: std::allocator<std::_Container_proxy>::construct_0051a250 */
GEN_FRAME unsigned int GEN_STDCALL F_0051a250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_0051a2a0 */
GEN_NOFRAME uint GEN_THISCALL F_0051a2a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a2a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x2d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x2d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x2d) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x2d);
    }
    if (*(char *)(*(int *)this + 0x2d) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0051a300 */
GEN_NOFRAME uint GEN_THISCALL F_0051a300(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a300u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a3a0 */
GEN_NOFRAME uint GEN_THISCALL F_0051a3a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a3a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a460 */
GEN_NOFRAME uint GEN_THISCALL F_0051a460(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a460u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a4c0 */
GEN_NOFRAME uint GEN_THISCALL F_0051a4c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a4c0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a530 */
GEN_NOFRAME uint GEN_THISCALL F_0051a530(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a530u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a5a0 */
GEN_NOFRAME uint GEN_THISCALL F_0051a5a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a5a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a600 */
GEN_NOFRAME uint GEN_THISCALL F_0051a600(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a600u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0051a660 */
GEN_NOFRAME uint GEN_THISCALL F_0051a660(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a660u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051a6c0 */
GEN_NOFRAME uint GEN_THISCALL F_0051a6c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x2d) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x2d) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x2d) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x2d) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x2d);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x2d);
    }
    if (*(char *)(*(int *)this + 0x2d) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_0051a720 */
GEN_FRAME uint F_0051a720(unsigned int gen_a0)
{
  GEN_ENTER(0x51a720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a730 */
GEN_FRAME uint F_0051a730(unsigned int gen_a0)
{
  GEN_ENTER(0x51a730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a740 */
GEN_FRAME uint GEN_THISCALL F_0051a740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a760 */
GEN_FRAME uint F_0051a760(unsigned int gen_a0)
{
  GEN_ENTER(0x51a760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a770 */
GEN_FRAME uint F_0051a770(unsigned int gen_a0)
{
  GEN_ENTER(0x51a770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a780 */
GEN_FRAME uint F_0051a780(unsigned int gen_a0)
{
  GEN_ENTER(0x51a780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a790 */
GEN_FRAME uint GEN_THISCALL F_0051a790(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a790u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a7b0 */
GEN_FRAME uint F_0051a7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a7c0 */
GEN_FRAME uint F_0051a7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a7d0 */
GEN_FRAME uint GEN_THISCALL F_0051a7d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a7d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a7f0 */
GEN_FRAME uint F_0051a7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a7f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a800 */
GEN_FRAME uint F_0051a800(unsigned int gen_a0)
{
  GEN_ENTER(0x51a800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a810 */
GEN_FRAME uint GEN_THISCALL F_0051a810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a830 */
GEN_FRAME uint F_0051a830(unsigned int gen_a0)
{
  GEN_ENTER(0x51a830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a840 */
GEN_FRAME uint F_0051a840(unsigned int gen_a0)
{
  GEN_ENTER(0x51a840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a850 */
GEN_FRAME uint F_0051a850(unsigned int gen_a0)
{
  GEN_ENTER(0x51a850u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a860 */
GEN_FRAME uint GEN_THISCALL F_0051a860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a880 */
GEN_FRAME uint F_0051a880(unsigned int gen_a0)
{
  GEN_ENTER(0x51a880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a890 */
GEN_FRAME uint F_0051a890(unsigned int gen_a0)
{
  GEN_ENTER(0x51a890u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8a0 */
GEN_FRAME uint F_0051a8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8b0 */
GEN_FRAME uint F_0051a8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8c0 */
GEN_FRAME uint GEN_THISCALL F_0051a8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a8e0 */
GEN_FRAME uint F_0051a8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a8f0 */
GEN_FRAME uint F_0051a8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a8f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a900 */
GEN_FRAME uint F_0051a900(unsigned int gen_a0)
{
  GEN_ENTER(0x51a900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a910 */
GEN_FRAME uint GEN_THISCALL F_0051a910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051a930 */
GEN_FRAME uint F_0051a930(unsigned int gen_a0)
{
  GEN_ENTER(0x51a930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a960 */
GEN_FRAME uint F_0051a960(unsigned int gen_a0)
{
  GEN_ENTER(0x51a960u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a970 */
GEN_FRAME uint F_0051a970(unsigned int gen_a0)
{
  GEN_ENTER(0x51a970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a980 */
GEN_FRAME uint GEN_THISCALL F_0051a980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51a980u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = *param_2;
  *(undefined4 *)((int)this + 0xc) = param_2[1];
  *(undefined4 *)((int)this + 0x10) = param_2[2];
  *(undefined4 *)((int)this + 0x14) = param_2[3];
  *(undefined4 *)((int)this + 0x18) = param_2[4];
  *(undefined4 *)((int)this + 0x1c) = param_2[5];
  return (uint)this;
}

/* ref: FUN_0051a9c0 */
GEN_FRAME uint F_0051a9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9d0 */
GEN_FRAME uint F_0051a9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9e0 */
GEN_FRAME uint F_0051a9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051a9f0 */
GEN_FRAME uint F_0051a9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51a9f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa00 */
GEN_FRAME uint F_0051aa00(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa10 */
GEN_FRAME uint F_0051aa10(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa20 */
GEN_FRAME uint F_0051aa20(unsigned int gen_a0)
{
  GEN_ENTER(0x51aa20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aa30 */
GEN_FRAME byte F_0051aa30(void)
{
  GEN_ENTER(0x51aa30u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051aa40 */
GEN_FRAME byte F_0051aa40(void)
{
  GEN_ENTER(0x51aa40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051aa70 */
GEN_FRAME byte F_0051aa70(void)
{
  GEN_ENTER(0x51aa70u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051aa80 */
GEN_FRAME uint F_0051aa80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aa80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0051aac0 */
GEN_FRAME byte F_0051aac0(void)
{
  GEN_ENTER(0x51aac0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051aad0 */
GEN_FRAME uint F_0051aad0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aae0 */
GEN_FRAME uint F_0051aae0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aaf0 */
GEN_FRAME uint F_0051aaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aaf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab00 */
GEN_FRAME uint F_0051ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab10 */
GEN_FRAME uint F_0051ab10(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab20 */
GEN_FRAME uint F_0051ab20(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab30 */
GEN_FRAME uint F_0051ab30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab40 */
GEN_FRAME uint F_0051ab40(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab50 */
GEN_FRAME uint F_0051ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab60 */
GEN_FRAME uint F_0051ab60(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab70 */
GEN_FRAME uint F_0051ab70(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ab80 */
GEN_FRAME uint F_0051ab80(unsigned int gen_a0)
{
  GEN_ENTER(0x51ab80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ad80 */
GEN_FRAME uint GEN_STDCALL F_0051ad80(unsigned int gen_a0)
{
  GEN_ENTER(0x51ad80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ad90 */
GEN_FRAME uint GEN_THISCALL F_0051ad90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ad90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051adc0 */
GEN_FRAME uint GEN_THISCALL F_0051adc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51adc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x10))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_0051adf0 */
GEN_FRAME byte F_0051adf0(void)
{
  GEN_ENTER(0x51adf0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051ae10 */
GEN_FRAME uint F_0051ae10(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae30 */
GEN_FRAME uint F_0051ae30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae40 */
GEN_FRAME uint GEN_THISCALL F_0051ae40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ae40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051ae60 */
GEN_FRAME uint F_0051ae60(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051ae70 */
GEN_FRAME uint GEN_THISCALL F_0051ae70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51ae70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051ae90 */
GEN_FRAME uint F_0051ae90(unsigned int gen_a0)
{
  GEN_ENTER(0x51ae90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aea0 */
GEN_FRAME uint GEN_THISCALL F_0051aea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051aec0 */
GEN_FRAME uint F_0051aec0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aed0 */
GEN_FRAME uint GEN_THISCALL F_0051aed0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aed0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051aef0 */
GEN_FRAME uint F_0051aef0(unsigned int gen_a0)
{
  GEN_ENTER(0x51aef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af00 */
GEN_FRAME uint GEN_THISCALL F_0051af00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af20 */
GEN_FRAME uint F_0051af20(unsigned int gen_a0)
{
  GEN_ENTER(0x51af20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af30 */
GEN_FRAME uint GEN_THISCALL F_0051af30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af50 */
GEN_FRAME uint F_0051af50(unsigned int gen_a0)
{
  GEN_ENTER(0x51af50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af60 */
GEN_FRAME uint GEN_THISCALL F_0051af60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051af80 */
GEN_FRAME uint F_0051af80(unsigned int gen_a0)
{
  GEN_ENTER(0x51af80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051af90 */
GEN_FRAME uint GEN_THISCALL F_0051af90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51af90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051afb0 */
GEN_FRAME uint F_0051afb0(unsigned int gen_a0)
{
  GEN_ENTER(0x51afb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051afc0 */
GEN_FRAME uint GEN_THISCALL F_0051afc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51afc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051afe0 */
GEN_FRAME uint F_0051afe0(unsigned int gen_a0)
{
  GEN_ENTER(0x51afe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051aff0 */
GEN_FRAME uint GEN_THISCALL F_0051aff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51aff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b010 */
GEN_FRAME uint F_0051b010(unsigned int gen_a0)
{
  GEN_ENTER(0x51b010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b020 */
GEN_FRAME uint GEN_THISCALL F_0051b020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51b020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b040 */
GEN_FRAME uint F_0051b040(unsigned int gen_a0)
{
  GEN_ENTER(0x51b040u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b050 */
GEN_FRAME uint GEN_THISCALL F_0051b050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51b050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_0051b080 */
GEN_FRAME uint GEN_STDCALL F_0051b080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0051b0c0 */
GEN_FRAME uint GEN_THISCALL F_0051b0c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b0c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b0e0 */
GEN_FRAME uint GEN_THISCALL F_0051b0e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b100 */
GEN_FRAME uint GEN_THISCALL F_0051b100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b120 */
GEN_FRAME uint GEN_THISCALL F_0051b120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b140 */
GEN_FRAME uint GEN_THISCALL F_0051b140(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b160 */
GEN_FRAME uint GEN_THISCALL F_0051b160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b180 */
GEN_FRAME uint GEN_THISCALL F_0051b180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_0051b1a0 */
GEN_FRAME uint GEN_THISCALL F_0051b1a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b1a0u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)this;
}

/* ref: FUN_0051b210 */
GEN_FRAME uint GEN_THISCALL F_0051b210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051b250 */
GEN_FRAME uint GEN_THISCALL F_0051b250(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b250u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_0051b270 */
GEN_FRAME byte GEN_THISCALL F_0051b270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051b2c0 */
GEN_FRAME uint F_0051b2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b2c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b2d0 */
GEN_FRAME uint GEN_THISCALL F_0051b2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b2d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*in_ecx < *param_2);
}

/* ref: FUN_0051b2f0 */
GEN_FRAME uint F_0051b2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b2f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_0051b330 */
GEN_FRAME uint GEN_STDCALL F_0051b330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_0051b350 */
GEN_FRAME uint F_0051b350(unsigned int gen_a0)
{
  GEN_ENTER(0x51b350u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b360 */
GEN_FRAME uint F_0051b360(unsigned int gen_a0)
{
  GEN_ENTER(0x51b360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b370 */
GEN_FRAME uint F_0051b370(unsigned int gen_a0)
{
  GEN_ENTER(0x51b370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b380 */
GEN_FRAME byte F_0051b380(void)
{
  GEN_ENTER(0x51b380u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051b3d0 */
GEN_FRAME uint F_0051b3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51b3d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051b4b0 */
GEN_NOFRAME uint GEN_THISCALL F_0051b4b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51b4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b4f0 */
GEN_NOFRAME uint GEN_THISCALL F_0051b4f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51b4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 8));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 8) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b570 */
GEN_NOFRAME uint GEN_THISCALL F_0051b570(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51b570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return uVar1;
}

/* ref: FUN_0051b590 */
GEN_FRAME byte F_0051b590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b590u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 != *param_2;
}

/* ref: FUN_0051b5b0 */
GEN_FRAME uint F_0051b5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b5b0u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051b5f0 */
GEN_FRAME byte F_0051b5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b5f0u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  return *param_1 == *param_2;
}

/* ref: FUN_0051b610 */
GEN_FRAME byte GEN_THISCALL F_0051b610(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b610u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx == param_2;
}

/* ref: FUN_0051b630 */
GEN_FRAME uint F_0051b630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51b630u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051b6c0 */
GEN_FRAME uint GEN_THISCALL F_0051b6c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b6c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x5c) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x5c) = *(uint *)(in_ecx + 0x5c) ^ uVar1;
  return uVar1;
}

/* ref: FUN_0051b710 */
GEN_FRAME uint GEN_THISCALL F_0051b710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1 == 1) {
    piVar2 = (int *)((int)this + 0x88);
    iVar1 = _InterlockedExchangeAdd((volatile long *)(piVar2), 0);
    if (iVar1 != 3) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0051b740 */
GEN_FRAME uint GEN_THISCALL F_0051b740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)(((uint *)(in_ecx + 0x88))), (long)(param_2));
  return uVar1;
}

/* ref: FUN_0051b760 */
GEN_FRAME uint GEN_THISCALL F_0051b760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = _InterlockedExchange((volatile long *)(((uint *)((int)this + 0x90))), (long)(param_1));
  *(undefined4 *)((int)this + 0x34) = 0xffffffec;
  return uVar1;
}

/* ref: FUN_0051b780 */
GEN_FRAME byte GEN_THISCALL F_0051b780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_FWD);
    if (uVar1 == 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_0051b7b0 */
GEN_FRAME byte GEN_THISCALL F_0051b7b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*param_1 == 0xb) && (1 < (uint)param_1[0x13])) {
    uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0xa4))(this GEN_EDX_FWD);
    if (uVar1 == 2) {
      return 1;
    }
  }
  return 0;
}

/* ref: Client::System::Resource::Handle::ResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051b8a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051b8f0 */
GEN_FRAME byte GEN_THISCALL F_0051b8f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b8f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0051b930 */
GEN_FRAME unsigned int GEN_THISCALL F_0051b930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51b930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  while (param_1 < uVar1) {
    LOCK();
    if (uVar1 == *(uint *)this) {
      *(uint *)this = param_1;
    }
    UNLOCK();
    uVar1 = *(uint *)this;
  }
  return 0;
}

/* ref: FUN_0051b970 */
GEN_FRAME unsigned int GEN_THISCALL F_0051b970(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x51b970u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  uint local_c;
  
  uVar1 = *(uint *)(param_1 + 4);
  local_c = (uint)(longlong)
                  TRUNC((float10)REFG(double, 0x10944b8) * ((float10)param_2 * (float10)REFG(double, 0x10944b8)));
  while (local_c < uVar1) {
    LOCK();
    if (uVar1 == *(uint *)(param_1 + 4)) {
      *(uint *)(param_1 + 4) = local_c;
    }
    UNLOCK();
    uVar1 = *(uint *)(param_1 + 4);
  }
  return 0;
}

/* ref: FUN_0051ba30 */
GEN_FRAME unsigned int F_0051ba30(unsigned int gen_a0)
{
  GEN_ENTER(0x51ba30u, gen_a0, 0u, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  char * pcVar3;
  
  cVar1 = *param_1;
  pcVar3 = param_1;
  while (cVar1 != '\0') {
    iVar2 = F_00c4ef4f((int)*pcVar3);
    *pcVar3 = (char)iVar2;
    pcVar3 = pcVar3 + 1;
    cVar1 = *pcVar3;
  }
  return;
}

/* ref: FUN_0051ba80 */
GEN_FRAME uint GEN_THISCALL F_0051ba80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51ba80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xb0) + param_2;
}

/* ref: FUN_0051bab0 */
GEN_FRAME uint GEN_THISCALL F_0051bab0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xa8) + 4 + param_1 * 8))) +
         *(int *)((int)this + 0xb0);
}

/* ref: FUN_0051bad0 */
GEN_FRAME uint GEN_THISCALL F_0051bad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xa8) + param_2 * 8)));
}

/* ref: FUN_0051baf0 */
GEN_FRAME uint GEN_THISCALL F_0051baf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51baf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return (uint)*((ushort *)GEN_TOP((*(int *)((int)this + 0xac) + (uint)(byte)param_1 * 4))) +
         *(int *)((int)this + 0xb0);
}

/* ref: FUN_0051bb10 */
GEN_FRAME byte GEN_THISCALL F_0051bb10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bb10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xac) + 2 + (uint)(byte)param_2 * 4)));
}

/* ref: FUN_0051bb80 */
GEN_FRAME uint GEN_THISCALL F_0051bb80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if (param_1 < *(ushort *)((int)this + 0x1c)) {
    return *((uint *)GEN_TOP((*(int *)((int)this + 0x18) + 4 + param_1 * 0xc)));
  }
  return 0;
}

/* ref: FUN_0051bc10 */
GEN_FRAME uint GEN_THISCALL F_0051bc10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bc10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  return uVar1 + 4 + (uint)(ushort)param_1 * 8;
}

/* ref: FUN_0051bc40 */
GEN_NOFRAME uint GEN_THISCALL F_0051bc40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51bc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 4 + *piVar2 * 8;
}

/* ref: FUN_0051bc60 */
GEN_FRAME uint GEN_THISCALL F_0051bc60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bc60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 4 + ((uint)(ushort)param_1 + *piVar2) * 8;
}

/* ref: FUN_0051bcc0 */
GEN_NOFRAME uint GEN_THISCALL F_0051bcc0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51bcc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  uVar1 = ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_FWD);
  piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x5c))(this GEN_EDX_ARG)));
  return uVar1 + 4 + *piVar2 * 4;
}

/* ref: FUN_0051bd50 */
GEN_FRAME byte GEN_THISCALL F_0051bd50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bd50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  switch((unsigned int)(uintptr_t)(*param_2)) {
  case 0: ;
    return (byte)(*in_ecx >> 2) & 1;
  case 1: ;
    return (byte)(*in_ecx >> 4) & 1;
  case 2: ;
    return (byte)(*in_ecx >> 3) & 1;
  case 3: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::ILoadMotionPackAttributeChecker::vf1 */
GEN_NOFRAME byte F_0051bdd0(void)
{
  GEN_ENTER(0x51bdd0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandle::ILoadMotionPackAttributeChecker::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051bde0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bde0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x1099414));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_0051be40 */
GEN_FRAME uint GEN_THISCALL F_0051be40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51be40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  return 0x10;
}

/* ref: FUN_0051bec0 */
GEN_FRAME uint GEN_THISCALL F_0051bec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)((int)this + 0x20) = *param_1;
  *(undefined4 *)((int)this + 0x24) = param_1[1];
  *(undefined4 *)((int)this + 0x28) = param_1[2];
  *(undefined4 *)((int)this + 0x2c) = param_1[3];
  *(undefined4 *)((int)this + 0x30) = param_1[4];
  *(undefined4 *)((int)this + 0x34) = param_1[5];
  *(undefined4 *)((int)this + 0x38) = param_1[6];
  F_00c49908(this,0x20,param_1 + 7);
  return 0x2c;
}

/* ref: FUN_0051bf10 */
GEN_FRAME uint GEN_THISCALL F_0051bf10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00c49908(this,0x20,param_1);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x28);
  return 0x30;
}

/* ref: FUN_0051bf60 */
GEN_FRAME uint GEN_THISCALL F_0051bf60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00c49908(this,0x20,param_1);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return 0x40;
}

/* ref: FUN_0051bfd0 */
GEN_FRAME uint GEN_THISCALL F_0051bfd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bfd0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0051bfe0 */
GEN_FRAME uint GEN_THISCALL F_0051bfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51bfe0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_0051bff0 */
GEN_FRAME uint F_0051bff0(unsigned int gen_a0)
{
  GEN_ENTER(0x51bff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051c020 */
GEN_FRAME uint GEN_STDCALL F_0051c020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c020u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_0051c040 */
GEN_FRAME byte GEN_THISCALL F_0051c040(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051c090 */
GEN_FRAME uint GEN_STDCALL F_0051c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c0e0 */
GEN_FRAME uint GEN_STDCALL F_0051c0e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c0e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x3c,0xd6);
  return (uint)uVar1;
}

/* ref: FUN_0051c110 */
GEN_FRAME uint GEN_THISCALL F_0051c110(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c110u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c130 */
GEN_FRAME uint GEN_STDCALL F_0051c130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c160 */
GEN_FRAME uint F_0051c160(unsigned int gen_a0)
{
  GEN_ENTER(0x51c160u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_0051c170 */
GEN_FRAME uint F_0051c170(unsigned int gen_a0)
{
  GEN_ENTER(0x51c170u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_0051c180 */
GEN_FRAME uint F_0051c180(unsigned int gen_a0)
{
  GEN_ENTER(0x51c180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c190 */
GEN_FRAME uint F_0051c190(unsigned int gen_a0)
{
  GEN_ENTER(0x51c190u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0051c1a0 */
GEN_FRAME uint F_0051c1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c1a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0051c1b0 */
GEN_FRAME uint GEN_STDCALL F_0051c1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c1b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0xcb);
  return uVar1;
}

/* ref: FUN_0051c1e0 */
GEN_FRAME uint GEN_THISCALL F_0051c1e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c1f0 */
GEN_FRAME byte GEN_THISCALL F_0051c1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_0051c210 */
GEN_FRAME byte GEN_THISCALL F_0051c210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_0051c240 */
GEN_FRAME uint F_0051c240(unsigned int gen_a0)
{
  GEN_ENTER(0x51c240u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051c260 */
GEN_FRAME uint F_0051c260(unsigned int gen_a0)
{
  GEN_ENTER(0x51c260u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051c290 */
GEN_FRAME uint F_0051c290(unsigned int gen_a0)
{
  GEN_ENTER(0x51c290u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x38;
}

/* ref: FUN_0051c2a0 */
GEN_FRAME uint F_0051c2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x39;
}

/* ref: FUN_0051c2b0 */
GEN_FRAME uint F_0051c2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c2c0 */
GEN_FRAME uint F_0051c2c0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_0051c2d0 */
GEN_FRAME uint F_0051c2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_0051c2e0 */
GEN_FRAME uint F_0051c2e0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_0051c2f0 */
GEN_FRAME uint F_0051c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x51c2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x39)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x39);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_0051c310 */
GEN_FRAME uint F_0051c310(unsigned int gen_a0)
{
  GEN_ENTER(0x51c310u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x39);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x39);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_0051c350 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0051c350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51c350u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_0051c3a0 */
GEN_FRAME uint GEN_THISCALL F_0051c3a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0051c3b0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_0051c3b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0x51c3b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x39) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x39) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x39);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x39);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x39);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x39);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_0051c400 */
GEN_FRAME uint F_0051c400(unsigned int gen_a0)
{
  GEN_ENTER(0x51c400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c410 */
GEN_FRAME uint F_0051c410(unsigned int gen_a0)
{
  GEN_ENTER(0x51c410u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c430 */
GEN_FRAME uint F_0051c430(unsigned int gen_a0)
{
  GEN_ENTER(0x51c430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_0051c460 */
GEN_FRAME uint GEN_STDCALL F_0051c460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x51c460u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xcb);
  return (uint)uVar1;
}

/* ref: FUN_0051c490 */
GEN_FRAME byte F_0051c490(void)
{
  GEN_ENTER(0x51c490u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051c4a0 */
GEN_FRAME uint F_0051c4a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x51c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_0051c4e0 */
GEN_FRAME byte F_0051c4e0(void)
{
  GEN_ENTER(0x51c4e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_0051c520 */
GEN_FRAME uint GEN_THISCALL F_0051c520(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x104);
  F_00c49908((undefined *)((int)this + 4),0x103,param_1);
  *(int *)this = *(int *)this + 1;
  return (uint)this;
}

/* ref: FUN_0051c570 */
GEN_FRAME uint GEN_THISCALL F_0051c570(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((int *)GEN_TOP((*(int *)((int)this + 0xd4) + (uint)(ushort)param_1 * 4))) + 8 +
         *(int *)((int)this + 0xa8);
}

/* ref: Client::System::Resource::Handle::ModelResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c5a0(void)
{
  GEN_ENTER(0x51c5a0u, 0u, 0u, 0u, 0u);
  return 0x180;
}

/* ref: Client::System::Resource::Handle::ModelResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c5c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c610(void)
{
  GEN_ENTER(0x51c610u, 0u, 0u, 0u, 0u);
  return 0x104;
}

/* ref: Client::System::Resource::Handle::TextureResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c670(void)
{
  GEN_ENTER(0x51c670u, 0u, 0u, 0u, 0u);
  return 0xc4;
}

/* ref: Client::System::Resource::Handle::MaterialResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c6c0(void)
{
  GEN_ENTER(0x51c6c0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ShaderCodeResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c6e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c730(void)
{
  GEN_ENTER(0x51c730u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ShaderPackageResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c740(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c780(void)
{
  GEN_ENTER(0x51c780u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::TerrainResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c7a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c7f0(void)
{
  GEN_ENTER(0x51c7f0u, 0u, 0u, 0u, 0u);
  return 0x104;
}

/* ref: Client::System::Resource::Handle::GrassZoneDataResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c850(void)
{
  GEN_ENTER(0x51c850u, 0u, 0u, 0u, 0u);
  return 0x3c4;
}

/* ref: Client::System::Resource::Handle::GrassGridDataResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c8a0(void)
{
  GEN_ENTER(0x51c8a0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::EnvSetResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c8c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c900(void)
{
  GEN_ENTER(0x51c900u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::SoundSetResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c960(void)
{
  GEN_ENTER(0x51c960u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::AmbientSetResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051c9c0(void)
{
  GEN_ENTER(0x51c9c0u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ObjectBehaviorSetResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051c9e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51c9e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051ca20(void)
{
  GEN_ENTER(0x51ca20u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::SkyVisibilityResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051ca40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51ca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051ca80(void)
{
  GEN_ENTER(0x51ca80u, 0u, 0u, 0u, 0u);
  return 0xa4;
}

/* ref: Client::System::Resource::Handle::ClipAABBResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051caa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51caa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cae0(void)
{
  GEN_ENTER(0x51cae0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::AttachOffsetResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cb00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cb00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cb50(void)
{
  GEN_ENTER(0x51cb50u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::PreBoneDeformerResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cb60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cbb0(void)
{
  GEN_ENTER(0x51cbb0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::EquipmentParameterResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cbc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cbc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cc10(void)
{
  GEN_ENTER(0x51cc10u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::CharaMakeParameterResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cc20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cc70(void)
{
  GEN_ENTER(0x51cc70u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ImageChangeDataResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cc80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cc80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051ccd0(void)
{
  GEN_ENTER(0x51ccd0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::ExSkeletonTableResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cce0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cd30(void)
{
  GEN_ENTER(0x51cd30u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::EquipmentDeformerParameterResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cd40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cd40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cd90(void)
{
  GEN_ENTER(0x51cd90u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponTypeDataResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cda0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cda0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cdf0(void)
{
  GEN_ENTER(0x51cdf0u, 0u, 0u, 0u, 0u);
  return 0xa0;
}

/* ref: Client::System::Resource::Handle::WeaponAttachOffsetExistResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051ce00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51ce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051ce50(void)
{
  GEN_ENTER(0x51ce50u, 0u, 0u, 0u, 0u);
  return 0x110;
}

/* ref: Client::System::Resource::Handle::SkeletonResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051ce60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51ce60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051ceb0(void)
{
  GEN_ENTER(0x51ceb0u, 0u, 0u, 0u, 0u);
  return 0xec;
}

/* ref: Client::System::Resource::Handle::PartialAnimationPackResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cf00(void)
{
  GEN_ENTER(0x51cf00u, 0u, 0u, 0u, 0u);
  return 0xe0;
}

/* ref: Client::System::Resource::Handle::LookAtIkResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cf20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cf60(void)
{
  GEN_ENTER(0x51cf60u, 0u, 0u, 0u, 0u);
  return 0x1d4;
}

/* ref: Client::System::Resource::Handle::AutoShakeIkResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cf80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cf80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051cfd0(void)
{
  GEN_ENTER(0x51cfd0u, 0u, 0u, 0u, 0u);
  return 0x108;
}

/* ref: Client::System::Resource::Handle::SkeletonParamResourceHandleFactory::vf0 */
GEN_FRAME uint GEN_THISCALL F_0051cfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0x51cfe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10993b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Resource::Handle::ResidentPapTableResourceHandleFactory::vf2 */
GEN_NOFRAME uint F_0051d030(void)
{
  GEN_ENTER(0x51d030u, 0u, 0u, 0u, 0u);
  return 200;
}

