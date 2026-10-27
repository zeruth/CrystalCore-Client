#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
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

/* ref: FUN_005569f0 */
uint F_005569f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5569f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)*(char *)((int)this + 0x1c);
  uVar1 = 0;
  if (0 < iVar2) {
    while (*(char *)((int)this + uVar1 + 0xc) != (char)param_1) {
      uVar1 = uVar1 + 1;
      if ((int)*(char *)((int)this + 0x1c) <= (int)uVar1) {
        return uVar1;
      }
    }
    if (uVar1 != iVar2 - 1U) {
      uVar1 = F_00c46e20(uVar1 + 0xc + (int)this,uVar1 + 0xd + (int)this,(iVar2 - uVar1) + -1);
    }
    *(char *)((int)this + 0x1c) = *(char *)((int)this + 0x1c) + -1;
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkArrayData::vf1 */
unsigned int F_00556a40(void)
{
  GEN_ENTER(0x556a40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkArrayData::vf0 */
uint F_00556a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556a80 */
unsigned int F_00556a80(float gen_a0)
{
  GEN_ENTER(0x556a80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00556a90 */
uint F_00556a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556ac0 */
uint F_00556ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x556ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ulonglong uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar2 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar2;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556af0 */
float10 F_00556af0(float gen_a0)
{
  GEN_ENTER(0x556af0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  
  fVar1 = F_00c4ed10((uint)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return (float10)(float)fVar1;
}

/* ref: FUN_00556b10 */
unsigned int F_00556b10(float gen_a0)
{
  GEN_ENTER(0x556b10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00556b20 */
uint F_00556b20(unsigned int gen_a0)
{
  GEN_ENTER(0x556b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar4 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar4);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::NumberArrayData::vf0 */
uint F_00556b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0928));
  if (*(int *)(this + 0x20) != 0) {
    F_00406b30(*(int *)(this + 0x20));
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556bc0 */
uint F_00556bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556bf0 */
uint F_00556bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x556bf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0934));
  uVar1 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0x20));
    uVar1 = (uint)uVar3;
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  if (*(int *)((int)this + 0x24) != 0) {
    if (0 < *(int *)((int)this + 4)) {
      iVar2 = 0;
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)((int)this + 4));
    }
    uVar1 = 0;
    if (*(int *)((int)this + 0x24) != 0) {
      uVar3 = F_00406b30(*(int *)((int)this + 0x24));
      uVar1 = (uint)uVar3;
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return uVar1;
}

/* ref: FUN_00556c70 */
uint F_00556c70(unsigned int gen_a0)
{
  GEN_ENTER(0x556c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x20) != 0) {
    F_00406b30(*(int *)((int)this + 0x20));
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  if (*(int *)((int)this + 0x24) != 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))) != 0) {
          F_00406b30(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x24) != 0) {
      F_00406b30(*(int *)((int)this + 0x24));
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x24) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::StringArrayData::vf1 */
unsigned int F_00556d50(unsigned int gen_a0)
{
  GEN_ENTER(0x556d50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if ((*(int *)(this + 0x24) != 0) && (iVar1 = 0, 0 < *(int *)(this + 4))) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))) != 0) {
        F_00406b30(*((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x24) + iVar1 * 4))) = 0;
      }
      *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return 0;
}

/* ref: Component::GUI2::StringArrayData::vf0 */
uint F_00556da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00556bf0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556dd0 */
uint F_00556dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = param_2;
  *(undefined2 *)(in_ecx + 7) = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
  in_ecx[8] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00556e00 */
unsigned int F_00556e00(unsigned int gen_a0)
{
  GEN_ENTER(0x556e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a0940));
  if (*(int *)((int)this + 0x20) != 0) {
    iVar1 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar1 * 4))) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x20) != 0) {
      F_00406b30(*(int *)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10a091c));
  return 0;
}

/* ref: FUN_00556e70 */
uint F_00556e70(unsigned int gen_a0)
{
  GEN_ENTER(0x556e70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  longlong lVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)((int)this + 0x20) != 0) {
    iVar4 = 0;
    if (0 < *(int *)((int)this + 4)) {
      do {
        if (*((int *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))) != 0) {
          F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))));
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar4 * 4))) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)((int)this + 4));
    }
    if (*(int *)((int)this + 0x20) != 0) {
      F_00406b30(*(int *)((int)this + 0x20));
      *(undefined4 *)((int)this + 0x20) = 0;
    }
  }
  uVar5 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)((int)this + 4) * 4;
  pvVar3 = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                                uVar5);
  *(undefined * PTR32 *)((int)this + 0x20) = pvVar3;
  pvVar3 = F_00c48350(pvVar3,0,*(int *)((int)this + 4) * 4);
  return (uint)pvVar3;
}

/* ref: Component::GUI2::ExtendArrayData::vf1 */
unsigned int F_00556f00(unsigned int gen_a0)
{
  GEN_ENTER(0x556f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if ((*(int *)(this + 0x20) != 0) && (iVar1 = 0, 0 < *(int *)(this + 4))) {
    do {
      if (*((int *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) != 0) {
        F_00406ad0(*((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))));
        *((undefined4 *)GEN_TOP((*(int *)(this + 0x20) + iVar1 * 4))) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(this + 4));
  }
  return 0;
}

/* ref: Component::GUI2::ExtendArrayData::vf0 */
uint F_00556f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x556f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00556e00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00556fb0 */
uint F_00556fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x556fb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint param_3 = (uint)gen_a3;
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  *(short *)this = (short)param_1;
  *(short *)((int)this + 2) = (short)param_2;
  *(undefined2 *)((int)this + 4) = (undefined2)param_3;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 8) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0xc) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x10) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x14) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x18) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_2 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x1c) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 2),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x20) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  uVar3 = 0;
  *(uint *)((int)this + 0x24) = uVar1;
  uVar1 = F_00404270();
  uVar1 = F_00406c00(-(uint)((int)((ulonglong)param_3 * 4 >> 0x20) != 0) |
                       (uint)((ulonglong)param_3 * 4),0,uVar1,uVar3);
  *(uint *)((int)this + 0x28) = uVar1;
  iVar2 = 0;
  if (0 < *(short *)this) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 8) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)this);
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 2)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x14) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 2));
  }
  iVar2 = 0;
  if (0 < *(short *)((int)this + 4)) {
    do {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + iVar2 * 4))) = 0;
      *((undefined2 *)GEN_TOP((*(int *)((int)this + 0x20) + iVar2 * 2))) = 0xffff;
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + iVar2 * 4))) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(short *)((int)this + 4));
  }
  return (uint)this;
}

/* ref: FUN_005571e0 */
ushort F_005571e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5571e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  longlong lVar1;
  uint uVar2;
  undefined * _Dst;
  undefined4 uVar3;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    F_00406b30(*(int *)(param_2 + 0x20));
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  uVar3 = 0;
  uVar2 = F_00404270();
  lVar1 = (ulonglong)*(uint *)(param_2 + 4) * 4;
  _Dst = (undefined *)F_00406c00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,0,uVar2,
                              uVar3);
  *(undefined * PTR32 *)(param_2 + 0x20) = _Dst;
  F_00c48350(_Dst,0,*(int *)(param_2 + 4) * 4);
  *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4))) = param_2;
  return (ushort)param_1;
}

/* ref: FUN_00557250 */
uint F_00557250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00556c70(param_2);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557270 */
uint F_00557270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  F_00556e70(param_2);
  *((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_1 * 4))) = param_2;
  return param_1;
}

/* ref: FUN_00557290 */
uint F_00557290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572b0 */
uint F_005572b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5572b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_005572d0 */
uint F_005572d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5572d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)(in_ecx + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)(in_ecx + 0x24) + param_2 * 4))) != 0) {
    *puVar1 = 0;
  }
  return (uint)puVar1;
}

/* ref: FUN_00557380 */
uint F_00557380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573b0 */
uint F_005573b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5573b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_005573e0 */
uint F_005573e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5573e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4))) != 0) {
    piVar1 = (int *)*piVar1;
    *((undefined1 *)GEN_TOP((*(char *)(piVar1 + 7) + 0xc + (int)piVar1))) = (undefined1)param_1;
    *(char *)(piVar1 + 7) = *(char *)(piVar1 + 7) + '\x01';
    *(undefined1 *)((int)piVar1 + 0x1d) = 2;
  }
  return (uint)piVar1;
}

/* ref: FUN_00557410 */
uint F_00557410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x557410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) != 0) {
    puVar1 = (undefined4 *)F_005569f0((undefined *)*puVar1,param_1);
  }
  return (uint)puVar1;
}

/* ref: FUN_00557440 */
uint F_00557440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4))) != 0) {
    puVar2 = (undefined4 *)F_005569f0((undefined *)*puVar2,param_1);
    if ((char)param_3 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x18) + param_2 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_00557480 */
uint F_00557480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557480u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  undefined4 * puVar2;
  
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
  if (*((int *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4))) != 0) {
    puVar2 = (undefined4 *)F_005569f0((undefined *)*puVar2,param_1);
    if ((char)param_3 != '\0') {
      piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0x24) + param_2 * 4)));
      puVar2 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1)));
    }
  }
  return (uint)puVar2;
}

/* ref: FUN_005574c0 */
uint F_005574c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5574c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte * pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)*(short *)((int)this + 2);
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x18) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *(byte *)(iVar3 + 0x1d);
      *(undefined1 *)(iVar3 + 0x1d) = 0;
      if ((bVar2 != 0) && (iVar5 = *(char *)(iVar3 + 0x1c) + -1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*(byte *)(iVar3 + 0xc + iVar5) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
  }
  iVar4 = (int)*(short *)this;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + iVar4 * 4)));
    if (iVar3 != 0) {
      bVar2 = *(byte *)(iVar3 + 0x1d);
      *(undefined1 *)(iVar3 + 0x1d) = 0;
      if ((bVar2 != 0) && (iVar5 = *(char *)(iVar3 + 0x1c) + -1, -1 < iVar5)) {
        do {
          pbVar1 = ((byte *)GEN_TOP(((uint)*(byte *)(iVar3 + 0xc + iVar5) + param_1)));
          *pbVar1 = *pbVar1 | ((bVar2 & 2) != 0) + 1U;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
      }
    }
  }
  return 0;
}

/* ref: FUN_00557570 */
uint F_00557570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557570u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575a0 */
uint F_005575a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5575a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x18) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: FUN_005575d0 */
byte F_005575d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5575d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(int *)((int)this + 0x10) = param_1;
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x24c);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x25c);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x26c);
  return 1;
}

/* ref: FUN_00557620 */
uint F_00557620(unsigned int gen_a0)
{
  GEN_ENTER(0x557620u, gen_a0, 0u, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  if (((char)in_ecx[1] == '\0') && (*in_ecx == 2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00557640 */
uint F_00557640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)this = (undefined2)param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined2 *)((int)this + 2) = 0;
  return (uint)this;
}

/* ref: FUN_00557670 */
uint F_00557670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *(uint *)(in_ecx + 0x14) = *(uint *)(in_ecx + 0x14) | 0x10000;
  uVar1 = *(uint *)(in_ecx + 0x14);
  if ((char)param_2 != '\0') {
    uVar1 = uVar1 | 0x200000;
    *(uint *)(in_ecx + 0x14) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_005576b0 */
uint F_005576b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5576b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *in_ecx;
  if (*in_ecx == 0) {
    *in_ecx = param_2;
    return param_2;
  }
  do {
    uVar1 = *(uint *)(uVar2 + 0x10);
    if (uVar1 == 0) {
      *(uint *)(uVar2 + 0x10) = param_2;
      return uVar2;
    }
    uVar2 = uVar1;
  } while (uVar1 != 0);
  return 0;
}

/* ref: FUN_005576e0 */
uint F_005576e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5576e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  do {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *(uint *)(uVar1 + 0x10);
  } while (*(uint *)(uVar1 + 0x10) != param_1);
  return uVar1;
}

/* ref: FUN_00557710 */
byte F_00557710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return 1;
}

/* ref: FUN_00557740 */
uint F_00557740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) break;
    iVar1 = *(int *)(iVar1 + 0x10);
  }
  return *(uint *)(iVar1 + 0xc);
}

/* ref: FUN_00557790 */
uint F_00557790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined1 uVar1;
  undefined * pvVar2;
  
  if ((char)param_1 != '\0') {
    uVar1 = *(undefined1 *)((int)this + 0x70);
    pvVar2 = F_00c48350(this,0,0x74);
    *(undefined1 *)((int)this + 0x70) = uVar1;
    return (uint)pvVar2;
  }
  pvVar2 = F_00c48350(this,0,0x74);
  return (uint)pvVar2;
}

/* ref: FUN_005577f0 */
uint F_005577f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5577f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = param_2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = param_1;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: FUN_00557890 */
uint F_00557890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557890u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x150 + *in_ecx;
}

/* ref: FUN_005578b0 */
uint F_005578b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5578b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(ushort *)(in_ecx + 8) <= (ushort)param_2) {
    return 0;
  }
  return (uint)(ushort)param_2 * 0x74 + *(int *)(in_ecx + 4);
}

/* ref: FUN_00557970 */
uint F_00557970(unsigned int gen_a0)
{
  GEN_ENTER(0x557970u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if ((((0x1f < (byte)param_1) && ((byte)param_1 != 0x7f)) &&
      (((byte)param_1 < 0x20 || (0x7e < (byte)param_1)))) &&
     (((byte)param_1 < 0xa1 || (0xdf < (byte)param_1)))) {
    if ((((byte)param_1 < 0x81) || (0x9f < (byte)param_1)) && (0xf < (byte)((byte)param_1 + 0x20)))
    {
      return 0;
    }
    return 2;
  }
  return 1;
}

/* ref: FUN_005579c0 */
uint F_005579c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5579c0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_2 + 0x60);
  if ((((*(byte *)(param_2 + 0x6e) & 4) != 0) && (*(byte *)(param_2 + 0x6f) <= param_1)) &&
     (param_1 < 0x100)) {
    return (param_1 - *(byte *)(param_2 + 0x6f)) * 0x10 + iVar1;
  }
  iVar4 = *(int *)(param_2 + 0x44);
  iVar5 = 0;
  if (iVar4 < 0) {
    return 0;
  }
  do {
    iVar3 = (iVar4 + iVar5) / 2;
    uVar2 = *(uint *)(iVar1 + iVar3 * 0x10);
    if (param_1 < uVar2) {
      iVar4 = iVar3 + -1;
    }
    else {
      if (param_1 <= uVar2) {
        return iVar3 * 0x10 + iVar1;
      }
      iVar5 = iVar3 + 1;
    }
  } while (iVar5 <= iVar4);
  return 0;
}

/* ref: FUN_00557a50 */
uint F_00557a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 0x60);
  uVar2 = 0;
  if (*(uint *)(param_2 + 0x44) != 0) {
    do {
      if (*(short *)(uVar1 + 4) == (short)param_1) {
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      uVar1 = uVar1 + 0x10;
    } while (uVar2 < *(uint *)(param_2 + 0x44));
  }
  return 0;
}

/* ref: FUN_00557a80 */
uint F_00557a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  short * psVar2;
  short * psVar3;
  short * psVar4;
  uint uVar5;
  
  psVar3 = (short *)0x0;
  if (*(int *)((int)this + 0x60) == 0) {
    return (uint)psVar3;
  }
  uVar1 = *((uint *)GEN_TOP((*(int *)((int)this + 0x60) + 0xc)));
  uVar5 = 0;
  psVar4 = psVar3;
  psVar2 = *((short * PTR32 *)GEN_TOP((*(int *)((int)this + 0x60) + 0x10)));
  if (uVar1 != 0) {
    while (psVar4 = psVar2, *psVar4 != (short)param_1) {
      uVar5 = uVar5 + 1;
      psVar2 = psVar4 + 0x10;
      if (uVar1 <= uVar5) {
        return (uint)psVar3;
      }
    }
  }
  return (uint)psVar4;
}

/* ref: FUN_00557ac0 */
uint F_00557ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557ac0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  uint uVar1;
  uint * puVar2;
  int iVar3;
  int local_8;
  
  param_3 = *(int *)(param_3 + 0x48);
  local_8 = 0;
  if (-1 < param_3) {
    do {
      iVar3 = (param_3 + local_8) / 2;
      puVar2 = (uint *)(iVar3 * 0x10 + param_4);
      uVar1 = *puVar2;
      if (uVar1 < param_1) {
LAB_00557b30: ;
        local_8 = iVar3 + 1;
      }
      else {
        if ((uVar1 <= param_1) && (puVar2[1] <= param_2)) {
          if (param_1 < uVar1) {
            return (uint)puVar2;
          }
          if ((param_1 <= uVar1) && (param_2 <= puVar2[1])) {
            return (uint)puVar2;
          }
          goto LAB_00557b30;
        }
        param_3 = iVar3 + -1;
      }
    } while (local_8 <= param_3);
  }
  return 0;
}

/* ref: FUN_00557b50 */
uint F_00557b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  ushort * puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint local_8;
  
  uVar7 = 0;
  local_8 = 0;
  if ((param_1 != 0) && (param_4 != 0)) {
    uVar3 = *(uint *)(param_3 + 0x48);
    uVar5 = param_4;
    if (uVar3 != 0) {
      do {
        uVar6 = (uint)*(ushort *)(uVar5 + 8);
        if (uVar6 == param_1) {
          uVar2 = *(ushort *)(uVar5 + 10);
          for (; ((uVar4 = uVar5, uVar2 != param_2 && (uVar4 = local_8, uVar7 < uVar3)) &&
                 (puVar1 = (ushort *)(uVar5 + 8), uVar6 == *puVar1)); uVar5 = uVar5 + 0x10) {
            uVar2 = *(ushort *)(uVar5 + 0x1a);
            uVar7 = uVar7 + 1;
            uVar6 = (uint)*puVar1;
          }
        }
        else {
          if (param_1 < uVar6) {
            return local_8;
          }
          uVar5 = uVar5 + 0x10;
          uVar4 = local_8;
        }
        local_8 = uVar4;
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    return local_8;
  }
  return 0;
}

/* ref: FUN_00557be0 */
uint F_00557be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = F_005579c0(0xe38093,param_1);
  if (uVar1 == 0) {
    if (((*(byte *)(param_1 + 0x6e) & 4) == 0) || (0x2d < *(byte *)(param_1 + 0x6f))) {
      iVar3 = *(int *)(param_1 + 0x44);
      iVar4 = 0;
      if (-1 < iVar3) {
        do {
          iVar2 = (iVar3 + iVar4) / 2;
          uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x60) + iVar2 * 0x10)));
          if (uVar1 < 0x2e) {
            if (0x2c < uVar1) goto LAB_00557c60;
            iVar4 = iVar2 + 1;
          }
          else {
            iVar3 = iVar2 + -1;
          }
        } while (iVar4 <= iVar3);
      }
    }
    else {
      iVar2 = 0x2d - (uint)*(byte *)(param_1 + 0x6f);
LAB_00557c60: ;
      uVar1 = iVar2 * 0x10 + *(int *)(param_1 + 0x60);
      if (uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = F_005579c0(0xe39080,param_1);
  }
  return uVar1;
}

/* ref: FUN_00557c70 */
ushort F_00557c70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x557c70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  float10 fVar4;
  float local_8;
  
  uVar3 = 0;
  local_8 = 0.0;
  uVar2 = 0;
  while( true ) {
    fVar1 = *(float *)(param_1 + (uint)uVar2 * 0xc + 4);
    fVar4 = (float10)fVar1;
    if ((float10)local_8 < fVar4) {
      uVar3 = uVar2;
      local_8 = fVar1;
    }
    fVar4 = (float10)((float)GEN_TOF(ABS((float10)(float)(fVar4 - (float10)param_2))));
    if ((!GEN_ISNAN((float10)REFG(float, 0x10a0a58)) && !GEN_ISNAN(fVar4)) && !((float10)REFG(float, 0x10a0a58) < fVar4)) break;
    uVar2 = uVar2 + 1;
    if (3 < uVar2) {
      return uVar3;
    }
  }
  return uVar2;
}

/* ref: FUN_00557cf0 */
unsigned int F_00557cf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x557cf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0x13c) = param_3;
  *(undefined4 *)((int)this + 0xec) = param_1;
  *(undefined4 *)((int)this + 0xf0) = param_2;
  *(undefined4 *)((int)this + 0x60) = 0;
  F_00c48350((undefined4 *)((int)this + 100),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x80) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 0x10000;
  *(undefined4 *)((int)this + 0x84) = uVar2;
  *(undefined1 *)((int)this + 0xa6) = 0xff;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  F_00c48350((undefined4 *)((int)this + 0xa8),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb8) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x10000;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  *(undefined1 *)((int)this + 0xea) = 0xff;
  puVar3 = (undefined4 *)((int)this + 0x30);
  iVar4 = 4;
  do {
    puVar3[-0xc] = 0;
    puVar3[-0xb] = 0;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return 0;
}

