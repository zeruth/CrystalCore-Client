#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cb8660 */
uint F_00cb8660(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)*(ushort *)(in_ecx + 0x70);
}

/* ref: FUN_00cb8670 */
uint F_00cb8670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb8680 */
uint F_00cb8680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cb8ea0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00cb8690 */
uint F_00cb8690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8690u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070353));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = (*(undefined4 *)&gen_args[1]);
  F_00cb8380((*(undefined * PTR32 *)&gen_args[0]));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb8710 */
uint F_00cb8710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8710u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00cb8720 */
byte F_00cb8720(void)
{
  GEN_ENTER(0xcb8720u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cb8730 */
unsigned int F_00cb8730(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8730u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00cb8740 */
unsigned int F_00cb8740(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8740u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return 0;
}

/* ref: FUN_00cb8750 */
unsigned int F_00cb8750(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8750u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return 0;
}

/* ref: FUN_00cb8760 */
uint F_00cb8760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cb87a0 */
byte F_00cb87a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb87e0 */
uint F_00cb87e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb87f0 */
byte F_00cb87f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb87f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb8860 */
uint F_00cb8860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8860u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8870 */
uint F_00cb8870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb8880 */
uint F_00cb8880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8880u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8890 */
uint F_00cb8890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88a0 */
uint F_00cb88a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb88a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: FUN_00cb88b0 */
uint F_00cb88b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb88b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88d0 */
unsigned int F_00cb88d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb88d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(int *)(in_ecx + 4) = *(int *)(in_ecx + 4) + -1;
  return 0;
}

/* ref: FUN_00cb88e0 */
uint F_00cb88e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb88e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: FUN_00cb88f0 */
uint F_00cb88f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb88f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb8900 */
uint F_00cb8900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8930 */
uint F_00cb8930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb8940 */
uint F_00cb8940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8940u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb8950 */
uint F_00cb8950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x10);
  return (uint)param_2;
}

/* ref: FUN_00cb8960 */
uint F_00cb8960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8960u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cb8990 */
uint F_00cb8990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cb89b0 */
uint F_00cb89b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb89b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb89d0 */
uint F_00cb89d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb89d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *(int *)((int)this + 0x10);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    bVar3 = F_00cb4170((undefined *)(iVar1 + 0xc),param_1);
    if (bVar3 != 0) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a20 */
uint F_00cb8a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *(int *)((int)this + 0x10);
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    if (iVar3 == param_1) break;
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
    }
  }
  if (param_2 != (undefined *)0x0) {
    F_00cb4320(param_2,iVar1 + 0xc);
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a70 */
unsigned int F_00cb8a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8a70u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (*(uint *)&gen_args[2]);
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while( true ) {
    if (iVar1 == (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14) {
      return 0;
    }
    (*(uint *)&gen_args[2]) = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x18) + 8))))(iVar1 + 0x18);
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 4))))((*(int * PTR32 *)&gen_args[1]),iVar1 + 0xc,&(*(uint *)&gen_args[2]),uVar2);
    if ((char)uVar3 == '\0') break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  return 0;
}

/* ref: FUN_00cb8ad0 */
uint F_00cb8ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb8ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x38];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070380));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  F_00cb4360(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = (*(undefined4 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = (*(undefined4 *)&gen_args[4]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb8b50 */
uint F_00cb8b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cb8b80 */
uint F_00cb8b80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8b80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *(int *)(iVar1 + 4);
  *param_1 = iVar2;
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8bc0 */
byte F_00cb8bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8bc0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10703bb));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  while (iVar2 = iVar3, iVar2 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14) {
    bVar4 = F_00cb4170((undefined *)(iVar2 + 0xc),(*(undefined4 *)&gen_args[1]));
    puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
    if (bVar4 != 0) {
      puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0x20);
      if (puVar5 == (*(undefined4 * PTR32 *)&gen_args[2])) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return 1;
      }
      if (puVar5 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar5)(puVar5,1);
      }
      *(undefined4 * PTR32 *)(iVar2 + 0x20) = puVar1;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 1;
    }
    iVar3 = 0;
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
    }
  }
  if (*((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) <= *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20)))) {
    for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))); puVar1 != ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        puVar1 = (undefined4 *)puVar1[1]) {
      if (puVar1[7] == 0) {
        if (puVar1[1] != 0) {
          *(undefined4 *)(puVar1[1] + 8) = puVar1[2];
        }
        if (puVar1[2] != 0) {
          *(undefined4 *)(puVar1[2] + 4) = puVar1[1];
        }
        *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + -1;
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        break;
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x24,0)));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar5;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)&gen_args[2]);
    puVar5[1] = 0;
    puVar5[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 2;
    (*(undefined4 *)(gen_frame + 0x28)) = 2;
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
    F_00cb4360(puVar5 + 3,(*(undefined4 *)&gen_args[1]));
    puVar5[6] = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    puVar5[7] = 0;
    puVar5[8] = puVar1;
  }
  puVar5[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 8;
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 4))) = puVar5;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = puVar5;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 1;
}

/* ref: FUN_00cb8d10 */
uint F_00cb8d10(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8d10u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10703f3));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18);
  if (uVar1 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))))((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
    if (puVar2 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb8db0 */
uint F_00cb8db0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8db0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8d10(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8de0 */
uint F_00cb8de0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb8de0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070423));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  F_00cb8380((*(undefined * PTR32 *)&gen_args[0]));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb8e70 */
uint F_00cb8e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8de0(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8ea0 */
uint F_00cb8ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb8400(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cb8ed0 */
uint F_00cb8ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcb8ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined4 * puVar2;
  undefined * pvVar3;
  undefined * pvVar4;
  uint uVar5;
  undefined * PTR32 * ppvVar6;
  int iVar7;
  
  iVar7 = param_1;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070461));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ppvVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (((char)param_3 != '\0') || (*(int *)((int)this + 0x54) != param_1)) {
    piVar1 = *(int * PTR32 *)((int)this + 0x58);
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = ppvVar6;
    *(int *)((int)this + 0x54) = param_1;
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1);
      puVar2 = *(undefined4 * PTR32 *)((int)this + 0x58);
      if (puVar2 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
        *(undefined4 *)((int)this + 0x58) = 0;
      }
    }
    if (iVar7 == 0) {
      *(undefined1 *)((int)this + 0x74) = 0;
    }
    uVar5 = (uint)*(byte *)((int)this + 0x74);
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        param_3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
      else {
        if (uVar5 - 2 != 0) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
          return uVar5 - 2;
        }
        param_3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 2;
      }
      if (param_3 == (undefined *)0x0) {
        *(undefined4 *)((int)this + 0x58) = 0;
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
        return 0;
      }
      uVar5 = F_00cb8690(param_3,iVar7);
      *(uint *)((int)this + 0x58) = uVar5;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      return uVar5;
    }
    iVar7 = 0;
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x40);
    while (pvVar3 = pvVar4, pvVar3 != (undefined *)((int)this + 0x44)) {
      iVar7 = iVar7 + 1;
      pvVar4 = (undefined *)0x0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar4 = *(undefined * PTR32 *)((int)pvVar3 + 8);
      }
    }
    param_3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x18,0)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (param_3 == (undefined *)0x0) {
      ppvVar6 = (undefined * PTR32 *)0x0;
    }
    else {
      ppvVar6 = (undefined * PTR32 *)F_00cb6c00(param_3,iVar7);
    }
    *(undefined * PTR32 * PTR32 *)((int)this + 0x58) = ppvVar6;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    pvVar4 = *(undefined * PTR32 *)((int)this + 0x40);
    while (pvVar3 = pvVar4, pvVar3 != (undefined *)((int)this + 0x44)) {
      ppvVar6 = (undefined * PTR32 *)F_00cbab30(pvVar3,(uint)(~(byte)param_2 & 1));
      pvVar4 = (undefined *)0x0;
      if (pvVar3 != (undefined *)0x0) {
        pvVar4 = *(undefined * PTR32 *)((int)pvVar3 + 8);
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)ppvVar6;
}

/* ref: FUN_00cb9050 */
uint F_00cb9050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcb9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x170];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x154);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  undefined4 * puVar1;
  ushort * puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 * puVar6;
  char * pcVar7;
  char * pcVar8;
  int iVar9;
  int iVar10;
  
  (*(undefined4 *)(gen_frame + 0x148)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x144)) = ((code *)REFP(0x10704fe));
  (*(undefined * PTR32 *)(gen_frame + 0x140)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x14c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x140));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x140)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  iVar9 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x18)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(undefined * PTR32 *)(gen_frame + 0x38)) = (*(undefined * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)&gen_args[4]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined4 *)(gen_frame + 0x148)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[1]);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = (*(int *)&gen_args[5]);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x54))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x60))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = 0xffff;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x90))) = 0;
  pcVar8 = ((char *)(gen_frame + 0x3c));
  (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
  (*(undefined4 *)(gen_frame + 0x148)) = 6;
  (*(char * PTR32 *)(gen_frame + 0x28)) = (char *)((*(int *)&gen_args[3]) - (int)((char *)(gen_frame + 0x3c)));
  do {
    cVar3 = ((char *)((*(int *)&gen_args[3]) - (int)((char *)(gen_frame + 0x3c))))[(int)pcVar8];
    if (cVar3 == '.') {
      cVar3 = '\0';
    }
    *pcVar8 = cVar3;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 != '\0');
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),((char *)(gen_frame + 0x3c)));
  uVar4 = F_00cb96c0((*(undefined * PTR32 *)(gen_frame + 0x38)));
  *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) = uVar4;
  uVar5 = F_00cb9720((*(undefined * PTR32 *)(gen_frame + 0x38)));
  (*(uint *)(gen_frame + 0x20)) = uVar5;
  uVar5 = F_00cb9840((*(undefined * PTR32 *)(gen_frame + 0x38)));
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = uVar5;
  if ((int)(*(uint *)(gen_frame + 0x20)) < 0) {
    (*(uint *)(gen_frame + 0x20)) = 10;
  }
  uVar5 = F_00cb9750((*(undefined * PTR32 *)(gen_frame + 0x38)));
  if ((((*(uint *)(gen_frame + 0x20)) == 0) || (uVar5 == 0)) || ((*(int *)&gen_args[5]) == 0)) {
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) = 0;
    (*(uint *)(gen_frame + 0x20)) = 0;
  }
  else {
    *((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x80))) = (uVar5 != 1) + '\x01';
  }
  if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
    uVar4 = F_00cb9770((*(undefined * PTR32 *)(gen_frame + 0x38)));
    *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x74))) = (short)uVar4 + -1;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) * 6,0)
    ;
    *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = uVar5;
    uVar4 = F_00cb9680((*(undefined * PTR32 *)(gen_frame + 0x38)));
    *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7c))) = uVar4;
    if (uVar4 == 2) {
      pcVar7 = (char *)F_00cb9660((*(undefined * PTR32 *)(gen_frame + 0x38)));
      (*(char * PTR32 *)(gen_frame + 0x28)) = pcVar7;
      pcVar8 = (char *)0x0;
      (*(char * PTR32 *)(gen_frame + 0x30)) = (char *)0x0;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      do {
        uVar5 = 0;
        if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
          (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)((int)((int)(uintptr_t)pcVar8) * 6);
          (*(byte * PTR32 *)(gen_frame + 0x24)) = (byte *)(pcVar7 + 1);
          do {
            if ((uint)*(*(byte * PTR32 *)(gen_frame + 0x24)) == (int)(char)(&REFG(undefined, 0x1129924))[(*(uint *)(gen_frame + 0x2c))]) {
              (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
              *((short *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x34)) + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) = (short)uVar5;
              (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)((int)(*(char * PTR32 *)(gen_frame + 0x34)) + 6);
            }
            (*(byte * PTR32 *)(gen_frame + 0x24)) = (*(byte * PTR32 *)(gen_frame + 0x24)) + 2;
            uVar5 = uVar5 + 1;
            pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30));
          } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
        }
        uVar5 = (*(uint *)(gen_frame + 0x2c)) + 1;
        (*(uint *)(gen_frame + 0x2c)) = uVar5;
      } while (uVar5 < 10);
      iVar9 = 0;
      (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)0x0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        (*(uint *)(gen_frame + 0x2c)) = 0;
        do {
          uVar5 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + (*(uint *)(gen_frame + 0x2c)))));
          *((short *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4 + uVar5 * 6))) = (short)iVar9;
          iVar9 = iVar9 + *(int *)(&REFG(undefined, 0x134c29c) +
                                  (uint)CONCAT11(pcVar7[uVar5 * 2],pcVar7[uVar5 * 2 + 1]) * 4);
          uVar5 = (int)(*(char * PTR32 *)(gen_frame + 0x34)) + 1;
          (*(char * PTR32 *)(gen_frame + 0x34)) = (char *)uVar5;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      iVar10 = 0;
      *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = iVar9;
      uVar5 = 0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        do {
          *((ushort *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) =
               CONCAT11(pcVar7[uVar5 * 2],pcVar7[uVar5 * 2 + 1]);
          puVar2 = ((ushort *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))))));
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + (&REFG(undefined4, 0x134c234))[*puVar2];
          puVar2[1] = (ushort)uVar5;
          if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) == -1) {
            *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = (ushort)uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar10 = iVar10 + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      pcVar8 = (char *)F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x38)));
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)));
      if (uVar4 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x34));
        do {
          pcVar8 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 7;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 7;
          if (pcVar8 == (char *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pcVar8,(*(char * PTR32 *)(gen_frame + 0x28)),(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
          }
          *(undefined4 * PTR32 *)(uVar5 + 4) = puVar1;
          *(undefined4 *)(uVar5 + 8) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
          (*(undefined4 *)(gen_frame + 0x148)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x148)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = uVar5;
          }
          (*(char * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x28)) + 8;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 1;
          (*(uint *)(gen_frame + 0x2c)) = (*(uint *)(gen_frame + 0x2c)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)));
        } while ((*(uint *)(gen_frame + 0x2c)) < uVar4);
      }
    }
    else {
      uVar5 = F_00cb9670((*(undefined * PTR32 *)(gen_frame + 0x38)));
      *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
      (*(char * PTR32 *)(gen_frame + 0x30)) = (char *)0x0;
      if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))) != 0) {
        puVar6 = (undefined1 *)(uVar5 + 1);
        do {
          *((ushort *)GEN_TOP((iVar9 + *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24)))))) = CONCAT11(puVar6[-1],*puVar6);
          *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 4 + iVar9))) = CONCAT11(puVar6[1],puVar6[2]);
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) =
               *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) +
               *(int *)(&REFG(undefined, 0x134c29c) + (uint)CONCAT11(puVar6[-1],*puVar6) * 4);
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) + 2 + iVar9))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x30)) + 0));
          if (*((short *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) == -1) {
            *((undefined2 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x7a))) = (*(undefined2 *)((char *)&(*(char * PTR32 *)(gen_frame + 0x30)) + 0));
          }
          pcVar8 = (*(char * PTR32 *)(gen_frame + 0x30)) + 1;
          puVar6 = puVar6 + 4;
          iVar9 = iVar9 + 6;
          (*(char * PTR32 *)(gen_frame + 0x30)) = pcVar8;
        } while (pcVar8 < (char *)(uint)*((ushort *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x78))));
      }
      uVar4 = F_00cb96a0((*(undefined * PTR32 *)(gen_frame + 0x38)));
      *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = (uint)uVar4;
      pcVar8 = (char *)F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x38)));
      (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
      (*(byte * PTR32 *)(gen_frame + 0x24)) = (byte *)0x0;
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)));
      if (uVar4 != 0) {
        (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x34));
        do {
          pcVar8 = ((char *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x34)) = pcVar8;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 8;
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 8;
          if (pcVar8 == (char *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pcVar8,(*(char * PTR32 *)(gen_frame + 0x30)),(*(undefined * PTR32 *)&gen_args[0]),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))));
          }
          *(undefined4 * PTR32 *)(uVar5 + 4) = puVar1;
          *(undefined4 *)(uVar5 + 8) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
          (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x148)) + 0)) = 6;
          (*(undefined4 *)(gen_frame + 0x148)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x148)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 4))) = uVar5;
          }
          (*(char * PTR32 *)(gen_frame + 0x30)) = (*(char * PTR32 *)(gen_frame + 0x30)) + 8;
          *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x5c))) + 1;
          (*(byte * PTR32 *)(gen_frame + 0x24)) = (*(byte * PTR32 *)(gen_frame + 0x24)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x38)));
        } while ((*(byte * PTR32 *)(gen_frame + 0x24)) < (byte *)(uint)uVar4);
      }
    }
    F_00cb7df0((*(undefined * PTR32 *)&gen_args[0]),(*(undefined4 *)(gen_frame + 0x1c)));
    F_00cb8ed0(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(uint *)(gen_frame + 0x20)),(*(undefined4 *)&gen_args[6]),0);
    iVar9 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c)));
    *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 0;
    for (; iVar9 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x50; iVar9 = *(int *)(iVar9 + 8)) {
      if (*(char *)(iVar9 + 0x30) != '\0') {
        *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x81))) = 1;
        break;
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x140));
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x14c));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cb9660 */
uint F_00cb9660(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) + 0x20;
}

