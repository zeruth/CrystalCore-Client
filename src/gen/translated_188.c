#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00e427f0 */
GEN_FRAME uint GEN_STDCALL F_00e427f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe427f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00e42820 */
GEN_NOFRAME uint GEN_THISCALL F_00e42820(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42820u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e42880 */
GEN_FRAME uint F_00e42880(unsigned int gen_a0)
{
  GEN_ENTER(0xe42880u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42890 */
GEN_FRAME uint GEN_THISCALL F_00e42890(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e428b0 */
GEN_FRAME uint F_00e428b0(unsigned int gen_a0)
{
  GEN_ENTER(0xe428b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e428c0 */
GEN_FRAME uint F_00e428c0(unsigned int gen_a0)
{
  GEN_ENTER(0xe428c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e428d0 */
GEN_FRAME uint GEN_THISCALL F_00e428d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe428d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e428f0 */
GEN_FRAME uint F_00e428f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe428f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42900 */
GEN_FRAME uint GEN_THISCALL F_00e42900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42900u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42920 */
GEN_FRAME uint F_00e42920(unsigned int gen_a0)
{
  GEN_ENTER(0xe42920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42930 */
GEN_FRAME uint GEN_THISCALL F_00e42930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42930u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42950 */
GEN_FRAME unsigned int GEN_STDCALL F_00e42950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe42950u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e42970 */
GEN_FRAME uint F_00e42970(unsigned int gen_a0)
{
  GEN_ENTER(0xe42970u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42980 */
GEN_FRAME uint GEN_STDCALL F_00e42980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe42980u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e429d0 */
GEN_FRAME uint F_00e429d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe429d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e429e0 */
GEN_FRAME byte F_00e429e0(void)
{
  GEN_ENTER(0xe429e0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e429f0 */
GEN_FRAME byte F_00e429f0(void)
{
  GEN_ENTER(0xe429f0u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00e42a00 */
GEN_FRAME uint F_00e42a00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42a00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e42a40 */
GEN_FRAME unsigned int F_00e42a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe42a40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e42a60 */
GEN_FRAME uint F_00e42a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe42a60u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e42aa0 */
GEN_FRAME uint F_00e42aa0(unsigned int gen_a0)
{
  GEN_ENTER(0xe42aa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42ad0 */
GEN_FRAME uint F_00e42ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xe42ad0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42ae0 */
GEN_FRAME uint GEN_THISCALL F_00e42ae0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe42ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42af0 */
GEN_NOFRAME uint GEN_THISCALL F_00e42af0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e42b10 */
GEN_FRAME byte GEN_THISCALL F_00e42b10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe42b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e42b30 */
GEN_FRAME uint GEN_THISCALL F_00e42b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e42b40 */
GEN_FRAME uint F_00e42b40(unsigned int gen_a0)
{
  GEN_ENTER(0xe42b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42b60 */
GEN_FRAME uint F_00e42b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42b60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42ba0 */
GEN_FRAME uint F_00e42ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42ba0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42bf0 */
GEN_FRAME uint F_00e42bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42bf0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e42c20 */
GEN_FRAME uint F_00e42c20(unsigned int gen_a0)
{
  GEN_ENTER(0xe42c20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42c30 */
GEN_FRAME uint GEN_THISCALL F_00e42c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42c70 */
GEN_FRAME uint F_00e42c70(unsigned int gen_a0)
{
  GEN_ENTER(0xe42c70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42c80 */
GEN_FRAME uint F_00e42c80(unsigned int gen_a0)
{
  GEN_ENTER(0xe42c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42c90 */
GEN_FRAME uint F_00e42c90(unsigned int gen_a0)
{
  GEN_ENTER(0xe42c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e42ca0 */
GEN_FRAME uint GEN_THISCALL F_00e42ca0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe42ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e42cc0 */
GEN_FRAME uint GEN_THISCALL F_00e42cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe42cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)((int)this + 5) = *(undefined1 *)((int)param_1 + 5);
  *(undefined2 *)((int)this + 6) = *(undefined2 *)((int)param_1 + 6);
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  F_0042cbc0((undefined *)((int)this + 0x18) GEN_EDX_FWD,param_1 + 6);
  F_0042cbc0((undefined *)((int)this + 0x6c) GEN_EDX_ARG,param_1 + 0x1b);
  F_00e78fe0((undefined *)((int)this + 0xc0) GEN_EDX_ARG,param_1 + 0x30);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc0) = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4))
  ;
  F_00f41280((undefined *)((int)this + 0xf0) GEN_EDX_ARG,param_1 + 0x3c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0xf0) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f694));
  F_00e5ecd0((undefined *)((int)this + 0x1d8) GEN_EDX_ARG,param_1 + 0x76);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x1d8) = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
  F_00f01060((undefined *)((int)this + 0x200) GEN_EDX_ARG,param_1 + 0x80);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x200) =
       (*(undefined * PTR32 (*)[27])REFP(0x110f704));
  return (uint)this;
}

/* ref: FUN_00e42da0 */
GEN_FRAME uint GEN_THISCALL F_00e42da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe42da0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e37370(this GEN_EDX_FWD,param_1);
  *(undefined1 *)((int)this + 0x58) = (undefined1)param_2;
  *(undefined1 *)((int)this + 0x59) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00e42dd0 */
GEN_NOFRAME uint GEN_THISCALL F_00e42dd0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42dd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e37350(this GEN_EDX_FWD);
  *(undefined2 *)((int)this + 0x58) = 0;
  return (uint)this;
}

/* ref: FUN_00e42df0 */
GEN_FRAME uint GEN_THISCALL F_00e42df0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe42df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[40])REFP(0x115797c));
  F_00e37370((undefined *)((int)this + 0x14) GEN_EDX_ARG,param_1);
  *(undefined1 *)((int)this + 0x6c) = *(undefined1 *)(param_1 + 0x58);
  *(undefined1 *)((int)this + 0x6d) = *(undefined1 *)(param_1 + 0x59);
  return (uint)this;
}

/* ref: FUN_00e42e40 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e42e40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_FWD);
  F_00e3c0c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e42e60 */
GEN_FRAME uint GEN_THISCALL F_00e42e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe42e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[40])REFP(0x1157a24));
  F_0042cbc0((undefined *)((int)this + 0x14) GEN_EDX_ARG,param_1);
  F_0042cbc0((undefined *)((int)this + 0x68) GEN_EDX_ARG,param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00e42ec0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e42ec0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe42ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042c880((undefined *)((int)this + 0x68) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x14) GEN_EDX_ARG);
  F_00e3c0c0(this GEN_EDX_ARG);
  return;
}

/* ref: FUN_00e42ee0 */
GEN_FRAME uint GEN_THISCALL F_00e42ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe42ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[40])REFP(0x1157acc));
  puVar2 = param_1;
  puVar3 = (undefined4 *)((int)this + 0x18);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 - 1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf13 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e42f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xe42f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  return;
}

/* ref: FUN_00e42f50 */
GEN_FRAME uint GEN_THISCALL F_00e42f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe42f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[40])REFP(0x1157b74));
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return (uint)this;
}

/* ref: FUN_00e42fa0 */
GEN_FRAME uint GEN_THISCALL F_00e42fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe42fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00e3c0b0(this GEN_EDX_FWD);
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 4) = 3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined1 *)((int)this + 0x10) = (undefined1)param_3;
  *(undefined1 *)((int)this + 0x11) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[40])REFP(0x1157c1c));
  *(undefined4 *)((int)this + 0x14) = *param_1;
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::InitOperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e42ff0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe42ff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x14 GEN_EDX_FWD);
  F_00e3c0c0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyLoginOperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e43020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this + 0x68 GEN_EDX_FWD);
  F_0042c880(this + 0x14 GEN_EDX_ARG);
  F_00e3c0c0(this GEN_EDX_ARG);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::ServiceLoginOperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e43060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c0c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::GameLoginOperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e43090(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c0c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::LobbyCharaOperationStep::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e430c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe430c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3c0c0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e430f0 */
GEN_NOFRAME uint GEN_THISCALL F_00e430f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe430f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00efc530((int)this + 0x210 GEN_EDX_FWD);
  F_00e5bc00((int)this + 0x1e8 GEN_EDX_ARG);
  F_00f36370((int)this + 0x100 GEN_EDX_ARG);
  F_00e75880((int)this + 0xd0 GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x7c) GEN_EDX_ARG);
  uVar1 = F_0042c880((undefined *)((int)this + 0x28) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  return (uint)uVar1;
}

/* ref: FUN_00e43140 */
GEN_NOFRAME uint GEN_THISCALL F_00e43140(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x74) GEN_EDX_FWD);
  uVar1 = F_0042c880((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  return (uint)uVar1;
}

/* ref: FUN_00e43180 */
GEN_FRAME byte GEN_THISCALL F_00e43180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e431a0 */
GEN_FRAME uint GEN_THISCALL F_00e431a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe431a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
  F_00e42cc0((undefined *)((int)this + 0x10) GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: CharaMakeParamTmpl_UNormalPlayerCharacterParam__CharaMakeParam_LobbyClient_Network_Application::vf1 */
GEN_NOFRAME uint GEN_THISCALL F_00e431d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe431d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = (undefined4 *)F_004069f0(0x2c0);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = (*(undefined * PTR32 (*)[2])REFP(0x1157cc0));
    F_00e42cc0(puVar1 + 4 GEN_EDX_ARG,(int)this + 0x10);
    puVar2 = puVar1;
  }
  return (uint)puVar2;
}