/* ref: FUN_00557e00 */
unsigned int F_00557e00(unsigned int gen_a0)
{
  GEN_ENTER(0x557e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 * puVar3;
  int iVar4;
  
  *(undefined4 *)((int)this + 0xf0) = 0;
  F_00c48350((undefined4 *)((int)this + 100),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0x68) = uVar1;
  *(undefined4 *)((int)this + 0x74) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x80) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0x9c) = *(uint *)((int)this + 0x9c) | 0x10000;
  *(undefined4 *)((int)this + 0x84) = uVar2;
  *(undefined1 *)((int)this + 0xa6) = 0xff;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  F_00c48350((undefined4 *)((int)this + 0xa8),0,0x44);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)&REFG(undefined, 0x109ce40);
  *(undefined4 *)((int)this + 0xac) = uVar1;
  *(undefined4 *)((int)this + 0xb8) = uVar1;
  *(undefined4 *)((int)this + 0xb0) = uVar1;
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xc4) = REFG(undefined4, 0x1302e24);
  uVar2 = REFG(undefined4, 0x1302e20);
  *(uint *)((int)this + 0xe0) = *(uint *)((int)this + 0xe0) | 0x10000;
  *(undefined4 *)((int)this + 200) = uVar2;
  *(undefined1 *)((int)this + 0xea) = 0xff;
  *(undefined4 *)((int)this + 0xc0) = uVar1;
  puVar3 = (undefined4 *)((int)this + 8);
  iVar4 = 4;
  do {
    puVar3[-2] = 0;
    puVar3[-1] = 0;
    *puVar3 = uVar1;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = uVar1;
    puVar3 = puVar3 + 3;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  *(undefined1 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  return 0;
}

/* ref: FUN_00557f00 */
unsigned int F_00557f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x557f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_2;
  puVar3 = (undefined4 *)(in_ecx + 100);
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return 0;
}

/* ref: FUN_00557f70 */
unsigned int F_00557f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5, float gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x557f70u, gen_a0, gen_a1, gen_a2, gen_trace_f(gen_a3));
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  float param_4 = (float)gen_a3;
  int param_5 = (int)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  int * piVar1;
  int iVar2;
  short sVar3;
  
  if (param_3 != 0) {
    piVar1 = param_1 + (uint)(ushort)param_2 * 3;
    *piVar1 = param_3;
    *(undefined1 *)(param_3 + 0x70) = (undefined1)param_8;
    piVar1[1] = (int)gen_fl2bits(param_4);
    piVar1[2] = (int)gen_fl2bits(param_7);
    param_1[(uint)(ushort)param_2 * 3 + 0xc] = param_5;
    if (param_5 != 0) {
      *(undefined1 *)(param_5 + 0x70) = (undefined1)param_8;
    }
    sVar3 = 0;
    piVar1[0xd] = (int)gen_fl2bits(param_6);
    piVar1[0xe] = (int)gen_fl2bits(param_7);
    iVar2 = 4;
    piVar1 = param_1;
    do {
      if (*piVar1 != 0) {
        sVar3 = sVar3 + 1;
      }
      piVar1 = piVar1 + 3;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(byte *)(param_1 + 0x52) =
         *(byte *)(param_1 + 0x52) ^ ((sVar3 != 0) * '\x02' ^ *(byte *)(param_1 + 0x52)) & 2;
  }
  return 0;
}

/* ref: FUN_00558000 */
uint F_00558000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  ushort uVar2;
  
  fVar1 = *(float *)((int)this + 0x74);
  if ((((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x144) - (float10)fVar1
                                            )))))) <= (float10)REFG(float, 0x10905c4)) && ((char)param_1 != '\0'))
     && (*(uint *)((int)this + 0x140) != 0)) {
    return *(uint *)((int)this + 0x140);
  }
  uVar2 = F_00557c70(this,fVar1);
  *(undefined4 *)(((int)(uint)(this)) + 0x140) = *(undefined4 *)(((int)(uint)(this)) + (uint)uVar2 * 0xc);
  if ((*(byte *)(((int)(uint)(this)) + 0x148) & 8) != 0) {
    *(undefined4 *)(((int)(uint)(this)) + 0x140) =
         *((undefined4 *)GEN_TOP((((int)(uint)(this)) + ((uint)uVar2 * 3 + 0xc) * 4)));
  }
  *(float *)(((int)(uint)(this)) + 0x144) = fVar1;
  return *(uint *)(((int)(uint)(this)) + 0x140);
}

/* ref: FUN_005580a0 */
uint F_005580a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5580a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  ushort uVar1;
  
  uVar1 = F_00557c70(param_1,param_2);
  return (uint)uVar1 * 3;
}

/* ref: FUN_005580c0 */
uint F_005580c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5580c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (param_2 != 0) {
    *(uint *)(in_ecx + 0x60) = param_2;
  }
  return param_2;
}

/* ref: FUN_005580e0 */
float10 F_005580e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5580e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  float10 fVar5;
  
  bVar2 = *(byte *)(param_1 + 0x148);
  if ((bVar2 & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x74);
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x144) -
                                               (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) ||
       (iVar4 = *(int *)(param_1 + 0x140), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1,fVar1);
      *(undefined4 *)(((int)(uint)(param_1)) + 0x140) = *(undefined4 *)(((int)(uint)(param_1)) + (uint)uVar3 * 0xc);
      if ((bVar2 & 8) != 0) {
        *(undefined4 *)(((int)(uint)(param_1)) + 0x140) =
             *((undefined4 *)GEN_TOP((((int)(uint)(param_1)) + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      *(float *)(((int)(uint)(param_1)) + 0x144) = fVar1;
      iVar4 = *(int *)(((int)(uint)(param_1)) + 0x140);
    }
    fVar5 = (float10)param_3;
    if (param_3 < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float10)((float)GEN_TOF((fVar5 * (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)param_2 /
                                                                     (float10)*(float *)(iVar4 + 
                                                  0x54)))) * (float10)*(int *)(iVar4 + 0x58)))))));
  }
  return (float10)0;
}

/* ref: FUN_005581b0 */
float10 F_005581b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5581b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  float fVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  int extraout_ECX;
  float10 fVar5;
  
  bVar2 = *(byte *)(param_1 + 0x148);
  if ((bVar2 & 2) != 0) {
    fVar1 = *(float *)(param_1 + 0x74);
    if ((!((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x144) -
                                               (float10)fVar1)))))) <= (float10)REFG(float, 0x10905c4))) ||
       (iVar4 = *(int *)(param_1 + 0x140), iVar4 == 0)) {
      uVar3 = F_00557c70(param_1,fVar1);
      extraout_ECX = ((int)(uint)(param_1));
      *(undefined4 *)(extraout_ECX + 0x140) = *(undefined4 *)(extraout_ECX + (uint)uVar3 * 0xc);
      if ((bVar2 & 8) != 0) {
        *(undefined4 *)(extraout_ECX + 0x140) =
             *((undefined4 *)GEN_TOP((extraout_ECX + ((uint)uVar3 * 3 + 0xc) * 4)));
      }
      iVar4 = *(int *)(extraout_ECX + 0x140);
      *(float *)(extraout_ECX + 0x144) = fVar1;
      param_1 = extraout_ECX;
    }
    fVar5 = (float10)param_2;
    param_2 = (float)*(byte *)(param_1 + 0xa5);
    if ((char)param_3 != '\0') {
      param_2 = ((float)GEN_TOF(((float10)*(float *)(param_1 + 0x7c) * (float10)*(byte *)(param_1 + 0xa5))));
    }
    return (float10)((float)GEN_TOF(((float10)param_2 -
                           (float10)*(int *)(iVar4 + 0x58) *
                           (float10)((float)GEN_TOF((fVar5 / (float10)*(float *)(iVar4 + 0x54)))))));
  }
  return (float10)0;
}

/* ref: FUN_00558290 */
uint F_00558290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558290u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  
  (*(undefined4 *)(gen_frame + 0x4)) = param_2;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  F_0042e290(param_1,&(*(undefined4 *)(gen_frame + 0x4)));
  return (uint)param_1;
}

/* ref: FUN_005582c0 */
uint F_005582c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5582c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),(byte)param_1);
  if ((byte)param_1 < 0x1e) {
    uVar1 = (uint)(byte)param_1 * 8;
    *((undefined4 *)GEN_TOP((uVar1 + *(int *)((int)this + 0x28)))) = param_2;
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + uVar1))) = param_3;
  }
  return uVar1;
}

/* ref: FUN_005582f0 */
uint F_005582f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5582f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  uint in_EAX = 0;
  uint uVar2;
  
  uVar2 = in_EAX & 0xffffff00;
  do {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + (uVar2 & 0xff) * 8))) == param_1) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + (uVar2 & 0xff) * 8))) = param_2;
      return uVar2 & 0xff;
    }
    bVar1 = (char)uVar2 + 1;
    uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1);
  } while (bVar1 < 0x1e);
  return uVar2;
}

/* ref: FUN_00558330 */
uint F_00558330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  
  bVar1 = 0;
  do {
    if (*((int *)GEN_TOP((*(int *)((int)this + 0x28) + (uint)bVar1 * 8))) == param_1) {
      return *((uint *)GEN_TOP((*(int *)((int)this + 0x28) + 4 + (uint)bVar1 * 8)));
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 < 0x1e);
  return 0;
}

/* ref: FUN_00558370 */
uint F_00558370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  F_0042e430(param_1,param_2);
  uVar1 = F_00a21e20(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0xf0) + 0x1c))),param_1);
  return uVar1;
}

/* ref: FUN_005583a0 */
uint F_005583a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5583a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  byte * param_2 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  
  bVar1 = *param_2;
  if (0x3f < (byte)(bVar1 + 0x80)) {
    if (bVar1 < 0x80) {
      return (uint)bVar1;
    }
    if (bVar1 < 0xe0) {
      *param_1 = 2;
      return (uint)CONCAT11(bVar1,param_2[1]);
    }
    if (bVar1 < 0xf0) {
      *param_1 = 3;
      return (uint)CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]);
    }
    if (bVar1 < 0xf8) {
      *param_1 = 4;
      return CONCAT31(CONCAT21(CONCAT11(bVar1,param_2[1]),param_2[2]),param_2[3]);
    }
  }
  return 0;
}

/* ref: FUN_00558440 */
byte F_00558440(unsigned int gen_a0)
{
  GEN_ENTER(0x558440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  
  bVar1 = 0;
  if (((param_1 - 0x30U < 10) || (param_1 == 0x25)) || (param_1 - 0x28U < 8)) {
    bVar1 = 1;
  }
  return bVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf1 */
uint F_00558470(unsigned int gen_a0)
{
  GEN_ENTER(0x558470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  pvVar1 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCount::vf3 */
uint F_005584b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5584b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  
  pcVar1 = param_2;
  if (*param_2 != '\x02') {
    if (*(uint *)(in_ecx + 0xb4) <= *(uint *)(in_ecx + 0xbc)) {
      *(int *)(in_ecx + 0xa8) = *(int *)(in_ecx + 0xa8) + 1;
    }
    pcVar1 = ((char *)GEN_TOP((*(uint *)(in_ecx + 0xbc) + 1)));
    *(char * PTR32 *)(in_ecx + 0xbc) = pcVar1;
  }
  return (uint)pcVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerDrawSize::vf3 */
uint F_005585d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5585d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint extraout_EAX = 0;
  uint uVar2;
  float10 fVar3;
  undefined4 uVar4;
  
  uVar2 = *(uint *)(this + 0xb4);
  if (uVar2 <= *(uint *)(this + 0xbc)) {
    if ((float10)*(float *)(this + 0x140) < (float10)*(float *)(this + 0x158)) {
      *(float *)(this + 0x140) = *(float *)(this + 0x158);
    }
    uVar4 = 0;
    *(undefined4 *)(this + 0x14c) = 0;
    fVar3 = F_005581b0(*(undefined4 *)(this + 8),*(float *)(this + 0x28),0);
    *(float *)(this + 0x150) = ((float)GEN_TOF((fVar3 + (float10)*(float *)(this + 0x148))));
    uVar1 = *(undefined4 *)(this + 0x158);
    *(undefined4 *)(this + 0x158) = uVar4;
    *(undefined4 *)(this + 0x154) = uVar1;
    *(float *)(this + 0x15c) =
         ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar3 + (float10)*(float *)(this + 0x148)))) +
                (float10)*(float *)(this + 0x15c))));
    uVar2 = extraout_EAX;
  }
  if (*param_1 != '\x02') {
    if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
    }
    uVar2 = *(uint *)(this + 0xbc) + 1;
    *(uint *)(this + 0xbc) = uVar2;
  }
  return uVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf10 */
uint F_00558690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x140) + 0x28))))(this + 0x140,param_1);
  *(undefined4 *)(this + 0x10) = param_1;
  return uVar1;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf1 */
uint F_005586c0(unsigned int gen_a0)
{
  GEN_ENTER(0x5586c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  undefined * pvVar2;
  
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(this + 0x288);
  *(undefined4 *)(this + 0x284) = *(undefined4 *)(this + 0x28c);
  *(float *)(this + 0x298) =
       ((float)GEN_TOF(((float10)*(float *)(this + 0x24) / (float10)*((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54))))));
  fVar1 = *((float *)GEN_TOP((*(int *)(this + 0xc) + 0x54)));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(float *)(this + 0x29c) = ((float)GEN_TOF(((float10)*(float *)(this + 0x28) / (float10)fVar1)));
  pvVar2 = F_00c48350(this + 0xc0,0,0x80);
  return (uint)pvVar2;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf2 */
unsigned int F_00558720(void)
{
  GEN_ENTER(0x558720u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerRenderer::vf3 */
uint F_00558730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char * pcVar1;
  float10 fVar2;
  
  *(undefined4 *)(this + 0x280) = *(undefined4 *)(this + 0x288);
  fVar2 = F_005580e0(*(undefined4 *)(this + 8),*(float *)(this + 0x28),1);
  *(float *)(this + 0x284) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x284))));
  fVar2 = F_005581b0(*(undefined4 *)(this + 8),*(float *)(this + 0x28),0);
  *(float *)(this + 0x284) = ((float)GEN_TOF((fVar2 + (float10)*(float *)(this + 0x284))));
  pcVar1 = param_1;
  if (*param_1 != '\x02') {
    if (*(uint *)(this + 0xb4) <= *(uint *)(this + 0xbc)) {
      *(int *)(this + 0xa8) = *(int *)(this + 0xa8) + 1;
    }
    pcVar1 = ((char *)GEN_TOP((*(uint *)(this + 0xbc) + 1)));
    *(char * PTR32 *)(this + 0xbc) = pcVar1;
  }
  return (uint)pcVar1;
}

/* ref: FUN_005587b0 */
uint F_005587b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x5587b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *(undefined2 *)(param_1 + 0x10) = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x12) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x28) = (undefined2)param_2;
  *(undefined2 *)(param_1 + 0x2a) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x40) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x42) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x58) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x5a) = (undefined2)param_3;
  return param_1;
}

/* ref: FUN_005587f0 */
uint F_005587f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x5587f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0x14) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x16) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined2 *)(param_1 + 0x2c) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x2e) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  *(undefined2 *)(param_1 + 0x44) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x46) = (undefined2)param_8;
  *(undefined4 *)(param_1 + 0x54) = param_2;
  *(undefined2 *)(param_1 + 0x5c) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x5e) = (undefined2)param_8;
  return param_1;
}

/* ref: FUN_00558840 */
unsigned int F_00558840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x558840u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0x14) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x16) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x1a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x1c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x1e) = (undefined2)param_6;
  *(undefined2 *)(param_1 + 0x18) = (undefined2)param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined2 *)(param_1 + 0x34) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x36) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x38) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x3a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x3c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x3e) = (undefined2)param_6;
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  *(undefined2 *)(param_1 + 0x54) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x56) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x58) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x5a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x5c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x5e) = (undefined2)param_6;
  *(undefined4 *)(param_1 + 0x6c) = param_2;
  *(undefined2 *)(param_1 + 0x74) = (undefined2)param_7;
  *(undefined2 *)(param_1 + 0x76) = (undefined2)param_8;
  *(undefined2 *)(param_1 + 0x78) = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x7a) = (undefined2)param_4;
  *(undefined2 *)(param_1 + 0x7c) = (undefined2)param_5;
  *(undefined2 *)(param_1 + 0x7e) = (undefined2)param_6;
  return 0;
}

/* ref: FUN_00558900 */
uint F_00558900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x558900u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  *(short *)(param_1 + 0x10) = (short)param_3 - (short)param_2;
  *(short *)(param_1 + 0x12) = (short)param_4 - (short)param_2;
  *(short *)(param_1 + 0x30) = (short)param_3 - (short)param_2;
  *(short *)(param_1 + 0x32) = (short)param_6 + (short)param_2;
  *(short *)(param_1 + 0x50) = (short)param_2 + (short)param_5;
  *(short *)(param_1 + 0x52) = (short)param_6 + (short)param_2;
  *(short *)(param_1 + 0x72) = (short)param_4 - (short)param_2;
  *(short *)(param_1 + 0x70) = (short)param_2 + (short)param_5;
  return param_1;
}

/* ref: FUN_00558950 */
unsigned int F_00558950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x558950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(in_ecx + 0x18) == 1) {
    *(float *)(in_ecx + 0x280) = ((float)GEN_TOF(((float10)param_2 + (float10)*(float *)(in_ecx + 0x280))));
    return 0;
  }
  *(float *)(in_ecx + 0x280) =
       ((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x24) + (float10)*(float *)(in_ecx + 0x280))));
  return 0;
}

/* ref: FUN_00558980 */
uint F_00558980(unsigned int gen_a0)
{
  GEN_ENTER(0x558980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = F_00c48350((undefined *)((int)this + 0x2a0),0,0x100);
  *(undefined4 *)((int)this + 0x3a0) = 0;
  *(undefined4 *)((int)this + 0x3a4) = 0;
  return (uint)pvVar1;
}

/* ref: FUN_005589b0 */
uint F_005589b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5589b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  gen_size32 _Size;
  undefined * pvVar2;
  undefined * _Dst;
  int iVar3;
  int * piVar4;
  
  piVar4 = (int *)(param_1 * 0x40 + 0x2a0 + (int)this);
  iVar1 = (param_1 + 0x10) * 0x20 - (int)piVar4;
  iVar3 = 8;
  do {
    pvVar2 = *(undefined * PTR32 *)((int)this + iVar1 + (int)piVar4);
    if (pvVar2 != (undefined *)0x0) {
      _Dst = (undefined *)*piVar4;
      if (_Dst == (undefined *)0x0) {
        _Dst = (undefined *)piVar4[8];
        if (_Dst == (undefined *)0x0) goto LAB_005589ff;
        _Size = (int)((int)(uintptr_t)pvVar2) << 7;
      }
      else {
        _Size = (int)((int)(uintptr_t)pvVar2) * 0x60;
      }
      pvVar2 = F_00c48350(_Dst,0,_Size);
    }
LAB_005589ff: ;
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      return (uint)pvVar2;
    }
  } while( true );
}

/* ref: FUN_00558a10 */
unsigned int F_00558a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != (undefined *)0x0) && (param_2 != 0)) {
    F_00c48350(param_1,0,param_2 << 7);
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerSearchPosition::vf3 */
uint F_00558a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = F_005585d0(param_1,param_2);
  if (param_1[0x17c] != (undefined1)0x0) {
    param_1[0x17d] = (undefined1)0x1;
    *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0xbc);
    return uVar1;
  }
  if (((float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x16c) + (float10)*(float *)(param_1 + 0x15c))))
       <= (float10)*(float *)(param_1 + 0x174)) &&
     ((float10)*(float *)(param_1 + 0x174) <
      (float10)*(float *)(param_1 + 0x148) +
      (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 0x16c) + (float10)*(float *)(param_1 + 0x15c)))))
     ) {
    param_1[0x17c] = (undefined1)0x1;
    return uVar1;
  }
  return uVar1;
}

/* ref: FUN_00558ac0 */
byte F_00558ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x558ac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x17c) != '\0') &&
     ((float10)*(float *)(in_ecx + 0x170) <
      (float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x168) + (float10)*(float *)(in_ecx + 0x158))))))
  {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf4 */
uint F_00558b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  *(undefined4 *)(in_ecx + 8) = 0;
  return param_2;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFBase::vf5 */
uint F_00558b20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558b20u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00558b30 */
uint F_00558b30(unsigned int gen_a0)
{
  GEN_ENTER(0x558b30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  if (((byte)((byte)param_1 + 0x80) < 0x40) || ((byte)param_1 < 0x80)) {
    return 1;
  }
  if ((byte)param_1 < 0xe0) {
    return 2;
  }
  if ((byte)param_1 < 0xf0) {
    return 3;
  }
  return (-(uint)((byte)param_1 < 0xf8) & 3) + 1;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf1 */
unsigned int F_00558b80(unsigned int gen_a0)
{
  GEN_ENTER(0x558b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFCount::vf2 */
unsigned int F_00558b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558b90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0xc) = *(int *)(in_ecx + 0xc) + 1;
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf0 */
byte F_00558ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x558ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) != 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf1 */
uint F_00558bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x558bb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0xc) = 0;
  *(undefined2 *)(in_ecx + 0x10) = 0;
  return 0;
}

/* ref: Component::GUI2::AtkFontAnalyzerCRLFSearch::vf2 */
uint F_00558bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0xc) = param_1;
  *(undefined2 *)(this + 0x10) = (undefined2)param_2;
  return param_1;
}