/* ref: FUN_00cb9670 */
uint F_00cb9670(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) + 0x20;
}

/* ref: FUN_00cb9680 */
ushort F_00cb9680(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 4))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 5))));
}

/* ref: FUN_00cb96a0 */
ushort F_00cb96a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb96a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 6))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 7))));
}

/* ref: FUN_00cb96c0 */
ushort F_00cb96c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb96c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 8))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 9))));
}

/* ref: FUN_00cb96e0 */
ushort F_00cb96e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb96e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 10))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xb))));
}

/* ref: FUN_00cb9700 */
ushort F_00cb9700(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xc))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0xd))));
}

/* ref: FUN_00cb9720 */
uint F_00cb9720(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  ushort uVar2;
  
  uVar2 = CONCAT11(*((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xe))),
                   *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0xf)))) & 0x3fff;
  uVar1 = (uint)uVar2;
  if (uVar2 == 0x3fff) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00cb9750 */
uint F_00cb9750(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9750u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (uint)(*((byte *)GEN_TOP((*(int *)(in_ecx + 4) + 0xe))) >> 6);
}

/* ref: FUN_00cb9770 */
ushort F_00cb9770(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return CONCAT11(*((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x10))),
                  *((undefined1 *)GEN_TOP((*(int *)(in_ecx + 4) + 0x11))));
}

/* ref: FUN_00cb9790 */
uint F_00cb9790(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  if (CONCAT11(*((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 4))),
               *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 5)))) < 3) {
    return iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 2;
  }
  return iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 4;
}

/* ref: FUN_00cb97e0 */
uint F_00cb97e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb97e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (CONCAT11(*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5)) < 3) {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 2
    ;
  }
  else {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9)) * 4
    ;
  }
  return iVar2 + (uint)CONCAT11(*(undefined1 *)(iVar1 + 10),*(undefined1 *)(iVar1 + 0xb)) * 8;
}

/* ref: FUN_00cb9840 */
uint F_00cb9840(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9840u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4);
  return CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x14),*(undefined1 *)(iVar1 + 0x15)),
                           *(undefined1 *)(iVar1 + 0x16)),*(undefined1 *)(iVar1 + 0x17));
}

/* ref: FUN_00cb9900 */
byte F_00cb9900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x81) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cb9920 */
uint F_00cb9920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb9920u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  return param_2 * param_3 + 6 + in_ecx;
}

/* ref: FUN_00cb9940 */
uint F_00cb9940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9970 */
uint F_00cb9970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb9970u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  gen_size32 param_3 = (gen_size32)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00c472af(param_2,param_3,"%s_%d%s.exd",param_1,param_5,(&REFG(undefined * PTR32, 0x134c2d0))[*param_4]);
  return uVar1;
}

/* ref: FUN_00cb99a0 */
uint F_00cb99a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb99a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  undefined * apuVar1 [1];
  uint uVar2;
  char * _DstBuf;
  undefined4 uVar3;
  char * pcVar4;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  F_00c49908(param_2,param_3,param_1);
  *(undefined1 *)(param_3 + -1 + param_2) = 0;
  apuVar1[0] = (*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0];
  if (*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4) != 0) {
    (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0])))(param_2,param_3,*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4));
  }
  pcVar4 = "_%d.exd";
  _DstBuf = ((char *)(gen_frame + 0x8));
  uVar3 = 0x100;
  F_00c472af(_DstBuf,0x100,"_%d.exd");
  uVar2 = (*(code *)apuVar1[0])(param_2,param_3,((char *)(gen_frame + 0x8)),_DstBuf,uVar3,pcVar4,param_5);
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00cb9a30 */
byte F_00cb9a30(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9a30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x28) != 0;
}

/* ref: FUN_00cb9a40 */
byte F_00cb9a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9a40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if ((*(uint *)(in_ecx + 0x1c) <= *param_2) && (*param_2 <= *(uint *)(in_ecx + 0x20))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb9ad0 */
byte F_00cb9ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb9b20 */
uint F_00cb9b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b30 */
uint F_00cb9b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b40 */
uint F_00cb9b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb9b50 */
uint F_00cb9b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b60 */
uint F_00cb9b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b70 */
uint F_00cb9b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b80 */
uint F_00cb9b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b90 */
uint F_00cb9b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9b90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = 0;
  *(undefined1 *)((int)this + 6) = 0;
  F_00cb5730(this,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb9be0 */
uint F_00cb9be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)CONCAT11(*(undefined1 *)((int)this + 4),*(undefined1 *)((int)this + 5)) * param_1 + 6
         + (int)this;
}

/* ref: FUN_00cb9c60 */
uint F_00cb9c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined1 * puVar1;
  
  puVar1 = (undefined1 *)(*(int *)this + 0x20 + param_1 * 8);
  return CONCAT31(CONCAT21(CONCAT11(*puVar1,*(undefined1 *)(*(int *)this + 0x21 + param_1 * 8)),
                           puVar1[2]),puVar1[3]);
}

/* ref: FUN_00cb9c90 */
uint F_00cb9c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)this;
  return (int)CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x24 + param_1 * 8),
                                         *(undefined1 *)(iVar1 + 0x25 + param_1 * 8)),
                                *(undefined1 *)(iVar1 + 0x26 + param_1 * 8)),
                       *(undefined1 *)(iVar1 + 0x27 + param_1 * 8)) + iVar1;
}

/* ref: FUN_00cb9cd0 */
unsigned int F_00cb9cd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x90];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x84);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int * piVar1;
  int * piVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined * this_00;
  undefined1 * puVar9;
  uint uVar10;
  int * piVar11;
  
  piVar11 = (*(int * PTR32 *)&gen_args[2]);
  piVar2 = (*(int * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x74)) = ((code *)REFP(0x107053b));
  (*(undefined * PTR32 *)(gen_frame + 0x70)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*(uint *)(gen_frame + 0x8)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x70));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x70)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 100)));
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int * PTR32 *)(gen_frame + 0x24)) = (*(int * PTR32 *)&gen_args[2]);
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1,(*(int * PTR32 *)&gen_args[2]));
  if (uVar4 == 0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
    (*(uint *)(gen_frame + 0x20)) = uVar4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0xc))) + 0x3c))))
                      (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0xc);
    (*(uint *)(gen_frame + 0x28)) = uVar5;
    (*(int *)(gen_frame + 0x34)) = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x28))) + uVar5 * 2;
    uVar5 = (uint)CONCAT12(*(undefined1 *)(uVar4 + 8),
                           CONCAT11(*(undefined1 *)(uVar4 + 9),*(undefined1 *)(uVar4 + 10))) << 5 |
            (uint)(*(byte *)(uVar4 + 0xb) >> 3);
    (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
    if (uVar5 != 0) {
      puVar9 = (undefined1 *)(uVar4 + 0x22);
      do {
        iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]);
        (*(int *)(gen_frame + 0x18)) = iVar6;
        if (iVar6 == *(*(int * PTR32 *)(gen_frame + 0x24))) {
          iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[2],puVar9[3]),puVar9[4]),puVar9[5]);
          iVar7 = iVar6 + uVar4;
          uVar10 = (uint)CONCAT11(*(undefined1 *)(iVar6 + 4 + uVar4),
                                  *(undefined1 *)(iVar6 + 5 + uVar4));
          (*(int *)(gen_frame + 0x1c)) = uVar10 * (*(int *)(gen_frame + 0x34)) + 6 + iVar7;
          (*(uint *)(gen_frame + 0x2c)) = 0;
          uVar4 = (*(uint *)(gen_frame + 0x20));
          if (uVar10 != 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (undefined1 *)(iVar7 + 6);
LAB_00cb9dfe: ;
            bVar3 = F_00cb4260((*(int * PTR32 *)(gen_frame + 0x24)),(*(undefined1 * PTR32 *)(gen_frame + 0x38)));
            if (bVar3 == 0) goto code_r0x00cb9e0e;
            this_00 = (undefined *)F_00cb15d0(0xc);
            puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x38));
            uVar4 = (*(uint *)(gen_frame + 0x28));
            (*(undefined * PTR32 *)(gen_frame + 0x3c)) = this_00;
            (*(undefined4 *)(gen_frame + 0x78)) = 0;
            if (this_00 == (undefined *)0x0) {
              (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)0x0;
            }
            else {
              uVar5 = F_00cb1240(this_00,(*(undefined1 * PTR32 *)(gen_frame + 0x38)),(*(uint *)(gen_frame + 0x28)),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10),
                                   (*(int *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x34)));
              (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)uVar5;
            }
            (*(undefined4 *)(gen_frame + 0x78)) = 0xffffffff;
            if (uVar4 != 0) {
              iVar6 = (int)((undefined2 *)(gen_frame + 0x4c)) - (int)puVar9;
              uVar5 = uVar4;
              do {
                *(ushort *)(puVar9 + iVar6) = CONCAT11(*puVar9,puVar9[1]);
                puVar9 = puVar9 + 2;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            F_00cb42c0(((int *)(gen_frame + 0x40)),(*(int *)(gen_frame + 0x18)),((undefined2 *)(gen_frame + 0x4c)),uVar4);
            (*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 *)(gen_frame + 0x30));
            piVar11 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10) + 100)));
            ((code *)*(gen_code32 *)(*piVar11 + 0xc))(piVar11,((int *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x3c)));
            piVar11 = ((int *)(gen_frame + 0x40));
            goto LAB_00cb9ed5;
          }
        }