/* ref: FUN_00e43210 */
GEN_FRAME byte GEN_THISCALL F_00e43210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: CharaMakeParamTmpl_UNormalPlayerCharacterParam__CharaMakeParam_LobbyClient_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e43230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00efc530((int)this + 0x210 GEN_EDX_FWD);
  F_00e5bc00((int)this + 0x1e8 GEN_EDX_ARG);
  F_00f36370((int)this + 0x100 GEN_EDX_ARG);
  F_00e75880((int)this + 0xd0 GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x7c) GEN_EDX_ARG);
  F_0042c880((undefined *)((int)this + 0x28) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1157840));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: GameLoginParamTmpl_UNormalPlayerCharacterParam__GameLoginParam_LobbyClient_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e43290(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x74) GEN_EDX_FWD);
  F_0042c880((undefined *)((int)this + 0x20) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x115784c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e43350 */
GEN_FRAME uint GEN_THISCALL F_00e43350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43350u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e433f0 */
GEN_FRAME uint GEN_THISCALL F_00e433f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe433f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e43460 */
GEN_FRAME uint F_00e43460(unsigned int gen_a0)
{
  GEN_ENTER(0xe43460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e43490 */
GEN_NOFRAME uint GEN_THISCALL F_00e43490(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e434b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e434b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe434b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e434d0 */
GEN_FRAME uint GEN_THISCALL F_00e434d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe434d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43510 */
GEN_FRAME uint GEN_THISCALL F_00e43510(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43550 */
GEN_FRAME uint GEN_THISCALL F_00e43550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e435a0 */
GEN_FRAME uint GEN_THISCALL F_00e435a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe435a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x28;
  if (0x6666666 - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e435f0 */
GEN_FRAME uint GEN_THISCALL F_00e435f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe435f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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

/* ref: FUN_00e43620 */
GEN_FRAME undefined4 * GEN_THISCALL F_00e43620(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43620u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e43650 */
GEN_FRAME uint GEN_THISCALL F_00e43650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43650u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43660 */
GEN_FRAME uint GEN_THISCALL F_00e43660(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43670 */
GEN_FRAME uint GEN_THISCALL F_00e43670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43670u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43680 */
GEN_FRAME uint GEN_THISCALL F_00e43680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43680u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e43690 */
GEN_FRAME uint GEN_THISCALL F_00e43690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43690u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e436a0 */
GEN_FRAME uint GEN_STDCALL F_00e436a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe436a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e436f0 */
GEN_FRAME uint GEN_STDCALL F_00e436f0(unsigned int gen_a0)
{
  GEN_ENTER(0xe436f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e43740 */
GEN_FRAME uint GEN_STDCALL F_00e43740(unsigned int gen_a0)
{
  GEN_ENTER(0xe43740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x30c30c4) && (uVar1 = F_004069f0(param_1 * 0x54), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e43790 */
GEN_FRAME uint GEN_STDCALL F_00e43790(unsigned int gen_a0)
{
  GEN_ENTER(0xe43790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x6666667) && (uVar1 = F_004069f0(param_1 * 0x28), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e437e0 */
GEN_FRAME uint GEN_STDCALL F_00e437e0(unsigned int gen_a0)
{
  GEN_ENTER(0xe437e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0x40000000) && (uVar1 = F_004069f0(param_1 * 4), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e43840 */
GEN_FRAME uint GEN_STDCALL F_00e43840(unsigned int gen_a0)
{
  GEN_ENTER(0xe43840u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e438a0 */
GEN_FRAME uint GEN_STDCALL F_00e438a0(unsigned int gen_a0)
{
  GEN_ENTER(0xe438a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e438f0 */
GEN_FRAME uint GEN_THISCALL F_00e438f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe438f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e42340(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e43910 */
GEN_FRAME uint GEN_THISCALL F_00e43910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e43930 */
GEN_FRAME byte GEN_THISCALL F_00e43930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43930u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e43950 */
GEN_FRAME byte GEN_THISCALL F_00e43950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e43970 */
GEN_FRAME uint GEN_THISCALL F_00e43970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43990 */
GEN_FRAME uint GEN_THISCALL F_00e43990(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439b0 */
GEN_FRAME uint GEN_THISCALL F_00e439b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe439b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439d0 */
GEN_FRAME uint GEN_THISCALL F_00e439d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe439d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e439f0 */
GEN_FRAME uint F_00e439f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe439f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a10 */
GEN_FRAME uint F_00e43a10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43a10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a30 */
GEN_FRAME unsigned int F_00e43a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43a50 */
GEN_FRAME uint F_00e43a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e43a90 */
GEN_FRAME uint F_00e43a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00e43ab0 */
GEN_FRAME uint F_00e43ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43ab0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00e43af0 */
GEN_FRAME unsigned int GEN_STDCALL F_00e43af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe43af0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43b10 */
GEN_FRAME uint GEN_STDCALL F_00e43b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe43b10u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e43b80 */
GEN_FRAME uint F_00e43b80(unsigned int gen_a0)
{
  GEN_ENTER(0xe43b80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e43ba0 */
GEN_NOFRAME uint GEN_THISCALL F_00e43ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e42820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43bb0 */
GEN_FRAME uint GEN_THISCALL F_00e43bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43bd0 */
GEN_FRAME uint F_00e43bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe43bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e43be0 */
GEN_FRAME uint F_00e43be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe43be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1[4] = puVar2[4];
    puVar1 = puVar1 + 5;
  }
  return (uint)puVar1;
}

/* ref: FUN_00e43c30 */
GEN_FRAME uint F_00e43c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43c30u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43c60 */
GEN_FRAME uint F_00e43c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43c60u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43c90 */
GEN_FRAME uint F_00e43c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43c90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e43cc0 */
GEN_FRAME uint GEN_THISCALL F_00e43cc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43ce0 */
GEN_FRAME uint GEN_THISCALL F_00e43ce0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ce0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e43d30 */
GEN_FRAME uint GEN_THISCALL F_00e43d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43d30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43d40 */
GEN_FRAME byte GEN_THISCALL F_00e43d40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e43d90 */
GEN_FRAME uint GEN_THISCALL F_00e43d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe43d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e43db0 */
GEN_FRAME unsigned int GEN_STDCALL F_00e43db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe43db0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e43dd0 */
GEN_FRAME uint GEN_STDCALL F_00e43dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe43dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00e43e20 */
GEN_FRAME uint GEN_THISCALL F_00e43e20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00e43e40 */
GEN_FRAME uint GEN_THISCALL F_00e43e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  F_0042cc20(this GEN_EDX_FWD,puVar1,REFG(undefined4, 0x108cc50));
  return (uint)this;
}

/* ref: FUN_00e43ee0 */
GEN_NOFRAME uint GEN_THISCALL F_00e43ee0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ee0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e42340(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43ef0 */
GEN_NOFRAME uint GEN_THISCALL F_00e43ef0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x50) + 4))) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *(undefined * PTR32 * PTR32 *)((int)this - 0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this - 0x4c) GEN_EDX_FWD);
  F_00479ae0((undefined *)((int)this - 0x4c) GEN_EDX_ARG);
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this - 0x50) + 4)));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((uVar1 - 0x50) + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  return uVar1;
}

/* ref: FUN_00e43f40 */
GEN_NOFRAME uint GEN_THISCALL F_00e43f40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe43f40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e423a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e43f50 */
GEN_FRAME uint GEN_THISCALL F_00e43f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43f50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43f60 */
GEN_FRAME uint GEN_THISCALL F_00e43f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43f60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e43f70 */
GEN_FRAME uint GEN_THISCALL F_00e43f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43f70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43f80 */
GEN_FRAME uint GEN_THISCALL F_00e43f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e43f90 */
GEN_FRAME uint GEN_THISCALL F_00e43f90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43f90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e43fa0 */
GEN_FRAME uint GEN_THISCALL F_00e43fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43fa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e43fb0 */
GEN_FRAME uint GEN_THISCALL F_00e43fb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe43fb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e44010 */
GEN_FRAME uint GEN_THISCALL F_00e44010(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44010u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e44070 */
GEN_FRAME uint GEN_THISCALL F_00e44070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44070u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e44080 */
GEN_FRAME uint GEN_THISCALL F_00e44080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  F_00479880(this GEN_EDX_FWD);
  uVar1 = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x3c) = 0;
  return (uint)this;
}

/* ref: FUN_00e440d0 */
GEN_FRAME uint GEN_THISCALL F_00e440d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe440d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e440e0 */
GEN_FRAME uint GEN_STDCALL F_00e440e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe440e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e440f0 */
GEN_FRAME uint GEN_STDCALL F_00e440f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe440f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44100 */
GEN_FRAME uint GEN_STDCALL F_00e44100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe44100u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44120 */
GEN_FRAME uint GEN_THISCALL F_00e44120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e44180 */
GEN_FRAME uint GEN_THISCALL F_00e44180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e441e0 */
GEN_FRAME byte GEN_THISCALL F_00e441e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe441e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e44200 */
GEN_FRAME byte GEN_THISCALL F_00e44200(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e44220 */
GEN_FRAME unsigned int F_00e44220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e44240 */
GEN_FRAME uint F_00e44240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e442a0 */
GEN_FRAME uint F_00e442a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe442a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_00e43be0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00e442c0 */
GEN_FRAME uint GEN_STDCALL F_00e442c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe442c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e442f0 */
GEN_FRAME uint GEN_STDCALL F_00e442f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe442f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e44320 */
GEN_FRAME uint GEN_STDCALL F_00e44320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44320u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  uVar2 = F_00c46e20(param_3,param_1,iVar1);
  return uVar2 + iVar1;
}

/* ref: FUN_00e44350 */
GEN_FRAME uint GEN_THISCALL F_00e44350(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xe44350u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (0x1ffffffd < *(uint *)((int)this + 8)) {
    F_00406ad0(param_4);
                    
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
  cVar1 = *(char *)(param_4[1] + 0x14);
  piVar4 = param_4;
  do {
    if (cVar1 != '\0') {
      iVar2 = *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)));
      *param_1 = param_4;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      return (uint)param_1;
    }
    piVar5 = (int *)piVar4[1];
    piVar6 = (int *)piVar5[1];
    if (piVar5 == (int *)*piVar6) {
      iVar2 = piVar6[2];
      if (*(char *)(iVar2 + 0x14) == '\0') {
        *(undefined1 *)(piVar5 + 5) = 1;
        *(undefined1 *)(iVar2 + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
      }
      else {
        if (piVar4 == (int *)piVar5[2]) {
          piVar4 = (int *)piVar5[2];
          piVar5[2] = *piVar4;
          if (*(char *)(*piVar4 + 0x15) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)*piVar5;
        *piVar5 = piVar6[2];
        if (*(char *)(piVar6[2] + 0x15) == '\0') {
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
LAB_00e4454d: ;
        piVar5[1] = (int)piVar6;
      }
    }
    else {
      iVar2 = *piVar6;
      if (*(char *)(iVar2 + 0x14) != '\0') {
        if (piVar4 == (int *)*piVar5) {
          iVar2 = *piVar5;
          *piVar5 = *(int *)(iVar2 + 8);
          if (*((char *)GEN_TOP((*(int *)(iVar2 + 8) + 0x15))) == '\0') {
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
        *(undefined1 *)(piVar4[1] + 0x14) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
        piVar5 = *(int * PTR32 *)(piVar4[1] + 4);
        piVar6 = (int *)piVar5[2];
        piVar5[2] = *piVar6;
        if (*(char *)(*piVar6 + 0x15) == '\0') {
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
        goto LAB_00e4454d;
      }
      *(undefined1 *)(piVar5 + 5) = 1;
      *(undefined1 *)(iVar2 + 0x14) = 1;
      *((undefined1 *)GEN_TOP((*(int *)(piVar4[1] + 4) + 0x14))) = 0;
      piVar4 = *(int * PTR32 *)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0x14);
  } while( true );
}

/* ref: FUN_00e44580 */
GEN_NOFRAME uint GEN_THISCALL F_00e44580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e42820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e44590 */
GEN_FRAME uint GEN_THISCALL F_00e44590(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44590u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00e445b0 */
GEN_FRAME uint F_00e445b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe445b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e445c0 */
GEN_FRAME uint GEN_THISCALL F_00e445c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe445c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: std::allocator<std::_Container_proxy>::construct_00e44600 */
GEN_FRAME unsigned int GEN_STDCALL F_00e44600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44600u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00e44620 */
GEN_FRAME unsigned int F_00e44620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00e44640 */
GEN_FRAME uint F_00e44640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
  }
  return (uint)param_2;
}

/* ref: FUN_00e44680 */
GEN_NOFRAME uint GEN_THISCALL F_00e44680(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * piVar1;
  uint extraout_EAX = 0;
  
  piVar1 = (undefined *)((int)this + 0x50);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this + 4) GEN_EDX_FWD);
  F_00479ae0((undefined *)((int)this + 4) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((piVar1 + *(int *)(*(int *)this + 4) - 0x50))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)piVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(piVar1);
  return extraout_EAX;
}

/* ref: FUN_00e446d0 */
GEN_FRAME uint GEN_THISCALL F_00e446d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe446d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e446f0 */
GEN_FRAME uint GEN_THISCALL F_00e446f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe446f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e44700 */
GEN_FRAME uint GEN_THISCALL F_00e44700(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44700u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e42340(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4481a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e41fe0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e41fc0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e4481a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e43350((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e43fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e448d8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e43350((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e448d8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e43fb0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e43350((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e44950 */
GEN_FRAME uint GEN_THISCALL F_00e44950(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e44970 */
GEN_FRAME uint GEN_THISCALL F_00e44970(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e44980 */
GEN_FRAME uint GEN_THISCALL F_00e44980(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44980u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e423a0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e44a9a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e420c0(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e420a0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e44a9a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e44010((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e433f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e44010((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e44b58: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e433f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e44b58;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e44010((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e433f0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e44bd0 */
GEN_FRAME uint GEN_THISCALL F_00e44bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = (int *)((int)this - 0x50);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*(int *)(*piVar1 + 4) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  *(undefined * PTR32 * PTR32 *)((int)this - 0x4c) =
       (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60((undefined *)((int)this - 0x4c) GEN_EDX_FWD);
  F_00479ae0((undefined *)((int)this - 0x4c) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this - 0x50) + 4))) - 0x50 + (int)this))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00e44c40 */
GEN_FRAME uint GEN_THISCALL F_00e44c40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe44c40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  int iVar1;
  
  if (param_2 != param_3) {
    iVar1 = (*(int *)((int)this + 4) - param_3 >> 2) * 4;
    F_00c46e20(param_2,param_3,iVar1);
    *(int *)((int)this + 4) = iVar1 + param_2;
    *param_1 = param_2;
    return (uint)param_1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e44ca0 */
GEN_NOFRAME uint GEN_THISCALL F_00e44ca0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe44ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e44cd0 */
GEN_FRAME uint GEN_THISCALL F_00e44cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d30 */
GEN_FRAME uint GEN_THISCALL F_00e44d30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e44d90 */
GEN_FRAME uint GEN_THISCALL F_00e44d90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe44d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
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

/* ref: FUN_00e44dd0 */
GEN_FRAME uint GEN_THISCALL F_00e44dd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44e80 */
GEN_FRAME uint GEN_THISCALL F_00e44e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44f30 */
GEN_FRAME uint GEN_THISCALL F_00e44f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x3fffffff < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = param_1;
  if ((uint)(*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2) < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 4);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00c46e20(uVar4,*(int *)this,(*(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2) * 4);
    iVar1 = *(int *)this;
    iVar2 = *(int *)((int)this + 4);
    if (iVar1 != 0) {
      F_00406ad0(iVar1);
    }
    uVar3 = uVar4 + param_1 * 4;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar3;
    *(uint *)((int)this + 4) = uVar4 + (iVar2 - iVar1 >> 2) * 4;
  }
  return uVar3;
}

/* ref: FUN_00e44fe0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e44fe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe44fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e44fe0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00e45020 */
GEN_FRAME unsigned int GEN_THISCALL F_00e45020(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e45020(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00e45060 */
GEN_FRAME uint GEN_THISCALL F_00e45060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45060u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
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
    } while (*(char *)((int)puVar1 + 0x15) == '\0');
  }
  (*(undefined4 * PTR32 *)&gen_args[3]) = puVar2;
  if (bVar3 != false) {
    if (puVar2 == ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)))))) {
      puVar2 = (undefined4 *)F_00e44350((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD,&(*(undefined4 * PTR32 *)&gen_args[3]),1,puVar2,(*(int *)&gen_args[2]));
      *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
      *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
      return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
    }
    F_00e42820(&(*(undefined4 * PTR32 *)&gen_args[3]) GEN_EDX_ARG);
  }
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[3]);
  if ((uint)(*(undefined4 * PTR32 *)&gen_args[3])[3] < *(uint *)((*(int *)&gen_args[2]) + 0xc)) {
    puVar2 = (undefined4 *)F_00e44350((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,&(*(undefined4 * PTR32 *)&gen_args[3]),(*(undefined4 *)(gen_frame + 0x8)),puVar2,(*(int *)&gen_args[2]));
    *(*(undefined4 * PTR32 *)&gen_args[1]) = *puVar2;
    *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 1;
    return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
  }
  F_00406ad0((*(int *)&gen_args[2]));
  *(*(undefined4 * PTR32 *)&gen_args[1]) = puVar1;
  *((undefined1 *)GEN_TOP(((*(undefined4 * PTR32 *)&gen_args[1]) + 1))) = 0;
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e45140 */
GEN_FRAME uint F_00e45140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  code * param_4 = (code *)(uintptr_t)gen_a3;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  
  piVar3 = param_2;
  while ((piVar3 != param_3 && (uVar5 = (*param_4)(piVar3[3],piVar3[4]), (char)uVar5 == '\0'))) {
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        piVar3 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          piVar3 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((piVar3 = piVar4, cVar1 == '\0' && (piVar2 == (int *)piVar3[2]))) {
          cVar1 = *(char *)(piVar3[1] + 0x15);
          piVar4 = (int *)piVar3[1];
          piVar2 = piVar3;
        }
      }
    }
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00e451f0 */
GEN_FRAME unsigned int F_00e451f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe451f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00e45210 */
GEN_FRAME unsigned int F_00e45210(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45210u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar1 = param_3;
  for (puVar3 = param_1; puVar3 != param_2; puVar3 = puVar3 + 0x15) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar4 = puVar3;
      puVar5 = puVar1;
      for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
    puVar1 = puVar1 + 0x15;
  }
  return 0;
}

/* ref: FUN_00e45250 */
GEN_FRAME unsigned int F_00e45250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xe45250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * param_3 = (undefined8 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined8 * puVar1;
  undefined8 * puVar2;
  
  puVar1 = param_3;
  for (puVar2 = param_1; puVar2 != param_2; puVar2 = puVar2 + 5) {
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      puVar1[2] = puVar2[2];
      puVar1[3] = puVar2[3];
      puVar1[4] = puVar2[4];
    }
    puVar1 = puVar1 + 5;
  }
  return 0;
}

/* ref: FUN_00e452a0 */
GEN_NOFRAME uint GEN_THISCALL F_00e452a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe452a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e452d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e452d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe452d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != *(int *)((int)this + 4)) {
    F_00c46e20(iVar1,*(int *)((int)this + 4),0);
    *(int *)((int)this + 4) = iVar1;
  }
  return;
}

/* ref: FUN_00e45300 */
GEN_FRAME uint GEN_THISCALL F_00e45300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x15) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if ((int)puVar1[3] < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x15) == '\0');
  }
  if ((puVar3 != *(undefined4 * PTR32 *)((int)this + 4)) && ((int)puVar3[3] <= *param_2)) {
    *param_1 = puVar3;
    return (uint)param_1;
  }
  *param_1 = *(undefined4 * PTR32 *)((int)this + 4);
  return (uint)param_1;
}

/* ref: FUN_00e45370 */
GEN_FRAME uint GEN_THISCALL F_00e45370(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44dd0(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44dd0(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e453e0 */
GEN_FRAME uint GEN_THISCALL F_00e453e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe453e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44e80(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44e80(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e45450 */
GEN_FRAME uint GEN_THISCALL F_00e45450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (0x3fffffffU - param_1 < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (0x3fffffff - (uVar2 >> 1) < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_00e44f30(this GEN_EDX_ARG,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_00e44f30(this GEN_EDX_ARG,uVar2);
  }
  return uVar1;
}

/* ref: FUN_00e454c0 */
GEN_NOFRAME uint GEN_THISCALL F_00e454c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe454c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e44fe0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e45510 */
GEN_NOFRAME uint GEN_THISCALL F_00e45510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e45020(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e45560 */
GEN_FRAME uint F_00e45560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_00e45140(((undefined1 *)(gen_frame + 0x8)),param_2,param_3,param_4);
  *param_1 = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e455b0 */
GEN_FRAME uint GEN_THISCALL F_00e455b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe455b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_1;
      puVar1[4] = param_1[1];
    }
    return (uint)puVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e45610 */
GEN_FRAME unsigned int F_00e45610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45610u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00e45650 */
GEN_FRAME unsigned int F_00e45650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 in_ECX = 0;
  
  F_00e45250(param_1,param_2,param_3,param_4,0,in_ECX);
  return;
}

/* ref: FUN_00e45680 */
GEN_FRAME uint GEN_THISCALL F_00e45680(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e456c0 */
GEN_FRAME uint GEN_THISCALL F_00e456c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe456c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e45370(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e45370(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e45730 */
GEN_FRAME uint GEN_THISCALL F_00e45730(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e453e0(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e453e0(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e457a0 */
GEN_FRAME uint GEN_THISCALL F_00e457a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe457a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined4 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e45450(this GEN_EDX_FWD,1);
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar1) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e45450(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return (uint)puVar3;
}

/* ref: FUN_00e45810 */
GEN_FRAME uint GEN_THISCALL F_00e45810(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45810u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * this_00;
  uint uVar1;
  
  if (param_2 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x1157cd0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x50) = (*(undefined * PTR32 (*)[1])REFP(0x1091064));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  this_00 = (undefined4 *)((int)this + 4);
  F_00483f60(((undefined *)GEN_TOP((*(int *)(*(int *)this + 4) + (int)this))) GEN_EDX_FWD,this_00,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(this_00 GEN_EDX_ARG);
  uVar1 = 0;
  *this_00 = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x40) = 0;
  return (uint)this;
}

/* ref: FUN_00e458b0 */
GEN_FRAME uint GEN_THISCALL F_00e458b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe458b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00bb56c0(this GEN_EDX_FWD,param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00e45900 */
GEN_FRAME uint GEN_THISCALL F_00e45900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45900u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e454c0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00e44700(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e459a0 */
GEN_FRAME uint GEN_THISCALL F_00e459a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe459a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e45510(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00e44980(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e45a40 */
GEN_FRAME uint GEN_THISCALL F_00e45a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45a40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004069f0(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *(undefined4 *)((int)this + 4);
    puVar1[1] = *(undefined4 *)((int)this + 4);
    puVar1[2] = *(undefined4 *)((int)this + 4);
    *(undefined2 *)(puVar1 + 5) = 0;
    if (puVar1 + 3 != (undefined4 *)0x0) {
      puVar1[3] = *param_2;
      puVar1[4] = param_2[1];
    }
    F_00e45060(this GEN_EDX_ARG,param_1,puVar1,0);
    return param_1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e45ac0 */
GEN_FRAME unsigned int GEN_STDCALL F_00e45ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe45ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    do {
      if (puVar1 != (undefined4 *)0x0) {
        puVar3 = ((undefined4 *)GEN_TOP(((param_1 - (int)param_3) + (int)puVar1)));
        puVar4 = puVar1;
        for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar1 = puVar1 + 0x15;
    } while ((param_1 - (int)param_3) + (int)puVar1 != param_2);
  }
  return 0;
}

/* ref: FUN_00e45b00 */
GEN_FRAME unsigned int GEN_THISCALL F_00e45b00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45b00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00e45250(param_1,param_2,param_3,(int)this + 0xc,0,param_3);
  return;
}

/* ref: FUN_00e45b30 */
GEN_FRAME uint GEN_THISCALL F_00e45b30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bb4bd0(this GEN_EDX_FWD,param_1,0,0xffffffff);
  return uVar1;
}

/* ref: FUN_00e45b50 */
GEN_FRAME uint GEN_THISCALL F_00e45b50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  
  if (param_2 != param_3) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar2 = param_2;
    puVar3 = param_3;
    while (puVar3 != puVar1) {
      puVar4 = puVar3 + 0x15;
      puVar6 = puVar2 + 0x15;
      puVar7 = puVar3;
      puVar8 = puVar2;
      for (iVar5 = 0x15; puVar2 = puVar6, puVar3 = puVar4, iVar5 != 0; iVar5 = iVar5 - 1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
    }
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e45ba0 */
GEN_NOFRAME uint GEN_THISCALL F_00e45ba0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e45bd0 */
GEN_FRAME uint GEN_THISCALL F_00e45bd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe45bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  
  if (param_2 != param_3) {
    uVar1 = F_00e43be0(param_3,*(undefined4 *)((int)this + 4),param_2,param_1);
    *(uint *)((int)this + 4) = uVar1;
  }
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e45c10 */
GEN_NOFRAME uint GEN_THISCALL F_00e45c10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e45c40 */
GEN_FRAME uint GEN_THISCALL F_00e45c40(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e45c60 */
GEN_FRAME uint GEN_THISCALL F_00e45c60(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe45c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e45c80 */
GEN_FRAME uint GEN_THISCALL F_00e45c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  if ((undefined4 *)0x30c30c3 < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  puVar2 = ((undefined4 *)GEN_TOP(((*(int *)((int)this + 8) - *(int *)this) / 0x54)));
  if (puVar2 < param_1) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)F_004069f0((int)((int)(uintptr_t)param_1) * 0x54);
      (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = puVar2;
      if (puVar2 == (undefined4 *)0x0) {
        (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = (undefined4 *)0x0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar3 = *(undefined4 * PTR32 *)this;
    (*(undefined4 * PTR32 *)(gen_frame + 0x4)) = puVar2;
    puVar5 = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
    for (; puVar3 != puVar2; puVar3 = puVar3 + 0x15) {
      if (puVar5 != (undefined4 *)0x0) {
        puVar6 = puVar3;
        puVar7 = puVar5;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar7 = puVar7 + 1;
        }
      }
      puVar5 = puVar5 + 0x15;
    }
    iVar4 = *(int *)this;
    iVar1 = *(int *)((int)this + 4);
    if (iVar4 != 0) {
      F_00406ad0(iVar4);
    }
    puVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + (int)((int)(uintptr_t)param_1) * 0x15;
    *(undefined4 * PTR32 *)((int)this + 8) = puVar2;
    *(undefined4 * PTR32 *)((int)this + 4) = (*(undefined4 * PTR32 *)(gen_frame + 0x8)) + ((iVar1 - iVar4) / 0x54) * 0x15;
    *(undefined4 * PTR32 *)this = (*(undefined4 * PTR32 *)(gen_frame + 0x8));
  }
  return (uint)puVar2;
}

/* ref: FUN_00e45d70 */
GEN_FRAME uint GEN_THISCALL F_00e45d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x6666666 < param_1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar3 = (*(int *)((int)this + 8) - *(int *)this) / 0x28;
  if (uVar3 < param_1) {
    uVar4 = 0;
    if (param_1 != 0) {
      uVar4 = F_004069f0(param_1 * 0x28);
      if (uVar4 == 0) {
        (*(undefined4 *)(gen_frame + 0x8)) = 0;
        (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
        F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
      }
    }
    F_00e45250(*(undefined4 *)this,*(undefined4 *)((int)this + 4),uVar4,(int)this + 0xc,0,param_1)
    ;
    iVar1 = *(int *)((int)this + 4);
    iVar2 = *(int *)this;
    if (*(int *)this != 0) {
      F_00406ad0(*(int *)this);
    }
    uVar3 = uVar4 + ((iVar1 - iVar2) / 0x28) * 0x28;
    *(uint *)this = uVar4;
    *(uint *)((int)this + 8) = uVar4 + param_1 * 0x28;
    *(uint *)((int)this + 4) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_00e45e40 */
GEN_FRAME uint GEN_THISCALL F_00e45e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (this != param_1) {
    if (0xf < *(uint *)((int)this + 0x14)) {
      F_00406ad0(*(undefined4 *)this);
    }
    *(undefined4 *)((int)this + 0x14) = 0xf;
    *(undefined4 *)((int)this + 0x10) = 0;
    *(undefined1 *)this = 0;
    if ((uint)param_1[5] < 0x10) {
      F_00c46e20(this,param_1,param_1[4] + 1);
    }
    else {
      *(undefined4 *)this = *param_1;
      *param_1 = 0;
    }
    *(undefined4 *)((int)this + 0x10) = param_1[4];
    *(undefined4 *)((int)this + 0x14) = param_1[5];
    param_1[5] = 0xf;
    param_1[4] = 0;
    *(undefined1 *)param_1 = 0;
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::ReadReply */
GEN_FRAME byte GEN_THISCALL F_00e45ec0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (*(short *)(param_1 + 2) == 0xc) {
    bVar1 = F_00e3fc70(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
    if (bVar1 != 0) {
      return 1;
    }
    F_00e3e8c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  }
  else {
    if (*(short *)(param_1 + 2) != 0x1f5) {
      *(undefined4 *)(this + 0x10) = 4;
      return 0;
    }
    if (((*(int *)(param_1 + 0x14) != 0) && (*(char *)(param_1 + 0x1c) != '\0')) &&
       (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0)) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 5;
      return 0;
    }
  }
  return 0;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::ReadReply */
GEN_FRAME byte GEN_THISCALL F_00e45f40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe45f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  byte bVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 2) == 0xe) {
    iVar3 = param_1 + 0x10;
    switch((unsigned int)(uintptr_t)(*(undefined2 *)(param_1 + 0x1a))) {
    case 1: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,iVar3);
      if (bVar2 == 0) {
        F_00e3eab0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,1,*(undefined4 *)(this + 0x34));
        return 0;
      }
      break;
    case 2: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*(int *)(iVar3 + 8) == 0) {
          return 0;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x6c))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*(int *)(iVar3 + 0x350) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x70))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*(int *)(iVar3 + 0x350));
        return 0;
      }
      break;
    case 3: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*(int *)(iVar3 + 8) == 0) {
          return 0;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*(int *)(iVar3 + 0x350) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x84))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*(int *)(iVar3 + 0x350));
        return 0;
      }
      break;
    case 4: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*(int *)(iVar3 + 8) == 0) {
          return 0;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x78))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c);
        if (*(int *)(iVar3 + 0x350) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x7c))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*(int *)(iVar3 + 0x350));
        return 0;
      }
      break;
    default: ;
      return 0;
    case 6: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*(int *)(iVar3 + 8) == 0) {
          return 0;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x88))(piVar1 GEN_EDX_ARG,iVar3 + 0x1e0,iVar3 + 0x210);
        if (*(int *)(iVar3 + 0x350) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x8c))(piVar1 GEN_EDX_ARG,iVar3 + 0x1e0,iVar3 + 0x210,*(int *)(iVar3 + 0x350));
        return 0;
      }
      break;
    case 7: ;
      bVar2 = F_00e40080(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,iVar3);
      if (bVar2 == 0) {
        iVar3 = *(int *)(this + 8);
        piVar1 = *(int * PTR32 *)(this + 0x34);
        if (*(int *)(iVar3 + 8) == 0) {
          return 0;
        }
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if (*(int *)(iVar3 + 0x350) == 0) {
          return 0;
        }
        ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x74))(piVar1 GEN_EDX_ARG,iVar3 + 0x22c,*(int *)(iVar3 + 0x350));
        return 0;
      }
    }
  }
  else {
    if (*(short *)(param_1 + 2) != 0x17) {
      *(undefined4 *)(this + 0x10) = 4;
      return 0;
    }
    F_00e3f120(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
  }
  return 1;
}

/* ref: FUN_00e461a0 */
GEN_FRAME uint F_00e461a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe461a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  char cVar1;
  char * pcVar2;
  
  (*(uint *)(gen_frame + 0x208)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20c);
  if (param_3 < 0x200) {
    F_00c52620(((char *)(gen_frame + 0x8)),param_2,param_3);
    ((char *)(gen_frame + 0x8))[(int)(param_3)] = '\0';
  }
  else {
    F_00c52620(((char *)(gen_frame + 0x8)),param_2,0x200);
    (*(undefined1 *)(gen_frame + 0x207)) = 0;
  }
  pcVar2 = ((char *)(gen_frame + 0x8));
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  F_00bb56c0(param_1 GEN_EDX_ARG,((char *)(gen_frame + 0x8)),(int)pcVar2 - (int)(((char *)(gen_frame + 0x8)) + 1));
  F_00c47745((*(uint *)(gen_frame + 0x208)) ^ (uint)(uint)(gen_frame + 0x20c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: FUN_00e46240 */
GEN_NOFRAME uint GEN_THISCALL F_00e46240(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e46270 */
GEN_FRAME unsigned int GEN_THISCALL F_00e46270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return;
}

/* ref: FUN_00e462c0 */
GEN_NOFRAME uint GEN_THISCALL F_00e462c0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe462c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e462f0 */
GEN_FRAME uint GEN_THISCALL F_00e462f0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe462f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_00e43be0(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00e46320 */
GEN_FRAME uint GEN_THISCALL F_00e46320(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e46350 */
GEN_FRAME uint GEN_THISCALL F_00e46350(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46350u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e46380 */
GEN_FRAME uint GEN_THISCALL F_00e46380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x54;
  if (0x30c30c3U - param_1 < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x54;
  if (uVar1 < uVar2) {
    if (0x30c30c3 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00e45c80(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00e45c80(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00e46410 */
GEN_FRAME uint GEN_THISCALL F_00e46410(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x28;
  if (0x6666666U - param_1 < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x28;
  if (uVar1 < uVar2) {
    if (0x6666666 - (uVar1 >> 1) < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_00e45d70(this GEN_EDX_ARG,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_00e45d70(this GEN_EDX_ARG,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00e464a0 */
GEN_FRAME uint GEN_THISCALL F_00e464a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe464a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 0x14) = 0xf;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)this = 0;
  F_00e45e40(this GEN_EDX_FWD,param_1);
  return (uint)this;
}

/* ref: FUN_00e464d0 */
GEN_FRAME uint GEN_THISCALL F_00e464d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe464d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e45900(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e46500 */
GEN_FRAME uint GEN_THISCALL F_00e46500(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_00e459a0(this GEN_EDX_FWD,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00406ad0(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00e46540 */
GEN_NOFRAME uint GEN_THISCALL F_00e46540(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_00e46580 */
GEN_NOFRAME uint GEN_THISCALL F_00e46580(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406ad0(*(int *)this);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::ReadReply */
GEN_FRAME byte GEN_THISCALL F_00e465b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe465b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  if (*(short *)(param_1 + 2) != 0xf) {
    *(undefined4 *)(this + 0x10) = 4;
    return 0;
  }
  bVar1 = F_00e408c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
  if (bVar1 != 0) {
    return 1;
  }
  F_00e3ea40(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  return 0;
}

/* ref: FUN_00e46600 */
GEN_FRAME unsigned int GEN_THISCALL F_00e46600(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e46380(this GEN_EDX_FWD,1);
    }
    puVar2 = ((undefined4 *)GEN_TOP(((((int)param_1 - (int)puVar2) / 0x54) * 0x54 + *(int *)this)));
  }
  else {
    puVar2 = param_1;
    if (puVar3 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_00e46380(this GEN_EDX_ARG,1);
    }
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x54;
  return;
}

/* ref: FUN_00e46670 */
GEN_FRAME uint GEN_THISCALL F_00e46670(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  undefined8 * puVar1;
  undefined8 * puVar2;
  undefined8 * puVar3;
  
  puVar3 = *(undefined8 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar3) && (puVar1 = *(undefined8 * PTR32 *)this, puVar1 <= param_1)) {
    if (puVar3 == *(undefined8 * PTR32 *)((int)this + 8)) {
      F_00e46410(this GEN_EDX_FWD,1);
    }
    puVar1 = ((undefined8 *)GEN_TOP((*(int *)this + (((int)param_1 - (int)puVar1) / 0x28) * 0x28)));
    puVar2 = *(undefined8 * PTR32 *)((int)this + 4);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
      return (uint)puVar2;
    }
  }
  else {
    if (puVar3 == *(undefined8 * PTR32 *)((int)this + 8)) {
      F_00e46410(this GEN_EDX_ARG,1);
    }
    puVar3 = *(undefined8 * PTR32 *)((int)this + 4);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *param_1;
      puVar3[1] = param_1[1];
      puVar3[2] = param_1[2];
      puVar3[3] = param_1[3];
      puVar3[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x28;
  return (uint)puVar3;
}

/* ref: FUN_00e46740 */
GEN_FRAME uint GEN_THISCALL F_00e46740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe46740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e467a0 */
GEN_FRAME uint GEN_THISCALL F_00e467a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe467a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e46800 */
GEN_FRAME uint GEN_THISCALL F_00e46800(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  (*(uint *)(gen_frame + 0x28)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  if (((*(uint *)((int)this + 0x40) & 2) == 0) && (**(uint * PTR32 *)((int)this + 0x24) != 0)) {
    uVar4 = **(uint * PTR32 *)((int)this + 0x24);
    if (uVar4 <= *(uint *)((int)this + 0x3c)) {
      uVar4 = *(uint *)((int)this + 0x3c);
    }
    iVar1 = **(int * PTR32 *)((int)this + 0x14);
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((int *)(gen_frame + 0xc))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0xc))[0], 1, 3) << 8;
    F_00bb56c0(((int *)(gen_frame + 0xc)) GEN_EDX_FWD,iVar1,uVar4 - iVar1);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  }
  else if (((*(uint *)((int)this + 0x40) & 4) == 0) && (**(int * PTR32 *)((int)this + 0x20) != 0)) {
    iVar1 = **(int * PTR32 *)((int)this + 0x10);
    iVar2 = **(int * PTR32 *)((int)this + 0x30);
    iVar3 = **(int * PTR32 *)((int)this + 0x20);
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((int *)(gen_frame + 0xc))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0xc))[0], 1, 3) << 8;
    F_00bb56c0(((int *)(gen_frame + 0xc)) GEN_EDX_ARG,iVar1,(iVar2 - iVar1) + iVar3);
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  }
  else {
    (*(uint *)(gen_frame + 0x20)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined1 *)((char *)&((int *)(gen_frame + 0xc))[0] + 0)) = 0;
    ((int *)(gen_frame + 0xc))[0] = (uint)GEN_PIECE(&((int *)(gen_frame + 0xc))[0], 1, 3) << 8;
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    F_00e45e40(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0xc)));
  }
  if (0xf < (*(uint *)(gen_frame + 0x20))) {
    F_00406ad0(((int *)(gen_frame + 0xc))[0]);
  }
  F_00c47745((*(uint *)(gen_frame + 0x28)) ^ (uint)(uint)(gen_frame + 0x2c) GEN_EDX_ARG);
  return (uint)param_1;
}

/* ref: Application::Network::LobbyClient::LobbyClientMixin::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e46910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe46910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e40a10(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyLoginOperation::WriteRequest */
GEN_FRAME byte GEN_THISCALL F_00e46940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe46940u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  char * pcVar5;
  gen_size32 sVar6;
  
  (*(uint *)(gen_frame + 0x98)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x9c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = param_2;
  if (*((int *)GEN_TOP((*(int *)(this + 8) + 0xc))) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 0xc))) + 4))))) {
    case 0: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_FWD,0x1f5,0x38,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
      if (uVar3 != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = (undefined4 *)F_00e3bc00(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        iVar2 = (*(int *)(gen_frame + 0x18));
        *puVar4 = *(undefined4 *)(this + 0xc);
        puVar4[1] = *(undefined4 *)(iVar1 + 8);
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        *(undefined8 *)(puVar4 + 8) = 0;
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)(uVar3 + 8)) {
          *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(uVar3 + 8);
          *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
        }
        ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
        F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar2);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = 0x1f5;
        F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
        return 1;
      }
      break;
    default: ;
      goto switchD_00e4697b_caseD_1;
    case 2: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_ARG,5,0x100,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x40)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = (undefined4 *)F_00e3bac0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c48350(puVar4,0,0xf0);
        *puVar4 = *(undefined4 *)(this + 0xc);
        *(undefined2 *)(puVar4 + 3) = 0x1347;
        sVar6 = 0x40;
        puVar4[2] = 0x6e0000;
        pcVar5 = (char *)F_0042a990((*(int *)(gen_frame + 0x40)) + 8 GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 4),pcVar5,sVar6);
        sVar6 = 0x80;
        pcVar5 = (char *)F_0042a990(this + 0x38 GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 0x14),pcVar5,sVar6);
        sVar6 = 0x20;
        pcVar5 = (char *)F_0042a990(this + 0x8c GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 0x34),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)(uVar3 + 8)) {
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(uVar3 + 8);
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
        }
        ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
        F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = 0xc;
        F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 3: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_ARG,6,0x240,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x40)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        puVar4 = (undefined4 *)F_00e3bae0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c48350(puVar4,0,0x230);
        *puVar4 = *(undefined4 *)(this + 0xc);
        *(undefined2 *)(puVar4 + 3) = 0x1347;
        sVar6 = 0x180;
        puVar4[2] = 0x6e0000;
        pcVar5 = (char *)F_0042a990((*(int *)(gen_frame + 0x40)) + 8 GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 4),pcVar5,sVar6);
        sVar6 = 0x80;
        pcVar5 = (char *)F_0042a990(this + 0x38 GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 100),pcVar5,sVar6);
        sVar6 = 0x20;
        pcVar5 = (char *)F_0042a990(this + 0x8c GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 0x84),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)(uVar3 + 8)) {
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(uVar3 + 8);
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
        }
        ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
        F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = 0xc;
        F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
        return 1;
      }
      break;
    case 4: ;
      F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_ARG,0x1f6,0x98,0);
      uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x40)) = *((int *)GEN_TOP((*(int *)(this + 8) + 0xc)));
        F_0042cc20(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,&REFG(undefined1, 0x107fc63),REFG(undefined4, 0x108cc50));
        puVar4 = (undefined4 *)F_00e3bc20(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        *puVar4 = *(undefined4 *)(this + 0xc);
        puVar4[1] = *(undefined4 *)((*(int *)(gen_frame + 0x40)) + 8);
        *(undefined8 *)(puVar4 + 2) = 0;
        *(undefined8 *)(puVar4 + 4) = 0;
        *(undefined8 *)(puVar4 + 6) = 0;
        sVar6 = 0x40;
        *(undefined8 *)(puVar4 + 8) = 0;
        pcVar5 = (char *)F_0042a990(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
        F_00c52620((char *)(puVar4 + 10),pcVar5,sVar6);
        iVar1 = (*(int *)(gen_frame + 0x18));
        (*(int *)(gen_frame + 0x18)) = 0;
        uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)(uVar3 + 8)) {
          *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(uVar3 + 8);
          *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
        }
        ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
                  (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
        F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar1);
        if (*((int *)GEN_TOP((*(int *)(this + 8) + 8))) != 0) {
          *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 8))) + 0xc0))) = 4;
        }
        *(*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = 0x1f5;
        F_0042c880(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG);
        F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
        F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
        return 1;
      }
    }
    F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  }