/* ref: FUN_00558be0 */
uint F_00558be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return param_1;
}

/* ref: Component::GUI2::AtkFontAnalyzerFunctorSelect::vf1 */
uint F_00558c00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x558c00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xa4);
  if ((*(uint *)(this + 4) <= uVar1) && (uVar1 <= *(uint *)(this + 8))) {
    *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) | 0x100000;
    return uVar1;
  }
  *(uint *)(param_1 + 0x50) = *(uint *)(param_1 + 0x50) & 0xffefffff;
  return uVar1;
}

/* ref: FUN_00558c30 */
uint F_00558c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x558c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)this + 0x970;
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 4) + 0x20))))((int)this + 4,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x144) + 0x20))))((int)this + 0x144,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x20))))((int)this + 0x2ac,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x654) + 0x20))))((int)this + 0x654,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7f8) + 0x20))))((int)this + 0x7f8,param_1,iVar1);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7d4) + 0x10))))((int)this + 0x7d4,param_1);
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x7e4) + 0x10))))((int)this + 0x7e4,param_1);
  return uVar2;
}

/* ref: FUN_00558cd0 */
uint F_00558cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x558cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if ((char)param_1 != '\0') {
    *(undefined4 *)((int)this + 0x978) = param_2;
    *(undefined4 *)((int)this + 0x97c) = param_3;
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x28))))((int)this + 0x2ac,(int)this + 0x974);
    return uVar1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x2ac) + 0x28))))((int)this + 0x2ac,(int)this + 0x970);
  return uVar1;
}

/* ref: FUN_00558d60 */
unsigned int F_00558d60(float gen_a0)
{
  GEN_ENTER(0x558d60u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00558d80 */
unsigned int F_00558d80(float gen_a0)
{
  GEN_ENTER(0x558d80u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00558dc0 */
uint F_00558dc0(unsigned int gen_a0)
{
  GEN_ENTER(0x558dc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar1 = 0;
  *(undefined4 *)((int)this + 0xc5c) = 0;
  *(undefined4 *)((int)this + 0xc60) = 0;
  *(undefined4 *)((int)this + 0xc64) = 0;
  *(undefined2 *)((int)this + 0xc6a) = 0;
  *(undefined1 *)((int)this + 0xc6c) = 0;
  *(undefined2 *)((int)this + 0xc6d) = 1;
  do {
    uVar2 = uVar1 & 0xffff;
    uVar1 = uVar1 + 1;
    *(undefined4 *)((int)this + uVar2 * 4 + 4) = 0;
  } while (uVar1 < 7);
  *(undefined2 *)((int)this + 0xc68) = 0;
  *(undefined4 *)((int)this + 0xc58) = 0;
  return 0;
}

/* ref: FUN_00558e10 */
uint F_00558e10(unsigned int gen_a0)
{
  GEN_ENTER(0x558e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(short *)(in_ecx + 0xc68) == 0) {
    return *(uint *)(in_ecx + 0xc58);
  }
  return *((uint *)GEN_TOP((in_ecx + 0x50 + *(short *)(in_ecx + 0xc68) * 0xc)));
}

/* ref: FUN_00558e30 */
uint F_00558e30(unsigned int gen_a0)
{
  GEN_ENTER(0x558e30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * in_EAX = 0;
  int iVar1;
  
  if (*(int *)((int)this + 0xc58) != 0) {
    in_EAX = (int *)0x0;
    iVar1 = 0;
    if (0 < *(short *)((int)this + 0xc68)) {
      in_EAX = (int *)((int)this + 0x5c);
      do {
        if (*in_EAX == *(int *)((int)this + 0xc58)) {
          *in_EAX = 0;
          in_EAX[-1] = 0;
        }
        iVar1 = iVar1 + 1;
        in_EAX = in_EAX + 3;
      } while (iVar1 < *(short *)((int)this + 0xc68));
    }
    *(undefined4 *)((int)this + 0xc58) = 0;
  }
  return (uint)in_EAX;
}

/* ref: FUN_00558e90 */
unsigned int F_00558e90(unsigned int gen_a0)
{
  GEN_ENTER(0x558e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(char *)((int)this + 0x22d2a) == '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this);
    if ((char)uVar1 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x18))(this,0,0x2f);
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,0,9);
      uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x24))(this,0);
      if (uVar1 != 0) {
        **(undefined4 * PTR32 *)(uVar1 + 0x20) = 0xfffffffe;
        *(undefined1 *)(uVar1 + 0x1d) = 1;
      }
    }
    ((code *)*(gen_code32 *)(*(int *)this + 0xc4))(this);
    ((code *)*(gen_code32 *)(*(int *)this + 0xf4))(this,0);
    *(undefined1 *)((int)this + 0x22d2a) = 1;
  }
  return 0;
}

/* ref: FUN_00558f10 */
unsigned int F_00558f10(unsigned int gen_a0)
{
  GEN_ENTER(0x558f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  code * pcVar3;
  
  if (*(char *)((int)this + 0x22d2a) != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xf0))(this);
    if ((char)uVar1 == '\0') {
      ((code *)*(gen_code32 *)(*(int *)this + 0x30))(this,0);
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x34);
    }
    else {
      ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,0);
      pcVar3 = *(gen_code32 *)(*(int *)this + 0x40);
    }
    (*pcVar3)(this,0);
    ((code *)*(gen_code32 *)(*(int *)this + 200))(this);
    if ((char)uVar1 == '\0') {
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de0)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20dec) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de0));
      }
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de2)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20df8) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de2));
      }
      iVar2 = 0;
      if (0 < *(short *)((int)this + 0x20de4)) {
        do {
          *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20e04) + iVar2 * 4))) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(short *)((int)this + 0x20de4));
      }
    }
    *(undefined1 *)((int)this + 0x22d2a) = 0;
  }
  return 0;
}

/* ref: FUN_00559010 */
unsigned int F_00559010(unsigned int gen_a0)
{
  GEN_ENTER(0x559010u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * pbVar1;
  
  if (*(char *)((int)this + 0x22d2b) == '\0') {
    *(undefined1 *)((int)this + 0x22d2b) = 1;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0xc))))(*(int * PTR32 *)((int)this + 0x130));
    ((code *)*(gen_code32 *)(*(int *)this + 0xcc))(this);
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + 0x130) + 0x1b0)));
    *pbVar1 = *pbVar1 | 2;
  }
  return 0;
}

/* ref: FUN_00559050 */
uint F_00559050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559050u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x10))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00559060 */
unsigned int F_00559060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559060u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf1 */
uint F_00559070(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559070u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x24))))
                    (this + 0x2223c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf2 */
uint F_00559090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559090u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x28))))
                    (this + 0x2223c,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf3 */
uint F_005590b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5590b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x40))))(this + 0x2223c,param_1);
  if (uVar1 == 0) {
    uVar1 = F_0042a990(&REFG(undefined * PTR32, 0x12fd328));
  }
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf4 */
byte F_005590e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5590e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(char *)(in_ecx + 0x22d2b) != '\0') &&
     (((char)param_2 == '\0' || (*(char *)(in_ecx + 0x22d2c) != '\0')))) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf5 */
byte F_00559110(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x559110u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined1 AVar1;
  code * pcVar2;
  undefined * pAVar3;
  uint uVar4;
  
  pAVar3 = this + 0x22cf0;
  do {
    AVar1 = *(undefined1 *)pAVar3;
    pAVar3 = pAVar3 + 1;
  } while (AVar1 != (undefined1)0x0);
  if (pAVar3 == this + 0x22cf1) {
    if ((char)param_2 != '\0') {
      return 1;
    }
    F_00c49908(this + 0x22cf0,0x10,param_1);
  }
  else if ((char)param_2 != '\0') {
    return 1;
  }
  F_00558e90(this);
  pcVar2 = *(gen_code32 *)(*(int *)this + 0xd8);
  this[0x22be8] = (undefined1)0x1;
  uVar4 = (*pcVar2)(this,param_1,0,param_3);
  if ((char)uVar4 == '\0') {
    return 1;
  }
  this[0x22be8] = (undefined1)0x2;
  return 1;
}

/* ref: FUN_00559190 */
uint F_00559190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char * param_1 = (char *)(uintptr_t)gen_a1;
  char cVar1;
  int iVar2;
  char * pcVar3;
  uint uVar4;
  
  *(undefined1 *)((int)this + 0x22d29) = 1;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    if (pcVar3 != param_1 + 1) {
      F_00c49908((int)this + 0x22cf0,0x10,param_1);
    }
  }
  iVar2 = *(int *)this;
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xf0))(this);
  uVar4 = ((code *)*(gen_code32 *)(iVar2 + 0xf8))(this,uVar4 & 0xff);
  return uVar4;
}

/* ref: FUN_00559200 */
unsigned int F_00559200(unsigned int gen_a0)
{
  GEN_ENTER(0x559200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * _Dst;
  int iVar1;
  
  if ((*(char *)((int)this + 0x22d2a) != '\0') && (*(char *)((int)this + 0x22d2b) != '\0')) {
    _Dst = (undefined *)((int)this + 0x22bf0);
    F_00c48350(_Dst,0,0x100);
    F_005574c0((undefined *)((int)this + 0x20de0),_Dst,0x100);
    iVar1 = 0xff;
    do {
      if (*(byte *)((int)_Dst + iVar1) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x130) + 0x2c))))
                  (*(int * PTR32 *)((int)this + 0x130),iVar1,*(undefined4 *)((int)this + 0x20df0),
                   *(undefined4 *)((int)this + 0x20dfc),
                   (uint)(*(byte *)((int)_Dst + iVar1) >> 1 & 1));
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf15 */
uint F_00559280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559280u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x20dec) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf16 */
uint F_005592b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5592b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP((*(int *)(in_ecx + 0x20df8) + param_2 * 4)));
  if ((*piVar1 != 0) && (piVar1 = (int *)*piVar1, piVar1 != (int *)0x0)) {
    *(undefined1 *)(piVar1 + 7) = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    piVar1[6] = 0;
  }
  return (uint)piVar1;
}

/* ref: Component::GUI2::AtkModule::vf18 */
uint F_005592e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5592e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x22224) = param_2;
  return param_2;
}

/* ref: Component::GUI2::AtkModule::vf19 */
unsigned int F_005592f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5592f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf24 */
uint F_00559300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x559300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x30))))
                    (*(int * PTR32 *)(this + 0x130),param_1,param_2,param_3);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf25 */
uint F_00559330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559330u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x20))))(*(int * PTR32 *)(this + 0x130),param_1,param_2);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf43 */
uint F_00559360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x24))))(*(int * PTR32 *)(this + 0x130),param_1);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf44 */
uint F_00559380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559380u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x6c))))
                    (*(int * PTR32 *)(this + 0x130),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Component::GUI2::AtkModule::vf45 */
uint F_00559390(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x559390u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x130) + 0x70))))
                    (*(int * PTR32 *)(this + 0x130),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: FUN_005593a0 */
uint F_005593a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5593a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  
  piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0x24))))
                            (*(int * PTR32 *)((int)this + 0x10),param_1)));
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar3 = *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x20e9c) + 0x54)));
  this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1)));
  uVar2 = F_00cb0950(this_00,uVar3);
  return uVar2;
}

/* ref: Component::GUI2::AtkModule::vf30 */
byte F_005593e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5593e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22d2d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Component::GUI2::AtkModule::vf32 */
byte F_005593f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5593f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0xb8) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x21a)));
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf31 */
byte F_00559410(unsigned int gen_a0)
{
  GEN_ENTER(0x559410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x22d2e);
}

/* ref: Component::GUI2::AtkModule::vf33 */
byte F_00559420(unsigned int gen_a0)
{
  GEN_ENTER(0x559420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if (((*(int *)(in_ecx + 0xb8) != 0) &&
      (iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0xcc))), iVar1 != 0)) &&
     ((*(byte *)(iVar1 + 0xf9) & 0x20) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: Component::GUI2::AtkModule::vf36 */
uint F_00559450(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559450u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)(this + 0x20dc8) = param_1;
  *(undefined4 *)(this + 0x20dcc) = param_2;
  return param_1;
}

/* ref: FUN_00559470 */
uint F_00559470(unsigned int gen_a0)
{
  GEN_ENTER(0x559470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20ea0;
}

/* ref: FUN_00559480 */
unsigned int F_00559480(unsigned int gen_a0)
{
  GEN_ENTER(0x559480u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00559490 */
byte F_00559490(unsigned int gen_a0)
{
  GEN_ENTER(0x559490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20db2);
}

/* ref: FUN_005594a0 */
byte F_005594a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5594a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x20db3) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_005594b0 */
byte F_005594b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5594b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20db3);
}

/* ref: FUN_005594c0 */
uint F_005594c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5594c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 2) {
    return *(uint *)(in_ecx + 0x22d10);
  }
  return *(uint *)(in_ecx + 0x22d14);
}

/* ref: FUN_005594e0 */
byte F_005594e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5594e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((byte *)GEN_TOP((*((int *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x14))) + 0x1b0))) >> 7;
}

/* ref: Component::GUI2::AtkModule::vf39 */
uint F_00559520(unsigned int gen_a0)
{
  GEN_ENTER(0x559520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xb8) + 0x34)));
}

/* ref: Component::GUI2::AtkModule::vf40 */
uint F_00559530(unsigned int gen_a0)
{
  GEN_ENTER(0x559530u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 8) + 0x18))))(this + 8);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x2223c) + 0x34))))(this + 0x2223c,2);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 4))(this,0);
  return uVar1;
}

/* ref: FUN_00559580 */
byte F_00559580(unsigned int gen_a0)
{
  GEN_ENTER(0x559580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  F_00c48350((undefined *)((int)this + 0x14),0,0x20000);
  F_00c48350(*(undefined * PTR32 *)((int)this + 0x10),0,*(int *)((int)this + 0xc) * 4);
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_00a4b410(this,0);
  return bVar1;
}

/* ref: FUN_005595d0 */
uint F_005595d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5595d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  if (0x7fff < param_1) {
    return 0xffffffff;
  }
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 0x14);
  if (piVar1 == (int *)0x0) {
    return 0xfffffffe;
  }
  F_00a4b450(this,param_1);
  ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
  ((code *)*(gen_code32 *)*piVar1)(piVar1,1);
  *(undefined4 *)((int)this + param_1 * 4 + 0x14) = 0;
  return 0;
}

/* ref: FUN_00559630 */
uint F_00559630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 < 0x8000) {
    uVar1 = *(uint *)((int)this + param_1 * 4 + 0x14);
  }
  return uVar1;
}

/* ref: FUN_00559650 */
uint F_00559650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x74) = param_2;
  return uVar1;
}

/* ref: FUN_00559660 */
uint F_00559660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x70) = param_2;
  return uVar1;
}

/* ref: FUN_00559670 */
uint F_00559670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined4 *)(uVar1 + 0x78) = param_2;
  return uVar1;
}

/* ref: FUN_00559680 */
uint F_00559680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  *(undefined4 *)(uVar1 + 0x94) = *param_1;
  *(undefined4 *)(uVar1 + 0x98) = param_1[1];
  *(undefined4 *)(uVar1 + 0x9c) = param_1[2];
  *(undefined4 *)(uVar1 + 0xa0) = param_1[3];
  return uVar1;
}

/* ref: FUN_005596b0 */
uint F_005596b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5596b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(byte *)(uVar1 + 0xa4) = *(byte *)(uVar1 + 0xa4) ^ (*(byte *)(uVar1 + 0xa4) ^ (byte)param_2) & 1;
  return uVar1;
}

/* ref: FUN_005596d0 */
ushort F_005596d0(unsigned int gen_a0)
{
  GEN_ENTER(0x5596d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if (0xfffe < param_1) {
    return 0;
  }
  return -(short)param_1 - 1;
}

/* ref: FUN_005596f0 */
uint F_005596f0(float gen_a0)
{
  GEN_ENTER(0x5596f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  float10 fVar1;
  uint local_c;
  
  fVar1 = (float10)((float)GEN_TOF((((float10)1 - (float10)param_1) * (float10)REFG(double, 0x109cab0))));
  if (fVar1 <= (float10)0) {
    return 0;
  }
  if ((float10)REFG(double, 0x109cab0) <= fVar1) {
    return 0xffff;
  }
  local_c = (uint)(longlong)TRUNC(fVar1);
  return local_c;
}

/* ref: FUN_00559770 */
byte F_00559770(unsigned int gen_a0)
{
  GEN_ENTER(0x559770u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  
  bVar1 = F_00415150(param_1);
  REFG(undefined1, 0x137996c) = bVar1;
  return bVar1;
}

/* ref: FUN_005597f0 */
uint F_005597f0(unsigned int gen_a0)
{
  GEN_ENTER(0x5597f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  undefined2 * puVar3;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x40) = uVar1;
  *(undefined4 *)((int)this + 0x44) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0xffffffff;
  uVar2 = 0;
  puVar3 = (undefined2 *)((int)this + 0x54);
  do {
    *puVar3 = 0;
    *(undefined1 *)((int)this + uVar2 + 0x5a) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 100) = 0xffffffff;
  uVar2 = 0;
  puVar3 = (undefined2 *)((int)this + 0x68);
  do {
    *puVar3 = 0;
    *(undefined1 *)((int)this + uVar2 + 0x6e) = 100;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (uVar2 < 3);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x20) = REFG(undefined4, 0x131de4c);
  *(undefined4 *)((int)this + 0x24) = REFG(undefined4, 0x131de50);
  *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x131de54);
  *(undefined4 *)((int)this + 0x2c) = REFG(undefined4, 0x131de58);
  *(undefined4 *)((int)this + 0x30) = REFG(undefined4, 0x131de5c);
  uVar1 = REFG(undefined4, 0x131de60);
  *(undefined4 *)((int)this + 0x7c) = 0;
  uVar2 = *(uint *)((int)this + 0x88) & 0xfffffff9 | 1;
  *(undefined4 *)((int)this + 0x34) = uVar1;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(uint *)((int)this + 0x88) = uVar2;
  return uVar2;
}

/* ref: FUN_005598c0 */
unsigned int F_005598c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5598c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  bool bVar1;
  
  if (((*(uint *)(param_1 + 0x88) & 1) == 0) &&
     ((bVar1 = GEN_ISNAN((float10)*(float *)(param_1 + 0x38)) || GEN_ISNAN((float10)param_2),
      bVar1 == (bVar1 || (float10)*(float *)(param_1 + 0x38) == (float10)param_2) ||
      (bVar1 = GEN_ISNAN((float10)*(float *)(param_1 + 0x3c)) || GEN_ISNAN((float10)param_3),
      bVar1 == (bVar1 || (float10)*(float *)(param_1 + 0x3c) == (float10)param_3))))) {
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
  *(float *)(param_1 + 0x38) = param_2;
  *(float *)(param_1 + 0x3c) = param_3;
  return 0;
}

/* ref: FUN_00559910 */
unsigned int F_00559910(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x559910u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x38);
    *(float *)(param_1 + 0x38) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      return 0;
    }
  }
  else {
    *(float *)(param_1 + 0x38) = param_2;
  }
  return 0;
}

/* ref: FUN_00559950 */
unsigned int F_00559950(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x559950u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  bool bVar2;
  
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar1 = *(float *)(param_1 + 0x3c);
    *(float *)(param_1 + 0x3c) = param_2;
    bVar2 = GEN_ISNAN((float10)fVar1) || GEN_ISNAN((float10)param_2);
    if (bVar2 == (bVar2 || (float10)fVar1 == (float10)param_2)) {
      *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      return 0;
    }
  }
  else {
    *(float *)(param_1 + 0x3c) = param_2;
  }
  return 0;
}

/* ref: FUN_005599e0 */
unsigned int F_005599e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5599e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4c) = param_2;
  return 0;
}

/* ref: FUN_00559a00 */
unsigned int F_00559a00(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x559a00u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  float10 fVar2;
  
  if (((*(uint *)(in_ecx + 0x88) & 1) == 0) &&
     ((fVar1 = (float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) -
                                                   (float10)param_2)))))), fVar2 = (float10)REFG(float, 0x10905c4)
      , (!GEN_ISNAN(fVar2) && !GEN_ISNAN(fVar1)) && !(fVar2 < fVar1) ||
      ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x78) - (float10)param_3))))))
       <= fVar2)))) {
    *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
  }
  *(float *)(in_ecx + 0x74) = param_2;
  *(float *)(in_ecx + 0x78) = param_3;
  return 0;
}

