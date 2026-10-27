#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: std::allocator<std::_Container_proxy>::construct_00be96e0 */
unsigned int F_00be96e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe96e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  if (param_1 != (undefined *)0x0) {
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  }
  return 0;
}

/* ref: FUN_00be9710 */
uint F_00be9710(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be9780 */
uint F_00be9780(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be9790 */
uint F_00be9790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00be97b0 */
uint F_00be97b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe97b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be97c0 */
uint F_00be97c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe97c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00be97e0 */
uint F_00be97e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe97e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (int)this +
         *((int *)GEN_TOP(((int)this + param_1 * 4 + *(int *)((int)this + 0x10)))) + *(int *)((int)this + 0x10)
  ;
}

/* ref: FUN_00be9810 */
uint F_00be9810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9880 */
byte F_00be9880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) == *(int *)(param_1 + 8);
}

/* ref: FUN_00be98b0 */
uint F_00be98b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe98b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) - *(int *)(param_1 + 8);
}

/* ref: FUN_00be98d0 */
uint F_00be98d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe98d0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9920 */
uint F_00be9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00be9960 */
unsigned int F_00be9960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9960u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00be99b0 */
uint F_00be99b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe99b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00be99d0 */
uint F_00be99d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe99d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00be9a00 */
uint F_00be9a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a00u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00be9a30 */
uint F_00be9a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  if ((*(int * PTR32 *)this != (int *)*param_1) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return (uint)this;
}

/* ref: FUN_00be9a90 */
byte F_00be9a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00be9af0 */
uint F_00be9af0(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9af0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x136);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00be9b10 */
uint F_00be9b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9b10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9b50 */
uint F_00be9b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9b50u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9b90 */
uint F_00be9b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9b90u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00be9bc0 */
uint F_00be9bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbe9bc0u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00be9c10 */
uint F_00be9c10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9c10u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9c50 */
uint F_00be9c50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbe9c50u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00be9d00 */
uint F_00be9d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbe9d00u, gen_a0, gen_a1, gen_a2, gen_a3);
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

/* ref: FUN_00be9db0 */
unsigned int F_00be9db0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbe9db0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00be9de0 */
unsigned int F_00be9de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9de0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00be9e10 */
unsigned int F_00be9e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 2;
    return 0;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffd;
  return 0;
}

/* ref: FUN_00be9e30 */
unsigned int F_00be9e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 8;
    return 0;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfff7;
  return 0;
}

/* ref: FUN_00be9e50 */
unsigned int F_00be9e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) | 4;
    return 0;
  }
  *(ushort *)(in_ecx + 0x34) = *(ushort *)(in_ecx + 0x34) & 0xfffb;
  return 0;
}

/* ref: FUN_00be9eb0 */
uint F_00be9eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9eb0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00be9ed0 */
uint F_00be9ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbe9ed0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00be9f20 */
uint F_00be9f20(unsigned int gen_a0)
{
  GEN_ENTER(0xbe9f20u, gen_a0, 0u, 0u, 0u);
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
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,0x136);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x136);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_00be9fa0 */
uint F_00be9fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbe9fa0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_00be9c50(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00bea020 */
uint F_00bea020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbea020u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  F_00be9d00(param_1,uVar1,0,param_4,uVar2,0,param_7,uVar3,0,param_10);
  return param_1;
}

/* ref: FUN_00bea0a0 */
unsigned int F_00bea0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea0a0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bea0d0 */
unsigned int F_00bea0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea0d0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bea100 */
uint F_00bea100(unsigned int gen_a0)
{
  GEN_ENTER(0xbea100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_00be9f20(this);
  uVar1 = F_00429760(*(undefined4 *)this,8,0x136);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00bea130 */
uint F_00bea130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbea130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  int param_7 = (int)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)0x0;
  (*(int * PTR32 *)(gen_frame + 0x18)) = (int *)0x0;
  if (this != (undefined *)0x0) {
    (*(int * PTR32 *)(gen_frame + 0x18)) = *(int * PTR32 *)this;
  }
  (*(int *)(gen_frame + 0x20)) = param_4;
  if (this != (undefined *)0x0) {
    piVar5 = *(int * PTR32 *)this;
  }
  uVar4 = param_4 - *(int *)((int)this + 0xc);
  (*(uint *)(gen_frame + 0x24)) = uVar4;
  (*(int *)(gen_frame + 0x28)) = param_7 - param_4;
  (*(int *)(gen_frame + 0x14)) = param_7;
  uVar7 = 0;
  if (uVar4 < (uint)((*(int *)((int)this + 0x10) + *(int *)((int)this + 0xc)) - param_7)) {
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*piVar5;
    }
    uVar6 = 0;
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    F_00be9fa0(((undefined1 *)(gen_frame + 0xc)),*(undefined4 *)this,0,*(undefined4 *)((int)this + 0xc),uVar6,0,param_4,
                 uVar7,0,param_7);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if (iVar2 != 0) {
          *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
          if ((uint)(*(int *)((int)this + 8) * 4) <= *(uint *)((int)this + 0xc)) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
          iVar2 = iVar2 + -1;
          if (iVar2 == 0) {
            *(undefined4 *)((int)this + 0xc) = 0;
          }
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  else {
    if (((*(int * PTR32 *)(gen_frame + 0x18)) != (int *)0x0) && ((undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18)) != (undefined4 *)0x0)) {
      uVar7 = *(undefined4 *)*(*(int * PTR32 *)(gen_frame + 0x18));
    }
    uVar6 = 0;
    if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
      uVar6 = *(undefined4 *)*piVar5;
    }
    F_00bea020(((undefined1 *)(gen_frame + 0xc)),uVar6,0,param_7,*(undefined4 *)this,0,
                 *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10),uVar7,0,param_4);
    if ((*(int *)(gen_frame + 0x28)) != 0) {
      iVar2 = *(int *)((int)this + 0x10);
      iVar3 = (*(int *)(gen_frame + 0x28));
      do {
        if ((iVar2 != 0) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *(undefined4 *)((int)this + 0xc) = 0;
        }
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      *(int *)((int)this + 0x10) = iVar2;
    }
  }
  iVar2 = *(int *)((int)this + 0xc);
  piVar5 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar5 = (int *)*puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = (*(uint *)(gen_frame + 0x24)) + iVar2;
  if ((piVar5 != (int *)0x0) && ((undefined4 *)*piVar5 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar5;
  }
  return (uint)param_1;
}

/* ref: FUN_00bea2c0 */
unsigned int F_00bea2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea2c0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00bea2f0 */
unsigned int F_00bea2f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea2f0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00bea320 */
uint F_00bea320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbea320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  int * piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)0x0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    piVar1 = *(int * PTR32 *)*param_2;
  }
  uVar3 = 0;
  if ((piVar1 != (int *)0x0) && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) {
    uVar3 = *(undefined4 *)*piVar1;
  }
  uVar2 = 0;
  if ((param_2 != (int *)0x0) && ((undefined4 *)*param_2 != (undefined4 *)0x0)) {
    uVar2 = *(undefined4 *)*param_2;
  }
  F_00bea130(this,param_1,uVar2,0,param_4,uVar3,0,param_4 + 1);
  return param_1;
}

/* ref: FUN_00bea3a0 */
uint F_00bea3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea3a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 * puVar8;
  ulonglong uVar9;
  
  uVar6 = *(uint *)((int)this + 8);
  if (0x3fffffff - uVar6 < param_1) {
                    
    F_00c4579a("deque<T> too long");
  }
  uVar7 = uVar6 >> 1;
  if (uVar7 < 8) {
    uVar7 = 8;
  }
  if ((param_1 < uVar7) && (uVar6 <= 0x3fffffff - uVar7)) {
    param_1 = uVar7;
  }
  uVar7 = *(uint *)((int)this + 0xc) >> 2;
  puVar3 = (undefined4 *)F_004296a0((uVar6 + param_1) * 4,0,0x136);
  iVar5 = *(int *)((int)this + 8);
  iVar2 = *(int *)((int)this + 4);
  puVar8 = puVar3 + uVar7;
  for (puVar4 = (undefined4 *)(iVar2 + uVar7 * 4); puVar4 != (undefined4 *)(iVar2 + iVar5 * 4);
      puVar4 = puVar4 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar4;
    }
    puVar8 = puVar8 + 1;
  }
  puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
  if (param_1 < uVar7) {
    puVar1 = puVar4 + param_1;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    iVar5 = *(int *)((int)this + 4);
    puVar8 = puVar3;
    for (puVar4 = (undefined4 *)(iVar5 + param_1 * 4); uVar6 = param_1,
        puVar4 != (undefined4 *)(iVar5 + uVar7 * 4); puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
  }
  else {
    puVar1 = puVar4 + uVar7;
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar4;
      }
      puVar8 = puVar8 + 1;
    }
    for (iVar5 = param_1 - uVar7; puVar4 = puVar3, iVar5 != 0; iVar5 = iVar5 + -1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
      }
      puVar8 = puVar8 + 1;
    }
    for (; uVar7 != 0; uVar7 = uVar7 - 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
  }
  uVar6 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar9 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,0x136);
    uVar6 = (uint)uVar9;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + param_1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar3;
  return uVar6;
}

/* ref: FUN_00bea520 */
uint F_00bea520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (((*(int *)((int)this + 0xc) + *(int *)((int)this + 0x10) & 3U) == 0) &&
     (*(uint *)((int)this + 8) <= *(int *)((int)this + 0x10) + 4U >> 2)) {
    F_00bea3a0(this,1);
  }
  uVar3 = *(int *)((int)this + 0xc) + *(int *)((int)this + 0x10);
  uVar4 = uVar3 >> 2;
  if (*(uint *)((int)this + 8) <= uVar4) {
    uVar4 = uVar4 - *(uint *)((int)this + 8);
  }
  if (*((int *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) == 0) {
    uVar2 = F_004296a0(0x10,0,0x136);
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4))) = uVar2;
  }
  uVar4 = *((uint *)GEN_TOP((*(int *)((int)this + 4) + uVar4 * 4)));
  puVar1 = ((undefined4 *)GEN_TOP((uVar4 + (uVar3 & 3) * 4)));
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  return uVar4;
}

/* ref: Client::System::Scheduler::Control::UIControl::vf0 */
uint F_00bea5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00be92f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bea5d0 */
uint F_00bea5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)((int)this + 8) + param_1 * 4 + (int)this)));
}

/* ref: FUN_00bea5f0 */
uint F_00bea5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + *(int *)(in_ecx + 0x10) + in_ecx;
}

/* ref: FUN_00bea610 */
unsigned int F_00bea610(float gen_a0)
{
  GEN_ENTER(0xbea610u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bea630 */
uint F_00bea630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  if (((param_1 != 0x1a) || (*(char *)((int)this + 0xc) != '\0')) &&
     (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0)) {
    bVar1 = F_00bc23a0(*(undefined * PTR32 *)((int)this + 0x24),param_1);
    return CONCAT31(extraout_var,bVar1);
  }
  return CONCAT31((int3)((uint)param_1 >> 8),1);
}

/* ref: FUN_00bea660 */
byte F_00bea660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea660u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint local_c;
  
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x13: ;
  case 0x19: ;
  case 0x1b: ;
    if (*(char *)((int)this + 0xd) == '\0') {
      return 1;
    }
    break;
  case 0x15: ;
    *(undefined1 *)((int)this + 0x39) = 1;
    return 1;
  case 0x16: ;
    if (*(char *)((int)this + 0xc) == '\0') {
      return 1;
    }
    break;
  case 0x17: ;
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    *(undefined1 *)((int)this + 0x39) = 0;
    if (*(char *)((int)this + 0xc) == '\0') {
      if (*(char *)((int)this + 0xd) == '\0') {
        return 1;
      }
      if (*(int *)((int)this + 0x24) == 0) {
        return 1;
      }
      F_00bea660(this,0x19,param_2);
      return 1;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  bVar4 = 1;
  if (piVar1 != (int *)0x0) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,param_1,param_2);
    bVar4 = (byte)uVar3;
  }
  if ((((param_1 == 0x17) && (*(char *)((int)this + 0x10) == '\0')) &&
      (iVar2 = *(int *)((int)this + 0x24), iVar2 != 0)) &&
     (local_c = (uint)(longlong)TRUNC((float10)*(float *)(iVar2 + 0x68)),
     local_c <= *(uint *)(iVar2 + 0x34))) {
    F_00beaee0(this,(float)(float10)0);
    bVar4 = 0;
  }
  return bVar4;
}

/* ref: FUN_00bea760 */
unsigned int F_00bea760(unsigned int gen_a0)
{
  GEN_ENTER(0xbea760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x24) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24),9,&REFG(undefined, 0x13056c0));
  }
  return 0;
}

/* ref: FUN_00bea780 */
unsigned int F_00bea780(unsigned int gen_a0)
{
  GEN_ENTER(0xbea780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
  }
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined2 *)((int)this + 0xe) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_00bea7c0 */
unsigned int F_00bea7c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbea7c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  *(undefined1 *)((int)this + 0x3b) = 0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bd1060(*(undefined * PTR32 *)((int)this + 0x24));
    *(byte *)((int)this + 0x3b) = bVar1;
  }
  return 0;
}

/* ref: FUN_00bea7e0 */
unsigned int F_00bea7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbea7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) && (*(char *)((int)this + 0x3b) != '\0')) {
    F_00bd0c40(*(undefined * PTR32 *)((int)this + 0x24));
    return 0;
  }
  return 0;
}

/* ref: FUN_00bea810 */
unsigned int F_00bea810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbea810u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bc3440(*(undefined * PTR32 *)((int)this + 0x24),param_1,param_2,param_3);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bea830 */
uint F_00bea830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x138) =
         *(uint *)(uVar1 + 0x138) ^ (param_2 & 0xff ^ *(uint *)(uVar1 + 0x138)) & 1;
  }
  return uVar1;
}

/* ref: FUN_00bea860 */
unsigned int F_00bea860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bcfec0(*(undefined * PTR32 *)((int)this + 0x24),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bea890 */
byte F_00bea890(void)
{
  GEN_ENTER(0xbea890u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00bea8a0 */
uint F_00bea8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bc28c0(*(undefined * PTR32 *)((int)this + 0x24),param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bea8c0 */
uint F_00bea8c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbea8c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    bVar1 = F_00bc2920(*(undefined * PTR32 *)((int)this + 0x24),param_1,param_2);
    return CONCAT31(extraout_var,bVar1);
  }
  return in_EAX & 0xffffff00;
}

/* ref: FUN_00bea8e0 */
uint F_00bea8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbea8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  if (*(int *)((int)this + 0x24) == 0) {
    this_00 = (undefined *)F_00406b90(0x260,0,0);
    if (this_00 == (undefined *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = F_00bd0210(this_00,0);
    }
    *(uint *)((int)this + 0x24) = uVar1;
    *(undefined * PTR32 *)(uVar1 + 0xdc) = this;
  }
  uVar1 = *(uint *)((int)this + 0x24);
  if (*(char *)((int)this + 0x3a) != '\0') {
    *(undefined1 *)(uVar1 + 0x30) = 1;
    uVar1 = *(uint *)((int)this + 0x24);
  }
  return uVar1;
}

/* ref: FUN_00bea930 */
uint F_00bea930(unsigned int gen_a0)
{
  GEN_ENTER(0xbea930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24),3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00bea980 */
unsigned int F_00bea980(unsigned int gen_a0)
{
  GEN_ENTER(0xbea980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if ((*(int *)((int)this + 0x28) != 0) && (*(int *)((int)this + 0x24) == 0)) {
    F_00bea8e0(this);
    F_00bd1460(*(undefined * PTR32 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x28),0,1,0xffffffff,0,1,0
                 ,0,0);
  }
  return 0;
}

/* ref: FUN_00bea9c0 */
unsigned int F_00bea9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x24) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x40))))(*(int * PTR32 *)((int)this + 0x24),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00bea9f0 */
uint F_00bea9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbea9f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x24);
  if (uVar1 != 0) {
    *(uint *)(uVar1 + 0x138) =
         *(uint *)(uVar1 + 0x138) ^ ((param_2 & 0xff) * 2 ^ *(uint *)(uVar1 + 0x138)) & 2;
  }
  return uVar1;
}

/* ref: FUN_00beaa20 */
uint F_00beaa20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbeaa20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = param_2;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  return (uint)this;
}

/* ref: FUN_00beaa70 */
uint F_00beaa70(unsigned int gen_a0)
{
  GEN_ENTER(0xbeaa70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24),3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  return uVar2;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf1 */
byte F_00beaad0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeaad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  if (*((int *)GEN_TOP((*(int *)(this + 0x20) + 4))) != 3) {
    if (((*(int *)(this + 0x24) != 0) && (bVar1 = F_00bcfb80(*(int *)(this + 0x24)), bVar1 != 0))
       && (uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 4))))(*(int * PTR32 *)(this + 0x24)),
          (char)uVar2 != '\0')) {
      F_00b618f0(this);
      return 1;
    }
    return 0;
  }
  *(undefined2 *)(this + 8) = 1;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return 1;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf5 */
byte F_00beab30(unsigned int gen_a0)
{
  GEN_ENTER(0xbeab30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (this[0x11] != (undefined1)0x0) {
    return 1;
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
  if (((char)uVar2 == '\0') || (*(int *)(this + 0x24) != 0)) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1;
    this[0x11] = (undefined1)0x1;
    this[0x15] = (undefined1)0x0;
    if (*(int *)(this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
      return 1;
    }
  }
  return bVar1;
}

/* ref: FUN_00beab70 */
byte F_00beab70(unsigned int gen_a0)
{
  GEN_ENTER(0xbeab70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x24) != (undefined *)0x0) {
    F_00bcfad0(*(undefined * PTR32 *)((int)this + 0x24),0);
  }
  *(undefined4 *)((int)this + 10) = 0x1000000;
  *(undefined2 *)((int)this + 0xe) = 0x101;
  *(undefined1 *)((int)this + 0x10) = 1;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
  }
  *(undefined1 *)((int)this + 0x38) = 0;
  return 1;
}

/* ref: FUN_00beabc0 */
uint F_00beabc0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeabc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + 0xdc))) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x24) + 0x1c))))(*(int * PTR32 *)((int)this + 0x24),3,&REFG(undefined, 0x13056c0));
    uVar2 = F_00bd0910(*(undefined * PTR32 *)((int)this + 0x24));
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00beac10 */
uint F_00beac10(unsigned int gen_a0)
{
  GEN_ENTER(0xbeac10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  
  if (*(char *)((int)this + 10) == '\0') {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  iVar1 = *(int *)((int)this + 0x24);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xfffffffb;
    *(undefined4 *)((int)this + 10) = 0x1010000;
    return CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  F_00bead30(this,*(float *)((int)this + 0x2c));
  uVar2 = F_00b61910(this);
  *(undefined1 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x11) = 1;
  *(undefined1 *)((int)this + 0x15) = 0;
  if (*(int *)((int)this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x15))) = 1;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}

/* ref: FUN_00beac80 */
uint F_00beac80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbeac80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined3 extraout_var = 0;
  
  piVar1 = *(int * PTR32 *)((int)param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
    *((undefined2 *)GEN_TOP((*(int *)((int)param_1 + 0x24) + 10))) = 1;
  }
  if (*(undefined * PTR32 *)((int)param_1 + 0x24) != (undefined *)0x0) {
    F_00bc23a0(*(undefined * PTR32 *)((int)param_1 + 0x24),0x25);
  }
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
  *(undefined2 *)((int)param_1 + 10) = 1;
  *(float *)((int)param_1 + 0x2c) = param_2;
  *(undefined1 *)((int)param_1 + 0x38) = 1;
  uVar3 = F_00beac10(param_1);
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  if (*(undefined * PTR32 *)((int)param_1 + 0x24) != (undefined *)0x0) {
    bVar2 = F_00bd1060(*(undefined * PTR32 *)((int)param_1 + 0x24));
    uVar3 = CONCAT31(extraout_var,bVar2);
    *(byte *)((int)param_1 + 0x3b) = bVar2;
  }
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  return uVar3;
}

/* ref: FUN_00bead00 */
uint F_00bead00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbead00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 3) {
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    uVar1 = (uint)*((ushort *)GEN_TOP((*(int *)(param_1 + 0x20) + 0xe)));
    if (*(int *)(param_1 + 0x34) < (int)uVar1) {
      return uVar1;
    }
  }
  uVar1 = F_00beac80(param_1,param_2);
  return uVar1;
}

/* ref: FUN_00bead30 */
uint F_00bead30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbead30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  code * pcVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  undefined3 extraout_var = 0;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(param_1 + 0x20);
  (*(char *)(gen_frame + 0x1b)) = '\0';
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)) = (*(undefined * PTR32 (*)[2])REFP(0x110cc10));
  (*(int *)(gen_frame + 0xc)) = param_1;
  iVar7 = 0;
  (*(int *)(gen_frame + 0x14)) = 0;
  if (0 < *(int *)(iVar6 + 0x14)) {
    (*(uint *)(gen_frame + 0x10)) = 0;
    do {
      iVar6 = *(int *)(iVar6 + 0x10) + (*(uint *)(gen_frame + 0x10)) + iVar6;
      (*(int *)(gen_frame + 0x14)) = iVar6;
      bVar3 = F_00b5f770(REFG(void * PTR32, 0x14c4ea0),iVar6,&(*(char *)(gen_frame + 0x1b)),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x8)));
      if ((bVar3 != 0) && ((*(char *)(gen_frame + 0x1b)) != '\0')) break;
      iVar6 = *(int *)(param_1 + 0x20);
      (*(uint *)(gen_frame + 0x10)) = (*(uint *)(gen_frame + 0x10)) + 0x10;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *(int *)(iVar6 + 0x14));
  }
  uVar5 = *(uint *)(param_1 + 4);
  iVar6 = 0;
  (*(uint *)(gen_frame + 0x10)) = uVar5;
  if (0 < *(int *)((*(int *)(gen_frame + 0x14)) + 0xc)) {
    do {
      piVar4 = (int *)F_00b60890((*(uint *)(gen_frame + 0x10)),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x14)) + iVar6 * 4 + *(int *)((*(int *)(gen_frame + 0x14)) + 8)))));
      uVar5 = 0;
      if ((piVar4 != (int *)0x0) &&
         ((uVar5 = piVar4[8], *(int *)(uVar5 + 4) != 3 ||
          (piVar4[0xd] = piVar4[0xd] + 1, (int)(uint)*(ushort *)(uVar5 + 0xe) <= piVar4[0xd])))) {
        piVar1 = (int *)piVar4[9];
        if (piVar1 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
          *(undefined2 *)(piVar4[9] + 10) = 1;
        }
        if ((undefined *)piVar4[9] != (undefined *)0x0) {
          F_00bc23a0((undefined *)piVar4[9],0x25);
        }
        pcVar2 = *(gen_code32 *)(*piVar4 + 4);
        piVar4[3] = 0;
        *(undefined1 *)(piVar4 + 4) = 0;
        *(undefined2 *)((int)piVar4 + 0x12) = 0;
        *(undefined1 *)(piVar4 + 5) = 0;
        *(undefined2 *)((int)piVar4 + 10) = 1;
        piVar4[0xb] = (int)gen_fl2bits(param_2);
        *(undefined1 *)(piVar4 + 0xe) = 1;
        uVar5 = (*pcVar2)(piVar4);
        if ((char)uVar5 != '\0') {
          uVar5 = piVar4[9];
          if (uVar5 == 0) {
            F_00bead30((int)piVar4,GEN_TOF(gen_bits2f(piVar4[0xb])));
            *(undefined4 *)((int)piVar4 + 10) = 0x1000000;
            *(undefined2 *)((int)piVar4 + 0xe) = 0x101;
            *(undefined1 *)(piVar4 + 4) = 1;
            *(undefined2 *)((int)piVar4 + 0x12) = 0;
            *(undefined1 *)(piVar4 + 5) = 0;
            if (piVar4[1] != 0) {
              *(undefined1 *)(piVar4[1] + 0x12) = 1;
              *(undefined1 *)(piVar4[1] + 0x13) = 1;
              *(undefined1 *)(piVar4[1] + 0x14) = 1;
            }
            uVar5 = piVar4[1];
            *(undefined1 *)(piVar4 + 0xe) = 0;
            *(undefined1 *)((int)piVar4 + 0x11) = 1;
            *(undefined1 *)((int)piVar4 + 0x15) = 0;
            if (uVar5 != 0) {
              *(undefined1 *)(uVar5 + 0x15) = 1;
            }
          }
          else {
            *(uint *)(uVar5 + 0x138) = *(uint *)(uVar5 + 0x138) & 0xfffffffb;
            *(undefined4 *)((int)piVar4 + 10) = 0x1010000;
          }
        }
        *(undefined1 *)((int)piVar4 + 0x3b) = 0;
        if ((undefined *)piVar4[9] != (undefined *)0x0) {
          bVar3 = F_00bd1060((undefined *)piVar4[9]);
          uVar5 = CONCAT31(extraout_var,bVar3);
          *(byte *)((int)piVar4 + 0x3b) = bVar3;
        }
        *(undefined1 *)((int)piVar4 + 0x39) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)((*(int *)(gen_frame + 0x14)) + 0xc));
  }
  return uVar5;
}

/* ref: FUN_00beaee0 */
uint F_00beaee0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbeaee0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0x24);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,0x1c,&REFG(undefined, 0x13056c0));
  }
  *(undefined4 *)(param_1 + 10) = 0x1000000;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (*(int *)(param_1 + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(param_1 + 4) + 0x14))) = 1;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 4))) == 1) {
    uVar2 = F_00b61380(*(undefined * PTR32 *)(param_1 + 4));
    return uVar2;
  }
  uVar2 = F_00bead30(param_1,param_2);
  return uVar2;
}

/* ref: FUN_00beaf60 */
uint F_00beaf60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbeaf60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  float local_8;
  
  local_8 = gen_bits2f(param_1[0xb]);
  if (GEN_ISNAN(local_8) == (GEN_ISNAN(local_8) || local_8 == 0.0)) {
    param_1[0xb] = 0;
    param_2 = (float)((float10)param_2 - (float10)local_8);
  }
  iVar1 = param_1[9];
  *(undefined1 *)(param_1 + 0xe) = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x30) == '\0') {
      if (*(char *)(iVar1 + 0x80) == '\0') {
        local_8 = *(float *)(iVar1 + 0x58);
      }
      else {
        local_8 = *(float *)(iVar1 + 0x6c);
      }
    }
    else {
      fVar3 = (float10)*(int *)(iVar1 + 0x34);
      if (*(int *)(iVar1 + 0x34) < 0) {
        fVar3 = fVar3 + (float10)*(float *)&REFG(undefined, 0x1088110);
      }
      local_8 = (float)fVar3;
    }
    F_00bd0e90(iVar1,param_2,1);
  }
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if (((((char)uVar2 == '\0') && (uVar2 = F_00beac10(param_1), (char)uVar2 != '\0')) &&
      (uVar2 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), (char)uVar2 != '\0')) &&
     (((char)param_1[3] != '\0' &&
      (uVar2 = ((code *)*(gen_code32 *)(*(int *)param_1[9] + 0x10))((int *)param_1[9]), (char)uVar2 != '\0'))))
  {
    fVar3 = F_00531220(param_1[9]);
    param_2 = (float)(fVar3 - (float10)local_8);
    if ((float10)param_2 < (float10)0) {
      param_2 = 0.0;
    }
    uVar2 = F_00beaee0(param_1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00beb050 */
uint F_00beb050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb050u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xdc) = param_2;
  return param_2;
}

/* ref: FUN_00beb060 */
uint F_00beb060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0x138)) & 1;
  *(uint *)(in_ecx + 0x138) = *(uint *)(in_ecx + 0x138) ^ uVar1;
  return uVar1;
}

/* ref: FUN_00beb0d0 */
uint F_00beb0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1106a98));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::System::Scheduler::Base::SceneConnectionBlock::vf0 */
uint F_00beb110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x110cc1c));
  if (*(int *)(this + 0x24) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + 0xdc))) = 0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x24) + 0x1c))))(*(int * PTR32 *)(this + 0x24),3,&REFG(undefined, 0x13056c0));
    F_00bd0910(*(undefined * PTR32 *)(this + 0x24));
    puVar1 = *(undefined4 * PTR32 *)(this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)(this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beb180 */
unsigned int F_00beb180(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x140) = 1;
  return 0;
}

/* ref: FUN_00beb190 */
uint F_00beb190(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb190u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0xd0);
  *(undefined4 *)(uVar1 + 0xac) = *(undefined4 *)((int)this + 300);
  *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xd0) + 0xb0))) = *(undefined4 *)((int)this + 0x130);
  return uVar1;
}

/* ref: FUN_00beb1c0 */
unsigned int F_00beb1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 0x140) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
    if (*(int *)((int)this + 0x140) == 1) {
      *(undefined4 *)((int)this + 0x140) = 2;
      F_0069c300(REFG(void * PTR32, 0x1371298),1);
    }
  }
  return 0;
}

/* ref: FUN_00beb200 */
uint F_00beb200(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int in_ecx;
  int iVar2;
  uint uVar3;
  int * piVar4;
  float local_8;
  
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined1 *)((int)this + 0x144) = 0;
  iVar2 = REFG(int, 0x1371298);
  iVar1 = *(int *)(REFG(int, 0x1371298) + 0x30);
  *(int *)((int)this + 0xe0) = iVar1;
  iVar1 = *(int *)(iVar2 + 0x34 + iVar1 * 4);
  F_00beb3b0((int)this + 0xf0,iVar1);
  *(float *)((int)this + 300) = REFG(float, 0x1094884);
  local_8 = *((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xb0)));
  in_ecx = *(int *)(REFG(int, 0x1379cb0) + 0x14);
  if (in_ecx != 0) {
    uVar3 = F_005d5c50(in_ecx);
    if (uVar3 != 0) {
      uVar3 = F_005d5c50(in_ecx);
      local_8 = *(float *)(uVar3 + 0x58);
    }
  }
  piVar4 = (int *)((int)this + 0x10);
  F_0069be10(piVar4,iVar1 + 0x30,iVar1 + 0x60,iVar1 + 0x70,REFG(float, 0x1094884),local_8,GEN_TOF(*((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xa4)))),GEN_TOF(*((float *)GEN_TOP((*(int *)(iVar1 + 0xc0) + 0xa8)))));
  uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x10))(piVar4);
  *(int * PTR32 *)(iVar2 + 0x38) = piVar4;
  return uVar3;
}

/* ref: FUN_00beb2e0 */
uint F_00beb2e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb2e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  F_006906c0((undefined *)((int)this + 0x10));
  F_00beb200(this);
  return (uint)this;
}

/* ref: FUN_00beb300 */
uint F_00beb300(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298),*(undefined4 *)((int)this + 0xe0));
  uVar2 = F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0xe0) * 4 + 0x34))),
                       (int)this + 0xf0);
  return uVar2;
}

/* ref: FUN_00beb340 */
uint F_00beb340(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298),*(undefined4 *)((int)this + 0xe0));
  F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)((int)this + 0xe0) * 4 + 0x34))),(int)this + 0xf0
              );
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 4))))((int)this + 0x10);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  return uVar2;
}

/* ref: FUN_00beb3b0 */
byte F_00beb3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 0x30);
  param_1[1] = *(undefined4 *)(param_2 + 0x34);
  param_1[2] = *(undefined4 *)(param_2 + 0x38);
  param_1[4] = *(undefined4 *)(param_2 + 0x60);
  param_1[5] = *(undefined4 *)(param_2 + 100);
  param_1[6] = *(undefined4 *)(param_2 + 0x68);
  param_1[8] = *(undefined4 *)(param_2 + 0x70);
  param_1[9] = *(undefined4 *)(param_2 + 0x74);
  param_1[10] = *(undefined4 *)(param_2 + 0x78);
  param_1[0xc] = *(undefined4 *)(param_2 + 0xc4);
  param_1[0xd] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xa4)));
  param_1[0xf] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xac)));
  param_1[0x10] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xb0)));
  param_1[0xe] = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0xc0) + 0xa8)));
  *(byte *)(param_1 + 0x11) = *(byte *)(param_2 + 200) & 1;
  bVar1 = (byte)(*(uint *)(param_2 + 200) >> 1) & 1;
  *(byte *)((int)param_1 + 0x45) = bVar1;
  return bVar1;
}

/* ref: FUN_00beb450 */
uint F_00beb450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)((char)param_1 != '\0') * 2 | *(uint *)((int)this + 200) & 0xfffffffd;
  *(uint *)((int)this + 200) = uVar1;
  return uVar1;
}

/* ref: FUN_00beb480 */
uint F_00beb480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb480u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  param_1[0xc] = *param_2;
  param_1[0xd] = param_2[1];
  param_1[0xe] = param_2[2];
  param_1[9] = param_1[9] | 2;
  param_1[0x18] = param_2[4];
  param_1[0x19] = param_2[5];
  param_1[0x1a] = param_2[6];
  param_1[0x1c] = param_2[8];
  param_1[0x1d] = param_2[9];
  param_1[0x1e] = param_2[10];
  param_1[0x31] = param_2[0xc];
  *(int *)(param_1[0x30] + 0xa4) = param_2[0xd];
  *(int *)(param_1[0x30] + 0xac) = param_2[0xf];
  *(int *)(param_1[0x30] + 0xb0) = param_2[0x10];
  if (((uint)param_1[0x32] >> 1 & 1) == 0) {
    *(int *)(param_1[0x30] + 0xa8) = param_2[0xe];
  }
  param_1[0x32] = (uint)((char)param_2[0x11] != '\0') | param_1[0x32] & 0xfffffffeU;
  param_1[0x32] = (uint)(*(char *)((int)param_2 + 0x45) != '\0') * 2 | param_1[0x32] & 0xfffffffdU;
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Control::CameraControl::vf0 */
uint F_00beb560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x110cc38));
  pvVar1 = REFG(void * PTR32, 0x1371298);
  F_0069c300(REFG(void * PTR32, 0x1371298),*(undefined4 *)(this + 0xe0));
  F_00beb480(*((undefined4 *)GEN_TOP(((int)pvVar1 + *(int *)(this + 0xe0) * 4 + 0x34))),this + 0xf0);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 4))))(this + 0x10);
  *(undefined * PTR32 * PTR32 *)(this + 0x10) = (*(undefined * PTR32 (*)[6])REFP(0x10b2ae0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beb5e0 */
unsigned int F_00beb5e0(float gen_a0)
{
  GEN_ENTER(0xbeb5e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00beb600 */
unsigned int F_00beb600(void)
{
  GEN_ENTER(0xbeb600u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00beb610 */
unsigned int F_00beb610(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x34) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x34));
    }
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  if (*(int *)((int)this + 0x30) != 0) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x30));
    }
    *(undefined4 *)((int)this + 0x30) = 0;
  }
  *(undefined1 *)((int)this + 0x38) = 0xff;
  return 0;
}

/* ref: FUN_00beb650 */
uint F_00beb650(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (((*(char *)(in_ecx + 0x39) != '\0') && (iVar1 = *(int *)(in_ecx + 0x20), iVar1 != 0)) &&
     (*(char *)(iVar1 + 0x12) == '\0')) {
    return *(uint *)(iVar1 + 4);
  }
  return 0;
}

/* ref: FUN_00beb670 */
uint F_00beb670(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb670u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x39) != '\0') && (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0)) {
    uVar1 = F_00bbaf90(*(undefined * PTR32 *)((int)this + 0x20));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00beb690 */
uint F_00beb690(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if ((*(char *)(in_ecx + 0x39) == '\0') || (uVar1 = *(uint *)(in_ecx + 0x20), uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_00beb6b0 */
uint F_00beb6b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb6b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(char *)((int)this + 0x39) != '\0') && (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0)) {
    uVar1 = F_00bbafd0(*(undefined * PTR32 *)((int)this + 0x20));
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00beb6d0 */
uint F_00beb6d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb6d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0x30) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 4), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1);
    if (*(int *)(uVar2 + 0xdc) == 0) {
      uVar2 = F_00c1ec00(*(undefined4 *)((int)this + 0x30));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00beb700 */
uint F_00beb700(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if ((*(int *)((int)this + 0x34) != 0) && (piVar1 = *(int * PTR32 *)((int)this + 4), piVar1 != (int *)0x0)
     ) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1);
    if (*(int *)(uVar2 + 0xdc) == 0) {
      uVar2 = F_00c1ec00(*(undefined4 *)((int)this + 0x34));
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00beb730 */
byte F_00beb730(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x20) != 0) &&
     ((*(int *)((int)this + 0x24) == 0 || (*(int *)((int)this + 0x24) == 1)))) {
    return *((byte *)GEN_TOP((*(int *)((int)this + 0x20) + 0x11)));
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x78))))(*(int * PTR32 *)((int)this + 4));
  return (byte)uVar1;
}

/* ref: FUN_00beb760 */
uint F_00beb760(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) &&
     ((*(int *)((int)this + 0x24) == 0 || (*(int *)((int)this + 0x24) == 1)))) {
    uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20));
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00beb790 */
uint F_00beb790(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x24) != 1)) {
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x80))))(*(int * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00beb7b0 */
uint F_00beb7b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb7b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x24) != 1)) {
    if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
      uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20));
      return uVar1;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4));
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x84))))(*(int * PTR32 *)((int)this + 4),param_1);
  return uVar1;
}

/* ref: FUN_00beb800 */
uint F_00beb800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((*(int *)(in_ecx + 0x24) != 0) && (*(int *)(in_ecx + 0x24) != 1)) {
    return *(uint *)(in_ecx + 0x28);
  }
  return param_2;
}

/* ref: FUN_00beb840 */
uint F_00beb840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeb840u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x20);
  if (uVar1 == param_2) {
    uVar1 = 0;
    *(undefined4 *)(in_ecx + 0x20) = 0;
    *(undefined1 *)(in_ecx + 0x39) = 0;
  }
  return uVar1;
}

/* ref: FUN_00beb860 */
uint F_00beb860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbeb860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x16) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x110ccc4));
  *(int *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x28) = param_3;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined2 *)((int)this + 0x38) = 0x1ff;
  if (param_1 != 0) {
    F_00b595f0(param_1);
    return (uint)this;
  }
  *(undefined1 *)((int)this + 0x39) = 0;
  return (uint)this;
}

/* ref: FUN_00beb8d0 */
uint F_00beb8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb8d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 * this_00;
  uint in_EAX = 0;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x2c);
  while (this_00 = puVar1, this_00 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)this_00[7];
    in_EAX = F_00c22560(this_00);
    if (*(char *)((int)this_00 + 0x16) == '\0') {
      in_EAX = ((code *)*(gen_code32 *)*this_00)(this_00,1);
    }
  }
  *(undefined4 *)((int)this + 0x2c) = 0;
  return in_EAX;
}

/* ref: FUN_00beb910 */
unsigned int F_00beb910(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    F_00b59c20(REFG(void * PTR32, 0x14c4e78),*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  return 0;
}

/* ref: FUN_00beb960 */
uint F_00beb960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbeb960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    F_00b59c20(REFG(void * PTR32, 0x14c4e78),*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  *(int *)((int)this + 0x20) = param_1;
  *(undefined4 *)((int)this + 0x24) = param_2;
  *(undefined4 *)((int)this + 0x28) = param_3;
  if (param_1 != 0) {
    *(undefined1 *)((int)this + 0x39) = 1;
    uVar1 = F_00b595f0(param_1);
    return uVar1;
  }
  *(undefined1 *)((int)this + 0x39) = 0;
  return 0;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf1 */
byte F_00beb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeb9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  byte bVar3;
  byte local_5;
  
  if (this[8] != (undefined1)0x0) {
    return 1;
  }
  bVar3 = 1;
  local_5 = 1;
  if (this[0x39] != (undefined1)0x0) {
    bVar3 = local_5;
    for (piVar2 = *(int * PTR32 *)(this + 0x2c); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
      local_5 = bVar3;
      if ((char)uVar1 == '\0') {
        local_5 = 0;
      }
      bVar3 = local_5;
    }
    piVar2 = *(int * PTR32 *)(this + 0x20);
    if ((piVar2 != (int *)0x0) &&
       ((uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2), (char)uVar1 == '\0' ||
        (((uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 100))))(*(int * PTR32 *)(this + 4)),
          *(int *)(uVar1 + 0xdc) != 0 &&
          (piVar2 = (int *)F_00bbaf50(*(undefined * PTR32 *)(this + 0x20)), piVar2 != (int *)0x0)) &&
         (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2), (char)uVar1 == '\0')))))) {
      return 0;
    }
    if (bVar3 == 0) {
      return 0;
    }
  }
  *(undefined2 *)(this + 8) = 1;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 9))) = 1;
  }
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined2 *)(this + 0x14) = 0;
  return bVar3;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf2 */
byte F_00bebab0(unsigned int gen_a0)
{
  GEN_ENTER(0xbebab0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xe] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      if ((char)uVar2 == '\0') {
        this[0x12] = (undefined1)0x0;
        return 0;
      }
    }
  }
  *(undefined4 *)(this + 10) = 0x1000000;
  this[0xe] = (undefined1)0x1;
  this[0x12] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf3 */
byte F_00bebb10(unsigned int gen_a0)
{
  GEN_ENTER(0xbebb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0xf] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      if ((char)uVar2 == '\0') {
        this[0x13] = (undefined1)0x0;
        return 0;
      }
    }
  }
  this[0xf] = (undefined1)0x1;
  this[0x13] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf4 */
byte F_00bebb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbebb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x10] != (undefined1)0x0) {
    return 1;
  }
  if (this[0x39] != (undefined1)0x0) {
    if (this[8] == (undefined1)0x0) {
      return 0;
    }
    for (piVar1 = *(int * PTR32 *)(this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      if ((char)uVar2 == '\0') {
        this[0x14] = (undefined1)0x0;
        return 0;
      }
    }
  }
  *(undefined4 *)(this + 10) = 0x1000000;
  *(undefined2 *)(this + 0xe) = 0x101;
  this[0x10] = (undefined1)0x1;
  *(undefined2 *)(this + 0x12) = 0;
  this[0x14] = (undefined1)0x0;
  if (*(int *)(this + 4) != 0) {
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x12))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x13))) = 1;
    *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x14))) = 1;
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf5 */
byte F_00bebbf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbebbf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (this[0x11] == (undefined1)0x0) {
    if (this[0x39] != (undefined1)0x0) {
      if (this[0x10] == (undefined1)0x0) {
        this[0x15] = (undefined1)0x0;
        return 0;
      }
      piVar1 = *(int * PTR32 *)(this + 0x2c);
      while( true ) {
        if (piVar1 == (int *)0x0) {
          this[0x11] = (undefined1)0x1;
          this[0x15] = (undefined1)0x0;
          if (*(int *)(this + 4) != 0) {
            *((undefined1 *)GEN_TOP((*(int *)(this + 4) + 0x15))) = 1;
          }
          return 1;
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
        if ((char)uVar2 == '\0') break;
        piVar1 = (int *)piVar1[7];
      }
      this[0x15] = (undefined1)0x0;
      return 0;
    }
    F_00b61970(this);
  }
  return 1;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf6 */
unsigned int F_00bebc60(unsigned int gen_a0)
{
  GEN_ENTER(0xbebc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  
  if (this[0x39] != (undefined1)0x0) {
    for (iVar1 = *(int *)(this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bebca0 */
byte F_00bebca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbebca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * this_00;
  int iVar1;
  int * piVar2;
  uint uVar3;
  byte bVar4;
  
  if (*(char *)((int)this + 0x39) == '\0') {
    return 1;
  }
  bVar4 = 1;
  if ((param_1 != 0x12) && (param_1 != 0x1a)) {
    if (param_1 == 0x25) {
      for (this_00 = *(undefined * PTR32 *)((int)this + 0x2c); this_00 != (undefined *)0x0;
          this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
        F_00c227f0(this_00);
      }
    }
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_1);
          if ((char)uVar3 == '\0') {
            bVar4 = 0;
          }
        }
      }
    }
    return bVar4;
  }
  iVar1 = *(int *)((int)this + 0x2c);
  do {
    if (iVar1 == 0) {
      return 1;
    }
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x28))(piVar2,param_1);
        if ((char)uVar3 == '\0') {
          return 0;
        }
      }
    }
    iVar1 = *(int *)(iVar1 + 0x1c);
  } while( true );
}

/* ref: FUN_00bebd70 */
uint F_00bebd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbebd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  int iVar5;
  
  iVar1 = *(int *)((int)this + 0x20);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0x12) == '\0') && (iVar1 = *(int *)(iVar1 + 4), iVar1 != 0)) {
    piVar2 = (int *)F_00b5feb0(*(undefined4 *)(param_1 + 4));
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar5 = 0;
    if (0 < piVar2[1]) {
      piVar4 = (int *)(*piVar2 + (int)piVar2);
      do {
        if (*piVar4 == *((int *)GEN_TOP((*(int *)(param_1 + 0x20) + 8)))) {
          iVar5 = 0;
          if (piVar4[2] < 1) {
            return 0;
          }
          piVar2 = (int *)(piVar4[1] + (int)piVar4);
          do {
            if (*(int *)(iVar1 + 0x74) == *piVar2) {
              uVar3 = F_00bc5360(*(undefined * PTR32 *)((int)this + 0x20),piVar2);
              return uVar3;
            }
            iVar5 = iVar5 + 1;
            piVar2 = piVar2 + 3;
          } while (iVar5 < piVar4[2]);
          return 0;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 3;
      } while (iVar5 < piVar2[1]);
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_00bebe20 */
unsigned int F_00bebe20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xbebe20u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int iVar1;
  int * piVar2;
  
  if (*(char *)(param_1 + 0x39) != '\0') {
    for (iVar1 = *(int *)(param_1 + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x50))(piVar2);
        }
        for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          ((code *)*(gen_code32 *)(*piVar2 + 0x54))(piVar2);
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00bebeb0 */
uint F_00bebeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbebeb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)((int)this + 0x20);
  if ((char)param_1 == '\0') {
    if (*(char *)((int)this + 0x39) == '\0') goto LAB_00bebee2;
    if ((uVar3 != 0) && (((*(byte *)(uVar3 + 0x3fc) & 1) != 0 || (*(char *)(uVar3 + 0x12) != '\0')))
       ) {
      *(undefined1 *)((int)this + 0x39) = 0;
    }
  }
  if (*(char *)((int)this + 0x39) != '\0') {
    for (piVar1 = *(int * PTR32 *)((int)this + 0x2c); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[7]) {
      if ((char)piVar1[10] != '\0') {
        for (piVar2 = (int *)piVar1[9]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xc4))(piVar2,param_1);
        }
      }
      if ((char)piVar1[4] == '\0') {
        if (*(char *)((int)piVar1 + 9) != '\0') {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
        }
        if ((((char)piVar1[2] != '\0') || ((char)piVar1[10] == '\0')) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1), (char)uVar3 != '\0')) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
        }
      }
    }
    if (*(char *)((int)this + 0x10) != '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 9) != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this);
    }
    if (*(char *)((int)this + 8) == '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 0x13) != '\0') {
      uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0xc))(this);
    }
    if (*(char *)((int)this + 0xf) == '\0') {
      return uVar3;
    }
    if (*(char *)((int)this + 0x14) == '\0') {
      return uVar3;
    }
    uVar3 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this);
    return uVar3;
  }
LAB_00bebee2: ;
  if (*(char *)((int)this + 0x11) != '\0') {
    return uVar3;
  }
  uVar3 = F_00b61970(this);
  return uVar3;
}

/* ref: FUN_00bebfb0 */
byte F_00bebfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbebfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  int * piVar3;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x39) == '\0') {
    return 0;
  }
  bVar2 = local_5;
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if ((*(char *)(iVar1 + 0x28) != '\0') &&
       (piVar3 = *(int * PTR32 *)(iVar1 + 0x24), piVar3 != (int *)0x0)) {
      bVar2 = 1;
      do {
        ((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3,param_1);
        piVar3 = (int *)piVar3[7];
      } while (piVar3 != (int *)0x0);
    }
  }
  return bVar2;
}

/* ref: FUN_00bec010 */
byte F_00bec010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  int * piVar2;
  uint uVar3;
  byte local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x39) == '\0') {
    return 0;
  }
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        if ((piVar2[9] != 0) &&
           (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2,param_1), (char)uVar3 != '\0')) {
          local_5 = 1;
        }
      }
    }
  }
  if (((param_1 == 1) || (param_1 == 3)) || (param_1 == 5)) {
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      *(undefined4 *)(iVar1 + 10) = 0x1000000;
      *(undefined2 *)(iVar1 + 0xe) = 0x101;
      *(undefined1 *)(iVar1 + 0x10) = 1;
      *(undefined2 *)(iVar1 + 0x12) = 0;
      *(undefined1 *)(iVar1 + 0x14) = 0;
      if (*(int *)(iVar1 + 4) != 0) {
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x12))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x13))) = 1;
        *((undefined1 *)GEN_TOP((*(int *)(iVar1 + 4) + 0x14))) = 1;
      }
    }
    *(undefined4 *)((int)this + 10) = 0x1000000;
    *(undefined2 *)((int)this + 0xe) = 0x101;
    *(undefined1 *)((int)this + 0x10) = 1;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
    if (*(int *)((int)this + 4) != 0) {
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x12))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x13))) = 1;
      *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x14))) = 1;
    }
  }
  return local_5;
}

/* ref: FUN_00bec120 */
byte F_00bec120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec120u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  int * piVar2;
  undefined * this_00;
  
  piVar2 = param_2;
  if ((*(char *)((int)this + 0x39) != '\0') && (piVar2 = param_1, (undefined *)*param_1 != this)) {
    this_00 = (undefined *)*param_2;
    if (this_00 == (undefined *)0x0) {
      param_2[1] = 0;
      this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
    }
    if (this_00 != (undefined *)0x0) {
      do {
        bVar1 = F_00c22850(this_00,param_1,param_2 + 1);
        if (bVar1 != 0) {
          *param_2 = (int)this_00;
          return 1;
        }
        this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
      } while (this_00 != (undefined *)0x0);
    }
    *param_1 = (int)this;
    return 1;
  }
  *piVar2 = 0;
  return 0;
}

/* ref: FUN_00bec1a0 */
byte F_00bec1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec1a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  undefined * this_00;
  
  if (*(char *)((int)this + 0x39) == '\0') {
    *param_2 = 0;
    return 0;
  }
  this_00 = (undefined *)*param_2;
  if (this_00 == (undefined *)0x0) {
    param_2[1] = 0;
    this_00 = *(undefined * PTR32 *)((int)this + 0x2c);
  }
  if (this_00 != (undefined *)0x0) {
    do {
      bVar1 = F_00c228b0(this_00,param_1,param_2 + 1);
      if (bVar1 != 0) {
        *param_2 = (int)this_00;
        return 1;
      }
      this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c);
    } while (this_00 != (undefined *)0x0);
  }
  *param_2 = 0;
  return 0;
}

/* ref: FUN_00bec210 */
float F_00bec210(unsigned int gen_a0)
{
  GEN_ENTER(0xbec210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * this_00;
  float fVar2;
  
  if (*(char *)((int)this + 0x39) != '\0') {
    for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
      if (*(char *)(iVar1 + 0x28) != '\0') {
        for (this_00 = *(undefined * PTR32 *)(iVar1 + 0x24); this_00 != (undefined *)0x0;
            this_00 = *(undefined * PTR32 *)((int)this_00 + 0x1c)) {
          if (*(int *)((int)this_00 + 0x2c) == 6) {
            fVar2 = F_00be5220(this_00);
            return fVar2;
          }
        }
      }
    }
  }
  return (float)(float10)0;
}

/* ref: FUN_00bec250 */
uint F_00bec250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(char *)((int)this + 0x39) != '\0') {
    if ((*(int *)((int)this + 0x24) == 0) || (*(int *)((int)this + 0x24) == 1)) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x84))))(*(int * PTR32 *)((int)this + 4),param_1);
    }
    else if (*(undefined * PTR32 *)((int)this + 0x20) == (undefined *)0x0) {
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x7c))))(*(int * PTR32 *)((int)this + 4));
    }
    else {
      uVar1 = F_00bbad30(*(undefined * PTR32 *)((int)this + 0x20));
    }
    if ((uVar1 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) != (undefined *)0x0)) {
      uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])));
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_00bec2c0 */
uint F_00bec2c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbec2c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00beb8d0(this);
  if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
    if (*(int *)((int)this + 0x34) != 0) {
      F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x34));
      *(undefined4 *)((int)this + 0x34) = 0;
    }
    if (*(int *)((int)this + 0x30) != 0) {
      if (*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) {
        F_00bc5400(*(undefined * PTR32 *)((int)this + 0x20),*(int *)((int)this + 0x30));
      }
      *(undefined4 *)((int)this + 0x30) = 0;
    }
    *(undefined1 *)((int)this + 0x38) = 0xff;
    uVar1 = F_00b59c20(REFG(void * PTR32, 0x14c4e78),*(undefined4 *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined1 *)((int)this + 0x39) = 0;
  }
  return uVar1;
}

/* ref: FUN_00bec320 */
byte F_00bec320(unsigned int gen_a0)
{
  GEN_ENTER(0xbec320u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  char * pcVar2;
  byte bVar3;
  undefined * this_00;
  uint uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if ((piVar1 == (int *)0x0) || (*(int *)((int)this + 0x20) == 0)) {
    return 0;
  }
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1)));
  if (this_00 == (undefined *)0x0) {
    return 0;
  }
  if (*(char *)((int)this + 0x38) != -1) goto LAB_00bec3d2;
  if (*(int *)((int)this_00 + 0xdc) == 0) {
    *(undefined4 *)((int)this + 0x30) = 0;
    bVar3 = F_00bcfd80(this_00);
    *(byte *)((int)this + 0x38) = bVar3;
    if ((bVar3 != 0) && (uVar4 = F_00bcfda0(this_00,&(*(undefined * PTR32 *)(gen_frame + 0x8))), uVar4 != 0)) {
      uVar4 = F_00bc52c0(*(undefined * PTR32 *)((int)this + 0x20),
                           (uint)(*(char *)((int)this + 0x38) != '\x01'),uVar4,(*(undefined * PTR32 *)(gen_frame + 0x8)));
      goto LAB_00bec3a9;
    }
  }
  else {
    uVar4 = F_00bebd70(this,*(int *)((int)this_00 + 0xdc));
    *(undefined1 *)((int)this + 0x38) = 0;
LAB_00bec3a9: ;
    *(uint *)((int)this + 0x30) = uVar4;
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  pcVar2 = *(char * PTR32 *)((int)this_00 + 0xd8);
  if ((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) {
    uVar4 = F_00bc52c0(*(undefined * PTR32 *)((int)this + 0x20),3,pcVar2,0xffffffff);
    *(uint *)((int)this + 0x34) = uVar4;
  }
LAB_00bec3d2: ;
  if (*(undefined * PTR32 *)((int)this + 0x30) != (undefined *)0x0) {
    bVar3 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x30));
    if (bVar3 != 0) {
      return 1;
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 4))))(*(int * PTR32 *)((int)this + 0x30));
    if ((char)uVar4 == '\0') {
      if ((*(uint *)((int)this_00 + 0x2c) >> 4 & 1) == 0) {
        return 0;
      }
      F_00c1eba0(*(undefined * PTR32 *)((int)this + 0x30));
    }
  }
  if (*(undefined * PTR32 *)((int)this + 0x34) != (undefined *)0x0) {
    bVar3 = F_00c1ebd0(*(undefined * PTR32 *)((int)this + 0x34));
    if (bVar3 != 0) {
      return 1;
    }
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x34) + 4))))(*(int * PTR32 *)((int)this + 0x34));
    if ((char)uVar4 == '\0') {
      if ((*(uint *)((int)this_00 + 0x2c) >> 4 & 1) == 0) {
        return 0;
      }
      F_00c1eba0(*(undefined * PTR32 *)((int)this + 0x34));
    }
  }
  bVar3 = F_00bc4530(*(undefined * PTR32 *)((int)this + 0x20));
  return bVar3 != 0;
}

/* ref: FUN_00bec460 */
byte F_00bec460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int * piVar2;
  uint uVar3;
  
  for (iVar1 = *(int *)((int)this + 0x2c); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1c)) {
    if (*(char *)(iVar1 + 0x28) != '\0') {
      for (piVar2 = *(int * PTR32 *)(iVar1 + 0x24); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[7]) {
        ((code *)*(gen_code32 *)(*piVar2 + 0xe0))(piVar2,param_1);
      }
    }
  }
  if ((*(undefined * PTR32 *)((int)this + 0x20) != (undefined *)0x0) &&
     (uVar3 = F_00bbaea0(*(undefined * PTR32 *)((int)this + 0x20),param_1), (char)uVar3 != '\0')) {
    F_00bec010(this,5,0);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bec4e0 */
uint F_00bec4e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec4e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  if (param_1 == 0) {
    uVar3 = F_00406b90(0x2c,0,0);
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c22530(uVar3);
    }
  }
  else {
    uVar3 = F_00c22530(param_1);
    *(undefined1 *)(uVar3 + 0x16) = 1;
  }
  *(undefined * PTR32 *)(uVar3 + 4) = this;
  *(undefined4 *)(uVar3 + 0x20) = param_2;
  piVar1 = (int *)(uVar3 + 0x18);
  iVar2 = *(int *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) == 0) {
    *piVar1 = 0;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    *(uint *)((int)this + 0x2c) = uVar3;
    return uVar3;
  }
  do {
    iVar4 = iVar2;
    iVar2 = *(int *)(iVar4 + 0x1c);
  } while (*(int *)(iVar4 + 0x1c) != 0);
  if (piVar1 != (int *)0x0) {
    *(uint *)(iVar4 + 0x1c) = uVar3;
    *piVar1 = iVar4;
    *(undefined4 *)(uVar3 + 0x1c) = 0;
    return uVar3;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar4;
  *(undefined4 *)(uVar3 + 0x1c) = 0;
  return uVar3;
}

/* ref: FUN_00bec580 */
uint F_00bec580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = 0;
  *(undefined4 *)((int)this + 10) = 0;
  *(undefined4 *)((int)this + 0xe) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x12) = 0;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  piVar4 = (int *)(param_1 + 0x18);
  iVar1 = *(int *)((int)this + 0x2c);
  if (*(int *)((int)this + 0x2c) == 0) {
    *piVar4 = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)((int)this + 0x2c) = param_1;
    return uVar2;
  }
  do {
    iVar3 = iVar1;
    iVar1 = *(int *)(iVar3 + 0x1c);
  } while (*(int *)(iVar3 + 0x1c) != 0);
  if (piVar4 == (int *)0x0) {
    *(undefined4 *)(iVar3 + 0x1c) = 0;
    *(int *)&REFG(undefined, 0x0) = iVar3;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return uVar2;
  }
  *(int *)(iVar3 + 0x1c) = param_1;
  *piVar4 = iVar3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return uVar2;
}

/* ref: FUN_00bec5f0 */
byte F_00bec5f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbec5f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(char *)((int)this + 0x39) != '\0') &&
     (piVar1 = *(int * PTR32 *)((int)this + 0x20), piVar1 != (int *)0x0)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    if ((char)uVar3 == '\0') {
      return 0;
    }
    bVar2 = F_00bec320(this);
    return bVar2;
  }
  return 1;
}

/* ref: FUN_00bec620 */
byte F_00bec620(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbec620u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  uint * puVar1;
  int * piVar2;
  int * piVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte local_5;
  
  if (param_1 == 1) {
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    piVar2 = *(int * PTR32 *)((int)this + 0x20);
    if (piVar2 != (int *)0x0) {
      uVar6 = ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
      if ((char)uVar6 == '\0') {
        return 0;
      }
      bVar5 = F_00bec320(this);
      if (bVar5 == 0) {
        return 0;
      }
    }
  }
  else if (param_1 == 0xe) {
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
    F_00beb610(this);
    *(undefined4 *)((int)this + 10) = 0;
    *(undefined2 *)((int)this + 0xe) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
  }
  else {
    if (param_1 == 0x23) {
      if (*(char *)((int)this + 0x39) == '\0') {
        return 1;
      }
      if (*(undefined * PTR32 *)((int)this + 0x20) == (undefined *)0x0) {
        return 1;
      }
      F_00bc5100(*(undefined * PTR32 *)((int)this + 0x20));
      return 1;
    }
    if (*(char *)((int)this + 0x39) == '\0') {
      return 1;
    }
  }
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 9: ;
    if (*(int *)((int)this + 0x20) != 0) {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x20) + 0x3fc)));
      *puVar1 = *puVar1 | 4;
    }
    break;
  case 10: ;
  case 0xb: ;
    *(undefined4 *)((int)this + 10) = 0;
    *(undefined2 *)((int)this + 0xe) = 0;
    *(undefined1 *)((int)this + 0x10) = 0;
    *(undefined2 *)((int)this + 0x12) = 0;
    *(undefined1 *)((int)this + 0x14) = 0;
    break;
  case 0x13: ;
    if ((*(char *)((int)this + 0x39) == '\0') || (*(int *)((int)this + 0x20) == 0)) {
      return 1;
    }
    uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4));
    bVar5 = F_00bc3d50(*(undefined * PTR32 *)((int)this + 0x20),*(undefined4 *)(uVar6 + 0xd0));
    if (bVar5 == 0) {
      return 0;
    }
    F_00bc3e70(*(undefined * PTR32 *)((int)this + 0x20));
  }
  piVar2 = *(int * PTR32 *)((int)this + 0x2c);
  local_5 = 1;
  do {
    if (piVar2 == (int *)0x0) {
      if (param_1 == 0xf) {
        F_00beb610(this);
      }
      else if ((param_1 == 0x1e) &&
              (((iVar4 = *(int *)(param_2 + 4), iVar4 == 1 || (iVar4 == 3)) || (iVar4 == 5)))) {
        F_00bc38a0(this);
        return local_5;
      }
      return local_5;
    }
    if (param_1 == 7) {
      if (((piVar2[8] != 0) && (*(int *)(piVar2[8] + 0xc) != 0)) &&
         (uVar6 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 100))))(*(int * PTR32 *)((int)this + 4)),
         *(int *)(uVar6 + 0xdc) == 0)) {
        F_00c227f0(piVar2);
      }
    }
    else if (param_1 - 10U < 2) {
      *(undefined4 *)((int)piVar2 + 10) = 0;
      *(undefined2 *)((int)piVar2 + 0xe) = 0;
      *(undefined1 *)(piVar2 + 4) = 0;
      *(undefined2 *)((int)piVar2 + 0x12) = 0;
      *(undefined1 *)(piVar2 + 5) = 0;
    }
    if ((char)piVar2[10] != '\0') {
      piVar3 = (int *)piVar2[9];
      if (param_1 == 0x1d) {
        if (piVar3 == (int *)0x0) goto LAB_00bec887;
        local_5 = 0;
      }
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[7]) {
        uVar6 = ((code *)*(gen_code32 *)(*piVar3 + 0x2c))(piVar3,param_1,param_2);
        if ((char)uVar6 == '\0') {
          local_5 = 0;
        }
      }
      if (param_1 == 0x10) {
        if ((char)piVar2[4] == '\0') {
          if (*(char *)((int)piVar2 + 9) != '\0') {
            ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
          }
          if (((char)piVar2[2] != '\0') || ((char)piVar2[10] == '\0')) {
            if (*(char *)((int)piVar2 + 0x13) != '\0') {
              ((code *)*(gen_code32 *)(*piVar2 + 0xc))(piVar2);
            }
            if ((*(char *)((int)piVar2 + 0xf) != '\0') && ((char)piVar2[5] != '\0')) {
              ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
            }
          }
        }
      }
      else if ((param_1 == 0x1e) &&
              (((iVar4 = *(int *)(param_2 + 4), iVar4 == 1 || (iVar4 == 3)) || (iVar4 == 5)))) {
        *(undefined4 *)((int)piVar2 + 10) = 0x1000000;
        *(undefined2 *)((int)piVar2 + 0xe) = 0x101;
        *(undefined1 *)(piVar2 + 4) = 1;
        *(undefined2 *)((int)piVar2 + 0x12) = 0;
        *(undefined1 *)(piVar2 + 5) = 0;
        if (piVar2[1] != 0) {
          *(undefined1 *)(piVar2[1] + 0x12) = 1;
          *(undefined1 *)(piVar2[1] + 0x13) = 1;
          *(undefined1 *)(piVar2[1] + 0x14) = 1;
        }
      }
    }
LAB_00bec887: ;
    piVar2 = (int *)piVar2[7];
  } while( true );
}

/* ref: FUN_00bec970 */
uint F_00bec970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00bec9d0 */
uint F_00bec9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00bec9e0 */
uint F_00bec9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00bec9f0 */
uint F_00bec9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbec9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) + param_1 * 0xc + (int)this;
}

/* ref: FUN_00beca10 */
uint F_00beca10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0xc + (int)this;
}

/* ref: Client::System::Scheduler::Base::SchedulerActor::vf0 */
uint F_00beca40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[6])REFP(0x10f34d4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beca70 */
uint F_00beca70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeca70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  if (*param_1 == 0) {
    *(undefined4 *)this = 0;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = (int)this + -0x18;
    return 0;
  }
  do {
    iVar2 = iVar1;
    iVar1 = *(int *)(iVar2 + 0x1c);
  } while (*(int *)(iVar2 + 0x1c) != 0);
  if (this != (undefined *)0x0) {
    *(uint *)(iVar2 + 0x1c) = (int)this - 0x18U;
    *(int *)this = iVar2;
    *(undefined4 *)((int)this + 4) = 0;
    return (int)this - 0x18U;
  }
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(int *)&REFG(undefined, 0x0) = iVar2;
  *(undefined4 *)&REFG(undefined, 0x4) = 0;
  return 0;
}

/* ref: FUN_00becac0 */
uint F_00becac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bf0d90(this,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  return (uint)this;
}

/* ref: FUN_00becaf0 */
uint F_00becaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00bf0d90(this,param_1 + 0x10);
  *(int *)((int)this + 0x80) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  *(undefined4 *)((int)this + 0x84) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf43 */
uint F_00becb40(unsigned int gen_a0)
{
  GEN_ENTER(0xbecb40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf42 */
uint F_00becb50(unsigned int gen_a0)
{
  GEN_ENTER(0xbecb50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf45 */
uint F_00becb60(unsigned int gen_a0)
{
  GEN_ENTER(0xbecb60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf44 */
uint F_00becb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbecb70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x84);
}

/* ref: Client::System::Scheduler::Instance::LayoutMemberObject::vf0 */
uint F_00becb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110cce4));
  F_00bf0db0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00becbc0 */
unsigned int F_00becbc0(float gen_a0)
{
  GEN_ENTER(0xbecbc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00becbe0 */
uint F_00becbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined2 *)((int)this + 0x94) = 0;
  *(undefined1 *)((int)this + 0x96) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf26 */
byte F_00becc40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecc40u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) == 0) {
    return 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x68))))
                    (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return (byte)uVar1;
}

/* ref: FUN_00becc60 */
uint F_00becc60(unsigned int gen_a0)
{
  GEN_ENTER(0xbecc60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined * this_00;
  int iVar1;
  undefined4 * puVar2;
  byte bVar3;
  undefined * this_01;
  uint uVar4;
  int * piVar5;
  
  (*(uint *)(gen_frame + 0xf8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xfc);
  this_00 = *(undefined * PTR32 *)(REFG(int, 0x1375b00) + 0x28);
  if (this_00 != (undefined *)0x0) {
    ((undefined4 *)(gen_frame + 0x8))[0] = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    bVar3 = F_00b60730(this_00,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    while (bVar3 != 0) {
      this_01 = (undefined *)F_00beb650((*(undefined4 *)(gen_frame + 0x4)));
      if (((this_01 != (undefined *)0x0) && (iVar1 = *(int *)((int)this_01 + 0x50), iVar1 != 0)) &&
         ((*(undefined * PTR32 *)(iVar1 + 4) == this || (*(undefined * PTR32 *)(iVar1 + 8) == this)))) {
        F_00b63220(this_01);
      }
      bVar3 = F_00b60730(this_00,&(*(undefined4 *)(gen_frame + 0x4)),((undefined4 *)(gen_frame + 0x8)));
    }
  }
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar2 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  if (*(int *)((int)this + 0x88) == 1) {
    piVar5 = (int *)F_005f3350(8,*(undefined4 *)((int)this + 0x8c),0);
    uVar4 = 0;
    if (piVar5 != (int *)0x0) {
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0xe0))(piVar5,1);
    }
  }
  else {
    uVar4 = *(int *)((int)this + 0x88) - 2;
    if (uVar4 == 0) {
      piVar5 = (int *)F_00a1b710();
      uVar4 = 0;
      if (piVar5 != (int *)0x0) {
        uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x24))(piVar5,1,0);
        F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
        return uVar4;
      }
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xf8)) ^ (uint)(uint)(gen_frame + 0xfc));
  return uVar4;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf42 */
unsigned int F_00becd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf13 */
uint F_00becd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecd90u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)(this + 0x80);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(this + 0x88) == 8) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))
                        (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
    if (*(int *)(this + 0x88) != 9) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x34))
                        (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar2 + 0xb4))(piVar2)));
    if (piVar2 != (int *)0x0) {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x5c))
                        (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf12 */
uint F_00becde0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecde0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf14 */
uint F_00becdf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbecdf0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf16 */
uint F_00bece00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece00u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x40))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf18 */
uint F_00bece10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece10u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x48))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf21 */
byte F_00bece20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece20u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[9];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *((int * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0x80)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))
                      (piVar1,(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),(*(undefined4 *)&gen_args[3]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    return (byte)uVar2;
  }
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  return (byte)(*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf9 */
uint F_00bece50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece50u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x24))))
                      (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf36 */
uint F_00bece70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbece70u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  uint extraout_EAX = 0;
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x90))))
                      (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  F_00b61de0((undefined *)this,param_1);
  return extraout_EAX;
}

/* ref: FUN_00becea0 */
unsigned int F_00becea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbecea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  F_00becc60(this);
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00406ad0(*(int *)((int)this + 0x9c));
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  F_00b61c10(this);
  return 0;
}

/* ref: FUN_00becee0 */
uint F_00becee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbecee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * this_00;
  uint uVar1;
  int iVar2;
  
  this_00 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80))));
  if (this_00 != (int *)0x0) {
    iVar2 = this_00[0x3b];
    if ((param_1 != 0) && (iVar2 != 0)) {
      if (*(char *)(param_1 + 0x59) == '\0') {
        *(undefined1 *)(iVar2 + 0x66) = 0xff;
      }
      else {
        *(char *)(iVar2 + 0x66) = *(char *)(param_1 + 0x59) + -1;
      }
      if (*(char *)(param_1 + 0x59) == '\0') {
        *(undefined1 *)(iVar2 + 0x67) = 0xff;
      }
      else {
        *(char *)(iVar2 + 0x67) = *(char *)(param_1 + 0x5a) + -1;
      }
    }
    if (*(char *)((int)this + 0x96) != '\0') {
      F_00aaa5b0(this_00,1);
    }
    if (*(int *)((int)this + 0x88) == 2) {
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this_00[0x3b] + 0x128))((int *)this_00[0x3b]);
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0),0x10000003,uVar1 & 0xffff);
      iVar2 = this_00[0xb6f];
      uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x1c))(this_00);
      switch((unsigned int)(uintptr_t)((char)iVar2)) {
      case '\x01': ;
        iVar2 = ((char)uVar1 == '\0') + 1;
        break;
      case '\x02': ;
        iVar2 = ((char)uVar1 == '\0') + 2;
        break;
      case '\x03': ;
      case '\x04': ;
        iVar2 = 3;
        break;
      default: ;
        iVar2 = 0;
        break;
      case '\a': ;
      case '\b': ;
        iVar2 = 1;
        break;
      case '\t': ;
      case '\n': ;
        iVar2 = 4;
      }
      F_00b5f440(REFG(void * PTR32, 0x14c4ea0),0x10000014,iVar2);
    }
  }
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf15 */
uint F_00bed020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed020u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    switch((unsigned int)(uintptr_t)(*((undefined1 *)GEN_TOP((*(int *)(this + 0x80) + 0x71))))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x27: ;
    case 0x2e: ;
    case 0x49: ;
      uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x34))))
                        (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                         param_7,param_8);
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf17 */
uint F_00bed0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar1 + 0x71))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x2e: ;
    case 0x49: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x44))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf19 */
uint F_00bed120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)piVar1 + 0x71))) {
    case 8: ;
    case 9: ;
    case 0xb: ;
    case 0x25: ;
    case 0x26: ;
    case 0x2e: ;
    case 0x49: ;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x4c))
                        (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      return uVar2;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf2 */
unsigned int F_00bed1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 8))))(*(int * PTR32 *)(this + 0x80),param_1);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    if (this_00 != (undefined *)0x0) {
      F_00a9fae0(this_00);
    }
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf30 */
uint F_00bed1f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed1f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  undefined * this_00;
  uint uVar2;
  
  if (*(int *)(this + 0x80) == 0) {
    uVar2 = F_00b626d0((undefined *)this,param_1);
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x78))))(*(int * PTR32 *)(this + 0x80),param_1);
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))(*(int * PTR32 *)(this + 0x80))));
    *(undefined4 *)(this + 0x20) = *puVar1;
    *(undefined4 *)(this + 0x24) = puVar1[1];
    *(undefined4 *)(this + 0x28) = puVar1[2];
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    uVar2 = 0;
    if (this_00 != (undefined *)0x0) {
      uVar2 = F_00a9fae0(this_00);
      return uVar2;
    }
  }
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf3 */
uint F_00bed260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed260u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))
                      (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf4 */
uint F_00bed280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
  }
  *(undefined4 *)(this + 0x30) = *param_1;
  *(undefined4 *)(this + 0x34) = param_1[1];
  *(undefined4 *)(this + 0x38) = param_1[2];
  uVar2 = param_1[3];
  *(uint *)(this + 0x3c) = uVar2;
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf5 */
uint F_00bed2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed2c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x14))))
                      (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x30);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf6 */
unsigned int F_00bed2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed2e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x18))))(*(int * PTR32 *)(this + 0x80),param_1);
  }
  *(undefined4 *)(this + 0x40) = *param_1;
  *(undefined4 *)(this + 0x44) = param_1[1];
  *(undefined4 *)(this + 0x48) = param_1[2];
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf7 */
uint F_00bed320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed320u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  if (*(int *)(this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x1c))))
                      (*(int * PTR32 *)(this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return (uint)(this + 0x40);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf8 */
uint F_00bed340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined * this_00;
  
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x20))))(*(int * PTR32 *)(this + 0x80),param_1);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    if (this_00 != (undefined *)0x0) {
      F_00a9fae0(this_00);
    }
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  uVar1 = param_1[7];
  *(uint *)(this + 0x3c) = uVar1;
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf34 */
unsigned int F_00bed3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed3c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x88))))(*(int * PTR32 *)(this + 0x80),param_1);
  }
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  return 0;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf35 */
uint F_00bed400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  
  if (*(int *)(this + 0x80) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0x8c))))(*(int * PTR32 *)(this + 0x80),param_1);
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x80) + 0xc))))(*(int * PTR32 *)(this + 0x80))));
    *(undefined4 *)(this + 0x20) = *puVar1;
    *(undefined4 *)(this + 0x24) = puVar1[1];
    *(undefined4 *)(this + 0x28) = puVar1[2];
    return (uint)puVar1;
  }
  uVar2 = F_00b61dd0((undefined *)this,param_1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf10 */
uint F_00bed460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbed460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  piVar1 = *(int * PTR32 *)(this + 0x80);
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  if (piVar1 == (int *)0x0) {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
  }
  else {
    uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1);
    bVar2 = F_00b61df0(param_1,uVar3,param_2);
    if (bVar2 != 0) {
      return (uint)param_1;
    }
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1)));
  }
  *param_1 = *puVar4;
  param_1[1] = puVar4[1];
  param_1[2] = puVar4[2];
  param_1[4] = puVar4[4];
  param_1[5] = puVar4[5];
  param_1[6] = puVar4[6];
  param_1[7] = puVar4[7];
  param_1[8] = puVar4[8];
  param_1[9] = puVar4[9];
  param_1[10] = puVar4[10];
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf32 */
uint F_00bed560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbed560u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  byte bVar1;
  int * piVar2;
  uint in_EAX = 0;
  uint uVar3;
  
  piVar2 = *(int * PTR32 *)(this + 0x80);
  if (piVar2 != (int *)0x0) {
    bVar1 = *(byte *)((int)piVar2 + 0x71);
    in_EAX = bVar1 - 8;
    if (in_EAX < 0x42) {
      in_EAX = (uint)*((byte *)GEN_TOP(((int)&REFG(undefined * PTR32, 0xbed594) + (uint)bVar1)));
      switch((unsigned int)(uintptr_t)(bVar1)) {
      case 8: ;
      case 9: ;
      case 0xb: ;
      case 0x25: ;
      case 0x26: ;
      case 0x2e: ;
      case 0x49: ;
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x80))
                          (piVar2,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar3;
      }
    }
  }
  return in_EAX;
}

/* ref: FUN_00bed5e0 */
uint F_00bed5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbed5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  char cVar1;
  ushort uVar2;
  byte bVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  undefined * this_00;
  undefined4 * puVar8;
  bool bVar9;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  bVar9 = false;
  (*(uint *)(gen_frame + 0x14)) = 0;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x84) = param_1[0xc];
    *(undefined4 *)((int)this + 0x88) = param_1[0xd];
    *(undefined4 *)((int)this + 0x90) = param_1[0x10];
    *(undefined1 *)((int)this + 0x96) = *(undefined1 *)((int)param_1 + 0x3a);
    bVar9 = *(char *)(param_1 + 0x11) != '\0';
    (*(uint *)(gen_frame + 0x14)) = (uint)*(byte *)(param_1 + 0xe);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x88))) {
  case 1: ;
    piVar4 = (int *)F_005f3350(8,*(undefined4 *)((int)this + 0x8c),0);
    if (piVar4 != (int *)0x0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x114))(piVar4);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = uVar5;
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
      ((code *)*(gen_code32 *)(*piVar4 + 0xe0))(piVar4,0);
    }
    break;
  case 2: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    piVar4 = (int *)F_00a1b710();
    if ((piVar4 == (int *)0x0) || (bVar9)) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
    }
    else {
      iVar6 = piVar4[0x20];
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = iVar6;
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x25;
      if (iVar6 == 0) {
LAB_00bed824: ;
        (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      }
      else {
        ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1,0);
      }
    }
    goto LAB_00bed83e;
  case 3: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
    F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    (*(uint *)(gen_frame + 0xc)) = (uint)*(byte *)((int)param_1 + 0x3b);
    (*(uint *)(gen_frame + 0x8)) = 0;
    do {
      piVar4 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(*(uint *)(gen_frame + 0x8)));
      if (piVar4 == (int *)0x0) {
        iVar6 = -0x20000000;
      }
      else {
        iVar6 = *piVar4;
      }
      if (((iVar6 != -0x20000000) &&
          (piVar4 = (int *)F_00a64450(&REFG(undefined, 0x14a9a18),iVar6), piVar4 != (int *)0x0)) &&
         (bVar3 = F_00a9f620(piVar4), bVar3 == 0)) {
        if ((*(uint *)(gen_frame + 0xc)) == 0) {
          (*(uint *)(gen_frame + 0x14)) = (*(uint *)(gen_frame + 0x8)) & 0xff;
          if (!bVar9) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = piVar4[0x20];
            *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x49;
            *(undefined1 *)((int)this + 0x95) = 0;
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] == 0) goto LAB_00bed824;
            ((code *)*(gen_code32 *)(*piVar4 + 0x28))(piVar4,1,0);
            goto LAB_00bed83e;
          }
          break;
        }
        (*(uint *)(gen_frame + 0xc)) = (*(uint *)(gen_frame + 0xc)) - 1;
      }
      (*(uint *)(gen_frame + 0x8)) = (*(uint *)(gen_frame + 0x8)) + 1;
    } while ((int)(*(uint *)(gen_frame + 0x8)) < 8);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
    *(bool *)((int)this + 0x95) = !bVar9;
LAB_00bed83e: ;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] == 0) {
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x10)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)0x0;
    }
    break;
  case 4: ;
    if (*(int *)((int)this + 0x90) != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x58,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x58);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 8;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    }
    break;
  case 5: ;
    if (*(int *)((int)this + 0x90) != 0) {
      (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x98,0,0);
      F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x98);
      *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 9;
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
      (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = *(undefined4 *)((int)this + 0x90);
      uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this);
      F_00a1ea10((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 3,uVar5);
    }
    break;
  case 8: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x250,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x250);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar6 = param_1[0x15];
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x14,0x100,(int)param_1 + *(int *)(iVar6 + 0x30 + (int)param_1) + iVar6);
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x54,0x100,(int)param_1 + *(int *)((int)param_1 + iVar6 + 0x34) + iVar6);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[2] = param_1[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = 0x50;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xd] = 0x150;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xe] = *(undefined4 *)((int)param_1 + iVar6 + 0x38);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xf] = *(undefined4 *)((int)param_1 + iVar6 + 0x3c);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x10] = *(undefined4 *)((int)param_1 + iVar6 + 0x40);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0x11] = *(undefined4 *)((int)param_1 + iVar6 + 0x44);
    break;
  case 9: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x154,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x154);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    F_00c49908((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x15,0x100,
              (int)param_1 + *(int *)(param_1[0x15] + 0x30 + (int)param_1) + param_1[0x15]);
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 6;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[1] = *(undefined4 *)((int)this + 0x74);
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[2] = param_1[2];
    (*(undefined4 * PTR32 *)(gen_frame + 0x10))[0xc] = 0x54;
    break;
  case 10: ;
    (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = (undefined4 *)F_00406b90(0x70,0,0);
    F_00c48350((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,0x70);
    puVar7 = param_1;
    puVar8 = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    for (iVar6 = 0xc; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    *(*(undefined4 * PTR32 *)(gen_frame + 0x10)) = 0x27;
    *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x15) = *(undefined2 *)((int)param_1 + 0x46);
    *(undefined2 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x56) = *(undefined2 *)(param_1 + 0x12);
    *(undefined2 *)((*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x16) = *(undefined2 *)((int)param_1 + 0x4a);
    *(undefined2 *)((int)(*(undefined4 * PTR32 *)(gen_frame + 0x10)) + 0x5a) = *(undefined2 *)(param_1 + 0x13);
  }
  cVar1 = *(char *)((int)param_1 + 0x5b);
  if ((cVar1 != '\0') && ((*(int *)((int)this + 0x88) == 2 || (*(int *)((int)this + 0x88) == 3)))) {
    bVar3 = (byte)(*(uint *)(gen_frame + 0x14));
    (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = (ushort)(byte)(*(uint *)(gen_frame + 0x14));
    uVar2 = (ushort)(*(uint *)(gen_frame + 0x14));
    (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    if (cVar1 == '\0') {
      (*(uint *)(gen_frame + 0x14)) = (uint)uVar2;
    }
    else if (cVar1 == '\x01') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(2,bVar3);
      (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    }
    else if (cVar1 == '\x02') {
      (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(1,bVar3);
      (*(uint *)(gen_frame + 0x14)) = (uint)(ushort)(*(uint *)(gen_frame + 0x14));
    }
  }
  if ((*(undefined4 * PTR32 *)(gen_frame + 0x10)) != (undefined4 *)0x0) {
    piVar4 = (int *)F_00b61ff0((*(undefined4 * PTR32 *)(gen_frame + 0x10)),0,(*(uint *)(gen_frame + 0x14)));
    *(int * PTR32 *)((int)this + 0x80) = piVar4;
    uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 0x68))(piVar4);
    if ((char)uVar5 == '\0') {
      *(undefined4 * PTR32 *)((int)this + 0x98) = param_1;
      if (*(int *)((int)this + 0x9c) != 0) {
        F_00406ad0(*(int *)((int)this + 0x9c));
        *(undefined4 *)((int)this + 0x9c) = 0;
      }
      *(undefined4 * PTR32 *)((int)this + 0x9c) = (*(undefined4 * PTR32 *)(gen_frame + 0x10));
    }
    else {
      F_00becee0(this,param_1);
      F_00406ad0((*(undefined4 * PTR32 *)(gen_frame + 0x10)));
    }
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    switch((unsigned int)(uintptr_t)(*(char *)((int)param_1 + 0x39))) {
    case '\x01': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0;
      break;
    case '\x02': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x19;
      break;
    default: ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x32;
      break;
    case '\x04': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 0x4b;
      break;
    case '\x05': ;
      (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = 100;
    }
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this)));
    if (piVar4 != (int *)0x0) {
      uVar5 = ((code *)*(gen_code32 *)(*piVar4 + 200))(piVar4);
      this_00 = ((undefined *)GEN_TOP((~-(uint)(uVar5 != 1) & (uint)piVar4)));
      if (this_00 != (undefined *)0x0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0xc0))))
                  (*(int * PTR32 *)((int)this + 0x80),(undefined4)gen_fl2bits((float)(float10)1));
        F_0068e790(((undefined1 *)(gen_frame + 0x20)));
        F_00c48350(((undefined1 *)(gen_frame + 0x20)),0,0x48);
        F_00c46aa0(((undefined1 *)(gen_frame + 0x20)),(int)this_00 + 0x730,0x1a);
        (*(undefined1 *)(gen_frame + 0x23)) = (byte)(*(uint *)(gen_frame + 0x14));
        F_006a9a90(this_00,((undefined1 *)(gen_frame + 0x20)),1);
      }
    }
  }
  iVar6 = REFG(int, 0x14c4e78);
  if ((*(int *)((int)this + 0x88) == 2) && (REFG(int, 0x14c4e78) != 0)) {
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80));
    *(uint *)(iVar6 + 0x18) = uVar5;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x4c))))(*(int * PTR32 *)((int)this + 0x80));
    *(uint *)(iVar6 + 0x1c) = uVar5;
  }
  uVar5 = ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this);
  if (uVar5 != 0) {
    *(undefined2 *)(uVar5 + 0x72) = 3;
  }
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf25 */
uint F_00bedc90(unsigned int gen_a0)
{
  GEN_ENTER(0xbedc90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    in_EAX = ((code *)*(gen_code32 *)(*piVar1 + 0x68))(piVar1);
    if ((char)in_EAX == '\0') {
      bVar2 = F_00b61c40(*(undefined * PTR32 *)(this + 0x80));
      if (bVar2 == 0) {
        return CONCAT31(extraout_var,bVar2);
      }
      F_00becee0(this,*(undefined4 *)(this + 0x98));
      in_EAX = 0;
      if (*(int *)(this + 0x9c) != 0) {
        in_EAX = F_00406ad0(*(int *)(this + 0x9c));
        *(undefined4 *)(this + 0x9c) = 0;
      }
    }
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}

/* ref: FUN_00bedcf0 */
unsigned int F_00bedcf0(unsigned int gen_a0)
{
  GEN_ENTER(0xbedcf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
  }
  if (*(char *)((int)this + 0x94) != '\0') {
    bVar2 = F_005e16a0();
    if (bVar2 != 0) {
      F_00bed5e0(this,0);
      *(undefined1 *)((int)this + 0x94) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00bedd30 */
uint F_00bedd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x40);
  *(undefined1 *)((int)this + 0x96) = *(undefined1 *)(param_1 + 0x3a);
  uVar1 = param_1;
  switch((unsigned int)(uintptr_t)(*(undefined4 *)((int)this + 0x88))) {
  case 1: ;
    if (*(int *)((int)this + 0x8c) != 0) {
      *(undefined1 *)((int)this + 0x94) = 1;
      return param_1;
    }
    break;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 8: ;
  case 9: ;
  case 10: ;
    uVar1 = F_00bed5e0(this,param_1);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf27 */
uint F_00beddb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeddb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar2 = *(int *)(this + 0x98);
  }
  F_00a1e7d0(((undefined1 *)(gen_frame + 0x0)),iVar2 + 0xc);
  ((code *)*(gen_code32 *)(*(int *)this + 0x20))(this,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)(this + 0x84) = *(undefined4 *)(iVar2 + 0x30);
  if ((((*(int *)(this + 0x88) != *(int *)(iVar2 + 0x34)) ||
       (*(int *)(this + 0x8c) != *(int *)(iVar2 + 0x3c))) ||
      (uVar1 = *(uint *)(this + 0x90), uVar1 != *(uint *)(iVar2 + 0x40))) ||
     ((uint)(byte)this[0x96] != (int)*(char *)(iVar2 + 0x3a))) {
    F_00becc60(this);
    uVar1 = F_00bedd30(this,iVar2);
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf20 */
uint F_00bede50(unsigned int gen_a0)
{
  GEN_ENTER(0xbede50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  
  bVar2 = F_00b61c40(this);
  uVar3 = CONCAT31(extraout_var,bVar2);
  if (bVar2 != 0) {
    piVar1 = *(int * PTR32 *)(this + 0x80);
    if (piVar1 != (int *)0x0) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x50))(piVar1);
    }
    if (this[0x94] != (undefined1)0x0) {
      bVar2 = F_005e16a0();
      uVar3 = CONCAT31(extraout_var_00,bVar2);
      if (bVar2 != 0) {
        uVar3 = F_00bed5e0(this,0);
        this[0x94] = (undefined1)0x0;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00bedea0 */
byte F_00bedea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedea0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x66) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bedeb0 */
byte F_00bedeb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedeb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x67) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00bedee0 */
byte F_00bedee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedee0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x730 + in_ecx);
}

/* ref: Client::System::Scheduler::Instance::HelperObject::vf0 */
uint F_00bedf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110ce2c));
  F_00becc60(this);
  if (*(int *)(this + 0x9c) != 0) {
    F_00406ad0(*(int *)(this + 0x9c));
    *(undefined4 *)(this + 0x9c) = 0;
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bedf60 */
uint F_00bedf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbedf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined1 *)((int)this + 0x8a) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  *(undefined2 *)((int)this + 0x88) = 0;
  return (uint)this;
}

/* ref: FUN_00bedfa0 */
uint F_00bedfa0(unsigned int gen_a0)
{
  GEN_ENTER(0xbedfa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x84) != 0) {
    uVar2 = F_0050c620(*(int *)((int)this + 0x84),0,0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return uVar2;
}

/* ref: FUN_00bedff0 */
uint F_00bedff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbedff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00406b90(0x14,0,0);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00c22e00(this_00,param_1,param_2);
    *(uint *)((int)this + 0x80) = uVar1;
    return uVar1;
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  return 0;
}

/* ref: FUN_00bee040 */
unsigned int F_00bee040(unsigned int gen_a0)
{
  GEN_ENTER(0xbee040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  if (*(int *)((int)this + 0x84) != 0) {
    F_0050c620(*(int *)((int)this + 0x84),0,0);
    *(undefined4 *)((int)this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00b61c10(this);
  return 0;
}

/* ref: FUN_00bee090 */
unsigned int F_00bee090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  if ((*(int *)((int)this + 0x84) == 0) && (*(int *)((int)this + 0x80) == 0)) {
    F_004ff300(((undefined1 *)(gen_frame + 0x4)),3);
    (*(undefined4 *)(gen_frame + 0x8)) = 0x637462;
    uVar1 = F_00513d20(((undefined1 *)(gen_frame + 0x4)),&(*(undefined4 *)(gen_frame + 0x8)),param_1,0,0,0);
    *(uint *)((int)this + 0x84) = uVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf20 */
uint F_00bee0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee0f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  
  piVar2 = *(int * PTR32 *)(this + 0x84);
  if (piVar2 != (int *)0x0) {
    piVar2 = piVar2 + 0x22;
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2;
    UNLOCK();
    if (iVar1 == 2) {
      piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x84) + 0x8c)));
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2;
      UNLOCK();
      if (iVar1 < 8) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x84) + 0x5c))))(*(int * PTR32 *)(this + 0x84));
        this_00 = (undefined *)F_00406b90(0x14,0,0);
        if (this_00 != (undefined *)0x0) {
          uVar3 = F_00c22e00(this_00,uVar3,0);
          *(uint *)(this + 0x80) = uVar3;
          return uVar3;
        }
        piVar2 = (int *)0x0;
        *(undefined4 *)(this + 0x80) = 0;
      }
    }
  }
  return (uint)piVar2;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf42 */
unsigned int F_00bee170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf13 */
uint F_00bee180(void)
{
  GEN_ENTER(0xbee180u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf12 */
uint F_00bee190(void)
{
  GEN_ENTER(0xbee190u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::ControlPointObject::vf0 */
uint F_00bee1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cedc));
  if (*(int *)(this + 0x84) != 0) {
    F_0050c620(*(int *)(this + 0x84),0,0);
    *(undefined4 *)(this + 0x84) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)(this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)(this + 0x80) = 0;
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee210 */
uint F_00bee210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cf8c));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf42 */
unsigned int F_00bee250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf13 */
uint F_00bee280(void)
{
  GEN_ENTER(0xbee280u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf12 */
uint F_00bee290(void)
{
  GEN_ENTER(0xbee290u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::KeepRange::vf0 */
uint F_00bee2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[43])REFP(0x110cf8c));
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee2d0 */
uint F_00bee2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bf0d90(this,param_1);
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00bee300 */
uint F_00bee300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_00bf0d90(this,param_1 + 0x10);
  *(int *)((int)this + 0x80) = param_1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf43 */
uint F_00bee330(unsigned int gen_a0)
{
  GEN_ENTER(0xbee330u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf42 */
uint F_00bee340(unsigned int gen_a0)
{
  GEN_ENTER(0xbee340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: FUN_00bee350 */
uint F_00bee350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf21 */
uint F_00bee360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00bf0e10((undefined *)this,param_1);
  if (*(undefined * PTR32 *)(this + 0x80) != (undefined *)0x0) {
    uVar1 = F_005f51d0(*(undefined * PTR32 *)(this + 0x80),param_1,0);
  }
  return uVar1;
}

/* ref: FUN_00bee3c0 */
unsigned int F_00bee3c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee3c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  if (*(int *)((int)this + 0x80) != 0) {
    F_00a1b5a0((undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  F_00bf0db0(this);
  return 0;
}

/* ref: FUN_00bee400 */
uint F_00bee400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbee400u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00a1d100(0xffff,*(undefined4 *)((int)this + 0x74),param_2,param_1,
                       "Client.System.Scheduler.Instance.LayoutSharedGroupInstanceObject",1,0,10,0);
  *(uint *)((int)this + 0x80) = uVar1;
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf45 */
uint F_00bee450(unsigned int gen_a0)
{
  GEN_ENTER(0xbee450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf44 */
uint F_00bee460(unsigned int gen_a0)
{
  GEN_ENTER(0xbee460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LayoutSharedGroupInstanceObject::vf0 */
uint F_00bee470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee470u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110d084));
  if (*(int *)(this + 0x80) != 0) {
    F_00a1b5a0(this + 0x80);
    *(undefined4 *)(this + 0x80) = 0;
  }
  F_00bf0db0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee4c0 */
uint F_00bee4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf42 */
uint F_00bee4f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee4f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e3e0(param_1,"Client.System.Scheduler.Instance.LightObject",0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf43 */
unsigned int F_00bee520(unsigned int gen_a0)
{
  GEN_ENTER(0xbee520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf44 */
uint F_00bee560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf11 */
uint F_00bee570(void)
{
  GEN_ENTER(0xbee570u, 0u, 0u, 0u, 0u);
  return 0x110d16d;
}

/* ref: FUN_00bee580 */
unsigned int F_00bee580(unsigned int gen_a0)
{
  GEN_ENTER(0xbee580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf13 */
uint F_00bee5c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee5c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf12 */
uint F_00bee5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee5d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::LightObject::vf0 */
uint F_00bee5e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee5e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d174));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee640 */
uint F_00bee640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf42 */
uint F_00bee670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e4c0(param_1,"Client.System.Scheduler.Instance.VfxObject");
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf43 */
unsigned int F_00bee6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee6a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf44 */
uint F_00bee6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee6e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf11 */
uint F_00bee6f0(void)
{
  GEN_ENTER(0xbee6f0u, 0u, 0u, 0u, 0u);
  return 0x110d253;
}

/* ref: FUN_00bee700 */
unsigned int F_00bee700(unsigned int gen_a0)
{
  GEN_ENTER(0xbee700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf13 */
uint F_00bee740(unsigned int gen_a0)
{
  GEN_ENTER(0xbee740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf12 */
uint F_00bee750(unsigned int gen_a0)
{
  GEN_ENTER(0xbee750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::VfxObject::vf0 */
uint F_00bee760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d25c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee7c0 */
uint F_00bee7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee7c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf20 */
unsigned int F_00bee7f0(void)
{
  GEN_ENTER(0xbee7f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf42 */
uint F_00bee800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e520(param_1,"Client.System.Scheduler.Instance.BgObject",0);
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf43 */
unsigned int F_00bee830(unsigned int gen_a0)
{
  GEN_ENTER(0xbee830u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf44 */
uint F_00bee870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee870u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf27 */
uint F_00bee880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this,param_1);
  return uVar1;
}

/* ref: FUN_00bee890 */
unsigned int F_00bee890(unsigned int gen_a0)
{
  GEN_ENTER(0xbee890u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf11 */
uint F_00bee8d0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  uint * puVar2;
  
  if (*(int *)(in_ecx + 0x80) == 0) {
    puVar2 = (uint *)&REFG(undefined, 0x110d33a);
  }
  else {
    iVar1 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x80) + 0x70)));
    puVar2 = (uint *)(iVar1 + 0x3c);
    if (0xf < *(uint *)(iVar1 + 0x50)) {
      return *puVar2;
    }
  }
  return (uint)puVar2;
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf13 */
uint F_00bee8f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbee8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf12 */
uint F_00bee900(unsigned int gen_a0)
{
  GEN_ENTER(0xbee900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::BgObject::vf0 */
uint F_00bee910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d344));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bee970 */
byte F_00bee970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 6 ^ *(byte *)(in_ecx + 0x8f)) & 0x40;
  *(byte *)(in_ecx + 0x8f) = *(byte *)(in_ecx + 0x8f) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00bee990 */
unsigned int F_00bee990(float gen_a0)
{
  GEN_ENTER(0xbee990u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bee9b0 */
uint F_00bee9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbee9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00bef000(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  *(undefined1 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf47 */
uint F_00beea10(void)
{
  GEN_ENTER(0xbeea10u, 0u, 0u, 0u, 0u);
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = F_00a64110(&REFG(undefined, 0x14a9a18));
  uVar3 = F_00ae0d90(&REFG(undefined, 0x14c0920));
  if ((int)uVar2 < (int)uVar3) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0xffffffff) {
    F_00a64860(&REFG(undefined, 0x14a9a18),0,uVar2);
    iVar1 = (&REFG(undefined4, 0x14a9a1c))[(int)(uVar2)];
    *(int *)(&REFG(undefined, 0x14c0928) + uVar2 * 4) = iVar1;
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) & 0xbf;
    }
  }
  return uVar2;
}

/* ref: FUN_00beea60 */
unsigned int F_00beea60(unsigned int gen_a0)
{
  GEN_ENTER(0xbeea60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)((int)this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18),*(undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf36 */
byte F_00beeaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeaa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xb0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf42 */
uint F_00beeab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * this_00;
  
  F_00bef8a0(this,param_1,0);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((char)uVar1 != '\0') {
    this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    uVar1 = 0;
    if (this_00 != (int *)0x0) {
      F_00aaa5b0(this_00,1);
      uVar1 = ((code *)*(gen_code32 *)(*this_00 + 0x24))(this_00,8,0);
    }
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf25 */
byte F_00beeb00(unsigned int gen_a0)
{
  GEN_ENTER(0xbeeb00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  int * this_00;
  
  uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x68))(this);
  if ((char)uVar2 == '\0') {
    bVar1 = F_00befb70((undefined *)this);
    if (bVar1 == 0) {
      return 0;
    }
    this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    if (this_00 != (int *)0x0) {
      F_00aaa5b0(this_00,1);
      ((code *)*(gen_code32 *)(*this_00 + 0x24))(this_00,8,0);
    }
  }
  return 1;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf43 */
unsigned int F_00beeb50(unsigned int gen_a0)
{
  GEN_ENTER(0xbeeb50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)(this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)(this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18),*(undefined4 *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf34 */
uint F_00beeb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * this_00;
  float * pfVar4;
  uint uVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(float *)(this + 0x20) = *param_1;
  *(float *)(this + 0x24) = param_1[1];
  *(float *)(this + 0x28) = param_1[2];
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  (*(undefined * PTR32 *)(gen_frame + 0x50)) = this_00;
  uVar5 = 0;
  if (this_00 != (undefined *)0x0) {
    (*(undefined1 *)(gen_frame + 0x33)) = this[0xb0];
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
    (*(float *)(gen_frame + 0x10)) = gen_bits2f(REFG(float, 0x110d434));
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x110d434);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x110d434);
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined2 *)(gen_frame + 0x30)) = 0;
    (*(undefined1 *)(gen_frame + 0x32)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(undefined1 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x2c)) = 1;
    (*(undefined4 *)(gen_frame + 0x20)) = REFG(float, 0x110d434);
    (*(undefined4 *)(gen_frame + 0x1c)) = REFG(float, 0x110d434);
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    pfVar4 = (float *)F_00a5feb0(this_00);
    fVar1 = *param_1;
    (*(float *)(gen_frame + 0x58)) = fVar1;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar1 - (float10)*pfVar4);
    fVar2 = param_1[2];
    (*(float *)(gen_frame + 0x5c)) = fVar2;
    (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar2 - (float10)pfVar4[2]);
    fVar6 = (float10)(float)((float10)fVar2 - (float10)pfVar4[2]);
    fVar7 = (float10)(float)((float10)fVar1 - (float10)*pfVar4);
    fVar3 = (float)(fVar7 * fVar7 + fVar6 * fVar6);
    (*(float *)(gen_frame + 0x54)) = fVar3;
    fVar3 = ((float)GEN_TOF(SQRT((float10)fVar3)));
    (*(float *)(gen_frame + 0x54)) = fVar3;
    (*(float *)(gen_frame + 0x10)) = fVar3;
    uVar5 = F_00a9f7c0((*(undefined * PTR32 *)(gen_frame + 0x50)),fVar1,param_1[1],fVar2,*(float *)((int)(*(undefined * PTR32 *)(gen_frame + 0x50)) + 0xb0),&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0xc)))
    ;
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf35 */
uint F_00beecb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeecb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
  (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = REFG(float, 0x1087f04);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_00a1c7d0(&(*(undefined4 *)(gen_frame + 0x10)),0,0,&(*(undefined4 *)(gen_frame + 0x0)));
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x88))(this,&(*(undefined4 *)(gen_frame + 0x10)));
  return uVar1;
}

/* ref: FUN_00beed40 */
unsigned int F_00beed40(unsigned int gen_a0)
{
  GEN_ENTER(0xbeed40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (*(int *)((int)this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)((int)this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18),*(undefined4 *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  }
  F_00bef590(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf45 */
uint F_00beed90(unsigned int gen_a0)
{
  GEN_ENTER(0xbeed90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x88);
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf46 */
uint F_00beeda0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeda0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x88) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf26 */
byte F_00beedb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeedb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x90);
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf48 */
unsigned int F_00beedc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbeedc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x98) = param_2;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf32 */
unsigned int F_00beede0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeede0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::GameCharacterObject::vf0 */
uint F_00beedf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeedf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d484));
  if (*(int *)(this + 0x80) != -1) {
    *(undefined4 *)(&REFG(undefined, 0x14c0928) + *(int *)(this + 0x80) * 4) = 0;
    F_00a63f80(&REFG(undefined, 0x14a9a18),*(undefined4 *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
  }
  F_00bef590(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beee50 */
uint F_00beee50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeee50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf42 */
uint F_00beee80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeee80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00a1e5a0(param_1,"Client.System.Scheduler.Instance.WeaponObject");
  *(uint *)(this + 0x80) = uVar1;
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf43 */
unsigned int F_00beeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0xbeeeb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf44 */
uint F_00beeef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeeef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x80) = param_2;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf27 */
uint F_00beef00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeef00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00b62660((undefined *)this,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf11 */
uint F_00beef10(void)
{
  GEN_ENTER(0xbeef10u, 0u, 0u, 0u, 0u);
  return 0x110d576;
}

/* ref: FUN_00beef20 */
unsigned int F_00beef20(unsigned int gen_a0)
{
  GEN_ENTER(0xbeef20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)((int)this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf13 */
uint F_00beef60(unsigned int gen_a0)
{
  GEN_ENTER(0xbeef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf12 */
uint F_00beef70(unsigned int gen_a0)
{
  GEN_ENTER(0xbeef70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x80);
}

/* ref: Client::System::Scheduler::Instance::WeaponObject::vf0 */
uint F_00beef80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbeef80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  undefined4 * puVar2;
  
  piVar1 = *(int * PTR32 *)(this + 0x80);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[45])REFP(0x110d57c));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    puVar2 = *(undefined4 * PTR32 *)(this + 0x80);
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
      *(undefined4 *)(this + 0x80) = 0;
    }
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00beefe0 */
unsigned int F_00beefe0(float gen_a0)
{
  GEN_ENTER(0xbeefe0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bef000 */
uint F_00bef000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  F_00b61bd0(this,param_1);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x80) = 0xffffffff;
  *(undefined4 *)((int)this + 0x84) = 0xffffffff;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined1 *)((int)this + 0xa0) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  *(undefined4 *)((int)this + 0x98) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf13 */
uint F_00bef070(unsigned int gen_a0)
{
  GEN_ENTER(0xbef070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this);
  if ((uVar1 != 0) && (this[0x90] != (undefined1)0x0)) {
    return *(uint *)(uVar1 + 0xec);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf12 */
uint F_00bef0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x34))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf16 */
uint F_00bef0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x44))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf18 */
uint F_00bef0c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbef0c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x4c))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf47 */
uint F_00bef0d0(void)
{
  GEN_ENTER(0xbef0d0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00ae3f10(&REFG(undefined, 0x14c0920),0xffffffff);
  return uVar1;
}

/* ref: FUN_00bef0e0 */
uint F_00bef0e0(unsigned int gen_a0)
{
  GEN_ENTER(0xbef0e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x80);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920),uVar1);
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
    *(undefined1 *)((int)this + 0x90) = 0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf27 */
uint F_00bef110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  if (param_1 == 0) {
    iVar1 = *(int *)(this + 0x94);
  }
  uVar2 = F_00b62660((undefined *)this,iVar1);
  return uVar2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf28 */
uint F_00bef130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x94) = param_2;
  return param_2;
}

/* ref: FUN_00bef140 */
uint F_00bef140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x84) = param_2;
  *(undefined1 *)(in_ecx + 0x90) = 1;
  return param_2;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf11 */
uint F_00bef160(void)
{
  GEN_ENTER(0xbef160u, 0u, 0u, 0u, 0u);
  return 0x110d6b4;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf21 */
unsigned int F_00bef170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef170u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int * piVar1;
  
  (*(undefined * PTR32 *)&gen_args[0])[0x68] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0));
  if (((*(undefined * PTR32 *)&gen_args[0])[0x90] != (undefined1)0x0) &&
     (piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))))((*(undefined * PTR32 *)&gen_args[0])))), piVar1 != (int *)0x0)) {
    if ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) != (undefined1)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,5,0);
      *(byte *)((int)piVar1 + 0x8f) = *(byte *)((int)piVar1 + 0x8f) | 0x10;
      return 0;
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,5,0);
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf33 */
unsigned int F_00bef1c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xbef1c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_ecx;
  
  if ((char)param_1[0x24] != '\0') {
    in_ecx = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1);
    if (in_ecx != 0) {
      F_00aa1a50(in_ecx,param_2);
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf43 */
uint F_00bef1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbef1f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(this + 0x80);
  if (uVar1 != 0xffffffff) {
    uVar1 = F_00ae0cd0(&REFG(undefined, 0x14c0920),uVar1);
    *(undefined4 *)(this + 0x80) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
  }
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf17 */
uint F_00bef220(unsigned int gen_a0)
{
  GEN_ENTER(0xbef220u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x84);
  if (uVar1 == 0xffffffff) {
    if (*(int *)(in_ecx + 0x80) != -1) {
      uVar1 = F_00ae0db0(&REFG(undefined, 0x14c0920),*(int *)(in_ecx + 0x80));
      return uVar1;
    }
  }
  else if (uVar1 < 0x158) {
    return (&REFG(undefined4, 0x14a31f0))[(int)(uVar1)];
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf19 */
uint F_00bef260(unsigned int gen_a0)
{
  GEN_ENTER(0xbef260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  
  uVar1 = *(uint *)(this + 0x84);
  if (uVar1 == 0xffffffff) {
    if (*(int *)(this + 0x80) != -1) {
      this_00 = (undefined *)F_00ae0db0(&REFG(undefined, 0x14c0920),*(int *)(this + 0x80));
      if (this_00 != (undefined *)0x0) {
        uVar1 = F_00a5f290(this_00);
        return uVar1;
      }
    }
  }
  else if ((uVar1 < 0x158) && (((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])) != (undefined *)0x0)) {
    uVar1 = F_00a5f290(((undefined *)GEN_TOP((&REFG(undefined4, 0x14a31f0))[(int)(uVar1)])));
    return uVar1;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf30 */
uint F_00bef2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef2b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * this_00;
  uint uVar1;
  
  this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  if (this_00 != (int *)0x0) {
    (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
    ((code *)*(gen_code32 *)(*this_00 + 0x3c))(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
    F_00a9fa50(this_00,REFG(float, 0x1094834),REFG(float, 0x110d66c));
    uVar1 = F_00a5feb0(this_00);
    uVar1 = F_00b62a60((undefined *)this,uVar1);
    return uVar1;
  }
  uVar1 = F_00b626d0((undefined *)this,param_1);
  return uVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf8 */
uint F_00bef360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,param_1);
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,param_1 + 4);
  puVar1 = param_1 + 8;
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,puVar1);
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  *(undefined4 *)(this + 0x3c) = param_1[7];
  *(undefined4 *)(this + 0x40) = *puVar1;
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return (uint)puVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf10 */
uint F_00bef3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbef3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302df0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302df4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302df8));
  param_1[4] = REFG(undefined4, 0x1302e00);
  param_1[5] = REFG(undefined4, 0x1302e04);
  param_1[6] = REFG(undefined4, 0x1302e08);
  param_1[7] = REFG(undefined4, 0x1302e0c);
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x34);
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x1302e10));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x1302e14));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x1302e18));
  uVar3 = (*pcVar1)(this);
  bVar2 = F_00b61df0(param_1,uVar3,param_2);
  if (bVar2 == 0) {
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x24))(this)));
    *param_1 = *puVar4;
    param_1[1] = puVar4[1];
    param_1[2] = puVar4[2];
    param_1[4] = puVar4[4];
    param_1[5] = puVar4[5];
    param_1[6] = puVar4[6];
    param_1[7] = puVar4[7];
    param_1[8] = puVar4[8];
    param_1[9] = puVar4[9];
    param_1[10] = puVar4[10];
  }
  return (uint)param_1;
}

/* ref: FUN_00bef4c0 */
uint F_00bef4c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbef4c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  code * pcVar1;
  undefined4 uVar2;
  uint uVar3;
  float10 fVar4;
  float fVar5;
  undefined * PTR32 * PTR32 * pppuVar6;
  
  fVar4 = F_00aeb260(param_2);
  fVar5 = (float)fVar4;
  F_00a1e0f0(((undefined1 *)(gen_frame + 0x20)),param_1 + 0xc);
  (*(float *)(gen_frame + 0x24)) = fVar5;
  F_00a1e0d0(&(*(int *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x20)));
  uVar2 = REFG(float, 0x110d66c);
  param_1[0xc] = (*(int *)(gen_frame + 0x30));
  param_1[0xd] = (*(int *)(gen_frame + 0x34));
  param_1[0xe] = (*(int *)(gen_frame + 0x38));
  pppuVar6 = &(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4));
  param_1[0xf] = (*(int *)(gen_frame + 0x3c));
  (*(undefined4 *)(gen_frame + 0x8)) = uVar2;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined1 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  pcVar1 = *(gen_code32 *)(*param_1 + 0x4c);
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x4)) = (*(undefined * PTR32 (*)[1])REFP(0x109c964));
  (*(float *)(gen_frame + 0xc)) = param_3;
  (*(undefined4 *)(gen_frame + 0x14)) = 4;
  uVar3 = (*pcVar1)(param_1);
  uVar3 = F_00a9f850(uVar3,fVar5,pppuVar6);
  return uVar3;
}

/* ref: FUN_00bef590 */
unsigned int F_00bef590(unsigned int gen_a0)
{
  GEN_ENTER(0xbef590u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  if (*(int *)((int)this + 0x80) != -1) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0xffffffff;
    *(undefined1 *)((int)this + 0x90) = 0;
  }
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf2 */
unsigned int F_00bef5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  if ((this[0x90] != (undefined1)0x0) &&
     (piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this))), piVar2 != (int *)0x0)) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x40))(piVar2);
    iVar1 = piVar2[0x3b];
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x30) = *param_1;
      *(undefined4 *)(iVar1 + 0x34) = param_1[1];
      *(undefined4 *)(iVar1 + 0x38) = param_1[2];
      *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf4 */
uint F_00bef650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef650u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  uVar3 = (*(uint *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[0])[0xc] = *(int *)(*(uint *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[0])[0xd] = *(int *)((*(uint *)&gen_args[1]) + 4);
  uVar5 = *(uint *)((*(uint *)&gen_args[1]) + 8);
  (*(int * PTR32 *)&gen_args[0])[0xe] = uVar5;
  (*(int * PTR32 *)&gen_args[0])[0xf] = *(int *)((*(uint *)&gen_args[1]) + 0xc);
  if ((char)(*(int * PTR32 *)&gen_args[0])[0x24] != '\0') {
    piVar4 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x4c))))((*(int * PTR32 *)&gen_args[0]))));
    uVar5 = 0;
    if (piVar4 != (int *)0x0) {
      F_00a1e160(&(*(uint *)&gen_args[1]),uVar3);
      iVar1 = *piVar4;
      F_00aeb260(GEN_TOF(gen_bits2f((*(uint *)&gen_args[1]))));
      ((code *)*(gen_code32 *)(iVar1 + 0x48))(piVar4);
      uVar5 = piVar4[0x3b];
      if (uVar5 != 0) {
        *(undefined4 *)(uVar5 + 0x40) = *(undefined4 *)uVar3;
        *(undefined4 *)(uVar5 + 0x44) = *(undefined4 *)(uVar3 + 4);
        *(undefined4 *)(uVar5 + 0x48) = *(undefined4 *)(uVar3 + 8);
        uVar2 = *(undefined4 *)(uVar3 + 0xc);
        *(uint *)(uVar5 + 0x24) = *(uint *)(uVar5 + 0x24) | 2;
        *(undefined4 *)(uVar5 + 0x4c) = uVar2;
      }
    }
  }
  return uVar5;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf6 */
unsigned int F_00bef6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbef6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  int iVar3;
  int * piVar4;
  float10 fVar5;
  
  *(float *)(this + 0x40) = *param_1;
  *(float *)(this + 0x44) = param_1[1];
  *(float *)(this + 0x48) = param_1[2];
  if (this[0x90] != (undefined1)0x0) {
    piVar4 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
    if (piVar4 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar4 + 0x4c))
                (piVar4,(undefined4)
                        gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(this + 0x98) * (float10)*param_1)))));
      iVar3 = piVar4[0x3b];
      if (iVar3 != 0) {
        fVar5 = (float10)*(float *)(this + 0x98);
        fVar1 = param_1[1];
        fVar2 = param_1[2];
        *(float *)(iVar3 + 0x50) = (float)(fVar5 * (float10)*param_1);
        *(float *)(iVar3 + 0x54) = (float)(fVar5 * (float10)fVar1);
        *(float *)(iVar3 + 0x58) = (float)(fVar5 * (float10)fVar2);
        *(uint *)(iVar3 + 0x24) = *(uint *)(iVar3 + 0x24) | 2;
      }
    }
  }
  return 0;
}

/* ref: FUN_00bef7a0 */
byte F_00bef7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xbef7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * this_00;
  uint uVar3;
  float10 fVar4;
  undefined4 local_8;
  
  cVar1 = *(char *)((int)this + 0x71);
  this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
  if (cVar1 == '\b') {
    uVar3 = ((code *)*(gen_code32 *)(*this_00 + 0x7c))(this_00);
    if ((char)uVar3 == '\0') {
      return 0;
    }
  }
  *(undefined1 *)((int)this + 0x90) = 1;
  fVar4 = F_00a5f1d0(this_00);
  *(float *)((int)this + 0x98) = (float)fVar4;
  *(undefined1 *)(this_00 + 0x4d8) = 0;
  cVar1 = *(char *)((int)this + 0x68);
  local_8 = CONCAT31((int3)((uint)((int)(uintptr_t)this) >> 8),cVar1);
  if ((*(byte *)((int)this_00 + 0x8f) & 0x40) != 0) {
    *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) & 0xef;
    F_00aaa5b0(this_00,0);
  }
  iVar2 = this_00[0x3b];
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 100) = cVar1 != '\0' | *(byte *)(iVar2 + 100) & 0xfe;
  }
  *(byte *)((int)this_00 + 0x2dd3) = *(byte *)((int)this_00 + 0x2dd3) | 2;
  F_00a9fa40(this_00,1);
  if (*(int *)((int)this + 0x9c) != 0) {
    F_00aa39d0(this_00,(uint)(*(int *)((int)this + 0x9c) == 1));
  }
  ((code *)*(gen_code32 *)(*(int *)this + 8))(this,(int)this + 0x20);
  ((code *)*(gen_code32 *)(*(int *)this + 0x10))(this,(int)this + 0x30);
  ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,(int)this + 0x40);
  this_00[0x31] = 0;
  F_00a60de0(this_00);
  ((code *)*(gen_code32 *)(*(int *)this + 0x54))(this,local_8);
  return 1;
}

/* ref: FUN_00bef8a0 */
byte F_00bef8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbef8a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  char cVar1;
  code * pcVar2;
  byte bVar3;
  uint uVar4;
  int * this_00;
  int * piVar5;
  int iVar6;
  int * local_c;
  
  cVar1 = *(char *)((int)this + 0x71);
  *(undefined1 *)((int)this + 0x90) = 1;
  if (((cVar1 == '\b') || (cVar1 == '\t')) && (param_1 == 0)) {
    if (param_2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
      ((code *)*(gen_code32 *)*param_2)(param_2,1);
    }
  }
  else {
    pcVar2 = *(gen_code32 *)(*(int *)this + 0xbc);
    *(int *)((int)this + 0x88) = param_1;
    uVar4 = (*pcVar2)(this);
    *(uint *)((int)this + 0x80) = uVar4;
    if (uVar4 != 0xffffffff) {
      this_00 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0x4c))(this)));
      F_00a5f430(this_00,*(undefined4 *)((int)this + 0x74));
      F_00a5f450(this_00,*(undefined4 *)((int)this + 0x74));
      switch((unsigned int)(uintptr_t)(cVar1)) {
      case '\b': ;
        bVar3 = F_00aaa870(this_00,param_1);
        if (bVar3 == 0) {
          *(undefined1 *)((int)this + 0x90) = 0;
        }
        else {
          ((code *)*(gen_code32 *)(*this_00 + 0x2c))(this_00);
        }
        if (param_2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
          ((code *)*(gen_code32 *)*param_2)(param_2,1);
          bVar3 = F_00bef7a0(this);
          return bVar3;
        }
        break;
      case '\t': ;
        local_c = &REFG(undefined4, 0x14a9a1c);
        do {
          piVar5 = (int *)*local_c;
          if (((piVar5 != (int *)0x0) && (uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 4))(piVar5), uVar4 == 2))
             && ((*(char *)((int)piVar5 + 0x2ecd) == '\x02' && (piVar5[0x20] == param_1)))) {
            *(char *)(this_00 + 0xbbb) = (char)piVar5[0xbbb];
            *(undefined1 *)((int)this_00 + 0x2eed) = *(undefined1 *)((int)piVar5 + 0x2eed);
            *(undefined1 *)((int)this_00 + 0x2eee) = *(undefined1 *)((int)piVar5 + 0x2eee);
            *(undefined1 *)((int)this_00 + 0x2eef) = *(undefined1 *)((int)piVar5 + 0x2eef);
            break;
          }
          local_c = local_c + 1;
        } while ((int)local_c < 0x14a9bac);
        F_00aaa6d0(this_00,param_1,0);
        ((code *)*(gen_code32 *)(*this_00 + 0x2c))(this_00);
        if (param_2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*param_2 + 4))(param_2);
          ((code *)*(gen_code32 *)*param_2)(param_2,1);
          bVar3 = F_00bef7a0(this);
          return bVar3;
        }
        break;
      case '%': ;
      case 'I': ;
        if (param_2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00,param_2);
        }
        if (cVar1 == '%') {
          F_00aa8ef0(this_00,REFG(int, 0x1379694));
          *(undefined1 *)(this_00 + 0x5a2) = *(undefined1 *)(REFG(int, 0x1379694) + 0x1688);
          ((code *)*(gen_code32 *)(*this_00 + 0x2c))(this_00);
          bVar3 = F_00bef7a0(this);
          return bVar3;
        }
        piVar5 = (int *)F_00ae0850(&REFG(undefined, 0x1336e40),(uint)*(byte *)((int)this + 0xa0));
        if (piVar5 == (int *)0x0) {
          iVar6 = -0x20000000;
        }
        else {
          iVar6 = *piVar5;
        }
        if ((iVar6 != -0x20000000) && (uVar4 = F_00a64450(&REFG(undefined, 0x14a9a18),iVar6), uVar4 != 0)) {
          F_00aa8ef0(this_00,uVar4);
        }
        ((code *)*(gen_code32 *)(*this_00 + 0x2c))(this_00);
        bVar3 = F_00bef7a0(this);
        return bVar3;
      case '&': ;
      case '.': ;
        if (param_2 != (int *)0x0) {
          ((code *)*(gen_code32 *)(*this_00 + 0x38))(this_00,param_2);
        }
      }
      bVar3 = F_00bef7a0(this);
      return bVar3;
    }
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf25 */
byte F_00befb70(unsigned int gen_a0)
{
  GEN_ENTER(0xbefb70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  if (this[0x90] != (undefined1)0x0) {
    return 1;
  }
  bVar1 = F_00bef7a0(this);
  return bVar1 != 0;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf42 */
byte F_00befb90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbefb90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bef8a0(this,param_1,0);
  return bVar1;
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf44 */
byte F_00befbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbefbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00bef8a0(this,*(undefined4 *)(this + 0x88),param_1);
  return bVar1;
}

/* ref: FUN_00befbd0 */
byte F_00befbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbefbd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00befbe0 */
byte F_00befbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbefbe0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 0x2eec + in_ecx);
}

/* ref: Client::System::Scheduler::Instance::CharacterObject::vf0 */
uint F_00befc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbefc00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[49])REFP(0x110d6c4));
  if (*(int *)(this + 0x80) != -1) {
    F_00ae0cd0(&REFG(undefined, 0x14c0920),*(int *)(this + 0x80));
    *(undefined4 *)(this + 0x80) = 0xffffffff;
    this[0x90] = (undefined1)0x0;
  }
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00befcb0 */
unsigned int F_00befcb0(float gen_a0)
{
  GEN_ENTER(0xbefcb0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00befcd0 */
byte F_00befcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbefcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  undefined4 * puVar1;
  
  if (param_2 != (int *)0x0) {
    puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_2 + 0x28))(param_2,((undefined1 *)(gen_frame + 0x0)),param_3)));
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    param_1[2] = puVar1[2];
    param_1[4] = puVar1[4];
    param_1[5] = puVar1[5];
    param_1[6] = puVar1[6];
    param_1[7] = puVar1[7];
    param_1[8] = puVar1[8];
    param_1[9] = puVar1[9];
    param_1[10] = puVar1[10];
    return 1;
  }
  return 0;
}

/* ref: FUN_00befd60 */
unsigned int F_00befd60(unsigned int gen_a0)
{
  GEN_ENTER(0xbefd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this);
  if (uVar1 == 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this);
  }
  else {
    uVar1 = *(uint *)(uVar1 + 0xec);
  }
  if ((uVar1 != 0) && (*(int *)(uVar1 + 200) != 0)) {
    F_006b2f70((undefined *)(uVar1 + 0x90));
    return 0;
  }
  return 0;
}

/* ref: FUN_00befda0 */
uint F_00befda0(unsigned int gen_a0)
{
  GEN_ENTER(0xbefda0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined * pvVar7;
  undefined3 extraout_var = 0;
  int iVar8;
  undefined4 * puVar9;
  undefined * this_00;
  
  pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this)));
  if (pvVar7 == (undefined *)0x0) {
    pvVar7 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this)));
    this_00 = pvVar7;
  }
  else {
    this_00 = *(undefined * PTR32 *)((int)pvVar7 + 0xec);
  }
  if ((this_00 != (undefined *)0x0) && (*(int *)((int)this_00 + 200) != 0)) {
    bVar6 = F_00befcd0(&(*(float *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 4),
                         (uint)*(ushort *)((int)this + 0xa6));
    if (bVar6 == 0) {
      bVar6 = F_00befcd0(&(*(float *)(gen_frame + 0x0)),*(undefined4 *)((int)this + 8),
                           (uint)*(ushort *)((int)this + 0xa8));
      if (bVar6 == 0) {
        return CONCAT31(extraout_var,bVar6);
      }
      iVar8 = (int)this + 0x70;
    }
    else {
      iVar8 = (int)this + 0x40;
    }
    F_006001e0(&(*(float *)(gen_frame + 0x30)),iVar8);
    uVar4 = *(uint *)((int)this + 0xa0);
    if ((uVar4 >> 1 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
      (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x8)));
    }
    if ((uVar4 >> 2 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = gen_bits2f((*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x74)) = gen_bits2f((*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x78)) = gen_bits2f((*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x60)) = gen_bits2f((*(uint *)(gen_frame + 0x10)) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x64)) = gen_bits2f((*(uint *)(gen_frame + 0x14)) ^ REFG(uint, 0x10920d0));
      (*(undefined4 *)(gen_frame + 0x7c)) = (*(undefined4 *)(gen_frame + 0x1c));
      (*(float *)(gen_frame + 0x68)) = gen_bits2f((*(uint *)(gen_frame + 0x18)) ^ REFG(uint, 0x10920d0));
      (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0x1c));
      puVar9 = (undefined4 *)F_004f6d80(&(*(float *)(gen_frame + 0x70)),(uint)&(*(undefined4 *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x60)));
      uVar5 = puVar9[1];
      (*(undefined4 *)(gen_frame + 0x40)) = *puVar9;
      (*(undefined4 *)(gen_frame + 0x44)) = uVar5;
      (*(undefined4 *)(gen_frame + 0x48)) = puVar9[2];
      (*(undefined4 *)(gen_frame + 0x4c)) = puVar9[3];
    }
    if ((uVar4 >> 3 & 1) == 0) {
      (*(float *)(gen_frame + 0x70)) = (float)((float10)REFG(float, 0x1302c60) / (float10)(*(float *)(gen_frame + 0x20)));
      (*(float *)(gen_frame + 0x74)) = (float)((float10)REFG(float, 0x1302c64) / (float10)(*(float *)(gen_frame + 0x24)));
      (*(float *)(gen_frame + 0x78)) = (float)((float10)REFG(float, 0x1302c68) / (float10)(*(float *)(gen_frame + 0x28)));
      fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x50)) *
                     (float10)(float)((float10)REFG(float, 0x1302c60) / (float10)(*(float *)(gen_frame + 0x20))))));
      (*(float *)(gen_frame + 0x60)) = fVar1;
      fVar2 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x54)) *
                     (float10)(float)((float10)REFG(float, 0x1302c64) / (float10)(*(float *)(gen_frame + 0x24))))));
      (*(float *)(gen_frame + 0x64)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) *
                     (float10)(float)((float10)REFG(float, 0x1302c68) / (float10)(*(float *)(gen_frame + 0x28))))));
      (*(float *)(gen_frame + 0x68)) = fVar3;
      (*(float *)(gen_frame + 0x50)) = fVar1;
      (*(float *)(gen_frame + 0x54)) = fVar2;
      (*(float *)(gen_frame + 0x58)) = fVar3;
    }
    pvVar7 = (undefined *)F_006b13d0(this_00,0,&(*(float *)(gen_frame + 0x30)));
  }
  return (uint)pvVar7;
}

/* ref: FUN_00beff80 */
uint F_00beff80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbeff80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int * param_6 = (int *)(uintptr_t)gen_a6;
  undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  undefined * pvVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this_00;
  uint uVar4;
  int * piVar5;
  undefined1 * puVar6;
  
  (*(uint *)(gen_frame + 0x9c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xa0);
  (*(int * PTR32 *)(gen_frame + 0x40)) = param_3;
  (*(int * PTR32 *)(gen_frame + 0x48)) = param_6;
  *(int * PTR32 *)((int)this + 4) = param_3;
  *(int * PTR32 *)this = param_1;
  *(int * PTR32 *)((int)this + 8) = param_6;
  *(undefined4 *)((int)this + 0x40) = *param_4;
  (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = param_7;
  (*(int * PTR32 *)(gen_frame + 0x3c)) = param_1;
  *(undefined4 *)((int)this + 0x44) = param_4[1];
  *(undefined4 *)((int)this + 0x48) = param_4[2];
  *(undefined4 *)((int)this + 0x50) = param_4[4];
  *(undefined4 *)((int)this + 0x54) = param_4[5];
  *(undefined4 *)((int)this + 0x58) = param_4[6];
  *(undefined4 *)((int)this + 0x5c) = param_4[7];
  *(undefined4 *)((int)this + 0x60) = param_4[8];
  *(undefined4 *)((int)this + 100) = param_4[9];
  *(undefined4 *)((int)this + 0x68) = param_4[10];
  *(undefined4 *)((int)this + 0x70) = *param_7;
  *(undefined4 *)((int)this + 0x74) = param_7[1];
  *(undefined4 *)((int)this + 0x78) = param_7[2];
  *(undefined4 *)((int)this + 0x80) = param_7[4];
  *(undefined4 *)((int)this + 0x84) = param_7[5];
  *(undefined4 *)((int)this + 0x88) = param_7[6];
  *(undefined4 *)((int)this + 0x8c) = param_7[7];
  *(undefined4 *)((int)this + 0x90) = param_7[8];
  *(undefined4 *)((int)this + 0x94) = param_7[9];
  *(undefined4 *)((int)this + 0x98) = param_7[10];
  *(undefined2 *)((int)this + 0xa4) = (undefined2)param_2;
  *(undefined4 *)((int)this + 0xa0) = param_9;
  *(ushort *)((int)this + 0xa8) = (ushort)param_8;
  *(ushort *)((int)this + 0xa6) = (ushort)param_5;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1)));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar1;
  if (pvVar1 == (undefined *)0x0) {
    pvVar1 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0x3c))((*(int * PTR32 *)(gen_frame + 0x3c)))));
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x48));
    (*(undefined * PTR32 *)(gen_frame + 0x4c)) = pvVar1;
    if (pvVar1 == (undefined *)0x0) goto LAB_00bf0278;
    if ((*(int * PTR32 *)(gen_frame + 0x40)) == (int *)0x0) {
      if ((*(int * PTR32 *)(gen_frame + 0x48)) == (int *)0x0) goto LAB_00bf0278;
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x48)));
      if (uVar2 == 0) goto LAB_00bf0278;
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)));
      uVar2 = (uint)(ushort)param_8;
      puVar6 = ((undefined1 *)(gen_frame + 0x50));
      uVar4 = ((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5);
      F_00bf0870((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar4,uVar2,puVar6);
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
    else {
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x40)));
      if ((uVar2 == 0) || ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0)) goto LAB_00bf0278;
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)),param_4);
      piVar5 = (*(int * PTR32 *)(gen_frame + 0x40));
      uVar4 = (uint)(ushort)param_5;
      puVar6 = ((undefined1 *)(gen_frame + 0x50));
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x40)));
      F_00bf0870((*(undefined * PTR32 *)(gen_frame + 0x4c)),uVar2,uVar4,puVar6);
      pvVar1 = (*(undefined * PTR32 *)(gen_frame + 0x4c));
    }
LAB_00bf0261: ;
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5)));
  }
  else {
    F_00a9fa40(pvVar1,1);
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x48));
    if ((*(int * PTR32 *)(gen_frame + 0x40)) == (int *)0x0) {
      if ((*(int * PTR32 *)(gen_frame + 0x48)) == (int *)0x0) goto LAB_00bf0278;
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x48)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x48)));
      if (uVar2 == 0) goto LAB_00bf0278;
      F_0054fa20(((undefined1 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)));
      (*(int * PTR32 *)(gen_frame + 0x40)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec);
      puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5)));
      (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar3;
      F_005fe8d0(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x50)));
      F_0069b460((*(int * PTR32 *)(gen_frame + 0x40)) + 0x24,(*(int * PTR32 *)(gen_frame + 0x40)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)),(uint)(ushort)param_8,((undefined1 *)(gen_frame + 0x0)));
      pvVar1 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec);
      goto LAB_00bf0261;
    }
    uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x40)));
    if ((uVar2 == 0) || ((*(int * PTR32 *)(gen_frame + 0x48)) != (int *)0x0)) goto LAB_00bf0278;
    F_0054fa20(((undefined1 *)(gen_frame + 0x50)),param_4);
    piVar5 = (*(int * PTR32 *)(gen_frame + 0x40));
    (*(int * PTR32 *)(gen_frame + 0x48)) = *(int * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec);
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x40)) + 0x34))((*(int * PTR32 *)(gen_frame + 0x40)))));
    (*(undefined4 * PTR32 *)(gen_frame + 0x44)) = puVar3;
    F_005fe8d0(((undefined1 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x50)));
    F_0069b460((*(int * PTR32 *)(gen_frame + 0x48)) + 0x24,(*(int * PTR32 *)(gen_frame + 0x48)),(*(undefined4 * PTR32 *)(gen_frame + 0x44)),(uint)(ushort)param_5,((undefined1 *)(gen_frame + 0x0)));
    pvVar1 = *(undefined * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x4c)) + 0xec);
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x34))(piVar5,pvVar1)));
  }
  F_0068bd00(this_00,pvVar1);
  F_00befda0(this);
LAB_00bf0278: ;
  F_00c47745((*(uint *)(gen_frame + 0x9c)) ^ (uint)(uint)(gen_frame + 0xa0));
  return (uint)this;
}

/* ref: FUN_00bf0290 */
uint F_00bf0290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbf0290u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  float fVar7;
  float10 fVar8;
  undefined4 * puVar9;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = this;
  (*(uint *)(gen_frame + 0x3c)) = param_3;
  puVar9 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x24))))(*(int * PTR32 *)this)));
  *param_1 = *puVar9;
  param_1[1] = puVar9[1];
  param_1[2] = puVar9[2];
  param_1[4] = puVar9[4];
  param_1[5] = puVar9[5];
  param_1[6] = puVar9[6];
  param_1[7] = puVar9[7];
  param_1[8] = puVar9[8];
  param_1[9] = puVar9[9];
  param_1[10] = puVar9[10];
  uVar6 = *(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0);
  if ((uVar6 >> 1 & 1) != 0) {
    fVar1 = *param_2;
    fVar7 = param_2[5];
    (*(float *)(gen_frame + 0x14)) = param_2[9];
    (*(float *)(gen_frame + 0x18)) = param_2[10];
    fVar2 = param_2[1];
    fVar3 = param_2[2];
    (*(float *)(gen_frame + 0x0)) = param_2[4];
    (*(float *)(gen_frame + 0x4)) = fVar7;
    (*(float *)(gen_frame + 0x10)) = param_2[8];
    (*(float *)(gen_frame + 0x8)) = param_2[6];
    (*(float *)(gen_frame + 0xc)) = param_2[7];
    if ((uVar6 >> 3 & 1) == 0) {
      (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1302c60);
      (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1302c64);
      (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1302c68);
    }
    fVar8 = (float10)0;
    (*(float *)(gen_frame + 0x70)) = (float)fVar8;
    ((float *)(gen_frame + 0x40))[0] = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x74)) = (float)fVar8;
    (*(float *)(gen_frame + 0x78)) = (float)fVar8;
    ((float *)(gen_frame + 0x40))[1] = 0.0;
    ((float *)(gen_frame + 0x40))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x50)) = 0;
    (*(float *)(gen_frame + 0x54)) = (*(float *)(gen_frame + 0x14));
    (*(undefined4 *)(gen_frame + 0x58)) = 0;
    (*(undefined4 *)(gen_frame + 0x60)) = 0;
    (*(undefined4 *)(gen_frame + 0x64)) = 0;
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x18));
    F_004efe70(((float *)(gen_frame + 0x40)),(uint)&(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x70)) + (float10)fVar1);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x74)) + (float10)fVar2);
    (*(float *)(gen_frame + 0x78)) = (float)((float10)(*(float *)(gen_frame + 0x78)) + (float10)fVar3);
    puVar9 = (undefined4 *)F_004ee670(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x3c)),(uint)((float *)(gen_frame + 0x40)));
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    *param_1 = *puVar9;
    param_1[1] = uVar4;
    param_1[2] = uVar5;
  }
  if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0) >> 2 & 1) != 0) {
    puVar9 = (undefined4 *)F_004f6d80(&(*(float *)(gen_frame + 0x20)),(*(uint *)(gen_frame + 0x3c)) + 0x10,(uint)(param_2 + 4));
    param_1[4] = *puVar9;
    param_1[5] = puVar9[1];
    param_1[6] = puVar9[2];
    param_1[7] = puVar9[3];
  }
  if ((*(uint *)((int)(*(undefined * PTR32 *)(gen_frame + 0x38)) + 0xa0) >> 3 & 1) != 0) {
    fVar1 = ((float)GEN_TOF(((float10)*(float *)((*(uint *)(gen_frame + 0x3c)) + 0x20) * (float10)param_2[8])));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)param_2[9] * (float10)*(float *)((*(uint *)(gen_frame + 0x3c)) + 0x24))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)param_2[10] * (float10)*(float *)((*(uint *)(gen_frame + 0x3c)) + 0x28))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    param_1[8] = (undefined4)gen_fl2bits(fVar1);
    param_1[9] = (undefined4)gen_fl2bits(fVar2);
    param_1[10] = (undefined4)gen_fl2bits(fVar3);
  }
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return (uint)param_1;
}

/* ref: FUN_00bf04f0 */
uint F_00bf04f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf04f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x170];
  float fVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  float * pfVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x4c))))(*(int * PTR32 *)this);
  if (uVar4 == 0) {
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x3c))))(*(int * PTR32 *)this);
  }
  else {
    uVar4 = *(uint *)(uVar4 + 0xec);
  }
  if ((uVar4 != 0) && (*(int *)(uVar4 + 200) != 0)) {
    uVar4 = F_00befda0(this);
    return uVar4;
  }
  (*(float *)(gen_frame + 0x120)) = REFG(float, 0x1302df0);
  (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1302df4);
  (*(float *)(gen_frame + 0x134)) = REFG(undefined4, 0x1302e04);
  (*(float *)(gen_frame + 0x130)) = REFG(undefined4, 0x1302e00);
  (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1302df8);
  (*(float *)(gen_frame + 0x13c)) = REFG(undefined4, 0x1302e0c);
  (*(float *)(gen_frame + 0x140)) = REFG(float, 0x1302e10);
  (*(float *)(gen_frame + 0x138)) = REFG(undefined4, 0x1302e08);
  (*(float *)(gen_frame + 0x144)) = REFG(float, 0x1302e14);
  (*(float *)(gen_frame + 0x148)) = REFG(float, 0x1302e18);
  bVar3 = F_00befcd0(&(*(float *)(gen_frame + 0xc0)),*(undefined4 *)((int)this + 4),(uint)*(ushort *)((int)this + 0xa6))
  ;
  (*(byte *)(gen_frame + 0x15f)) = bVar3;
  bVar3 = F_00befcd0(((undefined1 *)(gen_frame + 0x60)),*(undefined4 *)((int)this + 8),(uint)*(ushort *)((int)this + 0xa8))
  ;
  if ((*(byte *)(gen_frame + 0x15f)) == 0) {
    if (bVar3 != 0) {
      uVar4 = F_00bf0290(this,((undefined1 *)(gen_frame + 0x90)),((undefined1 *)(gen_frame + 0x60)),(int)this + 0x70);
      F_006001e0(&(*(float *)(gen_frame + 0x120)),uVar4);
      goto LAB_00bf0765;
    }
    (*(float *)(gen_frame + 0x120)) = REFG(float, 0x1302df0);
    (*(float *)(gen_frame + 0x124)) = REFG(float, 0x1302df4);
    (*(float *)(gen_frame + 0x128)) = REFG(float, 0x1302df8);
    (*(float *)(gen_frame + 0x140)) = REFG(float, 0x1302e10);
    (*(float *)(gen_frame + 0x130)) = REFG(undefined4, 0x1302e00);
    (*(float *)(gen_frame + 0x144)) = REFG(float, 0x1302e14);
    (*(float *)(gen_frame + 0x134)) = REFG(undefined4, 0x1302e04);
    (*(float *)(gen_frame + 0x138)) = REFG(undefined4, 0x1302e08);
    (*(float *)(gen_frame + 0x13c)) = REFG(undefined4, 0x1302e0c);
    fVar7 = REFG(float, 0x1302e18);
  }
  else {
    if (bVar3 == 0) {
      pfVar6 = (float *)F_00bf0290(this,((undefined1 *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x40);
    }
    else {
      fVar7 = *(float *)((int)this + 0xac);
      uVar9 = 0;
      (*(float *)(gen_frame + 0x11c)) = fVar7;
      fVar8 = (float)(float10)0;
      uVar4 = F_00bf0290(this,((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x60)),(int)this + 0x70);
      uVar5 = F_00bf0290(this,((undefined1 *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0xc0)),(int)this + 0x40);
      pfVar6 = (float *)F_00a1db10(((undefined1 *)(gen_frame + 0x90)),uVar5,uVar4,fVar7,fVar8,uVar9);
    }
    (*(float *)(gen_frame + 0x120)) = *pfVar6;
    (*(float *)(gen_frame + 0x124)) = pfVar6[1];
    (*(float *)(gen_frame + 0x128)) = pfVar6[2];
    (*(float *)(gen_frame + 0x130)) = pfVar6[4];
    (*(float *)(gen_frame + 0x134)) = pfVar6[5];
    (*(float *)(gen_frame + 0x138)) = pfVar6[6];
    (*(float *)(gen_frame + 0x13c)) = pfVar6[7];
    (*(float *)(gen_frame + 0x140)) = pfVar6[8];
    (*(float *)(gen_frame + 0x144)) = pfVar6[9];
    fVar7 = pfVar6[10];
  }
  (*(float *)(gen_frame + 0x148)) = fVar7;
LAB_00bf0765: ;
  if (*(ushort *)((int)this + 0xa4) != 0) {
    F_00befcd0(&(*(float *)(gen_frame + 0xc0)),*(undefined4 *)this,(uint)*(ushort *)((int)this + 0xa4));
    pfVar6 = ((float *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0xc))))(*(int * PTR32 *)this)));
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xc0)) - (float10)*pfVar6);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xc4)) - (float10)pfVar6[1]);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xc8)) - (float10)pfVar6[2]);
    fVar7 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x120)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc0)) - (float10)*pfVar6))));
    (*(float *)(gen_frame + 0x100)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x124)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc4)) - (float10)pfVar6[1]))));
    (*(float *)(gen_frame + 0x104)) = fVar8;
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x128)) - (float10)(float)((float10)(*(float *)(gen_frame + 0xc8)) - (float10)pfVar6[2]))));
    (*(float *)(gen_frame + 0x108)) = fVar1;
    (*(float *)(gen_frame + 0x120)) = fVar7;
    (*(float *)(gen_frame + 0x124)) = fVar8;
    (*(float *)(gen_frame + 0x128)) = fVar1;
  }
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x20))))(*(int * PTR32 *)this,&(*(float *)(gen_frame + 0x120)));
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)this + 0x34))))(*(int * PTR32 *)this);
  if (uVar4 != 0) {
    *(float *)(uVar4 + 0x30) = (*(float *)(gen_frame + 0x120));
    *(float *)(uVar4 + 0x34) = (*(float *)(gen_frame + 0x124));
    *(float *)(uVar4 + 0x38) = (*(float *)(gen_frame + 0x128));
    *(float *)(uVar4 + 0x40) = (*(float *)(gen_frame + 0x130));
    *(float *)(uVar4 + 0x44) = (*(float *)(gen_frame + 0x134));
    *(float *)(uVar4 + 0x48) = (*(float *)(gen_frame + 0x138));
    *(float *)(uVar4 + 0x4c) = (*(float *)(gen_frame + 0x13c));
    *(float *)(uVar4 + 0x50) = (*(float *)(gen_frame + 0x140));
    *(float *)(uVar4 + 0x54) = (*(float *)(gen_frame + 0x144));
    *(float *)(uVar4 + 0x58) = (*(float *)(gen_frame + 0x148));
    *(uint *)(uVar4 + 0x24) = *(uint *)(uVar4 + 0x24) | 2;
  }
  piVar2 = *(int * PTR32 *)((int)this + 0xb0);
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x114))(piVar2,*(undefined4 *)this);
  }
  return uVar4;
}

/* ref: FUN_00bf0870 */
byte F_00bf0870(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbf0870u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  byte bVar1;
  
  F_005fe8d0(((undefined1 *)(gen_frame + 0x0)),param_3);
  bVar1 = F_0069b460((undefined *)((int)this + 0x90),this,param_1,param_2,((undefined1 *)(gen_frame + 0x0)));
  return bVar1;
}

/* ref: FUN_00bf08e0 */
unsigned int F_00bf08e0(float gen_a0)
{
  GEN_ENTER(0xbf08e0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00bf0900 */
uint F_00bf0900(unsigned int gen_a0)
{
  GEN_ENTER(0xbf0900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00bf0ba0(in_ecx);
  *(undefined4 *)(in_ecx + 0x18) = 0;
  return uVar1;
}

/* ref: FUN_00bf0920 */
uint F_00bf0920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf0920u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *(undefined4 *)this = *param_2;
  *(undefined4 *)((int)this + 4) = param_2[1];
  *(undefined4 *)((int)this + 8) = param_2[2];
  *(undefined4 *)((int)this + 0xc) = param_2[3];
  *(undefined4 *)((int)this + 0x10) = param_2[4];
  uVar1 = param_2[5];
  *(uint *)((int)this + 0x14) = uVar1;
  *(undefined4 *)((int)this + 0x18) = param_1;
  return uVar1;
}

/* ref: FUN_00bf0a20 */
uint F_00bf0a20(unsigned int gen_a0)
{
  GEN_ENTER(0xbf0a20u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint in_ecx_00;
  int iVar1;
  
  iVar1 = 0x10;
  in_ecx_00 = in_ecx;
  do {
    F_00bf0ba0(in_ecx_00);
    *(undefined4 *)(in_ecx_00 + 0x18) = 0;
    in_ecx_00 = in_ecx_00 + 0x1c;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  *(undefined4 *)(in_ecx + 0x1c0) = 0;
  return in_ecx;
}

/* ref: FUN_00bf0ae0 */
uint F_00bf0ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar5 = (undefined4 *)0x10;
  puVar3 = (undefined4 *)0x2;
  do {
    if ((((puVar5 < (undefined4 *)0x10) ||
         (puVar5 = (undefined4 *)((int)puVar3 - 2U),
         (undefined4 *)((int)puVar3 - 2U) < (undefined4 *)0x10)) ||
        (puVar5 = (undefined4 *)((int)puVar3 - 1U),
        (undefined4 *)((int)puVar3 - 1U) < (undefined4 *)0x10)) ||
       (puVar5 = puVar3, puVar3 < (undefined4 *)0x10)) goto LAB_00bf0b22;
    puVar5 = (undefined4 *)((int)puVar3 + 1);
    puVar4 = puVar3 + 1;
    uVar1 = (int)puVar3 + 2;
    puVar3 = puVar4;
  } while (uVar1 < 0x10);
  if (puVar5 < (undefined4 *)0x10) {
LAB_00bf0b22: ;
    *(int *)((int)this + 0x1c0) = *(int *)((int)this + 0x1c0) + 1;
    uVar2 = *(undefined4 *)((int)this + 0x1c0);
    puVar4 = (undefined4 *)((int)this + (int)((int)(uintptr_t)puVar5) * 0x1c);
    *puVar4 = *param_1;
    puVar4[1] = param_1[1];
    puVar4[2] = param_1[2];
    puVar4[3] = param_1[3];
    puVar4[4] = param_1[4];
    puVar4[5] = param_1[5];
    puVar4[6] = uVar2;
  }
  return (uint)puVar4;
}

/* ref: FUN_00bf0b70 */
unsigned int F_00bf0b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0b70u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = 0x10;
  do {
    if (*in_ecx == param_2) {
      F_00bf0ba0(in_ecx);
      in_ecx[6] = 0;
    }
    in_ecx = in_ecx + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00bf0ba0 */
uint F_00bf0ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf0ba0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0xe0000000;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return 0;
}

/* ref: FUN_00bf0bc0 */
unsigned int F_00bf0bc0(float gen_a0)
{
  GEN_ENTER(0xbf0bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: Client::Game::Object::Aetheryte::vf43 */
uint F_00bf0be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a5f970((undefined *)this,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined2 *)(this + 0x184) = 0;
  return 0;
}

/* ref: Client::Game::Object::Aetheryte::vf24 */
uint F_00bf0c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(this + 0x180);
  if (iVar1 != 0) {
    *param_1 = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*(int *)(this + 0x178) != 0) {
    param_1[uVar2] = *(int *)(this + 0x178);
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: Client::Game::Object::Aetheryte::vf27 */
uint F_00bf0c60(unsigned int gen_a0)
{
  GEN_ENTER(0xbf0c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a61d10((undefined *)this);
  if (this[0x185] != (undefined1)0x0) {
    if (((&REFG(undefined1, 0x14b4ed0))[(int)(*(uint *)(this + 0x80) >> 3)] &
        (byte)(1 << ((byte)*(uint *)(this + 0x80) & 7))) != 0) {
      uVar1 = F_00a5f860(this,0,0);
      return uVar1;
    }
    uVar1 = F_00a5f860(this,1,0);
  }
  return uVar1;
}

/* ref: FUN_00bf0cb0 */
uint F_00bf0cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xbf0cb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  uint * puVar4;
  undefined * this_00;
  uint uVar5;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x80);
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined1 *)((int)this + 0x8a) = 5;
  (*pcVar1)(this);
  uVar3 = F_00ab2690(param_1);
  uVar5 = 0;
  if (uVar3 != 0) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
    F_00a5f430(this,param_3);
    *(undefined1 *)((int)this + 0x184) = *(undefined1 *)(uVar3 + 0x35);
    *(undefined1 *)((int)this + 0x185) = *(undefined1 *)(uVar3 + 0x32);
    puVar4 = (uint *)F_00ab2690((uint)(*(char *)(uVar3 + 0x35) == '\0'));
    F_00a5f8c0(this,(*puVar4 & 0xffffff) + (int)puVar4);
    if (((param_4 != 0) && (*(int *)((int)this + 0x7c) = param_4, REFG(char, 0x1379c96) == '\0')) &&
       (bVar2 = F_005d99c0(), bVar2 != 0)) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
    }
    this_00 = (undefined *)F_006b8c00();
    uVar5 = F_00718ff0(this_00,this,uVar3);
  }
  return uVar5;
}

/* ref: FUN_00bf0d90 */
uint F_00bf0d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00b61bd0(this,param_1);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  return (uint)this;
}

/* ref: FUN_00bf0db0 */
unsigned int F_00bf0db0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf0db0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  F_00b61c10(this);
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf46 */
unsigned int F_00bf0dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf27 */
uint F_00bf0dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf0dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf11 */
uint F_00bf0df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf0df0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return 0x110dfdc;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf21 */
uint F_00bf0e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  
  pcVar1 = *(gen_code32 *)(*(int *)this + 0xac);
  this[0x68] = SUB41(param_1,0);
  piVar2 = ((int *)GEN_TOP((*pcVar1)(this)));
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xe0))(piVar2,param_1);
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 200))(piVar2,param_1);
  }
  return uVar3;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf22 */
byte F_00bf0e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf0e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xdc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return (byte)uVar2;
  }
  return (byte)this[0x68];
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf9 */
uint F_00bf0e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf0e80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xfc))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf2 */
uint F_00bf0eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf0eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*(byte *)((int)piVar1 + 0x2a) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this_00 + 0x20);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_00 + 0x28);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x30);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x34);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this_00 + 0x38);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this_00 + 0x3c);
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this_00 + 0x40);
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this_00 + 0x44);
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this_00 + 0x48);
      (*(undefined4 *)(gen_frame + 0x0)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x4)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x8)) = param_1[2];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
      F_005db100(this_00,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xe4))((*(int * PTR32 *)(gen_frame + 0x3c)))));
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0xe8))(piVar1,param_1);
    }
  }
  *(undefined4 *)(this + 0x20) = *puVar4;
  *(undefined4 *)(this + 0x24) = puVar4[1];
  *(undefined4 *)(this + 0x28) = puVar4[2];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf3 */
uint F_00bf0fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf0fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xe4))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x20);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf4 */
uint F_00bf1000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*(byte *)((int)piVar1 + 0x2a) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this_00 + 0x20);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_00 + 0x28);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x30);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x34);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this_00 + 0x38);
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this_00 + 0x3c);
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)this_00 + 0x40);
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this_00 + 0x44);
      (*(undefined4 *)(gen_frame + 0x10)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x14)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = param_1[3];
      (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)((int)this_00 + 0x48);
      (*(undefined4 *)(gen_frame + 0x18)) = param_1[2];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
      F_005db100(this_00,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xec))((*(int * PTR32 *)(gen_frame + 0x3c)))));
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0xf0))(piVar1,param_1);
    }
  }
  *(undefined4 *)(this + 0x30) = *puVar4;
  *(undefined4 *)(this + 0x34) = puVar4[1];
  *(undefined4 *)(this + 0x38) = puVar4[2];
  *(undefined4 *)(this + 0x3c) = puVar4[3];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf5 */
uint F_00bf1120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf1120u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xec))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x30);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf6 */
uint F_00bf1150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  (*(int * PTR32 *)(gen_frame + 0x3c)) = piVar1;
  puVar4 = param_1;
  if (piVar1 != (int *)0x0) {
    if (*(int *)(this + 0x6c) == 8) {
      piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this)));
      this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*(byte *)((int)piVar1 + 0x2a) * 4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)((int)this_00 + 0x20);
      (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)((int)this_00 + 0x24);
      (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)((int)this_00 + 0x28);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)((int)this_00 + 0x30);
      (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)((int)this_00 + 0x34);
      (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)((int)this_00 + 0x38);
      (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
      (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
      (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)((int)this_00 + 0x3c);
      (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
      F_005db100(this_00,&(*(undefined4 *)(gen_frame + 0x0)),uVar3);
      puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x3c)) + 0xf4))((*(int * PTR32 *)(gen_frame + 0x3c)))));
    }
    else {
      ((code *)*(gen_code32 *)(*piVar1 + 0xf8))(piVar1,param_1);
    }
  }
  *(undefined4 *)(this + 0x40) = *puVar4;
  *(undefined4 *)(this + 0x44) = puVar4[1];
  *(undefined4 *)(this + 0x48) = puVar4[2];
  return (uint)puVar4;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf7 */
uint F_00bf1250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xbf1250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xa8))(this)));
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xf4))
                      (piVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return uVar2;
  }
  return (uint)(this + 0x40);
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf8 */
uint F_00bf1280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)(this + 0x20) = *param_1;
    *(undefined4 *)(this + 0x24) = param_1[1];
    *(undefined4 *)(this + 0x28) = param_1[2];
    *(undefined4 *)(this + 0x30) = param_1[4];
    *(undefined4 *)(this + 0x34) = param_1[5];
    *(undefined4 *)(this + 0x38) = param_1[6];
    *(undefined4 *)(this + 0x3c) = param_1[7];
    *(undefined4 *)(this + 0x40) = param_1[8];
    *(undefined4 *)(this + 0x44) = param_1[9];
    *(undefined4 *)(this + 0x48) = param_1[10];
    return (uint)param_1;
  }
  if (*(int *)(this + 0x6c) == 8) {
    piVar2 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xb4))(this)));
    this_00 = *((undefined * PTR32 *)GEN_TOP((piVar2[0x1e] + (uint)*(byte *)((int)piVar1 + 0x2a) * 4)));
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xfc))(piVar2);
    F_005db100(this_00,param_1,uVar3);
    puVar4 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xfc))(piVar1)));
    *(undefined4 *)(this + 0x20) = *puVar4;
    *(undefined4 *)(this + 0x24) = puVar4[1];
    *(undefined4 *)(this + 0x28) = puVar4[2];
    *(undefined4 *)(this + 0x30) = puVar4[4];
    *(undefined4 *)(this + 0x34) = puVar4[5];
    *(undefined4 *)(this + 0x38) = puVar4[6];
    *(undefined4 *)(this + 0x3c) = puVar4[7];
    *(undefined4 *)(this + 0x40) = puVar4[8];
    *(undefined4 *)(this + 0x44) = puVar4[9];
    *(undefined4 *)(this + 0x48) = puVar4[10];
    return (uint)puVar4;
  }
  ((code *)*(gen_code32 *)(*piVar1 + 0x100))(piVar1,param_1);
  *(undefined4 *)(this + 0x20) = *param_1;
  *(undefined4 *)(this + 0x24) = param_1[1];
  *(undefined4 *)(this + 0x28) = param_1[2];
  *(undefined4 *)(this + 0x30) = param_1[4];
  *(undefined4 *)(this + 0x34) = param_1[5];
  *(undefined4 *)(this + 0x38) = param_1[6];
  uVar3 = param_1[7];
  *(uint *)(this + 0x3c) = uVar3;
  *(undefined4 *)(this + 0x40) = param_1[8];
  *(undefined4 *)(this + 0x44) = param_1[9];
  *(undefined4 *)(this + 0x48) = param_1[10];
  return uVar3;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf37 */
uint F_00bf13b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf13b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float fVar1;
  float fVar2;
  int * piVar3;
  float * pfVar4;
  
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x104))(piVar3,param_1);
    return (uint)param_1;
  }
  fVar2 = *(float *)(this + 0x40);
  fVar1 = *(float *)(this + 0x48);
  ((float *)(gen_frame + 0x0))[0] = fVar2;
  ((float *)(gen_frame + 0x0))[2] = fVar1;
  pfVar4 = ((float *)(gen_frame + 0x0)) + 1;
  ((float *)(gen_frame + 0x0))[1] = *(float *)(this + 0x44);
  if (!((float10)fVar2 < (float10)*(float *)(this + 0x44))) {
    pfVar4 = ((float *)(gen_frame + 0x0));
  }
  if ((float10)*pfVar4 < (float10)fVar1) {
    pfVar4 = ((float *)(gen_frame + 0x0)) + 2;
  }
  *param_1 = *(undefined4 *)(this + 0x20);
  param_1[1] = *(undefined4 *)(this + 0x24);
  param_1[2] = *(undefined4 *)(this + 0x28);
  param_1[3] = (undefined4)gen_fl2bits(*pfVar4);
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf38 */
uint F_00bf1450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  int * piVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  if (piVar1 == (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this,((undefined1 *)(gen_frame + 0x20)));
    F_00a1cb90(&(*(undefined4 *)(gen_frame + 0x0)),uVar2);
    *param_1 = (*(undefined4 *)(gen_frame + 0x0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
    param_1[4] = (*(undefined4 *)(gen_frame + 0x10));
    param_1[5] = (*(undefined4 *)(gen_frame + 0x14));
    param_1[6] = (*(undefined4 *)(gen_frame + 0x18));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar1 + 0x108))(piVar1,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf39 */
uint F_00bf1510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined4 uVar1;
  float10 fVar2;
  int * piVar3;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xac))(this)));
  if (piVar3 == (int *)0x0) {
    fVar2 = (float10)0;
    uVar1 = *(undefined4 *)(this + 0x44);
    (*(float *)(gen_frame + 0x30)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(this + 0x40);
    (*(float *)(gen_frame + 0x34)) = (float)fVar2;
    (*(float *)(gen_frame + 0x38)) = (float)fVar2;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    (*(undefined4 *)(gen_frame + 0x14)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x48);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0x0)),(uint)(this + 0x30));
    (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x20) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x24) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) + (float10)(*(float *)(gen_frame + 0x38)))));
    F_005feb80(param_1,&(*(undefined4 *)(gen_frame + 0x0)),&REFG(float, 0x1302c60));
  }
  else {
    ((code *)*(gen_code32 *)(*piVar3 + 0x10c))(piVar3,param_1);
  }
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_1;
}

/* ref: Client::System::Scheduler::Instance::LayoutReferenceObject::vf0 */
uint F_00bf1600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf1600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[47])REFP(0x110dfe4));
  F_00b61c10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00bf1640 */
uint F_00bf1640(unsigned int gen_a0)
{
  GEN_ENTER(0xbf1640u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c246b0(in_ecx,4);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0a4));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  *(undefined2 *)(in_ecx + 0x2c) = 0xffff;
  in_ecx[0x2d] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bf1710 */
byte F_00bf1710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbf1710u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  code * pcVar1;
  byte bVar2;
  
  bVar2 = F_00c24640(param_1,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x2c) = (undefined2)param_4;
  param_1[0x20] = *param_5;
  param_1[0x21] = param_5[1];
  param_1[0x22] = param_5[2];
  pcVar1 = *(gen_code32 *)(*param_1 + 0x14);
  param_1[0x2d] = (int)gen_fl2bits(param_6);
  (*pcVar1)(param_1);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf5 */
uint F_00bf1780(unsigned int gen_a0)
{
  GEN_ENTER(0xbf1780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pCVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  puVar4 = (undefined4 *)F_00623320(*(undefined * PTR32 *)(this + 0x28),(uint)*(ushort *)(this + 0xb0));
  puVar6 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x60)));
  pCVar3 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  puVar6 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x80,((undefined4 *)(gen_frame + 0xa0)));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x90) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x94) = uVar1;
  *(undefined4 *)(pCVar3 + 0x98) = uVar2;
  *(undefined4 *)(pCVar3 + 0xa0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(pCVar3 + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(pCVar3 + 0xa8) = REFG(float, 0x1375ac8);
  puVar4 = ((undefined4 *)(gen_frame + 0xa0));
  pCVar7 = pCVar3 + 0x30;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(pCVar3 + 0x60) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x90);
  *(undefined4 *)(pCVar3 + 100) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x94);
  *(undefined4 *)(pCVar3 + 0x68) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x98);
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return (uint)(pCVar3 + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf6 */
uint F_00bf18b0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf18b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float * pfVar7;
  int iVar8;
  undefined4 * puVar9;
  undefined * pCVar10;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28),((undefined4 *)(gen_frame + 0x10)),(uint)*(ushort *)(this + 0xb0));
  pfVar7 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),this + 0x80,((undefined4 *)(gen_frame + 0x10)));
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0x90))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) + (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 0x98))));
  fVar4 = ((float)GEN_TOF(((float10)fVar1 - (float10)*(float *)(this + 0x90))));
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)fVar2 - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x4)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(this + 0x98))));
  (*(float *)(gen_frame + 0x8)) = fVar6;
  *(float *)(this + 0xa0) = fVar4;
  *(float *)(this + 0xa4) = fVar5;
  *(float *)(this + 0xa8) = fVar6;
  puVar9 = ((undefined4 *)(gen_frame + 0x10));
  pCVar10 = this + 0x30;
  for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined4 *)pCVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    pCVar10 = pCVar10 + 4;
  }
  *(float *)(this + 0x60) = fVar1;
  *(float *)(this + 100) = fVar2;
  *(float *)(this + 0x68) = fVar3;
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf9 */
uint F_00bf19d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf19d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  
  fVar1 = *(float *)(this + 0x94);
  fVar2 = *(float *)(this + 0xa4);
  fVar3 = *(float *)(this + 0x98);
  fVar4 = *(float *)(this + 0xa8);
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  *param_1 = ((float)GEN_TOF(((float10)*param_2 -
                    (float10)((float)GEN_TOF(((float10)*(float *)(this + 0x90) +
                                    (float10)*(float *)(this + 0xa0)))))));
  param_1[1] = ((float)GEN_TOF(((float10)fVar5 - (float10)(float)((float10)fVar1 + (float10)fVar2))));
  param_1[2] = ((float)GEN_TOF(((float10)fVar6 - (float10)(float)((float10)fVar3 + (float10)fVar4))));
  uVar7 = F_0046f390(param_1);
  return uVar7;
}

/* ref: FUN_00bf1a60 */
byte F_00bf1a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbf1a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  
  fVar7 = (float10)param_6;
  fVar1 = *(float *)((int)param_1 + 0xb4);
  fVar2 = ((float)GEN_TOF((fVar7 * (float10)*(float *)((int)param_1 + 0xa0))));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(byte *)(gen_frame + 0x5f)) = 0;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa4) * fVar7)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)*(float *)((int)param_1 + 0xa8))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x90) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x20)) = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x94) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x98) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x28)) = fVar3;
  fVar4 = *param_2;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  fVar2 = (float)((float10)fVar4 - (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar2;
  fVar1 = (float)((float10)param_2[1] - (float10)fVar1);
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar3 = (float)((float10)param_2[2] - (float10)fVar3);
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x40)) = fVar2;
  (*(float *)(gen_frame + 0x44)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = fVar3;
  (*(float *)(gen_frame + 0x54)) = ((float)GEN_TOF((((float10)fVar2 * (float10)fVar2 + (float10)fVar1 * (float10)fVar1) +
                    (float10)fVar3 * (float10)fVar3)));
  bVar6 = F_00c24d00(param_1,param_3,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
  if (bVar6 == 0) {
    (*(byte *)(gen_frame + 0x5f)) = 1;
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x38)) +
                   ((float10)(*(float *)(gen_frame + 0x34)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x30))))));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar7 = (float10)fVar1;
    fVar1 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x4)));
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x8)) * fVar7);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar7 = (float10)fVar1;
    fVar1 = (float)((float10)(*(float *)(gen_frame + 0x30)) - fVar7);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar8 = (float10)fVar2;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x34)) - fVar8);
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar9 = (float10)fVar3;
    fVar3 = (float)((float10)(*(float *)(gen_frame + 0x38)) - fVar9);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    fVar1 = (float)((float10)fVar1 - fVar7);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)((float10)fVar2 - fVar8);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = (float)((float10)fVar3 - fVar9);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    (*(float *)(gen_frame + 0x40)) = fVar1;
    (*(float *)(gen_frame + 0x44)) = fVar2;
    (*(float *)(gen_frame + 0x48)) = fVar3;
  }
  fVar7 = (float10)(*(float *)(gen_frame + 0x54));
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      fVar8 = (float10)(*(float *)(gen_frame + 0x58));
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)(fVar8 - (float10)param_2[0x14]);
    fVar8 = (float10)(float)(fVar8 - (float10)param_2[0x14]);
    if (fVar8 * fVar8 < fVar7) {
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
  }
  else {
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x58)) = (float)((float10)param_2[0x14] + fVar8);
    fVar8 = (float10)(float)((float10)param_2[0x14] + fVar8);
    if (fVar7 < fVar8 * fVar8) {
      (*(byte *)(gen_frame + 0x5f)) = 1;
      goto LAB_00bf1c39;
    }
  }
  if ((*(byte *)(gen_frame + 0x5f)) == 0) {
    return 0;
  }
LAB_00bf1c39: ;
  if ((*(float *)(gen_frame + 0x54)) <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x40)) = 0.0;
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x48)) = 0.0;
  }
  else {
    (*(float *)(gen_frame + 0x50)) = ((float)GEN_TOF(SQRT(fVar7)));
    fVar1 = (float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar7))));
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar7 = (float10)fVar1;
    (*(float *)(gen_frame + 0x40)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar7);
    (*(float *)(gen_frame + 0x48)) = (float)(fVar7 * (float10)(*(float *)(gen_frame + 0x48)));
    fVar8 = (float10)(*(float *)(gen_frame + 0x58));
  }
  fVar7 = (float10)(*(float *)(gen_frame + 0x40));
  (*(float *)(gen_frame + 0x0)) = (float)(fVar7 * fVar8);
  fVar9 = (float10)(*(float *)(gen_frame + 0x44));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar9 * fVar8);
  fVar10 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar10 * fVar8);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar7 * fVar8) + (float10)(*(float *)(gen_frame + 0x20)))));
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar8) + (float10)(*(float *)(gen_frame + 0x24)))));
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar8) + (float10)(*(float *)(gen_frame + 0x28)))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar1 = (float)((float10)fVar1 - (float10)*param_2);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar2 - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 - (float10)param_2[2]);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = param_4[2];
  fVar8 = (float10)param_4[2];
  fVar1 = (float)(fVar8 * (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar8);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar8 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar1 = (float)((float10)*param_2 + (float10)fVar1);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  *param_2 = fVar1;
  fVar2 = (float)((float10)param_2[1] + (float10)fVar2);
  (*(float *)(gen_frame + 0x50)) = fVar2;
  param_2[1] = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)param_2[2]);
  (*(float *)(gen_frame + 0x50)) = fVar3;
  param_2[2] = fVar3;
  fVar4 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 - (float10)fVar4);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 - (float10)param_2[5]);
  fVar3 = (float)((float10)fVar3 - (float10)param_2[6]);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  fVar8 = (float10)(float)((float10)fVar2 - (float10)param_2[5]);
  fVar11 = (float10)(float)((float10)fVar1 - (float10)fVar4);
  fVar1 = ((float)GEN_TOF(((float10)fVar3 * fVar10 + (fVar11 * fVar7 + fVar8 * fVar9))));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar12 = (float10)fVar1;
  fVar2 = (float)(fVar12 * fVar7);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar4 = (float)(fVar12 * fVar9);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = (float)(fVar10 * fVar12);
  (*(float *)(gen_frame + 0x8)) = fVar5;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar2 = (float)(fVar11 - (float10)fVar2);
  (*(float *)(gen_frame + 0x0)) = fVar2;
  fVar4 = (float)(fVar8 - (float10)fVar4);
  (*(float *)(gen_frame + 0x4)) = fVar4;
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x50)) = (float)((float10)1 - (float10)*param_4);
  fVar7 = (float10)(float)((float10)1 - (float10)*param_4);
  fVar2 = (float)(fVar7 * (float10)fVar2);
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar4 = (float)((float10)fVar4 * fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar3 = ((float)GEN_TOF((fVar7 * (float10)(float)((float10)fVar3 - (float10)fVar5))));
  (*(float *)(gen_frame + 0x18)) = fVar3;
  if ((param_3 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1375ac8);
  }
  fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x28)));
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = param_4[1];
  fVar7 = (float10)param_4[1];
  fVar1 = (float)(fVar7 * (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar7);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)(fVar7 * (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  param_2[8] = fVar1;
  param_2[9] = fVar2;
  param_2[10] = fVar3;
  return (*(byte *)(gen_frame + 0x5f));
}

/* ref: FUN_00bf1e80 */
byte F_00bf1e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbf1e80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x90];
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
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  
  fVar15 = (float10)param_8;
  fVar1 = *param_3;
  fVar5 = ((float)GEN_TOF((fVar15 * (float10)*(float *)(param_1 + 0xa0))));
  (*(float *)(gen_frame + 0x10)) = fVar5;
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  (*(float *)(gen_frame + 0x6c)) = gen_bits2f(param_1);
  fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xa4) * fVar15)));
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar7 = *(float *)(param_1 + 0xa8);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar7 = (float)(fVar15 * (float10)fVar7);
  (*(float *)(gen_frame + 0x18)) = fVar7;
  (*(float *)(gen_frame + 0x4)) = param_3[1];
  fVar8 = *(float *)(param_1 + 0x90);
  fVar1 = param_3[2];
  (*(float *)(gen_frame + 0x30)) = fVar2;
  (*(float *)(gen_frame + 0x8)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar3;
  fVar1 = (float)((float10)fVar8 + (float10)fVar5);
  (*(float *)(gen_frame + 0x20)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x94) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x24)) = fVar5;
  fVar6 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x98) + (float10)fVar7)));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar5;
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar4;
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x7c)) = 0.0;
  F_00c262e0(&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x7c)));
  (*(float *)(gen_frame + 0x70)) = REFG(float, 0x1087f04);
  if ((char)param_6 != '\0') {
    (*(float *)(gen_frame + 0x70)) = REFG(float, 0x10ac168);
    pfVar14 = &(*(float *)(gen_frame + 0x7c));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x7c)))) {
      pfVar14 = &(*(float *)(gen_frame + 0x70));
    }
    (*(float *)(gen_frame + 0x70)) = (float)((float10)1 / (float10)*pfVar14);
  }
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x34)) - (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x48)));
  if ((char)param_6 == '\0') {
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
    (*(float *)(gen_frame + 0x74)) = 0.0;
    F_00c262e0(param_2 + 0x10,param_3 + 0x10,&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x30)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x34)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x38)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x28)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x54));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x58));
    F_0046f390(&(*(float *)(gen_frame + 0x10)));
    F_0046f390(&(*(float *)(gen_frame + 0x20)));
    pfVar14 = &(*(float *)(gen_frame + 0x74));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x24)) + (float10)(*(float *)(gen_frame + 0x20)) * (float10)(*(float *)(gen_frame + 0x10))))));
    (*(float *)(gen_frame + 0x74)) = fVar1;
    (*(float *)(gen_frame + 0x74)) = 0.0;
    fVar1 = ((float)GEN_TOF(-(float10)fVar1));
    (*(float *)(gen_frame + 0x7c)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar14 = &(*(float *)(gen_frame + 0x7c));
    }
    fVar1 = *pfVar14;
    fVar2 = *param_2;
    (*(float *)(gen_frame + 0x74)) = fVar2;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar15 = (float10)fVar2;
    fVar2 = (float)((float10)param_2[0x10] - fVar15);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar3 = param_2[1];
    (*(float *)(gen_frame + 0x74)) = fVar3;
    fVar16 = (float10)fVar3;
    fVar3 = (float)((float10)param_2[0x11] - fVar16);
    (*(float *)(gen_frame + 0x14)) = fVar3;
    fVar4 = param_2[2];
    (*(float *)(gen_frame + 0x74)) = fVar4;
    fVar17 = (float10)fVar4;
    fVar4 = (float)((float10)param_2[0x12] - fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar4;
    fVar18 = (float10)fVar1;
    fVar1 = (float)(fVar18 * (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar3 * fVar18);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar4 * fVar18);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    *param_2 = (float)((float10)fVar1 + fVar15);
    param_2[1] = (float)((float10)fVar2 + fVar16);
    param_2[2] = (float)(fVar17 + (float10)fVar3);
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0x74)) = fVar1;
    fVar15 = (float10)fVar1;
    fVar1 = (float)((float10)param_3[0x10] - fVar15);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = param_3[1];
    (*(float *)(gen_frame + 0x74)) = fVar2;
    fVar16 = (float10)fVar2;
    fVar2 = (float)((float10)param_3[0x11] - fVar16);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar3 = param_3[2];
    (*(float *)(gen_frame + 0x74)) = fVar3;
    fVar17 = (float10)fVar3;
    fVar3 = (float)((float10)param_3[0x12] - fVar17);
    (*(float *)(gen_frame + 0x18)) = fVar3;
    fVar1 = (float)((float10)fVar1 * fVar18);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar18);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar3 * fVar18);
    (*(float *)(gen_frame + 0x28)) = fVar3;
    *param_3 = (float)((float10)fVar1 + fVar15);
    param_3[1] = (float)(fVar16 + (float10)fVar2);
    param_3[2] = (float)(fVar17 + (float10)fVar3);
  }
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x58)) +
                 ((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x54)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x50))))));
  (*(float *)(gen_frame + 0x74)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)gen_fl2bits((*(float *)(gen_frame + 0x6c))) + 0xb4) + (float10)param_4)));
  (*(float *)(gen_frame + 0x78)) = fVar2;
  fVar15 = (float10)fVar1;
  if (!(fVar15 < (float10)fVar2 * (float10)fVar2)) {
    return 0;
  }
  fVar1 = ((float)GEN_TOF(SQRT(fVar15)));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  (*(float *)(gen_frame + 0x74)) = fVar1;
  fVar3 = (float)((float10)1 / (float10)fVar1);
  (*(float *)(gen_frame + 0x6c)) = fVar3;
  fVar15 = (float10)fVar3;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0x24)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar15);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar15 * (float10)(*(float *)(gen_frame + 0x58)));
  fVar3 = (float)((float10)1 - (float10)*param_5);
  (*(float *)(gen_frame + 0x6c)) = fVar3;
  fVar4 = param_3[8];
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = param_3[9];
  fVar5 = param_3[10];
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar16 = (float10)fVar4;
  fVar17 = (float10)(float)(fVar15 * (float10)(*(float *)(gen_frame + 0x50)));
  fVar18 = (float10)param_3[9];
  fVar19 = (float10)(float)((float10)(*(float *)(gen_frame + 0x54)) * fVar15);
  fVar15 = (float10)(float)(fVar15 * (float10)(*(float *)(gen_frame + 0x58)));
  fVar4 = ((float)GEN_TOF(((fVar17 * fVar16 + fVar19 * fVar18) + fVar15 * (float10)fVar5)));
  (*(float *)(gen_frame + 0x7c)) = fVar4;
  fVar20 = (float10)fVar4;
  fVar6 = (float)(fVar20 * fVar17);
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar7 = (float)(fVar19 * fVar20);
  (*(float *)(gen_frame + 0x24)) = fVar7;
  fVar8 = (float)(fVar20 * fVar15);
  (*(float *)(gen_frame + 0x28)) = fVar8;
  (*(float *)(gen_frame + 0x40)) = fVar6;
  (*(float *)(gen_frame + 0x44)) = fVar7;
  (*(float *)(gen_frame + 0x48)) = fVar8;
  fVar6 = (float)(fVar16 - (float10)fVar6);
  (*(float *)(gen_frame + 0x30)) = fVar6;
  fVar7 = (float)(fVar18 - (float10)fVar7);
  (*(float *)(gen_frame + 0x34)) = fVar7;
  (*(float *)(gen_frame + 0x38)) = (float)((float10)fVar5 - (float10)fVar8);
  fVar16 = (float10)fVar3;
  fVar3 = (float)(fVar16 * (float10)fVar6);
  (*(float *)(gen_frame + 0x10)) = fVar3;
  fVar6 = (float)((float10)fVar7 * fVar16);
  (*(float *)(gen_frame + 0x14)) = fVar6;
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar8) * fVar16)));
  (*(float *)(gen_frame + 0x18)) = fVar5;
  if (fVar4 <= 0.0) {
    (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
  }
  fVar4 = param_5[1];
  (*(float *)(gen_frame + 0x6c)) = fVar4;
  (*(float *)(gen_frame + 0x7c)) = fVar4;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x24)) = fVar6;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x48)));
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar18 = (float10)fVar4;
  fVar3 = (float)(fVar18 * (float10)fVar3);
  (*(float *)(gen_frame + 0x0)) = fVar3;
  fVar6 = (float)((float10)fVar6 * fVar18);
  (*(float *)(gen_frame + 0x4)) = fVar6;
  fVar5 = (float)(fVar18 * (float10)fVar5);
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar1 = ((float)GEN_TOF(((((float10)fVar2 - (float10)fVar1) * (float10)param_5[2]) * (float10)(*(float *)(gen_frame + 0x70)))));
  (*(float *)(gen_frame + 0x6c)) = fVar1;
  fVar18 = (float10)fVar1;
  fVar1 = (float)(fVar18 * fVar17);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = (float)(fVar19 * fVar18);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar7 = (float)(fVar18 * fVar15);
  (*(float *)(gen_frame + 0x58)) = fVar7;
  if ((char)param_6 == '\0') {
    fVar8 = param_2[8];
    (*(float *)(gen_frame + 0x30)) = fVar8;
    fVar9 = param_2[9];
    (*(float *)(gen_frame + 0x34)) = fVar9;
    fVar10 = param_2[10];
    (*(float *)(gen_frame + 0x38)) = fVar10;
    fVar18 = (float10)fVar8;
    fVar8 = ((float)GEN_TOF(((float10)fVar10 * fVar15 + ((float10)fVar9 * fVar19 + fVar18 * fVar17))));
    (*(float *)(gen_frame + 0x70)) = fVar8;
    fVar20 = (float10)fVar8;
    fVar11 = (float)(fVar20 * fVar17);
    (*(float *)(gen_frame + 0x10)) = fVar11;
    fVar12 = (float)(fVar20 * fVar19);
    (*(float *)(gen_frame + 0x14)) = fVar12;
    fVar13 = (float)(fVar15 * fVar20);
    (*(float *)(gen_frame + 0x18)) = fVar13;
    (*(float *)(gen_frame + 0x40)) = fVar11;
    (*(float *)(gen_frame + 0x44)) = fVar12;
    (*(float *)(gen_frame + 0x48)) = fVar13;
    fVar11 = (float)(fVar18 - (float10)fVar11);
    (*(float *)(gen_frame + 0x10)) = fVar11;
    (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar9 - (float10)fVar12);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar10 - (float10)fVar13);
    fVar11 = (float)((float10)fVar11 * fVar16);
    (*(float *)(gen_frame + 0x20)) = fVar11;
    fVar9 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 - (float10)fVar12) * fVar16)));
    (*(float *)(gen_frame + 0x24)) = fVar9;
    fVar10 = ((float)GEN_TOF((fVar16 * (float10)(float)((float10)fVar10 - (float10)fVar13))));
    (*(float *)(gen_frame + 0x28)) = fVar10;
    if (fVar8 <= 0.0) {
      (*(float *)(gen_frame + 0x40)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x44)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1375ac8);
    }
    fVar8 = (float)((float10)fVar11 + (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x10)) = fVar8;
    fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x14)) = fVar9;
    fVar10 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x18)) = fVar10;
    (*(float *)(gen_frame + 0x6c)) = fVar4;
    fVar15 = (float10)fVar4;
    fVar4 = (float)(fVar15 * (float10)fVar8);
    (*(float *)(gen_frame + 0x20)) = fVar4;
    fVar8 = (float)((float10)fVar9 * fVar15);
    (*(float *)(gen_frame + 0x24)) = fVar8;
    fVar9 = (float)(fVar15 * (float10)fVar10);
    (*(float *)(gen_frame + 0x28)) = fVar9;
    *param_2 = (float)((float10)fVar1 + (float10)*param_2);
    param_2[1] = (float)((float10)param_2[1] + (float10)fVar2);
    param_2[2] = (float)((float10)fVar7 + (float10)param_2[2]);
    param_2[8] = fVar4;
    param_2[9] = fVar8;
    param_2[10] = fVar9;
  }
  *param_3 = (float)((float10)*param_3 + (float10)fVar1);
  param_3[1] = (float)((float10)param_3[1] + (float10)fVar2);
  param_3[2] = (float)((float10)fVar7 + (float10)param_3[2]);
  param_3[8] = fVar3;
  param_3[9] = fVar6;
  param_3[10] = fVar5;
  return 1;
}

/* ref: FUN_00bf24b0 */
byte F_00bf24b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xbf24b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0xa0);
  fVar12 = (float10)*(float *)(param_1 + 0xa0);
  fVar13 = (float10)param_4;
  fVar1 = (float)(fVar13 * fVar12);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0xa4);
  fVar14 = (float10)*(float *)(param_1 + 0xa4);
  fVar2 = (float)(fVar14 * fVar13);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0xa8);
  fVar15 = (float10)*(float *)(param_1 + 0xa8);
  fVar3 = (float)(fVar15 * fVar13);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0x90);
  fVar13 = (float10)*(float *)(param_1 + 0x90);
  fVar4 = (float)(fVar13 + (float10)fVar1);
  (*(float *)(gen_frame + 0x20)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0x94);
  fVar16 = (float10)*(float *)(param_1 + 0x94);
  fVar5 = (float)(fVar16 + (float10)fVar2);
  (*(float *)(gen_frame + 0x24)) = fVar5;
  (*(float *)(gen_frame + 0x64)) = *(float *)(param_1 + 0x98);
  fVar17 = (float10)*(float *)(param_1 + 0x98);
  fVar6 = (float)(fVar17 + (float10)fVar3);
  (*(float *)(gen_frame + 0x28)) = fVar6;
  fVar18 = (float10)param_5;
  fVar1 = (float)(fVar18 * fVar12);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar2 = (float)(fVar18 * fVar14);
  (*(float *)(gen_frame + 0x4)) = fVar2;
  fVar3 = (float)(fVar15 * fVar18);
  (*(float *)(gen_frame + 0x8)) = fVar3;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  fVar7 = (float)((float10)fVar1 + fVar13);
  (*(float *)(gen_frame + 0x10)) = fVar7;
  (*(float *)(gen_frame + 0x4)) = fVar5;
  fVar8 = (float)(fVar16 + (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = fVar8;
  (*(float *)(gen_frame + 0x8)) = fVar6;
  fVar1 = param_2[4];
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = param_2[5];
  fVar9 = (float)(fVar17 + (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar9;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar3 = param_2[6];
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar4 = (float)((float10)fVar7 - (float10)fVar4);
  (*(float *)(gen_frame + 0x40)) = fVar4;
  fVar5 = (float)((float10)fVar8 - (float10)fVar5);
  (*(float *)(gen_frame + 0x44)) = fVar5;
  fVar6 = (float)((float10)fVar9 - (float10)fVar6);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0x30)) = fVar4;
  (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x34)) = fVar5;
  (*(float *)(gen_frame + 0x38)) = fVar6;
  fVar1 = (float)((float10)*param_2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar2 = (float)((float10)param_2[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x14)) = fVar2;
  fVar3 = (float)((float10)param_2[2] - (float10)fVar3);
  (*(float *)(gen_frame + 0x18)) = fVar3;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) + (float10)param_2[0x14])));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  bVar11 = F_00c246f0(&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x40)),fVar1,&(*(float *)(gen_frame + 0x68)));
  if (bVar11 != 0) {
    fVar12 = (float10)(*(float *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x10)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x30)));
    (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x34)) * fVar12);
    (*(float *)(gen_frame + 0x18)) = (float)((float10)(*(float *)(gen_frame + 0x38)) * fVar12);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x30))) + (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x34)) * fVar12) + (float10)(*(float *)(gen_frame + 0x4)))));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x38)) * fVar12) + (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    (*(float *)(gen_frame + 0x0)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar12);
    (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar12);
    (*(float *)(gen_frame + 0x8)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x48)));
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x40)) * fVar12) + (float10)(*(float *)(gen_frame + 0x50)))));
    (*(float *)(gen_frame + 0x10)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar12) + (float10)(*(float *)(gen_frame + 0x54)))));
    (*(float *)(gen_frame + 0x14)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x48))) + (float10)(*(float *)(gen_frame + 0x58)))));
    (*(float *)(gen_frame + 0x18)) = fVar6;
    fVar1 = (float)((float10)fVar4 - (float10)fVar1);
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)fVar5 - (float10)fVar2);
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = (float)((float10)fVar6 - (float10)fVar3);
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_0046f390(&(*(float *)(gen_frame + 0x20)));
    fVar12 = (float10)(*(float *)(gen_frame + 0x20));
    fVar13 = (float10)(*(float *)(gen_frame + 0x40));
    fVar14 = (float10)(*(float *)(gen_frame + 0x24));
    fVar15 = (float10)(*(float *)(gen_frame + 0x44));
    fVar16 = (float10)(*(float *)(gen_frame + 0x48));
    fVar1 = ((float)GEN_TOF(((fVar13 * fVar12 + fVar15 * fVar14) + fVar16 * (float10)(*(float *)(gen_frame + 0x28)))));
    (*(float *)(gen_frame + 0x6c)) = fVar1;
    fVar17 = (float10)fVar1;
    fVar2 = (float)(fVar17 * fVar12);
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar3 = (float)(fVar14 * fVar17);
    (*(float *)(gen_frame + 0x44)) = fVar3;
    fVar4 = (float)(fVar17 * (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0x48)) = fVar4;
    (*(float *)(gen_frame + 0x50)) = fVar2;
    (*(float *)(gen_frame + 0x54)) = fVar3;
    (*(float *)(gen_frame + 0x58)) = fVar4;
    (*(float *)(gen_frame + 0x0)) = (float)(fVar13 - (float10)fVar2);
    fVar3 = (float)(fVar15 - (float10)fVar3);
    (*(float *)(gen_frame + 0x4)) = fVar3;
    fVar4 = (float)(fVar16 - (float10)fVar4);
    (*(float *)(gen_frame + 0x8)) = fVar4;
    fVar5 = (float)((float10)(*(float *)(gen_frame + 0x30)) - fVar13);
    (*(float *)(gen_frame + 0x40)) = fVar5;
    fVar6 = (float)((float10)(*(float *)(gen_frame + 0x34)) - fVar15);
    (*(float *)(gen_frame + 0x44)) = fVar6;
    fVar7 = (float)((float10)(*(float *)(gen_frame + 0x38)) - fVar16);
    (*(float *)(gen_frame + 0x48)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)fVar7 * (float10)(*(float *)(gen_frame + 0x28)) +
                   ((float10)fVar6 * fVar14 + (float10)fVar5 * fVar12))));
    (*(float *)(gen_frame + 0x64)) = fVar8;
    fVar17 = (float10)fVar8;
    fVar8 = (float)(fVar17 * fVar12);
    (*(float *)(gen_frame + 0x30)) = fVar8;
    fVar9 = (float)(fVar17 * fVar14);
    (*(float *)(gen_frame + 0x34)) = fVar9;
    fVar10 = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar17);
    (*(float *)(gen_frame + 0x38)) = fVar10;
    (*(float *)(gen_frame + 0x20)) = (float)((float10)fVar5 - (float10)fVar8);
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar6 - (float10)fVar9);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar7 - (float10)fVar10);
    fVar12 = (float10)(float)(fVar13 - (float10)fVar2);
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar5 - (float10)fVar8) - fVar12)));
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar9) - (float10)fVar3)));
    (*(float *)(gen_frame + 0x44)) = fVar5;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar10) - (float10)fVar4)));
    (*(float *)(gen_frame + 0x48)) = fVar6;
    (*(float *)(gen_frame + 0x64)) = *param_3;
    fVar14 = (float10)*param_3;
    fVar2 = (float)(fVar14 * (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar2;
    fVar5 = (float)((float10)fVar5 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar5;
    fVar6 = (float)(fVar14 * (float10)fVar6);
    (*(float *)(gen_frame + 0x28)) = fVar6;
    fVar2 = (float)(fVar12 + (float10)fVar2);
    (*(float *)(gen_frame + 0x40)) = fVar2;
    fVar3 = (float)((float10)fVar5 + (float10)fVar3);
    (*(float *)(gen_frame + 0x44)) = fVar3;
    fVar4 = (float)((float10)fVar6 + (float10)fVar4);
    (*(float *)(gen_frame + 0x48)) = fVar4;
    if (fVar1 <= 0.0) {
      (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
      (*(float *)(gen_frame + 0x6c)) = 0.0;
    }
    if ((float10)(*(float *)(gen_frame + 0x6c)) < fVar17) {
      (*(float *)(gen_frame + 0x50)) = fVar8;
      (*(float *)(gen_frame + 0x54)) = fVar9;
      (*(float *)(gen_frame + 0x58)) = fVar10;
    }
    fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x0)) = fVar1;
    fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x4)) = fVar2;
    fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x8)) = fVar3;
    (*(float *)(gen_frame + 0x64)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x68)));
    fVar12 = (float10)fVar1;
    fVar14 = (float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x68)));
    fVar1 = (float)(fVar14 * fVar12);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar17 = (float10)fVar2;
    fVar2 = (float)(fVar17 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar3 * fVar14);
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x10)));
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x14)));
    (*(float *)(gen_frame + 0x34)) = fVar2;
    fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar14) + (float10)(*(float *)(gen_frame + 0x18)))));
    (*(float *)(gen_frame + 0x38)) = fVar4;
    fVar5 = *param_2;
    (*(float *)(gen_frame + 0x68)) = fVar5;
    fVar1 = (float)((float10)fVar1 - (float10)fVar5);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar6 = param_2[1];
    (*(float *)(gen_frame + 0x6c)) = fVar6;
    fVar2 = (float)((float10)fVar2 - (float10)fVar6);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    fVar7 = param_2[2];
    (*(float *)(gen_frame + 0x64)) = fVar7;
    fVar4 = (float)((float10)fVar4 - (float10)fVar7);
    (*(float *)(gen_frame + 0x18)) = fVar4;
    (*(float *)(gen_frame + 0x60)) = param_3[2];
    fVar14 = (float10)param_3[2];
    fVar1 = (float)(fVar14 * (float10)fVar1);
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar14);
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar4 = (float)(fVar14 * (float10)fVar4);
    (*(float *)(gen_frame + 0x28)) = fVar4;
    *param_2 = (float)((float10)fVar5 + (float10)fVar1);
    param_2[1] = (float)((float10)fVar2 + (float10)fVar6);
    param_2[2] = (float)((float10)fVar4 + (float10)fVar7);
    fVar1 = (float)(fVar12 - fVar13);
    (*(float *)(gen_frame + 0x10)) = fVar1;
    fVar2 = (float)(fVar17 - fVar15);
    (*(float *)(gen_frame + 0x14)) = fVar2;
    (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 - fVar16);
    param_2[8] = (float)((float10)param_2[8] + (float10)fVar1);
    param_2[9] = (float)((float10)fVar2 + (float10)param_2[9]);
    param_2[10] = ((float)GEN_TOF(((float10)param_2[10] + (float10)(float)((float10)fVar3 - fVar16))));
    (*(float *)(gen_frame + 0x60)) = param_3[1];
    fVar12 = (float10)param_3[1];
    param_2[8] = (float)(fVar12 * (float10)param_2[8]);
    param_2[9] = (float)(fVar12 * (float10)param_2[9]);
    param_2[10] = (float)(fVar12 * (float10)param_2[10]);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bf29d0 */
byte F_00bf29d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xbf29d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x110];
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
  byte bVar17;
  float * pfVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  
  fVar4 = *(float *)(param_1 + 0xa0);
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  fVar20 = (float10)fVar4;
  fVar4 = param_2[5];
  (*(float *)(gen_frame + 0xa4)) = fVar4;
  fVar21 = (float10)param_7;
  fVar1 = param_2[6];
  (*(float *)(gen_frame + 0xa8)) = fVar1;
  fVar2 = param_3[4];
  fVar5 = (float)(fVar21 * fVar20);
  (*(float *)(gen_frame + 0xd0)) = fVar5;
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar6 = *(float *)(param_1 + 0xa4);
  fVar3 = param_3[5];
  (*(float *)(gen_frame + 0xe8)) = fVar6;
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar22 = (float10)fVar6;
  fVar6 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0xd4)) = fVar6;
  fVar7 = *(float *)(param_1 + 0xa8);
  (*(float *)(gen_frame + 0xe8)) = fVar7;
  fVar23 = (float10)fVar7;
  fVar7 = (float)(fVar23 * fVar21);
  (*(float *)(gen_frame + 0xd8)) = fVar7;
  fVar8 = *(float *)(param_1 + 0x90);
  (*(float *)(gen_frame + 0xe8)) = fVar8;
  fVar21 = (float10)fVar8;
  fVar8 = (float)(fVar21 + (float10)fVar5);
  (*(float *)(gen_frame + 0x80)) = fVar8;
  fVar5 = *(float *)(param_1 + 0x94);
  (*(float *)(gen_frame + 0xe8)) = fVar5;
  fVar24 = (float10)fVar5;
  fVar6 = (float)(fVar24 + (float10)fVar6);
  (*(float *)(gen_frame + 0x84)) = fVar6;
  fVar5 = *(float *)(param_1 + 0x98);
  (*(float *)(gen_frame + 0xe8)) = fVar5;
  fVar25 = (float10)fVar5;
  fVar7 = (float)(fVar25 + (float10)fVar7);
  (*(float *)(gen_frame + 0x88)) = fVar7;
  fVar26 = (float10)param_8;
  fVar5 = (float)(fVar26 * fVar20);
  (*(float *)(gen_frame + 0xd0)) = fVar5;
  fVar9 = (float)(fVar26 * fVar22);
  (*(float *)(gen_frame + 0xd4)) = fVar9;
  fVar10 = (float)(fVar23 * fVar26);
  (*(float *)(gen_frame + 0xd8)) = fVar10;
  fVar11 = (float)((float10)fVar5 + fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar11;
  fVar9 = (float)(fVar24 + (float10)fVar9);
  (*(float *)(gen_frame + 0x74)) = fVar9;
  fVar10 = (float)(fVar25 + (float10)fVar10);
  (*(float *)(gen_frame + 0x78)) = fVar10;
  fVar12 = param_2[4];
  (*(float *)(gen_frame + 0xa0)) = fVar12;
  fVar5 = param_3[6];
  (*(float *)(gen_frame + 0x68)) = fVar5;
  fVar12 = (float)((float10)*param_2 - (float10)fVar12);
  (*(float *)(gen_frame + 0xd0)) = fVar12;
  fVar13 = param_2[1];
  (*(float *)(gen_frame + 0x30)) = fVar8;
  fVar4 = (float)((float10)fVar13 - (float10)fVar4);
  (*(float *)(gen_frame + 0xd4)) = fVar4;
  (*(float *)(gen_frame + 0x34)) = fVar6;
  (*(float *)(gen_frame + 0x38)) = fVar7;
  fVar1 = (float)((float10)param_2[2] - (float10)fVar1);
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = REFG(float, 0x1090708);
  (*(float *)(gen_frame + 0x20)) = fVar12;
  (*(float *)(gen_frame + 0x24)) = fVar4;
  (*(float *)(gen_frame + 0x28)) = fVar1;
  fVar4 = (float)((float10)*param_3 - (float10)fVar2);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)param_3[1] - (float10)fVar3);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)((float10)param_3[2] - (float10)fVar5);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  (*(float *)(gen_frame + 0x10)) = fVar4;
  (*(float *)(gen_frame + 0x14)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar4 = (float)((float10)fVar11 - (float10)fVar8);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar9 - (float10)fVar6);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)((float10)fVar10 - (float10)fVar7);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  (*(float *)(gen_frame + 0x0)) = fVar4;
  (*(float *)(gen_frame + 0x4)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb4) + (float10)param_4)));
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  bVar17 = F_00c26b40(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)),fVar4,
                        &(*(float *)(gen_frame + 0x48)));
  if (bVar17 == 0) {
    return 0;
  }
  fVar4 = *param_2;
  fVar20 = (float10)(*(float *)(gen_frame + 0x48));
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar20);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x20))) + (float10)(*(float *)(gen_frame + 0xa0)))));
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar20) + (float10)(*(float *)(gen_frame + 0xa4)))));
  (*(float *)(gen_frame + 0xb4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar20) + (float10)(*(float *)(gen_frame + 0xa8)))));
  (*(float *)(gen_frame + 0xb8)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar3;
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar20);
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar20);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar20);
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) * fVar20) + (float10)(*(float *)(gen_frame + 0x60)))));
  (*(float *)(gen_frame + 0xb0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar20) + (float10)(*(float *)(gen_frame + 0x64)))));
  (*(float *)(gen_frame + 0xb4)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x18)) * fVar20) + (float10)(*(float *)(gen_frame + 0x68)))));
  (*(float *)(gen_frame + 0xb8)) = fVar3;
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  (*(float *)(gen_frame + 0xd8)) = fVar3;
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar20);
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar20);
  (*(float *)(gen_frame + 0xb8)) = (float)(fVar20 * (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0xb0)) = fVar4;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) * fVar20) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  (*(float *)(gen_frame + 0xb4)) = param_2[1];
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar20) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  (*(float *)(gen_frame + 0xb8)) = param_2[2];
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar20 * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  (*(float *)(gen_frame + 0x80)) = fVar4;
  (*(float *)(gen_frame + 0x84)) = fVar1;
  (*(float *)(gen_frame + 0x88)) = fVar2;
  (*(float *)(gen_frame + 0xec)) = 0.0;
  F_00c262e0(&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xd0)),&(*(float *)(gen_frame + 0x80)),&(*(float *)(gen_frame + 0xb0)),&(*(float *)(gen_frame + 0xec)));
  (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x1087f04);
  if ((char)param_6 != '\0') {
    (*(float *)(gen_frame + 0xe8)) = REFG(float, 0x10ac168);
    pfVar18 = &(*(float *)(gen_frame + 0xec));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0xec)))) {
      pfVar18 = &(*(float *)(gen_frame + 0xe8));
    }
    (*(float *)(gen_frame + 0xe8)) = (float)((float10)1 / (float10)*pfVar18);
  }
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0xb0)) - (float10)(*(float *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0xb4)) - (float10)(*(float *)(gen_frame + 0x84)));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0xb8)) - (float10)(*(float *)(gen_frame + 0x88)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  (*(float *)(gen_frame + 0xa0)) = fVar4;
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  (*(float *)(gen_frame + 0xa8)) = fVar2;
  fVar4 = ((float)GEN_TOF(((float10)fVar2 * (float10)fVar2 +
                 ((float10)fVar1 * (float10)fVar1 + (float10)fVar4 * (float10)fVar4))));
  (*(float *)(gen_frame + 0xec)) = fVar4;
  fVar4 = ((float)GEN_TOF(SQRT((float10)fVar4)));
  (*(float *)(gen_frame + 0xec)) = fVar4;
  bVar19 = GEN_ISNAN((float10)fVar4) || GEN_ISNAN((float10)0);
  if (bVar19 != (bVar19 || (float10)fVar4 == (float10)0)) {
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xa8)) = 0.0;
  }
  fVar4 = *param_5;
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  (*(float *)(gen_frame + 0x9c)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0xec)));
  fVar21 = (float10)(*(float *)(gen_frame + 0xa0));
  fVar22 = (float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0xec)));
  (*(float *)(gen_frame + 0xa0)) = (float)(fVar22 * fVar21);
  fVar23 = (float10)(*(float *)(gen_frame + 0xa4));
  (*(float *)(gen_frame + 0xa4)) = (float)(fVar23 * fVar22);
  fVar20 = (float10)(*(float *)(gen_frame + 0xa8));
  (*(float *)(gen_frame + 0xa8)) = (float)(fVar22 * fVar20);
  fVar21 = (float10)(float)(fVar22 * fVar21);
  fVar23 = (float10)(float)(fVar23 * fVar22);
  fVar20 = (float10)(float)(fVar22 * fVar20);
  fVar1 = ((float)GEN_TOF((fVar20 * (float10)(*(float *)(gen_frame + 0x18)) +
                 ((float10)(*(float *)(gen_frame + 0x10)) * fVar21 + (float10)(*(float *)(gen_frame + 0x14)) * fVar23))));
  (*(float *)(gen_frame + 0x9c)) = fVar1;
  fVar22 = (float10)fVar1;
  fVar2 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar3 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar5 = (float)(fVar20 * fVar22);
  (*(float *)(gen_frame + 0x68)) = fVar5;
  (*(float *)(gen_frame + 0xa0)) = fVar2;
  (*(float *)(gen_frame + 0xa4)) = fVar3;
  (*(float *)(gen_frame + 0xa8)) = fVar5;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar2);
  (*(float *)(gen_frame + 0xb0)) = fVar2;
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)fVar3);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar5 = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)fVar5);
  (*(float *)(gen_frame + 0xb8)) = fVar5;
  if (fVar1 <= 0.0) {
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    fVar22 = (float10)0.0;
    (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x80)));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x84)));
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x88)));
  (*(float *)(gen_frame + 0x68)) = fVar6;
  fVar24 = (float10)(float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x80)));
  fVar7 = ((float)GEN_TOF(((float10)fVar6 * fVar20 + ((float10)fVar1 * fVar23 + fVar24 * fVar21))));
  (*(float *)(gen_frame + 0x9c)) = fVar7;
  fVar25 = (float10)fVar7;
  fVar8 = (float)(fVar25 * fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar8;
  fVar9 = (float)(fVar23 * fVar25);
  (*(float *)(gen_frame + 0x74)) = fVar9;
  fVar10 = (float)(fVar20 * fVar25);
  (*(float *)(gen_frame + 0x78)) = fVar10;
  fVar11 = (float)(fVar24 - (float10)fVar8);
  (*(float *)(gen_frame + 0x80)) = fVar11;
  fVar1 = (float)((float10)fVar1 - (float10)fVar9);
  (*(float *)(gen_frame + 0x84)) = fVar1;
  fVar6 = (float)((float10)fVar6 - (float10)fVar10);
  (*(float *)(gen_frame + 0x88)) = fVar6;
  if (fVar22 < fVar25) {
    (*(float *)(gen_frame + 0xa0)) = fVar8;
    (*(float *)(gen_frame + 0xa4)) = fVar9;
    (*(float *)(gen_frame + 0xa8)) = fVar10;
  }
  pfVar18 = &(*(float *)(gen_frame + 0x4c));
  fVar22 = (float10)fVar2;
  fVar2 = (float)((float10)fVar11 - fVar22);
  (*(float *)(gen_frame + 0xf0)) = fVar2;
  fVar24 = (float10)fVar3;
  fVar3 = (float)((float10)fVar1 - fVar24);
  (*(float *)(gen_frame + 0xf4)) = fVar3;
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar6 - (float10)fVar5);
  fVar25 = (float10)fVar4;
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  fVar4 = (float)(fVar25 * (float10)fVar2);
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar2 = (float)((float10)fVar3 * fVar25);
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar5) * fVar25)));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar4 = (float)((float10)fVar4 + fVar22);
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar2 = (float)(fVar24 + (float10)fVar2);
  (*(float *)(gen_frame + 0xf4)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)fVar5);
  (*(float *)(gen_frame + 0xf8)) = fVar3;
  fVar4 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xa0)));
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0xa4)));
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xa8)));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar22 = (float10)(*(float *)(gen_frame + 0x4c));
  (*(float *)(gen_frame + 0x4c)) = (float)(fVar22 - (float10)(*(float *)(gen_frame + 0xec)));
  if (!((float10)0 < (float10)(float)(fVar22 - (float10)(*(float *)(gen_frame + 0xec))))) {
    pfVar18 = &(*(float *)(gen_frame + 0xcc));
  }
  fVar5 = ((float)GEN_TOF((((float10)param_5[2] * (float10)*pfVar18) * (float10)(*(float *)(gen_frame + 0xe8)))));
  (*(float *)(gen_frame + 0xcc)) = fVar5;
  fVar22 = (float10)fVar5;
  fVar5 = (float)(fVar22 * fVar21);
  (*(float *)(gen_frame + 0x70)) = fVar5;
  fVar12 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x74)) = fVar12;
  (*(float *)(gen_frame + 0x78)) = (float)(fVar22 * fVar20);
  fVar22 = (float10)(float)(fVar22 * fVar20);
  if ((char)param_6 == '\0') {
    fVar13 = ((float)GEN_TOF((fVar20 * (float10)(*(float *)(gen_frame + 0x28)) +
                    (fVar23 * (float10)(*(float *)(gen_frame + 0x24)) + fVar21 * (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0xec)) = fVar13;
    fVar24 = (float10)fVar13;
    fVar14 = (float)(fVar24 * fVar21);
    (*(float *)(gen_frame + 0xf0)) = fVar14;
    fVar15 = (float)(fVar24 * fVar23);
    (*(float *)(gen_frame + 0xf4)) = fVar15;
    fVar16 = (float)(fVar24 * fVar20);
    (*(float *)(gen_frame + 0xf8)) = fVar16;
    (*(float *)(gen_frame + 0xa0)) = fVar14;
    (*(float *)(gen_frame + 0xa4)) = fVar15;
    (*(float *)(gen_frame + 0xa8)) = fVar16;
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar15);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar16);
    if (fVar13 <= 0.0) {
      (*(float *)(gen_frame + 0xec)) = 0.0;
      fVar24 = (float10)0.0;
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
    }
    if (fVar24 < (float10)fVar7) {
      (*(float *)(gen_frame + 0xa0)) = fVar8;
      (*(float *)(gen_frame + 0xa4)) = fVar9;
      (*(float *)(gen_frame + 0xa8)) = fVar10;
    }
    fVar20 = (float10)(float)((float10)(*(float *)(gen_frame + 0x20)) - (float10)fVar14);
    fVar7 = (float)((float10)fVar11 - fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar21 = (float10)(float)((float10)(*(float *)(gen_frame + 0x24)) - (float10)fVar15);
    fVar1 = (float)((float10)fVar1 - fVar21);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar23 = (float10)(float)((float10)(*(float *)(gen_frame + 0x28)) - (float10)fVar16);
    fVar6 = (float)((float10)fVar6 - fVar23);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar7 = (float)((float10)fVar7 * fVar25);
    (*(float *)(gen_frame + 0xf0)) = fVar7;
    fVar1 = (float)((float10)fVar1 * fVar25);
    (*(float *)(gen_frame + 0xf4)) = fVar1;
    fVar6 = (float)((float10)fVar6 * fVar25);
    (*(float *)(gen_frame + 0xf8)) = fVar6;
    fVar7 = (float)((float10)fVar7 + fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar1 = (float)(fVar21 + (float10)fVar1);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar6 = (float)(fVar23 + (float10)fVar6);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0xf0)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xa4)));
    (*(float *)(gen_frame + 0xf4)) = fVar1;
    fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0xa8)));
    (*(float *)(gen_frame + 0xf8)) = fVar6;
    (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
    fVar20 = (float10)fVar7;
    fVar21 = (float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
    fVar7 = (float)(fVar21 * fVar20);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar23 = (float10)fVar1;
    fVar1 = (float)(fVar23 * fVar21);
    (*(float *)(gen_frame + 0xb4)) = fVar1;
    fVar24 = (float10)fVar6;
    fVar6 = (float)(fVar24 * fVar21);
    (*(float *)(gen_frame + 0xb8)) = fVar6;
    fVar8 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0xf0)) = fVar8;
    fVar9 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0xf4)) = fVar9;
    (*(float *)(gen_frame + 0xf8)) = (float)(fVar22 + (float10)(*(float *)(gen_frame + 0x58)));
    fVar7 = (float)((float10)fVar8 + (float10)fVar7);
    (*(float *)(gen_frame + 0x50)) = fVar7;
    fVar1 = (float)((float10)fVar9 + (float10)fVar1);
    (*(float *)(gen_frame + 0x54)) = fVar1;
    fVar6 = ((float)GEN_TOF(((float10)(float)(fVar22 + (float10)(*(float *)(gen_frame + 0x58))) + (float10)fVar6)));
    (*(float *)(gen_frame + 0x58)) = fVar6;
    *param_2 = fVar7;
    param_2[1] = fVar1;
    param_2[2] = fVar6;
    fVar1 = (float)(fVar20 - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0xf0)) = fVar1;
    fVar6 = (float)(fVar23 - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0xf4)) = fVar6;
    fVar7 = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x28)));
    (*(float *)(gen_frame + 0xf8)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)fVar5);
    (*(float *)(gen_frame + 0x50)) = fVar1;
    fVar6 = (float)((float10)fVar6 + (float10)fVar12);
    (*(float *)(gen_frame + 0x54)) = fVar6;
    fVar7 = (float)((float10)fVar7 + fVar22);
    (*(float *)(gen_frame + 0x58)) = fVar7;
    param_2[8] = (float)((float10)fVar1 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar6 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar7 + (float10)param_2[10]);
    fVar1 = param_5[1];
    (*(float *)(gen_frame + 0xcc)) = fVar1;
    fVar20 = (float10)fVar1;
    param_2[8] = (float)(fVar20 * (float10)param_2[8]);
    param_2[9] = (float)((float10)param_2[9] * fVar20);
    param_2[10] = (float)(fVar20 * (float10)param_2[10]);
  }
  (*(float *)(gen_frame + 0xcc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
  fVar20 = (float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x48)));
  fVar21 = (float10)fVar4;
  fVar4 = (float)(fVar21 * fVar20);
  (*(float *)(gen_frame + 0x50)) = fVar4;
  fVar23 = (float10)fVar2;
  fVar1 = (float)(fVar23 * fVar20);
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar24 = (float10)fVar3;
  fVar2 = (float)(fVar24 * fVar20);
  (*(float *)(gen_frame + 0x58)) = fVar2;
  fVar3 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0xd0)));
  (*(float *)(gen_frame + 0xf0)) = fVar3;
  fVar6 = (float)((float10)fVar12 + (float10)(*(float *)(gen_frame + 0xd4)));
  (*(float *)(gen_frame + 0xf4)) = fVar6;
  (*(float *)(gen_frame + 0xf8)) = (float)(fVar22 + (float10)(*(float *)(gen_frame + 0xd8)));
  fVar4 = (float)((float10)fVar3 + (float10)fVar4);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar6 + (float10)fVar1);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar22 + (float10)(*(float *)(gen_frame + 0xd8))) + (float10)fVar2)));
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  *param_3 = fVar4;
  param_3[1] = fVar1;
  param_3[2] = fVar2;
  fVar4 = (float)(fVar21 - (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0xf0)) = fVar4;
  fVar1 = (float)(fVar23 - (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0xf4)) = fVar1;
  fVar2 = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar4 = (float)((float10)fVar5 + (float10)fVar4);
  (*(float *)(gen_frame + 0xd0)) = fVar4;
  fVar1 = (float)((float10)fVar12 + (float10)fVar1);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  fVar2 = (float)(fVar22 + (float10)fVar2);
  (*(float *)(gen_frame + 0xd8)) = fVar2;
  param_3[8] = (float)((float10)fVar4 + (float10)param_3[8]);
  param_3[9] = (float)((float10)fVar1 + (float10)param_3[9]);
  param_3[10] = (float)((float10)fVar2 + (float10)param_3[10]);
  fVar4 = param_5[1];
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar20 = (float10)fVar4;
  param_3[8] = (float)(fVar20 * (float10)param_3[8]);
  param_3[9] = (float)(fVar20 * (float10)param_3[9]);
  param_3[10] = (float)(fVar20 * (float10)param_3[10]);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf7 */
byte F_00bf34a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xbf34a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  byte bVar1;
  
  if (((char)param_4 != '\0') && (param_3 == 1)) {
    bVar1 = F_00bf24b0(param_1,param_2,param_5,param_6,param_7);
    return bVar1;
  }
  bVar1 = F_00bf1a60(param_1,param_2,param_3,param_5,(undefined4)gen_fl2bits(param_6),param_7);
  return bVar1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf8 */
byte F_00bf3500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xbf3500u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  byte bVar1;
  
  if ((param_5 & 1) == 0) {
    return 0;
  }
  if ((char)param_6 != '\0') {
    bVar1 = F_00bf29d0(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10);
    return bVar1;
  }
  bVar1 = F_00bf1e80(param_1,param_2,param_3,param_4,param_7,param_8,
                       (undefined4)gen_fl2bits(param_9),param_10);
  return bVar1;
}

/* ref: FUN_00bf3560 */
uint F_00bf3560(unsigned int gen_a0)
{
  GEN_ENTER(0xbf3560u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Physics::CollisionSphere::vf0 */
uint F_00bf3580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf3580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00bf35b0 */
byte F_00bf35b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xbf35b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  byte bVar1;
  
  bVar1 = F_00c24640(param_1,param_2,param_3);
  if (bVar1 == 0) {
    return 0;
  }
  *(float *)((int)param_1 + 0xc0) = param_4;
  return 1;
}

/* ref: FUN_00bf3600 */
uint F_00bf3600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf3600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c246b0(in_ecx,param_2);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0d0));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1375ac0));
  in_ecx[0x2d] = GEN_FLT_TO(in_ecx[0x2d], REFG(float, 0x1375ac4));
  in_ecx[0x2e] = GEN_FLT_TO(in_ecx[0x2e], REFG(float, 0x1375ac8));
  in_ecx[0x30] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bf36f0 */
uint F_00bf36f0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf36f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00bf3600(in_ecx,2);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e0fc));
  *(undefined2 *)(in_ecx + 0x34) = 0xffff;
  in_ecx[0x38] = GEN_FLT_TO(in_ecx[0x38], REFG(float, 0x1375ac0));
  in_ecx[0x39] = GEN_FLT_TO(in_ecx[0x39], REFG(float, 0x1375ac4));
  in_ecx[0x3a] = GEN_FLT_TO(in_ecx[0x3a], REFG(float, 0x1375ac8));
  in_ecx[0x3c] = GEN_FLT_TO(in_ecx[0x3c], REFG(float, 0x1375ac0));
  in_ecx[0x3d] = GEN_FLT_TO(in_ecx[0x3d], REFG(float, 0x1375ac4));
  in_ecx[0x3e] = GEN_FLT_TO(in_ecx[0x3e], REFG(float, 0x1375ac8));
  return (uint)in_ecx;
}

/* ref: FUN_00bf3780 */
uint F_00bf3780(unsigned int gen_a0)
{
  GEN_ENTER(0xbf3780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00bf3600(this,3);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x110e128));
  *(undefined4 *)((int)this + 0xd2) = 0xffffffff;
  *(undefined2 *)((int)this + 0xd0) = 0xffff;
  *(undefined4 *)((int)this + 0x100) = REFG(float, 0x1375ac0);
  *(undefined4 *)((int)this + 0x104) = REFG(float, 0x1375ac4);
  *(undefined4 *)((int)this + 0x108) = REFG(float, 0x1375ac8);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)((int)this + 0x100);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)((int)this + 0x104);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)((int)this + 0x108);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)((int)this + 0xf0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)((int)this + 0xf4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)((int)this + 0xf8);
  return (uint)this;
}

/* ref: FUN_00bf3840 */
byte F_00bf3840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xbf3840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  byte bVar1;
  
  bVar1 = F_00c24640(param_1,param_2,param_3);
  if (bVar1 != 0) {
    *(undefined2 *)(param_1 + 0x34) = (undefined2)param_4;
    param_1[0x30] = (int)gen_fl2bits(param_7);
    param_1[0x38] = *param_5;
    param_1[0x39] = param_5[1];
    param_1[0x3a] = param_5[2];
    param_1[0x3c] = *param_6;
    param_1[0x3d] = param_6[1];
    param_1[0x3e] = param_6[2];
    ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bf38d0 */
byte F_00bf38d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xbf38d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  int * param_8 = (int *)(uintptr_t)gen_a7;
  int * param_9 = (int *)(uintptr_t)gen_a8;
  float param_10 = (float)gen_a9;
  byte bVar1;
  
  bVar1 = F_00c24640(param_1,param_2,param_3);
  if (bVar1 != 0) {
    *(undefined2 *)((int)param_1 + 0xd2) = (undefined2)param_5;
    *(undefined2 *)(param_1 + 0x34) = (undefined2)param_4;
    *(undefined2 *)(param_1 + 0x35) = (undefined2)param_6;
    param_1[0x30] = (int)gen_fl2bits(param_10);
    param_1[0x38] = *param_7;
    param_1[0x39] = param_7[1];
    param_1[0x3a] = param_7[2];
    param_1[0x3c] = *param_8;
    param_1[0x3d] = param_8[1];
    param_1[0x3e] = param_8[2];
    param_1[0x40] = *param_9;
    param_1[0x41] = param_9[1];
    param_1[0x42] = param_9[2];
    ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    return 1;
  }
  return 0;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::vf5 */
uint F_00bf3990(unsigned int gen_a0)
{
  GEN_ENTER(0xbf3990u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x100];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  int iVar5;
  undefined4 * puVar6;
  undefined * pCVar7;
  
  (*(uint *)(gen_frame + 0xec)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xf0);
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  puVar4 = (undefined4 *)F_00623320(*(undefined * PTR32 *)(this + 0x28),(uint)*(ushort *)(this + 0xd0));
  puVar6 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x20)),((undefined4 *)(gen_frame + 0x60)));
  pCVar3 = (*(undefined * PTR32 *)(gen_frame + 0x1c));
  puVar6 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar4 = (undefined4 *)F_004ee970(((undefined1 *)(gen_frame + 0x0)),(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0xe0,((undefined4 *)(gen_frame + 0xa0)));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x80) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x84) = uVar1;
  *(undefined4 *)(pCVar3 + 0x88) = uVar2;
  puVar4 = (undefined4 *)F_004ee9d0(((undefined1 *)(gen_frame + 0x0)),pCVar3 + 0xf0,((undefined4 *)(gen_frame + 0xa0)));
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  *(undefined4 *)(pCVar3 + 0x90) = *puVar4;
  *(undefined4 *)(pCVar3 + 0x94) = uVar1;
  *(undefined4 *)(pCVar3 + 0x98) = uVar2;
  F_0046f390(pCVar3 + 0x90);
  *(undefined4 *)(pCVar3 + 0xa0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(pCVar3 + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(pCVar3 + 0xa8) = REFG(float, 0x1375ac8);
  *(undefined4 *)(pCVar3 + 0xb0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(pCVar3 + 0xb4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(pCVar3 + 0xb8) = REFG(float, 0x1375ac8);
  puVar4 = ((undefined4 *)(gen_frame + 0xa0));
  pCVar7 = pCVar3 + 0x30;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar7 = pCVar7 + 4;
  }
  *(undefined4 *)(pCVar3 + 0x60) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x80);
  *(undefined4 *)(pCVar3 + 100) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x84);
  *(undefined4 *)(pCVar3 + 0x68) = *(undefined4 *)((*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x88);
  F_00c47745((*(uint *)(gen_frame + 0xec)) ^ (uint)(uint)(gen_frame + 0xf0));
  return (uint)(pCVar3 + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::vf6 */
uint F_00bf3b30(unsigned int gen_a0)
{
  GEN_ENTER(0xbf3b30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float * pfVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28),((undefined4 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0xd0));
  pfVar2 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xe0,((undefined4 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x10)) = *pfVar2;
  (*(float *)(gen_frame + 0x14)) = pfVar2[1];
  (*(float *)(gen_frame + 0x18)) = pfVar2[2];
  pfVar2 = (float *)F_004ee9d0(&(*(float *)(gen_frame + 0x20)),this + 0xf0,((undefined4 *)(gen_frame + 0x30)));
  (*(float *)(gen_frame + 0x0)) = *pfVar2;
  (*(float *)(gen_frame + 0x4)) = pfVar2[1];
  (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  *(float *)(this + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x80) + (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0x84) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x84) + (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x88) + (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb4) + (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) + (float10)*(float *)(this + 0xb8))));
  fVar1 = *(float *)(this + 0x80);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x84))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0xa0) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  *(float *)(this + 0xa4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x84))));
  *(float *)(this + 0xa8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x88))));
  fVar1 = *(float *)(this + 0x90);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0x98))));
  *(float *)(this + 0xb0) = (float)((float10)(*(float *)(gen_frame + 0x0)) - (float10)fVar1);
  *(float *)(this + 0xb4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0xb8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0x98))));
  puVar4 = ((undefined4 *)(gen_frame + 0x30));
  pCVar5 = this + 0x30;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pCVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar5 = pCVar5 + 4;
  }
  *(float *)(this + 0x60) = (*(float *)(gen_frame + 0x10));
  *(float *)(this + 100) = (*(float *)(gen_frame + 0x14));
  *(float *)(this + 0x68) = (*(float *)(gen_frame + 0x18));
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return (uint)(this + 0x30);
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::vf5 */
uint F_00bf3d10(unsigned int gen_a0)
{
  GEN_ENTER(0xbf3d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x240];
  undefined * this_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined * this_01;
  undefined * pCVar6;
  undefined4 * puVar7;
  float * pfVar8;
  uint uVar9;
  int iVar10;
  undefined4 * puVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  
  (*(uint *)(gen_frame + 0x22c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x230);
  this_01 = *(undefined * PTR32 *)(this + 0x28);
  (*(undefined * PTR32 *)(gen_frame + 0x2c)) = this;
  puVar7 = (undefined4 *)F_00623320(this_01,(uint)*(ushort *)(this + 0xd0));
  puVar11 = ((undefined4 *)(gen_frame + 0xa0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0xa0)));
  puVar11 = ((undefined4 *)(gen_frame + 0x160));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = (undefined4 *)F_00623320(this_01,(uint)*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xd2));
  puVar11 = ((undefined4 *)(gen_frame + 0x120));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0x120)));
  puVar11 = ((undefined4 *)(gen_frame + 0xe0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = (undefined4 *)F_00623320(this_01,(uint)*(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xd4));
  puVar11 = ((undefined4 *)(gen_frame + 0x1a0));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  puVar7 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x1e0)),((undefined4 *)(gen_frame + 0x1a0)));
  pCVar6 = (*(undefined * PTR32 *)(gen_frame + 0x2c));
  puVar11 = ((undefined4 *)(gen_frame + 0x60));
  for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x50)),(*(undefined * PTR32 *)(gen_frame + 0x2c)) + 0xe0,((undefined4 *)(gen_frame + 0x160)));
  (*(float *)(gen_frame + 0x44)) = pfVar8[1];
  (*(float *)(gen_frame + 0x40)) = *pfVar8;
  (*(float *)(gen_frame + 0x48)) = pfVar8[2];
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),pCVar6 + 0xf0,((undefined4 *)(gen_frame + 0xe0)));
  (*(float *)(gen_frame + 0x50)) = *pfVar8;
  (*(float *)(gen_frame + 0x54)) = pfVar8[1];
  (*(float *)(gen_frame + 0x58)) = pfVar8[2];
  pfVar8 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x0)),pCVar6 + 0x100,((undefined4 *)(gen_frame + 0x60)));
  fVar1 = *pfVar8;
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = pfVar8[1];
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = pfVar8[2];
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar12 = (float10)fVar1;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) + fVar12);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44)));
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x48)));
  fVar13 = (float10)REFG(double, 0x1088108);
  fVar1 = (float)((float10)fVar1 * fVar13);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x44))) * fVar13)));
  (*(float *)(gen_frame + 0x4)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x48))) * fVar13)));
  (*(float *)(gen_frame + 0x8)) = fVar5;
  fVar14 = (float10)(*(float *)(gen_frame + 0x50));
  fVar1 = (float)(fVar14 + (float10)fVar1);
  (*(float *)(gen_frame + 0x10)) = fVar1;
  fVar15 = (float10)(*(float *)(gen_frame + 0x54));
  fVar4 = (float)(fVar15 + (float10)fVar4);
  (*(float *)(gen_frame + 0x14)) = fVar4;
  fVar16 = (float10)(*(float *)(gen_frame + 0x58));
  fVar5 = (float)(fVar16 + (float10)fVar5);
  (*(float *)(gen_frame + 0x18)) = fVar5;
  fVar1 = (float)((float10)fVar1 * fVar13);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar4 = (float)((float10)fVar4 * fVar13);
  (*(float *)(gen_frame + 0x54)) = fVar4;
  fVar5 = (float)((float10)fVar5 * fVar13);
  (*(float *)(gen_frame + 0x58)) = fVar5;
  *(float *)(pCVar6 + 0x80) = fVar1;
  *(float *)(pCVar6 + 0x84) = fVar4;
  *(float *)(pCVar6 + 0x88) = fVar5;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x40)) - fVar14);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - fVar15);
  this_00 = pCVar6 + 0x90;
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - fVar16);
  (*(float *)(gen_frame + 0x0)) = fVar1;
  (*(float *)(gen_frame + 0x4)) = (float)((float10)(*(float *)(gen_frame + 0x44)) - fVar15);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)(*(float *)(gen_frame + 0x48)) - fVar16);
  fVar1 = (float)(fVar12 - fVar14);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar2 - fVar15);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)fVar3 - fVar16);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar2 - fVar15);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar3 - fVar16);
  F_0054ce40(this_00,(uint)&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0x50)));
  F_0046f390(this_00);
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  *(undefined4 *)(pCVar6 + 0xa0) = REFG(float, 0x1375ac0);
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x48));
  *(undefined4 *)(pCVar6 + 0xa4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(pCVar6 + 0xa8) = REFG(float, 0x1375ac8);
  *(undefined4 *)(pCVar6 + 0xb0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(pCVar6 + 0xb4) = REFG(float, 0x1375ac4);
  *(undefined4 *)(pCVar6 + 0xb8) = REFG(float, 0x1375ac8);
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x40));
  uVar9 = F_0046f390(&(*(float *)(gen_frame + 0x30)));
  fVar1 = *(float *)this_00;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = *(float *)(pCVar6 + 0x94);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = *(float *)(pCVar6 + 0x98);
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x34)) * (float10)fVar3 - (float10)(*(float *)(gen_frame + 0x38)) * (float10)fVar2);
  (*(float *)(gen_frame + 0x50)) = fVar4;
  *(float *)(pCVar6 + 0x30) = (*(float *)(gen_frame + 0x30));
  fVar5 = (float)((float10)fVar1 * (float10)(*(float *)(gen_frame + 0x38)) - (float10)(*(float *)(gen_frame + 0x30)) * (float10)fVar3);
  (*(float *)(gen_frame + 0x54)) = fVar5;
  *(float *)(pCVar6 + 0x34) = (*(float *)(gen_frame + 0x34));
  *(float *)(pCVar6 + 0x38) = (*(float *)(gen_frame + 0x38));
  *(float *)(pCVar6 + 0x40) = fVar1;
  *(float *)(pCVar6 + 0x44) = fVar2;
  *(float *)(pCVar6 + 0x48) = fVar3;
  fVar1 = (float)((float10)fVar2 * (float10)(*(float *)(gen_frame + 0x30)) - (float10)(*(float *)(gen_frame + 0x34)) * (float10)fVar1);
  (*(float *)(gen_frame + 0x58)) = fVar1;
  *(float *)(pCVar6 + 0x50) = fVar4;
  *(float *)(pCVar6 + 0x58) = fVar1;
  *(float *)(pCVar6 + 0x54) = fVar5;
  *(undefined4 *)(pCVar6 + 0x60) = *(undefined4 *)(pCVar6 + 0x80);
  *(undefined4 *)(pCVar6 + 100) = *(undefined4 *)(pCVar6 + 0x84);
  *(undefined4 *)(pCVar6 + 0x68) = *(undefined4 *)(pCVar6 + 0x88);
  F_00c47745((*(uint *)(gen_frame + 0x22c)) ^ (uint)(uint)(gen_frame + 0x230));
  return uVar9;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::vf6 */
uint F_00bf4240(unsigned int gen_a0)
{
  GEN_ENTER(0xbf4240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x110];
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
  undefined * this_00;
  float * pfVar12;
  uint uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  this_00 = *(undefined * PTR32 *)(this + 0x28);
  F_0063a290(this_00,((undefined1 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0xd0));
  F_0063a290(this_00,((undefined1 *)(gen_frame + 0x70)),(uint)*(ushort *)(this + 0xd2));
  F_0063a290(this_00,((undefined1 *)(gen_frame + 0xb0)),(uint)*(ushort *)(this + 0xd4));
  pfVar12 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xe0,((undefined1 *)(gen_frame + 0x30)));
  fVar1 = pfVar12[1];
  fVar6 = *pfVar12;
  fVar2 = pfVar12[2];
  pfVar12 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0xf0,((undefined1 *)(gen_frame + 0x70)));
  fVar3 = *pfVar12;
  fVar4 = pfVar12[1];
  fVar5 = pfVar12[2];
  pfVar12 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x20)),this + 0x100,((undefined1 *)(gen_frame + 0xb0)));
  fVar7 = *pfVar12;
  (*(float *)(gen_frame + 0x0)) = fVar7;
  fVar8 = pfVar12[1];
  (*(float *)(gen_frame + 0x4)) = fVar8;
  fVar9 = pfVar12[2];
  (*(float *)(gen_frame + 0x8)) = fVar9;
  fVar14 = (float10)fVar7;
  fVar15 = (float10)REFG(double, 0x1088108);
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 + fVar14) * fVar15)));
  (*(float *)(gen_frame + 0x10)) = fVar7;
  fVar10 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 + (float10)fVar1) * fVar15)));
  (*(float *)(gen_frame + 0x14)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 + (float10)fVar2) * fVar15)));
  (*(float *)(gen_frame + 0x18)) = fVar11;
  fVar16 = (float10)fVar3;
  fVar3 = (float)(fVar16 + (float10)fVar7);
  (*(float *)(gen_frame + 0x20)) = fVar3;
  fVar17 = (float10)fVar4;
  fVar4 = (float)(fVar17 + (float10)fVar10);
  (*(float *)(gen_frame + 0x24)) = fVar4;
  fVar18 = (float10)fVar5;
  fVar5 = (float)(fVar18 + (float10)fVar11);
  (*(float *)(gen_frame + 0x28)) = fVar5;
  fVar3 = (float)((float10)fVar3 * fVar15);
  fVar4 = (float)((float10)fVar4 * fVar15);
  fVar5 = (float)((float10)fVar5 * fVar15);
  fVar6 = (float)((float10)fVar6 - fVar16);
  (*(float *)(gen_frame + 0x20)) = fVar6;
  fVar1 = (float)((float10)fVar1 - fVar17);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  fVar2 = (float)((float10)fVar2 - fVar18);
  (*(float *)(gen_frame + 0x28)) = fVar2;
  fVar7 = (float)(fVar14 - fVar16);
  fVar14 = (float10)(float)((float10)fVar9 - fVar18);
  fVar15 = (float10)fVar1;
  fVar16 = (float10)(float)((float10)fVar8 - fVar17);
  fVar19 = (float10)fVar2;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar15 * fVar14 - fVar19 * fVar16);
  fVar20 = (float10)fVar7;
  fVar21 = (float10)fVar6;
  (*(float *)(gen_frame + 0x14)) = (float)(fVar20 * fVar19 - fVar21 * fVar14);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar16 * fVar21 - fVar15 * fVar20);
  F_0046f390(&(*(float *)(gen_frame + 0x10)));
  *(float *)(this + 0x80) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0x80))));
  fVar1 = *(float *)(this + 0xa4);
  fVar2 = *(float *)(this + 0x84);
  (*(float *)(gen_frame + 0x0)) = fVar7;
  *(float *)(this + 0x84) = (float)((float10)fVar1 + (float10)fVar2);
  *(float *)(this + 0x88) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 0x88))));
  *(float *)(this + 0x90) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0x94) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x94) + (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0x98) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x98) + (float10)*(float *)(this + 0xb8))));
  fVar1 = ((float)GEN_TOF(((float10)fVar3 - (float10)*(float *)(this + 0x80))));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)fVar4 - (float10)*(float *)(this + 0x84))));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar6 = ((float)GEN_TOF(((float10)fVar5 - (float10)*(float *)(this + 0x88))));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  *(float *)(this + 0xa0) = fVar1;
  *(float *)(this + 0xa4) = fVar2;
  *(float *)(this + 0xa8) = fVar6;
  fVar1 = *(float *)(this + 0x90);
  (*(float *)(gen_frame + 0x20)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x94))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x98))));
  *(float *)(this + 0xb0) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)fVar1);
  *(float *)(this + 0xb4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0x94))));
  *(float *)(this + 0xb8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0x98))));
  (*(float *)(gen_frame + 0x4)) = (float)((float10)fVar8 - fVar17);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)fVar9 - fVar18);
  uVar13 = F_0046f390(&(*(float *)(gen_frame + 0x0)));
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x8)) * (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x20)) = fVar1;
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)(*(float *)(gen_frame + 0x8)) - (float10)(*(float *)(gen_frame + 0x0)) * (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x24)) = fVar2;
  fVar6 = (float)((float10)(*(float *)(gen_frame + 0x14)) * (float10)(*(float *)(gen_frame + 0x0)) - (float10)(*(float *)(gen_frame + 0x4)) * (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x28)) = fVar6;
  *(float *)(this + 0x58) = fVar6;
  *(float *)(this + 0x30) = (*(float *)(gen_frame + 0x0));
  *(float *)(this + 0x34) = (*(float *)(gen_frame + 0x4));
  *(float *)(this + 0x38) = (*(float *)(gen_frame + 0x8));
  *(float *)(this + 0x40) = (*(float *)(gen_frame + 0x10));
  *(float *)(this + 0x44) = (*(float *)(gen_frame + 0x14));
  *(float *)(this + 0x48) = (*(float *)(gen_frame + 0x18));
  *(float *)(this + 0x50) = fVar1;
  *(float *)(this + 0x54) = fVar2;
  *(float *)(this + 0x60) = fVar3;
  *(float *)(this + 100) = fVar4;
  *(float *)(this + 0x68) = fVar5;
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return uVar13;
}

/* ref: Client::Graphics::Physics::CollisionPlane::vf9 */
uint F_00bf4750(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf4750u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar1 = *(float *)(this + 0x94);
  fVar2 = *(float *)(this + 0xb4);
  fVar3 = *(float *)(this + 0x98);
  fVar4 = *(float *)(this + 0xb8);
  *param_1 = ((float)GEN_TOF(((float10)*(float *)(this + 0x90) + (float10)*(float *)(this + 0xb0))));
  param_1[1] = (float)((float10)fVar1 + (float10)fVar2);
  param_1[2] = (float)((float10)fVar3 + (float10)fVar4);
  uVar5 = F_0046f390(param_1);
  return uVar5;
}

/* ref: Client::Graphics::Physics::CollisionPlane::vf7 */
byte F_00bf47c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xbf47c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
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
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar11 = (float10)param_7;
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar4 = *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x84);
  fVar6 = *(float *)(param_1 + 0x88);
  fVar7 = *(float *)(param_1 + 0xb4);
  fVar8 = *(float *)(param_1 + 0xb8);
  fVar9 = *(float *)(param_1 + 0x94);
  fVar10 = *(float *)(param_1 + 0x98);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x90) +
                    (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0xb0) * fVar11))))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)fVar9 + (float10)(float)((float10)fVar7 * fVar11))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)(fVar11 * (float10)fVar8))));
  F_0046f390(&(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x4)) = (*(float *)(gen_frame + 0x14));
  (*(float *)(gen_frame + 0x0)) = (*(float *)(gen_frame + 0x10));
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2[2] -
                                  (float10)((float)GEN_TOF(((float10)fVar6 +
                                                  (float10)(float)((float10)fVar3 * fVar11))))))) *
                  (float10)(*(float *)(gen_frame + 0x18)) +
                 ((float10)((float)GEN_TOF(((float10)*param_2 -
                                  (float10)((float)GEN_TOF(((float10)fVar4 +
                                                  (float10)(float)(fVar11 * (float10)fVar1))))))) *
                  (float10)(*(float *)(gen_frame + 0x10)) +
                 (float10)((float)GEN_TOF(((float10)param_2[1] -
                                 (float10)((float)GEN_TOF(((float10)fVar5 +
                                                 (float10)(float)((float10)fVar2 * fVar11))))))) *
                 (float10)(*(float *)(gen_frame + 0x14))))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  (*(float *)(gen_frame + 0x8)) = (*(float *)(gen_frame + 0x18));
  if (param_3 != 0) {
    if ((param_3 & 2) != 0) {
      (*(float *)(gen_frame + 0x0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x10))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x14))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x18))) ^ REFG(uint, 0x10920d0));
      (*(float *)(gen_frame + 0x2c)) = gen_bits2f((uint)gen_fl2bits(fVar1) ^ REFG(uint, 0x10920d0));
    }
    (*(float *)(gen_frame + 0x28)) = *(float *)(param_1 + 0xc0);
    fVar11 = (float10)*(float *)(param_1 + 0xc0);
    if (!((float10)(*(float *)(gen_frame + 0x2c)) < fVar11)) {
      return 0;
    }
    (*(float *)(gen_frame + 0x2c)) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x2c)) - (fVar11 + (float10)param_2[0x14]))));
  }
  (*(float *)(gen_frame + 0x28)) = (float)((float10)param_5[2] * (float10)(*(float *)(gen_frame + 0x2c)));
  fVar11 = (float10)(*(float *)(gen_frame + 0x0));
  fVar12 = (float10)(float)((float10)param_5[2] * (float10)(*(float *)(gen_frame + 0x2c)));
  fVar13 = (float10)(*(float *)(gen_frame + 0x4));
  fVar14 = (float10)(*(float *)(gen_frame + 0x8));
  *param_2 = ((float)GEN_TOF(((float10)*param_2 - (float10)(float)(fVar12 * fVar11))));
  param_2[1] = ((float)GEN_TOF(((float10)param_2[1] - (float10)(float)(fVar13 * fVar12))));
  param_2[2] = ((float)GEN_TOF(((float10)param_2[2] - (float10)(float)(fVar14 * fVar12))));
  fVar1 = param_2[8];
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = param_2[9];
  fVar2 = param_2[10];
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar12 = (float10)param_2[9];
  fVar15 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * fVar14 + (fVar15 * fVar11 + fVar12 * fVar13))));
  (*(float *)(gen_frame + 0x2c)) = fVar1;
  fVar16 = (float10)fVar1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar16 * fVar11);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar16 * fVar13);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar14 * fVar16);
  fVar11 = (float10)(*(float *)(gen_frame + 0x0));
  fVar13 = (float10)(*(float *)(gen_frame + 0x4));
  fVar14 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x28)) = (float)((float10)1 - (float10)*param_5);
  fVar16 = (float10)(float)((float10)1 - (float10)*param_5);
  if (fVar1 <= 0.0) {
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0x28)) = param_5[1];
  fVar17 = (float10)param_5[1];
  param_2[8] = ((float)GEN_TOF((fVar17 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)(fVar15 -
                                                                                           fVar11))))
                                                + (float10)(*(float *)(gen_frame + 0x0))))))));
  param_2[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar12 - fVar13) * fVar16)))
                                       + (float10)(*(float *)(gen_frame + 0x4))))) * fVar17)));
  param_2[10] = ((float)GEN_TOF((fVar17 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)((
                                                  float10)fVar2 - fVar14)))) + (float10)(*(float *)(gen_frame + 0x8))))))));
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionPlane::vf8 */
byte F_00bf4af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, float gen_a9)
{
  GEN_ENTER(0xbf4af0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  float param_10 = (float)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x80];
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
  bool bVar13;
  float * pfVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  
  fVar1 = *(float *)(param_1 + 0xa0);
  fVar15 = (float10)param_10;
  fVar2 = *(float *)(param_1 + 0xa4);
  fVar3 = *(float *)(param_1 + 0xa8);
  fVar4 = *(float *)(param_1 + 0x80);
  fVar5 = *(float *)(param_1 + 0x84);
  fVar6 = *(float *)(param_1 + 0x88);
  fVar7 = *(float *)(param_1 + 0xb0);
  fVar8 = *(float *)(param_1 + 0xb4);
  fVar9 = *(float *)(param_1 + 0xb8);
  fVar10 = *(float *)(param_1 + 0x90);
  (*(float *)(gen_frame + 0x68)) = fVar10;
  fVar11 = *(float *)(param_1 + 0x94);
  (*(float *)(gen_frame + 0x64)) = fVar11;
  fVar12 = *(float *)(param_1 + 0x98);
  (*(float *)(gen_frame + 0x60)) = fVar12;
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)(float)((float10)fVar7 * fVar15) + (float10)fVar10)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)(float)((float10)fVar8 * fVar15) + (float10)fVar11)));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)(float)(fVar15 * (float10)fVar9) + (float10)fVar12)));
  F_0046f390(&(*(float *)(gen_frame + 0x30)));
  fVar16 = (float10)(*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x54)) = 0.0;
  pfVar14 = &(*(float *)(gen_frame + 0x60));
  fVar17 = (float10)(*(float *)(gen_frame + 0x30));
  fVar18 = (float10)(*(float *)(gen_frame + 0x38));
  fVar7 = ((float)GEN_TOF((fVar18 * (float10)(*(float *)(gen_frame + 0x60)) +
                 (fVar17 * (float10)(*(float *)(gen_frame + 0x68)) + fVar16 * (float10)(*(float *)(gen_frame + 0x64))))));
  (*(float *)(gen_frame + 0x60)) = fVar7;
  if (!((float10)0 < (float10)fVar7)) {
    pfVar14 = &(*(float *)(gen_frame + 0x54));
  }
  fVar9 = *pfVar14;
  fVar7 = *param_2;
  (*(float *)(gen_frame + 0x60)) = (float)((float10)fVar9 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x4c)) = fVar7;
  fVar8 = param_2[1];
  fVar19 = (float10)((float)GEN_TOF(((float10)(float)(fVar15 * (float10)fVar1) + (float10)fVar4)));
  (*(float *)(gen_frame + 0x5c)) = fVar8;
  fVar1 = param_2[2];
  (*(float *)(gen_frame + 0x58)) = fVar1;
  fVar4 = *param_3;
  fVar20 = (float10)((float)GEN_TOF(((float10)fVar5 + (float10)(float)((float10)fVar2 * fVar15))));
  fVar2 = param_3[1];
  fVar5 = param_3[2];
  fVar15 = (float10)((float)GEN_TOF(((float10)fVar6 + (float10)(float)((float10)fVar3 * fVar15))));
  bVar13 = false;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 - fVar15) * fVar18 +
                 ((float10)(float)((float10)fVar8 - fVar20) * fVar16 +
                 (float10)(float)((float10)fVar7 - fVar19) * fVar17))));
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x30));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x34));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x38));
  fVar6 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)fVar5 - fVar15) +
                 (fVar17 * (float10)(float)((float10)fVar4 - fVar19) +
                 (float10)(float)((float10)fVar2 - fVar20) * fVar16))));
  (*(float *)(gen_frame + 0x64)) = fVar6;
  fVar10 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0xc0) + (float10)param_4)));
  (*(float *)(gen_frame + 0x54)) = fVar10;
  fVar11 = *param_7;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)1 - (float10)fVar11);
  if (param_5 == 0) {
    bVar13 = true;
  }
  else if ((param_5 & 2) != 0) {
    (*(float *)(gen_frame + 0x68)) = gen_bits2f((uint)gen_fl2bits(fVar3) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x20)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x30))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x24)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x34))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x28)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x38))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0x64)) = gen_bits2f((uint)gen_fl2bits(fVar6) ^ REFG(uint, 0x10920d0));
  }
  fVar15 = (float10)(float)((float10)fVar9 * (float10)REFG(double, 0x1088108));
  (*(byte *)(gen_frame + 0x6f)) = 0;
  fVar16 = (float10)(float)((float10)1 - (float10)fVar11);
  fVar17 = (float10)(*(float *)(gen_frame + 0x28));
  fVar18 = (float10)(*(float *)(gen_frame + 0x24));
  fVar19 = (float10)(*(float *)(gen_frame + 0x20));
  if (((char)param_8 == '\0') && (((float10)(*(float *)(gen_frame + 0x68)) < (float10)fVar10 || (bVar13)))) {
    (*(byte *)(gen_frame + 0x6f)) = 1;
    (*(float *)(gen_frame + 0x50)) = 0.0;
    pfVar14 = &(*(float *)(gen_frame + 0x60));
    fVar3 = (float)((float10)fVar10 - (float10)(*(float *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x60)) = fVar3;
    if (!((float10)0 < (float10)fVar3)) {
      pfVar14 = &(*(float *)(gen_frame + 0x50));
    }
    fVar3 = param_7[2];
    fVar6 = *pfVar14;
    (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar3 * (float10)fVar6);
    fVar20 = (float10)(float)((float10)fVar3 * (float10)fVar6);
    *param_2 = ((float)GEN_TOF(((float10)fVar7 +
                      (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar19) + (float10)fVar7))) - (float10)fVar7))) *
                                      fVar15))))));
    param_2[1] = ((float)GEN_TOF(((float10)fVar8 +
                        (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar18 *
                                                                                           fVar20) +
                                                                          (float10)fVar8))) -
                                                         (float10)fVar8))) * fVar15))))));
    param_2[2] = ((float)GEN_TOF(((float10)fVar1 +
                        (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 *
                                                                                           fVar17) +
                                                                          (float10)fVar1))) -
                                                         (float10)fVar1))) * fVar15))))));
    fVar1 = param_2[8];
    fVar3 = param_2[9];
    fVar6 = param_2[10];
    fVar7 = ((float)GEN_TOF(((float10)fVar6 * fVar17 + ((float10)fVar3 * fVar18 + (float10)fVar1 * fVar19))));
    (*(float *)(gen_frame + 0x58)) = fVar7;
    fVar20 = (float10)fVar7;
    (*(float *)(gen_frame + 0x20)) = (float)(fVar20 * fVar19);
    (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x20));
    (*(float *)(gen_frame + 0x24)) = (float)(fVar18 * fVar20);
    (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x24));
    (*(float *)(gen_frame + 0x28)) = (float)(fVar20 * fVar17);
    (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x28));
    fVar21 = (float10)(*(float *)(gen_frame + 0x20));
    fVar22 = (float10)(*(float *)(gen_frame + 0x24));
    fVar20 = (float10)(*(float *)(gen_frame + 0x28));
    if (fVar7 <= 0.0) {
      (*(float *)(gen_frame + 0x20)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x24)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x28)) = REFG(float, 0x1375ac8);
    }
    fVar7 = param_7[1];
    (*(float *)(gen_frame + 0x4c)) = fVar7;
    fVar23 = (float10)fVar7;
    param_2[8] = ((float)GEN_TOF((fVar23 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1
                                                                                    - fVar21) *
                                                                   fVar16))) + (float10)(*(float *)(gen_frame + 0x20))))))));
    param_2[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar3 - fVar22)
                                                          * fVar16))) + (float10)(*(float *)(gen_frame + 0x24))))) * fVar23)));
    param_2[10] = ((float)GEN_TOF((fVar23 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar6
                                                                                     - fVar20) *
                                                                    fVar16))) + (float10)(*(float *)(gen_frame + 0x28))))))));
  }
  if ((!((float10)(*(float *)(gen_frame + 0x64)) < (float10)fVar10)) && (!bVar13)) {
    return (*(byte *)(gen_frame + 0x6f));
  }
  (*(float *)(gen_frame + 0x4c)) = 0.0;
  pfVar14 = &(*(float *)(gen_frame + 0x54));
  fVar1 = (float)((float10)fVar10 - (float10)(*(float *)(gen_frame + 0x64)));
  (*(float *)(gen_frame + 0x54)) = fVar1;
  if (!((float10)0 < (float10)fVar1)) {
    pfVar14 = &(*(float *)(gen_frame + 0x4c));
  }
  fVar1 = param_7[2];
  fVar3 = *pfVar14;
  (*(float *)(gen_frame + 0x4c)) = (float)((float10)fVar1 * (float10)fVar3);
  fVar20 = (float10)(float)((float10)fVar1 * (float10)fVar3);
  fVar1 = *param_3;
  (*(float *)(gen_frame + 0x4c)) = fVar1;
  fVar21 = (float10)fVar1;
  fVar1 = param_3[1];
  (*(float *)(gen_frame + 0x54)) = fVar1;
  fVar3 = param_3[2];
  (*(float *)(gen_frame + 0x58)) = fVar3;
  *param_3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar19) + (float10)fVar4))) - fVar21))) * fVar15))) +
                    fVar21)));
  param_3[1] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar18 * 
                                                  fVar20) + (float10)fVar2))) - (float10)fVar1))) *
                                       fVar15))) + (float10)fVar1)));
  param_3[2] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)(fVar20 * 
                                                  fVar17) + (float10)fVar5))) - (float10)fVar3))) *
                                       fVar15))) + (float10)fVar3)));
  fVar1 = param_3[8];
  fVar2 = param_3[9];
  fVar3 = param_3[10];
  fVar4 = ((float)GEN_TOF(((float10)fVar3 * fVar17 + ((float10)fVar2 * fVar18 + (float10)fVar1 * fVar19))));
  (*(float *)(gen_frame + 0x54)) = fVar4;
  fVar15 = (float10)fVar4;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar15 * fVar19);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar15 * fVar18);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar17 * fVar15);
  fVar15 = (float10)(*(float *)(gen_frame + 0x0));
  fVar17 = (float10)(*(float *)(gen_frame + 0x4));
  fVar18 = (float10)(*(float *)(gen_frame + 0x8));
  if (fVar4 <= 0.0) {
    (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1375ac8);
  }
  fVar4 = param_7[1];
  (*(float *)(gen_frame + 0x4c)) = fVar4;
  fVar19 = (float10)fVar4;
  param_3[8] = ((float)GEN_TOF((fVar19 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar1 -
                                                                                  fVar15) * fVar16)))
                                                + (float10)(*(float *)(gen_frame + 0x0))))))));
  param_3[9] = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)fVar2 - fVar17) *
                                                        fVar16))) + (float10)(*(float *)(gen_frame + 0x4))))) * fVar19)));
  param_3[10] = ((float)GEN_TOF((fVar19 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar16 * (float10)(float)((
                                                  float10)fVar3 - fVar18)))) + (float10)(*(float *)(gen_frame + 0x8))))))));
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionPlane::vf0 */
uint F_00bf5150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf5150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Physics::CollisionNormalPlane::vf0 */
uint F_00bf5180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf5180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: Client::Graphics::Physics::CollisionThreePointPlane::vf0 */
uint F_00bf51b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf51b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00bf51e0 */
byte F_00bf51e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbf51e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int * param_5 = (int *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  code * pcVar1;
  byte bVar2;
  int iVar3;
  int * piVar4;
  int * piVar5;
  
  bVar2 = F_00c24640(param_1,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x50) = (undefined2)param_4;
  pcVar1 = *(gen_code32 *)(*param_1 + 0x14);
  piVar4 = param_5;
  piVar5 = param_1 + 0x20;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  param_1[0x51] = (int)gen_fl2bits(param_6);
  (*pcVar1)(param_1);
  return 1;
}

/* ref: FUN_00bf5250 */
uint F_00bf5250(unsigned int gen_a0)
{
  GEN_ENTER(0xbf5250u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_00c246b0(in_ecx,1);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e154));
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0x20;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = &REFG(float, 0x1302d00);
  puVar3 = in_ecx + 0x30;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)(in_ecx + 0x50) = 0xffff;
  in_ecx[0x51] = 0;
  return (uint)in_ecx;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf5 */
uint F_00bf52c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf52c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  undefined * this_00;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  this_00 = *(undefined * PTR32 *)(this + 0x28);
  uVar1 = *(ushort *)(this + 0x140);
  pCVar5 = this + 0x80;
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = *(undefined4 *)pCVar5;
    pCVar5 = pCVar5 + 4;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)F_00623320(this_00,(uint)uVar1);
  puVar3 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x80)));
  puVar3 = ((undefined4 *)(gen_frame + 0x40));
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  F_004ef9d0(((undefined4 *)(gen_frame + 0xc0)),(uint)((undefined4 *)(gen_frame + 0x40)));
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  pCVar5 = this + 0x30;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0xc0)));
  puVar2 = puVar3;
  pCVar5 = this + 0x100;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  puVar2 = ((undefined4 *)(gen_frame + 0xc0));
  pCVar5 = this + 0xc0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined4 *)pCVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    pCVar5 = pCVar5 + 4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)puVar3;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf6 */
uint F_00bf53c0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf53c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  undefined4 * puVar1;
  int iVar2;
  undefined * pCVar3;
  undefined4 * puVar4;
  undefined * pCVar5;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  pCVar3 = this + 0x30;
  pCVar5 = this + 0xc0;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar5 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    pCVar5 = pCVar5 + 4;
  }
  pCVar3 = this + 0x80;
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    puVar4 = puVar4 + 1;
  }
  F_0063a290(*(undefined * PTR32 *)(this + 0x28),((undefined1 *)(gen_frame + 0x40)),(uint)*(ushort *)(this + 0x140));
  F_004ef9d0(((undefined4 *)(gen_frame + 0x80)),(uint)((undefined1 *)(gen_frame + 0x40)));
  puVar4 = ((undefined4 *)(gen_frame + 0x80));
  pCVar3 = this + 0x30;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar3 = pCVar3 + 4;
  }
  puVar1 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),((undefined4 *)(gen_frame + 0x80)));
  puVar4 = puVar1;
  pCVar3 = this + 0x100;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pCVar3 = *puVar4;
    puVar4 = puVar4 + 1;
    pCVar3 = pCVar3 + 4;
  }
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return (uint)puVar1;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf9 */
uint F_00bf5490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf5490u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined4 uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  (*(undefined4 *)(gen_frame + 0x0)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x4)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x8)) = param_2[2];
  uVar1 = *(undefined4 *)(this + 0x110);
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(this + 0x100);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(this + 0x104);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(this + 0x108);
  (*(undefined4 *)(gen_frame + 0x20)) = uVar1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(this + 0x114);
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)(this + 0x118);
  (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)(this + 0x130);
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)(this + 0x120);
  (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)(this + 0x134);
  (*(undefined4 *)(gen_frame + 0x34)) = *(undefined4 *)(this + 0x124);
  (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)(this + 0x138);
  (*(undefined4 *)(gen_frame + 0x38)) = *(undefined4 *)(this + 0x128);
  (*(undefined4 *)(gen_frame + 0x4c)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(undefined4 *)(gen_frame + 0x0)),(uint)&(*(undefined4 *)(gen_frame + 0x10)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x0));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x8));
  F_004eebf0(param_1,(uint)(this + 0x30));
  uVar2 = F_0046f390(param_1);
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar2;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf7 */
byte F_00bf55f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xbf55f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  float * param_4 = (float *)(uintptr_t)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0xe0];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float * pfVar6;
  byte bVar7;
  uint uVar8;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  
  (*(uint *)(gen_frame + 0xcc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xd0);
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  (*(float *)(gen_frame + 0x20)) = *param_1;
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(this + 0x100);
  (*(float *)(gen_frame + 0x24)) = fVar1;
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(this + 0x104);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x108);
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(this + 0x110);
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(this + 0x114);
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(this + 0x118);
  (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(this + 0x130);
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(this + 0x120);
  (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(this + 0x134);
  (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(this + 0x124);
  (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(this + 0x138);
  (*(float * PTR32 *)(gen_frame + 0x3c)) = param_4;
  (*(float *)(gen_frame + 0x28)) = fVar2;
  (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(this + 0x128);
  (*(float *)(gen_frame + 0xbc)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(float *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x80)));
  fVar10 = (float10)(*(float *)(gen_frame + 0x20));
  fVar11 = (float10)(*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x20));
  fVar12 = (float10)(*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x24));
  bVar9 = false;
  uVar8 = param_2 >> 2;
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x28));
  fVar1 = *(float *)(this + 0x144);
  (*(float *)(gen_frame + 0x58)) = fVar1;
  (*(byte *)(gen_frame + 0x7f)) = 0;
  fVar2 = ((float)GEN_TOF(((fVar11 * fVar11 + fVar10 * fVar10) + fVar12 * fVar12)));
  (*(float *)(gen_frame + 0x78)) = fVar2;
  if (uVar8 != 0) {
    if ((uVar8 & 1) == 0) {
      if ((uVar8 & 2) == 0) {
        (*(float *)(gen_frame + 0x5c)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x1087f04);
    }
    if ((param_2 >> 4 & 1) == 0) {
      if ((param_2 >> 4 & 2) == 0) {
        (*(float *)(gen_frame + 0x8)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0x8)) = REFG(float, 0x1087f04);
    }
    if ((param_2 >> 6 & 1) == 0) {
      if ((param_2 >> 6 & 2) == 0) {
        (*(float *)(gen_frame + 0xc)) = 0.0;
      }
      else {
        (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1090708);
      }
    }
    else {
      (*(float *)(gen_frame + 0xc)) = REFG(float, 0x1087f04);
    }
    fVar13 = (float10)(*(float *)(gen_frame + 0x8));
    fVar14 = (float10)(*(float *)(gen_frame + 0xc));
    fVar15 = (float10)(*(float *)(gen_frame + 0x5c));
    fVar3 = ((float)GEN_TOF(((fVar13 * fVar11 + fVar14 * fVar10) + fVar15 * fVar12)));
    (*(float *)(gen_frame + 0x5c)) = fVar3;
    fVar10 = (float10)fVar3;
    if (fVar10 < (float10)0) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      bVar9 = true;
      fVar3 = ((float)GEN_TOF((fVar15 * fVar15 + (fVar13 * fVar13 + fVar14 * fVar14))));
      (*(float *)(gen_frame + 0x5c)) = fVar3;
      fVar3 = (float)(fVar10 / (float10)fVar3);
      (*(float *)(gen_frame + 0x5c)) = fVar3;
      fVar10 = (float10)fVar3;
      (*(float *)(gen_frame + 0x40)) = (float)(fVar10 * fVar14);
      (*(float *)(gen_frame + 0x44)) = (float)(fVar10 * fVar13);
      (*(float *)(gen_frame + 0x48)) = (float)(fVar10 * fVar15);
      fVar11 = (float10)(float)(fVar10 * fVar14);
      fVar3 = (float)((float10)(*(float *)(gen_frame + 0x20)) - fVar11);
      (*(float *)(gen_frame + 0x60)) = fVar3;
      fVar12 = (float10)(float)(fVar10 * fVar13);
      fVar4 = (float)((float10)(*(float *)(gen_frame + 0x24)) - fVar12);
      (*(float *)(gen_frame + 0x64)) = fVar4;
      fVar10 = (float10)(float)(fVar10 * fVar15);
      fVar5 = (float)((float10)(*(float *)(gen_frame + 0x28)) - fVar10);
      (*(float *)(gen_frame + 0x68)) = fVar5;
      fVar3 = (float)((float10)fVar3 - fVar11);
      (*(float *)(gen_frame + 0x40)) = fVar3;
      fVar4 = (float)((float10)fVar4 - fVar12);
      (*(float *)(gen_frame + 0x44)) = fVar4;
      fVar5 = (float)((float10)fVar5 - fVar10);
      (*(float *)(gen_frame + 0x48)) = fVar5;
      (*(float *)(gen_frame + 0x10)) = fVar3;
      (*(float *)(gen_frame + 0x14)) = fVar4;
      (*(float *)(gen_frame + 0x18)) = fVar5;
    }
  }
  fVar10 = (float10)fVar2;
  if ((param_2 & 1) == 0) {
    if (((param_2 & 2) != 0) &&
       ((*(float *)(gen_frame + 0x58)) = (float)((float10)fVar1 - (float10)param_1[0x14]),
       fVar11 = (float10)(float)((float10)fVar1 - (float10)param_1[0x14]),
       !(fVar11 * fVar11 < fVar10))) goto LAB_00bf5976;
    (*(byte *)(gen_frame + 0x7f)) = 1;
  }
  else {
    (*(float *)(gen_frame + 0x58)) = (float)((float10)param_1[0x14] + (float10)fVar1);
    fVar11 = (float10)(float)((float10)param_1[0x14] + (float10)fVar1);
    if (fVar10 < fVar11 * fVar11) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
    }
    else {
LAB_00bf5976: ;
      if (!bVar9) {
        bVar7 = 0;
        goto LAB_00bf5d15;
      }
    }
  }
  if (fVar2 <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x58));
    (*(float *)(gen_frame + 0x28)) = 0.0;
  }
  else {
    fVar1 = ((float)GEN_TOF(SQRT(fVar10)));
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar10 = (float10)fVar1;
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x10)) / fVar10);
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x14)) / fVar10);
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x18)) / fVar10);
    fVar11 = (float10)(*(float *)(gen_frame + 0x58));
    fVar1 = ((float)GEN_TOF((fVar11 * (float10)(float)((float10)(*(float *)(gen_frame + 0x10)) / fVar10))));
    (*(float *)(gen_frame + 0x40)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) / fVar10) * fVar11)));
    (*(float *)(gen_frame + 0x44)) = fVar2;
    fVar3 = ((float)GEN_TOF((fVar11 * (float10)(float)((float10)(*(float *)(gen_frame + 0x18)) / fVar10))));
    (*(float *)(gen_frame + 0x48)) = fVar3;
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
  }
  (*(undefined4 *)(gen_frame + 0x80)) = *(undefined4 *)(this + 0x30);
  (*(undefined4 *)(gen_frame + 0x84)) = *(undefined4 *)(this + 0x34);
  (*(undefined4 *)(gen_frame + 0x88)) = *(undefined4 *)(this + 0x38);
  (*(undefined4 *)(gen_frame + 0x90)) = *(undefined4 *)(this + 0x40);
  (*(undefined4 *)(gen_frame + 0x8c)) = 0;
  (*(undefined4 *)(gen_frame + 0x94)) = *(undefined4 *)(this + 0x44);
  (*(undefined4 *)(gen_frame + 0x9c)) = 0;
  (*(undefined4 *)(gen_frame + 0xac)) = 0;
  (*(undefined4 *)(gen_frame + 0x98)) = *(undefined4 *)(this + 0x48);
  (*(undefined4 *)(gen_frame + 0xb0)) = *(undefined4 *)(this + 0x60);
  (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)(this + 0x50);
  (*(undefined4 *)(gen_frame + 0xb4)) = *(undefined4 *)(this + 100);
  (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)(this + 0x54);
  (*(undefined4 *)(gen_frame + 0xb8)) = *(undefined4 *)(this + 0x68);
  (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)(this + 0x58);
  (*(float *)(gen_frame + 0xbc)) = REFG(float, 0x1087f04);
  F_004eeb30(&(*(float *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x80)));
  (*(float *)(gen_frame + 0x78)) = *param_1;
  fVar10 = (float10)*param_1;
  fVar1 = (float)((float10)(*(float *)(gen_frame + 0x20)) - fVar10);
  (*(float *)(gen_frame + 0x60)) = fVar1;
  (*(float *)(gen_frame + 0x78)) = param_1[1];
  fVar11 = (float10)param_1[1];
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x24)) - fVar11);
  (*(float *)(gen_frame + 0x64)) = fVar2;
  (*(float *)(gen_frame + 0x78)) = param_1[2];
  fVar12 = (float10)param_1[2];
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0x28)) - fVar12);
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float *)(gen_frame + 0x78)) = (*(float * PTR32 *)(gen_frame + 0x3c))[2];
  fVar13 = (float10)(*(float * PTR32 *)(gen_frame + 0x3c))[2];
  fVar1 = (float)(fVar13 * (float10)fVar1);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar13);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = (float)(fVar13 * (float10)fVar3);
  (*(float *)(gen_frame + 0x48)) = fVar3;
  *param_1 = (float)((float10)fVar1 + fVar10);
  param_1[1] = (float)(fVar11 + (float10)fVar2);
  param_1[2] = (float)(fVar12 + (float10)fVar3);
  F_004eebf0(&(*(float *)(gen_frame + 0x10)),(uint)(this + 0x30));
  pfVar6 = (*(float * PTR32 *)(gen_frame + 0x3c));
  (*(float *)(gen_frame + 0x60)) = (float)((float10)*param_1 - (float10)param_1[4]);
  (*(float *)(gen_frame + 0x64)) = (float)((float10)param_1[1] - (float10)param_1[5]);
  (*(float *)(gen_frame + 0x68)) = (float)((float10)param_1[2] - (float10)param_1[6]);
  fVar10 = (float10)(float)((float10)*param_1 - (float10)param_1[4]);
  fVar11 = (float10)(float)((float10)param_1[1] - (float10)param_1[5]);
  fVar12 = (float10)(float)((float10)param_1[2] - (float10)param_1[6]);
  fVar1 = ((float)GEN_TOF((fVar12 * (float10)(*(float *)(gen_frame + 0x18)) +
                 ((float10)(*(float *)(gen_frame + 0x10)) * fVar10 + (float10)(*(float *)(gen_frame + 0x14)) * fVar11))));
  (*(float *)(gen_frame + 0x78)) = fVar1;
  fVar13 = (float10)fVar1;
  fVar2 = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar3 = (float)(fVar13 * (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar4 = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar13);
  (*(float *)(gen_frame + 0x68)) = fVar4;
  (*(float *)(gen_frame + 0x10)) = fVar2;
  (*(float *)(gen_frame + 0x14)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar4;
  fVar2 = (float)(fVar10 - (float10)fVar2);
  (*(float *)(gen_frame + 0x60)) = fVar2;
  fVar3 = (float)(fVar11 - (float10)fVar3);
  (*(float *)(gen_frame + 0x64)) = fVar3;
  fVar4 = (float)(fVar12 - (float10)fVar4);
  (*(float *)(gen_frame + 0x68)) = fVar4;
  fVar5 = *(*(float * PTR32 *)(gen_frame + 0x3c));
  (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar5))));
  fVar10 = (float10)(float)((float10)1 - (float10)fVar5);
  fVar2 = (float)(fVar10 * (float10)fVar2);
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = (float)((float10)fVar3 * fVar10);
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar4 = (float)(fVar10 * (float10)fVar4);
  (*(float *)(gen_frame + 0x48)) = fVar4;
  if ((param_2 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x10)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x14)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x18)) = REFG(float, 0x1375ac8);
  }
  fVar1 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x10)));
  (*(float *)(gen_frame + 0x60)) = fVar1;
  fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x14)));
  (*(float *)(gen_frame + 0x64)) = fVar2;
  fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x18)));
  (*(float *)(gen_frame + 0x68)) = fVar3;
  (*(float * PTR32 *)(gen_frame + 0x3c)) = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar6[1])));
  fVar10 = (float10)pfVar6[1];
  fVar1 = (float)(fVar10 * (float10)fVar1);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar10);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = (float)(fVar10 * (float10)fVar3);
  (*(float *)(gen_frame + 0x48)) = fVar3;
  param_1[8] = fVar1;
  param_1[9] = fVar2;
  param_1[10] = fVar3;
  bVar7 = (*(byte *)(gen_frame + 0x7f));
LAB_00bf5d15: ;
  F_00c47745((*(uint *)(gen_frame + 0xcc)) ^ (uint)(uint)(gen_frame + 0xd0));
  return bVar7;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf8 */
uint F_00bf5d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xbf5d30u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0x110];
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
  float * pfVar13;
  float * pfVar14;
  uint uVar15;
  float * PTR32 * ppfVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float * pfVar16;
  
  (*(uint *)(gen_frame + 0xfc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x100);
  (*(float * PTR32 *)(gen_frame + 0x5c)) = param_1;
  (*(float * PTR32 *)(gen_frame + 0x54)) = param_2;
  (*(float * PTR32 *)(gen_frame + 0x8c)) = param_7;
  pfVar16 = param_2;
  if (param_5 == 1) {
    fVar1 = param_2[1];
    fVar2 = *param_3;
    fVar3 = param_2[2];
    pfVar16 = param_1 + 0x40;
    (*(float *)(gen_frame + 0x30)) = *param_2;
    (*(float *)(gen_frame + 0xb0)) = *pfVar16;
    (*(float *)(gen_frame + 0x34)) = fVar1;
    (*(float *)(gen_frame + 0xb4)) = param_1[0x41];
    (*(float *)(gen_frame + 0xb8)) = param_1[0x42];
    (*(float *)(gen_frame + 0xc0)) = param_1[0x44];
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(float *)(gen_frame + 0xc4)) = param_1[0x45];
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(float *)(gen_frame + 0xc8)) = param_1[0x46];
    fVar1 = param_1[0x48];
    (*(float *)(gen_frame + 0xe0)) = param_1[0x4c];
    fVar4 = param_1[0x4d];
    (*(float *)(gen_frame + 0x90)) = fVar2;
    (*(float *)(gen_frame + 0xd0)) = fVar1;
    (*(float *)(gen_frame + 0xe4)) = fVar4;
    (*(float *)(gen_frame + 0x94)) = param_3[1];
    (*(float *)(gen_frame + 0xd4)) = param_1[0x49];
    (*(float *)(gen_frame + 0xe8)) = param_1[0x4e];
    (*(float *)(gen_frame + 0x98)) = param_3[2];
    (*(float *)(gen_frame + 0x38)) = fVar3;
    (*(float *)(gen_frame + 0xd8)) = param_1[0x4a];
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1087f04);
    F_004eeb30(&(*(float *)(gen_frame + 0x30)),(uint)&(*(float *)(gen_frame + 0xb0)));
    fVar1 = param_1[0x44];
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x90));
    (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x94));
    (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x98));
    (*(float *)(gen_frame + 0xb0)) = *pfVar16;
    (*(float *)(gen_frame + 0xb4)) = param_1[0x41];
    (*(float *)(gen_frame + 0xc0)) = fVar1;
    (*(float *)(gen_frame + 0xb8)) = param_1[0x42];
    (*(float *)(gen_frame + 0xc4)) = param_1[0x45];
    (*(undefined4 *)(gen_frame + 0xbc)) = 0;
    (*(float *)(gen_frame + 0xc8)) = param_1[0x46];
    (*(undefined4 *)(gen_frame + 0xcc)) = 0;
    (*(undefined4 *)(gen_frame + 0xdc)) = 0;
    (*(float *)(gen_frame + 0xd0)) = param_1[0x48];
    (*(float *)(gen_frame + 0xe0)) = param_1[0x4c];
    (*(float *)(gen_frame + 0xd4)) = param_1[0x49];
    (*(float *)(gen_frame + 0xe4)) = param_1[0x4d];
    (*(float *)(gen_frame + 0xd8)) = param_1[0x4a];
    (*(float *)(gen_frame + 0xe8)) = param_1[0x4e];
    (*(float *)(gen_frame + 0xec)) = REFG(float, 0x1087f04);
    F_004eeb30(&(*(float *)(gen_frame + 0x10)),(uint)&(*(float *)(gen_frame + 0xb0)));
    (*(float *)(gen_frame + 0x40)) = (*(float *)(gen_frame + 0x30));
    (*(float *)(gen_frame + 0x44)) = (*(float *)(gen_frame + 0x34));
    (*(float *)(gen_frame + 0x48)) = (*(float *)(gen_frame + 0x38));
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    F_00c262e0(&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x10)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x2c)));
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1087f04);
    if ((char)param_8 != '\0') {
      (*(float *)(gen_frame + 0x58)) = REFG(float, 0x10ac168);
      pfVar14 = &(*(float *)(gen_frame + 0x2c));
      if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x2c)))) {
        pfVar14 = &(*(float *)(gen_frame + 0x58));
      }
      (*(float *)(gen_frame + 0x58)) = (float)((float10)1 / (float10)*pfVar14);
    }
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x40));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x44));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x48));
    if ((char)param_8 == '\0') {
      (*(float *)(gen_frame + 0x70)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x10];
      (*(float *)(gen_frame + 0x74)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x11];
      (*(float *)(gen_frame + 0x78)) = (*(float * PTR32 *)(gen_frame + 0x54))[0x12];
      F_004be0e0(&(*(float *)(gen_frame + 0xb0)),pfVar16);
      F_004eeb30(&(*(float *)(gen_frame + 0x70)),(uint)&(*(float *)(gen_frame + 0xb0)));
      (*(float *)(gen_frame + 0x0)) = param_3[0x10];
      (*(float *)(gen_frame + 0x4)) = param_3[0x11];
      (*(float *)(gen_frame + 0x8)) = param_3[0x12];
      F_004be0e0(&(*(float *)(gen_frame + 0xb0)),pfVar16);
      F_004eeb30(&(*(float *)(gen_frame + 0x0)),(uint)&(*(float *)(gen_frame + 0xb0)));
      (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x70));
      (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x74));
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x78));
      (*(float * PTR32 *)(gen_frame + 0x88)) = (float *)0x0;
      F_00c262e0(&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x0)),&REFG(float, 0x1375ac0),&(*(float *)(gen_frame + 0x90)),&(*(float * PTR32 *)(gen_frame + 0x88)));
      fVar3 = (*(float *)(gen_frame + 0x98));
      fVar2 = (*(float *)(gen_frame + 0x94));
      fVar1 = (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x60));
      (*(float *)(gen_frame + 0x70)) = fVar1;
      (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x64));
      (*(float *)(gen_frame + 0x74)) = fVar2;
      (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x68));
      (*(float *)(gen_frame + 0x78)) = fVar3;
      F_0046f390(&(*(float *)(gen_frame + 0x90)));
      F_0046f390(&(*(float *)(gen_frame + 0x70)));
      (*(float * PTR32 *)(gen_frame + 0xac)) = (float *)0x0;
      ppfVar17 = &(*(float * PTR32 *)(gen_frame + 0xac));
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x98)) * (float10)(*(float *)(gen_frame + 0x78)) +
                                ((float10)(*(float *)(gen_frame + 0x90)) * (float10)(*(float *)(gen_frame + 0x70)) +
                                (float10)(*(float *)(gen_frame + 0x94)) * (float10)(*(float *)(gen_frame + 0x74)))))))));
      (*(float * PTR32 *)(gen_frame + 0x88)) = pfVar16;
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(-(float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))))))));
      (*(float * PTR32 *)(gen_frame + 0x88)) = pfVar16;
      if (!((float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) < (float10)0)) {
        ppfVar17 = &(*(float * PTR32 *)(gen_frame + 0x88));
      }
      pfVar16 = *ppfVar17;
      pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)(*(*(float * PTR32 *)(gen_frame + 0x54)))));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar14;
      (*(float * PTR32 *)(gen_frame + 0x88)) = pfVar16;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
      fVar1 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x10] - fVar18);
      (*(float *)(gen_frame + 0x90)) = fVar1;
      pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x54))[1])));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar14;
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
      fVar2 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x11] - fVar19);
      (*(float *)(gen_frame + 0x94)) = fVar2;
      pfVar14 = ((float *)(uintptr_t)gen_fl2bits((float)((*(float * PTR32 *)(gen_frame + 0x54))[2])));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar14;
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar14)));
      fVar3 = (float)((float10)(*(float * PTR32 *)(gen_frame + 0x54))[0x12] - fVar20);
      (*(float *)(gen_frame + 0x98)) = fVar3;
      fVar21 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar1 = (float)(fVar21 * (float10)fVar1);
      (*(float *)(gen_frame + 0x70)) = fVar1;
      fVar2 = (float)((float10)fVar2 * fVar21);
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar3 = (float)((float10)fVar3 * fVar21);
      (*(float *)(gen_frame + 0x78)) = fVar3;
      *(*(float * PTR32 *)(gen_frame + 0x54)) = (float)((float10)fVar1 + fVar18);
      (*(float * PTR32 *)(gen_frame + 0x54))[1] = (float)((float10)fVar2 + fVar19);
      (*(float * PTR32 *)(gen_frame + 0x54))[2] = (float)(fVar20 + (float10)fVar3);
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(*param_3)));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar16;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar1 = (float)((float10)param_3[0x10] - fVar18);
      (*(float *)(gen_frame + 0x90)) = fVar1;
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(param_3[1])));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar16;
      fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar2 = (float)((float10)param_3[0x11] - fVar19);
      (*(float *)(gen_frame + 0x94)) = fVar2;
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(param_3[2])));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar16;
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar3 = (float)((float10)param_3[0x12] - fVar20);
      (*(float *)(gen_frame + 0x98)) = fVar3;
      fVar1 = (float)((float10)fVar1 * fVar21);
      (*(float *)(gen_frame + 0x70)) = fVar1;
      fVar2 = (float)((float10)fVar2 * fVar21);
      (*(float *)(gen_frame + 0x74)) = fVar2;
      fVar3 = (float)((float10)fVar3 * fVar21);
      (*(float *)(gen_frame + 0x78)) = fVar3;
      *param_3 = (float)((float10)fVar1 + fVar18);
      param_3[1] = (float)(fVar19 + (float10)fVar2);
      param_3[2] = (float)(fVar20 + (float10)fVar3);
    }
    pfVar14 = (*(float * PTR32 *)(gen_frame + 0x54));
    pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x68)) * (float10)(*(float *)(gen_frame + 0x68)) +
                              ((float10)(*(float *)(gen_frame + 0x60)) * (float10)(*(float *)(gen_frame + 0x60)) +
                              (float10)(*(float *)(gen_frame + 0x64)) * (float10)(*(float *)(gen_frame + 0x64)))))))));
    (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar16;
    fVar1 = (*(float * PTR32 *)(gen_frame + 0x5c))[0x51];
    (*(float * PTR32 *)(gen_frame + 0x88)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)fVar1 + (float10)param_4))));
    fVar18 = (float10)(float)((float10)fVar1 + (float10)param_4);
    fVar19 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
    fVar18 = fVar18 * fVar18;
    pfVar16 = (*(float * PTR32 *)(gen_frame + 0x5c));
    if ((!GEN_ISNAN(fVar18) && !GEN_ISNAN(fVar19)) && !(fVar18 <= fVar19)) {
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(SQRT(fVar19))))));
      (*(float * PTR32 *)(gen_frame + 0xac)) = pfVar16;
      (*(float * PTR32 *)(gen_frame + 0x54)) = pfVar16;
      (*(float * PTR32 *)(gen_frame + 0xac)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)))))));
      fVar18 = (float10)(float)((float10)1 / (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))));
      (*(float *)(gen_frame + 0x60)) = (float)(fVar18 * (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x64)) * fVar18);
      (*(float *)(gen_frame + 0x68)) = (float)(fVar18 * (float10)(*(float *)(gen_frame + 0x68)));
      F_004eebf0(&(*(float *)(gen_frame + 0x60)),(uint)((*(float * PTR32 *)(gen_frame + 0x5c)) + 0xc));
      pfVar13 = (*(float * PTR32 *)(gen_frame + 0x8c));
      fVar1 = *(*(float * PTR32 *)(gen_frame + 0x8c));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)1 - (float10)fVar1))));
      fVar2 = param_3[8];
      (*(float *)(gen_frame + 0x90)) = fVar2;
      (*(float *)(gen_frame + 0x94)) = param_3[9];
      fVar3 = param_3[10];
      (*(float *)(gen_frame + 0x98)) = fVar3;
      fVar18 = (float10)param_3[9];
      fVar19 = (float10)(*(float *)(gen_frame + 0x64));
      fVar20 = (float10)fVar2;
      fVar21 = (float10)(*(float *)(gen_frame + 0x60));
      fVar22 = (float10)(*(float *)(gen_frame + 0x68));
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF(((fVar19 * fVar18 + fVar21 * fVar20) + fVar22 * (float10)fVar3))))));
      (*(float * PTR32 *)(gen_frame + 0x5c)) = pfVar16;
      fVar23 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar2 = (float)(fVar23 * fVar21);
      (*(float *)(gen_frame + 0x40)) = fVar2;
      fVar4 = (float)(fVar19 * fVar23);
      (*(float *)(gen_frame + 0x44)) = fVar4;
      fVar5 = (float)(fVar23 * fVar22);
      (*(float *)(gen_frame + 0x48)) = fVar5;
      (*(float *)(gen_frame + 0x60)) = fVar2;
      (*(float *)(gen_frame + 0x64)) = fVar4;
      (*(float *)(gen_frame + 0x68)) = fVar5;
      fVar2 = (float)(fVar20 - (float10)fVar2);
      (*(float *)(gen_frame + 0x70)) = fVar2;
      fVar4 = (float)(fVar18 - (float10)fVar4);
      (*(float *)(gen_frame + 0x74)) = fVar4;
      (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar3 - (float10)fVar5);
      fVar18 = (float10)(float)((float10)1 - (float10)fVar1);
      fVar1 = (float)(fVar18 * (float10)fVar2);
      (*(float *)(gen_frame + 0x90)) = fVar1;
      fVar2 = (float)((float10)fVar4 * fVar18);
      (*(float *)(gen_frame + 0x94)) = fVar2;
      fVar3 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 - (float10)fVar5) * fVar18)));
      (*(float *)(gen_frame + 0x98)) = fVar3;
      if (((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16))) <= 0.0) {
        (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
        (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1375ac4);
        (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1375ac8);
      }
      (*(float * PTR32 *)(gen_frame + 0x8c)) = (float *)0x0;
      ppfVar17 = &(*(float * PTR32 *)(gen_frame + 0x5c));
      fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x60)));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x64)));
      (*(float *)(gen_frame + 0x14)) = fVar2;
      fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x68)));
      (*(float *)(gen_frame + 0x18)) = fVar3;
      (*(float * PTR32 *)(gen_frame + 0x5c)) = ((float *)(uintptr_t)gen_fl2bits((float)((float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x88))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54)))))))));
      if (!((float10)0 < (float10)(float)((float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x88))))) - (float10)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0x54)))))))) {
        ppfVar17 = &(*(float * PTR32 *)(gen_frame + 0x8c));
      }
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(((float)GEN_TOF((((float10)pfVar13[2] * (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*ppfVar17)))) *
                                (float10)(*(float *)(gen_frame + 0x58))))))));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar16;
      fVar20 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      fVar4 = (float)(fVar20 * fVar21);
      (*(float *)(gen_frame + 0x30)) = fVar4;
      fVar5 = (float)(fVar19 * fVar20);
      (*(float *)(gen_frame + 0x34)) = fVar5;
      fVar6 = (float)(fVar20 * fVar22);
      (*(float *)(gen_frame + 0x38)) = fVar6;
      if ((char)param_8 == '\0') {
        fVar7 = pfVar14[8];
        (*(float *)(gen_frame + 0x70)) = fVar7;
        fVar8 = pfVar14[9];
        (*(float *)(gen_frame + 0x74)) = fVar8;
        fVar9 = pfVar14[10];
        (*(float *)(gen_frame + 0x78)) = fVar9;
        fVar20 = (float10)fVar7;
        fVar7 = ((float)GEN_TOF(((float10)fVar9 * fVar22 + ((float10)fVar8 * fVar19 + fVar20 * fVar21))));
        (*(float *)(gen_frame + 0x58)) = fVar7;
        fVar23 = (float10)fVar7;
        fVar10 = (float)(fVar23 * fVar21);
        (*(float *)(gen_frame + 0x90)) = fVar10;
        fVar11 = (float)(fVar23 * fVar19);
        (*(float *)(gen_frame + 0x94)) = fVar11;
        fVar12 = (float)(fVar22 * fVar23);
        (*(float *)(gen_frame + 0x98)) = fVar12;
        (*(float *)(gen_frame + 0x60)) = fVar10;
        (*(float *)(gen_frame + 0x64)) = fVar11;
        (*(float *)(gen_frame + 0x68)) = fVar12;
        fVar10 = (float)(fVar20 - (float10)fVar10);
        (*(float *)(gen_frame + 0x90)) = fVar10;
        (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar8 - (float10)fVar11);
        (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar9 - (float10)fVar12);
        fVar10 = (float)((float10)fVar10 * fVar18);
        (*(float *)(gen_frame + 0x40)) = fVar10;
        fVar8 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar11) * fVar18)));
        (*(float *)(gen_frame + 0x44)) = fVar8;
        fVar9 = ((float)GEN_TOF((fVar18 * (float10)(float)((float10)fVar9 - (float10)fVar12))));
        (*(float *)(gen_frame + 0x48)) = fVar9;
        if (fVar7 <= 0.0) {
          (*(float *)(gen_frame + 0x60)) = REFG(float, 0x1375ac0);
          (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1375ac4);
          (*(float *)(gen_frame + 0x68)) = REFG(float, 0x1375ac8);
        }
        fVar7 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0x60)));
        (*(float *)(gen_frame + 0x90)) = fVar7;
        fVar8 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x64)));
        (*(float *)(gen_frame + 0x94)) = fVar8;
        fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0x68)));
        (*(float *)(gen_frame + 0x98)) = fVar9;
        *pfVar14 = (float)((float10)fVar4 + (float10)*pfVar14);
        pfVar14[1] = (float)((float10)pfVar14[1] + (float10)fVar5);
        pfVar14[2] = (float)((float10)fVar6 + (float10)pfVar14[2]);
        pfVar14[8] = fVar7;
        pfVar14[9] = fVar8;
        pfVar14[10] = fVar9;
        pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar13[1])));
        (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar16;
        fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
        pfVar14[8] = (float)(fVar18 * (float10)pfVar14[8]);
        pfVar14[9] = (float)((float10)pfVar14[9] * fVar18);
        pfVar14[10] = (float)(fVar18 * (float10)pfVar14[10]);
      }
      uVar15 = CONCAT31((int3)((uint)((int)(uintptr_t)ppfVar17) >> 8),1);
      *param_3 = (float)((float10)*param_3 + (float10)fVar4);
      param_3[1] = (float)((float10)param_3[1] + (float10)fVar5);
      param_3[2] = (float)((float10)fVar6 + (float10)param_3[2]);
      param_3[8] = fVar1;
      param_3[9] = fVar2;
      param_3[10] = fVar3;
      pfVar16 = ((float *)(uintptr_t)gen_fl2bits((float)(pfVar13[1])));
      (*(float * PTR32 *)(gen_frame + 0x8c)) = pfVar16;
      fVar18 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(pfVar16)));
      param_3[8] = (float)(fVar18 * (float10)param_3[8]);
      param_3[9] = (float)((float10)param_3[9] * fVar18);
      param_3[10] = (float)(fVar18 * (float10)param_3[10]);
      goto LAB_00bf66f0;
    }
  }
  uVar15 = (uint)pfVar16 & 0xffffff00;
LAB_00bf66f0: ;
  F_00c47745((*(uint *)(gen_frame + 0xfc)) ^ (uint)(uint)(gen_frame + 0x100));
  return uVar15;
}

/* ref: Client::Graphics::Physics::CollisionEllipsoid::vf0 */
uint F_00bf6710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf6710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00bf6750 */
uint F_00bf6750(unsigned int gen_a0)
{
  GEN_ENTER(0xbf6750u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  F_00c246b0(in_ecx,0);
  *in_ecx = (*(undefined * PTR32 (*)[10])REFP(0x110e180));
  in_ecx[0x20] = GEN_FLT_TO(in_ecx[0x20], REFG(float, 0x1375ac0));
  in_ecx[0x21] = GEN_FLT_TO(in_ecx[0x21], REFG(float, 0x1375ac4));
  in_ecx[0x22] = GEN_FLT_TO(in_ecx[0x22], REFG(float, 0x1375ac8));
  in_ecx[0x24] = GEN_FLT_TO(in_ecx[0x24], REFG(float, 0x1375ac0));
  in_ecx[0x25] = GEN_FLT_TO(in_ecx[0x25], REFG(float, 0x1375ac4));
  in_ecx[0x26] = GEN_FLT_TO(in_ecx[0x26], REFG(float, 0x1375ac8));
  in_ecx[0x28] = GEN_FLT_TO(in_ecx[0x28], REFG(float, 0x1375ac0));
  in_ecx[0x29] = GEN_FLT_TO(in_ecx[0x29], REFG(float, 0x1375ac4));
  in_ecx[0x2a] = GEN_FLT_TO(in_ecx[0x2a], REFG(float, 0x1375ac8));
  in_ecx[0x2c] = GEN_FLT_TO(in_ecx[0x2c], REFG(float, 0x1375ac0));
  in_ecx[0x2d] = GEN_FLT_TO(in_ecx[0x2d], REFG(float, 0x1375ac4));
  in_ecx[0x2e] = GEN_FLT_TO(in_ecx[0x2e], REFG(float, 0x1375ac8));
  in_ecx[0x30] = GEN_FLT_TO(in_ecx[0x30], REFG(float, 0x1375ac0));
  in_ecx[0x31] = GEN_FLT_TO(in_ecx[0x31], REFG(float, 0x1375ac4));
  in_ecx[0x32] = GEN_FLT_TO(in_ecx[0x32], REFG(float, 0x1375ac8));
  in_ecx[0x34] = GEN_FLT_TO(in_ecx[0x34], REFG(float, 0x1375ac0));
  in_ecx[0x35] = GEN_FLT_TO(in_ecx[0x35], REFG(float, 0x1375ac4));
  in_ecx[0x36] = GEN_FLT_TO(in_ecx[0x36], REFG(float, 0x1375ac8));
  in_ecx[0x40] = 0xffffffff;
  in_ecx[0x41] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00bf68b0 */
byte F_00bf68b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7)
{
  GEN_ENTER(0xbf68b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  int * param_6 = (int *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  code * pcVar1;
  byte bVar2;
  
  bVar2 = F_00c24640(param_1,param_2,param_3);
  if (bVar2 == 0) {
    return 0;
  }
  *(undefined2 *)((int)param_1 + 0x102) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x40) = (undefined2)param_4;
  param_1[0x20] = *param_6;
  param_1[0x21] = param_6[1];
  param_1[0x22] = param_6[2];
  param_1[0x24] = *param_7;
  param_1[0x25] = param_7[1];
  param_1[0x26] = param_7[2];
  pcVar1 = *(gen_code32 *)(*param_1 + 0x14);
  param_1[0x41] = (int)gen_fl2bits(param_8);
  (*pcVar1)(param_1);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::vf5 */
uint F_00bf6940(unsigned int gen_a0)
{
  GEN_ENTER(0xbf6940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x210];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ushort uVar7;
  undefined4 * puVar8;
  float * pfVar9;
  float * pfVar10;
  uint uVar11;
  int iVar12;
  float * pfVar13;
  undefined * pCVar14;
  undefined4 * puVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  
  (*(uint *)(gen_frame + 0x1fc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x200);
  (*(undefined * PTR32 *)(gen_frame + 0x8c)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = *(undefined * PTR32 *)(this + 0x28);
  puVar8 = (undefined4 *)F_00623320(*(undefined * PTR32 *)(this + 0x28),(uint)*(ushort *)(this + 0x100));
  puVar15 = ((undefined4 *)(gen_frame + 0xf0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar15 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar15 = puVar15 + 1;
  }
  pfVar9 = (float *)F_004f45d0(((undefined4 *)(gen_frame + 0x170)),((undefined4 *)(gen_frame + 0xf0)));
  pfVar13 = ((float *)(gen_frame + 0x1b0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar13 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar13 = pfVar13 + 1;
  }
  pfVar9 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x80,((float *)(gen_frame + 0x1b0)));
  pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
  (*(float *)(gen_frame + 0x60)) = *pfVar9;
  (*(float *)(gen_frame + 0x64)) = pfVar9[1];
  uVar7 = *(ushort *)((*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x102);
  (*(float *)(gen_frame + 0x68)) = pfVar9[2];
  pfVar9 = (float *)&REFG(float, 0x1302d00);
  pfVar13 = ((float *)(gen_frame + 0x0));
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar13 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pfVar13 = pfVar13 + 1;
  }
  if (*(ushort *)(pCVar14 + 0x100) == uVar7) {
    pfVar9 = ((float *)(gen_frame + 0x1b0));
    pfVar13 = ((float *)(gen_frame + 0x0));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar13 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      pfVar13 = pfVar13 + 1;
    }
    pfVar9 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x40)),pCVar14 + 0x90,((float *)(gen_frame + 0x1b0)));
    pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
  }
  else {
    puVar8 = (undefined4 *)F_00623320((*(undefined * PTR32 *)(gen_frame + 0xac)),(uint)uVar7);
    puVar15 = ((undefined4 *)(gen_frame + 0x130));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    }
    puVar8 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0xb0)),((undefined4 *)(gen_frame + 0x130)));
    pCVar14 = (*(undefined * PTR32 *)(gen_frame + 0x8c));
    puVar15 = ((undefined4 *)(gen_frame + 0x170));
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar15 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar15 = puVar15 + 1;
    }
    pfVar9 = (float *)F_004ee970(&(*(float *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x8c)) + 0x90,((undefined4 *)(gen_frame + 0x170)));
  }
  fVar1 = *pfVar9;
  fVar16 = (float10)(*(float *)(gen_frame + 0x60));
  fVar2 = pfVar9[1];
  fVar3 = pfVar9[2];
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar3;
  *(float *)(pCVar14 + 0xa0) = (*(float *)(gen_frame + 0x60));
  fVar4 = (float)((float10)fVar1 + fVar16);
  (*(float *)(gen_frame + 0x70)) = fVar4;
  *(float *)(pCVar14 + 0xa4) = (*(float *)(gen_frame + 0x64));
  fVar17 = (float10)(*(float *)(gen_frame + 0x64));
  *(float *)(pCVar14 + 0xa8) = (*(float *)(gen_frame + 0x68));
  *(float *)(pCVar14 + 0xb0) = fVar1;
  *(float *)(pCVar14 + 0xb4) = fVar2;
  *(float *)(pCVar14 + 0xb8) = fVar3;
  fVar5 = (float)(fVar17 + (float10)fVar2);
  (*(float *)(gen_frame + 0x74)) = fVar5;
  *(undefined4 *)(pCVar14 + 0xc0) = REFG(float, 0x1375ac0);
  *(undefined4 *)(pCVar14 + 0xc4) = REFG(float, 0x1375ac4);
  fVar18 = (float10)(*(float *)(gen_frame + 0x68));
  *(undefined4 *)(pCVar14 + 200) = REFG(float, 0x1375ac8);
  *(undefined4 *)(pCVar14 + 0xd0) = REFG(float, 0x1375ac0);
  fVar6 = (float)(fVar18 + (float10)fVar3);
  (*(float *)(gen_frame + 0x78)) = fVar6;
  *(undefined4 *)(pCVar14 + 0xd4) = REFG(float, 0x1375ac4);
  fVar19 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)(pCVar14 + 0xd8) = REFG(float, 0x1375ac8);
  (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x20));
  (*(float *)(gen_frame + 0x40)) = (float)((float10)fVar4 * fVar19);
  (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x24));
  (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x28));
  (*(float *)(gen_frame + 0x44)) = (float)((float10)fVar5 * fVar19);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar19 * (float10)fVar6);
  fVar1 = (float)((float10)fVar1 - fVar16);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar2 = (float)((float10)fVar2 - fVar17);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar3 = (float)((float10)fVar3 - fVar18);
  (*(float *)(gen_frame + 0x78)) = fVar3;
  (*(float *)(gen_frame + 0x50)) = fVar1;
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0x58)) = fVar3;
  pfVar9 = (float *)F_0046f390(&(*(float *)(gen_frame + 0x50)));
  fVar1 = *pfVar9;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = pfVar9[1];
  (*(float *)(gen_frame + 0x98)) = pfVar9[2];
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) * (float10)pfVar9[2] +
                 ((float10)(*(float *)(gen_frame + 0x20)) * (float10)fVar1 + (float10)(*(float *)(gen_frame + 0x24)) * (float10)pfVar9[1]))));
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  fVar1 = ((float)GEN_TOF(ABS((float10)fVar1)));
  (*(undefined * PTR32 *)(gen_frame + 0xac)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(fVar1)));
  if (*(double *)&REFG(undefined, 0x1094818) < (double)fVar1) {
    (*(float *)(gen_frame + 0x60)) = (*(float *)(gen_frame + 0x10));
    (*(float *)(gen_frame + 0x64)) = (*(float *)(gen_frame + 0x14));
    (*(float *)(gen_frame + 0x68)) = (*(float *)(gen_frame + 0x18));
    F_0054ce40(&(*(float *)(gen_frame + 0x70)),(uint)&(*(float *)(gen_frame + 0x90)),(uint)&(*(float *)(gen_frame + 0x60)));
    pfVar9 = &(*(float *)(gen_frame + 0x90));
    pfVar13 = &(*(float *)(gen_frame + 0x70));
    pfVar10 = &(*(float *)(gen_frame + 0x50));
  }
  else {
    F_0054ce40(&(*(float *)(gen_frame + 0x50)),(uint)&(*(float *)(gen_frame + 0x60)),(uint)&(*(float *)(gen_frame + 0x90)));
    pfVar9 = &(*(float *)(gen_frame + 0x50));
    pfVar13 = &(*(float *)(gen_frame + 0x90));
    pfVar10 = &(*(float *)(gen_frame + 0x70));
  }
  F_0054ce40(pfVar10,(uint)pfVar13,(uint)pfVar9);
  F_0046f390(&(*(float *)(gen_frame + 0x50)));
  uVar11 = F_0046f390(&(*(float *)(gen_frame + 0x70)));
  (*(float *)(gen_frame + 0x20)) = (*(float *)(gen_frame + 0x70));
  (*(float *)(gen_frame + 0x24)) = (*(float *)(gen_frame + 0x74));
  (*(float *)(gen_frame + 0x28)) = (*(float *)(gen_frame + 0x78));
  *(float *)(pCVar14 + 0xe0) = (*(float *)(gen_frame + 0x50));
  *(float *)(pCVar14 + 0xe4) = (*(float *)(gen_frame + 0x54));
  *(float *)(pCVar14 + 0xe8) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x40));
  *(float *)(pCVar14 + 0xf0) = (*(float *)(gen_frame + 0x90));
  *(float *)(pCVar14 + 0xf4) = (*(float *)(gen_frame + 0x94));
  *(float *)(pCVar14 + 0xf8) = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x44));
  ((float *)(gen_frame + 0x0))[0] = (*(float *)(gen_frame + 0x90));
  ((float *)(gen_frame + 0x0))[1] = (*(float *)(gen_frame + 0x94));
  ((float *)(gen_frame + 0x0))[2] = (*(float *)(gen_frame + 0x98));
  (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x14)) = (*(float *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x18)) = (*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x48));
  pfVar9 = ((float *)(gen_frame + 0x0));
  pCVar14 = pCVar14 + 0x30;
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *(float *)pCVar14 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    pCVar14 = pCVar14 + 4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x1fc)) ^ (uint)(uint)(gen_frame + 0x200));
  return uVar11;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::vf6 */
uint F_00bf6ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xbf6ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  undefined * this_00;
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined * pCVar4;
  float10 fVar5;
  float10 fVar6;
  undefined * pCVar7;
  undefined * pCVar8;
  
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  this_00 = this + 0x30;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = *(undefined * PTR32 *)(this + 0x28);
  F_0063a290(*(undefined * PTR32 *)(this + 0x28),this_00,(uint)*(ushort *)(this + 0x100));
  F_004ee970(&(*(float *)(gen_frame + 0x0)),this + 0x80,this_00);
  if (*(ushort *)(this + 0x100) == *(ushort *)(this + 0x102)) {
    uVar3 = F_004ee970(&(*(float *)(gen_frame + 0x10)),this + 0x90,this_00);
  }
  else {
    F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x28)),((undefined1 *)(gen_frame + 0x30)),(uint)*(ushort *)(this + 0x102));
    F_004ee970(&(*(float *)(gen_frame + 0x10)),this + 0x90,((undefined1 *)(gen_frame + 0x30)));
    *(float *)this_00 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x0)));
    *(float *)(this + 0x34) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x4)));
    *(float *)(this + 0x38) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x8)));
    F_0046f390(this_00);
    (*(undefined * PTR32 *)(gen_frame + 0x28)) = *(undefined * PTR32 *)(this + 0x34);
    (*(float *)(gen_frame + 0x2c)) = *(float *)(this + 0x38);
    fVar6 = (float10)((float)gen_bits2f((unsigned int)(uintptr_t)(*(undefined * PTR32 *)(this + 0x34))));
    fVar5 = (float10)*(float *)(this + 0x38);
    fVar2 = ((float)GEN_TOF((((float10)*(float *)((int)(uintptr_t)this_00) * (float10)*(float *)(this + 0xf0) +
                    fVar6 * (float10)*(float *)(this + 0xf4)) +
                   fVar5 * (float10)*(float *)(this + 0xf8))));
    (*(float *)(gen_frame + 0x2c)) = fVar2;
    fVar1 = ((float)GEN_TOF((((float10)*(float *)(this + 0xe4) * fVar6 +
                    (float10)*(float *)(this + 0xe0) * (float10)*(float *)this_00) +
                   (float10)*(float *)(this + 0xe8) * fVar5)));
    (*(float *)(gen_frame + 0x2c)) = fVar1;
    if ((float10)fVar1 < (float10)fVar2) {
      F_0054ce40(this + 0x50,(uint)this_00,(uint)(this + 0xe0));
      pCVar4 = this + 0x40;
      pCVar7 = this + 0x50;
      pCVar8 = this_00;
    }
    else {
      F_0054ce40(this + 0x40,(uint)(this + 0xf0),(uint)this_00);
      pCVar8 = this + 0x40;
      pCVar4 = this + 0x50;
      pCVar7 = this_00;
    }
    F_0054ce40(pCVar4,(uint)pCVar7,(uint)pCVar8);
    F_0046f390(this + 0x40);
    uVar3 = F_0046f390(this + 0x50);
  }
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) + (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  fVar6 = (float10)REFG(double, 0x1088108);
  *(float *)(this + 0x60) = (float)((float10)fVar2 * fVar6);
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x14)) + (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  *(float *)(this + 100) = (float)((float10)fVar2 * fVar6);
  fVar2 = (float)((float10)(*(float *)(gen_frame + 0x18)) + (float10)(*(float *)(gen_frame + 0x8)));
  (*(float *)(gen_frame + 0x2c)) = fVar2;
  *(float *)(this + 0x68) = (float)((float10)fVar2 * fVar6);
  *(float *)(this + 0xa0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xc0) + (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0xa4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xc4) + (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 0xa8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 200) + (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0xb0) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb0) + (float10)*(float *)(this + 0xd0))));
  *(float *)(this + 0xb4) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xd4) + (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0xb8) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0xb8) + (float10)*(float *)(this + 0xd8))));
  *(float *)(this + 0xc0) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) - (float10)*(float *)(this + 0xa0))));
  *(float *)(this + 0xc4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)*(float *)(this + 0xa4))));
  *(float *)(this + 200) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)*(float *)(this + 0xa8))));
  *(float *)(this + 0xd0) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x10)) - (float10)*(float *)(this + 0xb0))));
  *(float *)(this + 0xd4) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x14)) - (float10)*(float *)(this + 0xb4))));
  *(float *)(this + 0xd8) = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x18)) - (float10)*(float *)(this + 0xb8))));
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x80));
  return uVar3;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::vf9 */
uint F_00bf7140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf7140u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  uint uVar1;
  
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa0) + (float10)*(float *)(this + 0xc0))));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa4) + (float10)*(float *)(this + 0xc4))));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xa8) + (float10)*(float *)(this + 200))));
  (*(float *)(gen_frame + 0x20)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb0) + (float10)*(float *)(this + 0xd0))));
  (*(float *)(gen_frame + 0x24)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb4) + (float10)*(float *)(this + 0xd4))));
  (*(float *)(gen_frame + 0x28)) = ((float)GEN_TOF(((float10)*(float *)(this + 0xb8) + (float10)*(float *)(this + 0xd8))));
  F_00c262e0(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),param_2,&(*(float *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x3c)));
  *param_1 = (float)((float10)*param_2 - (float10)(*(float *)(gen_frame + 0x0)));
  param_1[1] = (float)((float10)param_2[1] - (float10)(*(float *)(gen_frame + 0x4)));
  param_1[2] = (float)((float10)param_2[2] - (float10)(*(float *)(gen_frame + 0x8)));
  uVar1 = F_0046f390(param_1);
  return uVar1;
}

/* ref: FUN_00bf7200 */
byte F_00bf7200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xbf7200u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  float * pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  fVar9 = (float10)param_6;
  fVar1 = param_2[2];
  fVar2 = ((float)GEN_TOF((fVar9 * (float10)*(float *)((int)param_1 + 0xc0))));
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc4) * fVar9)));
  (*(float *)(gen_frame + 0x44)) = fVar3;
  (*(float *)(gen_frame + 0x18)) = fVar1;
  ((float *)(gen_frame + 0x6c))[1] = 0.0;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 200) * fVar9)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa0) + (float10)fVar2)));
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa4) + (float10)fVar3)));
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa8) + (float10)fVar1)));
  (*(float *)(gen_frame + 0x48)) = fVar1;
  fVar4 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xd0) * fVar9)));
  (*(float *)(gen_frame + 0x30)) = fVar4;
  fVar5 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xd4) * fVar9)));
  (*(float *)(gen_frame + 0x34)) = fVar5;
  fVar6 = ((float)GEN_TOF((fVar9 * (float10)*(float *)((int)param_1 + 0xd8))));
  (*(float *)(gen_frame + 0x38)) = fVar6;
  (*(float *)(gen_frame + 0x30)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb0) + (float10)fVar4)));
  (*(float *)(gen_frame + 0x34)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb4) + (float10)fVar5)));
  (*(float *)(gen_frame + 0x38)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb8) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  (*(float *)(gen_frame + 0x20)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = fVar3;
  (*(float *)(gen_frame + 0x28)) = fVar1;
  F_00c262e0(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x20)),((float *)(gen_frame + 0x6c)) + 1);
  (*(byte *)(gen_frame + 0x7f)) = 0;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)));
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x28)));
  fVar9 = (float10)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x24)));
  fVar10 = (float10)(float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x20)));
  fVar11 = (float10)(float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x28)));
  fVar1 = ((float)GEN_TOF((fVar11 * fVar11 + (fVar10 * fVar10 + fVar9 * fVar9))));
  ((float *)(gen_frame + 0x6c))[2] = fVar1;
  fVar2 = *(float *)((int)param_1 + 0x104);
  (*(float *)(gen_frame + 0x78)) = fVar2;
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF((fVar11 + ((float10)param_2[0x14] + (float10)param_2[0x14]))));
  ((float *)(gen_frame + 0x6c))[0] = fVar2;
  fVar9 = (float10)fVar2;
  fVar10 = (float10)fVar1;
  fVar1 = (float)(fVar9 * fVar9);
  ((float *)(gen_frame + 0x6c))[0] = fVar1;
  if (fVar10 < (float10)fVar1) {
    bVar7 = F_00c24d00(param_1,param_3,&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x0)));
    if (bVar7 == 0) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      fVar1 = ((float)GEN_TOF((((float10)(*(float *)(gen_frame + 0x54)) * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x50)) * (float10)(*(float *)(gen_frame + 0x0))
                      ) + (float10)(*(float *)(gen_frame + 0x58)) * (float10)(*(float *)(gen_frame + 0x8)))));
      ((float *)(gen_frame + 0x6c))[0] = fVar1;
      fVar9 = (float10)fVar1;
      fVar1 = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x0)));
      (*(float *)(gen_frame + 0x10)) = fVar1;
      fVar2 = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x4)));
      (*(float *)(gen_frame + 0x14)) = fVar2;
      (*(float *)(gen_frame + 0x18)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8)));
      fVar10 = (float10)fVar1;
      fVar1 = (float)((float10)(*(float *)(gen_frame + 0x50)) - fVar10);
      (*(float *)(gen_frame + 0x30)) = fVar1;
      fVar11 = (float10)fVar2;
      fVar2 = (float)((float10)(*(float *)(gen_frame + 0x54)) - fVar11);
      (*(float *)(gen_frame + 0x34)) = fVar2;
      fVar9 = (float10)(float)(fVar9 * (float10)(*(float *)(gen_frame + 0x8)));
      fVar3 = (float)((float10)(*(float *)(gen_frame + 0x58)) - fVar9);
      (*(float *)(gen_frame + 0x38)) = fVar3;
      (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar1 - fVar10);
      (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar2 - fVar11);
      (*(float *)(gen_frame + 0x58)) = (float)((float10)fVar3 - fVar9);
    }
    fVar11 = (float10)(*(float *)(gen_frame + 0x78));
    fVar10 = (float10)((float *)(gen_frame + 0x6c))[2];
  }
  if ((param_3 & 1) == 0) {
    if ((param_3 & 2) == 0) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
    fVar1 = param_2[0x14];
    ((float *)(gen_frame + 0x6c))[0] = 0.0;
    pfVar8 = &(*(float *)(gen_frame + 0x78));
    (*(float *)(gen_frame + 0x78)) = (float)(fVar11 - (float10)fVar1);
    if (!((float10)0 < (float10)(float)(fVar11 - (float10)fVar1))) {
      pfVar8 = ((float *)(gen_frame + 0x6c));
    }
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar11 = (float10)fVar1;
    if (fVar11 * fVar11 < fVar10) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
  }
  else {
    fVar1 = param_2[0x14];
    ((float *)(gen_frame + 0x6c))[0] = 0.0;
    pfVar8 = &(*(float *)(gen_frame + 0x78));
    (*(float *)(gen_frame + 0x78)) = (float)((float10)fVar1 + fVar11);
    if (!((float10)0 < (float10)(float)((float10)fVar1 + fVar11))) {
      pfVar8 = ((float *)(gen_frame + 0x6c));
    }
    fVar1 = *pfVar8;
    (*(float *)(gen_frame + 0x78)) = fVar1;
    fVar11 = (float10)fVar1;
    if (fVar10 < fVar11 * fVar11) {
      (*(byte *)(gen_frame + 0x7f)) = 1;
      goto LAB_00bf749e;
    }
  }
  if ((*(byte *)(gen_frame + 0x7f)) == 0) {
    return 0;
  }
LAB_00bf749e: ;
  if (((float *)(gen_frame + 0x6c))[2] <= REFG(float, 0x10905c4)) {
    (*(float *)(gen_frame + 0x50)) = 0.0;
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1087f04);
    (*(float *)(gen_frame + 0x58)) = 0.0;
  }
  else {
    ((float *)(gen_frame + 0x6c))[0] = ((float)GEN_TOF(SQRT(fVar10)));
    fVar1 = (float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar10))));
    ((float *)(gen_frame + 0x6c))[0] = fVar1;
    fVar9 = (float10)fVar1;
    (*(float *)(gen_frame + 0x50)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x50)));
    (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x54)) * fVar9);
    (*(float *)(gen_frame + 0x58)) = (float)(fVar9 * (float10)(*(float *)(gen_frame + 0x58)));
    fVar11 = (float10)(*(float *)(gen_frame + 0x78));
  }
  fVar9 = (float10)(*(float *)(gen_frame + 0x50));
  (*(float *)(gen_frame + 0x40)) = (float)(fVar9 * fVar11);
  fVar10 = (float10)(*(float *)(gen_frame + 0x54));
  (*(float *)(gen_frame + 0x44)) = (float)(fVar10 * fVar11);
  fVar12 = (float10)(*(float *)(gen_frame + 0x58));
  (*(float *)(gen_frame + 0x48)) = (float)(fVar12 * fVar11);
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar9 * fVar11) + (float10)(*(float *)(gen_frame + 0x20)))));
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar10 * fVar11) + (float10)(*(float *)(gen_frame + 0x24)))));
  (*(float *)(gen_frame + 0x44)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar12 * fVar11) + (float10)(*(float *)(gen_frame + 0x28)))));
  (*(float *)(gen_frame + 0x48)) = fVar3;
  fVar4 = *param_2;
  ((float *)(gen_frame + 0x6c))[0] = fVar4;
  fVar11 = (float10)fVar4;
  fVar1 = (float)((float10)fVar1 - fVar11);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar4 = param_2[1];
  ((float *)(gen_frame + 0x6c))[0] = fVar4;
  fVar13 = (float10)fVar4;
  fVar2 = (float)((float10)fVar2 - fVar13);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar4 = param_2[2];
  ((float *)(gen_frame + 0x6c))[2] = fVar4;
  fVar3 = (float)((float10)fVar3 - (float10)fVar4);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  fVar5 = param_4[2];
  ((float *)(gen_frame + 0x6c))[0] = fVar5;
  fVar14 = (float10)fVar5;
  fVar1 = (float)(fVar14 * (float10)fVar1);
  (*(float *)(gen_frame + 0x50)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar14);
  (*(float *)(gen_frame + 0x54)) = fVar2;
  fVar3 = (float)(fVar14 * (float10)fVar3);
  (*(float *)(gen_frame + 0x58)) = fVar3;
  *param_2 = (float)((float10)fVar1 + fVar11);
  param_2[1] = (float)(fVar13 + (float10)fVar2);
  param_2[2] = (float)((float10)fVar4 + (float10)fVar3);
  fVar1 = param_2[8];
  (*(float *)(gen_frame + 0x10)) = fVar1;
  (*(float *)(gen_frame + 0x14)) = param_2[9];
  fVar2 = param_2[10];
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar11 = (float10)param_2[9];
  fVar13 = (float10)fVar1;
  fVar1 = ((float)GEN_TOF(((float10)fVar2 * fVar12 + (fVar13 * fVar9 + fVar11 * fVar10))));
  ((float *)(gen_frame + 0x6c))[2] = fVar1;
  fVar14 = (float10)fVar1;
  (*(float *)(gen_frame + 0x50)) = (float)(fVar14 * fVar9);
  (*(float *)(gen_frame + 0x54)) = (float)(fVar14 * fVar10);
  (*(float *)(gen_frame + 0x58)) = (float)(fVar12 * fVar14);
  fVar3 = ((float)GEN_TOF((fVar13 - (float10)(float)(fVar14 * fVar9))));
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = ((float)GEN_TOF((fVar11 - (float10)(float)(fVar14 * fVar10))));
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar2 = ((float)GEN_TOF(((float10)fVar2 - (float10)(float)(fVar12 * fVar14))));
  (*(float *)(gen_frame + 0x48)) = fVar2;
  fVar5 = *param_4;
  ((float *)(gen_frame + 0x6c))[0] = (float)((float10)1 - (float10)fVar5);
  fVar9 = (float10)(float)((float10)1 - (float10)fVar5);
  fVar3 = (float)(fVar9 * (float10)fVar3);
  (*(float *)(gen_frame + 0x40)) = fVar3;
  fVar4 = (float)((float10)fVar4 * fVar9);
  (*(float *)(gen_frame + 0x44)) = fVar4;
  fVar2 = (float)(fVar9 * (float10)fVar2);
  (*(float *)(gen_frame + 0x48)) = fVar2;
  if ((param_3 == 0) || (fVar1 <= 0.0)) {
    (*(float *)(gen_frame + 0x50)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x54)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x58)) = REFG(float, 0x1375ac8);
  }
  param_2[8] = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x50)));
  param_2[9] = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x54)));
  param_2[10] = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x58)));
  fVar1 = param_4[1];
  ((float *)(gen_frame + 0x6c))[0] = fVar1;
  fVar9 = (float10)fVar1;
  param_2[8] = (float)(fVar9 * (float10)param_2[8]);
  param_2[9] = (float)((float10)param_2[9] * fVar9);
  param_2[10] = (float)(fVar9 * (float10)param_2[10]);
  return (*(byte *)(gen_frame + 0x7f));
}

/* ref: FUN_00bf76d0 */
byte F_00bf76d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8)
{
  GEN_ENTER(0xbf76d0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  __declspec(align(16)) undefined1 gen_frame[0x110];
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
  byte bVar11;
  float * pfVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  
  fVar1 = *(float *)((int)param_1 + 0xc0);
  fVar13 = (float10)param_9;
  (*(float *)(gen_frame + 0x10)) = *param_2;
  (*(float *)(gen_frame + 0x14)) = param_2[1];
  fVar1 = (float)(fVar13 * (float10)fVar1);
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  (*(float *)(gen_frame + 0x18)) = param_2[2];
  (*(float *)(gen_frame + 0x20)) = *param_3;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xc4) * fVar13)));
  (*(float *)(gen_frame + 0xd4)) = fVar2;
  (*(float *)(gen_frame + 0x24)) = param_3[1];
  (*(float *)(gen_frame + 0x28)) = param_3[2];
  fVar3 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 200) * fVar13)));
  (*(float *)(gen_frame + 0xd8)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa0) + (float10)fVar1)));
  (*(float *)(gen_frame + 0xd0)) = fVar1;
  fVar4 = *(float *)((int)param_1 + 0xa4);
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar1 = (float)((float10)fVar4 + (float10)fVar2);
  (*(float *)(gen_frame + 0xd4)) = fVar1;
  (*(float *)(gen_frame + 0x34)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xa8) + (float10)fVar3)));
  (*(float *)(gen_frame + 0xd8)) = fVar1;
  (*(float *)(gen_frame + 0x38)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xd0) * fVar13)));
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xd4) * fVar13)));
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar3 = ((float)GEN_TOF((fVar13 * (float10)*(float *)((int)param_1 + 0xd8))));
  (*(float *)(gen_frame + 0xe8)) = fVar3;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb0) + (float10)fVar1)));
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb4) + (float10)fVar2)));
  (*(float *)(gen_frame + 0xe4)) = fVar1;
  (*(float *)(gen_frame + 0x44)) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0xb8) + (float10)fVar3)));
  (*(float *)(gen_frame + 0xe8)) = fVar1;
  (*(float *)(gen_frame + 0x48)) = fVar1;
  F_00c26450(&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x50)),&(*(float *)(gen_frame + 0xbc)),&(*(float *)(gen_frame + 0xcc)));
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)(*(float *)(gen_frame + 0x60)) - (float10)(*(float *)(gen_frame + 0x50)));
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)(*(float *)(gen_frame + 0x64)) - (float10)(*(float *)(gen_frame + 0x54)));
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)(*(float *)(gen_frame + 0x68)) - (float10)(*(float *)(gen_frame + 0x58)));
  if ((char)param_7 == '\0') {
    (*(float *)(gen_frame + 0x70)) = param_2[0x10];
    (*(float *)(gen_frame + 0x74)) = param_2[0x11];
    (*(float *)(gen_frame + 0x78)) = param_2[0x12];
    (*(float *)(gen_frame + 0x80)) = param_3[0x10];
    (*(float *)(gen_frame + 0x84)) = param_3[0x11];
    (*(float *)(gen_frame + 0x88)) = param_3[0x12];
    F_00c26450(&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xfc)),&(*(float *)(gen_frame + 0x9c)));
    (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0xa0)) - (float10)(*(float *)(gen_frame + 0xe0)));
    (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0xa4)) - (float10)(*(float *)(gen_frame + 0xe4)));
    (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0xa8)) - (float10)(*(float *)(gen_frame + 0xe8)));
    (*(float *)(gen_frame + 0xa0)) = (*(float *)(gen_frame + 0xd0));
    (*(float *)(gen_frame + 0xa4)) = (*(float *)(gen_frame + 0xd4));
    (*(float *)(gen_frame + 0xa8)) = (*(float *)(gen_frame + 0xd8));
    F_0046f390(&(*(float *)(gen_frame + 0xa0)));
    F_0046f390(&(*(float *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0xf8)) = 0.0;
    pfVar12 = &(*(float *)(gen_frame + 0xf8));
    fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xa8)) * (float10)(*(float *)(gen_frame + 0x88)) +
                   ((float10)(*(float *)(gen_frame + 0xa4)) * (float10)(*(float *)(gen_frame + 0x84)) + (float10)(*(float *)(gen_frame + 0x80)) * (float10)(*(float *)(gen_frame + 0xa0))))));
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    fVar1 = ((float)GEN_TOF(-(float10)fVar1));
    (*(float *)(gen_frame + 0xc4)) = fVar1;
    if (!((float10)fVar1 < (float10)0)) {
      pfVar12 = &(*(float *)(gen_frame + 0xc4));
    }
    fVar1 = *pfVar12;
    fVar2 = *param_2;
    (*(float *)(gen_frame + 0xf8)) = fVar1;
    (*(float *)(gen_frame + 0xfc)) = fVar2;
    fVar13 = (float10)fVar2;
    fVar2 = (float)((float10)param_2[0x10] - fVar13);
    (*(float *)(gen_frame + 0xe0)) = fVar2;
    fVar3 = param_2[1];
    (*(float *)(gen_frame + 0xfc)) = fVar3;
    fVar14 = (float10)fVar3;
    fVar3 = (float)((float10)param_2[0x11] - fVar14);
    (*(float *)(gen_frame + 0xe4)) = fVar3;
    fVar4 = param_2[2];
    (*(float *)(gen_frame + 0xfc)) = fVar4;
    fVar15 = (float10)fVar4;
    fVar4 = (float)((float10)param_2[0x12] - fVar15);
    (*(float *)(gen_frame + 0xe8)) = fVar4;
    fVar16 = (float10)fVar1;
    fVar1 = (float)(fVar16 * (float10)fVar2);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = (float)((float10)fVar3 * fVar16);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = (float)((float10)fVar4 * fVar16);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    *param_2 = (float)((float10)fVar1 + fVar13);
    param_2[1] = (float)((float10)fVar2 + fVar14);
    param_2[2] = (float)(fVar15 + (float10)fVar3);
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0xfc)) = fVar1;
    fVar13 = (float10)fVar1;
    fVar1 = (float)((float10)param_3[0x10] - fVar13);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = param_3[1];
    (*(float *)(gen_frame + 0xfc)) = fVar2;
    fVar14 = (float10)fVar2;
    fVar2 = (float)((float10)param_3[0x11] - fVar14);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = param_3[2];
    (*(float *)(gen_frame + 0xfc)) = fVar3;
    fVar15 = (float10)fVar3;
    fVar3 = (float)((float10)param_3[0x12] - fVar15);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    fVar1 = (float)((float10)fVar1 * fVar16);
    (*(float *)(gen_frame + 0xe0)) = fVar1;
    fVar2 = (float)((float10)fVar2 * fVar16);
    (*(float *)(gen_frame + 0xe4)) = fVar2;
    fVar3 = (float)((float10)fVar3 * fVar16);
    (*(float *)(gen_frame + 0xe8)) = fVar3;
    *param_3 = (float)((float10)fVar1 + fVar13);
    param_3[1] = (float)(fVar14 + (float10)fVar2);
    param_3[2] = (float)(fVar15 + (float10)fVar3);
  }
  pfVar12 = &(*(float *)(gen_frame + 0xc0));
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0xd8)) * (float10)(*(float *)(gen_frame + 0xd8)) +
                 ((float10)(*(float *)(gen_frame + 0xd4)) * (float10)(*(float *)(gen_frame + 0xd4)) + (float10)(*(float *)(gen_frame + 0xd0)) * (float10)(*(float *)(gen_frame + 0xd0))))));
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = *(float *)((int)param_1 + 0x104);
  (*(float *)(gen_frame + 0xfc)) = fVar2;
  fVar13 = (float10)fVar2;
  (*(float *)(gen_frame + 0xfc)) = 0.0;
  fVar14 = (float10)param_4;
  fVar2 = (float)(fVar14 + fVar13);
  (*(float *)(gen_frame + 0xc0)) = fVar2;
  if (!((float10)0 < (float10)fVar2)) {
    pfVar12 = &(*(float *)(gen_frame + 0xfc));
  }
  (*(float *)(gen_frame + 0xfc)) = *pfVar12;
  (*(char *)(gen_frame + 0xcb)) = '\0';
  fVar2 = ((float)GEN_TOF(((fVar14 + fVar14) + fVar13)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar13 = (float10)fVar2;
  fVar2 = (float)(fVar13 * fVar13);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  if (((float10)fVar1 < (float10)fVar2) &&
     (bVar11 = F_00c24d00(param_1,param_5,&(*(float *)(gen_frame + 0x60)),((undefined1 *)(gen_frame + 0x0))), bVar11 == 0)) {
    (*(float *)(gen_frame + 0xd0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd0))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0xd4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd4))) ^ REFG(uint, 0x10920d0));
    (*(float *)(gen_frame + 0xd8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd8))) ^ REFG(uint, 0x10920d0));
    (*(char *)(gen_frame + 0xcb)) = '\x01';
  }
  else if (!((float10)(*(float *)(gen_frame + 0xc4)) < (float10)(*(float *)(gen_frame + 0xfc)) * (float10)(*(float *)(gen_frame + 0xfc)))) {
    return 0;
  }
  fVar1 = ((float)GEN_TOF(SQRT((float10)(*(float *)(gen_frame + 0xc4)))));
  (*(float *)(gen_frame + 0xf8)) = fVar1;
  (*(float *)(gen_frame + 0xc4)) = fVar1;
  fVar2 = (float)((float10)1 / (float10)fVar1);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar15 = (float10)fVar2;
  fVar13 = (float10)(*(float *)(gen_frame + 0xd0));
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar15 * fVar13);
  fVar16 = (float10)(*(float *)(gen_frame + 0xd4));
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar16 * fVar15);
  fVar14 = (float10)(*(float *)(gen_frame + 0xd8));
  (*(float *)(gen_frame + 0xd8)) = (float)(fVar15 * fVar14);
  if ((*(char *)(gen_frame + 0xcb)) != '\0') {
    (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((float10)*(float *)((int)param_1 + 0x104) + (float10)fVar1)));
  }
  fVar1 = (float)((float10)1 - (float10)*param_6);
  (*(float *)(gen_frame + 0xcc)) = fVar1;
  fVar2 = param_3[9];
  (*(float *)(gen_frame + 0x9c)) = fVar2;
  fVar3 = param_3[8];
  (*(float *)(gen_frame + 0xf8)) = fVar3;
  fVar4 = param_3[10];
  (*(float *)(gen_frame + 0xc0)) = fVar4;
  fVar17 = (float10)fVar3;
  fVar13 = (float10)(float)(fVar15 * fVar13);
  fVar18 = (float10)fVar2;
  fVar16 = (float10)(float)(fVar16 * fVar15);
  fVar14 = (float10)(float)(fVar15 * fVar14);
  fVar2 = ((float)GEN_TOF(((fVar13 * fVar17 + fVar16 * fVar18) + fVar14 * (float10)fVar4)));
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar15 = (float10)fVar2;
  (*(float *)(gen_frame + 0xd0)) = (float)(fVar15 * fVar13);
  (*(float *)(gen_frame + 0xd4)) = (float)(fVar16 * fVar15);
  (*(float *)(gen_frame + 0xd8)) = (float)(fVar15 * fVar14);
  fVar3 = ((float)GEN_TOF((fVar17 - (float10)(float)(fVar15 * fVar13))));
  (*(float *)(gen_frame + 0xe0)) = fVar3;
  fVar5 = ((float)GEN_TOF((fVar18 - (float10)(float)(fVar16 * fVar15))));
  (*(float *)(gen_frame + 0xe4)) = fVar5;
  fVar4 = ((float)GEN_TOF(((float10)fVar4 - (float10)(float)(fVar15 * fVar14))));
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  fVar15 = (float10)fVar1;
  fVar1 = (float)(fVar15 * (float10)fVar3);
  (*(float *)(gen_frame + 0xe0)) = fVar1;
  fVar3 = (float)((float10)fVar5 * fVar15);
  (*(float *)(gen_frame + 0xe4)) = fVar3;
  fVar4 = (float)((float10)fVar4 * fVar15);
  (*(float *)(gen_frame + 0xe8)) = fVar4;
  if (fVar2 <= 0.0) {
    (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0xf8)) = REFG(float, 0x1087f04);
  fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xd0)));
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xd4)));
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xd8)));
  (*(float *)(gen_frame + 0x88)) = fVar3;
  fVar4 = param_6[1];
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar17 = (float10)fVar4;
  fVar1 = (float)(fVar17 * (float10)fVar1);
  (*(float *)(gen_frame + 0x80)) = fVar1;
  fVar2 = (float)((float10)fVar2 * fVar17);
  (*(float *)(gen_frame + 0x84)) = fVar2;
  fVar3 = (float)(fVar17 * (float10)fVar3);
  (*(float *)(gen_frame + 0x88)) = fVar3;
  if ((char)param_7 != '\0') {
    (*(float *)(gen_frame + 0xcc)) = (*(float *)(gen_frame + 0xbc));
    (*(float *)(gen_frame + 0x9c)) = REFG(float, 0x10ac168);
    pfVar12 = &(*(float *)(gen_frame + 0xcc));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0xbc)))) {
      pfVar12 = &(*(float *)(gen_frame + 0x9c));
    }
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)1 / (float10)*pfVar12);
  }
  fVar17 = (float10)(*(float *)(gen_frame + 0xfc));
  (*(float *)(gen_frame + 0xcc)) = 0.0;
  pfVar12 = &(*(float *)(gen_frame + 0xfc));
  (*(float *)(gen_frame + 0xfc)) = (float)(fVar17 - (float10)(*(float *)(gen_frame + 0xc4)));
  if (!((float10)0 < (float10)(float)(fVar17 - (float10)(*(float *)(gen_frame + 0xc4))))) {
    pfVar12 = &(*(float *)(gen_frame + 0xcc));
  }
  fVar4 = ((float)GEN_TOF((((float10)param_6[2] * (float10)*pfVar12) * (float10)(*(float *)(gen_frame + 0xf8)))));
  (*(float *)(gen_frame + 0xcc)) = fVar4;
  fVar17 = (float10)fVar4;
  fVar4 = (float)(fVar17 * fVar13);
  (*(float *)(gen_frame + 0xa0)) = fVar4;
  fVar5 = (float)(fVar16 * fVar17);
  (*(float *)(gen_frame + 0xa4)) = fVar5;
  fVar6 = (float)(fVar17 * fVar14);
  (*(float *)(gen_frame + 0xa8)) = fVar6;
  if ((char)param_7 == '\0') {
    fVar7 = param_2[9];
    (*(float *)(gen_frame + 0xcc)) = fVar7;
    fVar8 = param_2[8];
    (*(float *)(gen_frame + 0xfc)) = fVar8;
    fVar9 = param_2[10];
    (*(float *)(gen_frame + 0xbc)) = fVar9;
    fVar17 = (float10)fVar7;
    fVar7 = ((float)GEN_TOF(((float10)fVar9 * fVar14 + ((float10)fVar8 * fVar13 + fVar17 * fVar16))));
    (*(float *)(gen_frame + 0xf8)) = fVar7;
    fVar18 = (float10)fVar7;
    (*(float *)(gen_frame + 0xd0)) = (float)(fVar18 * fVar13);
    (*(float *)(gen_frame + 0xd4)) = (float)(fVar18 * fVar16);
    (*(float *)(gen_frame + 0xd8)) = (float)(fVar14 * fVar18);
    fVar8 = ((float)GEN_TOF(((float10)fVar8 - (float10)(float)(fVar18 * fVar13))));
    (*(float *)(gen_frame + 0xe0)) = fVar8;
    fVar10 = ((float)GEN_TOF((fVar17 - (float10)(float)(fVar18 * fVar16))));
    (*(float *)(gen_frame + 0xe4)) = fVar10;
    fVar9 = ((float)GEN_TOF(((float10)fVar9 - (float10)(float)(fVar14 * fVar18))));
    (*(float *)(gen_frame + 0xe8)) = fVar9;
    fVar8 = (float)((float10)fVar8 * fVar15);
    (*(float *)(gen_frame + 0xe0)) = fVar8;
    fVar10 = (float)((float10)fVar10 * fVar15);
    (*(float *)(gen_frame + 0xe4)) = fVar10;
    fVar9 = (float)(fVar15 * (float10)fVar9);
    (*(float *)(gen_frame + 0xe8)) = fVar9;
    if (fVar7 <= 0.0) {
      (*(float *)(gen_frame + 0xd0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0xd4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xd8)) = REFG(float, 0x1375ac8);
    }
    *param_2 = (float)((float10)fVar4 + (float10)*param_2);
    param_2[1] = (float)((float10)fVar5 + (float10)param_2[1]);
    param_2[2] = (float)((float10)fVar6 + (float10)param_2[2]);
    fVar7 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0xd0)));
    (*(float *)(gen_frame + 0x60)) = fVar7;
    fVar8 = (float)((float10)fVar10 + (float10)(*(float *)(gen_frame + 0xd4)));
    (*(float *)(gen_frame + 0x64)) = fVar8;
    fVar9 = (float)((float10)fVar9 + (float10)(*(float *)(gen_frame + 0xd8)));
    (*(float *)(gen_frame + 0x68)) = fVar9;
    fVar10 = param_6[1];
    (*(float *)(gen_frame + 0xcc)) = fVar10;
    fVar13 = (float10)fVar10;
    param_2[8] = (float)(fVar13 * (float10)fVar7);
    param_2[9] = (float)((float10)fVar8 * fVar13);
    param_2[10] = (float)(fVar13 * (float10)fVar9);
  }
  *param_3 = (float)((float10)fVar4 + (float10)*param_3);
  param_3[1] = (float)((float10)param_3[1] + (float10)fVar5);
  param_3[2] = (float)((float10)param_3[2] + (float10)fVar6);
  param_3[8] = fVar1;
  param_3[9] = fVar2;
  param_3[10] = fVar3;
  return 1;
}

/* ref: FUN_00bf7e80 */
byte F_00bf7e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xbf7e80u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xf0];
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
  byte bVar19;
  float * pfVar20;
  bool bVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  
  fVar1 = *(float *)(param_1 + 0xc0);
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar22 = (float10)fVar1;
  fVar23 = (float10)param_4;
  fVar1 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x70)) = fVar1;
  fVar2 = *(float *)(param_1 + 0xc4);
  (*(float *)(gen_frame + 0xdc)) = fVar2;
  fVar24 = (float10)fVar2;
  fVar2 = (float)(fVar24 * fVar23);
  (*(float *)(gen_frame + 0x74)) = fVar2;
  fVar3 = *(float *)(param_1 + 200);
  (*(float *)(gen_frame + 0xdc)) = fVar3;
  fVar25 = (float10)fVar3;
  fVar3 = (float)(fVar25 * fVar23);
  (*(float *)(gen_frame + 0x78)) = fVar3;
  fVar4 = *(float *)(param_1 + 0xa0);
  (*(float *)(gen_frame + 0xdc)) = fVar4;
  fVar26 = (float10)fVar4;
  fVar4 = (float)(fVar26 + (float10)fVar1);
  (*(float *)(gen_frame + 0x70)) = fVar4;
  fVar1 = *(float *)(param_1 + 0xa4);
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar27 = (float10)fVar1;
  fVar5 = (float)(fVar27 + (float10)fVar2);
  (*(float *)(gen_frame + 0x74)) = fVar5;
  fVar6 = *(float *)(param_1 + 0xa8);
  (*(float *)(gen_frame + 0x5c)) = fVar6;
  fVar7 = (float)((float10)fVar3 + (float10)fVar6);
  (*(float *)(gen_frame + 0x78)) = fVar7;
  fVar8 = *(float *)(param_1 + 0xd0);
  (*(float *)(gen_frame + 0x8c)) = fVar8;
  (*(float *)(gen_frame + 0xc0)) = (float)((float10)fVar8 * fVar23);
  fVar9 = *(float *)(param_1 + 0xd4);
  (*(float *)(gen_frame + 0x88)) = fVar9;
  (*(float *)(gen_frame + 0xc4)) = (float)((float10)fVar9 * fVar23);
  fVar1 = *(float *)(param_1 + 0xd8);
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  fVar28 = (float10)fVar1;
  fVar1 = (float)(fVar28 * fVar23);
  (*(float *)(gen_frame + 0xc8)) = fVar1;
  fVar10 = *(float *)(param_1 + 0xb0);
  (*(float *)(gen_frame + 0xbc)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)((float10)fVar8 * fVar23))));
  (*(float *)(gen_frame + 0xc0)) = fVar11;
  fVar12 = *(float *)(param_1 + 0xb4);
  (*(float *)(gen_frame + 0xb8)) = fVar12;
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar23) + (float10)fVar12)));
  (*(float *)(gen_frame + 0xc4)) = fVar13;
  fVar14 = *(float *)(param_1 + 0xb8);
  (*(float *)(gen_frame + 0xdc)) = fVar14;
  fVar15 = (float)((float10)fVar1 + (float10)fVar14);
  (*(float *)(gen_frame + 0xc8)) = fVar15;
  fVar23 = (float10)param_5;
  fVar1 = (float)(fVar23 * fVar22);
  (*(float *)(gen_frame + 0x40)) = fVar1;
  fVar2 = (float)(fVar23 * fVar24);
  (*(float *)(gen_frame + 0x44)) = fVar2;
  (*(float *)(gen_frame + 0x60)) = fVar4;
  (*(float *)(gen_frame + 0x64)) = fVar5;
  fVar16 = (float)(fVar23 * fVar25);
  (*(float *)(gen_frame + 0x48)) = fVar16;
  (*(float *)(gen_frame + 0x68)) = fVar7;
  (*(float *)(gen_frame + 0x0)) = fVar11;
  fVar17 = (float)(fVar26 + (float10)fVar1);
  (*(float *)(gen_frame + 0x40)) = fVar17;
  (*(float *)(gen_frame + 0x4)) = fVar13;
  (*(float *)(gen_frame + 0x8)) = fVar15;
  fVar1 = param_2[4];
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar18 = (float)(fVar27 + (float10)fVar2);
  (*(float *)(gen_frame + 0x44)) = fVar18;
  fVar2 = param_2[5];
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = param_2[6];
  (*(float *)(gen_frame + 0x38)) = fVar3;
  fVar6 = (float)((float10)fVar16 + (float10)fVar6);
  (*(float *)(gen_frame + 0x48)) = fVar6;
  (*(float *)(gen_frame + 0xa0)) = (float)((float10)fVar8 * fVar23);
  (*(float *)(gen_frame + 0xa4)) = (float)((float10)fVar9 * fVar23);
  fVar16 = (float)(fVar28 * fVar23);
  (*(float *)(gen_frame + 0xa8)) = fVar16;
  fVar8 = ((float)GEN_TOF(((float10)fVar10 + (float10)(float)((float10)fVar8 * fVar23))));
  (*(float *)(gen_frame + 0xa0)) = fVar8;
  (*(float *)(gen_frame + 0xb8)) = 0.0;
  fVar9 = ((float)GEN_TOF(((float10)(float)((float10)fVar9 * fVar23) + (float10)fVar12)));
  (*(float *)(gen_frame + 0xa4)) = fVar9;
  fVar10 = (float)((float10)fVar16 + (float10)fVar14);
  (*(float *)(gen_frame + 0xa8)) = fVar10;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)fVar17 - (float10)fVar4);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)fVar18 - (float10)fVar5);
  (*(float *)(gen_frame + 0x98)) = (float)((float10)fVar6 - (float10)fVar7);
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar8 - (float10)fVar11);
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar9 - (float10)fVar13);
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar10 - (float10)fVar15);
  (*(float *)(gen_frame + 0x40)) = (float)((float10)*param_2 - (float10)fVar1);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_2[1] - (float10)fVar2);
  (*(float *)(gen_frame + 0x48)) = (float)((float10)param_2[2] - (float10)fVar3);
  fVar1 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x104) + (float10)param_2[0x14])));
  (*(float *)(gen_frame + 0xdc)) = fVar1;
  pfVar20 = &(*(float *)(gen_frame + 0xdc));
  if (!((float10)0 < (float10)fVar1)) {
    pfVar20 = &(*(float *)(gen_frame + 0xb8));
  }
  fVar1 = *pfVar20;
  (*(float *)(gen_frame + 0xb8)) = fVar1;
  (*(float *)(gen_frame + 0x5c)) = REFG(float, 0x1090708);
  bVar19 = F_00c26b40(&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x40)),fVar1,&(*(float *)(gen_frame + 0x5c)))
  ;
  if (bVar19 != 0) {
    fVar22 = (float10)(*(float *)(gen_frame + 0x5c));
    (*(float *)(gen_frame + 0xa0)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xa4)) = (float)((float10)(*(float *)(gen_frame + 0x94)) * fVar22);
    (*(float *)(gen_frame + 0xdc)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = (float)((float10)(*(float *)(gen_frame + 0x98)) * fVar22);
    fVar1 = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x90))) + (float10)(*(float *)(gen_frame + 0x60)))));
    (*(float *)(gen_frame + 0xa0)) = fVar1;
    fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x94)) * fVar22) + (float10)(*(float *)(gen_frame + 0x64)))));
    (*(float *)(gen_frame + 0xa4)) = fVar2;
    fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x98)) * fVar22) + (float10)(*(float *)(gen_frame + 0x68)))));
    (*(float *)(gen_frame + 0xa8)) = fVar3;
    (*(float *)(gen_frame + 0xc0)) = (float)((float10)(*(float *)(gen_frame + 0x10)) * fVar22);
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) * fVar22);
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) * fVar22);
    (*(float *)(gen_frame + 0xc0)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x10)) * fVar22) + (float10)(*(float *)(gen_frame + 0x0)))));
    (*(float *)(gen_frame + 0xc4)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) * fVar22) + (float10)(*(float *)(gen_frame + 0x4)))));
    (*(float *)(gen_frame + 0xc8)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x18)) * fVar22) + (float10)(*(float *)(gen_frame + 0x8)))));
    (*(float *)(gen_frame + 0x70)) = (float)((float10)(*(float *)(gen_frame + 0x40)) * fVar22);
    (*(float *)(gen_frame + 0x74)) = (float)((float10)(*(float *)(gen_frame + 0x44)) * fVar22);
    (*(float *)(gen_frame + 0x78)) = (float)(fVar22 * (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x70)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x40)) * fVar22) + (float10)(*(float *)(gen_frame + 0x30)))));
    (*(float *)(gen_frame + 0x74)) = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x44)) * fVar22) + (float10)(*(float *)(gen_frame + 0x34)))));
    (*(float *)(gen_frame + 0x78)) = ((float)GEN_TOF(((float10)(float)(fVar22 * (float10)(*(float *)(gen_frame + 0x48))) + (float10)(*(float *)(gen_frame + 0x38)))));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    (*(float *)(gen_frame + 0x24)) = fVar2;
    (*(float *)(gen_frame + 0x28)) = fVar3;
    F_00c262e0(&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0xc0)),&(*(float *)(gen_frame + 0x70)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0xdc)));
    (*(float *)(gen_frame + 0x60)) = (float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x64)) = (float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x68)) = (float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x28)));
    fVar22 = (float10)(float)((float10)(*(float *)(gen_frame + 0x70)) - (float10)(*(float *)(gen_frame + 0x20)));
    fVar23 = (float10)(float)((float10)(*(float *)(gen_frame + 0x74)) - (float10)(*(float *)(gen_frame + 0x24)));
    fVar24 = (float10)(float)((float10)(*(float *)(gen_frame + 0x78)) - (float10)(*(float *)(gen_frame + 0x28)));
    fVar1 = ((float)GEN_TOF((fVar24 * fVar24 + (fVar23 * fVar23 + fVar22 * fVar22))));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    fVar1 = ((float)GEN_TOF(SQRT((float10)fVar1)));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    (*(float *)(gen_frame + 0x8c)) = fVar1;
    bVar21 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)0);
    if (bVar21 != (bVar21 || (float10)fVar1 == (float10)0)) {
      (*(float *)(gen_frame + 0x8c)) = REFG(float, 0x1094884);
      (*(float *)(gen_frame + 0x60)) = 0.0;
      (*(float *)(gen_frame + 0x64)) = REFG(float, 0x1094884);
      (*(float *)(gen_frame + 0x68)) = 0.0;
    }
    fVar1 = *param_3;
    (*(float *)(gen_frame + 0xbc)) = (float)((float10)1 / (float10)(*(float *)(gen_frame + 0x8c)));
    fVar24 = (float10)(float)((float10)1 / (float10)(*(float *)(gen_frame + 0x8c)));
    fVar22 = (float10)(*(float *)(gen_frame + 0x60));
    (*(float *)(gen_frame + 0xbc)) = fVar1;
    (*(float *)(gen_frame + 0x60)) = (float)(fVar24 * fVar22);
    fVar25 = (float10)(*(float *)(gen_frame + 0x64));
    (*(float *)(gen_frame + 0x64)) = (float)(fVar25 * fVar24);
    fVar23 = (float10)(*(float *)(gen_frame + 0x68));
    (*(float *)(gen_frame + 0x68)) = (float)(fVar24 * fVar23);
    fVar22 = (float10)(float)(fVar24 * fVar22);
    fVar25 = (float10)(float)(fVar25 * fVar24);
    fVar23 = (float10)(float)(fVar24 * fVar23);
    fVar2 = ((float)GEN_TOF((fVar23 * (float10)(*(float *)(gen_frame + 0x48)) +
                   ((float10)(*(float *)(gen_frame + 0x40)) * fVar22 + (float10)(*(float *)(gen_frame + 0x44)) * fVar25))));
    (*(float *)(gen_frame + 0x88)) = fVar2;
    fVar24 = (float10)fVar2;
    (*(float *)(gen_frame + 0xa0)) = (float)(fVar24 * fVar22);
    (*(float *)(gen_frame + 0xa4)) = (float)(fVar25 * fVar24);
    (*(float *)(gen_frame + 0xa8)) = (float)(fVar23 * fVar24);
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x40)) - (float10)(float)(fVar24 * fVar22))));
    (*(float *)(gen_frame + 0x30)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x44)) - (float10)(float)(fVar25 * fVar24))));
    (*(float *)(gen_frame + 0x34)) = fVar4;
    fVar5 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x48)) - (float10)(float)(fVar23 * fVar24))));
    (*(float *)(gen_frame + 0x38)) = fVar5;
    if (fVar2 <= 0.0) {
      (*(float *)(gen_frame + 0xa0)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x88)) = 0.0;
      fVar24 = (float10)0.0;
      (*(float *)(gen_frame + 0xa4)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0xa8)) = REFG(float, 0x1375ac8);
    }
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x10)) - (float10)(*(float *)(gen_frame + 0x90)));
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    (*(float *)(gen_frame + 0xc4)) = (float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xc8)) = (float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x98)));
    fVar26 = (float10)(*(float *)(gen_frame + 0xdc));
    fVar2 = (float)(fVar26 * (float10)fVar2);
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x14)) - (float10)(*(float *)(gen_frame + 0x94))) * fVar26)));
    (*(float *)(gen_frame + 0xc4)) = fVar6;
    fVar7 = ((float)GEN_TOF((fVar26 * (float10)(float)((float10)(*(float *)(gen_frame + 0x18)) - (float10)(*(float *)(gen_frame + 0x98))))));
    (*(float *)(gen_frame + 0xc8)) = fVar7;
    fVar2 = (float)((float10)(*(float *)(gen_frame + 0x90)) + (float10)fVar2);
    (*(float *)(gen_frame + 0xc0)) = fVar2;
    fVar6 = (float)((float10)fVar6 + (float10)(*(float *)(gen_frame + 0x94)));
    (*(float *)(gen_frame + 0xc4)) = fVar6;
    fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x98)));
    (*(float *)(gen_frame + 0xc8)) = fVar7;
    fVar26 = (float10)fVar2;
    fVar2 = ((float)GEN_TOF(((float10)fVar7 * fVar23 + ((float10)fVar6 * fVar25 + fVar26 * fVar22))));
    (*(float *)(gen_frame + 0xdc)) = fVar2;
    fVar27 = (float10)fVar2;
    fVar2 = (float)(fVar27 * fVar22);
    (*(float *)(gen_frame + 0x10)) = fVar2;
    fVar8 = (float)(fVar25 * fVar27);
    (*(float *)(gen_frame + 0x14)) = fVar8;
    fVar9 = (float)(fVar23 * fVar27);
    (*(float *)(gen_frame + 0x18)) = fVar9;
    fVar10 = (float)(fVar26 - (float10)fVar2);
    (*(float *)(gen_frame + 0x20)) = fVar10;
    (*(float *)(gen_frame + 0x24)) = (float)((float10)fVar6 - (float10)fVar8);
    (*(float *)(gen_frame + 0x28)) = (float)((float10)fVar7 - (float10)fVar9);
    fVar10 = (float)((float10)fVar10 - (float10)fVar3);
    (*(float *)(gen_frame + 0x90)) = fVar10;
    fVar6 = ((float)GEN_TOF(((float10)(float)((float10)fVar6 - (float10)fVar8) - (float10)fVar4)));
    (*(float *)(gen_frame + 0x94)) = fVar6;
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar9) - (float10)fVar5)));
    (*(float *)(gen_frame + 0x98)) = fVar7;
    fVar26 = (float10)fVar1;
    fVar1 = (float)(fVar26 * (float10)fVar10);
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar6 = (float)((float10)fVar6 * fVar26);
    (*(float *)(gen_frame + 0x94)) = fVar6;
    fVar7 = (float)(fVar26 * (float10)fVar7);
    (*(float *)(gen_frame + 0x98)) = fVar7;
    fVar1 = (float)((float10)fVar1 + (float10)fVar3);
    (*(float *)(gen_frame + 0x30)) = fVar1;
    fVar3 = (float)((float10)fVar6 + (float10)fVar4);
    (*(float *)(gen_frame + 0x34)) = fVar3;
    fVar4 = (float)((float10)fVar7 + (float10)fVar5);
    (*(float *)(gen_frame + 0x38)) = fVar4;
    if (fVar24 < fVar27) {
      (*(float *)(gen_frame + 0xa0)) = fVar2;
      (*(float *)(gen_frame + 0xa4)) = fVar8;
      (*(float *)(gen_frame + 0xa8)) = fVar9;
    }
    pfVar20 = &(*(float *)(gen_frame + 0xdc));
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0xa0)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0xa4)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0xa8)));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    fVar24 = (float10)(*(float *)(gen_frame + 0xb8));
    (*(float *)(gen_frame + 0xb8)) = 0.0;
    (*(float *)(gen_frame + 0xdc)) = (float)(fVar24 - (float10)(*(float *)(gen_frame + 0x8c)));
    if (!((float10)0 < (float10)(float)(fVar24 - (float10)(*(float *)(gen_frame + 0x8c))))) {
      pfVar20 = &(*(float *)(gen_frame + 0xb8));
    }
    fVar4 = param_3[2];
    fVar5 = *pfVar20;
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)fVar4 * (float10)fVar5);
    fVar24 = (float10)(float)((float10)fVar4 * (float10)fVar5);
    (*(float *)(gen_frame + 0x60)) = (float)(fVar24 * fVar22);
    (*(float *)(gen_frame + 0x64)) = (float)(fVar25 * fVar24);
    (*(float *)(gen_frame + 0x68)) = (float)(fVar23 * fVar24);
    (*(float *)(gen_frame + 0xdc)) = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x5c)));
    fVar26 = (float10)(float)((float10)1 - (float10)(*(float *)(gen_frame + 0x5c)));
    fVar27 = (float10)fVar1;
    fVar1 = (float)(fVar27 * fVar26);
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar28 = (float10)fVar2;
    fVar2 = (float)(fVar28 * fVar26);
    (*(float *)(gen_frame + 0x94)) = fVar2;
    fVar29 = (float10)fVar3;
    fVar3 = (float)(fVar29 * fVar26);
    (*(float *)(gen_frame + 0x98)) = fVar3;
    fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x90)) = fVar1;
    fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x94)) = fVar2;
    fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x98)) = fVar3;
    *param_2 = ((float)GEN_TOF(((float10)fVar1 + (float10)(float)(fVar24 * fVar22))));
    param_2[1] = ((float)GEN_TOF(((float10)fVar2 + (float10)(float)(fVar25 * fVar24))));
    param_2[2] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)(fVar23 * fVar24))));
    fVar1 = (float)(fVar27 - (float10)(*(float *)(gen_frame + 0x40)));
    (*(float *)(gen_frame + 0x20)) = fVar1;
    fVar2 = (float)(fVar28 - (float10)(*(float *)(gen_frame + 0x44)));
    (*(float *)(gen_frame + 0x24)) = fVar2;
    fVar3 = (float)(fVar29 - (float10)(*(float *)(gen_frame + 0x48)));
    (*(float *)(gen_frame + 0x28)) = fVar3;
    param_2[8] = (float)((float10)fVar1 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar2 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar3 + (float10)param_2[10]);
    fVar1 = param_3[1];
    (*(float *)(gen_frame + 0xdc)) = fVar1;
    fVar22 = (float10)fVar1;
    param_2[8] = (float)(fVar22 * (float10)param_2[8]);
    param_2[9] = (float)(fVar22 * (float10)param_2[9]);
    param_2[10] = (float)(fVar22 * (float10)param_2[10]);
    return 1;
  }
  return 0;
}

/* ref: FUN_00bf86b0 */
byte F_00bf86b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, float gen_a7)
{
  GEN_ENTER(0xbf86b0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x150];
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
  float fVar22;
  float fVar23;
  byte bVar24;
  float * pfVar25;
  bool bVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 fVar31;
  float10 fVar32;
  float10 fVar33;
  
  fVar2 = *(float *)(param_1 + 0xc0);
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar27 = (float10)fVar2;
  fVar28 = (float10)param_7;
  fVar2 = (float)(fVar28 * fVar27);
  (*(float *)(gen_frame + 0xb0)) = fVar2;
  fVar3 = *(float *)(param_1 + 0xc4);
  (*(float *)(gen_frame + 0x13c)) = fVar3;
  fVar29 = (float10)fVar3;
  fVar3 = (float)(fVar29 * fVar28);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar4 = *(float *)(param_1 + 200);
  (*(float *)(gen_frame + 0x13c)) = fVar4;
  fVar30 = (float10)fVar4;
  fVar4 = (float)(fVar30 * fVar28);
  (*(float *)(gen_frame + 0xb8)) = fVar4;
  fVar5 = *(float *)(param_1 + 0xa0);
  (*(float *)(gen_frame + 0x13c)) = fVar5;
  fVar31 = (float10)fVar5;
  fVar6 = (float)(fVar31 + (float10)fVar2);
  (*(float *)(gen_frame + 0xb0)) = fVar6;
  fVar2 = *(float *)(param_1 + 0xa4);
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar32 = (float10)fVar2;
  fVar7 = (float)(fVar32 + (float10)fVar3);
  (*(float *)(gen_frame + 0xb4)) = fVar7;
  fVar8 = *(float *)(param_1 + 0xa8);
  (*(float *)(gen_frame + 0x7c)) = fVar8;
  fVar9 = (float)((float10)fVar4 + (float10)fVar8);
  (*(float *)(gen_frame + 0xb8)) = fVar9;
  fVar10 = *(float *)(param_1 + 0xd0);
  (*(float *)(gen_frame + 0x134)) = fVar10;
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar10 * fVar28);
  fVar11 = *(float *)(param_1 + 0xd4);
  (*(float *)(gen_frame + 0xcc)) = fVar11;
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar11 * fVar28);
  fVar2 = *(float *)(param_1 + 0xd8);
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar33 = (float10)fVar2;
  fVar2 = (float)(fVar33 * fVar28);
  (*(float *)(gen_frame + 0xf8)) = fVar2;
  fVar12 = *(float *)(param_1 + 0xb0);
  (*(float *)(gen_frame + 0x10c)) = fVar12;
  fVar13 = ((float)GEN_TOF(((float10)fVar12 + (float10)(float)((float10)fVar10 * fVar28))));
  (*(float *)(gen_frame + 0xf0)) = fVar13;
  fVar14 = *(float *)(param_1 + 0xb4);
  (*(float *)(gen_frame + 0x108)) = fVar14;
  fVar15 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar28) + (float10)fVar14)));
  (*(float *)(gen_frame + 0xf4)) = fVar15;
  fVar16 = *(float *)(param_1 + 0xb8);
  (*(float *)(gen_frame + 0x13c)) = fVar16;
  fVar17 = (float)((float10)fVar2 + (float10)fVar16);
  (*(float *)(gen_frame + 0xf8)) = fVar17;
  fVar28 = (float10)param_8;
  fVar18 = (float)(fVar28 * fVar27);
  (*(float *)(gen_frame + 0x110)) = fVar18;
  fVar19 = (float)(fVar28 * fVar29);
  (*(float *)(gen_frame + 0x114)) = fVar19;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x40)) = fVar2;
  fVar3 = param_2[5];
  (*(float *)(gen_frame + 0x44)) = fVar3;
  fVar20 = (float)(fVar28 * fVar30);
  (*(float *)(gen_frame + 0x118)) = fVar20;
  fVar4 = param_2[6];
  (*(float *)(gen_frame + 0x48)) = fVar4;
  fVar5 = param_3[4];
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar1 = param_3[5];
  fVar21 = (float)(fVar31 + (float10)fVar18);
  (*(float *)(gen_frame + 0x110)) = fVar21;
  (*(float *)(gen_frame + 0x64)) = fVar1;
  fVar18 = param_3[6];
  (*(float *)(gen_frame + 0x68)) = fVar18;
  (*(float *)(gen_frame + 0x10)) = fVar6;
  fVar19 = (float)(fVar32 + (float10)fVar19);
  (*(float *)(gen_frame + 0x114)) = fVar19;
  (*(float *)(gen_frame + 0x14)) = fVar7;
  (*(float *)(gen_frame + 0x18)) = fVar9;
  fVar8 = (float)((float10)fVar20 + (float10)fVar8);
  (*(float *)(gen_frame + 0x118)) = fVar8;
  (*(float *)(gen_frame + 0x30)) = fVar13;
  (*(float *)(gen_frame + 0x34)) = fVar15;
  (*(float *)(gen_frame + 0x38)) = fVar17;
  (*(float *)(gen_frame + 0x50)) = (float)((float10)fVar10 * fVar28);
  (*(float *)(gen_frame + 0x54)) = (float)((float10)fVar11 * fVar28);
  fVar20 = (float)(fVar33 * fVar28);
  (*(float *)(gen_frame + 0x58)) = fVar20;
  fVar10 = ((float)GEN_TOF(((float10)fVar12 + (float10)(float)((float10)fVar10 * fVar28))));
  (*(float *)(gen_frame + 0x50)) = fVar10;
  fVar11 = ((float)GEN_TOF(((float10)(float)((float10)fVar11 * fVar28) + (float10)fVar14)));
  (*(float *)(gen_frame + 0x54)) = fVar11;
  fVar12 = (float)((float10)fVar20 + (float10)fVar16);
  (*(float *)(gen_frame + 0x58)) = fVar12;
  (*(float *)(gen_frame + 0x20)) = (float)((float10)*param_2 - (float10)fVar2);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_2[1] - (float10)fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)((float10)param_2[2] - (float10)fVar4);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)*param_3 - (float10)fVar5);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_3[1] - (float10)fVar1);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_3[2] - (float10)fVar18);
  (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar21 - (float10)fVar6);
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar19 - (float10)fVar7);
  (*(float *)(gen_frame + 0x108)) = 0.0;
  pfVar25 = &(*(float *)(gen_frame + 0x13c));
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar8 - (float10)fVar9);
  (*(float *)(gen_frame + 0xd0)) = (float)((float10)fVar10 - (float10)fVar13);
  (*(float *)(gen_frame + 0xd4)) = (float)((float10)fVar11 - (float10)fVar15);
  (*(float *)(gen_frame + 0xd8)) = (float)((float10)fVar12 - (float10)fVar17);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x104) + (float10)param_4)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  if (!((float10)0 < (float10)fVar2)) {
    pfVar25 = &(*(float *)(gen_frame + 0x108));
  }
  fVar2 = *pfVar25;
  (*(float *)(gen_frame + 0x108)) = fVar2;
  (*(float *)(gen_frame + 0x7c)) = REFG(float, 0x1090708);
  bVar24 = F_00c257a0(&(*(float *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x60)),&(*(float *)(gen_frame + 0x10)),&(*(float *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x20)),&(*(float *)(gen_frame + 0x0)),&(*(float *)(gen_frame + 0x120)),
                        &(*(float *)(gen_frame + 0xd0)),fVar2,&(*(float *)(gen_frame + 0x7c)));
  if (bVar24 == 0) {
    return 0;
  }
  fVar27 = (float10)(*(float *)(gen_frame + 0x7c));
  (*(float *)(gen_frame + 0x50)) = (float)(fVar27 * (float10)(*(float *)(gen_frame + 0x20)));
  (*(float *)(gen_frame + 0x54)) = (float)((float10)(*(float *)(gen_frame + 0x24)) * fVar27);
  (*(float *)(gen_frame + 0x58)) = (float)((float10)(*(float *)(gen_frame + 0x28)) * fVar27);
  fVar2 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)(*(float *)(gen_frame + 0x20))) + (float10)(*(float *)(gen_frame + 0x40)))));
  (*(float *)(gen_frame + 0x50)) = fVar2;
  (*(float *)(gen_frame + 0xe0)) = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x24)) * fVar27) + (float10)(*(float *)(gen_frame + 0x44)))));
  (*(float *)(gen_frame + 0x54)) = fVar2;
  (*(float *)(gen_frame + 0xe4)) = fVar2;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x28)) * fVar27) + (float10)(*(float *)(gen_frame + 0x48)))));
  (*(float *)(gen_frame + 0x58)) = fVar2;
  (*(float *)(gen_frame + 0xe8)) = fVar2;
  (*(float *)(gen_frame + 0x80)) = (float)((float10)(*(float *)(gen_frame + 0x0)) * fVar27);
  (*(float *)(gen_frame + 0x84)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar27);
  (*(float *)(gen_frame + 0x88)) = (float)((float10)(*(float *)(gen_frame + 0x8)) * fVar27);
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x0)) * fVar27) + (float10)(*(float *)(gen_frame + 0x60)))));
  (*(float *)(gen_frame + 0x80)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar27) + (float10)(*(float *)(gen_frame + 0x64)))));
  (*(float *)(gen_frame + 0x84)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x8)) * fVar27) + (float10)(*(float *)(gen_frame + 0x68)))));
  (*(float *)(gen_frame + 0x88)) = fVar4;
  (*(float *)(gen_frame + 0x110)) = (float)((float10)(*(float *)(gen_frame + 0x120)) * fVar27);
  (*(float *)(gen_frame + 0x114)) = (float)((float10)(*(float *)(gen_frame + 0x124)) * fVar27);
  (*(float *)(gen_frame + 0x118)) = (float)((float10)(*(float *)(gen_frame + 0x128)) * fVar27);
  fVar5 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x120)) * fVar27) + (float10)(*(float *)(gen_frame + 0x10)))));
  (*(float *)(gen_frame + 0x110)) = fVar5;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x124)) * fVar27) + (float10)(*(float *)(gen_frame + 0x14)))));
  (*(float *)(gen_frame + 0x114)) = fVar1;
  fVar18 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x128)) * fVar27) + (float10)(*(float *)(gen_frame + 0x18)))));
  (*(float *)(gen_frame + 0x118)) = fVar18;
  (*(float *)(gen_frame + 0x90)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) * fVar27);
  (*(float *)(gen_frame + 0x94)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar27);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar27 * (float10)(*(float *)(gen_frame + 0xd8)));
  fVar6 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd0)) * fVar27) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x90)) = fVar6;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) * fVar27) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x94)) = fVar7;
  fVar8 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)(*(float *)(gen_frame + 0xd8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0x98)) = fVar8;
  (*(float *)(gen_frame + 0xf0)) = fVar2;
  (*(float *)(gen_frame + 0xf4)) = fVar3;
  (*(float *)(gen_frame + 0xf8)) = fVar4;
  (*(float *)(gen_frame + 0xa0)) = fVar5;
  (*(float *)(gen_frame + 0xa4)) = fVar1;
  (*(float *)(gen_frame + 0xa8)) = fVar18;
  (*(float *)(gen_frame + 0xb0)) = fVar6;
  (*(float *)(gen_frame + 0xb4)) = fVar7;
  (*(float *)(gen_frame + 0xb8)) = fVar8;
  F_00c26450(&(*(float *)(gen_frame + 0xe0)),&(*(float *)(gen_frame + 0xa0)),&(*(float *)(gen_frame + 0x110)),&(*(float *)(gen_frame + 0x90)),&(*(float *)(gen_frame + 0x13c)),&(*(float *)(gen_frame + 0x138)));
  (*(float *)(gen_frame + 0x10c)) = REFG(float, 0x1087f04);
  if ((char)param_6 != '\0') {
    (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0x13c));
    (*(float *)(gen_frame + 0xcc)) = REFG(float, 0x10ac168);
    pfVar25 = &(*(float *)(gen_frame + 0x10c));
    if (!(*(double *)&REFG(undefined, 0x10920a8) < (double)(*(float *)(gen_frame + 0x13c)))) {
      pfVar25 = &(*(float *)(gen_frame + 0xcc));
    }
    (*(float *)(gen_frame + 0x10c)) = (float)((float10)1 / (float10)*pfVar25);
  }
  (*(float *)(gen_frame + 0xb0)) = (float)((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0xb4)) = (float)((float10)(*(float *)(gen_frame + 0x114)) - (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0xb8)) = (float)((float10)(*(float *)(gen_frame + 0x118)) - (float10)(*(float *)(gen_frame + 0x98)));
  fVar27 = (float10)(float)((float10)(*(float *)(gen_frame + 0x114)) - (float10)(*(float *)(gen_frame + 0x94)));
  fVar28 = (float10)(float)((float10)(*(float *)(gen_frame + 0x110)) - (float10)(*(float *)(gen_frame + 0x90)));
  fVar29 = (float10)(float)((float10)(*(float *)(gen_frame + 0x118)) - (float10)(*(float *)(gen_frame + 0x98)));
  fVar2 = ((float)GEN_TOF((fVar29 * fVar29 + (fVar28 * fVar28 + fVar27 * fVar27))));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  fVar2 = ((float)GEN_TOF(SQRT((float10)fVar2)));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  (*(float *)(gen_frame + 0x134)) = fVar2;
  fVar27 = (float10)fVar2;
  bVar26 = GEN_ISNAN(fVar27) || GEN_ISNAN((float10)0);
  if (bVar26 != (bVar26 || fVar27 == (float10)0)) {
    (*(float *)(gen_frame + 0x134)) = REFG(float, 0x1094884);
    fVar27 = (float10)REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xb0)) = 0.0;
    (*(float *)(gen_frame + 0xb4)) = REFG(float, 0x1094884);
    (*(float *)(gen_frame + 0xb8)) = 0.0;
  }
  fVar2 = *param_5;
  (*(float *)(gen_frame + 0x13c)) = (float)((float10)1 / fVar27);
  fVar29 = (float10)(float)((float10)1 / fVar27);
  fVar28 = (float10)(*(float *)(gen_frame + 0xb0));
  (*(float *)(gen_frame + 0x13c)) = fVar2;
  (*(float *)(gen_frame + 0xb0)) = (float)(fVar29 * fVar28);
  fVar3 = (float)((float10)(*(float *)(gen_frame + 0xb4)) * fVar29);
  (*(float *)(gen_frame + 0xb4)) = fVar3;
  fVar4 = (float)(fVar29 * (float10)(*(float *)(gen_frame + 0xb8)));
  (*(float *)(gen_frame + 0xb8)) = fVar4;
  fVar28 = (float10)(float)(fVar29 * fVar28);
  fVar29 = (float10)fVar3;
  fVar30 = (float10)fVar4;
  fVar5 = ((float)GEN_TOF((fVar30 * (float10)(*(float *)(gen_frame + 0x8)) +
                 (fVar29 * (float10)(*(float *)(gen_frame + 0x4)) + (float10)(*(float *)(gen_frame + 0x0)) * fVar28))));
  (*(float *)(gen_frame + 0x134)) = fVar5;
  fVar31 = (float10)fVar5;
  (*(float *)(gen_frame + 0x90)) = (float)(fVar31 * fVar28);
  (*(float *)(gen_frame + 0x94)) = (float)(fVar29 * fVar31);
  (*(float *)(gen_frame + 0x98)) = (float)(fVar30 * fVar31);
  fVar1 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x0)) - (float10)(float)(fVar31 * fVar28))));
  (*(float *)(gen_frame + 0x110)) = fVar1;
  fVar18 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x4)) - (float10)(float)(fVar29 * fVar31))));
  (*(float *)(gen_frame + 0x114)) = fVar18;
  fVar6 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x8)) - (float10)(float)(fVar30 * fVar31))));
  (*(float *)(gen_frame + 0x118)) = fVar6;
  if (fVar5 <= 0.0) {
    (*(float *)(gen_frame + 0x134)) = 0.0;
    fVar31 = (float10)0.0;
    (*(float *)(gen_frame + 0x90)) = REFG(float, 0x1375ac0);
    (*(float *)(gen_frame + 0x94)) = REFG(float, 0x1375ac4);
    (*(float *)(gen_frame + 0x98)) = REFG(float, 0x1375ac8);
  }
  (*(float *)(gen_frame + 0xf0)) = (float)((float10)(*(float *)(gen_frame + 0xd0)) - (float10)(*(float *)(gen_frame + 0x120)));
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)(*(float *)(gen_frame + 0xd4)) - (float10)(*(float *)(gen_frame + 0x124)));
  (*(float *)(gen_frame + 0xf8)) = (float)((float10)(*(float *)(gen_frame + 0xd8)) - (float10)(*(float *)(gen_frame + 0x128)));
  fVar32 = (float10)(*(float *)(gen_frame + 0x138));
  fVar5 = ((float)GEN_TOF((fVar32 * (float10)(float)((float10)(*(float *)(gen_frame + 0xd0)) - (float10)(*(float *)(gen_frame + 0x120))))));
  (*(float *)(gen_frame + 0xf0)) = fVar5;
  fVar7 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0xd4)) - (float10)(*(float *)(gen_frame + 0x124))) * fVar32)));
  (*(float *)(gen_frame + 0xf4)) = fVar7;
  fVar8 = ((float)GEN_TOF((fVar32 * (float10)(float)((float10)(*(float *)(gen_frame + 0xd8)) - (float10)(*(float *)(gen_frame + 0x128))))));
  (*(float *)(gen_frame + 0xf8)) = fVar8;
  fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x120)));
  (*(float *)(gen_frame + 0xf0)) = fVar5;
  fVar7 = (float)((float10)fVar7 + (float10)(*(float *)(gen_frame + 0x124)));
  (*(float *)(gen_frame + 0xf4)) = fVar7;
  fVar8 = (float)((float10)fVar8 + (float10)(*(float *)(gen_frame + 0x128)));
  (*(float *)(gen_frame + 0xf8)) = fVar8;
  fVar9 = ((float)GEN_TOF(((float10)fVar8 * fVar30 + ((float10)fVar5 * fVar28 + (float10)fVar7 * fVar29))));
  (*(float *)(gen_frame + 0xcc)) = fVar9;
  fVar32 = (float10)fVar9;
  fVar10 = (float)(fVar32 * fVar28);
  (*(float *)(gen_frame + 0xd0)) = fVar10;
  fVar11 = (float)(fVar29 * fVar32);
  (*(float *)(gen_frame + 0xd4)) = fVar11;
  fVar12 = (float)(fVar30 * fVar32);
  (*(float *)(gen_frame + 0xd8)) = fVar12;
  fVar5 = (float)((float10)fVar5 - (float10)fVar10);
  (*(float *)(gen_frame + 0x60)) = fVar5;
  fVar7 = (float)((float10)fVar7 - (float10)fVar11);
  (*(float *)(gen_frame + 0x64)) = fVar7;
  fVar8 = (float)((float10)fVar8 - (float10)fVar12);
  (*(float *)(gen_frame + 0x68)) = fVar8;
  if (fVar31 < fVar32) {
    (*(float *)(gen_frame + 0x90)) = fVar10;
    (*(float *)(gen_frame + 0x94)) = fVar11;
    (*(float *)(gen_frame + 0x98)) = fVar12;
  }
  (*(float *)(gen_frame + 0x138)) = 0.0;
  fVar31 = (float10)fVar1;
  pfVar25 = &(*(float *)(gen_frame + 0x13c));
  fVar1 = (float)((float10)fVar5 - fVar31);
  (*(float *)(gen_frame + 0x120)) = fVar1;
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar7 - (float10)fVar18);
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar8 - (float10)fVar6);
  fVar32 = (float10)fVar2;
  fVar2 = (float)(fVar32 * (float10)fVar1);
  (*(float *)(gen_frame + 0x120)) = fVar2;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar7 - (float10)fVar18) * fVar32)));
  (*(float *)(gen_frame + 0x124)) = fVar1;
  fVar13 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar6) * fVar32)));
  (*(float *)(gen_frame + 0x128)) = fVar13;
  fVar2 = (float)((float10)fVar2 + fVar31);
  (*(float *)(gen_frame + 0x110)) = fVar2;
  fVar1 = (float)((float10)fVar1 + (float10)fVar18);
  (*(float *)(gen_frame + 0x114)) = fVar1;
  fVar18 = (float)((float10)fVar13 + (float10)fVar6);
  (*(float *)(gen_frame + 0x118)) = fVar18;
  fVar2 = (float)((float10)fVar2 + (float10)(*(float *)(gen_frame + 0x90)));
  (*(float *)(gen_frame + 0x10)) = fVar2;
  fVar1 = (float)((float10)fVar1 + (float10)(*(float *)(gen_frame + 0x94)));
  (*(float *)(gen_frame + 0x14)) = fVar1;
  fVar18 = (float)((float10)fVar18 + (float10)(*(float *)(gen_frame + 0x98)));
  (*(float *)(gen_frame + 0x18)) = fVar18;
  (*(float *)(gen_frame + 0x13c)) = (float)((float10)(*(float *)(gen_frame + 0x108)) - fVar27);
  if (!((float10)0 < (float10)(float)((float10)(*(float *)(gen_frame + 0x108)) - fVar27))) {
    pfVar25 = &(*(float *)(gen_frame + 0x138));
  }
  fVar6 = ((float)GEN_TOF((((float10)param_5[2] * (float10)*pfVar25) * (float10)(*(float *)(gen_frame + 0x10c)))));
  (*(float *)(gen_frame + 0x138)) = fVar6;
  fVar27 = (float10)fVar6;
  fVar6 = (float)(fVar27 * fVar28);
  (*(float *)(gen_frame + 0x40)) = fVar6;
  fVar13 = (float)(fVar29 * fVar27);
  (*(float *)(gen_frame + 0x44)) = fVar13;
  fVar14 = (float)(fVar27 * fVar30);
  (*(float *)(gen_frame + 0x48)) = fVar14;
  fVar15 = (float)((float10)1 - (float10)(*(float *)(gen_frame + 0x7c)));
  (*(float *)(gen_frame + 0x13c)) = fVar15;
  (*(float *)(gen_frame + 0x138)) = fVar15;
  fVar27 = (float10)fVar15;
  (*(float *)(gen_frame + 0xf0)) = (float)(fVar27 * (float10)fVar2);
  (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar1 * fVar27);
  (*(float *)(gen_frame + 0xf8)) = (float)(fVar27 * (float10)fVar18);
  fVar16 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar2) + (float10)(*(float *)(gen_frame + 0x80)))));
  (*(float *)(gen_frame + 0xf0)) = fVar16;
  fVar17 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 * fVar27) + (float10)(*(float *)(gen_frame + 0x84)))));
  (*(float *)(gen_frame + 0xf4)) = fVar17;
  fVar19 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar18) + (float10)(*(float *)(gen_frame + 0x88)))));
  (*(float *)(gen_frame + 0xf8)) = fVar19;
  fVar16 = (float)((float10)fVar6 + (float10)fVar16);
  (*(float *)(gen_frame + 0xf0)) = fVar16;
  fVar17 = (float)((float10)fVar13 + (float10)fVar17);
  (*(float *)(gen_frame + 0xf4)) = fVar17;
  fVar19 = (float)((float10)fVar14 + (float10)fVar19);
  (*(float *)(gen_frame + 0xf8)) = fVar19;
  if ((char)param_6 == '\0') {
    fVar20 = ((float)GEN_TOF(((float10)fVar4 * (float10)(*(float *)(gen_frame + 0x28)) +
                    (fVar28 * (float10)(*(float *)(gen_frame + 0x20)) + (float10)(*(float *)(gen_frame + 0x24)) * fVar29))));
    (*(float *)(gen_frame + 0x134)) = fVar20;
    fVar27 = (float10)fVar20;
    (*(float *)(gen_frame + 0x80)) = (float)(fVar27 * fVar28);
    (*(float *)(gen_frame + 0x84)) = (float)((float10)fVar3 * fVar27);
    (*(float *)(gen_frame + 0x88)) = (float)((float10)fVar4 * fVar27);
    fVar21 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x20)) - (float10)(float)(fVar27 * fVar28))));
    (*(float *)(gen_frame + 0x120)) = fVar21;
    fVar3 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x24)) - (float10)(float)((float10)fVar3 * fVar27))));
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)(*(float *)(gen_frame + 0x28)) - (float10)(float)((float10)fVar4 * fVar27))));
    (*(float *)(gen_frame + 0x128)) = fVar4;
    if (fVar20 <= 0.0) {
      (*(float *)(gen_frame + 0x134)) = 0.0;
      fVar27 = (float10)0.0;
      (*(float *)(gen_frame + 0x80)) = REFG(float, 0x1375ac0);
      (*(float *)(gen_frame + 0x84)) = REFG(float, 0x1375ac4);
      (*(float *)(gen_frame + 0x88)) = REFG(float, 0x1375ac8);
    }
    if (fVar27 < (float10)fVar9) {
      (*(float *)(gen_frame + 0x80)) = fVar10;
      (*(float *)(gen_frame + 0x84)) = fVar11;
      (*(float *)(gen_frame + 0x88)) = fVar12;
    }
    fVar9 = param_2[0x15];
    fVar27 = (float10)fVar21;
    (*(float *)(gen_frame + 0x10c)) = fVar9;
    fVar10 = param_3[0x15];
    (*(float *)(gen_frame + 0x108)) = fVar10;
    fVar5 = (float)((float10)fVar5 - fVar27);
    (*(float *)(gen_frame + 0x110)) = fVar5;
    fVar28 = (float10)fVar3;
    fVar3 = (float)((float10)fVar7 - fVar28);
    (*(float *)(gen_frame + 0x114)) = fVar3;
    (*(float *)(gen_frame + 0x118)) = (float)((float10)fVar8 - (float10)fVar4);
    fVar5 = (float)((float10)fVar5 * fVar32);
    (*(float *)(gen_frame + 0x110)) = fVar5;
    fVar3 = (float)((float10)fVar3 * fVar32);
    (*(float *)(gen_frame + 0x114)) = fVar3;
    fVar7 = ((float)GEN_TOF(((float10)(float)((float10)fVar8 - (float10)fVar4) * fVar32)));
    (*(float *)(gen_frame + 0x118)) = fVar7;
    fVar5 = (float)(fVar27 + (float10)fVar5);
    (*(float *)(gen_frame + 0x120)) = fVar5;
    fVar3 = (float)((float10)fVar3 + fVar28);
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = (float)((float10)fVar7 + (float10)fVar4);
    (*(float *)(gen_frame + 0x128)) = fVar4;
    fVar5 = (float)((float10)fVar5 + (float10)(*(float *)(gen_frame + 0x80)));
    (*(float *)(gen_frame + 0x60)) = fVar5;
    fVar3 = (float)((float10)fVar3 + (float10)(*(float *)(gen_frame + 0x84)));
    (*(float *)(gen_frame + 0x64)) = fVar3;
    fVar4 = (float)((float10)fVar4 + (float10)(*(float *)(gen_frame + 0x88)));
    (*(float *)(gen_frame + 0x68)) = fVar4;
    fVar27 = (float10)fVar15;
    (*(float *)(gen_frame + 0xb0)) = (float)(fVar27 * (float10)fVar5);
    (*(float *)(gen_frame + 0xb4)) = (float)((float10)fVar3 * fVar27);
    (*(float *)(gen_frame + 0xb8)) = (float)(fVar27 * (float10)fVar4);
    fVar7 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar5) + (float10)(*(float *)(gen_frame + 0x50)))));
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar8 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 * fVar27) + (float10)(*(float *)(gen_frame + 0x54)))));
    (*(float *)(gen_frame + 0xb4)) = fVar8;
    fVar11 = ((float)GEN_TOF(((float10)(float)(fVar27 * (float10)fVar4) + (float10)(*(float *)(gen_frame + 0x58)))));
    (*(float *)(gen_frame + 0xb8)) = fVar11;
    fVar7 = (float)((float10)fVar7 + (float10)fVar6);
    (*(float *)(gen_frame + 0xb0)) = fVar7;
    fVar8 = (float)((float10)fVar13 + (float10)fVar8);
    (*(float *)(gen_frame + 0xb4)) = fVar8;
    fVar11 = (float)((float10)fVar14 + (float10)fVar11);
    (*(float *)(gen_frame + 0xb8)) = fVar11;
    fVar12 = (float)((float10)fVar7 - (float10)fVar16);
    (*(float *)(gen_frame + 0xd0)) = fVar12;
    fVar15 = (float)((float10)fVar8 - (float10)fVar17);
    (*(float *)(gen_frame + 0xd4)) = fVar15;
    fVar20 = (float)((float10)fVar11 - (float10)fVar19);
    (*(float *)(gen_frame + 0xd8)) = fVar20;
    fVar21 = ((float)GEN_TOF(((float10)fVar20 * (float10)fVar20 +
                    ((float10)fVar15 * (float10)fVar15 + (float10)fVar12 * (float10)fVar12))));
    (*(float *)(gen_frame + 0x138)) = fVar21;
    fVar21 = ((float)GEN_TOF(SQRT((float10)fVar21)));
    (*(float *)(gen_frame + 0x138)) = fVar21;
    (*(float *)(gen_frame + 0x13c)) = fVar21;
    fVar22 = *param_2;
    fVar23 = *param_3;
    (*(float *)(gen_frame + 0x30)) = (float)((float10)fVar22 - (float10)fVar23);
    (*(float *)(gen_frame + 0x34)) = (float)((float10)param_2[1] - (float10)param_3[1]);
    (*(float *)(gen_frame + 0x38)) = (float)((float10)param_2[2] - (float10)param_3[2]);
    fVar27 = (float10)(float)((float10)fVar22 - (float10)fVar23);
    fVar28 = (float10)(float)((float10)param_2[1] - (float10)param_3[1]);
    fVar29 = (float10)(float)((float10)param_2[2] - (float10)param_3[2]);
    fVar22 = ((float)GEN_TOF((fVar29 * fVar29 + (fVar28 * fVar28 + fVar27 * fVar27))));
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar22 = ((float)GEN_TOF(SQRT((float10)fVar22)));
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar27 = (float10)fVar10;
    fVar28 = (float10)fVar9;
    fVar9 = ((float)GEN_TOF(((float10)1 / (fVar28 + fVar27))));
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar9 = ((float)GEN_TOF(((float10)fVar9 * (((float10)fVar22 - (float10)fVar21) / (float10)fVar21))));
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar29 = (float10)fVar9;
    fVar9 = (float)(fVar29 * fVar28);
    (*(float *)(gen_frame + 0x138)) = fVar9;
    fVar28 = (float10)fVar9;
    fVar9 = (float)(fVar28 * (float10)fVar12);
    (*(float *)(gen_frame + 0x30)) = fVar9;
    fVar10 = (float)((float10)fVar15 * fVar28);
    (*(float *)(gen_frame + 0x34)) = fVar10;
    fVar21 = (float)((float10)fVar20 * fVar28);
    (*(float *)(gen_frame + 0x38)) = fVar21;
    fVar22 = (float)(fVar29 * fVar27);
    (*(float *)(gen_frame + 0x138)) = fVar22;
    fVar27 = (float10)fVar22;
    fVar12 = (float)(fVar27 * (float10)fVar12);
    (*(float *)(gen_frame + 0xd0)) = fVar12;
    fVar15 = (float)(fVar27 * (float10)fVar15);
    (*(float *)(gen_frame + 0xd4)) = fVar15;
    fVar20 = (float)((float10)fVar20 * fVar27);
    (*(float *)(gen_frame + 0xd8)) = fVar20;
    *param_2 = (float)((float10)fVar9 + (float10)fVar7);
    param_2[1] = (float)((float10)fVar10 + (float10)fVar8);
    param_2[2] = (float)((float10)fVar21 + (float10)fVar11);
    (*(float *)(gen_frame + 0xf0)) = (float)((float10)fVar16 - (float10)fVar12);
    (*(float *)(gen_frame + 0xf4)) = (float)((float10)fVar17 - (float10)fVar15);
    (*(float *)(gen_frame + 0xf8)) = (float)((float10)fVar19 - (float10)fVar20);
    (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar5 - (float10)(*(float *)(gen_frame + 0x20)));
    (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0x24)));
    (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar4 - (float10)(*(float *)(gen_frame + 0x28)));
    fVar5 = ((float)GEN_TOF(((float10)fVar6 + (float10)(float)((float10)fVar5 - (float10)(*(float *)(gen_frame + 0x20))))));
    (*(float *)(gen_frame + 0x120)) = fVar5;
    fVar3 = ((float)GEN_TOF(((float10)fVar13 + (float10)(float)((float10)fVar3 - (float10)(*(float *)(gen_frame + 0x24))))));
    (*(float *)(gen_frame + 0x124)) = fVar3;
    fVar4 = ((float)GEN_TOF(((float10)fVar14 + (float10)(float)((float10)fVar4 - (float10)(*(float *)(gen_frame + 0x28))))));
    (*(float *)(gen_frame + 0x128)) = fVar4;
    param_2[8] = (float)((float10)fVar5 + (float10)param_2[8]);
    param_2[9] = (float)((float10)fVar3 + (float10)param_2[9]);
    param_2[10] = (float)((float10)fVar4 + (float10)param_2[10]);
    fVar3 = param_5[1];
    (*(float *)(gen_frame + 0x138)) = fVar3;
    fVar27 = (float10)fVar3;
    param_2[8] = (float)(fVar27 * (float10)param_2[8]);
    param_2[9] = (float)((float10)param_2[9] * fVar27);
    param_2[10] = (float)(fVar27 * (float10)param_2[10]);
  }
  *param_3 = (*(float *)(gen_frame + 0xf0));
  param_3[1] = (*(float *)(gen_frame + 0xf4));
  (*(float *)(gen_frame + 0x120)) = (float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0x0)));
  param_3[2] = (*(float *)(gen_frame + 0xf8));
  (*(float *)(gen_frame + 0x124)) = (float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x4)));
  (*(float *)(gen_frame + 0x128)) = (float)((float10)fVar18 - (float10)(*(float *)(gen_frame + 0x8)));
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)fVar2 - (float10)(*(float *)(gen_frame + 0x0))) + (float10)fVar6)));
  (*(float *)(gen_frame + 0x120)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)fVar13 + (float10)(float)((float10)fVar1 - (float10)(*(float *)(gen_frame + 0x4))))));
  (*(float *)(gen_frame + 0x124)) = fVar3;
  fVar4 = ((float)GEN_TOF(((float10)fVar14 + (float10)(float)((float10)fVar18 - (float10)(*(float *)(gen_frame + 0x8))))));
  (*(float *)(gen_frame + 0x128)) = fVar4;
  param_3[8] = (float)((float10)param_3[8] + (float10)fVar2);
  param_3[9] = (float)((float10)fVar3 + (float10)param_3[9]);
  param_3[10] = (float)((float10)fVar4 + (float10)param_3[10]);
  fVar2 = param_5[1];
  (*(float *)(gen_frame + 0x138)) = fVar2;
  fVar27 = (float10)fVar2;
  param_3[8] = (float)(fVar27 * (float10)param_3[8]);
  param_3[9] = (float)(fVar27 * (float10)param_3[9]);
  param_3[10] = (float)(fVar27 * (float10)param_3[10]);
  return 1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::vf7 */
byte F_00bf9580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6)
{
  GEN_ENTER(0xbf9580u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  byte bVar1;
  
  if (((char)param_4 != '\0') && (param_3 == 1)) {
    bVar1 = F_00bf7e80(param_1,param_2,param_5,param_6,param_7);
    return bVar1;
  }
  bVar1 = F_00bf7200(param_1,param_2,param_3,param_5,(undefined4)gen_fl2bits(param_6),param_7);
  return bVar1;
}

/* ref: Client::Graphics::Physics::CollisionCapsule::vf8 */
byte F_00bf95e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, float gen_a8, float gen_a9)
{
  GEN_ENTER(0xbf95e0u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  byte bVar1;
  
  if ((param_5 & 1) == 0) {
    return 0;
  }
  if ((char)param_6 != '\0') {
    bVar1 = F_00bf86b0(param_1,param_2,param_3,param_4,param_7,param_8,param_9,param_10);
    return bVar1;
  }
  bVar1 = F_00bf76d0(param_1,param_2,param_3,param_4,param_5,param_7,param_8,
                       (undefined4)gen_fl2bits(param_9),param_10);
  return bVar1;
}

/* ref: FUN_00bf9650 */
uint F_00bf9650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xbf9650u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Client::Graphics::Physics::CollisionCapsule::vf0 */
uint F_00bf9680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf9680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x1c),this);
  }
  return (uint)this;
}

/* ref: FUN_00bf96b0 */
unsigned int F_00bf96b0(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbf96b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((!GEN_ISNAN(param_1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_1 < *(float *)&REFG(undefined, 0x1088114))) {
    return 0;
  }
  return 0;
}

/* ref: FUN_00bf96f0 */
unsigned int F_00bf96f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf96f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint local_c;
  
  uVar5 = 1 << ((byte)param_1 & 0x1f);
  uVar4 = -1 << ((byte)param_1 & 0x1f);
  iVar3 = 0;
  local_c = 0;
  if (*(short *)((int)this + 0xb8) != 0) {
    do {
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x80 + iVar3)));
      uVar2 = *puVar1;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      puVar1 = ((uint *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x84 + iVar3)));
      uVar2 = *puVar1;
      iVar3 = iVar3 + 0xa0;
      *puVar1 = (uVar2 & uVar4) * 2 | ~uVar4 & uVar2 | uVar5;
      local_c = local_c + 1;
    } while (local_c < *(ushort *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: FUN_00bf97a0 */
unsigned int F_00bf97a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xbf97a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint local_c;
  
  uVar3 = -1 << ((byte)param_1 & 0x1f);
  iVar2 = 0;
  local_c = 0;
  if (*(short *)((int)this + 0xb8) != 0) {
    do {
      uVar1 = *((uint *)GEN_TOP((iVar2 + 0x80 + *(int *)((int)this + 0x1c))));
      *((uint *)GEN_TOP((iVar2 + 0x80 + *(int *)((int)this + 0x1c)))) =
           (uVar1 & uVar3) >> 1 | ~uVar3 & uVar1 | 0x80000000;
      uVar1 = *((uint *)GEN_TOP((iVar2 + 0x84 + *(int *)((int)this + 0x1c))));
      *((uint *)GEN_TOP((iVar2 + 0x84 + *(int *)((int)this + 0x1c)))) =
           (uVar1 & uVar3) >> 1 | ~uVar3 & uVar1 | 0x80000000;
      local_c = local_c + 1;
      iVar2 = iVar2 + 0xa0;
    } while (local_c < *(ushort *)((int)this + 0xb8));
  }
  return 0;
}

/* ref: FUN_00bf9850 */
unsigned int F_00bf9850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xbf9850u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((param_1 != 0) && ((ushort)param_3 < *(ushort *)((int)this + 0xb8))) {
    uVar3 = (uint)(ushort)param_3;
    uVar2 = *((ushort *)GEN_TOP((*(int *)((int)this + 0x20) + 0x48 + uVar3 * 0x50)));
    uVar6 = 0xffff;
    uVar5 = 0;
    if (uVar2 != 0) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x40034 + uVar3 * 0x50))) == param_1) {
          uVar6 = (uint)uVar5;
          goto LAB_00bf98c1;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
      uVar6 = 0xffff;
    }
LAB_00bf98c1: ;
    if ((ushort)uVar6 < uVar2) {
      if ((ushort)uVar6 < (ushort)(uVar2 + 0xffff)) {
        uVar7 = (uVar2 + 0xffff) - uVar6 & 0xffff;
        iVar4 = (uVar6 + uVar3 * 0x14) * 4 + 0x38;
        do {
          *((undefined4 *)GEN_TOP((iVar4 + *(int *)((int)this + 0x20)))) =
               *((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)((int)this + 0x20))));
          uVar7 = uVar7 - 1;
          *((undefined4 *)GEN_TOP((iVar4 + -0x10 + *(int *)((int)this + 0x20)))) =
               *((undefined4 *)GEN_TOP((iVar4 + -0xc + *(int *)((int)this + 0x20))));
          iVar4 = iVar4 + 4;
        } while (uVar7 != 0);
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x20) + 0x48 + uVar3 * 0x50)));
      *piVar1 = *piVar1 + -1;
    }
  }
  return 0;
}

/* ref: FUN_00bfa010 */
unsigned int F_00bfa010(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xbfa010u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  return 0;
}

/* ref: FUN_00bfa090 */
uint F_00bfa090(unsigned int gen_a0)
{
  GEN_ENTER(0xbfa090u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  float fVar1;
  float fVar2;
  float fVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  float * pfVar8;
  undefined4 * puVar9;
  undefined4 * puVar10;
  float * pfVar11;
  float10 fVar12;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  iVar6 = *(int *)((int)this + 0x1c);
  uVar7 = *(short *)((int)this + 0xb8) - 1;
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = *(undefined * PTR32 *)((int)this + 0x10);
  (*(uint *)(gen_frame + 0x5c)) = (uint)uVar7;
  pfVar11 = *(float * PTR32 *)((int)this + 0x18);
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
  (*(int *)(gen_frame + 0x2c)) = iVar6;
  if (uVar7 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (undefined4 *)(iVar6 + 0x40);
    (*(ushort * PTR32 *)(gen_frame + 0x54)) = ((ushort *)GEN_TOP((*(int *)((int)this + 0x14) + 2)));
    pfVar8 = pfVar11 + 6;
    (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
    (*(uint *)(gen_frame + 0x5c)) = (uint)uVar7;
    (*(int *)(gen_frame + 0x2c)) = iVar6 + (uint)uVar7 * 0xa0;
    do {
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x58));
      (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
      F_0063a290((*(undefined * PTR32 *)(gen_frame + 0x4c)),((undefined4 *)(gen_frame + 0x60)),(uint)*(*(ushort * PTR32 *)(gen_frame + 0x54)));
      puVar10 = (*(undefined4 * PTR32 *)(gen_frame + 0x48));
      *pfVar11 = (*(float *)(gen_frame + 0x90));
      (*(undefined4 * PTR32 *)(gen_frame + 0x48)) = (*(undefined4 * PTR32 *)(gen_frame + 0x48)) + 0x28;
      (*(ushort * PTR32 *)(gen_frame + 0x54)) = (*(ushort * PTR32 *)(gen_frame + 0x54)) + 1;
      pfVar8[-5] = (*(float *)(gen_frame + 0x94));
      pfVar8[-4] = (*(float *)(gen_frame + 0x98));
      pfVar8[-2] = (*(float *)(gen_frame + 0x90));
      pfVar8[-1] = (*(float *)(gen_frame + 0x94));
      *pfVar8 = (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x94));
      pfVar8[2] = GEN_FLT_TO(pfVar8[2], REFG(float, 0x1375ac0));
      pfVar8[3] = GEN_FLT_TO(pfVar8[3], REFG(float, 0x1375ac4));
      pfVar8[4] = GEN_FLT_TO(pfVar8[4], REFG(float, 0x1375ac8));
      pfVar8[6] = GEN_FLT_TO(pfVar8[6], REFG(float, 0x1375ac0));
      pfVar8[7] = GEN_FLT_TO(pfVar8[7], REFG(float, 0x1375ac4));
      pfVar8[8] = GEN_FLT_TO(pfVar8[8], REFG(float, 0x1375ac8));
      pfVar11 = (*(float * PTR32 *)(gen_frame + 0x58)) + 0x18;
      (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
      pfVar8 = (*(float * PTR32 *)(gen_frame + 0x50)) + 0x18;
      (*(float * PTR32 *)(gen_frame + 0x50)) = pfVar8;
      uVar5 = (*(uint *)(gen_frame + 0x5c)) - 1;
      (*(uint *)(gen_frame + 0x5c)) = uVar5;
      puVar9 = ((undefined4 *)(gen_frame + 0x60));
      for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x38)) = (*(float *)(gen_frame + 0x98));
    } while (uVar5 != 0);
  }
  (*(float * PTR32 *)(gen_frame + 0x58)) = pfVar11;
  F_004ee9d0(&(*(float *)(gen_frame + 0x0)),(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x90,((undefined4 *)(gen_frame + 0x60)));
  F_0046f390(&(*(float *)(gen_frame + 0x0)));
  pvVar4 = (*(undefined * PTR32 *)(gen_frame + 0x28));
  (*(undefined * PTR32 *)(gen_frame + 0x4c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)(*(float *)((*(int *)(gen_frame + 0x2c)) + 0x8c))));
  fVar12 = (float10)*(float *)((*(int *)(gen_frame + 0x2c)) + 0x8c);
  (*(float *)(gen_frame + 0x10)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x0)));
  (*(float *)(gen_frame + 0x14)) = (float)((float10)(*(float *)(gen_frame + 0x4)) * fVar12);
  (*(float *)(gen_frame + 0x18)) = (float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8)));
  fVar1 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x0))) + (float10)(*(float *)(gen_frame + 0x30)))));
  (*(float *)(gen_frame + 0x30)) = fVar1;
  fVar2 = ((float)GEN_TOF(((float10)(float)((float10)(*(float *)(gen_frame + 0x4)) * fVar12) + (float10)(*(float *)(gen_frame + 0x34)))));
  (*(float *)(gen_frame + 0x34)) = fVar2;
  fVar3 = ((float)GEN_TOF(((float10)(float)(fVar12 * (float10)(*(float *)(gen_frame + 0x8))) + (float10)(*(float *)(gen_frame + 0x38)))));
  (*(float *)(gen_frame + 0x38)) = fVar3;
  (*(float *)(gen_frame + 0x90)) = fVar1;
  (*(float *)(gen_frame + 0x94)) = fVar2;
  (*(float *)(gen_frame + 0x98)) = fVar3;
  pfVar11[2] = fVar3;
  *pfVar11 = fVar1;
  pfVar11[1] = fVar2;
  pfVar11[4] = fVar1;
  pfVar11[6] = fVar3;
  pfVar11[5] = fVar2;
  pfVar11[8] = GEN_FLT_TO(pfVar11[8], REFG(float, 0x1375ac0));
  pfVar11[9] = GEN_FLT_TO(pfVar11[9], REFG(float, 0x1375ac4));
  pfVar11[10] = GEN_FLT_TO(pfVar11[10], REFG(float, 0x1375ac8));
  pfVar11[0xc] = GEN_FLT_TO(pfVar11[0xc], REFG(float, 0x1375ac0));
  pfVar11[0xd] = GEN_FLT_TO(pfVar11[0xd], REFG(float, 0x1375ac4));
  pfVar11[0xe] = GEN_FLT_TO(pfVar11[0xe], REFG(float, 0x1375ac8));
  puVar10 = ((undefined4 *)(gen_frame + 0x60));
  puVar9 = (undefined4 *)((*(int *)(gen_frame + 0x2c)) + 0x40);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x1c) + 0x40;
  F_004ee9d0((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x60,(int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x30,iVar6);
  F_004ee9d0((int)pvVar4 + 0x70,(int)pvVar4 + 0x40,iVar6);
  uVar5 = F_004ee9d0((int)pvVar4 + 0x80,(int)pvVar4 + 0x50,iVar6);
  *(undefined4 *)((int)pvVar4 + 0xb4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return uVar5;
}