switchD_00e4697b_caseD_1: ;
  F_00c47745((*(uint *)(gen_frame + 0x98)) ^ (uint)(uint)(gen_frame + 0x9c) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::WriteRequest */
GEN_FRAME byte GEN_THISCALL F_00e46e80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe46e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  undefined8 * puVar3;
  
  F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_FWD,3,0x28,0);
  uVar2 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
  if (uVar2 != 0) {
    puVar3 = (undefined8 *)F_00e3bb00(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar1 = (*(int *)(gen_frame + 0x18));
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined4 *)puVar3 = *(undefined4 *)(this + 0xc);
    *(byte *)((int)puVar3 + 9) = *(byte *)((int)puVar3 + 9) & 0xf1 | 1;
    *(byte *)((int)puVar3 + 9) = (char)this[0x41] << 4 | 1;
    *(undefined *)(puVar3 + 1) = this[0x40];
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(this + 0x38);
    *(undefined4 *)((int)puVar3 + 0x14) = *(undefined4 *)(this + 0x3c);
    (*(int *)(gen_frame + 0x18)) = 0;
    uVar2 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if ((undefined4 *)(iVar1 + 0xc) != (undefined4 *)(uVar2 + 8)) {
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(uVar2 + 8);
      *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(uVar2 + 0xc);
    }
    ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
              (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar1 + 0x24),*(undefined4 *)(iVar1 + 0x20));
    F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar1);
    *param_2 = 0xd;
    F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 1;
  }
  F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 0;
}