LAB_00cb9e22: ;
        uVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 1;
        puVar9 = puVar9 + 8;
        (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (undefined *)uVar10;
      } while (uVar10 < uVar5);
    }
  }
  else {
LAB_00cb9ed5: ;
    F_00cb74f0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))),piVar11);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x70));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x7c));
  return 0;
code_r0x00cb9e0e: ;
  (*(undefined1 * PTR32 *)(gen_frame + 0x38)) = (*(undefined1 * PTR32 *)(gen_frame + 0x38)) + (*(int *)(gen_frame + 0x34));
  uVar8 = (*(uint *)(gen_frame + 0x2c)) + 1;
  (*(uint *)(gen_frame + 0x2c)) = uVar8;
  uVar4 = (*(uint *)(gen_frame + 0x20));
  if (uVar10 <= uVar8) goto LAB_00cb9e22;
  goto LAB_00cb9dfe;
}

/* ref: FUN_00cb9f10 */
uint F_00cb9f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 8);
  return (uint)param_2;
}

/* ref: FUN_00cb9f20 */
uint F_00cb9f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb9f40 */
uint F_00cb9f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00cb9f80 */
uint F_00cb9f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcb9f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 4) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    if (*(int *)(param_1 + 8) != 0) {
      uVar1 = *(uint *)(param_1 + 4);
      *((uint *)GEN_TOP((*(int *)(param_1 + 8) + 4))) = uVar1;
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return uVar1;
}

/* ref: FUN_00cb9fb0 */
uint F_00cb9fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcb9fb0u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070568));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined4 * PTR32 *)(gen_frame + 0xc)) = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *(*(undefined4 * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[4])REFP(0x1129968));
  F_00cb4120((*(undefined4 * PTR32 *)&gen_args[0]) + 2);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined4 * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cba000 */
unsigned int F_00cba000(void)
{
  GEN_ENTER(0xcba000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cba010 */
uint F_00cba010(unsigned int gen_a0)
{
  GEN_ENTER(0xcba010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cba020 */
uint F_00cba020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba020u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00cba030 */
unsigned int F_00cba030(unsigned int gen_a0)
{
  GEN_ENTER(0xcba030u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return 0;
}

/* ref: FUN_00cba040 */
uint F_00cba040(unsigned int gen_a0)
{
  GEN_ENTER(0xcba040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cba0a0 */
uint F_00cba0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba0a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 *)(param_1 + 4) = this;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  if (*(int *)((int)this + 8) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 8) + 4))) = param_1;
  }
  *(uint *)((int)this + 8) = param_1;
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + 1;
  return param_1;
}

/* ref: FUN_00cba0d0 */
uint F_00cba0d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba0d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 4);
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 8) = uVar1;
  }
  if (*(int *)(param_2 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_2 + 8) + 4))) = *(undefined4 *)(param_2 + 4);
  }
  *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  return (uint)param_1;
}

/* ref: FUN_00cba100 */
uint F_00cba100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)(iVar1 + 8);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))) = *(undefined4 *)(iVar1 + 8);
    }
    if (*(int *)(iVar1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar1 + 8) + 4))) = *(undefined4 *)(iVar1 + 4);
    }
    *(int *)((int)this + 0x18) = *(int *)((int)this + 0x18) + -1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cba140 */
uint F_00cba140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cba180 */
uint F_00cba180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba180u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(uint * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x107059b));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    (*(uint * PTR32 *)&gen_args[1]) = (uint *)F_00406a50(4);
  }
  else {
    uVar3 = -(uint)((int)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x18 >> 0x20) != 0) | (uint)(ZEXT48((*(uint * PTR32 *)&gen_args[1])) * 0x18);
    (*(uint * PTR32 *)&gen_args[1]) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                (REFG(int * PTR32, 0x15d7724),-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0)));
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[1]) == (uint *)0x0) {
    puVar1 = (uint *)0x0;
  }
  else {
    puVar1 = (*(uint * PTR32 *)&gen_args[1]) + 1;
    *(*(uint * PTR32 *)&gen_args[1]) = uVar4;
    F_01051d8c(puVar1,0x18,uVar4,((code *)REFP(0xcb9fb0)),((code *)REFP(0xcba030)));
  }
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  *((uint * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = puVar1;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = uVar4;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 4 + iVar2))) = 0;
      iVar2 = iVar2 + 0x18;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  F_00cb6d10((*(undefined * PTR32 *)&gen_args[0]));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(undefined4 *)&gen_args[2]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = (*(uint *)&gen_args[3]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (*(uint *)&gen_args[3]);
}

/* ref: FUN_00cba260 */
uint F_00cba260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  if ((param_1 & 2) != 0) {
    F_01051d29(this,0x18,*(int *)((int)this + -4),((code *)REFP(0xcba030)));
    if ((param_1 & 1) != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),(int)this - 4U);
    }
    return (int)this - 4U;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cba2d0 */
uint F_00cba2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba2d0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x2c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10705c8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
  F_00cb4120((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc);
  if ((*(int *)&gen_args[1]) != 0) {
    F_00cb4320(((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(int *)&gen_args[1]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cba380 */
uint F_00cba380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 4))) = *(undefined4 *)((int)this + 4);
  }
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cba3d0 */
uint F_00cba3d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcba3d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 0x10) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) = *(undefined4 *)((int)this + 0x14);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x14) + 4))) = *(undefined4 *)((int)this + 0x10);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(undefined4 *)((int)this + 8);
  }
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *(undefined4 *)((int)this + 4);
  }
  return uVar1;
}

/* ref: FUN_00cba420 */
uint F_00cba420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba420u, gen_a0, gen_a1, gen_a2, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x40];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  iVar2 = (int)(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x1070603));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined4 * PTR32 *)&gen_args[2]) != (undefined4 *)0x0) {
    iVar3 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
    while (iVar1 = iVar3, iVar1 != (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40) {
      bVar4 = F_00cb4170((undefined *)(iVar1 + 0xc),iVar2);
      if (bVar4 != 0) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return 0;
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *(int *)(iVar1 + 8);
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x1c,0)));
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x28)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x28)) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    (*(undefined4 * PTR32 *)&gen_args[2]) = puVar5;
    F_00cb4120(puVar5 + 3);
    if (iVar2 != 0) {
      F_00cb4320(puVar5 + 3,iVar2);
    }
  }
  puVar5[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x34;
  puVar5[2] = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c);
  if (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) + 4))) = puVar5;
  }
  *(undefined4 * PTR32 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x3c) = puVar5;
  *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x4c) = *(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x1c)) + 0x4c) + 1;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return (uint)puVar5;
}

/* ref: FUN_00cba510 */
unsigned int F_00cba510(unsigned int gen_a0)
{
  GEN_ENTER(0xcba510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x4c);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x3c);
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[1] != 0) {
        *(undefined4 *)(puVar2[1] + 8) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 4) = puVar2[1];
      }
      *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    }
    iVar1 = *(int *)((int)this + 0x4c);
  }
  return 0;
}

/* ref: FUN_00cba560 */
uint F_00cba560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 8) = param_2[2];
    }
    if (param_2[2] != 0) {
      *(undefined4 *)(param_2[2] + 4) = param_2[1];
    }
    *(int *)((int)this + 0x4c) = *(int *)((int)this + 0x4c) + -1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4,param_1);
  if (param_2 != (undefined4 *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)*param_2)(param_2,1);
  }
  return uVar1;
}

/* ref: FUN_00cba5b0 */
uint F_00cba5b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 0x10) * 0x58 + *(int *)((int)this + 8))));
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  F_00cba180(this_00,param_1,param_2,param_3);
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_1;
  return (uint)this_00;
}

/* ref: FUN_00cba5f0 */
uint F_00cba5f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  __declspec(align(16)) undefined1 gen_frame[0x34];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070633));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129984));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x112997c));
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) = (*(int *)&gen_args[2]);
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = 1;
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)((*(int *)&gen_args[2]) + 0xc) + 100))))((int *)((*(int *)&gen_args[2]) + 0xc))));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),*puVar1);
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x30))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = ((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40)));
  *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = 0;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) =
       CONCAT31(CONCAT21(CONCAT11(*(*(undefined1 * PTR32 *)&gen_args[1]),(*(undefined1 * PTR32 *)&gen_args[1])[1]),(*(undefined1 * PTR32 *)&gen_args[1])[2]),(*(undefined1 * PTR32 *)&gen_args[1])[3]);
  iVar2 = CONCAT31(CONCAT21(CONCAT11((*(undefined1 * PTR32 *)&gen_args[1])[4],(*(undefined1 * PTR32 *)&gen_args[1])[5]),(*(undefined1 * PTR32 *)&gen_args[1])[6]),(*(undefined1 * PTR32 *)&gen_args[1])[7]);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x24))) = iVar2;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x20))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))) + iVar2;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)(*(undefined * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00cba700 */
uint F_00cba700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba700u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cbace0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00cba710 */
uint F_00cba710(unsigned int gen_a0)
{
  GEN_ENTER(0xcba710u, gen_a0, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x28];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a0;
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070679));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x4)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129984));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x112997c));
  (*(undefined4 *)(gen_frame + 0x18)) = 3;
  F_00cba510((*(undefined * PTR32 *)&gen_args[0]));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x44)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  }
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x38)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 *)(gen_frame + 0x18)) = CONCAT31(GEN_PIECE(&(*(undefined4 *)(gen_frame + 0x18)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1a))) == '\0') && (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) != 0)) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))));
    *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)(*(undefined * PTR32 *)&gen_args[0]) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 4) = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cba7f0 */