/* ref: FUN_00559a80 */
unsigned int F_00559a80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x559a80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
    fVar1 = *(float *)(in_ecx + 0x74);
    *(float *)(in_ecx + 0x74) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      return 0;
    }
  }
  else {
    *(float *)(in_ecx + 0x74) = param_2;
  }
  return 0;
}

/* ref: FUN_00559ae0 */
unsigned int F_00559ae0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x559ae0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float fVar1;
  
  if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
    fVar1 = *(float *)(in_ecx + 0x78);
    *(float *)(in_ecx + 0x78) = param_2;
    if ((float10)((float)GEN_TOF(ABS((float10)(float)((float10)fVar1 - (float10)param_2)))) <=
        (float10)REFG(float, 0x10905c4)) {
      *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      return 0;
    }
  }
  else {
    *(float *)(in_ecx + 0x78) = param_2;
  }
  return 0;
}

/* ref: FUN_00559b70 */
uint F_00559b70(unsigned int gen_a0)
{
  GEN_ENTER(0x559b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  if (in_ecx == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (uint)*(ushort *)(in_ecx + 0x18);
    if (999 < *(ushort *)(in_ecx + 0x18)) {
      return 10000;
    }
  }
  return uVar1;
}

/* ref: FUN_00559b90 */
uint F_00559b90(unsigned int gen_a0)
{
  GEN_ENTER(0x559b90u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 2)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559ba0 */
uint F_00559ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x559ba0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 3)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bb0 */
uint F_00559bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x559bb0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 4)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bc0 */
uint F_00559bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x559bc0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 5)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559bf0 */
uint F_00559bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x559bf0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(short *)(in_ecx + 0x18) != 8)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c00 */
uint F_00559c00(unsigned int gen_a0)
{
  GEN_ENTER(0x559c00u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  if ((in_ecx == 0) || (*(ushort *)(in_ecx + 0x18) < 1000)) {
    in_ecx = 0;
  }
  return in_ecx;
}

/* ref: FUN_00559c20 */
uint F_00559c20(unsigned int gen_a0)
{
  GEN_ENTER(0x559c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (999 < *(ushort *)(in_ecx + 0x18))) {
    return *(uint *)(in_ecx + 0x8c);
  }
  return 0;
}

/* ref: FUN_00559c60 */
uint F_00559c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  
  if ((this != (undefined *)0x0) && (in_EAX = *(uint *)((int)this + 0x1c), in_EAX != 0)) {
    *(ushort *)(in_EAX + 0x22) = *(ushort *)(in_EAX + 0x22) | 0x8000;
    *(undefined4 *)(in_EAX + 0x18) = param_1;
  }
  return in_EAX;
}

/* ref: FUN_00559cb0 */
uint F_00559cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x559cb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x1c) != 0)) {
    return (uint)*((ushort *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x10)));
  }
  return 0;
}

/* ref: FUN_00559cd0 */
uint F_00559cd0(unsigned int gen_a0)
{
  GEN_ENTER(0x559cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((in_ecx != 0) && (*(int *)(in_ecx + 0x1c) != 0)) {
    return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x1c) + 0x18)));
  }
  return 0;
}

/* ref: FUN_00559cf0 */
uint F_00559cf0(unsigned int gen_a0)
{
  GEN_ENTER(0x559cf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  if ((in_ecx != 0) && (iVar1 = *(int *)(in_ecx + 0x1c), iVar1 != 0)) {
    return CONCAT22((short)((uint)iVar1 >> 0x10),*(undefined2 *)(iVar1 + 0x20));
  }
  return 0;
}

/* ref: FUN_00559d10 */
unsigned int F_00559d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559d10u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x38);
    *param_3 = *(undefined4 *)(in_ecx + 0x3c);
  }
  return 0;
}

/* ref: FUN_00559d30 */
unsigned int F_00559d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  
  if (this != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x3c);
    *param_1 = (short)(int)*(float *)((int)this + 0x38);
    *param_2 = (short)(int)fVar1;
  }
  return 0;
}

/* ref: FUN_00559d60 */
float10 F_00559d60(unsigned int gen_a0)
{
  GEN_ENTER(0x559d60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x38);
  }
  return (float10)0;
}

/* ref: FUN_00559d70 */
ushort F_00559d70(unsigned int gen_a0)
{
  GEN_ENTER(0x559d70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (ushort)(int)*(float *)(in_ecx + 0x38);
  }
  return 0;
}

/* ref: FUN_00559d80 */
float10 F_00559d80(unsigned int gen_a0)
{
  GEN_ENTER(0x559d80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x3c);
  }
  return (float10)0;
}

/* ref: FUN_00559d90 */
ushort F_00559d90(unsigned int gen_a0)
{
  GEN_ENTER(0x559d90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (ushort)(int)*(float *)(in_ecx + 0x3c);
  }
  return 0;
}

/* ref: FUN_00559da0 */
uint F_00559da0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x559da0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined1 uVar1;
  uint in_EAX = 0;
  undefined2 uVar2;
  bool bVar3;
  bool bVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_1 == 0) {
    return in_EAX;
  }
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar5 = (float10)param_2;
    fVar6 = (float10)*(float *)(param_1 + 0x38);
    bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
    bVar4 = bVar3 || fVar6 == fVar5;
    uVar2 = (undefined2)(in_EAX >> 0x10);
    uVar1 = (undefined1)in_EAX;
    in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
    if (bVar3 != bVar4) {
      fVar5 = (float10)param_3;
      fVar6 = (float10)*(float *)(param_1 + 0x3c);
      bVar3 = GEN_ISNAN(fVar6) || GEN_ISNAN(fVar5);
      bVar4 = bVar3 || fVar6 == fVar5;
      in_EAX = CONCAT22(uVar2,CONCAT11(bVar4 << 6 | bVar3 << 2 | 2U | !(fVar5 <= fVar6),uVar1));
      if (bVar3 != bVar4) goto LAB_00559ddb;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
LAB_00559ddb: ;
  *(float *)(param_1 + 0x38) = param_2;
  *(float *)(param_1 + 0x3c) = param_3;
  return in_EAX;
}

/* ref: FUN_00559e00 */
uint F_00559e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559e00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint in_EAX = 0;
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  
  if (param_1 == 0) {
    return in_EAX;
  }
  uVar1 = (uint)(short)param_2;
  fVar6 = (float)(int)uVar1;
  if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
    fVar4 = (float10)(int)uVar1;
    fVar5 = (float10)*(float *)(param_1 + 0x38);
    bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
    bVar3 = bVar2 || fVar5 == fVar4;
    uVar1 = CONCAT22((short)param_2 >> 0xf,
                     CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
    if (bVar2 != bVar3) {
      fVar4 = (float10)(int)(short)param_3;
      fVar5 = (float10)*(float *)(param_1 + 0x3c);
      bVar2 = GEN_ISNAN(fVar5) || GEN_ISNAN(fVar4);
      bVar3 = bVar2 || fVar5 == fVar4;
      uVar1 = CONCAT22((short)param_2 >> 0xf,
                       CONCAT11(bVar3 << 6 | bVar2 << 2 | 2U | !(fVar4 <= fVar5),(char)param_2));
      if (bVar2 != bVar3) goto LAB_00559e5b;
    }
    *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
  }
LAB_00559e5b: ;
  *(float *)(param_1 + 0x38) = fVar6;
  *(float *)(param_1 + 0x3c) = (float)(int)(short)param_3;
  return uVar1;
}

/* ref: FUN_00559eb0 */
uint F_00559eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559eb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*(float *)(param_1 + 0x38);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x38) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f00 */
uint F_00559f00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x559f00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (param_1 != 0) {
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)param_2;
      fVar4 = (float10)*(float *)(param_1 + 0x3c);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)(in_EAX >> 0x10),
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)in_EAX));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x3c) = param_2;
  }
  return in_EAX;
}

/* ref: FUN_00559f40 */
uint F_00559f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x559f40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  bool bVar1;
  bool bVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (param_1 != 0) {
    in_EAX = (uint)(short)param_2;
    fVar5 = (float)(int)in_EAX;
    if ((*(uint *)(param_1 + 0x88) & 1) == 0) {
      fVar3 = (float10)(int)in_EAX;
      fVar4 = (float10)*(float *)(param_1 + 0x3c);
      bVar1 = GEN_ISNAN(fVar4) || GEN_ISNAN(fVar3);
      bVar2 = bVar1 || fVar4 == fVar3;
      in_EAX = CONCAT22((short)param_2 >> 0xf,
                        CONCAT11(bVar2 << 6 | bVar1 << 2 | 2U | !(fVar3 <= fVar4),(char)param_2));
      if (bVar1 == bVar2) {
        *(uint *)(param_1 + 0x88) = *(uint *)(param_1 + 0x88) | 1;
      }
    }
    *(float *)(param_1 + 0x3c) = fVar5;
  }
  return in_EAX;
}

/* ref: FUN_00559f90 */
unsigned int F_00559f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559f90u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x30);
    *param_3 = *(undefined4 *)(in_ecx + 0x34);
  }
  return 0;
}

/* ref: FUN_00559fb0 */
unsigned int F_00559fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  float fVar1;
  
  if (this != (undefined *)0x0) {
    fVar1 = *(float *)((int)this + 0x34);
    *param_1 = (short)(int)*(float *)((int)this + 0x30);
    *param_2 = (short)(int)fVar1;
  }
  return 0;
}

/* ref: FUN_00559fe0 */
unsigned int F_00559fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x559fe0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x40);
    *param_3 = *(undefined4 *)(in_ecx + 0x44);
  }
  return 0;
}

/* ref: FUN_0055a000 */
unsigned int F_0055a000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined2 *)((int)this + 0x7c);
    *param_2 = *(undefined2 *)((int)this + 0x7e);
  }
  return 0;
}

/* ref: FUN_0055a020 */
ushort F_0055a020(unsigned int gen_a0)
{
  GEN_ENTER(0x55a020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(ushort *)(in_ecx + 0x7c);
  }
  return 0;
}

/* ref: FUN_0055a030 */
ushort F_0055a030(unsigned int gen_a0)
{
  GEN_ENTER(0x55a030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(ushort *)(in_ecx + 0x7e);
  }
  return 0;
}

/* ref: FUN_0055a040 */
ushort F_0055a040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort in_AX = 0;
  
  if (this != (undefined *)0x0) {
    *(ushort *)((int)this + 0x7c) = (ushort)param_1;
    *(undefined2 *)((int)this + 0x7e) = (undefined2)param_2;
    in_AX = (ushort)param_1;
  }
  return in_AX;
}

/* ref: FUN_0055a060 */
ushort F_0055a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a060u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x7c) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a080 */
ushort F_0055a080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a080u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x7e) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a0a0 */
unsigned int F_0055a0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ ((param_2 & 0xff) << 0x17 ^ *(uint *)(in_ecx + 0x84)) & 0x800000
    ;
  }
  return 0;
}

/* ref: FUN_0055a0e0 */
unsigned int F_0055a0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0055a120 */
unsigned int F_0055a120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a120u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x50) = param_2;
  }
  return 0;
}

/* ref: FUN_0055a140 */
unsigned int F_0055a140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a140u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  undefined2 * param_3 = (undefined2 *)(uintptr_t)gen_a3;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined2 *)((int)this + 0x54);
    *param_2 = *(undefined2 *)((int)this + 0x56);
    *param_3 = *(undefined2 *)((int)this + 0x58);
  }
  return 0;
}

/* ref: FUN_0055a170 */
ushort F_0055a170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  ushort in_AX = 0;
  
  if (this != (undefined *)0x0) {
    *(undefined2 *)((int)this + 0x54) = (undefined2)param_1;
    *(undefined2 *)((int)this + 0x56) = (undefined2)param_2;
    *(ushort *)((int)this + 0x58) = (ushort)param_3;
    in_AX = (ushort)param_3;
  }
  return in_AX;
}

/* ref: FUN_0055a1a0 */
unsigned int F_0055a1a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a1a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a3;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined1 *)((int)this + 0x5a);
    *param_2 = *(undefined1 *)((int)this + 0x5b);
    *param_3 = *(undefined1 *)((int)this + 0x5c);
  }
  return 0;
}

/* ref: FUN_0055a1d0 */
byte F_0055a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55a1d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte in_AL = 0;
  
  if (this != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x5a) = (undefined1)param_1;
    *(undefined1 *)((int)this + 0x5b) = (undefined1)param_2;
    *(byte *)((int)this + 0x5c) = (byte)param_3;
    in_AL = (byte)param_3;
  }
  return in_AL;
}

/* ref: FUN_0055a1f0 */
byte F_0055a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(byte *)(in_ecx + 0x53);
  }
  return 0;
}

/* ref: FUN_0055a200 */
unsigned int F_0055a200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a200u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x53) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_0055a220 */
byte F_0055a220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if ((this != (undefined *)0x0) && (*(int * PTR32 *)((int)this + 0x80) != (int *)0x0)) {
    for (iVar1 = **(int * PTR32 *)((int)this + 0x80); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a260 */
uint F_0055a260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  
  if ((this != (undefined *)0x0) && (*(int * PTR32 *)((int)this + 0x80) != (int *)0x0)) {
    for (iVar1 = **(int * PTR32 *)((int)this + 0x80); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
      if (*(byte *)(iVar1 + 0x14) == (ushort)param_1) {
        return *(uint *)(iVar1 + 0xc);
      }
    }
  }
  return 0;
}

/* ref: FUN_0055a2a0 */
uint F_0055a2a0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a2a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (uint)*(ushort *)(in_ecx + 0x84);
  }
  return 0;
}

/* ref: FUN_0055a2b0 */
ushort F_0055a2b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a2b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ushort in_AX = 0;
  
  if (in_ecx != 0) {
    *(ushort *)(in_ecx + 0x84) = (ushort)param_2;
    in_AX = (ushort)param_2;
  }
  return in_AX;
}

/* ref: FUN_0055a2d0 */
uint F_0055a2d0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a2d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((in_ecx != 0) && ((*(uint *)(in_ecx + 0x84) & 0x100000) != 0)) &&
     ((*(uint *)(in_ecx + 0x88) & 0x20000) == 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0055a300 */
byte F_0055a300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte in_AL = 0;
  
  if (this != (undefined *)0x0) {
    *(uint *)((int)this + 0x84) =
         *(uint *)((int)this + 0x84) ^
         ((uint)(byte)param_1 << 0x14 ^ *(uint *)((int)this + 0x84)) & 0x100000;
    *(uint *)((int)this + 0x88) =
         *(uint *)((int)this + 0x88) ^
         ((uint)((byte)param_1 == 0) << 7 ^ *(uint *)((int)this + 0x88)) & 0x80;
    in_AL = (byte)param_1;
  }
  return in_AL;
}

/* ref: FUN_0055a350 */
uint F_0055a350(unsigned int gen_a0)
{
  GEN_ENTER(0x55a350u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a370 */
unsigned int F_0055a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ ((param_2 & 0xff) << 0x15 ^ *(uint *)(in_ecx + 0x84)) & 0x200000
    ;
  }
  return 0;
}

/* ref: FUN_0055a3a0 */
byte F_0055a3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)((uint)*(undefined4 *)(in_ecx + 0x84) >> 0x19) & 1;
  }
  return 0;
}

/* ref: FUN_0055a3c0 */
uint F_0055a3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a3c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = (param_2 << 0x19 ^ *(uint *)(in_ecx + 0x84)) & 0x2000000;
    *(uint *)(in_ecx + 0x84) = *(uint *)(in_ecx + 0x84) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a3f0 */
uint F_0055a3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1a & 1;
  }
  return 0;
}

/* ref: FUN_0055a410 */
unsigned int F_0055a410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a410u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1a ^ *(uint *)(in_ecx + 0x84)) & 0x4000000;
  }
  return 0;
}

/* ref: FUN_0055a440 */
byte F_0055a440(unsigned int gen_a0)
{
  GEN_ENTER(0x55a440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)((uint)*(undefined4 *)(in_ecx + 0x84) >> 0x1b) & 1;
  }
  return 0;
}

/* ref: FUN_0055a460 */
unsigned int F_0055a460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1b ^ *(uint *)(in_ecx + 0x84)) & 0x8000000;
  }
  return 0;
}

/* ref: FUN_0055a490 */
uint F_0055a490(unsigned int gen_a0)
{
  GEN_ENTER(0x55a490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1d & 1;
  }
  return 0;
}

/* ref: FUN_0055a4b0 */
unsigned int F_0055a4b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a4b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x84) =
         *(uint *)(in_ecx + 0x84) ^ (param_2 << 0x1d ^ *(uint *)(in_ecx + 0x84)) & 0x20000000;
  }
  return 0;
}

/* ref: FUN_0055a4e0 */
byte F_0055a4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)*(undefined2 *)(in_ecx + 0x8a) & 1;
  }
  return 0;
}

/* ref: FUN_0055a500 */
unsigned int F_0055a500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a500u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x10 ^ *(uint *)(in_ecx + 0x88)) & 0x10000;
  }
  return 0;
}

/* ref: FUN_0055a530 */
uint F_0055a530(unsigned int gen_a0)
{
  GEN_ENTER(0x55a530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x88) >> 0x13 & 1;
  }
  return 0;
}

/* ref: FUN_0055a550 */
unsigned int F_0055a550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a550u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x13 ^ *(uint *)(in_ecx + 0x88)) & 0x80000;
  }
  return 0;
}

/* ref: FUN_0055a580 */
uint F_0055a580(unsigned int gen_a0)
{
  GEN_ENTER(0x55a580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x88) >> 0x15 & 1;
  }
  return 0;
}

/* ref: FUN_0055a5a0 */
unsigned int F_0055a5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a5a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x15 ^ *(uint *)(in_ecx + 0x88)) & 0x200000
    ;
  }
  return 0;
}

/* ref: FUN_0055a5f0 */
unsigned int F_0055a5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a5f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x16 ^ *(uint *)(in_ecx + 0x88)) & 0x400000
    ;
  }
  return 0;
}

/* ref: FUN_0055a620 */
unsigned int F_0055a620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x88) =
         *(uint *)(in_ecx + 0x88) ^ ((param_2 & 0xff) << 0x14 ^ *(uint *)(in_ecx + 0x88)) & 0x100000
    ;
  }
  return 0;
}

/* ref: FUN_0055a650 */
byte F_0055a650(unsigned int gen_a0)
{
  GEN_ENTER(0x55a650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)(*(uint *)(in_ecx + 0x88) >> 0x11) & 1;
  }
  return 0;
}

/* ref: FUN_0055a670 */
byte F_0055a670(unsigned int gen_a0)
{
  GEN_ENTER(0x55a670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (byte)(*(uint *)(in_ecx + 0x88) >> 0x12) & 1;
  }
  return 0;
}

/* ref: FUN_0055a690 */
uint F_0055a690(unsigned int gen_a0)
{
  GEN_ENTER(0x55a690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x84) >> 0x1e & 1;
  }
  return 0;
}

/* ref: FUN_0055a6b0 */
uint F_0055a6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a6b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    in_EAX = (param_2 << 0x1e ^ *(uint *)(in_ecx + 0x84)) & 0x40000000;
    *(uint *)(in_ecx + 0x84) = *(uint *)(in_ecx + 0x84) ^ in_EAX;
  }
  return in_EAX;
}

/* ref: FUN_0055a6e0 */
unsigned int F_0055a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55a6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return 0;
  }
  return 0;
}

/* ref: FUN_0055a710 */
unsigned int F_0055a710(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x55a710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    *(float *)(in_ecx + 0x4c) = param_2;
  }
  return 0;
}

/* ref: FUN_0055a730 */
unsigned int F_0055a730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55a730u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (in_ecx != 0) {
    *param_2 = *(undefined4 *)(in_ecx + 0x74);
    *param_3 = *(undefined4 *)(in_ecx + 0x78);
  }
  return 0;
}

/* ref: FUN_0055a750 */
float10 F_0055a750(unsigned int gen_a0)
{
  GEN_ENTER(0x55a750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x74);
  }
  return (float10)0;
}

/* ref: FUN_0055a760 */
float10 F_0055a760(unsigned int gen_a0)
{
  GEN_ENTER(0x55a760u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return (float10)*(float *)(in_ecx + 0x78);
  }
  return (float10)0;
}

/* ref: FUN_0055a770 */
unsigned int F_0055a770(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x55a770u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if (in_ecx != 0) {
    F_00559a00(in_ecx,param_2,param_3);
  }
  return 0;
}

/* ref: FUN_0055a790 */
unsigned int F_0055a790(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x55a790u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x74) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      }
    }
    *(float *)(in_ecx + 0x74) = param_2;
  }
  return 0;
}

/* ref: FUN_0055a7e0 */
unsigned int F_0055a7e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x55a7e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (in_ecx != 0) {
    if ((*(uint *)(in_ecx + 0x88) & 1) == 0) {
      if ((float10)((float)GEN_TOF(ABS((float10)((float)GEN_TOF(((float10)*(float *)(in_ecx + 0x78) - (float10)param_2
                                              )))))) <= (float10)REFG(float, 0x10905c4)) {
        *(uint *)(in_ecx + 0x88) = *(uint *)(in_ecx + 0x88) | 1;
      }
    }
    *(float *)(in_ecx + 0x78) = param_2;
  }
  return 0;
}