/* ref: Application::Network::LobbyClient::GameLoginOperation::WriteRequest */
GEN_FRAME byte GEN_THISCALL F_00e46f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe46f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 * puVar4;
  
  F_00e39ed0((undefined *)((int *)(gen_frame + 0x4)) GEN_EDX_FWD,4,0x30,0);
  uVar3 = F_00c32ee0(param_1 GEN_EDX_ARG,((int *)(gen_frame + 0x4)));
  if (uVar3 != 0) {
    puVar4 = (undefined8 *)F_00e3bb20(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    iVar2 = (*(int *)(gen_frame + 0x18));
    iVar1 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x14)));
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    *(undefined4 *)puVar4 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined4 *)((int)puVar4 + 0xc) = *(undefined4 *)(iVar1 + 0x14);
    *(undefined1 *)(puVar4 + 3) = *(undefined1 *)(iVar1 + 8);
    (*(int *)(gen_frame + 0x18)) = 0;
    uVar3 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 4))(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)(uVar3 + 8)) {
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(uVar3 + 8);
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(uVar3 + 0xc);
    }
    ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0x4))[0] + 0xc))
              (((int *)(gen_frame + 0x4)) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
    F_00c33730(*(undefined * PTR32 *)((int)param_1 + 0x20) GEN_EDX_ARG,iVar2);
    *param_2 = 0xf;
    F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
    return 1;
  }
  F_00e39da0(((int *)(gen_frame + 0x4)) GEN_EDX_ARG);
  return 0;
}