uint F_00cba7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcba7f0u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x9c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x94);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  undefined * pvVar10;
  undefined4 * puVar11;
  undefined1 * puVar12;
  undefined * pvVar13;
  undefined1 * puVar14;
  uint uVar15;
  int iVar16;
  undefined * pvVar17;
  undefined1 * puVar18;
  
  (*(undefined4 *)(gen_frame + 0x88)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x84)) = ((code *)REFP(0x10706ab));
  (*(undefined * PTR32 *)(gen_frame + 0x80)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x7c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x8c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x80));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x80)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = (*(undefined * PTR32 *)&gen_args[0]);
  (*(int *)(gen_frame + 0x44)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = (undefined *)0x0;
  uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 0x10))))((*(int * PTR32 *)&gen_args[1]));
  pvVar17 = ((undefined *)GEN_TOP(((uint)CONCAT12(*(undefined1 *)(uVar8 + 8),
                                    CONCAT11(*(undefined1 *)(uVar8 + 9),*(undefined1 *)(uVar8 + 10))
                                   ) << 5 | (uint)(*(byte *)(uVar8 + 0xb) >> 3))));
  pvVar13 = (undefined *)0x0;
  (*(uint *)(gen_frame + 0x24)) = uVar8;
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar17;
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)0x0;
  if ((undefined *)0x1 < pvVar17) {
    iVar16 = ((int)pvVar17 - 2U >> 1) + 1;
    pvVar13 = (undefined *)(iVar16 * 2);
    puVar14 = (undefined1 *)(uVar8 + 0x26);
    (*(undefined * PTR32 *)(gen_frame + 0x40)) = pvVar13;
    do {
      iVar9 = CONCAT31(CONCAT21(CONCAT11(puVar14[-2],puVar14[-1]),*puVar14),puVar14[1]);
      (*(int *)(gen_frame + 0x44)) = (*(int *)(gen_frame + 0x44)) +
                 (uint)CONCAT11(*(undefined1 *)(iVar9 + 4 + uVar8),
                                *(undefined1 *)(iVar9 + uVar8 + 5));
      iVar9 = CONCAT31(CONCAT21(CONCAT11(puVar14[6],puVar14[7]),puVar14[8]),puVar14[9]);
      (*(undefined * PTR32 *)(gen_frame + 0x48)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x48)) +
                         (uint)CONCAT11(*(undefined1 *)(iVar9 + 4 + uVar8),
                                        *(undefined1 *)(iVar9 + 5 + uVar8)))));
      puVar14 = puVar14 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (pvVar13 < pvVar17) {
    iVar16 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar8 + 0x24 + (int)((int)(uintptr_t)pvVar13) * 8),
                                        *(undefined1 *)(uVar8 + 0x25 + (int)((int)(uintptr_t)pvVar13) * 8)),
                               *(undefined1 *)(uVar8 + 0x26 + (int)((int)(uintptr_t)pvVar13) * 8)),
                      *(undefined1 *)(uVar8 + 0x27 + (int)((int)(uintptr_t)pvVar13) * 8));
    (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)
               (uint)CONCAT11(*(undefined1 *)(iVar16 + 4 + uVar8),
                              *(undefined1 *)(iVar16 + 5 + uVar8));
  }
  uVar5 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x20);
  puVar14 = (undefined1 *)((int)(*(undefined1 * PTR32 *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x44)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x48)));
  (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = puVar14;
  uVar6 = *(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x1c);
  iVar16 = *((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) + 100)));
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = (undefined *)uVar6;
  iVar9 = *(int *)(iVar16 + 0x10);
  *(int *)(iVar16 + 0x10) = iVar9 + 1;
  F_00cba180(((undefined *)GEN_TOP((iVar9 * 0x58 + *(int *)(iVar16 + 8)))),puVar14,uVar6,uVar5);
  pvVar13 = (*(undefined * PTR32 *)(gen_frame + 0x3c));
  *(int *)(iVar16 + 0x14) = (int)((*(undefined1 * PTR32 *)(gen_frame + 0x4c)) + *(int *)(iVar16 + 0x14));
  pvVar10 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) + 0xc))) + 0x3c))))
                              (*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x48)) = pvVar10;
  (*(int *)(gen_frame + 0x44)) = *((int *)GEN_TOP((*(int *)((int)pvVar13 + 0x10) + 0x28))) + (int)((int)(uintptr_t)pvVar10) * 2;
  (*(undefined * PTR32 *)(gen_frame + 0x40)) = (undefined *)0x0;
  if (pvVar17 != (undefined *)0x0) {
    puVar14 = (undefined1 *)(uVar8 + 0x22);
    do {
      uVar1 = puVar14[-2];
      uVar2 = puVar14[-1];
      uVar3 = *puVar14;
      uVar4 = puVar14[1];
      iVar16 = CONCAT31(CONCAT21(CONCAT11(puVar14[2],puVar14[3]),puVar14[4]),puVar14[5]);
      iVar9 = iVar16 + uVar8;
      uVar15 = (uint)CONCAT11(*(undefined1 *)(iVar16 + 4 + uVar8),*(undefined1 *)(iVar9 + 5));
      (*(uint *)(gen_frame + 0x30)) = uVar15;
      (*(int *)(gen_frame + 0x1c)) = uVar15 * (*(int *)(gen_frame + 0x44)) + 6 + iVar9;
      (*(uint *)(gen_frame + 0x2c)) = 0;
      if (uVar15 != 0) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (undefined1 *)(iVar9 + 6);
        (*(int *)(gen_frame + 0x20)) = -(*(int *)(gen_frame + 0x44));
        puVar18 = ((undefined1 *)(gen_frame + 0x56)) - iVar9;
        do {
          pvVar13 = (undefined *)F_00cb15d0(0xc);
          (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar13;
          (*(undefined4 *)(gen_frame + 0x88)) = 0;
          if (pvVar13 == (undefined *)0x0) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = (undefined4 *)0x0;
          }
          else {
            puVar11 = (undefined4 *)
                      F_00cb1240(pvVar13,(*(undefined1 * PTR32 *)(gen_frame + 0x4c)),(*(undefined * PTR32 *)(gen_frame + 0x48)),*(undefined4 *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10),
                                   (*(int *)(gen_frame + 0x1c)),(*(int *)(gen_frame + 0x44)));
            (*(undefined4 * PTR32 *)(gen_frame + 0x38)) = puVar11;
          }
          (*(undefined4 *)(gen_frame + 0x88)) = 0xffffffff;
          if ((*(undefined * PTR32 *)(gen_frame + 0x48)) != (undefined *)0x0) {
            (*(undefined * PTR32 *)(gen_frame + 0x34)) = (*(undefined * PTR32 *)(gen_frame + 0x48));
            puVar12 = (*(undefined1 * PTR32 *)(gen_frame + 0x4c));
            do {
              *(ushort *)(puVar12 + (int)puVar18) = CONCAT11(*puVar12,puVar12[1]);
              puVar12 = puVar12 + 2;
              pvVar13 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) - 1);
              (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar13;
            } while (pvVar13 != (undefined *)0x0);
          }
          F_00cb42c0(((undefined1 *)(gen_frame + 0x50)),CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4),((undefined1 *)(gen_frame + 0x5c)),
                       (*(undefined * PTR32 *)(gen_frame + 0x48)));
          piVar7 = *((int * PTR32 *)GEN_TOP((*(int *)((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) + 0x10) + 100)));
          pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar7 + 0xc))(piVar7,((undefined1 *)(gen_frame + 0x50)),(*(undefined4 * PTR32 *)(gen_frame + 0x38)))));
          if ((char)pvVar10 == '\0') {
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x38)) != (undefined4 *)0x0) {
              pvVar10 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)*(*(undefined4 * PTR32 *)(gen_frame + 0x38)))((*(undefined4 * PTR32 *)(gen_frame + 0x38)),1)));
            }
            goto LAB_00cbab07;
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) = (*(undefined1 * PTR32 *)(gen_frame + 0x4c)) + (*(int *)(gen_frame + 0x44));
          puVar18 = puVar18 + (*(int *)(gen_frame + 0x20));
          uVar15 = (*(uint *)(gen_frame + 0x2c)) + 1;
          (*(uint *)(gen_frame + 0x2c)) = uVar15;
          uVar8 = (*(uint *)(gen_frame + 0x24));
        } while (uVar15 < (*(uint *)(gen_frame + 0x30)));
      }
      pvVar10 = (undefined *)((int)(*(undefined * PTR32 *)(gen_frame + 0x40)) + 1);
      puVar14 = puVar14 + 8;
      (*(undefined * PTR32 *)(gen_frame + 0x40)) = pvVar10;
    } while (pvVar10 < (*(undefined * PTR32 *)(gen_frame + 0x28)));
  }
LAB_00cbab07: ;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x80));
  F_00c47745((*(uint *)(gen_frame + 0x7c)) ^ (uint)(uint)(gen_frame + 0x8c));
  return (uint)pvVar10;
}

/* ref: FUN_00cbab30 */
uint F_00cbab30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbab30u, gen_a0, gen_a1, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x12c];
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x124);
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined4 *)(gen_frame + 0x118)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x114)) = ((code *)REFP(0x10706e9));
  (*(undefined * PTR32 *)(gen_frame + 0x110)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  ((byte *)(gen_frame + 0x8))[0x104] = (char)uVar1;
  ((byte *)(gen_frame + 0x8))[0x105] = (char)(uVar1 >> 8);
  ((byte *)(gen_frame + 0x8))[0x106] = (char)(uVar1 >> 0x10);
  ((byte *)(gen_frame + 0x8))[0x107] = (char)(uVar1 >> 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x110));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x110)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724),0x1c,0)));
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 0)) = puVar2;
  (*(undefined4 *)(gen_frame + 0x118)) = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 *)(gen_frame + 0x118)) + 0)) = 1;
    (*(undefined4 *)(gen_frame + 0x118)) = 1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    F_00cb4120(puVar2 + 3);
  }
  puVar2[1] = (int)(*(undefined * PTR32 *)&gen_args[0]) + 0x34;
  puVar2[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c)));
  (*(undefined4 *)(gen_frame + 0x118)) = 0xffffffff;
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) + 4))) = puVar2;
  }
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x3c))) = puVar2;
  F_00c472af((char *)(((byte *)(gen_frame + 0x8)) + 4),0x100,"%s_%d%s.exd",*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x14))),
             *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x1c))),
             (&REFG(undefined * PTR32, 0x134c2d0))[*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x10))) + 0x10)))],uVar1);
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x28))) + 1;
  *(char *)(puVar2 + 6) = (char)(*(undefined4 *)&gen_args[1]);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                    (REFG(int * PTR32, 0x15d7724) + 1,((byte *)(gen_frame + 0x8)) + 4,(int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc,puVar2,0,0,
                     (uint)((char)(*(undefined4 *)&gen_args[1]) == '\0'));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x110));
  F_00c47745((*(undefined4 *)((char *)((byte *)(gen_frame + 0x8)) + 260)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar1;
}

/* ref: FUN_00cbac50 */
uint F_00cbac50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbac50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x110];
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x108)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10c);
  uVar1 = F_00cba420(this,0,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00c472af(((char *)(gen_frame + 0x8)),0x100,"%s_%d%s.exd",*(undefined4 *)((int)this + 0x14),
               *(undefined4 *)((int)this + 0x1c),
               (&REFG(undefined * PTR32, 0x134c2d0))[*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10)))]);
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 4))))
                      (REFG(int, 0x15d7724) + 4,((char *)(gen_frame + 0x8)),(int)this + 0xc,uVar1,0,0,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x108)) ^ (uint)(uint)(gen_frame + 0x10c));
  return uVar2;
}

/* ref: FUN_00cbace0 */
uint F_00cbace0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbace0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cba710(this);
  if ((param_1 & 1) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724),this);
  }
  return (uint)this;
}

/* ref: FUN_00cbad10 */
uint F_00cbad10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbad10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  bVar5 = (char)uVar2 == '\0';
  puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*param_1 + 0x18))(param_1)));
  F_00cb4360(((undefined1 *)(gen_frame + 0xc)),puVar3 + 3);
  if (*(short *)((int)puVar3 + 0x12) == -1) {
    if (bVar5) {
      F_00cba7f0((undefined *)((int)this + -0xc),param_1);
    }
    if (puVar3[1] != 0) {
      *(undefined4 *)(puVar3[1] + 8) = puVar3[2];
    }
    if (puVar3[2] != 0) {
      *(undefined4 *)(puVar3[2] + 4) = puVar3[1];
    }
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4,param_1);
    puVar3 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)*puVar3)(puVar3,1)));
  }
  else {
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x30);
    puVar3 = (undefined4 *)((int)this + 0x34);
    if (puVar4 != puVar3) {
      do {
        bVar1 = F_00cb4170(puVar4 + 3,((undefined1 *)(gen_frame + 0xc)));
        if (bVar1 != 0) {
          if (bVar5) {
            F_00cb9cd0((undefined *)((int)this + -0xc),param_1,puVar4 + 3);
          }
          if (puVar4 != (undefined4 *)0x0) {
            if (puVar4[1] != 0) {
              *(undefined4 *)(puVar4[1] + 8) = puVar4[2];
            }
            if (puVar4[2] != 0) {
              *(undefined4 *)(puVar4[2] + 4) = puVar4[1];
            }
            *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + -1;
            ((code *)*(gen_code32 *)*puVar4)(puVar4,1);
          }
          puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*(int *)(REFG(int, 0x15d7724) + 4) + 8))))(REFG(int, 0x15d7724) + 4,param_1)));
          break;
        }
        if (puVar4 != (undefined4 *)0x0) {
          puVar4 = (undefined4 *)puVar4[2];
        }
        puVar3 = (undefined4 *)((int)this + 0x34);
      } while (puVar4 != puVar3);
    }
  }
  *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -1;
  if (!bVar5) {
    puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
    *(undefined1 *)((int)this + 0x24) = 1;
    *(undefined1 *)((int)puVar3 + 0x81) = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)puVar3;
}

/* ref: FUN_00cbae50 */
unsigned int F_00cbae50(unsigned int gen_a0)
{
  GEN_ENTER(0xcbae50u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00cbaea0 */
uint F_00cbaea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaea0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = param_2;
  uVar1 = F_00d2cce0();
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaed0 */
uint F_00cbaed0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbaed0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = 0xffffffff;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaef0 */
uint F_00cbaef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cbaf10 */
unsigned int F_00cbaf10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbaf10u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  return 0;
}

/* ref: FUN_00cbaf20 */
uint F_00cbaf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf20u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbaf40 */
byte F_00cbaf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

/* ref: FUN_00cbaf60 */
byte F_00cbaf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbaf60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) != *(int *)(param_2 + 4);
}

/* ref: FUN_00cbaf80 */
uint F_00cbaf80(unsigned int gen_a0)
{
  GEN_ENTER(0xcbaf80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf720(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbafb0 */
uint F_00cbafb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbafb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf770(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb010 */
unsigned int F_00cbb010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf7f0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb050 */
uint F_00cbb050(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb050u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*(undefined4 *)(param_1 + 4),param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb090 */
uint F_00cbb090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*(undefined4 *)((int)this + 4),param_1);
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x5c))))
              (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb0e0 */
unsigned int F_00cbb0e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb0e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*(undefined4 *)((int)this + 4),param_1,param_2);
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))
              (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4),1,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb130 */