/* ref: FUN_0055a830 */
unsigned int F_0055a830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (this != (undefined *)0x0) {
    uVar2 = 0;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 3: ;
    case 6: ;
      uVar2 = 0;
      break;
    case 1: ;
    case 4: ;
    case 7: ;
      uVar2 = (int)TRUNC((double)*(ushort *)((int)this + 0x7c) * REFG(double, 0x1088108)) & 0xffff;
      break;
    case 2: ;
    case 5: ;
    case 8: ;
      uVar2 = (uint)*(ushort *)((int)this + 0x7c);
    }
    uVar1 = 0;
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0: ;
    case 1: ;
    case 2: ;
      uVar1 = 0;
      break;
    case 3: ;
    case 4: ;
    case 5: ;
      uVar1 = (int)TRUNC((double)*(ushort *)((int)this + 0x7e) * REFG(double, 0x1088108)) & 0xffff;
      break;
    case 6: ;
    case 7: ;
    case 8: ;
      uVar1 = (uint)*(ushort *)((int)this + 0x7e);
    }
    F_00559a00(this,(float)uVar2,(float)uVar1);
  }
  return 0;
}

/* ref: FUN_0055a960 */
unsigned int F_0055a960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55a960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if ((this != (undefined *)0x0) && (param_1 != 0)) {
    *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
    *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
    *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
    *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
    *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
    *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
    *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)(param_1 + 0x7c);
    *(undefined2 *)((int)this + 0x7e) = *(undefined2 *)(param_1 + 0x7e);
    *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  }
  return 0;
}

/* ref: FUN_0055aa20 */
uint F_0055aa20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  undefined3 extraout_var = 0;
  
  bVar1 = F_0042b740((undefined *)((int)this + 0x9c),param_1);
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_0055aa30 */
unsigned int F_0055aa30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x90) = param_2;
  }
  return 0;
}

/* ref: FUN_0055aa50 */
unsigned int F_0055aa50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55aa50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  if (this != (undefined *)0x0) {
    *(undefined1 *)((int)this + 0x90) = (undefined1)param_1;
    *(undefined1 *)((int)this + 0x91) = (undefined1)param_2;
    *(undefined1 *)((int)this + 0x92) = (undefined1)param_3;
  }
  return 0;
}

/* ref: FUN_0055aa80 */
uint F_0055aa80(unsigned int gen_a0)
{
  GEN_ENTER(0x55aa80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(uint *)(in_ecx + 0x90);
  }
  return 0;
}

/* ref: FUN_0055aa90 */
unsigned int F_0055aa90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aa90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfc) =
         *(byte *)(in_ecx + 0xfc) ^ (*(byte *)(in_ecx + 0xfc) ^ (byte)param_2) & 0xf;
  }
  return 0;
}

/* ref: FUN_0055aab0 */
unsigned int F_0055aab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfe) =
         *(byte *)(in_ecx + 0xfe) ^ (*(byte *)(in_ecx + 0xfe) ^ (byte)param_2) & 1;
  }
  return 0;
}

/* ref: FUN_0055aad0 */
unsigned int F_0055aad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined4 *)(in_ecx + 0x98) = param_2;
  }
  return 0;
}

/* ref: FUN_0055aaf0 */
uint F_0055aaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x55aaf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return *(uint *)(in_ecx + 0xf0);
}

/* ref: FUN_0055ab00 */
uint F_0055ab00(unsigned int gen_a0)
{
  GEN_ENTER(0x55ab00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return (uint)(*(byte *)(in_ecx + 0xfc) >> 4);
}

/* ref: FUN_0055ab20 */
unsigned int F_0055ab20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ab20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (this != (undefined *)0x0) {
    *(byte *)((int)this + 0xfc) = *(byte *)((int)this + 0xfc) & 0xf | (char)param_1 << 4;
  }
  return 0;
}

/* ref: FUN_0055ab50 */
byte F_0055ab50(unsigned int gen_a0)
{
  GEN_ENTER(0x55ab50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx == 0) {
    return 0;
  }
  return *(byte *)(in_ecx + 0xfd);
}

/* ref: FUN_0055ab60 */
unsigned int F_0055ab60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ab60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  char cVar1;
  
  if (this != (undefined *)0x0) {
    cVar1 = *(char *)((int)this + 0xfd);
    *(char *)((int)this + 0xfd) = (char)param_1;
    if ((char)param_2 != '\0') {
      *(char *)((int)this + 0x116) = *(char *)((int)this + 0x116) + ((char)param_1 - cVar1);
    }
  }
  return 0;
}

/* ref: FUN_0055ab90 */
uint F_0055ab90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ab90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint in_EAX = 0;
  
  if (in_ecx != 0) {
    *(uint *)(in_ecx + 0x94) = param_2;
    in_EAX = param_2;
  }
  return in_EAX;
}

/* ref: FUN_0055ac10 */
unsigned int F_0055ac10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ac10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xfe) =
         *(byte *)(in_ecx + 0xfe) ^ ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0xfe)) & 0x20;
  }
  return 0;
}

/* ref: FUN_0055ac70 */
unsigned int F_0055ac70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ac70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (((this != (undefined *)0x0) &&
      (*(byte *)((int)this + 0xfe) = *(byte *)((int)this + 0xfe) & 0x7f | (char)param_1 << 7,
      (byte)((char)param_1 << 7) != 0)) && (*(char *)((int)this + 0x116) == '\0')) {
    *(char *)((int)this + 0x116) = *(char *)((int)this + 0xfd) + '\x01';
  }
  return 0;
}

/* ref: FUN_0055acd0 */
unsigned int F_0055acd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55acd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xff) =
         *(byte *)(in_ecx + 0xff) ^ ((char)param_2 * '\b' ^ *(byte *)(in_ecx + 0xff)) & 8;
  }
  return 0;
}

/* ref: FUN_0055ad10 */
unsigned int F_0055ad10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((in_ecx != 0) && (*(char *)(in_ecx + 0x100) = (char)param_2, (char)param_2 != '\0')) {
    *(byte *)(in_ecx + 0xfe) = *(byte *)(in_ecx + 0xfe) | 0x80;
  }
  return 0;
}

/* ref: FUN_0055ad30 */
unsigned int F_0055ad30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined2 *)(in_ecx + 0x102) = (undefined2)param_2;
  }
  return 0;
}

/* ref: FUN_0055ad50 */
uint F_0055ad50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ad50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (this != (undefined *)0x0) {
    in_EAX = (uint)(ushort)param_1;
    *(uint *)((int)this + 0x104) = in_EAX;
    *(uint *)((int)this + 0x108) = (uint)(ushort)param_2;
  }
  return in_EAX;
}

/* ref: FUN_0055ad70 */
unsigned int F_0055ad70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(byte *)(in_ecx + 0xff) =
         *(byte *)(in_ecx + 0xff) ^ (*(byte *)(in_ecx + 0xff) ^ (byte)param_2) & 1;
  }
  return 0;
}

/* ref: FUN_0055ad90 */
unsigned int F_0055ad90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ad90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x115) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_0055adc0 */
unsigned int F_0055adc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55adc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (in_ecx != 0) {
    *(undefined1 *)(in_ecx + 0x116) = (undefined1)param_2;
  }
  return 0;
}

/* ref: FUN_0055ade0 */
byte F_0055ade0(unsigned int gen_a0)
{
  GEN_ENTER(0x55ade0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (in_ecx != 0) {
    return *(byte *)(in_ecx + 0x116);
  }
  return 0;
}

/* ref: FUN_0055adf0 */
uint F_0055adf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55adf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  
  iVar2 = *(int *)((int)this + 0x90);
  if ((*(byte *)((int)this + 0xa0) & 1) != 0) {
    iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8)));
    uVar1 = iVar3 + iVar2 * 0xc;
    *param_1 = *(short *)(iVar3 + 0x20 + iVar2 * 0xc) + *(short *)(iVar3 + 8 + iVar2 * 0xc);
    *param_2 = *(short *)(uVar1 + 0x52) + *(short *)(uVar1 + 10);
    return uVar1;
  }
  iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + iVar2 * 0xc;
  sVar4 = *(short *)((int)this + 0x9a) + *(short *)((int)this + 0x98);
  *param_1 = sVar4;
  if ((sVar4 == 0) || ((char)param_3 != '\0')) {
    *param_1 = *(short *)(iVar3 + 8);
  }
  sVar4 = *(short *)((int)this + 0x96) + *(short *)((int)this + 0x94);
  *param_2 = sVar4;
  if ((sVar4 == 0) || ((char)param_3 != '\0')) {
    *param_2 = *(short *)(iVar3 + 10);
  }
  return CONCAT22((short)((uint)(iVar2 * 3) >> 0x10),sVar4);
}

/* ref: FUN_0055ae90 */
unsigned int F_0055ae90(unsigned int gen_a0)
{
  GEN_ENTER(0x55ae90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  char cVar2;
  char * pcVar3;
  uint uVar4;
  int iVar5;
  float10 fVar6;
  float local_8;
  
  *(undefined4 *)((int)this + 0x9c) = 0;
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + *(int *)((int)this + 0x90) * 0xc;
  if (iVar1 != 0) {
    pcVar3 = *(char * PTR32 *)((int)this + 0xf4);
    iVar5 = 0;
    local_8 = 0.0;
    cVar2 = *pcVar3;
    while (cVar2 != '\0') {
      cVar2 = pcVar3[iVar5];
      if (cVar2 == ' ') {
        uVar4 = (uint)*(byte *)((int)this + 0x95);
        fVar6 = (float10)uVar4;
LAB_0055af12: ;
        *(float *)((int)this + 0x9c) = ((float)GEN_TOF((fVar6 + (float10)*(float *)((int)this + 0x9c))));
        local_8 = (float)(int)(*(ushort *)(iVar1 + 8) - uVar4);
      }
      else {
        if ((cVar2 == ',') || (cVar2 == '.')) {
          uVar4 = (uint)*(byte *)((int)this + 0x96);
          fVar6 = (float10)uVar4;
          goto LAB_0055af12;
        }
        if ((byte)(cVar2 - 0x30U) < 10) {
          uVar4 = (uint)*(byte *)((int)this + 0x94);
          fVar6 = (float10)uVar4;
          goto LAB_0055af12;
        }
      }
      iVar5 = iVar5 + 1;
      cVar2 = pcVar3[iVar5];
    }
    *(float *)((int)this + 0x9c) = ((float)GEN_TOF(((float10)local_8 + (float10)*(float *)((int)this + 0x9c))))
    ;
  }
  return 0;
}

/* ref: FUN_0055af50 */
byte F_0055af50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55af50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  uint * param_5 = (uint *)(uintptr_t)gen_a5;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0x8c) + 8))) + *(int *)((int)this + 0x90) * 0xc;
  if (((iVar1 != 0) && ('\x1f' < (char)param_1)) && ((char)param_1 < '@')) {
    if ((char)param_1 == ' ') {
      uVar3 = (uint)*(byte *)((int)this + 0x95);
    }
    else if (((char)param_1 == ',') || ((char)param_1 == '.')) {
      uVar3 = (uint)*(byte *)((int)this + 0x96);
    }
    else {
      if (9 < (byte)((char)param_1 - 0x30U)) {
        return 0;
      }
      uVar3 = (uint)*(byte *)((int)this + 0x94);
    }
    *param_4 = uVar3;
    *param_2 = (uint)*(ushort *)(iVar1 + 8) * ((int)(char)param_1 & 0xfU);
    iVar2 = (int)(char)param_1 - 0x20;
    *param_3 = ((int)(iVar2 + (iVar2 >> 0x1f & 0xfU)) >> 4) * (uint)*(ushort *)(iVar1 + 10);
    *param_5 = (uint)*(ushort *)(iVar1 + 10);
    return 1;
  }
  return 0;
}

/* ref: FUN_0055aff0 */
uint F_0055aff0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55aff0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  
  F_005597f0(param_1);
  *(uint *)((int)((undefined *)(uint)(param_1)) + 0x88) = *(uint *)((int)((undefined *)(uint)(param_1)) + 0x88) & 0xffffff87;
  *(uint *)((int)((undefined *)(uint)(param_1)) + 0x84) = *(uint *)((int)((undefined *)(uint)(param_1)) + 0x84) & 0xa3ffffff | 0x20000000;
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)((int)((undefined *)(uint)(param_1)) + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined2 *)((int)((undefined *)(uint)(param_1)) + 0x18) = *(undefined2 *)((int)this + 0x18);
  *(undefined2 *)((int)((undefined *)(uint)(param_1)) + 0x1a) = *(undefined2 *)((int)this + 0x1a);
  F_0055a960(((undefined *)(uint)(param_1)),this);
  uVar1 = *(uint *)((int)this + 0x84);
  *(uint *)(((int)(uint)(((undefined *)(uint)(param_1)))) + 0x84) = uVar1;
  return uVar1;
}

/* ref: FUN_0055b060 */
uint F_0055b060(unsigned int gen_a0)
{
  GEN_ENTER(0x55b060u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  *(undefined1 *)(in_ecx + 2) = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055b080 */
unsigned int F_0055b080(unsigned int gen_a0)
{
  GEN_ENTER(0x55b080u, gen_a0, 0u, 0u, 0u);
  undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[8] = 0;
  return 0;
}

/* ref: Component::GUI2::AtkTextNodeRenderer::vf3 */
uint F_0055b090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if ((*(int * PTR32 *)(this + 4) == (int *)0x0) || (*(int *)(this + 8) == 0)) {
    return 0xfffffffe;
  }
  if (*(char * PTR32 *)(param_1 + 0xf0) == (char *)0x0) {
    return 0xfffffffd;
  }
  if (**(char * PTR32 *)(param_1 + 0xf0) == '\0') {
    return 0xfffffffc;
  }
  return (-(uint)((uint)(*(byte *)(param_1 + 0xfc) >> 4) * 0x150 + **(int * PTR32 *)(this + 4) != 0) & 5) -
         5;
}

/* ref: Component::GUI2::AtkCounterNodeRenderer::vf3 */
uint F_0055b100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b100u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  if ((*(int *)(in_ecx + 4) == 0) || (*(int *)(in_ecx + 8) == 0)) {
    return 0xfffffffe;
  }
  if (*(int *)(param_2 + 0x8c) == 0) {
    return 0xfffffffd;
  }
  piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_2 + 0x8c) + 8))) + *(int *)(param_2 + 0x90) * 0xc)));
  if (piVar1 == (int *)0x0) {
    return 0xfffffffc;
  }
  return (-(uint)(*piVar1 != 0) & 4) - 4;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf3 */
uint F_0055b170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b170u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return (param_1 != 0) - 1;
}

/* ref: Component::GUI2::AtkComponentNodeRenderer::vf4 */
uint F_0055b190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = param_1;
  if (*(int *)(param_1 + 0x8c) != 0) {
    *((ushort *)GEN_TOP((*(int *)(param_1 + 0x8c) + 0x30))) =
         *((short *)GEN_TOP((*(int *)(this + 4) + 0x2c))) -
         ((ushort)((uint)*(undefined4 *)(param_1 + 0x88) >> 0x14) & 1);
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x8c) + 0x1c))))(*(int * PTR32 *)(param_1 + 0x8c));
  }
  return uVar1;
}

/* ref: FUN_0055b220 */
uint F_0055b220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  if (param_1 < 10) {
    *(uint *)((int)this + param_1 * 4 + 0x40) = param_2;
    return param_1;
  }
  *(uint *)((int)this + 0x68) = param_2;
  return param_2;
}

/* ref: FUN_0055b240 */
uint F_0055b240(unsigned int gen_a0)
{
  GEN_ENTER(0x55b240u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c28));
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0x208) = 0;
  *(undefined4 *)((int)this + 0x20c) = 0;
  *(undefined4 *)((int)this + 0x210) = 0;
  *(undefined4 *)((int)this + 0x214) = 0;
  *(undefined4 *)((int)this + 0x23c) = 0;
  *(undefined4 *)((int)this + 0x240) = 0;
  *(undefined4 *)((int)this + 0x244) = 0;
  *(undefined4 *)((int)this + 0x248) = 0;
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined4 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  *(undefined4 *)((int)this + 0x298) = 0;
  *(undefined4 *)((int)this + 0x29c) = 0;
  *(undefined4 *)((int)this + 0x2a0) = 0;
  *(undefined4 *)((int)this + 0x2a4) = 0;
  *(undefined4 *)((int)this + 0x2a8) = 0;
  *(undefined4 *)((int)this + 0x2ac) = 0;
  *(undefined4 *)((int)this + 0x2b0) = 0;
  *(undefined2 *)((int)this + 0x4380) = 0x100;
  *(undefined4 *)((int)this + 0x218) = 0xffffffff;
  *(undefined4 *)((int)this + 0x21c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x220) = 0xffffffff;
  *(undefined4 *)((int)this + 0x228) = 0xffffffff;
  *(undefined4 *)((int)this + 0x22c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x27c) = 0xffffffff;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0x230) = 0xffffffff;
  *(undefined4 *)((int)this + 0x234) = 0xffffffff;
  *(undefined4 *)((int)this + 0x238) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  puVar2 = (undefined4 *)((int)this + 0x2b4);
  for (iVar1 = 0x1000; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  F_00c48350((undefined *)((int)this + 0x24c),0,0x30);
  return (uint)this;
}

/* ref: FUN_0055b460 */
uint F_0055b460(unsigned int gen_a0)
{
  GEN_ENTER(0x55b460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  piVar5 = *(int * PTR32 *)((int)this + 0x214);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x214) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x210);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x210) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x208);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x208) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x20c);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x20c) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x280);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x280) = 0;
  }
  piVar5 = (int *)((int)this + 0xf8);
  iVar4 = 4;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)((int)this + 0xa4);
  iVar4 = 0x15;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = *(int * PTR32 *)((int)this + 0xa0);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0xa0) = 0;
  }
  piVar5 = *(int * PTR32 *)((int)this + 0x9c);
  if (piVar5 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar5 + 0xc))(piVar5);
    *(undefined4 *)((int)this + 0x9c) = 0;
  }
  piVar5 = (int *)((int)this + 0x90);
  iVar4 = 3;
  do {
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  piVar5 = (int *)((int)this + 0x70);
  iVar4 = 8;
  do {
    piVar1 = (int *)piVar5[-8];
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      piVar5[-8] = 0;
    }
    piVar1 = (int *)*piVar5;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x2a8);
  if (puVar2 != (undefined4 *)0x0) {
    if (puVar2[-4] == 0) {
      F_00406b30(puVar2 + -4);
    }
    else {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,3);
    }
    *(undefined4 *)((int)this + 0x2a8) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x290) != 0) {
    uVar3 = F_00406810(*(int *)((int)this + 0x290));
    *(undefined4 *)((int)this + 0x290) = 0;
  }
  return uVar3;
}