/* ref: FUN_00e47050 */
GEN_FRAME uint GEN_THISCALL F_00e47050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e46800((undefined *)((int)this + 4) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: Application::Network::LobbyClient::ServiceLoginOperation::ReadReply */
GEN_FRAME byte GEN_THISCALL F_00e47070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  switch((unsigned int)(uintptr_t)(*(undefined2 *)(param_1 + 2))) {
  case 0xd: ;
    break;
  default: ;
    *(undefined4 *)(this + 0x10) = 4;
    return 0;
  case 0x15: ;
    F_00e410c0(*(undefined * PTR32 *)(this + 8) GEN_EDX_FWD,param_1 + 0x10);
    return 1;
  case 0x16: ;
    if (this[0x41] == (undefined1)0x0) {
      F_00e41240(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    }
    return 1;
  case 0x17: ;
    if (this[0x41] == (undefined1)0x0) {
      F_00e3f120(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    }
    return 1;
  }
  if (this[0x41] == (undefined1)0x0) {
    bVar1 = F_00e3fdf0(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,param_1 + 0x10);
    if (bVar1 != 0) {
      return 1;
    }
  }
  else if ((~*(byte *)(param_1 + 0x18) & 1) != 0) {
    return 1;
  }
  if (this[0x41] != (undefined1)0x0) {
    F_00e3ea00(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
    return 0;
  }
  F_00e3e940(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG,*(undefined4 *)(this + 0x34));
  return 0;
}

/* ref: Application::Network::LobbyClient::CharaMakeOperation::WriteRequest */
GEN_FRAME byte GEN_THISCALL F_00e47160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x1b0];
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  char * pcVar6;
  char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * _Source;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar7;
  char * pcVar8;
  gen_size32 sVar9;
  undefined4 uVar10;
  
  (*(uint *)(gen_frame + 0x1a8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac);
  (*(undefined * PTR32 *)(gen_frame + 0xfc)) = param_1;
  (*(undefined * PTR32 *)(gen_frame + 0xf0)) = this;
  (*(undefined4 * PTR32 *)(gen_frame + 0xf4)) = param_2;
  (*(char * PTR32 *)(gen_frame + 0xf8)) = (char *)0x0;
  if ((*((int *)GEN_TOP((*(int *)(this + 8) + 0x10))) == 0) ||
     (*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(this + 8) + 0x10))) + 4))) != 0)) {
    F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1ac) ^ (uint)(uint)(gen_frame + 0x1ac) GEN_EDX_FWD);
    return 0;
  }
  F_00e39ed0((undefined *)((int *)(gen_frame + 0xb8)) GEN_EDX_ARG,0xb,0x1f0,0);
  iVar2 = *((int *)GEN_TOP((*(int *)(this + 8) + 0x10)));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0] = &REFG(undefined * PTR32, 0x1157cd0);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  F_00483f60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)) GEN_EDX_ARG,((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  F_00479880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  (*(undefined4 *)(gen_frame + 0x48)) = 0;
  (*(undefined4 *)(gen_frame + 0x4c)) = 4;
  F_00e82b60(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  if (*(int *)(iVar2 + 0x10) == 7) {
    F_00e78fe0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x124)) GEN_EDX_ARG,iVar2 + 0xd0);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x124))[0] = (*(undefined * PTR32 (*)[27])REFP(0x10c45d4));
    F_00e76050((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x124)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)));
    F_00e75880(((undefined * PTR32 * PTR32 *)(gen_frame + 0x124)) GEN_EDX_ARG);
  }
  else {
    F_00e5ecd0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x130)) GEN_EDX_ARG,iVar2 + 0x1e8);
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x130))[0] = (*(undefined * PTR32 (*)[27])REFP(0x10c4564));
    F_00e5c340((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x130)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0xa0)));
    F_00e5bc00(((undefined * PTR32 * PTR32 *)(gen_frame + 0x130)) GEN_EDX_ARG);
  }
  F_00ea6520(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)),((undefined1 *)(gen_frame + 0xa0)),1);
  if ((*(int *)(iVar2 + 0x10) == 2) || (*(int *)(iVar2 + 0x10) == 7)) {
    F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c)));
    pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c))[0];
    if ((*(uint *)(gen_frame + 0x1a0)) < 0x10) {
      pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c));
    }
    F_0042cc20(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG,pppppppuVar7,REFG(undefined4, 0x108cc50));
    if (0xf < (*(uint *)(gen_frame + 0x1a0))) {
      F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c))[0]);
    }
    pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c))[0];
    (*(uint *)(gen_frame + 0x1a0)) = 0xf;
    (*(undefined4 *)(gen_frame + 0x19c)) = 0;
    (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c))[0] + 0)) = 0;
    ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x18c))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar7 & 0xffffff00);
    (*(char * PTR32 *)(gen_frame + 0xf8)) = (char *)0x0;
    uVar4 = F_0042b790(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
    if (uVar4 != 0) {
      do {
        uVar4 = F_00c32ee0((*(undefined * PTR32 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((int *)(gen_frame + 0xb8)));
        if (uVar4 == 0) break;
        puVar5 = (undefined4 *)F_00e3bb40(((int *)(gen_frame + 0xb8)) GEN_EDX_ARG);
        F_00c48350(puVar5,0,0x1e0);
        *puVar5 = *(undefined4 *)(this + 0xc);
        *(undefined1 *)((int)puVar5 + 0x19) = *(undefined1 *)(iVar2 + 0x10);
        puVar5[2] = *(undefined4 *)(iVar2 + 0x18);
        puVar5[3] = *(undefined4 *)(iVar2 + 0x1c);
        *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(iVar2 + 0x14);
        puVar5[4] = *(undefined4 *)(iVar2 + 0x20);
        puVar5[5] = *(undefined4 *)(iVar2 + 0x24);
        uVar10 = 0xffffffff;
        *(undefined2 *)((int)puVar5 + 0x1a) = *(undefined2 *)(iVar2 + 0x16);
        uVar4 = F_0042a990(iVar2 + 0x28 GEN_EDX_ARG);
        F_00c4d9ef(puVar5 + 7,0x20,uVar4,uVar10);
        *(undefined1 *)((int)puVar5 + 0x3b) = 0;
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170)));
        pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170))[0];
        if ((*(uint *)(gen_frame + 0x184)) < 0x10) {
          pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170));
        }
        pcVar6 = (char *)(puVar5 + 0xf);
        F_00c4d9ef(pcVar6,400,(char *)((int)pppppppuVar7 + (int)(*(char * PTR32 *)(gen_frame + 0xf8))),0xffffffff);
        if (0xf < (*(uint *)(gen_frame + 0x184))) {
          F_00406ad0(((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170))[0]);
        }
        pppppppuVar7 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170))[0];
        (*(uint *)(gen_frame + 0x184)) = 0xf;
        (*(undefined4 *)(gen_frame + 0x180)) = 0;
        (*(undefined1 *)((char *)&((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170))[0] + 0)) = 0;
        ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x170))[0] = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((uint)pppppppuVar7 & 0xffffff00);
        *(undefined1 *)((int)puVar5 + 0x1cb) = 0;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        pcVar6 = pcVar6 + ((int)(*(char * PTR32 *)(gen_frame + 0xf8)) - ((int)puVar5 + 0x3d));
        (*(char * PTR32 *)(gen_frame + 0xf8)) = pcVar6;
        pcVar8 = (char *)F_0042b790(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
        iVar3 = (*(int *)(gen_frame + 0xcc));
        if (pcVar6 < pcVar8) {
          *(byte *)((int)puVar5 + 0x19) = *(byte *)((int)puVar5 + 0x19) | 0x80;
        }
        (*(int *)(gen_frame + 0xcc)) = 0;
        uVar4 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0xb8))[0] + 4))(((int *)(gen_frame + 0xb8)) GEN_EDX_ARG);
        if ((undefined4 *)(iVar3 + 0xc) != (undefined4 *)(uVar4 + 8)) {
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(uVar4 + 8);
          *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(uVar4 + 0xc);
        }
        ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0xb8))[0] + 0xc))
                  (((int *)(gen_frame + 0xb8)) GEN_EDX_ARG,*(undefined4 *)(iVar3 + 0x24),*(undefined4 *)(iVar3 + 0x20));
        F_00c33730(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xfc)) + 0x20) GEN_EDX_ARG,iVar3);
        pcVar8 = (char *)F_0042b790(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
        this = (*(undefined * PTR32 *)(gen_frame + 0xf0));
      } while (pcVar6 < pcVar8);
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0xf4)) = 0xe;
    F_0042c880(((undefined1 *)(gen_frame + 0x100)) GEN_EDX_ARG);
  }
  else {
    uVar4 = F_00c32ee0((*(undefined * PTR32 *)(gen_frame + 0xfc)) GEN_EDX_ARG,((int *)(gen_frame + 0xb8)));
    if (uVar4 != 0) {
      puVar5 = (undefined4 *)F_00e3bb40(((int *)(gen_frame + 0xb8)) GEN_EDX_ARG);
      F_00c48350(puVar5,0,0x1e0);
      *puVar5 = *(undefined4 *)(this + 0xc);
      *(undefined1 *)((int)puVar5 + 0x19) = *(undefined1 *)(iVar2 + 0x10);
      puVar5[2] = *(undefined4 *)(iVar2 + 0x18);
      puVar5[3] = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined1 *)(puVar5 + 6) = *(undefined1 *)(iVar2 + 0x14);
      puVar5[4] = *(undefined4 *)(iVar2 + 0x20);
      puVar5[5] = *(undefined4 *)(iVar2 + 0x24);
      sVar9 = 0x20;
      *(undefined2 *)((int)puVar5 + 0x1a) = *(undefined2 *)(iVar2 + 0x16);
      pcVar6 = (char *)F_0042a990(iVar2 + 0x28 GEN_EDX_ARG);
      F_00c52620((char *)(puVar5 + 7),pcVar6,sVar9);
      cVar1 = *(char *)((int)puVar5 + 0x19);
      *(undefined1 *)((int)puVar5 + 0x3b) = 0;
      if (cVar1 == '\x02') {
        F_00e46800(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG,((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x154)));
        _Source = ((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x154))[0];
        if ((*(uint *)(gen_frame + 0x168)) < 0x10) {
          _Source = (char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x154));
        }
        F_00c52620((char *)(puVar5 + 0xf),(char *)_Source,400);
        F_00a16de0(((char * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x154)) GEN_EDX_ARG);
      }
      else if (cVar1 == '\x01') {
        sVar9 = 400;
        pcVar6 = (char *)F_0042a990(iVar2 + 0x7c GEN_EDX_ARG);
        F_00c52620((char *)(puVar5 + 0xf),pcVar6,sVar9);
      }
      else if (cVar1 == '\x06') {
        *(undefined1 *)(puVar5 + 0x76) = *(undefined1 *)(iVar2 + 0x15);
      }
      iVar2 = (*(int *)(gen_frame + 0xcc));
      (*(int *)(gen_frame + 0xcc)) = 0;
      uVar4 = ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0xb8))[0] + 4))(((int *)(gen_frame + 0xb8)) GEN_EDX_ARG);
      if ((undefined4 *)(iVar2 + 0xc) != (undefined4 *)(uVar4 + 8)) {
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(uVar4 + 8);
        *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(uVar4 + 0xc);
      }
      ((GEN_TCODE *)*(gen_code32 *)(((int *)(gen_frame + 0xb8))[0] + 0xc))
                (((int *)(gen_frame + 0xb8)) GEN_EDX_ARG,*(undefined4 *)(iVar2 + 0x24),*(undefined4 *)(iVar2 + 0x20));
      F_00c33730(*(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0xfc)) + 0x20) GEN_EDX_ARG,iVar2);
      *(*(undefined4 * PTR32 *)(gen_frame + 0xf4)) = 0xe;
    }
  }
  F_00e82b80(((undefined1 *)(gen_frame + 0xa0)) GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157ccc));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[1] = (*(undefined * PTR32 (*)[15])REFP(0x11577d4));
  F_00e3ce60(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
  F_00479ae0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) + 1 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))[0][1] + (int)((undefined * PTR32 * PTR32 *)(gen_frame + 0x8))))) =
       (*(undefined * PTR32 (*)[1])REFP(0x109105c));
  ((undefined * PTR32 * PTR32 *)(gen_frame + 0x58))[0] = (*(undefined * PTR32 (*)[1])REFP(0x1091054));
  F_00c46453((undefined *)((undefined * PTR32 * PTR32 *)(gen_frame + 0x58)));
  F_00e39da0(((int *)(gen_frame + 0xb8)) GEN_EDX_ARG);
  F_00c47745((*(uint *)(gen_frame + 0x1a8)) ^ (uint)(uint)(gen_frame + 0x1ac) GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00e476f0 */
GEN_NOFRAME byte GEN_STDCALL F_00e476f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe476f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 1;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf1 */
GEN_NOFRAME uint F_00e47700(void)
{
  GEN_ENTER(0xe47700u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf2 */
GEN_NOFRAME uint GEN_THISCALL F_00e47710(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Application::Network::LobbyClient::RaptureChannelManager::vf19 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e47720(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(undefined4 *)(in_ecx + 0xc0) = 3;
  return;
}

/* ref: FUN_00e47730 */
GEN_NOFRAME uint GEN_THISCALL F_00e47730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 8);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  if (puVar1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*puVar1)(puVar1 GEN_EDX_FWD,1);
  }
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4abc0(this GEN_EDX_ARG);
  *(undefined4 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  F_00e4ca90((undefined4 *)((int)this + 0x8c) GEN_EDX_ARG);
  *(undefined4 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4c920((undefined4 *)((int)this + 100) GEN_EDX_ARG);
  uVar2 = F_00e4d390(this GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00e47780 */
GEN_FRAME uint GEN_THISCALL F_00e47780(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  undefined * this_01;
  __time64_t _Var2;
  ulonglong uVar3;
  
  puVar1 = (undefined4 *)F_004069f0(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = (*(undefined * PTR32 (*)[3])REFP(0x1157d90));
  }
  F_00e4cf60(this GEN_EDX_ARG,puVar1,0,1,0x1000);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[25])REFP(0x1157f04));
  F_00e4b010((undefined *)((int)this + 100) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 100) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e30));
  F_00e4bc80((undefined *)((int)this + 0x8c) GEN_EDX_ARG);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x8c) =
       (*(undefined * PTR32 (*)[7])REFP(0x1157e50));
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1157f6c));
  *(undefined4 *)((int)this + 0xc0) = 1;
  F_00a1af40((undefined *)((int)this + 200) GEN_EDX_ARG);
  this_00 = (undefined *)F_00406b90(0x140,0,0);
  if (this_00 == (undefined *)0x0) {
    this_01 = (undefined *)0x0;
  }
  else {
    this_01 = (undefined *)F_00e39a70(this_00 GEN_EDX_ARG,this,param_1);
  }
  *(undefined * PTR32 *)((int)this + 8) = this_01;
  F_00e373a0(this_01 GEN_EDX_ARG);
  _Var2 = F_00c4b7c2((__time64_t *)0x0);
  *(int *)((int)this + 200) = (int)_Var2;
  uVar3 = F_00427d90();
  *(ulonglong *)((int)this + 0xd0) = uVar3;
  uVar3 = F_00427e30();
  *(ulonglong *)((int)this + 0xd8) = uVar3;
  return (uint)this;
}