unsigned int F_00cbb130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*(undefined4 *)((int)this + 4),param_1);
  if (*(int *)((int)this + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 8) + 0x60))))
              (*(int * PTR32 *)((int)this + 8),*(undefined4 *)((int)this + 4),0,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb1b0 */
byte F_00cbb1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb1b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbfb10(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb1e0 */
unsigned int F_00cbb1e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbb1e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfb80(*(undefined4 *)(param_1 + 4),param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb250 */
uint F_00cbb250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb250u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfbc0(*(undefined4 *)((int)this + 4));
  if (-1 < (int)uVar1) {
    uVar1 = F_00cbfc80(uVar1);
    F_00cbb870(param_1,uVar1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbb8a0(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbb2c0 */
unsigned int F_00cbb2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfc00(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb300 */
uint F_00cbb300(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb300u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfc40(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb330 */
float F_00cbb330(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cbfef0(*(uint *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbb370 */
unsigned int F_00cbb370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbff60(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb3e0 */
unsigned int F_00cbb3e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb3e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbffa0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb420 */
byte F_00cbb420(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb420u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbffe0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb480 */
uint F_00cbb480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc0060(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4c0 */
uint F_00cbb4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc00a0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4f0 */
unsigned int F_00cbb4f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb4f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) == 0) {
    F_00cbfe90(param_1,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb5d0 */
unsigned int F_00cbb5d0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb5d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*(undefined4 *)(param_1 + 4),param_2,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb640 */
unsigned int F_00cbb640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb640u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*(undefined4 *)(param_1 + 4),local_c);
  if (*(int *)(param_1 + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x5c))))
              (*(int * PTR32 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb6c0 */
unsigned int F_00cbb6c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb6c0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*(undefined4 *)(param_1 + 4),local_c,param_3);
  if (*(int *)(param_1 + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x60))))
              (*(int * PTR32 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),1,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb750 */
unsigned int F_00cbb750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb750u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*(undefined4 *)(param_1 + 4),local_c);
  if (*(int *)(param_1 + 8) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 8) + 0x60))))
              (*(int * PTR32 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),0,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbb7d0 */
uint F_00cbb7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb7d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb7f0 */
uint F_00cbb7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb7f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb810 */
uint F_00cbb810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)this = param_1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BusController::vf0 */
uint F_00cbb840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbb870 */
uint F_00cbb870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb870u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb890 */
unsigned int F_00cbb890(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  return 0;
}

/* ref: FUN_00cbb8a0 */
uint F_00cbb8a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb8a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb8b0 */
uint F_00cbb8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cbb8d0 */
uint F_00cbb8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8d0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbb8f0 */
uint F_00cbb8f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbb8f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x30))))(*(int * PTR32 *)((int)this + 4),param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00cbb910 */
uint F_00cbb910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcbb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb930 */
byte F_00cbb930(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4));
    return (byte)uVar1;
  }
  return 1;
}

/* ref: FUN_00cbb950 */
uint F_00cbb950(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbb950u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 4) != 0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x24))))((undefined4)gen_fl2bits(param_2),param_3)
    ;
  }
  return in_EAX;
}

/* ref: FUN_00cbb980 */
uint F_00cbb980(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcbb980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  uint in_EAX = 0;
  
  if (*(int *)(param_1 + 4) != 0) {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x28))))(*(int * PTR32 *)(param_1 + 4));
  }
  return in_EAX;
}

/* ref: FUN_00cbb9b0 */
double F_00cbb9b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb9b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 extraout_ST0;
  
  if (*(int *)((int)this + 4) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x2c))))(*(int * PTR32 *)((int)this + 4));
    return (double)extraout_ST0;
  }
  return 0.0;
}

/* ref: FUN_00cbb9d0 */
uint F_00cbb9d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcbb9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x4c))))
                      (*(int * PTR32 *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb9f0 */
uint F_00cbb9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbb9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x38))))(*(int * PTR32 *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_00cbba10 */
unsigned int F_00cbba10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  if (*(int *)((int)this + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x3c))))(*(int * PTR32 *)((int)this + 4),param_1);
    return 0;
  }
  return 0;
}

/* ref: FUN_00cbba30 */
unsigned int F_00cbba30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x40))))
              (*(int * PTR32 *)(param_1 + 4),
               (int)((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return 0;
}

/* ref: FUN_00cbba70 */
unsigned int F_00cbba70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbba70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x44))))
              (*(int * PTR32 *)(param_1 + 4),
               (int)((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return 0;
}

/* ref: FUN_00cbbab0 */
unsigned int F_00cbbab0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbab0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),0xc);
  }
  return 0;
}

/* ref: FUN_00cbbad0 */
unsigned int F_00cbbad0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),1);
  }
  return 0;
}

/* ref: FUN_00cbbaf0 */
unsigned int F_00cbbaf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbaf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),2);
  }
  return 0;
}

/* ref: FUN_00cbbb10 */
unsigned int F_00cbbb10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),0xd);
  }
  return 0;
}

/* ref: FUN_00cbbb30 */
unsigned int F_00cbbb30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbb30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),3);
  }
  return 0;
}

/* ref: FUN_00cbbb50 */
unsigned int F_00cbbb50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),4);
  }
  return 0;
}

/* ref: FUN_00cbbb70 */
unsigned int F_00cbbb70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbb70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),5);
  }
  return 0;
}

/* ref: FUN_00cbbb90 */
unsigned int F_00cbbb90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbb90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),6);
  }
  return 0;
}

/* ref: FUN_00cbbbb0 */
unsigned int F_00cbbbb0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbbb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),7);
  }
  return 0;
}

/* ref: FUN_00cbbbd0 */
unsigned int F_00cbbbd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),8);
  }
  return 0;
}

/* ref: FUN_00cbbbf0 */
unsigned int F_00cbbbf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbbf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),9);
  }
  return 0;
}

/* ref: FUN_00cbbc10 */
unsigned int F_00cbbc10(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),10);
  }
  return 0;
}

/* ref: FUN_00cbbc30 */
unsigned int F_00cbbc30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbbc30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x48))))((undefined4)gen_fl2bits(param_2),0xb);
  }
  return 0;
}

/* ref: FUN_00cbbc50 */
byte F_00cbbc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbc50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x30))))(*(int * PTR32 *)(param_1 + 4));
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 0x30))))(*(int * PTR32 *)(param_2 + 4));
    return uVar1 == uVar2;
  }
  return uVar1 == 0xffffffff;
}

/* ref: FUN_00cbbca0 */
byte F_00cbbca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbca0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0x30))))(*(int * PTR32 *)(param_1 + 4));
  }
  if (*(int *)(param_2 + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_2 + 4) + 0x30))))(*(int * PTR32 *)(param_2 + 4));
    return uVar1 != uVar2;
  }
  return uVar1 != 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ReverbController::vf0 */
uint F_00cbbcf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbcf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbbd50 */
uint F_00cbbd50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbbd50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  return (uint)this;
}

/* ref: FUN_00cbbd70 */
uint F_00cbbd70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbd70u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbbd90 */
uint F_00cbbd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  return (uint)this;
}

/* ref: FUN_00cbbdb0 */
unsigned int F_00cbbdb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbdb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  return 0;
}

/* ref: FUN_00cbbdc0 */
uint F_00cbbdc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbdc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  if (this != param_1) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)param_1 + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)param_1 + 8);
  }
  return (uint)this;
}

/* ref: FUN_00cbbde0 */
uint F_00cbbde0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbde0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 != 0) && (-1 < iVar1)) && (uVar2 = F_00cc46a0(iVar1), uVar2 != 0)) {
    return uVar2;
  }
  return *(uint *)((int)this + 4);
}