/* ref: FUN_0055b610 */
uint F_0055b610(unsigned int gen_a0)
{
  GEN_ENTER(0x55b610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)((int)this + 0x10);
  iVar2 = 8;
  do {
    if (piVar3[8] != 0) {
      F_0050c620(piVar3[8],0,0);
      piVar3[8] = 0;
    }
    uVar1 = 0;
    if (*piVar3 != 0) {
      uVar1 = F_0050c620(*piVar3,0,0);
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_0055b660 */
uint F_0055b660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55b660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xb0 + *(int *)(in_ecx + 0x2a8);
}

/* ref: FUN_0055b680 */
byte F_0055b680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55b680u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4381) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_0055b690 */
uint F_0055b690(void)
{
  GEN_ENTER(0x55b690u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  undefined4 * puVar3;
  
  ((uint *)(gen_frame + 0xc))[3] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = 0x20;
  uVar1 = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0x20;
  ((uint *)(gen_frame + 0xc))[0] = 0x18;
  ((uint *)(gen_frame + 0xc))[1] = 0x20;
  ((uint *)(gen_frame + 0xc))[2] = 0;
  puVar3 = &(*(undefined4 *)(gen_frame + 0x8));
  do {
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = puVar3[1];
    puVar3 = puVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_0055b6e0 */
uint F_0055b6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55b6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ((int *)(gen_frame + 0xc))[3] = uVar1;
  uVar5 = 0;
  piVar4 = ((int *)GEN_TOP((*(int *)((int)this + 0x2a8) + 0xec)));
  do {
    ((int *)(gen_frame + 0xc))[(int)(uVar5)] = 0;
    iVar2 = ((int *)(gen_frame + 0xc))[(int)(uVar5)];
    iVar6 = 4;
    piVar3 = piVar4;
    do {
      iVar2 = iVar2 + piVar3[-0x2c] + *piVar3 + piVar3[0x2c] + piVar3[0x58];
      iVar6 = iVar6 + -1;
      piVar3 = piVar3 + 0xb0;
    } while (iVar6 != 0);
    ((int *)(gen_frame + 0xc))[(int)(uVar5)] = iVar2;
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar5 < 3);
  uVar5 = ((((int *)(gen_frame + 0xc))[0] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x24c) * 0x4000;
  if (*(uint *)((int)this + 0x288) < uVar5) {
    uVar5 = *(uint *)((int)this + 0x288);
  }
  *(uint *)((int)this + 0x254) = uVar5;
  iVar2 = ((((int *)(gen_frame + 0xc))[1] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x25c) * 0x4000;
  *(undefined4 *)((int)this + 0x250) = 0;
  if (*(uint *)((int)this + 0x288) < iVar2 + uVar5) {
    iVar2 = *(uint *)((int)this + 0x288) - uVar5;
  }
  *(int *)((int)this + 0x264) = iVar2;
  *(uint *)((int)this + 0x260) = uVar5;
  iVar2 = uVar5 + iVar2;
  uVar5 = ((((int *)(gen_frame + 0xc))[2] + 0x1000U >> 0xe) + 1) * *(int *)((int)this + 0x26c) * 0x4000;
  if (*(uint *)((int)this + 0x288) < uVar5 + iVar2) {
    *(uint *)((int)this + 0x274) = *(uint *)((int)this + 0x288) - iVar2;
  }
  else {
    *(uint *)((int)this + 0x274) = uVar5;
  }
  *(int *)((int)this + 0x270) = iVar2;
  F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar5;
}

/* ref: FUN_0055b820 */
uint F_0055b820(unsigned int gen_a0)
{
  GEN_ENTER(0x55b820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (uint)(&REFG(undefined * PTR32, 0x10a0c2c))[(int)(param_1)];
}

/* ref: FUN_0055b830 */
uint F_0055b830(unsigned int gen_a0)
{
  GEN_ENTER(0x55b830u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  return in_ecx;
}

/* ref: FUN_0055b840 */
unsigned int F_0055b840(void)
{
  GEN_ENTER(0x55b840u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0055b850 */
uint F_0055b850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55b850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined4 *)(in_ecx + 0xd8) = param_2;
  *(undefined4 *)(in_ecx + 0xc0) = 0;
  *(undefined4 *)(in_ecx + 0xc4) = 0;
  *(undefined4 *)(in_ecx + 0x100) = 0;
  *(undefined4 *)(in_ecx + 0xdc) = 0;
  *(undefined4 *)(in_ecx + 0xe0) = 0;
  *(undefined4 *)(in_ecx + 0xe4) = 0;
  *(undefined4 *)(in_ecx + 0xfc) = 0;
  *(undefined4 *)(in_ecx + 0xf4) = uVar1;
  *(undefined4 *)(in_ecx + 0xf8) = uVar1;
  *(undefined4 *)(in_ecx + 0xe8) = 0;
  *(undefined4 *)(in_ecx + 0xec) = 0;
  *(undefined4 *)(in_ecx + 0xf0) = 0;
  *(undefined4 *)(in_ecx + 0xa0) = uVar1;
  *(undefined4 *)(in_ecx + 0xa4) = uVar1;
  *(undefined4 *)(in_ecx + 0xa8) = uVar1;
  *(undefined4 *)(in_ecx + 0xac) = uVar1;
  *(undefined4 *)(in_ecx + 0xb0) = 0;
  *(undefined4 *)(in_ecx + 0xb4) = 0;
  *(undefined4 *)(in_ecx + 0xb8) = 0;
  *(undefined4 *)(in_ecx + 0xbc) = 0;
  return 0;
}

/* ref: FUN_0055b910 */
unsigned int F_0055b910(unsigned int gen_a0)
{
  GEN_ENTER(0x55b910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined2 * puVar4;
  
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  *(undefined4 *)((int)this + 4) = 0;
  puVar4 = (undefined2 *)((int)this + 0x24);
  puVar3 = (undefined4 *)((int)this + 0x10);
  iVar2 = 2;
  do {
    puVar3[-2] = 0;
    *puVar3 = uVar1;
    puVar3[2] = uVar1;
    puVar4[-2] = 0;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x28) = REFG(undefined4, 0x1302e24);
  *(undefined2 *)((int)this + 0x2c) = 0;
  return 0;
}

/* ref: FUN_0055b980 */
unsigned int F_0055b980(unsigned int gen_a0)
{
  GEN_ENTER(0x55b980u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c50));
  return 0;
}

/* ref: FUN_0055b990 */
uint F_0055b990(unsigned int gen_a0)
{
  GEN_ENTER(0x55b990u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x10)));
}

/* ref: FUN_0055b9a0 */
uint F_0055b9a0(unsigned int gen_a0)
{
  GEN_ENTER(0x55b9a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x1c)));
}

/* ref: FUN_0055b9b0 */
uint F_0055b9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x55b9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0x20) + 0x28)));
}

/* ref: FUN_0055b9c0 */
uint F_0055b9c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55b9c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x234) = param_1;
  *(undefined4 *)((int)this + 0x238) = param_2;
  return param_1;
}

/* ref: FUN_0055b9e0 */
uint F_0055b9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55b9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0x18);
  if (*(short *)(iVar1 + 0xc68) == 0) {
    return *(uint *)(iVar1 + 0xc58);
  }
  return *((uint *)GEN_TOP((iVar1 + 0x50 + *(short *)(iVar1 + 0xc68) * 0xc)));
}

/* ref: FUN_0055ba00 */
uint F_0055ba00(unsigned int gen_a0)
{
  GEN_ENTER(0x55ba00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x18);
  *(undefined2 *)(uVar1 + 0xc68) = 0;
  return uVar1;
}

/* ref: FUN_0055ba10 */
unsigned int F_0055ba10(void)
{
  GEN_ENTER(0x55ba10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_0055ba20 */
uint F_0055ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ba20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x14) + 0x34))))
                    (*(int * PTR32 *)((int)this + 0x14),param_1,param_2,0);
  if ((char)uVar1 == '\0') {
    uVar1 = *(uint *)((int)this + 0x18);
    *param_1 = *(undefined2 *)(uVar1 + 0xc5c);
    *param_2 = *(undefined2 *)(uVar1 + 0xc5e);
  }
  return uVar1;
}

/* ref: FUN_0055ba60 */
unsigned int F_0055ba60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ba60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  if ((param_1 != 0) && (iVar1 = *(int *)((int)this + 0x1c), *(int *)(iVar1 + 4) == param_1)) {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined1 *)(iVar1 + 0x20) = 0;
  }
  return 0;
}

/* ref: FUN_0055ba90 */
uint F_0055ba90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55ba90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined * this_00;
  uint uVar1;
  uint uVar2;
  
  this_00 = (undefined *)((int)this + 600);
  F_0042aca0(this_00);
  if (param_1 != 0) {
    uVar2 = param_1;
    if (param_2 < param_1) {
      uVar2 = param_2;
    }
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x30) + 0x2c))))(*(int * PTR32 *)((int)this + 0x30),0x268);
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      F_0042e370(this_00,uVar1);
    }
  }
  uVar2 = F_0042a990(this_00);
  return uVar2;
}

/* ref: FUN_0055baf0 */
uint F_0055baf0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0x55baf0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  F_00c475c9((char *)(param_1 + 0x2ac),0x100,param_2,((undefined *)&gen_args[2]));
  return (uint)(char *)(param_1 + 0x2ac);
}

/* ref: FUN_0055bb20 */
uint F_0055bb20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x55bb20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  int iVar1;
  
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(int *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined4 *)((int)this + 0x1c) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0c58));
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = param_5;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x22) = 0;
  F_0042b630((int)this + 0x2c);
  F_0042b630((int)this + 0x80);
  *(undefined4 *)((int)this + 0xd6) = 0;
  *(undefined4 *)((int)this + 0xda) = 0;
  F_00aadc00((int)this + 0xe0);
  F_0042b630((int)this + 0x138);
  F_0042b630((int)this + 0x18c);
  iVar1 = (int)this + 0x1e0;
  param_1 = 2;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  F_0042b630((int)this + 0x2dc);
  F_0042b630((int)this + 0x330);
  F_0042b630((int)this + 900);
  F_0042b630((int)this + 0x3d8);
  iVar1 = (int)this + 0x42c;
  param_1 = 4;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  iVar1 = (int)this + 0x5d0;
  param_1 = 4;
  do {
    F_0042b630(iVar1);
    iVar1 = iVar1 + 0x54;
    param_1 = param_1 + -1;
  } while (-1 < param_1);
  F_0042b630((int)this + 0x774);
  *(undefined4 *)((int)this + 0x7c8) = 0;
  *(undefined4 *)((int)this + 0x7cc) = 0;
  *(undefined4 *)((int)this + 2000) = 0;
  *(undefined4 *)((int)this + 0x7d4) = 0;
  *(undefined2 *)((int)this + 0x7d8) = 0;
  F_0042b630((int)this + 0x7dc);
  *(undefined4 *)((int)this + 0x830) = 0;
  *(undefined4 *)((int)this + 0x834) = 0;
  *(undefined4 *)((int)this + 0x838) = 0xffffffff;
  *(undefined4 *)((int)this + 0x83c) = 0xffffffff;
  *(undefined4 *)((int)this + 0x840) = 0xff010c00;
  *(undefined2 *)((int)this + 0x846) = 0xffff;
  *(undefined2 *)((int)this + 0x848) = 0;
  *(undefined1 *)((int)this + 0x842) = 0;
  *(undefined1 *)((int)this + 0x844) = 0;
  return (uint)this;
}

/* ref: FUN_0055bcb0 */
uint F_0055bcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x55bcb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined * pvVar2;
  ulonglong uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0c58));
  F_0042c880((undefined *)((int)this + 0x7dc));
  F_0042c880((undefined *)((int)this + 0x774));
  pvVar2 = (undefined *)((int)this + 0x774);
  iVar1 = 4;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  pvVar2 = (undefined *)((int)this + 0x5d0);
  iVar1 = 4;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 0x3d8));
  F_0042c880((undefined *)((int)this + 900));
  F_0042c880((undefined *)((int)this + 0x330));
  F_0042c880((undefined *)((int)this + 0x2dc));
  pvVar2 = (undefined *)((int)this + 0x2dc);
  iVar1 = 2;
  do {
    pvVar2 = (undefined *)((int)pvVar2 + -0x54);
    F_0042c880(pvVar2);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_0042c880((undefined *)((int)this + 0x18c));
  F_0042c880((undefined *)((int)this + 0x138));
  F_00aadc20((undefined *)((int)this + 0xe0));
  F_0042c880((undefined *)((int)this + 0x80));
  uVar3 = F_0042c880((undefined *)((int)this + 0x2c));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10a0a20));
  return (uint)uVar3;
}

/* ref: FUN_0055bd90 */
uint F_0055bd90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55bd90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xb0];
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  (*(uint *)(gen_frame + 0xa8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xac);
  F_0042b630(((undefined1 *)(gen_frame + 0x54)));
  F_0042d000(((undefined1 *)(gen_frame + 0x54)),"<color(0xff%02X%02X%02X)>",param_1 & 0xff,param_1 >> 8 & 0xff,
               param_1 >> 0x10 & 0xff);
  iVar1 = **(int * PTR32 *)((int)this + 0x14);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x0)),uVar2);
  F_0042ccf0((undefined *)((int)this + 0x1e0),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_0042d000(((undefined1 *)(gen_frame + 0x54)),"<color(0xff%02X%02X%02X)>",param_2 & 0xff,param_2 >> 8 & 0xff,
               param_2 >> 0x10 & 0xff);
  iVar1 = **(int * PTR32 *)((int)this + 0x14);
  uVar2 = F_0042a990(((undefined1 *)(gen_frame + 0x54)));
  uVar2 = ((code *)*(gen_code32 *)(iVar1 + 0x20))(*(undefined4 *)((int)this + 0x14),((undefined1 *)(gen_frame + 0x0)),uVar2);
  F_0042ccf0((undefined *)((int)this + 0x234),uVar2);
  F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  uVar3 = F_0042c880(((undefined1 *)(gen_frame + 0x54)));
  F_00c47745((*(uint *)(gen_frame + 0xa8)) ^ (uint)(uint)(gen_frame + 0xac));
  return (uint)uVar3;
}

/* ref: FUN_0055bea0 */
uint F_0055bea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55bea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  uint param_3 = (uint)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  undefined * this_00;
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  char * pcVar5;
  uint uVar6;
  char * pcVar7;
  int iVar8;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar3 = F_00a26fb0(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x42c);
  uVar4 = F_00a26fb0(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 0x4d4);
  iVar8 = (param_2 - uVar3) + (1 - uVar4);
  bVar2 = true;
  pcVar5 = (char *)F_0042a990(param_1);
  this_00 = (undefined *)((int)this + 0x330);
  F_0042aca0(this_00);
  cVar1 = *pcVar5;
  pcVar7 = pcVar5;
  while (cVar1 != '\0') {
    uVar4 = F_00a26f40(*(undefined * PTR32 *)((int)this + 0x18),pcVar7);
    uVar3 = param_3;
    if (bVar2) {
      uVar3 = F_00a27060(*(undefined * PTR32 *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x4)),(int)this + 0x42c);
      F_0042ccf0((undefined *)((int)this + 900),uVar3);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar3 = F_0042a970((int)this + 900);
      uVar3 = param_3 - uVar3;
      bVar2 = false;
    }
    if ((pcVar7[uVar4] == '\0') || (iVar8 == 0)) {
      uVar6 = F_00a27030(*(undefined * PTR32 *)((int)this + 0x18),((undefined1 *)(gen_frame + 0x4)),(int)this + 0x4d4);
      F_0042ccf0((undefined *)((int)this + 900),uVar6);
      F_0042c880(((undefined1 *)(gen_frame + 0x4)));
      uVar6 = F_0042a970((int)this + 900);
      uVar3 = uVar3 - uVar6;
    }
    if ((int)uVar3 < 1) break;
    uVar6 = F_0042d2c0(param_1,((undefined1 *)(gen_frame + 0x4)),(int)pcVar7 - (int)pcVar5,uVar4);
    F_0042ccf0((undefined *)((int)this + 900),uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if ((int)uVar4 < (int)uVar3) {
      uVar3 = uVar4;
    }
    F_00a26c30(*(undefined * PTR32 *)((int)this + 0x18),(int)this + 900,uVar3);
    F_0042e360(this_00,(int)this + 900);
    iVar8 = iVar8 + -1;
    if (iVar8 < 0) break;
    pcVar7 = pcVar7 + uVar4;
    if (*pcVar7 == '\r') {
      F_0042d160(this_00,0xd);
      pcVar7 = pcVar7 + 1;
    }
    cVar1 = *pcVar7;
  }
  uVar3 = F_0042ccf0(param_1,this_00);
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar3;
}

/* ref: FUN_0055c040 */
unsigned int F_0055c040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    piVar1 = *(int * PTR32 *)((int)this + 4);
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1,&(*(undefined4 *)(gen_frame + 0x4)));
  }
  return 0;
}

/* ref: FUN_0055c070 */
uint F_0055c070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0042ccf0((undefined *)((int)this + 0x2c),param_1);
  return uVar1;
}

/* ref: FUN_0055c090 */
uint F_0055c090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c090u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_0055c0a0 */
uint F_0055c0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55c0a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint param_3 = (uint)gen_a3;
  *(undefined1 *)((int)this + 0x840) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x841) = (undefined1)param_2;
  *(uint *)((int)this + 0x838) = param_3;
  return param_3;
}

/* ref: FUN_0055c0d0 */
uint F_0055c0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x55c0d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined2 *)((int)this + 0x7d8) = (undefined2)param_1;
  F_0042ccf0((undefined *)((int)this + 0x7dc),param_2);
  *(undefined4 *)((int)this + 0x830) = param_3;
  *(uint *)((int)this + 0x834) = param_4;
  *(undefined2 *)((int)this + 0x83c) = (undefined2)param_5;
  *(undefined1 *)((int)this + 0x843) = (undefined1)param_6;
  return param_4;
}

/* ref: FUN_0055c120 */
uint F_0055c120(unsigned int gen_a0)
{
  GEN_ENTER(0x55c120u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  char cVar1;
  uint uVar2;
  char * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = 0;
  pcVar3 = (char *)F_0042a990(param_1);
  cVar1 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
  while (cVar1 != '\0') {
    if ((char)uVar4 == '\x02') {
      uVar5 = (uint)pcVar3[2];
      uVar6 = uVar6 + 3;
      uVar2 = uVar5 + 3;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      uVar6 = uVar6 + 1;
      uVar2 = uVar5;
    }
    pcVar3 = pcVar3 + uVar2;
    cVar1 = *pcVar3;
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
  }
  return uVar6;
}

/* ref: FUN_0055c170 */
uint F_0055c170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c170u, gen_a0, gen_a1, 0u, 0u);
  char * param_1 = (char *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  char cVar1;
  char * pcVar2;
  char * pcVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  (*(uint *)(gen_frame + 0x58)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  uVar7 = 0;
  pcVar3 = (char *)F_0042a990(param_1);
  cVar1 = *pcVar3;
  uVar4 = CONCAT31((int3)((uint)((int)(uintptr_t)pcVar3) >> 8),cVar1);
  pcVar2 = param_1;
  while ((cVar1 != '\0' && (uVar7 <= param_2))) {
    if ((char)uVar4 == '\x02') {
      uVar5 = (uint)pcVar3[2];
      uVar7 = uVar7 + 3;
      uVar6 = uVar5 + 3;
    }
    else {
      uVar5 = F_0042acc0(uVar4);
      uVar7 = uVar7 + 1;
      uVar6 = uVar5;
    }
    cVar1 = pcVar3[uVar6];
    uVar4 = CONCAT31((int3)(uVar5 >> 8),cVar1);
    pcVar2 = pcVar3;
    pcVar3 = pcVar3 + uVar6;
  }
  if ((param_2 != 0xffffffff) && (param_2 < uVar7)) {
    uVar6 = F_0042a990(param_1);
    uVar6 = F_0042d2c0(param_1,((undefined1 *)(gen_frame + 0x4)),0,(int)pcVar2 - uVar6);
    F_0042ccf0(param_1,uVar6);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return uVar7;
}

/* ref: FUN_0055c270 */
byte F_0055c270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c270u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(short *)(in_ecx + 0x7c8) == 0) && (*(char *)(in_ecx + 0x7ca) == '\0')) {
    if ((param_2 == 0xd) || (param_2 == 0x1b)) {
      return 0;
    }
  }
  else {
    *(undefined1 *)(in_ecx + 0x7ca) = 0;
  }
  return 1;
}

/* ref: FUN_0055c2b0 */
uint F_0055c2b0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c2b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  char * pcVar2;
  
  pcVar2 = *(char * PTR32 *)((int)this + 0x80);
  if (*pcVar2 != '\0') {
    piVar1 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + 4)));
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(int)this + 0x80);
    pcVar2 = (char *)F_0042aca0((int)this + 0x80);
  }
  *(undefined1 *)((int)this + 0x848) = 0;
  return (uint)pcVar2;
}

/* ref: FUN_0055c2f0 */
uint F_0055c2f0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c2f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  byte * pbVar4;
  
  pbVar2 = (byte *)F_0042a990(param_1);
  bVar1 = *pbVar2;
  pbVar3 = pbVar2;
  pbVar4 = pbVar2;
  while (bVar1 != 0) {
    bVar1 = *pbVar3;
    if (bVar1 == 2) {
      pbVar2 = (byte *)(uint)pbVar3[2];
      pbVar3 = pbVar3 + 3 + (int)pbVar2;
      pbVar4 = pbVar3;
    }
    else {
      if (bVar1 < 0x21) {
        pbVar4 = pbVar3 + 1;
      }
      else if (((*pbVar3 == 0xe3) && (pbVar3[1] == 0x80)) && (pbVar3[2] < 0xa0)) {
        pbVar4 = pbVar3 + 3;
      }
      pbVar2 = (byte *)F_0042acc0(CONCAT31((int3)((uint)((int)(uintptr_t)pbVar2) >> 8),bVar1));
      pbVar3 = pbVar3 + (int)pbVar2;
    }
    bVar1 = *pbVar3;
  }
  return (uint)pbVar4;
}

/* ref: FUN_0055c350 */
byte F_0055c350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return ((ushort)param_2 & *(ushort *)(in_ecx + 0x7d8)) != 0;
}