/* ref: FUN_00e47880 */
GEN_FRAME byte GEN_THISCALL F_00e47880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47880u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = (int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 * PTR32 *)&gen_args[1]) + 0xc))) = *((undefined4 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) + 8)));
    piVar1 = ((int *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))));
    if (piVar1 != *((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54)))) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      F_00406ad0(piVar1);
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) - 1;
    }
LAB_00e478d5: ;
    F_00e3b8b0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    (*(undefined * PTR32 * PTR32 *)&gen_args[1]) = (*(undefined * PTR32 (*)[14])REFP(0x1157ce4));
    F_00e3b8f0((undefined *)&(*(undefined * PTR32 * PTR32 *)&gen_args[1]) GEN_EDX_ARG,0,iVar2);
    F_00e3b8a0(&(*(undefined * PTR32 * PTR32 *)&gen_args[1]) GEN_EDX_ARG);
    return 1;
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != (undefined *)0x0) {
    bVar3 = F_00e4d8c0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) GEN_EDX_ARG,(*(undefined * PTR32 * PTR32 *)&gen_args[1]));
    if (bVar3 != 0) goto LAB_00e478d5;
  }
  return 0;
}

/* ref: FUN_00e47910 */
GEN_FRAME byte GEN_THISCALL F_00e47910(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  ulonglong uVar3;
  __time64_t _Var4;
  uint local_8;
  
  if (*(int *)((int)this + 0xc0) == 1) {
    uVar3 = F_00427d90();
    if (((int)(uVar3 >> 0x20) - *(int *)((int)this + 0xd4) ==
         (uint)((uint)uVar3 < *(uint *)((int)this + 0xd0))) &&
       ((uint)uVar3 - *(uint *)((int)this + 0xd0) < 500)) {
      return 1;
    }
    _Var4 = F_00c4b7c2((__time64_t *)0x0);
    *(int *)((int)this + 200) = (int)_Var4;
    uVar3 = F_00427d90();
    *(ulonglong *)((int)this + 0xd0) = uVar3;
    uVar3 = F_00427e30();
    *(ulonglong *)((int)this + 0xd8) = uVar3;
  }
  piVar1 = *(int * PTR32 *)((int)this + 8);
  if (piVar1 != (int *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x44))(this GEN_EDX_ARG);
    if (*(int *)((int)this + 0x24) != 0) {
      local_8 = (uint)this & 0xffffff00;
      F_00e4dc90(**(undefined4 * PTR32 *)((int)this + 0x20),*(undefined4 * PTR32 *)((int)this + 0x20),local_8);
    }
    ((GEN_TCODE *)*(gen_code32 *)(*(int *)this + 0x48))(this GEN_EDX_ARG);
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 4))(piVar1 GEN_EDX_ARG);
  }
  if ((*(int *)((int)this + 0xc0) == 1) && (uVar2 = F_00c33470(this GEN_EDX_ARG), uVar2 != 0)) {
    *(undefined4 *)((int)this + 0xc0) = 3;
  }
  return 1;
}

/* ref: FUN_00e47a10 */
GEN_NOFRAME uint GEN_THISCALL F_00e47a10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47a10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00e3b8b0(in_ecx GEN_EDX_FWD);
  *in_ecx = (*(undefined * PTR32 (*)[14])REFP(0x1157ce4));
  return (uint)in_ecx;
}