/* ref: FUN_00cbbe00 */
uint F_00cbbe00(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbe00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc5590(*(undefined4 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00cbbe10 */
byte F_00cbbe10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbe10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cc5630(*(undefined4 *)((int)this + 4));
  return bVar1;
}

/* ref: FUN_00cbbe20 */
byte F_00cbbe20(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cc56d0(*(undefined4 *)((int)this + 4));
  return bVar1;
}

/* ref: FUN_00cbbe30 */
unsigned int F_00cbbe30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbe30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbe57: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbe8a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbe57;
  }
  if ((int)uVar2 < 0) {
    F_00d07000(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc2880(uVar2,param_1);
LAB_00cbbe8a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbbea0 */
unsigned int F_00cbbea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbec7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbefa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbec7;
  }
  if ((int)uVar2 < 0) {
    F_00d07050(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc2900(uVar2,param_1);
LAB_00cbbefa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbbf10 */
unsigned int F_00cbbf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbbf10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbf37: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbbf6a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbf37;
  }
  if ((int)uVar2 < 0) {
    F_00d070a0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc2980(uVar2,param_1);
LAB_00cbbf6a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbbff0 */
uint F_00cbbff0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbbff0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return uVar2;
    }
  }
  uVar2 = *(uint *)((int)this + 4);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc040 */
byte F_00cbc040(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc040u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc06b;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc06b: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06530(*(undefined * PTR32 *)((int)this + 8),uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc2c00(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc120 */
uint F_00cbc120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc120u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc14d;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbc14d: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d062d0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return extraout_EAX;
    }
    if (param_1 != 0) {
      F_00cc4270(uVar2,1);
    }
    F_00cc2fc0(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc1a0 */
uint F_00cbc1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc1cd;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbc1cd: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d063a0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return extraout_EAX;
    }
    if (param_1 != 0) {
      F_00cc4270(uVar2,1);
    }
    F_00cc3040(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc220 */
uint F_00cbc220(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc24b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc24b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07af0(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3200(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc290 */
byte F_00cbc290(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc290u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc2bb;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc2bb: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06470(*(undefined * PTR32 *)((int)this + 8),uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc30c0(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc390 */
uint F_00cbc390(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc390u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc40a;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc3cc: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc40a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc3cc;
  }
  if ((int)uVar2 < 0) {
    F_00d06010(*(undefined4 *)(param_1 + 8),uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc34b0(uVar2,param_2,param_3);
LAB_00cbc40a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc420 */
unsigned int F_00cbc420(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbc420u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,param_4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc480 */
unsigned int F_00cbc480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)((int)this + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc35c0(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc4e0 */
uint F_00cbc4e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc4e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc507: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc53a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc507;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc53a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc550 */
uint F_00cbc550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc577: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc5aa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc577;
  }
  if ((int)uVar2 < 0) {
    F_00d06220(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc5aa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc5c0 */
uint F_00cbc5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc5c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc5e7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc61a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc5e7;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc37c0(uVar2,param_1);
LAB_00cbc61a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc630 */
unsigned int F_00cbc630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbc630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc657: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbc66d;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc657;
  }
  if ((int)uVar2 < 0) {
    F_00d065f0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
  }
LAB_00cbc66d: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc680 */
uint F_00cbc680(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc680u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc6fa;
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc6bc: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc6fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc6bc;
  }
  if ((int)uVar2 < 0) {
    F_00d060f0(*(undefined4 *)(param_1 + 8),uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc38c0(uVar2,param_2,param_3);
LAB_00cbc6fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc710 */
uint F_00cbc710(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc737: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbc768;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc737;
  }
  if ((int)uVar2 < 0) {
    F_00d06650(*(undefined4 *)(param_1 + 8),uVar2,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc39c0(uVar2,param_2);
LAB_00cbc768: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc780 */
unsigned int F_00cbc780(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbc780u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,param_3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc7e0 */
uint F_00cbc7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc80b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc80b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d066a0(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3a40(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc850 */
uint F_00cbc850(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc87b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc87b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06700(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3ae0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc8c0 */
unsigned int F_00cbc8c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3640(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc920 */
unsigned int F_00cbc920(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc36c0(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc980 */
unsigned int F_00cbc980(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc980u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3940(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc9e0 */
unsigned int F_00cbc9e0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbc9e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc4860(uVar2,param_2,param_3,param_4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbca50 */
unsigned int F_00cbca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)((int)this + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3c20(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbcab0 */
uint F_00cbcab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcade;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    *param_1 = 0;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcade: ;
  if ((int)uVar2 < 0) {
    F_00d06760(*(undefined * PTR32 *)((int)this + 8),param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc3b80(param_1,uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbcbc0 */
uint F_00cbcbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcbe4: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcc0b;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcbe4;
  }
  if ((int)uVar2 < 0) {
    F_00d06810(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3d40(uVar2);
LAB_00cbcc0b: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcc20 */
uint F_00cbcc20(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcc4b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcc4b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06860(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3dc0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcc90 */
uint F_00cbcc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbccb7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcce6;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbccb7;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3e60(uVar2);
    F_00cc6a70(param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
LAB_00cbcce6: ;
  F_00cc6a90(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbcd10 */
uint F_00cbcd10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbcd10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcd37: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbcd75;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcd37;
  }
  if ((int)uVar2 < 0) {
    F_00d068c0(*(undefined4 *)(param_1 + 8),uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4040(uVar2,param_2,param_3);
LAB_00cbcd75: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcd90 */
float F_00cbcd90(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcdbf;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbcdbf: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06910(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc40d0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbce00 */
uint F_00cbce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbce27: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbce5a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbce27;
  }
  if ((int)uVar2 < 0) {
    F_00d06970(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc41f0(uVar2,param_1);
LAB_00cbce5a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbce70 */
byte F_00cbce70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbce70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbce97;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbce97: ;
  if ((uVar3 != 0) && (-1 < (int)uVar3)) {
    bVar2 = F_00cc3fa0(uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbced0 */
uint F_00cbced0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbced0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcefb;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcefb: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06f40(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc4d20(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcfb0 */
uint F_00cbcfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  float10 fVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbcfde;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    fVar2 = (float10)0;
    *param_1 = (float)fVar2;
    param_1[1] = (float)fVar2;
    param_1[2] = (float)fVar2;
    param_1[3] = (float)(float10)1;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcfde: ;
  if ((int)uVar3 < 0) {
    F_00d06270(*(undefined * PTR32 *)((int)this + 8),param_1,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc4400(param_1,uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbd050 */
float F_00cbd050(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd07f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd07f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a00(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc44b0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd0c0 */
float F_00cbd0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd0ef;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd0ef: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a60(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc4560(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd130 */
float F_00cbd130(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd15f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd15f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06ac0(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc4600(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd1a0 */
uint F_00cbd1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd1c7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd1fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd1c7;
  }
  if ((int)uVar2 < 0) {
    F_00d07b60(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4740(uVar2,param_1);
LAB_00cbd1fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbd210 */
uint F_00cbd210(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd23b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbd23b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07bb0(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc47c0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbd280 */
unsigned int F_00cbd280(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    F_00cc2ec0(*(int *)((int)this + 4),0);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd2b0 */
unsigned int F_00cbd2b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbd2b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)(param_1 + 4) != 0) {
    F_00cc48f0(*(int *)(param_1 + 4),param_2,param_3,param_4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd390 */
uint F_00cbd390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00cc4ac0(*(int *)((int)this + 4),param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00cbd3e0 */
byte F_00cbd3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd40a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd411;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd40a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,param_1,param_2,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x18)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd411: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd500 */
byte F_00cbd500(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcbd500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd52a: ;
    uVar2 = *(uint *)((int)param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbd531;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd52a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(param_1);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *(float *)(uVar2 + 0x30) = param_2;
        *(float *)(uVar2 + 0x34) = param_3;
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)param_1 + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 1;
  }
LAB_00cbd531: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd610 */
byte F_00cbd610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcbd610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd63a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd641;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd63a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        *param_3 = *(undefined4 *)(uVar2 + 0x58);
        *param_4 = *(undefined4 *)(uVar2 + 0x50);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd641: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd740 */
byte F_00cbd740(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd768;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd768: ;
  bVar2 = 0;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      bVar2 = F_00d07150(*(undefined * PTR32 *)((int)this + 8),uVar3);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return bVar2;
    }
    bVar2 = F_00cc4b60(uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbd8e0 */
byte F_00cbd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd911;
  }
  uVar2 = *(uint *)(param_1 + 4);
LAB_00cbd911: ;
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
      return uVar2 == uVar3;
    }
  }
  uVar3 = *(uint *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return uVar2 == uVar3;
}

/* ref: FUN_00cbd970 */
byte F_00cbd970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbd8e0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00cbd990 */
uint F_00cbd990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd9bd;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd9bd: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)this + 8),uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    if (param_1 != 0) {
      F_00d05fb0(*(undefined * PTR32 *)((int)this + 8),uVar3,param_1);
    }
    if (0 < param_2) {
      F_00d07700(*(undefined * PTR32 *)((int)this + 8),uVar3,param_2);
    }
    F_00d05e30(*(undefined * PTR32 *)((int)this + 8),uVar3,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  bVar2 = F_00cbc290(this);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  if (param_1 != 0) {
    F_00cc2e20(uVar3,param_1);
  }
  if (0 < param_2) {
    F_00cc4ca0(uVar3,param_2);
  }
  uVar3 = F_00cc2c90(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdab0 */
uint F_00cbdab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbdae0;
  }
  uVar3 = *(uint *)((int)param_1 + 4);
LAB_00cbdae0: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)param_1 + 8),uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    local_c = (undefined4)
              (longlong)
              TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8));
    uVar3 = F_00d05f50(*(undefined * PTR32 *)((int)param_1 + 8),uVar3,local_c);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  bVar2 = F_00cbc290(param_1);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar3 = F_00cc2d80(uVar3,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdbf0 */
uint F_00cbdbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbdc2f;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbdc2f: ;
  (*(ulonglong *)(gen_frame + 0x28)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x80002;
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x38)) = param_1;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x18)),0x30);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d057a0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    }
    else if (param_1 == 0) {
      F_00cc2ec0(uVar2,0);
    }
    else {
      uVar3 = param_1;
      if (param_1 == 0xffffffff) {
        uVar3 = F_00cc3f00(uVar2);
        (*(uint *)(gen_frame + 0x14)) = uVar3;
        uVar4 = F_00cbced0(this);
        uVar3 = 0;
        if (uVar4 != 0) {
          F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
          F_00cbe880(((undefined1 *)(gen_frame + 0x8)));
          uVar4 = F_00cbe7e0((*(uint *)(gen_frame + 0x14)));
          if (uVar4 != 0) {
            uVar3 = (uint)*(ushort *)(uVar4 + 0x76);
          }
          F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
          F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
        }
      }
      F_00cc4270(uVar2,1);
      F_00cc2ec0(uVar2,uVar3);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return extraout_EAX;
}

/* ref: FUN_00cbdd20 */
uint F_00cbdd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc120(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbdd70 */
uint F_00cbdd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc1a0(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbddc0 */
uint F_00cbddc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbddc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc390(param_1,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbde10 */
uint F_00cbde10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbde10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_4 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbdeb0 */
uint F_00cbdeb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdeb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc680(param_1,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbdf00 */
unsigned int F_00cbdf00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbdf90 */
uint F_00cbdf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbd990(param_1,local_c,param_3);
  return uVar1;
}

/* ref: FUN_00cbdfe0 */
uint F_00cbdfe0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbdfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbe010;
  }
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
LAB_00cbe010: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    if ((*(float *)&gen_args[4]) != 0.0) {
      F_00d05fb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
    }
    if (0 < (*(int *)&gen_args[5])) {
      F_00d07700(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(*(int *)&gen_args[5]));
    }
    uVar3 = F_00d05ee0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(*(uint *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  if ((*(float *)&gen_args[4]) != 0.0) {
    F_00cc2e20(uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
  }
  if (0 < (*(int *)&gen_args[5])) {
    F_00cc4ca0(uVar3,(*(int *)&gen_args[5]));
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    (*(float *)&gen_args[4]) = gen_bits2f((int)dVar2);
    F_00cbddc0((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[2]),(uint)&(*(float *)&gen_args[4]));
    (*(float *)&gen_args[2]) = gen_bits2f((int)dVar2);
  }
  else {
    uVar5 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) == 0xffffffff) {
      (*(float *)&gen_args[4]) = gen_bits2f(F_00cc3f00(uVar3));
      uVar4 = F_00cbced0((*(undefined * PTR32 *)&gen_args[0]));
      uVar5 = 0;
      if (uVar4 != 0) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
        uVar4 = F_00cbe7e0((undefined4)gen_fl2bits((*(float *)&gen_args[4])));
        if (uVar4 != 0) {
          uVar5 = (uint)*(ushort *)(uVar4 + 0x74);
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
      }
    }
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[3]),0);
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[2]),uVar5);
    (*(float *)&gen_args[2]) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  }
  uVar3 = F_00cbdf90((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(float *)&gen_args[2]),0);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbe1a0 */
uint F_00cbe1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbdbf0(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbe1f0 */
uint F_00cbe1f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbe1f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  local_10 = (undefined4)
             (longlong)
             TRUNC((double)(float)((float10)*(int *)param_5 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                   *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = local_10;
  local_10 = (undefined4)
             (longlong)
             TRUNC(*(double *)&REFG(undefined, 0x10912a8) *
                   (double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)));
  uVar2 = F_00cbdfe0(param_1,local_10,param_3,param_4,uVar1,param_6);
  return uVar2;
}

/* ref: FUN_00cbe280 */
uint F_00cbe280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe280u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_00cbe290 */
uint F_00cbe290(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cbe2a0 */
uint F_00cbe2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcbe2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00cbe2e0 */
uint F_00cbe2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcbe2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_7;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundController::vf0 */
uint F_00cbe330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbe360 */
uint F_00cbe360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe380 */
uint F_00cbe380(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe380u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe390 */
uint F_00cbe390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cbe3b0 */
unsigned int F_00cbe3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe3b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  return 0;
}

/* ref: FUN_00cbe3c0 */
uint F_00cbe3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbe3e0 */
uint F_00cbe3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cbe3f0 */
byte F_00cbe3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00cc88c0(*(undefined4 *)((int)this + 4),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00cbe410 */
byte F_00cbe410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe430 */
byte F_00cbe430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) != *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe450 */
unsigned int F_00cbe450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 4),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe4b0 */
unsigned int F_00cbe4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4ef0(uVar1);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 4),0);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe500 */
unsigned int F_00cbe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 4),1,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe560 */
unsigned int F_00cbe560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 4),0,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe5c0 */
unsigned int F_00cbe5c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe5c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc50e0(uVar1,param_2,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe6a0 */
unsigned int F_00cbe6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc79a0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe6e0 */
uint F_00cbe6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe720 */
uint F_00cbe720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe760 */
byte F_00cbe760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7b10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe7a0 */
uint F_00cbe7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7b90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe7e0 */
uint F_00cbe7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c10(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe810 */
uint F_00cbe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c60(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe850 */
uint F_00cbe850(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7ce0(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe880 */
uint F_00cbe880(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7570(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe8b0 */
unsigned int F_00cbe8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7600(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe8e0 */
uint F_00cbe8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7670(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe910 */
unsigned int F_00cbe910(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7700(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe940 */
byte F_00cbe940(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7d30(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe970 */
byte F_00cbe970(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7db0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe9a0 */
unsigned int F_00cbe9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7e20(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe9d0 */
byte F_00cbe9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7770();
  if ((char)param_1 == '\0') {
    if (uVar1 != *(uint *)((int)this + 4)) goto LAB_00cbea15;
  }
  else if (uVar1 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc7e90(*(undefined4 *)((int)this + 4),param_1);
LAB_00cbea15: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea30 */
unsigned int F_00cbea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7fd0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea70 */
unsigned int F_00cbea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc8040(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbeb10 */
byte F_00cbeb10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbeb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc81d0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbeb40 */
float F_00cbeb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbeb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc8430(*(uint *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbeb80 */
uint F_00cbeb80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbeb80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4170(uVar1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbebd0 */
byte F_00cbebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc8240(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec10 */
byte F_00cbec10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc82f0(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec50 */
float10 F_00cbec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc83a0(*(undefined4 *)(param_1 + 4),param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float10)fVar1;
}

/* ref: FUN_00cbec90 */
unsigned int F_00cbec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)(param_1 + 4),local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbed20 */
unsigned int F_00cbed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbed20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(param_1 + 4),1,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbedb0 */
unsigned int F_00cbedb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbedb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(param_1 + 4),0,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BankController::vf0 */
uint F_00cbee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbee70 */
unsigned int F_00cbee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee70u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cbee90 */
unsigned int F_00cbee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbee90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((param_2 == 8) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7780) = 0;
    }
    else {
      REFG(undefined4, 0x15d7780) = F_00cce100(pvVar1);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7780);
    iVar2 = iVar2 + 1;
  }
  if ((1 < REFG(undefined4, 0x134c7e4)) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x14,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7734) = 0;
    }
    else {
      REFG(undefined4, 0x15d7734) = F_00ccdf30(pvVar1,REFG(undefined4, 0x134c7e4));
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7734);
    iVar2 = iVar2 + 1;
  }
  if (((char)param_3 != '\0') && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7774) = 0;
    }
    else {
      REFG(undefined4, 0x15d7774) = F_00ccdd90(pvVar1);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7774);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < 8) {
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00cbefe0 */
uint F_00cbefe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbefe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined * this;
  int iVar2;
  undefined4 uVar3;
  
  REFG(int, 0x15d7748) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  iVar2 = 0;
  REFG(undefined4, 0x15d777c) = uVar1;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x1ac,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x60);
        uVar1 = F_00cd0170(param_1,iVar2);
        uVar1 = F_00cceda0(this,iVar2,uVar1,uVar3);
      }
      *(uint *)(REFG(undefined4, 0x15d777c) + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < REFG(int, 0x15d7748));
  }
  return uVar1;
}

/* ref: FUN_00cbf0c0 */
uint F_00cbf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf0c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(undefined4, 0x15d7754) = *(uint *)(param_1 + 0x38);
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    REFG(undefined4, 0x15d7754) = (uint)REFG(undefined1, 0x15d7799);
  }
  iVar3 = REFG(undefined4, 0x15d7754) * 4;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar3,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  iVar3 = 0;
  REFG(undefined4, 0x15d7744) = uVar1;
  if (0 < (int)REFG(undefined4, 0x15d7754)) {
    do {
      puVar2 = (undefined4 *)F_00cd0110(param_1,iVar3);
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      if (REFG(char, 0x15d7798) != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        F_00cca420(&REFG(char, 0x15d7798),&(*(undefined4 *)(gen_frame + 0x8)),iVar3);
      }
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0xe8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00cca0a0(this,iVar3 + 1,&(*(undefined4 *)(gen_frame + 0x8)));
      }
      *(uint *)(REFG(undefined4, 0x15d7744) + iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)REFG(undefined4, 0x15d7754));
  }
  return uVar1;
}

/* ref: FUN_00cbf230 */
unsigned int F_00cbf230(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(int, 0x15d7764) = *(int *)(param_1 + 0x38);
  }
  if (0 < REFG(int, 0x15d7764)) {
    iVar6 = REFG(int, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7728) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),iVar6,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    if (0 < REFG(int, 0x15d7764)) {
      iVar8 = 0;
      iVar6 = 1;
      do {
        if (REFG(int, 0x15d7784) == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) goto LAB_00cbf377;
          uVar5 = F_00cd02e0(pvVar4,iVar6,*(undefined4 *)(param_1 + 0x60),0);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) {
LAB_00cbf377: ;
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cd02e0(pvVar4,iVar6,*(undefined4 *)(param_1 + 0x60),REFG(int, 0x15d7784));
          }
        }
        *(uint *)(iVar8 + REFG(undefined4, 0x15d7728)) = uVar5;
        iVar8 = iVar8 + 4;
        bVar3 = iVar6 < REFG(int, 0x15d7764);
        iVar6 = iVar6 + 1;
      } while (bVar3);
    }
  }
  if (REFG(int, 0x15d7784) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    if ((REFG(char, 0x15d7798) == '\0') && (iVar8 = 0, iVar6 = REFG(int, 0x15d7784), -1 < REFG(int, 0x15d7764))) {
      do {
        if (*(int *)(iVar6 + iVar8 * 4) != 0) {
          iVar7 = 0;
          do {
            iVar1 = *(int *)(iVar6 + iVar8 * 4);
            if (*(int *)(iVar7 + iVar1) == 0) break;
            piVar2 = *(int * PTR32 *)(iVar7 + iVar1);
            ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0);
            iVar7 = iVar7 + 4;
            iVar6 = REFG(int, 0x15d7784);
          } while (iVar7 < 0xc);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= REFG(int, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cbf410 */
uint F_00cbf410(void)
{
  GEN_ENTER(0xcbf410u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
         (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        iVar5 = REFG(int, 0x15d7744);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7754));
  }
  if (iVar5 != 0) {
    F_00406810(iVar5);
  }
  if (REFG(int, 0x15d7728) != 0) {
    iVar4 = 0;
    iVar5 = REFG(int, 0x15d7728);
    if (0 < REFG(int, 0x15d7764)) {
      do {
        if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
           (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
          iVar5 = REFG(int, 0x15d7728);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < REFG(int, 0x15d7764));
    }
    if (iVar5 != 0) {
      F_00406810(iVar5);
    }
  }
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    if (REFG(undefined4 * PTR32, 0x15d7780) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7780))))(REFG(undefined4 * PTR32, 0x15d7780),1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7734) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7734))))(REFG(undefined4 * PTR32, 0x15d7734),1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7774) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7774))))(REFG(undefined4 * PTR32, 0x15d7774),1);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if ((REFG(char, 0x15d7798) == '\0') && (iVar5 = 0, 0 < REFG(int, 0x15d7748))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x15d777c) + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < REFG(int, 0x15d7748));
  }
  if (REFG(int * PTR32, 0x15d7784) != (int *)0x0) {
    iVar5 = 0;
    piVar3 = REFG(int * PTR32, 0x15d7784);
    if (-1 < REFG(int, 0x15d7764)) {
      do {
        if (piVar3[iVar5] != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(piVar3[iVar5] + iVar4) == 0) break;
            puVar1 = *(undefined4 * PTR32 *)(piVar3[iVar5] + iVar4);
            if (puVar1 != (undefined4 *)0x0) {
              ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
              piVar3 = REFG(int * PTR32, 0x15d7784);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xc);
          if (piVar3[iVar5] != 0) {
            F_00406810(piVar3[iVar5]);
            piVar3 = REFG(int * PTR32, 0x15d7784);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= REFG(int, 0x15d7764));
    }
    if (piVar3 != (int *)0x0) {
      F_00406810(piVar3);
    }
  }
  if (REFG(int, 0x15d777c) != 0) {
    F_00406810(REFG(int, 0x15d777c));
  }
  if (REFG(int, 0x15d7760) != 0) {
    F_00406810(REFG(int, 0x15d7760));
  }
  if (REFG(int, 0x15d772c) != 0) {
    F_00406810(REFG(int, 0x15d772c));
  }
  if (REFG(int, 0x15d774c) != 0) {
    F_00406810(REFG(int, 0x15d774c));
  }
  if (REFG(int, 0x15d7740) != 0) {
    F_00406810(REFG(int, 0x15d7740));
  }
  if (REFG(int, 0x15d775c) != 0) {
    F_00406810(REFG(int, 0x15d775c));
  }
  if (REFG(int, 0x15d7758) != 0) {
    F_00406810(REFG(int, 0x15d7758));
  }
  if (REFG(int, 0x15d7770) != 0) {
    F_00406810(REFG(int, 0x15d7770));
  }
  uVar2 = F_00ccb4f0();
  if (REFG(undefined4 * PTR32, 0x15d773c) != (undefined4 *)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d773c))))(REFG(undefined4 * PTR32, 0x15d773c),1);
  }
  return uVar2;
}

/* ref: FUN_00cbf660 */
uint F_00cbf660(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == REFG(int, 0x112a808)) {
    return REFG(undefined4, 0x15d773c);
  }
  if ((-1 < param_1) && (param_1 <= REFG(int, 0x15d7754))) {
    return *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbf6a0 */
byte F_00cbf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf6a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined1 * puVar1;
  byte bVar2;
  uint uVar3;
  int in_ecx;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[0]);
  uVar3 = (uint)(byte)(*(undefined1 * PTR32 *)&gen_args[0])[1];
  in_ecx = REFG(int, 0x15d773c);
  if (uVar3 != REFG(undefined4, 0x112a808)) {
    if (REFG(int, 0x15d7754) < (int)uVar3) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + uVar3 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  bVar2 = F_00cc9340(in_ecx);
  if (bVar2 == 0) {
    return 1;
  }
  if (((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x02') || ((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x04')) {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),1)));
  }
  else {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),*(*(undefined1 * PTR32 *)&gen_args[0]))));
  }
  bVar2 = F_00cc9380((uint)(byte)puVar1[2],(*(undefined1 * PTR32 *)&gen_args[0]));
  return bVar2;
}

/* ref: FUN_00cbf720 */
uint F_00cbf720(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar2 = F_00cc1130(*(int *)(iVar1 + 0xc));
    return uVar2;
  }
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cbf770 */
uint F_00cbf770(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_ecx;
  uint uVar1;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  uVar1 = F_00cc9360(in_ecx);
  return uVar1;
}

/* ref: FUN_00cbf7b0 */
byte F_00cbf7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)*(undefined2 *)(iVar1 + 10) & 1;
}

/* ref: FUN_00cbf7f0 */
unsigned int F_00cbf7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf7f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (in_ecx != 0) {
    F_00cc9420(in_ecx,param_2);
  }
  return 0;
}

/* ref: FUN_00cbf830 */
uint F_00cbf830(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if (*(int *)(iVar4 + iVar3 * 4) != 0) {
        piVar1 = *(int * PTR32 *)(iVar4 + iVar3 * 4);
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
        iVar4 = REFG(int, 0x15d7744);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < REFG(int, 0x15d7754));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d777c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7748));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7768)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7740) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7768));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7750)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d772c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7750));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7788)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d774c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7788));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7778)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d775c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7778));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 4))))(REFG(int * PTR32, 0x15d773c),param_1);
  return uVar2;
}

/* ref: FUN_00cbf940 */
uint F_00cbf940(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbf940u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))((undefined4)gen_fl2bits(param_2),param_3);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbf9b0 */
uint F_00cbf9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf9b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x10))))(REFG(int * PTR32, 0x15d773c),param_2);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfa10 */
uint F_00cbfa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbfa10u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x14))))(REFG(int * PTR32, 0x15d773c),param_2,param_3);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbfa70 */
uint F_00cbfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfa70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x18))))(REFG(int * PTR32, 0x15d773c),param_2);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfad0 */
byte F_00cbfad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbfad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe4);
}