/* ref: FUN_0055c370 */
byte F_0055c370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  uint uVar1;
  bool bVar2;
  
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x5c);
  (*(uint *)(gen_frame + 0x58)) = uVar1;
  if (param_1 - 0x30 < 10) {
    if ((*(byte *)((int)this + 0x7d8) >> 2 & 1) != 0) goto LAB_0055c3a0;
  }
  else if (param_1 - 0x41 < 0x1a) {
    if ((*(byte *)((int)this + 0x7d8) & 1) != 0) {
      F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c));
      return 1;
    }
  }
  else if (param_1 - 0x61 < 0x1a) {
    if ((*(byte *)((int)this + 0x7d8) >> 1 & 1) != 0) {
      F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c));
      return 1;
    }
  }
  else if ((*(byte *)((int)this + 0x7d8) >> 3 & 1) != 0) {
    F_00c47745(uVar1 ^ (uint)(uint)(gen_frame + 0x5c));
    return 1;
  }
  if (((*(byte *)((int)this + 0x7d8) >> 4 & 1) != 0) && ((param_1 & 0xffffff00) == 0)) {
    F_0042cca0(((undefined1 *)(gen_frame + 0x4)),param_1);
    uVar1 = F_0042c8a0((undefined *)((int)this + 0x7dc),((undefined1 *)(gen_frame + 0x4)),0);
    bVar2 = uVar1 != REFG(undefined4, 0x108cc50);
    F_0042c880(((undefined1 *)(gen_frame + 0x4)));
    if (bVar2) {
LAB_0055c3a0: ;
      F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
      return 1;
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x58)) ^ (uint)(uint)(gen_frame + 0x5c));
  return 0;
}

/* ref: FUN_0055c490 */
uint F_0055c490(unsigned int gen_a0)
{
  GEN_ENTER(0x55c490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_0055c4b0 */
uint F_0055c4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c4b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055c4d0 */
unsigned int F_0055c4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c4d0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
  return 0;
}

/* ref: FUN_0055c4e0 */
unsigned int F_0055c4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_0055c500 */
uint F_0055c500(unsigned int gen_a0)
{
  GEN_ENTER(0x55c500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 4) == 1) {
    return *(uint *)(in_ecx + 8);
  }
  return 0;
}

/* ref: FUN_0055c510 */
uint F_0055c510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  int iVar2;
  
  if (((0 < param_2) && (-1 < (int)param_3)) && (param_3 < 7)) {
    uVar1 = param_3;
    iVar2 = param_2;
    if ((999999 < param_2) && (param_2 < 2000000)) {
      uVar1 = 1;
      iVar2 = param_2 + -1000000;
    }
    uVar1 = F_00c472af(param_1,0x100,"%s/%06d/%s%06d.tex",REFG(undefined * PTR32, 0x131db70),
                       (iVar2 / 1000) * 1000,(&REFG(undefined * PTR32, 0x131db74))[(int)(uVar1)],iVar2);
    return uVar1;
  }
  uVar1 = F_00c472af(param_1,0x100,"%s/000000/000000.tex",REFG(undefined * PTR32, 0x131db70));
  return uVar1;
}

/* ref: FUN_0055c5a0 */
uint F_0055c5a0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c5a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_0055c5b0 */
unsigned int F_0055c5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c5b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x10a0c84));
  return 0;
}

/* ref: FUN_0055c5d0 */
uint F_0055c5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 4);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  return 0;
}

/* ref: FUN_0055c5f0 */
uint F_0055c5f0(unsigned int gen_a0)
{
  GEN_ENTER(0x55c5f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_0055c600 */
uint F_0055c600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55c600u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  undefined1 * puVar2;
  byte bVar3;
  uint uVar4;
  
  switch((unsigned int)(uintptr_t)((undefined1)param_3)) {
  case 1: ;
  case 0x13: ;
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x14))) = *(undefined4 *)(param_4 + 100);
    break;
  case 2: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x68);
    *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(param_4 + 0x6c);
    *(undefined1 *)(iVar1 + 0x35) = *(undefined1 *)(param_4 + 0x6d);
    *(undefined1 *)(iVar1 + 0x36) = *(undefined1 *)(param_4 + 0x6e);
    *(undefined1 *)(iVar1 + 0x37) = *(undefined1 *)(param_4 + 0x6f);
    break;
  case 3: ;
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x18))) = *(undefined4 *)(param_4 + 100);
    break;
  case 4: ;
  case 0xb: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_4 + 0x68);
    break;
  case 5: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_4 + 0x70);
    break;
  case 6: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_4 + 0x6c);
    break;
  case 7: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x5c) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x60) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(param_4 + 0x70);
    *(undefined2 *)(iVar1 + 0x68) = *(undefined2 *)(param_4 + 0x76);
    *(byte *)(iVar1 + 0x6a) =
         *(byte *)(iVar1 + 0x6a) ^ (*(byte *)(iVar1 + 0x6a) ^ *(byte *)(param_4 + 0x74)) & 1;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ *(byte *)(iVar1 + 0x6a)) & 2 ^ *(byte *)(iVar1 + 0x6a);
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 4 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 8 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x10 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x20 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x40 ^ bVar3;
    *(byte *)(iVar1 + 0x6a) = bVar3;
    *(byte *)(iVar1 + 0x6a) = (*(byte *)(param_4 + 0x74) ^ bVar3) & 0x7f ^ *(byte *)(param_4 + 0x74)
    ;
    *(byte *)(iVar1 + 0x6b) =
         *(byte *)(iVar1 + 0x6b) ^ (*(byte *)(iVar1 + 0x6b) ^ *(byte *)(param_4 + 0x75)) & 1;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ *(byte *)(iVar1 + 0x6b)) & 2 ^ *(byte *)(iVar1 + 0x6b);
    *(byte *)(iVar1 + 0x6b) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ bVar3) & 4 ^ bVar3;
    *(byte *)(iVar1 + 0x6b) = bVar3;
    bVar3 = (*(byte *)(param_4 + 0x75) ^ bVar3) & 8 ^ bVar3;
    *(byte *)(iVar1 + 0x6b) = bVar3;
    *(byte *)(iVar1 + 0x6b) = (*(byte *)(param_4 + 0x75) ^ bVar3) & 0x10 ^ bVar3;
    *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(param_4 + 0x78);
    *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(param_4 + 0x80);
    *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(param_4 + 0x84);
    break;
  case 8: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(param_4 + 100);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_4 + 0x68);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_4 + 0x6c);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_4 + 0x70);
    *(undefined1 *)(iVar1 + 0x38) = *(undefined1 *)(param_4 + 0x78);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_4 + 0x74);
    break;
  case 9: ;
    iVar1 = *(int *)(param_2 + 0x10);
    *(undefined2 *)(iVar1 + 0x1a) = *(undefined2 *)(param_4 + 100);
    *(undefined2 *)(iVar1 + 0x1c) = *(undefined2 *)(param_4 + 0x66);
    break;
  case 0xe: ;
    *((undefined1 *)GEN_TOP((*(int *)(param_2 + 0x10) + 0x1c))) = *(undefined1 *)(param_4 + 100);
  }
  puVar2 = *(undefined1 * PTR32 *)(param_2 + 0x10);
  *puVar2 = *(undefined1 *)(param_4 + 0x58);
  puVar2[1] = *(undefined1 *)(param_4 + 0x59);
  puVar2[2] = *(undefined1 *)(param_4 + 0x5a);
  puVar2[3] = *(undefined1 *)(param_4 + 0x5b);
  puVar2[4] = *(undefined1 *)(param_4 + 0x5c);
  puVar2[5] = *(undefined1 *)(param_4 + 0x5d);
  puVar2[6] = *(undefined1 *)(param_4 + 0x60);
  puVar2[7] = *(undefined1 *)(param_4 + 0x62);
  puVar2[8] = *(undefined1 *)(param_4 + 0x5f);
  *(uint *)(param_1 + 0x88) =
       *(uint *)(param_1 + 0x88) ^
       ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ *(uint *)(param_1 + 0x88)) & 8;
  uVar4 = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ *(uint *)(param_1 + 0x88)) & 0x10 ^
          *(uint *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = uVar4;
  uVar4 = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ uVar4) & 0x20 ^ uVar4;
  *(uint *)(param_1 + 0x88) = uVar4;
  *(uint *)(param_1 + 0x88) = ((uint)*(byte *)(param_4 + 0x5e) * 8 ^ uVar4) & 0x40 ^ uVar4;
  return 0;
}

/* ref: FUN_0055c8f0 */
uint F_0055c8f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55c8f0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 uVar1;
  
  uVar1 = 9;
  switch((unsigned int)(uintptr_t)((undefined1)param_2)) {
  case 1: ;
  case 0x13: ;
    uVar1 = 0x18;
    break;
  case 2: ;
    uVar1 = 0x38;
    break;
  case 3: ;
    uVar1 = 0x1c;
    break;
  case 4: ;
  case 0xb: ;
    uVar1 = 0x24;
    break;
  case 5: ;
  case 8: ;
    uVar1 = 0x3c;
    break;
  case 6: ;
    uVar1 = 0x34;
    break;
  case 7: ;
    uVar1 = 0x7c;
    break;
  case 9: ;
  case 0xe: ;
    uVar1 = 0x20;
  }
  F_00c46aa0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_3 + 0x10),uVar1);
  return 0;
}

/* ref: FUN_0055c9b0 */
uint F_0055c9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *param_2;
  return (uint)param_2;
}

/* ref: FUN_0055c9c0 */
ushort F_0055c9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  ushort uVar1;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((int)param_1 + 6) = *(undefined2 *)((int)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  uVar1 = *(ushort *)((int)param_2 + 10);
  *(ushort *)((int)param_1 + 10) = uVar1;
  return uVar1;
}

/* ref: FUN_0055c9f0 */
uint F_0055c9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55c9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float fVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  
  F_005597f0(param_1);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xffffff87;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) & 0xa3ffffff | 0x20000000;
  *(undefined4 *)(((int)(uint)(param_1)) + 4) = *param_2;
  *(undefined4 *)(((int)(uint)(param_1)) + 8) = param_2[1];
  *(undefined4 *)(((int)(uint)(param_1)) + 0xc) = param_2[2];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x10) = param_2[3];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x14) = param_2[4];
  *(undefined2 *)(((int)(uint)(param_1)) + 0x18) = *(undefined2 *)(param_2 + 5);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x1a) = 0;
  *(float *)(((int)(uint)(param_1)) + 0x38) = (float)(int)*(short *)(param_2 + 0xb);
  *(float *)(((int)(uint)(param_1)) + 0x3c) = (float)(int)*(short *)((int)param_2 + 0x2e);
  fVar1 = REFG(float, 0x1087f04);
  *(float *)(((int)(uint)(param_1)) + 0x48) =
       ((float)GEN_TOF(((((float10)GEN_TOD(gen_bits2f(param_2[0xd]))) / (float10)*(double *)&REFG(undefined, 0x1080220)) *
              (float10)*(double *)&REFG(undefined, 0x1080228))));
  *(undefined4 *)(((int)(uint)(param_1)) + 0x40) = param_2[0xe];
  bVar5 = GEN_ISNAN(*(float *)(((int)(uint)(param_1)) + 0x40)) || GEN_ISNAN(fVar1);
  *(undefined4 *)(((int)(uint)(param_1)) + 0x44) = param_2[0xf];
  *(undefined4 *)(((int)(uint)(param_1)) + 0x4c) = 0;
  if (((bVar5 == (bVar5 || *(float *)(((int)(uint)(param_1)) + 0x40) == fVar1)) ||
      (bVar5 = GEN_ISNAN(*(float *)(((int)(uint)(param_1)) + 0x44)) || GEN_ISNAN(fVar1),
      bVar5 == (bVar5 || *(float *)(((int)(uint)(param_1)) + 0x44) == fVar1))) ||
     (fVar1 = *(float *)(((int)(uint)(param_1)) + 0x48), GEN_ISNAN(fVar1) == (GEN_ISNAN(fVar1) || fVar1 == 0.0))) {
    uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x88) | 4;
  }
  else {
    uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xfffffffb;
  }
  *(uint *)(((int)(uint)(param_1)) + 0x88) = uVar4;
  *(undefined2 *)(((int)(uint)(param_1)) + 0x7c) = *(undefined2 *)(param_2 + 0xc);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x7e) = *(undefined2 *)((int)param_2 + 0x32);
  *(float *)(((int)(uint)(param_1)) + 0x74) = (float)(int)*(short *)(param_2 + 0x10);
  sVar2 = *(short *)((int)param_2 + 0x42);
  *(undefined4 *)(((int)(uint)(param_1)) + 0x50) = 0xffffffff;
  *(float *)(((int)(uint)(param_1)) + 0x78) = (float)(int)sVar2;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x53) = *(undefined1 *)(param_2 + 0x15);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x5a) = 0x6464;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x5c) = 100;
  *(undefined2 *)(((int)(uint)(param_1)) + 0x54) = *(undefined2 *)((int)param_2 + 0x4e);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x56) = *(undefined2 *)(param_2 + 0x14);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x58) = *(undefined2 *)((int)param_2 + 0x52);
  *(undefined2 *)(((int)(uint)(param_1)) + 0x84) = *(undefined2 *)(param_2 + 0x11);
  *(uint *)(((int)(uint)(param_1)) + 0x84) =
       *(uint *)(((int)(uint)(param_1)) + 0x84) ^
       ((uint)*(byte *)((int)param_2 + 0x46) << 0xc ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x10000;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0xd ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x40000 ^
          *(uint *)(((int)(uint)(param_1)) + 0x84);
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0xb ^ uVar4) & 0x20000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = (*(byte *)((int)param_2 + 0x46) & 0xffffff80) << 0xc | uVar4 & 0xfff7ffff;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x200000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x400000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  uVar4 = ((uint)*(byte *)((int)param_2 + 0x46) << 0x14 ^ uVar4) & 0x800000 ^ uVar4;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = uVar4;
  bVar3 = *(byte *)((int)param_2 + 0x47);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xffffff7f;
  *(uint *)(((int)(uint)(param_1)) + 0x84) = (bVar3 & 1) << 0x18 | uVar4 & 0xbeffffff;
  *(undefined1 *)(((int)(uint)(param_1)) + 0x89) = *(undefined1 *)((int)param_2 + 0x55);
  *(uint *)(((int)(uint)(param_1)) + 0x88) = *(uint *)(((int)(uint)(param_1)) + 0x88) & 0xfff9ffff;
  bVar3 = *(byte *)((int)param_2 + 0x46) & 1;
  *(uint *)(((int)(uint)(param_1)) + 0x84) =
       *(uint *)(((int)(uint)(param_1)) + 0x84) ^
       ((uint)bVar3 << 0x14 ^ *(uint *)(((int)(uint)(param_1)) + 0x84)) & 0x100000;
  *(uint *)(((int)(uint)(param_1)) + 0x88) =
       ((uint)(bVar3 == 0) << 7 ^ *(uint *)(((int)(uint)(param_1)) + 0x88)) & 0x80 ^
       *(uint *)(((int)(uint)(param_1)) + 0x88);
  if ((*(ushort *)(((int)(uint)(param_1)) + 0x18) < 1000) && (*(ushort *)(((int)(uint)(param_1)) + 0x18) == 8)) {
    *(uint *)(((int)(uint)(param_1)) + 0x84) = *(uint *)(((int)(uint)(param_1)) + 0x84) | 0x1000000;
  }
  uVar4 = *(uint *)(((int)(uint)(param_1)) + 0x84);
  *(uint *)(((int)(uint)(param_1)) + 0x84) = (uVar4 * 2 ^ uVar4) & 0x2000000 ^ uVar4;
  return uVar4;
}

/* ref: FUN_0055cc90 */
unsigned int F_0055cc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cc90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined2 *)(param_1 + 0x90) = *(undefined2 *)(param_2 + 4);
    *(byte *)(param_1 + 0x93) =
         *(byte *)(param_1 + 0x93) ^ (*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 0x93)) & 1;
    *(byte *)(param_1 + 0x93) =
         (*(byte *)(param_2 + 9) & 1) * '\x02' | *(byte *)(param_1 + 0x93) & 0xf1;
    *(undefined1 *)(param_1 + 0x92) = *(undefined1 *)(param_2 + 10);
    *(byte *)(param_1 + 0x93) =
         *(byte *)(param_1 + 0x93) ^
         (*(char *)(param_2 + 0xb) << 4 ^ *(byte *)(param_1 + 0x93)) & 0x70;
  }
  return 0;
}

/* ref: FUN_0055cd00 */
unsigned int F_0055cd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cd00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0x8c) = *param_2;
    *(undefined4 *)(param_1 + 0x90) = param_2[1];
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(byte *)(param_1 + 0xfc) =
         *(byte *)(param_1 + 0xfc) ^ (*(byte *)(param_2 + 2) ^ *(byte *)(param_1 + 0xfc)) & 0xf;
    *(byte *)(param_1 + 0xfc) = *(char *)((int)param_2 + 10) << 4 | *(byte *)(param_1 + 0xfc) & 0xf;
    *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)((int)param_2 + 0xb);
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^
         (*(char *)(param_2 + 4) * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 2;
    bVar3 = (*(char *)(param_2 + 4) * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 4 ^
            *(byte *)(param_1 + 0xfe);
    *(byte *)(param_1 + 0xfe) = bVar3;
    *(byte *)(param_1 + 0xfe) = (*(char *)(param_2 + 4) * '\x02' ^ bVar3) & 8 ^ bVar3;
    *(undefined4 *)(param_1 + 0x94) = param_2[3];
    cVar1 = *(char *)(param_2 + 4);
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^ (cVar1 * '\x02' ^ *(byte *)(param_1 + 0xfe)) & 0x10;
    uVar5 = F_0042a990(param_1 + 0x9c);
    *(uint *)(param_1 + 0xf0) = uVar5;
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfe;
    *(byte *)(param_1 + 0xff) = *(byte *)(param_1 + 0xff) & 0xfe;
    *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xbf;
    *(undefined4 *)(param_1 + 0x110) = 0;
    bVar4 = (*(char *)(param_2 + 4) << 3 ^ *(byte *)(param_1 + 0xfe)) & 0x7f ^
            *(char *)(param_2 + 4) * '\b';
    *(byte *)(param_1 + 0xfe) = bVar4;
    bVar3 = *(byte *)(param_2 + 4);
    bVar2 = *(byte *)(param_1 + 0xff);
    *(byte *)(param_1 + 0xff) = bVar2 & 0xfd;
    *(byte *)(param_1 + 0xfe) = (bVar3 ^ bVar4) & 0x40 ^ bVar4;
    *(byte *)(param_1 + 0xff) = *(byte *)(param_2 + 4) >> 3 & 4 | bVar2 & 0xf1;
    bVar3 = *(byte *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(byte *)(param_1 + 0xfe) =
         *(byte *)(param_1 + 0xfe) ^ (bVar3 >> 2 ^ *(byte *)(param_1 + 0xfe)) & 0x20;
    *(undefined4 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x104) = 0;
    *(undefined2 *)(param_1 + 0x102) = 0;
    *(undefined1 *)(param_1 + 0x114) = *(undefined1 *)((int)param_2 + 0x11);
    *(undefined1 *)(param_1 + 0x115) = *(undefined1 *)((int)param_2 + 0x12);
    *(undefined1 *)(param_1 + 0x116) = *(undefined1 *)((int)param_2 + 0x13);
    if (((*(byte *)(param_2 + 4) & 0x10) != 0) && (*(char *)((int)param_2 + 0x13) == '\0')) {
      *(char *)(param_1 + 0x116) = *(char *)(param_1 + 0xfd) + '\x01';
    }
  }
  return 0;
}

/* ref: FUN_0055ced0 */
unsigned int F_0055ced0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55ced0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 4);
    *(byte *)(param_1 + 0xa0) =
         *(byte *)(param_1 + 0xa0) ^ (*(byte *)(param_2 + 8) ^ *(byte *)(param_1 + 0xa0)) & 1;
    *(byte *)(param_1 + 0xa0) =
         (*(char *)(param_2 + 9) * '\x02' ^ *(byte *)(param_1 + 0xa0)) & 2 ^
         *(byte *)(param_1 + 0xa0);
    *(undefined2 *)(param_1 + 0x94) = *(undefined2 *)(param_2 + 10);
    *(undefined2 *)(param_1 + 0x96) = *(undefined2 *)(param_2 + 0xc);
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 0xe);
    *(undefined2 *)(param_1 + 0x9a) = *(undefined2 *)(param_2 + 0x10);
    *(uint *)(param_1 + 0x9c) = (uint)*(byte *)(param_2 + 0x12);
  }
  return 0;
}

/* ref: FUN_0055cf50 */
unsigned int F_0055cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cf50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(uint *)(param_1 + 0x90) = (uint)*(byte *)(param_2 + 4);
    *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 5);
    *(undefined1 *)(param_1 + 0x95) = *(undefined1 *)(param_2 + 7);
    *(undefined1 *)(param_1 + 0x96) = *(undefined1 *)(param_2 + 6);
    *(undefined2 *)(param_1 + 0x98) = *(undefined2 *)(param_2 + 8);
  }
  return 0;
}