/* ref: FUN_00e47a40 */
GEN_FRAME uint GEN_THISCALL F_00e47a40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: NetBufferFactoryInterface_TLobbyProtoUp_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e47a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x1157d20));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: NetBufferFactoryInterface_TLobbyProtoDown_LobbyProtoChannel_Network_Application_IpcChannel::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e47aa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[5])REFP(0x1157d38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e47ad0 */
GEN_FRAME uint F_00e47ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47ae0 */
GEN_FRAME uint F_00e47ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47ae0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e47af0 */
GEN_FRAME uint F_00e47af0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47b00 */
GEN_FRAME uint F_00e47b00(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e47b10 */
GEN_FRAME uint F_00e47b10(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e47b20 */
GEN_FRAME uint F_00e47b20(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e47b30 */
GEN_FRAME uint F_00e47b30(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47b50 */
GEN_FRAME uint F_00e47b50(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b50u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47b70 */
GEN_FRAME uint GEN_STDCALL F_00e47b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47b70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47b90 */
GEN_FRAME uint F_00e47b90(unsigned int gen_a0)
{
  GEN_ENTER(0xe47b90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47ba0 */
GEN_FRAME uint F_00e47ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00e47bb0 */
GEN_FRAME uint F_00e47bb0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47bc0 */
GEN_FRAME uint F_00e47bc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e47bd0 */
GEN_FRAME uint F_00e47bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e47be0 */
GEN_FRAME uint F_00e47be0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00e47bf0 */
GEN_FRAME uint F_00e47bf0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47bf0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47c10 */
GEN_FRAME uint F_00e47c10(unsigned int gen_a0)
{
  GEN_ENTER(0xe47c10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47c30 */
GEN_FRAME uint GEN_STDCALL F_00e47c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47c50 */
GEN_FRAME byte GEN_THISCALL F_00e47c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e47c80 */
GEN_FRAME byte GEN_THISCALL F_00e47c80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e47cb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e47cb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47cb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47d00 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e47d00(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47d00u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47d50 */
GEN_FRAME uint GEN_THISCALL F_00e47d50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47d50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d60 */
GEN_FRAME uint GEN_THISCALL F_00e47d60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47d60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47d70 */
GEN_FRAME uint F_00e47d70(unsigned int gen_a0)
{
  GEN_ENTER(0xe47d70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47d80 */
GEN_FRAME uint F_00e47d80(unsigned int gen_a0)
{
  GEN_ENTER(0xe47d80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47da0 */
GEN_FRAME byte GEN_THISCALL F_00e47da0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47dc0 */
GEN_FRAME byte GEN_THISCALL F_00e47dc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47e10 */
GEN_FRAME uint GEN_STDCALL F_00e47e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e30 */
GEN_FRAME uint GEN_STDCALL F_00e47e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47e50 */
GEN_FRAME uint F_00e47e50(unsigned int gen_a0)
{
  GEN_ENTER(0xe47e50u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e47e60 */
GEN_FRAME uint F_00e47e60(unsigned int gen_a0)
{
  GEN_ENTER(0xe47e60u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00e47e70 */
GEN_FRAME uint GEN_STDCALL F_00e47e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe47e70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00e47ec0 */
GEN_FRAME uint F_00e47ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xe47ec0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00e47ee0 */
GEN_FRAME byte GEN_THISCALL F_00e47ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe47ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e47f00 */
GEN_FRAME uint F_00e47f00(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47f10 */
GEN_FRAME uint F_00e47f10(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f10u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47f30 */
GEN_FRAME uint F_00e47f30(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f30u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47f50 */
GEN_FRAME uint F_00e47f50(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00e47f60 */
GEN_FRAME uint F_00e47f60(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47f80 */
GEN_FRAME uint F_00e47f80(unsigned int gen_a0)
{
  GEN_ENTER(0xe47f80u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e47fa0 */
GEN_FRAME uint GEN_THISCALL F_00e47fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe47fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e47fb0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e47fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe47fb0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e48000 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e48000(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48000u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e48080 */
GEN_FRAME uint F_00e48080(unsigned int gen_a0)
{
  GEN_ENTER(0xe48080u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00e48090 */
GEN_FRAME uint F_00e48090(unsigned int gen_a0)
{
  GEN_ENTER(0xe48090u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: PrimaryEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e480a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe480a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48120 */
GEN_FRAME uint F_00e48120(unsigned int gen_a0)
{
  GEN_ENTER(0xe48120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48170 */
GEN_FRAME uint F_00e48170(unsigned int gen_a0)
{
  GEN_ENTER(0xe48170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e481d0 */
GEN_NOFRAME uint GEN_THISCALL F_00e481d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe481d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48210 */
GEN_FRAME byte GEN_THISCALL F_00e48210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00e48230 */
GEN_FRAME uint GEN_THISCALL F_00e48230(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48230u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf6 */
GEN_FRAME unsigned int GEN_THISCALL F_00e482e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe482e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: IpcEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e48300(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: EntityWrapper_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e48330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e48360(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[7])REFP(0x1157d60));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48390 */
GEN_FRAME uint GEN_THISCALL F_00e48390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e483d0 */
GEN_FRAME uint F_00e483d0(unsigned int gen_a0)
{
  GEN_ENTER(0xe483d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e48430 */
GEN_FRAME uint F_00e48430(unsigned int gen_a0)
{
  GEN_ENTER(0xe48430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48490 */
GEN_FRAME uint F_00e48490(unsigned int gen_a0)
{
  GEN_ENTER(0xe48490u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e484e0 */
GEN_FRAME uint GEN_THISCALL F_00e484e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe484e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)((int)this + 8) = param_1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00e485b0 */
GEN_FRAME uint GEN_THISCALL F_00e485b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe485b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: Application::Network::LobbyClient::LobbyProtoDownDummyCallback::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e485e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe485e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00e3b8a0(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48640 */
GEN_FRAME uint GEN_THISCALL F_00e48640(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48640u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e486d0 */
GEN_FRAME uint GEN_THISCALL F_00e486d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe486d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e48730 */
GEN_NOFRAME uint GEN_THISCALL F_00e48730(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48740 */
GEN_NOFRAME uint GEN_THISCALL F_00e48740(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48750 */
GEN_FRAME uint GEN_THISCALL F_00e48750(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48760 */
GEN_FRAME uint GEN_THISCALL F_00e48760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48760u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e487a0 */
GEN_NOFRAME uint GEN_THISCALL F_00e487a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe487a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e487b0 */
GEN_NOFRAME uint GEN_THISCALL F_00e487b0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe487b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48830 */
GEN_FRAME uint GEN_THISCALL F_00e48830(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48830u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return (uint)param_1;
}

/* ref: FUN_00e48860 */
GEN_FRAME uint GEN_THISCALL F_00e48860(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48860u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47cb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e48880 */
GEN_FRAME uint GEN_THISCALL F_00e48880(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48880u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47d00(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e488a0 */
GEN_FRAME uint GEN_THISCALL F_00e488a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe488a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e488c0 */
GEN_FRAME uint GEN_THISCALL F_00e488c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe488c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e48930 */
GEN_FRAME uint GEN_THISCALL F_00e48930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48930u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e48990 */
GEN_NOFRAME uint GEN_THISCALL F_00e48990(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e489a0 */
GEN_NOFRAME uint GEN_THISCALL F_00e489a0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe489a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e48000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e489e0 */
GEN_NOFRAME uint GEN_THISCALL F_00e489e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe489e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e36c00(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e48a20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[3])REFP(0x1157d50));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: PrimaryEntityFactoryClass_LF_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
GEN_FRAME unsigned int GEN_THISCALL F_00e48a60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    ((GEN_TCODE *)*(gen_code32 *)*param_1)(param_1 GEN_EDX_FWD,1);
  }
  return;
}

/* ref: FUN_00e48a80 */
GEN_FRAME uint GEN_STDCALL F_00e48a80(unsigned int gen_a0)
{
  GEN_ENTER(0xe48a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x10))))(*(int * PTR32 *)(param_1 + 8) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: FUN_00e48ae0 */
GEN_NOFRAME uint GEN_THISCALL F_00e48ae0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe48ae0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00e48000(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00e48af0 */
GEN_FRAME uint GEN_STDCALL F_00e48af0(unsigned int gen_a0)
{
  GEN_ENTER(0xe48af0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48b40 */
GEN_FRAME uint GEN_STDCALL F_00e48b40(unsigned int gen_a0)
{
  GEN_ENTER(0xe48b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48bb0 */
GEN_FRAME uint GEN_THISCALL F_00e48bb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if (param_1 != 0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 8);
    *(int *)((int)this + 8) = param_1;
    *(undefined * PTR32 * PTR32 *)this =
         (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)this;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: ConnectionOwner_TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e48bf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e48c20 */
GEN_FRAME uint GEN_THISCALL F_00e48c20(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e48c30 */
GEN_FRAME byte GEN_THISCALL F_00e48c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00e48c60 */
GEN_FRAME uint GEN_STDCALL F_00e48c60(unsigned int gen_a0)
{
  GEN_ENTER(0xe48c60u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00e48cc0 */
GEN_FRAME uint GEN_STDCALL F_00e48cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xe48cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48d20 */
GEN_FRAME uint GEN_STDCALL F_00e48d20(unsigned int gen_a0)
{
  GEN_ENTER(0xe48d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 < 0xaaaaaab) && (uVar1 = F_004069f0(param_1 * 0x18), uVar1 != 0)) {
    return uVar1;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e48d70 */
GEN_FRAME uint GEN_THISCALL F_00e48d70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: FUN_00e48de0 */
GEN_FRAME uint GEN_THISCALL F_00e48de0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48de0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e48e40 */
GEN_FRAME uint GEN_THISCALL F_00e48e40(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48e40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e48ea0 */
GEN_FRAME uint GEN_THISCALL F_00e48ea0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48eb0 */
GEN_FRAME uint GEN_THISCALL F_00e48eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48ee0 */
GEN_FRAME uint GEN_THISCALL F_00e48ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48ee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e48f00 */
GEN_FRAME uint GEN_THISCALL F_00e48f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e48f50 */
GEN_FRAME uint GEN_THISCALL F_00e48f50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00e48f60 */
GEN_FRAME uint GEN_THISCALL F_00e48f60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e47fb0(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e48f80 */
GEN_FRAME uint GEN_THISCALL F_00e48f80(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe48f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00e48000(this GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00e48fa0 */
GEN_FRAME uint GEN_THISCALL F_00e48fa0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe48fa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e49000 */
GEN_FRAME uint GEN_THISCALL F_00e49000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49000u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00e49060 */
GEN_FRAME unsigned int GEN_THISCALL F_00e49060(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49060(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00e490a0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e490a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe490a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e490a0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00e49120 */
GEN_FRAME uint GEN_THISCALL F_00e49120(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  F_01050b90(in_ecx GEN_EDX_FWD,param_3);
  in_ecx[4] = param_2;
  in_ecx[5] = param_3;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[7] = 0;
  in_ecx[8] = 0;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityTmpl_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf0 */
GEN_FRAME uint GEN_THISCALL F_00e49180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d80));
  F_01050b80(this GEN_EDX_FWD);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00e491b0 */
GEN_FRAME uint GEN_THISCALL F_00e491b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe491b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  
  if (*(int *)(param_3 + 8) == 0) {
    uVar1 = *(undefined4 *)(param_3 + 4);
  }
  else {
    uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_3 + 8) + 8)));
  }
  F_01050b90(this GEN_EDX_FWD,uVar1);
  *(undefined4 *)((int)this + 0x10) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_3 + 8);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) =
       (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)this;
}

/* ref: FUN_00e49210 */
GEN_FRAME uint F_00e49210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49210u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e49220 */
GEN_FRAME uint GEN_THISCALL F_00e49220(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e49270 */
GEN_FRAME uint GEN_THISCALL F_00e49270(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e492d0 */
GEN_FRAME uint GEN_THISCALL F_00e492d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe492d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e49330 */
GEN_FRAME uint GEN_THISCALL F_00e49330(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e49390 */
GEN_FRAME uint GEN_THISCALL F_00e49390(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49390u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e49400 */
GEN_FRAME uint GEN_THISCALL F_00e49400(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e49450 */
GEN_FRAME uint GEN_THISCALL F_00e49450(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49450u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47cb0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e4956a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47b50(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47b30(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e4956a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48de0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48de0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49628: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49628;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48de0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e48640((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e496a0 */
GEN_FRAME uint GEN_THISCALL F_00e496a0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe496a0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47d00(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e497ba;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47c10(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47bf0(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e497ba: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e486d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49878: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e486d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49878;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48e40((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e486d0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e498f0 */
GEN_FRAME uint GEN_THISCALL F_00e498f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe498f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49900 */
GEN_FRAME uint GEN_THISCALL F_00e49900(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49910 */
GEN_FRAME uint GEN_THISCALL F_00e49910(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49930 */
GEN_FRAME uint GEN_THISCALL F_00e49930(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)*in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00e49940 */
GEN_FRAME uint GEN_THISCALL F_00e49940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00e49960 */
GEN_FRAME uint GEN_STDCALL F_00e49960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xe49960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00e49970 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e49970(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e499b0 */
GEN_FRAME uint GEN_THISCALL F_00e499b0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe499b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e47fb0(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49aca;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47f30(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47f10(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e49aca: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e488c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49b88: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e488c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49b88;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e48fa0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e488c0((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e49c00 */
GEN_FRAME uint GEN_THISCALL F_00e49c00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49c00u, gen_a0, gen_a1, gen_a2, 0u);
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
  if (*((char *)GEN_TOP(((int)(*(int * PTR32 *)&gen_args[2]) + 0x15))) != '\0') {
                    
    F_00c457e7("invalid map/set<T> iterator");
  }
  F_00e48000(&(*(int * PTR32 *)&gen_args[2]) GEN_EDX_ARG);
  piVar6 = (int *)*piVar3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar7 = piVar6;
    if ((*(char *)(piVar3[2] + 0x15) == '\0') && (piVar7 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[2])), (*(int * PTR32 *)&gen_args[2]) != piVar3)) {
      piVar6[1] = (int)(*(int * PTR32 *)&gen_args[2]);
      *(*(int * PTR32 *)&gen_args[2]) = *piVar3;
      piVar6 = (*(int * PTR32 *)&gen_args[2]);
      if ((*(int * PTR32 *)&gen_args[2]) != (int *)piVar3[2]) {
        piVar6 = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[2])[1]));
        if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
      iVar1 = (*(int * PTR32 *)&gen_args[2])[5];
      *((char *)GEN_TOP(((*(int * PTR32 *)&gen_args[2]) + 5))) = (char)piVar3[5];
      *(char *)(piVar3 + 5) = (char)iVar1;
      goto LAB_00e49d1a;
    }
  }
  else {
    piVar7 = (int *)piVar3[2];
  }
  piVar6 = (int *)piVar3[1];
  if (*(char *)((int)piVar7 + 0x15) == '\0') {
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
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      piVar4 = (int *)F_00e47f80(piVar7);
    }
    **((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = piVar4;
  }
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if (*(int * PTR32 *)(iVar1 + 8) == piVar3) {
    if (*(char *)((int)piVar7 + 0x15) == '\0') {
      uVar5 = F_00e47f60(piVar7);
      *(uint *)(iVar1 + 8) = uVar5;
    }
    else {
      *(int * PTR32 *)(iVar1 + 8) = piVar6;
    }
  }
LAB_00e49d1a: ;
  if ((char)piVar3[5] == '\x01') {
    if (piVar7 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4)))) {
      do {
        piVar4 = piVar6;
        if ((char)piVar7[5] != '\x01') break;
        piVar6 = (int *)*piVar4;
        if (piVar7 == piVar6) {
          piVar6 = (int *)piVar4[2];
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e49000((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)piVar4[2];
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(*piVar6 + 0x14) != '\x01') || (*(char *)(piVar6[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x14) = 1;
                *(undefined1 *)(piVar6 + 5) = 0;
                F_00e48930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
                piVar6 = (int *)piVar4[2];
              }
              *(char *)(piVar6 + 5) = (char)piVar4[5];
              *(undefined1 *)(piVar4 + 5) = 1;
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              F_00e49000((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
              break;
            }
LAB_00e49dd8: ;
            *(undefined1 *)(piVar6 + 5) = 0;
          }
        }
        else {
          if ((char)piVar6[5] == '\0') {
            *(undefined1 *)(piVar6 + 5) = 1;
            *(undefined1 *)(piVar4 + 5) = 0;
            F_00e48930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            piVar6 = (int *)*piVar4;
          }
          if (*(char *)((int)piVar6 + 0x15) == '\0') {
            if ((*(char *)(piVar6[2] + 0x14) == '\x01') && (*(char *)(*piVar6 + 0x14) == '\x01'))
            goto LAB_00e49dd8;
            if (*(char *)(*piVar6 + 0x14) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x14) = 1;
              *(undefined1 *)(piVar6 + 5) = 0;
              F_00e49000((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar6);
              piVar6 = (int *)*piVar4;
            }
            *(char *)(piVar6 + 5) = (char)piVar4[5];
            *(undefined1 *)(piVar4 + 5) = 1;
            *(undefined1 *)(*piVar6 + 0x14) = 1;
            F_00e48930((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG,piVar4);
            break;
          }
        }
        piVar6 = (int *)piVar4[1];
        piVar7 = piVar4;
      } while (piVar4 != *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4))));
    }
    *(undefined1 *)(piVar7 + 5) = 1;
  }
  F_00406ad0(piVar3);
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) != 0) {
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) - 1;
  }
  *(*(undefined4 * PTR32 *)&gen_args[1]) = (*(int * PTR32 *)&gen_args[2]);
  return (uint)(*(undefined4 * PTR32 *)&gen_args[1]);
}

/* ref: FUN_00e49e50 */
GEN_NOFRAME uint GEN_THISCALL F_00e49e50(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49e50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49060(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e49ea0 */
GEN_NOFRAME uint GEN_THISCALL F_00e49ea0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe49ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e490a0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e49ef0 */
GEN_FRAME unsigned int GEN_THISCALL F_00e49ef0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49ef0(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: FUN_00e49f30 */
GEN_FRAME unsigned int GEN_THISCALL F_00e49f30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe49f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00e49f30(this GEN_EDX_FWD,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00406ad0(piVar3);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf1 */
GEN_FRAME uint GEN_THISCALL F_00e49f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe49f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  undefined4 local_10;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = *(undefined4 *)(param_2 + 8);
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x14);
  uVar3 = local_10;
  if (param_2 != 0) {
    uVar3 = *(undefined4 *)(param_2 + 8);
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
  in_ecx[5] = uVar2;
  in_ecx[4] = uVar1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_2;
  in_ecx[7] = local_10;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf2 */
GEN_FRAME uint GEN_THISCALL F_00e4a000(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 uVar1;
  undefined4 * in_ecx;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx == (undefined4 *)0x0) {
    return 0;
  }
  if (param_3 != 0) {
    uVar3 = *(undefined4 *)(param_3 + 8);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar2 = uVar3;
  if (param_3 != 0) {
    uVar2 = *(undefined4 *)(param_3 + 8);
  }
  F_01050b90(in_ecx GEN_EDX_ARG,uVar2);
  in_ecx[5] = uVar1;
  in_ecx[4] = param_1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
  in_ecx[8] = param_3;
  in_ecx[7] = uVar3;
  in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
  return (uint)in_ecx;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf3 */
GEN_FRAME uint GEN_THISCALL F_00e4a080(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * in_ecx;
  undefined4 uVar3;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(param_2 + 8) == 0) {
      uVar3 = *(undefined4 *)(param_2 + 4);
    }
    else {
      uVar3 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar3);
    in_ecx[5] = uVar1;
    in_ecx[4] = uVar2;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *(undefined4 *)(param_2 + 4);
    in_ecx[8] = *(undefined4 *)(param_2 + 8);
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf4 */
GEN_FRAME uint GEN_THISCALL F_00e4a100(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * in_ecx;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    F_01050b90(in_ecx GEN_EDX_ARG,param_2);
    in_ecx[5] = param_2;
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[7] = 0;
    in_ecx[8] = 0;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: TargetEntityFactoryClass_TLobbyProtoUp_LobbyProtoChannel_Network_Application_TLobbyProtoDown::vf5 */
GEN_FRAME uint GEN_THISCALL F_00e4a160(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a160u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 * in_ecx;
  undefined4 uVar1;
  
  in_ecx = (undefined4 *)F_004069f0(0x24);
  if (in_ecx != (undefined4 *)0x0) {
    if (*(int *)(param_3 + 8) == 0) {
      uVar1 = *(undefined4 *)(param_3 + 4);
    }
    else {
      uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_3 + 8) + 8)));
    }
    F_01050b90(in_ecx GEN_EDX_ARG,uVar1);
    in_ecx[4] = param_1;
    *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1157da8));
    in_ecx[5] = param_2;
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157d88));
    in_ecx[7] = *(undefined4 *)(param_3 + 4);
    in_ecx[8] = *(undefined4 *)(param_3 + 8);
    in_ecx[6] = (*(undefined * PTR32 (*)[1])REFP(0x1157da0));
    return (uint)in_ecx;
  }
  return 0;
}

/* ref: FUN_00e4a1d0 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e4a1d0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a1d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e4a210 */
GEN_FRAME uint GEN_THISCALL F_00e4a210(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xe4a210u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  undefined * pvVar2;
  uint uVar3;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 *)&gen_args[0]);
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 4))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_FWD);
  F_00c330c0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),&(*(undefined4 *)&gen_args[1]));
  pvVar2 = (*(undefined * PTR32 *)(gen_frame + 0x8));
  if ((*(undefined * PTR32 *)(gen_frame + 0x8)) != *((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)))) {
    piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x4c)));
    ((GEN_TCODE *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1 GEN_EDX_ARG,*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x8)) + 0x10));
    F_00e49c00(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) GEN_EDX_ARG,&(*(undefined4 *)&gen_args[1]),pvVar2);
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 8))))((*(undefined * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00e4a270 */
GEN_FRAME uint GEN_THISCALL F_00e4a270(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a270u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a2c0 */
GEN_FRAME uint GEN_THISCALL F_00e4a2c0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a320 */
GEN_FRAME uint GEN_THISCALL F_00e4a320(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a380 */
GEN_FRAME uint GEN_THISCALL F_00e4a380(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a3e0 */
GEN_FRAME uint GEN_THISCALL F_00e4a3e0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 8) = 0;
  uVar1 = F_004069f0(0x18);
  if (uVar1 != 0) {
    *(uint *)((int)this + 4) = uVar1;
    *(uint *)uVar1 = uVar1;
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
    *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a440 */
GEN_FRAME byte F_00e4a440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  
  for (puVar1 = param_1; puVar1 != param_2; puVar1 = (undefined4 *)*puVar1) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(puVar1[2] + 8) + 0x10))))(puVar1[2] GEN_EDX_ARG);
  }
  return (byte)param_3;
}

/* ref: FUN_00e4a470 */
GEN_FRAME uint GEN_THISCALL F_00e4a470(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = F_004069f0(0xc);
  if (uVar1 != 0) {
    *(uint *)this = uVar1;
    *(uint *)uVar1 = uVar1;
    *(int *)(*(int *)this + 4) = *(int *)this;
    return (uint)this;
  }
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[3])REFP(0x1090534));
                    
  F_0046e060(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) GEN_EDX_ARG);
}

/* ref: FUN_00e4a4d0 */
GEN_FRAME uint GEN_THISCALL F_00e4a4d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xe4a4d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00e4a510 */
GEN_NOFRAME unsigned int GEN_THISCALL F_00e4a510(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00406ad0(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00e4a550 */
GEN_FRAME uint GEN_THISCALL F_00e4a550(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a550u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e49e50(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00e49450(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a5f0 */
GEN_FRAME uint GEN_THISCALL F_00e4a5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xe4a5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
    F_00e49ea0(this GEN_EDX_FWD);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      piVar2 = (int *)piVar3[2];
      if (*(char *)((int)piVar2 + 0x15) == '\0') {
        cVar1 = *(char *)(*piVar2 + 0x15);
        param_2 = piVar2;
        piVar2 = (int *)*piVar2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0x15);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0x15);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x15);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    F_00e496a0(this GEN_EDX_ARG,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return (uint)param_1;
}

/* ref: FUN_00e4a690 */
GEN_NOFRAME uint GEN_THISCALL F_00e4a690(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49ef0(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_00e4a6e0 */
GEN_NOFRAME uint GEN_THISCALL F_00e4a6e0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xe4a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x15);
  while (cVar1 == '\0') {
    F_00e49f30(this GEN_EDX_FWD,piVar2[2]);
    piVar3 = (int *)*piVar2;
    F_00406ad0(piVar2);
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x15);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