/* ref: FUN_00cbfb10 */
byte F_00cbfb10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfb10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0xe4) != '\0') && (*(char *)(iVar1 + 0xe5) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cbfb60 */
uint F_00cbfb60(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfb60u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))((undefined4)gen_fl2bits(param_1),param_2);
  return uVar1;
}

/* ref: FUN_00cbfb80 */
uint F_00cbfb80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbfb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))((undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00cbfbc0 */
uint F_00cbfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00cbfc00 */
uint F_00cbfc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfc00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0xe0) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbfc40 */
uint F_00cbfc40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 0xe0);
}

/* ref: FUN_00cbfc80 */
uint F_00cbfc80(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((-1 < param_1) && (param_1 < REFG(int, 0x15d7748))) {
    return *(uint *)(REFG(int, 0x15d777c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfcb0 */
uint F_00cbfcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfcb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d772c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7750))) {
    return *(uint *)(REFG(int, 0x15d772c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfce0 */
uint F_00cbfce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfce0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d7740) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7768))) {
    return *(uint *)(REFG(int, 0x15d7740) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd10 */
uint F_00cbfd10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d774c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7788))) {
    return *(uint *)(REFG(int, 0x15d774c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd40 */
uint F_00cbfd40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d775c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7778))) {
    return *(uint *)(REFG(int, 0x15d775c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd70 */
uint F_00cbfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d7760) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7738))) {
    return *(uint *)(REFG(int, 0x15d7760) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfda0 */
uint F_00cbfda0(void)
{
  GEN_ENTER(0xcbfda0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d776c);
}

/* ref: FUN_00cbfdc0 */
float F_00cbfdc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfdc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(float *)(REFG(int, 0x15d7758) + -4 + REFG(int, 0x15d7730) * 4);
  }
  return *(float *)(REFG(int, 0x15d7758) + param_1 * 4);
}

/* ref: FUN_00cbfdf0 */
uint F_00cbfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfdf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(uint *)(REFG(int, 0x15d7770) + -4 + REFG(int, 0x15d7730) * 4);
  }
  return *(uint *)(REFG(int, 0x15d7770) + param_1 * 4);
}

/* ref: FUN_00cbfe20 */
uint F_00cbfe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((((REFG(int, 0x15d7784) != 0) && (-1 < param_1)) && (param_1 <= REFG(int, 0x15d7764))) && (param_2 < 4)) {
    return *((uint *)GEN_TOP((*(int *)(REFG(int, 0x15d7784) + param_1 * 4) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfe50 */
uint F_00cbfe50(void)
{
  GEN_ENTER(0xcbfe50u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7780);
}

/* ref: FUN_00cbfe60 */
uint F_00cbfe60(void)
{
  GEN_ENTER(0xcbfe60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7734);
}

/* ref: FUN_00cbfe90 */
unsigned int F_00cbfe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (REFG(int * PTR32, 0x15d7774) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7774) + 4))))(REFG(int * PTR32, 0x15d7774),(uint)((char)param_1 == '\0'));
    if (param_2 != 0) {
      F_00ccdd50(REFG(int * PTR32, 0x15d7774),param_2);
    }
  }
  return 0;
}

/* ref: FUN_00cbfef0 */
float10 F_00cbfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if (((int)param_1 < 0) || (REFG(int, 0x15d7754) < (int)param_1)) goto LAB_00cbff4b;
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 != 0) {
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x34) + 0x10))))(iVar1 + 0x34);
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x10))))(iVar1 + 0x10);
    return (float10)(float)(extraout_ST0_00 * (float10)(double)extraout_ST0);
  }
LAB_00cbff4b: ;
  return (float10)0;
}

/* ref: FUN_00cbff60 */
uint F_00cbff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbff60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00cbffa0 */
uint F_00cbffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbffa0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0xe6) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbffe0 */
byte F_00cbffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbffe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe6);
}

/* ref: FUN_00cc0020 */
uint F_00cc0020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9c60(this);
  return uVar1;
}

/* ref: FUN_00cc0060 */
uint F_00cc0060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9d30(this,param_2);
  return uVar1;
}

/* ref: FUN_00cc00a0 */
uint F_00cc00a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc00a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9450(this);
  return uVar1;
}

/* ref: FUN_00cc00e0 */
unsigned int F_00cc00e0(void)
{
  GEN_ENTER(0xcc00e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x15d7754);
  uVar2 = 0;
  if (REFG(undefined4, 0x15d7754) != 0) {
    do {
      F_00cc94a0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_00cc0130 */
uint F_00cc0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar2 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x60);
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    bVar1 = *(byte *)((*(int *)&gen_args[1]) + 0x1be);
    ((undefined4 *)(gen_frame + 0xc))[0] = 0;
    F_00cbee90(((undefined4 *)(gen_frame + 0xc)),uVar2,(uint)bVar1);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3,&(*(uint *)&gen_args[0]),uVar2,((undefined4 *)(gen_frame + 0xc)));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  else {
    F_00cbee90(*REFG(int * PTR32, 0x15d7784),uVar2,0);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3,&(*(uint *)&gen_args[0]),uVar2,*REFG(int * PTR32, 0x15d7784));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  REFG(undefined4, 0x15d773c) = 0;
  return 0;
}