/* ref: FUN_0055cfa0 */
unsigned int F_0055cfa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55cfa0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  byte bVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    F_0055cd00(param_1,param_2);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x28);
    *(byte *)(param_1 + 0x134) =
         *(byte *)(param_1 + 0x134) ^ (*(byte *)(param_1 + 0x134) ^ *(byte *)(param_2 + 0x2c)) & 1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ *(byte *)(param_1 + 0x134)) & 2 ^
            *(byte *)(param_1 + 0x134);
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ bVar1) & 4 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ bVar1) & 8 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ bVar1) & 0x10 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ bVar1) & 0x20 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2c) ^ bVar1) & 0x40 ^ bVar1;
    *(byte *)(param_1 + 0x134) = bVar1;
    *(byte *)(param_1 + 0x134) =
         (*(byte *)(param_2 + 0x2c) ^ bVar1) & 0x7f ^ *(byte *)(param_2 + 0x2c);
    *(byte *)(param_1 + 0x135) =
         *(byte *)(param_1 + 0x135) ^ (*(byte *)(param_1 + 0x135) ^ *(byte *)(param_2 + 0x2d)) & 1;
    bVar1 = (*(byte *)(param_2 + 0x2d) ^ *(byte *)(param_1 + 0x135)) & 2 ^
            *(byte *)(param_1 + 0x135);
    *(byte *)(param_1 + 0x135) = bVar1;
    bVar1 = (*(byte *)(param_2 + 0x2d) ^ bVar1) & 4 ^ bVar1;
    *(byte *)(param_1 + 0x135) = bVar1;
    *(byte *)(param_1 + 0x135) = (*(byte *)(param_2 + 0x2d) ^ bVar1) & 8 ^ bVar1;
    *(undefined2 *)(param_1 + 0x136) = *(undefined2 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x32);
    *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x36);
    *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x3a);
    *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x3e);
  }
  return 0;
}

/* ref: FUN_0055d100 */
unsigned int F_0055d100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if ((param_1 != 0) && (param_2 != 0)) {
    F_0055cd00(param_1,param_2);
    *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x28);
    *(byte *)(param_1 + 0x134) =
         *(byte *)(param_1 + 0x134) ^ (*(byte *)(param_1 + 0x134) ^ *(byte *)(param_2 + 0x2c)) & 1;
    *(byte *)(param_1 + 0x134) =
         (*(byte *)(param_2 + 0x2c) ^ *(byte *)(param_1 + 0x134)) & 2 ^ *(byte *)(param_1 + 0x134);
  }
  return 0;
}

/* ref: FUN_0055d180 */
uint F_0055d180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d180u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if ((param_1 != 0) && (param_2 != (undefined2 *)0x0)) {
    *(undefined2 *)(param_1 + 0x8c) = *param_2;
    *(undefined2 *)(param_1 + 0x8e) = param_2[1];
    *(undefined2 *)(param_1 + 0x90) = param_2[2];
    *(undefined2 *)(param_1 + 0x92) = param_2[4];
    *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return param_1;
}

/* ref: FUN_0055d1e0 */
unsigned int F_0055d1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d1e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((param_1 != 0) && (param_2 != (undefined1 *)0x0)) {
    *(undefined1 *)(param_1 + 0x8c) = *param_2;
    *(undefined1 *)(param_1 + 0x8d) = param_2[1];
    *(undefined1 *)(param_1 + 0x8e) = param_2[2];
    *(undefined1 *)(param_1 + 0x8f) = param_2[3];
    *(undefined1 *)(param_1 + 0x90) = param_2[4];
    *(undefined1 *)(param_1 + 0x91) = param_2[5];
    *(uint *)(param_1 + 0x88) =
         *(uint *)(param_1 + 0x88) ^ ((uint)(byte)param_2[6] * 8 ^ *(uint *)(param_1 + 0x88)) & 8;
    uVar1 = ((uint)(byte)param_2[6] * 8 ^ *(uint *)(param_1 + 0x88)) & 0x10 ^
            *(uint *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = uVar1;
    uVar1 = ((uint)(byte)param_2[6] * 8 ^ uVar1) & 0x20 ^ uVar1;
    *(uint *)(param_1 + 0x88) = uVar1;
    *(uint *)(param_1 + 0x88) = ((uint)(byte)param_2[6] * 8 ^ uVar1) & 0x40 ^ uVar1;
    *(undefined1 *)(param_1 + 0x92) = param_2[8];
    *(undefined1 *)(param_1 + 0x93) = param_2[10];
    *(undefined1 *)(param_1 + 0x94) = param_2[7];
  }
  return 0;
}

/* ref: FUN_0055d2c0 */
uint F_0055d2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d2c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) + param_1;
  if (*(int *)(iVar1 + 8) == 0) {
    return 0;
  }
  uVar2 = iVar1 + 0x10;
  iVar1 = param_2;
  if (0 < param_2) {
    do {
      uVar2 = uVar2 + *(int *)(uVar2 + 8);
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return uVar2;
}

/* ref: FUN_0055d2f0 */
unsigned int F_0055d2f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55d2f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  short * param_2 = (short *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int param_4 = (int)gen_a3;
  int iVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  
  uVar4 = 0xffff;
  uVar3 = 0;
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + uVar2 * 4);
      if (iVar1 == param_4) {
        return 0;
      }
      if ((iVar1 == 0) && ((short)uVar4 < 0)) {
        uVar4 = uVar3;
      }
      uVar3 = uVar3 + 1;
      uVar2 = (uint)uVar3;
    } while (uVar2 < param_3);
    if (uVar4 != 0xffff) {
      *(int *)(param_1 + (short)uVar4 * 4) = param_4;
      *param_2 = *param_2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_0055d350 */
uint F_0055d350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0x55d350u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int param_3 = (int)gen_a3;
  undefined * param_4 = (undefined *)(uintptr_t)gen_a4;
  short * param_5 = (short *)(uintptr_t)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  int * piVar1;
  int iVar2;
  int * piVar3;
  undefined * _Dst;
  undefined * pvVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  int * piVar8;
  int * piVar9;
  uint local_14;
  uint local_10;
  
  F_00c48350(param_4,0,*(int *)(param_2 + 8) * 4);
  pvVar4 = (undefined *)0x0;
  if (*(int *)(param_3 + 8) != 0) {
    _Dst = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1,*(int *)(param_3 + 8) * 0xc,0x10)));
    *(undefined * PTR32 *)((int)this + 4) = _Dst;
    pvVar4 = (undefined *)0x0;
    if (_Dst != (undefined *)0x0) {
      pvVar4 = F_00c48350(_Dst,0,*(int *)(param_3 + 8) * 0xc);
      *(undefined2 *)((int)this + 0x12) = *(undefined2 *)(param_3 + 8);
      piVar9 = *(int * PTR32 *)((int)this + 4);
      piVar8 = (int *)(param_3 + 0x10);
      local_14 = 0;
      if (*(int *)(param_3 + 8) != 0) {
        do {
          *piVar9 = *piVar8;
          piVar9[1] = piVar8[1];
          uVar5 = F_00406c00(-(uint)((int)((ulonglong)(uint)piVar8[1] * 0xc >> 0x20) != 0) |
                               (uint)((ulonglong)(uint)piVar8[1] * 0xc),0,param_1,0);
          piVar9[2] = uVar5;
          if (uVar5 == 0) {
            return 0;
          }
          local_10 = 0;
          if (piVar8[1] != 0) {
            uVar5 = 0;
            piVar3 = piVar8;
            do {
              piVar1 = (int *)(piVar9[2] + uVar5 * 0xc);
              *piVar1 = piVar3[3];
              *(short *)(piVar1 + 1) = (short)piVar3[4];
              *(undefined2 *)((int)piVar1 + 6) = *(undefined2 *)((int)piVar3 + 0x12);
              *(short *)(piVar1 + 2) = (short)piVar3[5];
              *(undefined2 *)((int)piVar1 + 10) = *(undefined2 *)((int)piVar3 + 0x16);
              uVar6 = 0xffff;
              uVar7 = 0;
              if (*(uint *)(param_2 + 8) != 0) {
                uVar5 = 0;
                do {
                  iVar2 = *(int *)((int)param_4 + uVar5 * 4);
                  if (iVar2 == *piVar1) goto LAB_0055d4a9;
                  if ((iVar2 == 0) && ((short)uVar6 < 0)) {
                    uVar6 = uVar7;
                  }
                  uVar7 = uVar7 + 1;
                  uVar5 = (uint)uVar7;
                } while (uVar5 < *(uint *)(param_2 + 8));
                if (uVar6 != 0xffff) {
                  *(int *)((int)param_4 + (short)uVar6 * 4) = *piVar1;
                  *param_5 = *param_5 + 1;
                }
              }
LAB_0055d4a9: ;
              local_10 = local_10 + 1;
              uVar5 = local_10 & 0xffff;
              piVar3 = piVar3 + 3;
            } while (uVar5 < (uint)piVar8[1]);
          }
          piVar8 = (int *)((int)piVar8 + piVar8[2]);
          local_14 = local_14 + 1;
          pvVar4 = (undefined *)(local_14 & 0xffff);
          piVar9 = piVar9 + 3;
        } while (pvVar4 < *(undefined * PTR32 *)(param_3 + 8));
      }
    }
  }
  return (uint)pvVar4;
}

/* ref: FUN_0055d500 */
uint F_0055d500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55d500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)F_00406bd0(0xc,0,param_1,0);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 1;
  uVar2 = F_00406c00(0xc,0,param_1,0);
  puVar1[2] = uVar2;
  if (uVar2 != 0) {
    *(undefined2 *)(uVar2 + 4) = 0;
    *(undefined2 *)(puVar1[2] + 6) = 0;
    *(undefined2 *)(puVar1[2] + 8) = (undefined2)param_2;
    *(undefined2 *)(puVar1[2] + 10) = (undefined2)param_3;
    uVar2 = F_00406bd0(0x10,0,param_1,0);
    if (uVar2 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined * PTR32 * PTR32 *)(uVar2 + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10a0c7c));
      *(undefined4 *)(uVar2 + 8) = 0;
      *(undefined4 *)(uVar2 + 0xc) = 0;
    }
    *(uint *)puVar1[2] = uVar2;
    if (*(int *)puVar1[2] != 0) {
      **(undefined4 * PTR32 *)puVar1[2] = 0;
      *(undefined4 *)(*(int *)puVar1[2] + 0xc) = 0;
      return (uint)puVar1;
    }
  }
  return 0;
}

/* ref: FUN_0055d5d0 */
uint F_0055d5d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x55d5d0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint uVar1;
  
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      if ((*(int *)(param_1 + 0x10) == param_2) && (*(int *)(param_1 + 0x14) == param_3)) {
        return (uint)(int *)(param_1 + 0x10);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 0;
}

/* ref: FUN_0055d610 */
uint F_0055d610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d610u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP((*(int *)(param_1 + 0x10) + 8 + param_1)));
  if (uVar1 == 0) {
    return 0;
  }
  piVar2 = ((int *)GEN_TOP((*(int *)(param_1 + 0x10) + param_1 + 0x10)));
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      if (*piVar2 == param_2) {
        return (uint)piVar2;
      }
      uVar3 = uVar3 + 1;
      piVar2 = ((int *)GEN_TOP(((int)piVar2 + (uint)*(ushort *)(piVar2 + 3))));
    } while ((uVar3 & 0xffff) < uVar1);
  }
  return 0;
}

/* ref: FUN_0055d660 */
uint F_0055d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d660u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (*(int *)&gen_args[1]);
  if ((*(int *)&gen_args[1]) != 0) {
    *(undefined4 *)((*(int *)&gen_args[0]) + 100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x50);
    (*(undefined1 *)((char *)&(*(int *)&gen_args[1]) + 0)) =
         (undefined1)
         (int)TRUNC(((double)GEN_TOD(((uint)*(byte *)((*(int *)&gen_args[1]) + 0x67) * (uint)*(byte *)((*(int *)&gen_args[0]) + 0x53)))) /
                    *(double *)&REFG(undefined, 0x1088100));
    *(undefined1 *)((*(int *)&gen_args[0]) + 0x67) = (undefined1)(*(int *)&gen_args[1]);
    *(short *)((*(int *)&gen_args[0]) + 0x68) = *(short *)(iVar2 + 0x68) + *(short *)((*(int *)&gen_args[0]) + 0x54);
    iVar3 = (int)*(char *)(iVar2 + 0x6e) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5a);
    *(char *)((*(int *)&gen_args[0]) + 0x6e) =
         ((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x51eb851f >> 0x3f);
    *(short *)((*(int *)&gen_args[0]) + 0x6a) = *(short *)(iVar2 + 0x6a) + *(short *)((*(int *)&gen_args[0]) + 0x56);
    iVar3 = (int)*(char *)(iVar2 + 0x6f) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5b);
    *(char *)((*(int *)&gen_args[0]) + 0x6f) =
         ((char)(iVar3 / 100) + (char)(iVar3 >> 0x1f)) -
         (char)((longlong)iVar3 * 0x51eb851f >> 0x3f);
    *(short *)((*(int *)&gen_args[0]) + 0x6c) = *(short *)(iVar2 + 0x6c) + *(short *)((*(int *)&gen_args[0]) + 0x58);
    uVar1 = ((int)*(char *)(iVar2 + 0x70) * (int)*(char *)((*(int *)&gen_args[0]) + 0x5c)) / 100;
    *(char *)((*(int *)&gen_args[0]) + 0x70) = (char)uVar1;
    *(float *)((*(int *)&gen_args[0]) + 0x60) =
         ((float)GEN_TOF(((float10)*(float *)(iVar2 + 0x60) + (float10)*(float *)((*(int *)&gen_args[0]) + 0x4c))));
    return uVar1;
  }
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x60) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x4c);
  *(undefined4 *)((*(int *)&gen_args[0]) + 100) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x50);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x68) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x54);
  *(undefined4 *)((*(int *)&gen_args[0]) + 0x6c) = *(undefined4 *)((*(int *)&gen_args[0]) + 0x58);
  *(uint *)((*(int *)&gen_args[0]) + 0x70) = *(uint *)((*(int *)&gen_args[0]) + 0x5c);
  return *(uint *)((*(int *)&gen_args[0]) + 0x5c);
}

/* ref: FUN_0055d770 */
uint F_0055d770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0x12) = 0;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(byte *)((int)this + 0x5c) = *(byte *)((int)this + 0x5c) & 0xfd | 1;
  *(undefined4 *)((int)this + 0x58) = 0;
  return 0;
}

/* ref: FUN_0055d7c0 */
uint F_0055d7c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d7c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_0055d7d0 */
uint F_0055d7d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d7d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x58) = param_2;
  return param_2;
}

/* ref: FUN_0055d7f0 */
uint F_0055d7f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x55d7f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  float param_3 = (float)gen_a2;
  int * piVar1;
  int iVar2;
  uint in_EAX = 0;
  uint uVar3;
  float fVar4;
  
  for (iVar2 = param_2; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
    if ((999 < *(ushort *)(iVar2 + 0x18)) &&
       (piVar1 = *(int * PTR32 *)(iVar2 + 0x8c), piVar1 != (int *)0x0)) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,(undefined4)gen_fl2bits(param_3));
      fVar4 = param_3;
      uVar3 = F_00578ee0(piVar1 + 1,0);
      F_0055d7f0(piVar1 + 1,uVar3,fVar4);
    }
    in_EAX = F_0055d7f0(param_1,*(undefined4 *)(iVar2 + 0x14),param_3);
  }
  return in_EAX;
}

/* ref: FUN_0055d870 */
uint F_0055d870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  int * piVar3;
  int * piVar4;
  ushort uVar5;
  uint uVar6;
  
  if (param_1 != (int *)0x0) {
    uVar5 = 0;
    iVar1 = *param_1;
    piVar4 = param_1;
    while (iVar1 != 0) {
      piVar4 = piVar4 + 2;
      uVar5 = uVar5 + 1;
      iVar1 = *piVar4;
    }
    uVar2 = F_00404270();
    uVar6 = (uint)uVar5;
    piVar3 = (int *)F_00406c00((uVar6 + 1) * 8,0,uVar2,0);
    *(int * PTR32 *)((int)this + 0x24) = piVar3;
    piVar4 = param_1;
    if (uVar5 != 0) {
      do {
        *piVar3 = *piVar4;
        piVar3[1] = piVar4[1];
        piVar3 = piVar3 + 2;
        piVar4 = piVar4 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    *piVar3 = 0;
    piVar3[1] = 0;
    return 0;
  }
  return 0xffffffff;
}

/* ref: FUN_0055d900 */
byte F_0055d900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x5c)) & 2;
  *(byte *)(in_ecx + 0x5c) = *(byte *)(in_ecx + 0x5c) ^ bVar1;
  return bVar1;
}

/* ref: FUN_0055d920 */
uint F_0055d920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  
  if (((*(byte *)((int)this + 0x5c) & 1) != 0) && (param_1 != 0)) {
    iVar1 = *(int *)((int)this + 8);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4);
      if ((uVar2 != 0) && (uVar4 = 0, uVar2 != 0)) {
        piVar5 = *(int * PTR32 *)(iVar1 + 8);
        while (*(int *)(*piVar5 + 4) != param_1) {
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 1;
          if (uVar2 <= uVar4) {
            return 0;
          }
        }
        uVar3 = (*(int * PTR32 *)(iVar1 + 8))[uVar4];
      }
      return uVar3;
    }
  }
  return 0;
}

/* ref: FUN_0055d980 */
uint F_0055d980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 != 0) {
    if (*(char *)((int)this + 0x18) == '\x01') {
      return param_1 * 0x10 + iVar1;
    }
    if (*(char *)((int)this + 0x18) == '\x02') {
      return iVar1 + param_1 * 0x18;
    }
  }
  return 0;
}

/* ref: FUN_0055d9c0 */
uint F_0055d9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55d9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = *(int * PTR32 *)((int)this + 0x30);
  if ((piVar2 == (int *)0x0) || (*piVar2 != param_1)) {
    uVar1 = 0;
    if (*(short *)((int)this + 0x10) != 0) {
      piVar2 = *(int * PTR32 *)this;
      do {
        if (*piVar2 == param_1) {
          piVar2 = *(int * PTR32 *)this + uVar1 * 4;
          *(int * PTR32 *)((int)this + 0x30) = piVar2;
          return (uint)piVar2;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 4;
      } while (uVar1 < *(ushort *)((int)this + 0x10));
    }
    piVar2 = (int *)0x0;
  }
  return (uint)piVar2;
}

/* ref: FUN_0055da10 */
uint F_0055da10(unsigned int gen_a0)
{
  GEN_ENTER(0x55da10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 == 0) {
    return uVar2;
  }
  if ((*(int *)(param_1 + 0x8c) != 0) &&
     (puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 0x8c) + 8))) +
                       (uint)*(ushort *)(param_1 + 0x90) * 0xc))), puVar1 != (uint *)0x0)) {
    uVar2 = *puVar1;
  }
  return uVar2;
}

/* ref: FUN_0055da50 */
uint F_0055da50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55da50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  ushort uVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  uVar1 = *(ushort *)((int)this + 0x12);
  piVar2 = (int *)0x0;
  if (uVar1 == 0) {
    return (uint)piVar2;
  }
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar3 = *(int * PTR32 *)((int)this + 4);
    while (*piVar3 != param_1) {
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 3;
      if (uVar1 <= uVar4) {
        return (uint)piVar2;
      }
    }
    piVar2 = *(int * PTR32 *)((int)this + 4) + uVar4 * 3;
  }
  return (uint)piVar2;
}

/* ref: FUN_0055daa0 */
uint F_0055daa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55daa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 2)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dac0 */
uint F_0055dac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dac0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 3)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055dae0 */
uint F_0055dae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 4)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db00 */
uint F_0055db00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 5)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db20 */
uint F_0055db20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 6)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db40 */
uint F_0055db40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 7)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db60 */
uint F_0055db60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 == 0) || (*(short *)(uVar1 + 0x18) != 8)) {
    uVar1 = 0;
  }
  return uVar1;
}

/* ref: FUN_0055db80 */
uint F_0055db80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55db80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_0055d920(this,param_1);
  if ((uVar1 != 0) && (999 < *(ushort *)(uVar1 + 0x18))) {
    return *(uint *)(uVar1 + 0x8c);
  }
  return 0;
}

/* ref: FUN_0055dbb0 */
unsigned int F_0055dbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x55dbb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if (*(char *)(in_ecx + 0x18) != '\x02') {
    *(undefined4 *)(in_ecx + 0x34) = param_2;
  }
  return 0;
}

/* ref: FUN_0055dbd0 */
unsigned int F_0055dbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x55dbd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(char *)((int)this + 0x18) == '\x02') {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34);
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
  }
  *(undefined4 *)((int)this + 0x34) = 0;
  return 0;
}

/* ref: FUN_0055dc00 */
unsigned int F_0055dc00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x55dc00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  code * param_3 = (code *)(uintptr_t)gen_a3;
  int iVar1;
  
  iVar1 = param_1;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_3 != (code *)0x0) {
      (*param_3)(this,iVar1,param_2);
    }
    F_0055dc00(this,*(undefined4 *)(iVar1 + 0x14),param_2,param_3);
    if ((*(uint *)(iVar1 + 0x84) & 0x10000000) != 0) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  return 0;
}