/* ref: FUN_00cc0260 */
uint F_00cc0260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc0260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cc0300 */
unsigned int F_00cc0300(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar6 = *(int *)(param_1 + 100);
    (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 0x8c);
    (*(int *)(gen_frame + 0x30)) = *(int *)(param_1 + 0x90);
    if (((iVar6 != -1) || (*(int *)(param_1 + 0x8c) != -1)) || (*(int *)(param_1 + 0x90) != -1)) {
      REFG(int, 0x15d7730) = *(int *)(param_1 + 0x68);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7758) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7770) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = 0;
      if (0 < REFG(int, 0x15d7730)) {
        do {
          *(undefined4 *)(REFG(undefined4, 0x15d7758) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x6c + iVar1 * 4);
          *(undefined4 *)(REFG(undefined4, 0x15d7770) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x7c + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < REFG(int, 0x15d7730));
      }
      F_00cc2750(iVar6);
      REFG(undefined4, 0x15d7764) = *(uint *)(param_1 + 0x38);
      iVar1 = REFG(undefined4, 0x15d7764) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                       (REFG(int * PTR32, 0x15d778c),iVar1 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10
                                       )));
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d775c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      REFG(int, 0x15d7778) = 0;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d774c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      iVar1 = 0;
      REFG(int, 0x15d7788) = 0;
      if (-1 < (int)REFG(undefined4, 0x15d7764)) {
        do {
          if (((iVar1 == iVar6) || (iVar1 == -1)) || ((iVar1 == (*(int *)(gen_frame + 0x38)) || (iVar1 == (*(int *)(gen_frame + 0x30)))))) {
            if (iVar1 == 0) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c),0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              *REFG(uint * PTR32, 0x15d7784) = uVar2;
            }
            else {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c),0xc,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              REFG(uint * PTR32, 0x15d7784)[iVar1] = uVar2;
            }
            iVar5 = 0;
            if (iVar1 == iVar6) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0x38,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1b80(pvVar3);
              }
              *((uint *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1])) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) = *((undefined4 *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1]));
              REFG(int, 0x15d776c) = REFG(int, 0x15d7778);
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
              iVar5 = 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + 4))) = 0;
            }
            if (iVar1 == -1) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3,0);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              iVar5 = iVar5 + 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x38))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x30))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
          }
          else {
            REFG(uint * PTR32, 0x15d7784)[iVar1] = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 <= (int)REFG(undefined4, 0x15d7764));
        return 0;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    REFG(undefined4, 0x15d7764) = (uint)REFG(undefined1, 0x15d82b0);
    iVar6 = REFG(undefined4, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),iVar6 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d774c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7788) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d772c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7750) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7740) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7768) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7760) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7738) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d775c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    iVar6 = 0;
    REFG(int, 0x15d7778) = 0;
    ((char *)(gen_frame + 0x8))[0] = '\0';
    ((char * PTR32 *)(gen_frame + 0xc))[0] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[1] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[2] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[3] = (char *)0x0;
    if (-1 < (int)REFG(undefined4, 0x15d7764)) {
      do {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        F_00cca550(&REFG(char, 0x15d7798),((char *)(gen_frame + 0x8)),iVar6);
        if ('\x03' < ((char *)(gen_frame + 0x8))[0]) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
          }
          ((code *)REFG(gen_code32, 0x15d861c))("effectInfo.count <= MAX_EFFECTS_PER_BUS",
                          "[sd][driver][buscontainer] over effect count","BusContainer.cpp",0x27f,
                          "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
        }
        if (iVar6 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c),0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          *REFG(uint * PTR32, 0x15d7784) = uVar2;
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          REFG(uint * PTR32, 0x15d7784)[iVar6] = uVar2;
        }
        iVar1 = 0;
        if ('\0' < ((char *)(gen_frame + 0x8))[0]) {
          do {
            switch((unsigned int)(uintptr_t)(*((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)])) {
            case '\0': ;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = 0;
              break;
            case '\x01': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7788)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numCompressors_ < 4","","BusContainer.cpp",0x2e5,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              break;
            case '\x02': ;
            case '\x03': ;
            case '\x04': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0x58,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1570(pvVar3);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7768)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numGranulars_ < 4",&REFG(undefined, 0x1129af3),"BusContainer.cpp",0x2f7,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d7740) + REFG(int, 0x15d7768) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7768) = REFG(int, 0x15d7768) + 1;
              break;
            case '\x05': ;
              switch((unsigned int)(uintptr_t)(((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)][0x10])) {
              case '\x01': ;
                (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x30)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x2c)));
                if (pvVar3 == (undefined *)0x0) {
LAB_00cc0d36: ;
                  iVar5 = 0;
                }
                else {
                  piVar4 = (int *)F_00cc1640(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                  if (piVar4 != (int *)0x0) break;
                  iVar5 = 0;
                }
                goto LAB_00cc0d41;
              case '\x02': ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x38)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x34)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc17d0(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x03': ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x24)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc1910(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x04': ;
                ((char * PTR32 *)(gen_frame + 0xc))[4] = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,((char * PTR32 *)(gen_frame + 0xc)) + 4);
                if ((pvVar3 == (undefined *)0x0) ||
                   (piVar4 = (int *)F_00cc1a50(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1), piVar4 == (int *)0x0))
                goto LAB_00cc0d36;
                break;
              default: ;
                goto switchD_00cc09e0_caseD_6;
              }
              iVar5 = *(int *)(*piVar4 + 4) + (int)piVar4;
LAB_00cc0d41: ;
              *((int *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = iVar5;
              break;
            case '\a': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),100,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1280(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7778)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numPitchShifts_ < 4",&REFG(undefined, 0x1129b0f),"BusContainer.cpp",0x2fc,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
            }
switchD_00cc09e0_caseD_6: ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < ((char *)(gen_frame + 0x8))[0]);
        }
        if (((char *)(gen_frame + 0x8))[0] < 4) {
          iVar1 = ((char *)(gen_frame + 0x8))[0] * 4;
          do {
            *((undefined4 *)GEN_TOP((iVar1 + REFG(uint * PTR32, 0x15d7784)[iVar6]))) = 0;
            iVar1 = iVar1 + 4;
          } while (iVar1 < 0xd);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)REFG(undefined4, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cc0dd0 */
uint F_00cc0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  REFG(int, 0x15d773c) = 0;
  REFG(undefined4, 0x15d7744) = 0;
  REFG(undefined4, 0x15d7728) = 0;
  REFG(undefined4, 0x15d7780) = 0;
  REFG(undefined4, 0x15d7734) = 0;
  REFG(undefined4, 0x15d7774) = 0;
  REFG(undefined4, 0x15d7754) = 0;
  REFG(undefined4, 0x15d7764) = 0;
  REFG(undefined4, 0x15d7784) = 0;
  REFG(undefined4, 0x15d777c) = 0;
  REFG(undefined4, 0x15d7748) = 0;
  REFG(int, 0x15d7760) = 0;
  REFG(undefined4, 0x15d7738) = 0;
  REFG(undefined4, 0x15d772c) = 0;
  REFG(undefined4, 0x15d7750) = 0;
  REFG(undefined4, 0x15d774c) = 0;
  REFG(undefined4, 0x15d775c) = 0;
  REFG(undefined4, 0x15d7788) = 0;
  REFG(undefined4, 0x15d7740) = 0;
  REFG(undefined4, 0x15d7768) = 0;
  REFG(undefined4, 0x15d776c) = 0xffffffff;
  REFG(undefined4, 0x15d7730) = 0;
  REFG(undefined4, 0x15d7758) = 0;
  REFG(undefined4, 0x15d7770) = 0;
  F_00cc0300(param_1);
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
      uVar1 = REFG(undefined4, 0x15d860c);
    }
  }
  uVar2 = F_00cc0130(uVar1,param_1);
  if (REFG(char, 0x15d8bd9) == '\0') {
    if (REFG(int, 0x15d7760) == 0) {
      F_00cbefe0(param_1);
    }
    F_00cbf0c0(param_1);
    F_00cbf230(param_1);
    *(undefined4 *)(REFG(int, 0x15d773c) + 0xe8) = REFG(undefined4, 0x15d7744);
    uVar2 = REFG(undefined4, 0x15d7754);
    *(uint *)(REFG(int, 0x15d773c) + 0xec) = REFG(undefined4, 0x15d7754);
  }
  return uVar2;
}

/* ref: FUN_00cc0f20 */
uint F_00cc0f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc0f30 */
uint F_00cc0f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = *param_1;
  return (uint)this;
}

/* ref: FUN_00cc0f60 */
uint F_00cc0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f60u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2,*param_3,0,0,param_3[1]);
  return uVar1;
}

/* ref: FUN_00cc0f90 */
uint F_00cc0f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = F_004042b0();
  }
  if (param_1 != 0) {
    REFG(undefined4, 0x15d778c) = param_1;
    return param_1;
  }
  return REFG(undefined4, 0x15d778c);
}

/* ref: FUN_00cc0fd0 */
uint F_00cc0fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc1020 */
uint F_00cc1020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,"CDev.Engine.Sd",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cc1070 */
uint F_00cc1070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc10c0 */
uint F_00cc10c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc10c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc1130 */
uint F_00cc1130(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  do {
    iVar1 = in_ecx;
    in_ecx = *(int *)(iVar1 + 0xc);
  } while (in_ecx != 0);
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cc1160 */
byte F_00cc1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc1190 */
uint F_00cc1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0) = param_2;
  return param_2;
}

/* ref: FUN_00cc11c0 */
uint F_00cc11c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
  dVar1 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
  return (uint)(ulonglong)gen_d2bits(dVar1);
}

/* ref: FUN_00cc12a0 */
uint F_00cc12a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe8) = param_2;
  return param_2;
}

/* ref: FUN_00cc12b0 */
uint F_00cc12b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf7 */
byte F_00cc12d0(void)
{
  GEN_ENTER(0xcc12d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf8 */
uint F_00cc12e0(void)
{
  GEN_ENTER(0xcc12e0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf0 */
uint F_00cc12f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1320 */
unsigned int F_00cc1320(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1320u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x13);
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf0 */
uint F_00cc1350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(this + 0x4c);
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1390 */
uint F_00cc1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a170);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  return (uint)this;
}

/* ref: FUN_00cc13e0 */
unsigned int F_00cc13e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc13e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1410 */
uint F_00cc1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a1c0);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  return (uint)this;
}

/* ref: FUN_00cc1460 */
unsigned int F_00cc1460(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1490 */
uint F_00cc1490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a210);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  return (uint)this;
}

/* ref: FUN_00cc14e0 */
unsigned int F_00cc14e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc14e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1510 */
uint F_00cc1510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a260);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  return (uint)this;
}

/* ref: FUN_00cc1560 */
unsigned int F_00cc1560(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc15e0 */
uint F_00cc15e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00cc15f0 */
uint F_00cc15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x7c + param_2 * 4);
}

/* ref: FUN_00cc1640 */
uint F_00cc1640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc16b0 */
uint F_00cc16b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc16b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc16c0 */
uint F_00cc16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1bb0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc16e0 */
uint F_00cc16e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc16e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))));
  return uVar1;
}

/* ref: FUN_00cc16f0 */
uint F_00cc16f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc16f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0ab0((in_ecx - *(int *)(in_ecx + -4)) + -4);
  return uVar1;
}

/* ref: FUN_00cc1700 */
uint F_00cc1700(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1700u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd400();
  return uVar1;
}

/* ref: FUN_00cc1710 */
byte F_00cc1710(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))));
  return bVar1;
}

/* ref: FUN_00cc1720 */
unsigned int F_00cc1720(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb20((int)this + -4,param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00cc1730 */
unsigned int F_00cc1730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cd0950(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))),param_1);
  return 0;
}

/* ref: FUN_00cc1740 */
uint F_00cc1740(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1780 */
uint F_00cc1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc17d0 */
uint F_00cc17d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc17d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1840 */
unsigned int F_00cc1840(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1840u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb50((int)this + -4,param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00cc1850 */
uint F_00cc1850(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1850u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd410();
  return uVar1;
}

/* ref: FUN_00cc1860 */
uint F_00cc1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c00(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc1880 */
uint F_00cc1880(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc18c0 */
uint F_00cc18c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc18c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1910 */
uint F_00cc1910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1980 */
uint F_00cc1980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c50(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc19a0 */
uint F_00cc19a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc19a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd420();
  return uVar1;
}

/* ref: FUN_00cc19b0 */
uint F_00cc19b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc19b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdb80((int)this + -4,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc19c0 */
uint F_00cc19c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc19c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1a00 */
uint F_00cc1a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1a50 */
uint F_00cc1a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1ac0 */
uint F_00cc1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd430();
  return uVar1;
}

/* ref: FUN_00cc1ad0 */
uint F_00cc1ad0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1ad0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdbb0((int)this + -4,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc1ae0 */
uint F_00cc1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1ca0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc1b00 */
uint F_00cc1b00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1b40 */
uint F_00cc1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

