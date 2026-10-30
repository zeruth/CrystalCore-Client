#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00cb8380 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar2[1] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[1] + 8))) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[2] + 4))) = puVar2[1];
      }
      *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  }
  return;
}

/* ref: FUN_00cb83d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb83d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb83d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8400 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8400(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8400u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x2c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  int iVar1;
  undefined4 * puVar2;
  code * pcVar3;
  int iVar4;
  uint uVar5;
  
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x107031d));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 6;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar2[1] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[1] + 8))) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[2] + 4))) = puVar2[1];
      }
      *((int *)GEN_TOP(((int)this + 0x5c))) = *((int *)GEN_TOP(((int)this + 0x5c))) - 1;
      pcVar3 = *((gen_code32 *)GEN_TOP(*puVar2));
      (*pcVar3)(puVar2,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x5c)));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x20)));
  if (iVar1 != 0) {
    pcVar3 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
    (*pcVar3)(REFG(int * PTR32, 0x15d7724),iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  }
  puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 100)));
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x24))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x24))));
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  }
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 5;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 5;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  iVar1 = *((int *)GEN_TOP(((int)this + 0x8c)));
  while (iVar1 != 0) {
    iVar4 = *((int *)GEN_TOP((iVar1 + 8)));
    pcVar3 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
    (*pcVar3)(REFG(int * PTR32, 0x15d7724),iVar1);
    iVar1 = iVar4;
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x6c)));
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 4;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 4;
  if (iVar1 != 0) {
    pcVar3 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8)));
    (*pcVar3)(REFG(int * PTR32, 0x15d7724),iVar1);
    *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)this + 0x54))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x54))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x58)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x58))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x58))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x54)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x44))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 2;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 2;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  F_00cb7c50(((undefined4 *)GEN_TOP(((int)this + 0x34))) GEN_EDX_ARG);
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x1c)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)this + 0x1a))) == '\0') && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11296cc));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar5 != 0) {
    *((undefined4 *)GEN_TOP((uVar5 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return uVar5;
}

/* ref: FUN_00cb85d0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cb85d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcb85d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  uint uVar1;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  F_00cb42a0(((undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,*param_3);
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x20))))(this GEN_EDX_ARG,param_1,param_2,((undefined4 *)(gen_frame + 0x0)));
  *param_3 = ((undefined4 *)(gen_frame + 0x0))[0];
  return uVar1;
}

/* ref: FUN_00cb8630 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb8630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x68)));
}

/* ref: FUN_00cb8640 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb8640(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x6c)));
}

/* ref: FUN_00cb8650 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb8650(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x10)));
}

/* ref: FUN_00cb8660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb8660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((ushort *)GEN_TOP((in_ecx + 0x70)));
}

/* ref: FUN_00cb8670 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb8680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb8680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cb8ea0((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cb8690 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8690(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcb8690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x1070353));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = ((undefined4 *)GEN_TOP(((int)this + 0x14)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))) = ((undefined4 *)GEN_TOP(((int)this + 8)));
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = (*(undefined4 *)&gen_args[0]);
  F_00cb8380(this GEN_EDX_ARG);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)this;
}

/* ref: FUN_00cb8710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x24))) = param_2;
  return param_2;
}

/* ref: FUN_00cb8720 */
GEN_LIB GEN_NOFRAME byte F_00cb8720(void)
{
  GEN_ENTER(0xcb8720u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: FUN_00cb8730 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb8730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return;
}

/* ref: FUN_00cb8740 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8740(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cb8750 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb8750(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cb8760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8760(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb87a0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb87a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb87a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb87e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb87e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb87e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb87f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb87f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb87f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb8860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8860(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb8880 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8880(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb8890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb88a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x20)));
}

/* ref: FUN_00cb88b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb88b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb88b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  in_ecx[1] = 0;
  in_ecx[2] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb88d0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cb88d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - 1;
  return;
}

/* ref: FUN_00cb88e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb88e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb88e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00cb88f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb88f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb88f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb8900 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8900(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8930(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb8940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8940(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb8950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8950(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  return (uint)param_2;
}

/* ref: FUN_00cb8960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8960(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00cb8990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00cb89b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb89b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb89b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb89d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb89d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb89d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    bVar3 = F_00cb4170(((undefined *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_FWD,param_1);
    if (bVar3 != 0) break;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  *((int *)GEN_TOP((iVar1 + 0x1c))) = *((int *)GEN_TOP((iVar1 + 0x1c))) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb8a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = *((int *)GEN_TOP(((int)this + 0x10)));
  while( true ) {
    iVar1 = iVar2;
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    if (iVar3 == param_1) break;
    iVar3 = iVar3 + 1;
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *((int *)GEN_TOP((iVar1 + 8)));
    }
  }
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    F_00cb4320(param_2 GEN_EDX_FWD,iVar1 + 0xc);
  }
  *((int *)GEN_TOP((iVar1 + 0x1c))) = *((int *)GEN_TOP((iVar1 + 0x1c))) + 1;
  return iVar1 + 0x18;
}

/* ref: FUN_00cb8a70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb8a70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  code * pcVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (*(uint *)&gen_args[1]);
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  while( true ) {
    if (iVar1 == (int)this + 0x14) {
      return 0;
    }
    pcVar2 = *((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x18))) + 8)));
    (*(uint *)&gen_args[1]) = (*pcVar2)(iVar1 + 0x18);
    pcVar2 = *((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 4)));
    uVar4 = (*pcVar2)((*(int * PTR32 *)&gen_args[0]),iVar1 + 0xc,&(*(uint *)&gen_args[1]),uVar3);
    if ((char)uVar4 == '\0') break;
    iVar1 = *((int *)GEN_TOP((iVar1 + 8)));
  }
  return 0;
}

/* ref: FUN_00cb8ad0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8ad0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcb8ad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x30, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x1070380));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  F_00cb4360(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = (*(undefined4 *)&gen_args[2]);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = (*(undefined4 *)&gen_args[3]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)this;
}

/* ref: FUN_00cb8b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cb8b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcb8b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  iVar2 = *((int *)GEN_TOP((iVar1 + 4)));
  *param_1 = iVar2;
  if (iVar1 != 0) {
    if (iVar2 != 0) {
      *((undefined4 *)GEN_TOP((iVar2 + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    }
    if (*((int *)GEN_TOP((iVar1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8bc0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb8bc0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb8bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x3c, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x34);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 * puVar1;
  code * pcVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  undefined4 * puVar6;
  
  (*(undefined4 volatile *)(gen_frame + 0x28)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x24)) = ((code *)REFP(0x10703bb));
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x20));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x20)))))) { return (byte)(uintptr_t)gen_eh_resume(); }
  iVar4 = *((int *)GEN_TOP(((int)this + 0x10)));
  while (iVar3 = iVar4, iVar3 != (int)this + 0x14) {
    bVar5 = F_00cb4170(((undefined *)GEN_TOP((iVar3 + 0xc))) GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
    puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
    if (bVar5 != 0) {
      puVar6 = *((undefined4 * PTR32 *)GEN_TOP((iVar3 + 0x20)));
      if (puVar6 == (*(undefined4 * PTR32 *)&gen_args[1])) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
        return 1;
      }
      if (puVar6 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar6)))(puVar6 GEN_EDX_ARG,1);
      }
      *((undefined4 * PTR32 *)GEN_TOP((iVar3 + 0x20))) = puVar1;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
      return 1;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *((int *)GEN_TOP((iVar3 + 8)));
    }
  }
  if (*((uint *)GEN_TOP(((int)this + 0x24))) <= *((uint *)GEN_TOP(((int)this + 0x20)))) {
    for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x18))); puVar1 != ((undefined4 *)GEN_TOP(((int)this + 8)));
        puVar1 = ((undefined4 *)GEN_TOP(puVar1[1]))) {
      if (puVar1[7] == 0) {
        if (puVar1[1] != 0) {
          *((undefined4 *)GEN_TOP((puVar1[1] + 8))) = puVar1[2];
        }
        if (puVar1[2] != 0) {
          *((undefined4 *)GEN_TOP((puVar1[2] + 4))) = puVar1[1];
        }
        *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) - 1;
        pcVar2 = *((gen_code32 *)GEN_TOP(*puVar1));
        (*pcVar2)(puVar1,1);
        break;
      }
    }
  }
  puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x24,0)));
  puVar1 = (*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = puVar6;
  (*(undefined4 volatile *)(gen_frame + 0x28)) = 0;
  if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar6 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    (*(undefined4 *)(gen_frame + 0x14)) = 0;
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x10)) = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = (*(undefined4 * PTR32 *)&gen_args[1]);
    puVar6[1] = 0;
    puVar6[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x28)) + 0)) = 2;
    (*(undefined4 volatile *)(gen_frame + 0x28)) = 2;
    *puVar6 = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
    F_00cb4360(puVar6 + 3 GEN_EDX_ARG,(*(undefined4 *)&gen_args[0]));
    puVar6[6] = (*(undefined * PTR32 (*)[4])REFP(0x1129910));
    puVar6[7] = 0;
    puVar6[8] = puVar1;
  }
  puVar6[1] = (int)this + 8;
  puVar6[2] = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) = puVar6;
  }
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x20))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar6;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x20));
  return 1;
}

/* ref: FUN_00cb8d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8d10(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8d10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x28, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10703f3));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129920));
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 1;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))))((int)this + 0x18);
  if (uVar1 != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))))((int)this + 0x18)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
    }
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return uVar1;
}

/* ref: FUN_00cb8db0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8db0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb8d10(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8de0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb8de0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  uint uVar1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x1070423));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11298d8));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 1;
  F_00cb8380(this GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)this + 0x18))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x18))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x1c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x1c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x18)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[1])REFP(0x112981c));
  if (*((int *)GEN_TOP(((int)this + 0xc))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xc))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 0x10)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x11297e4));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return uVar1;
}

/* ref: FUN_00cb8e70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8e70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb8de0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8ea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8ea0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb8ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cb8400(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cb8ed0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb8ed0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(byte param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcb8ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(byte param_3 = (byte)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL_TOP(0x20, 0, 4);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined * PTR32 * ppvVar6;
  int iVar7;
  
  iVar7 = param_2;
  (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070461));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  ppvVar6 = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (((char)param_4 != '\0') || (*((int *)GEN_TOP((param_1 + 0x54))) != param_2)) {
    piVar1 = *((int * PTR32 *)GEN_TOP((param_1 + 0x58)));
    (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = ppvVar6;
    *((int *)GEN_TOP((param_1 + 0x54))) = param_2;
    if (piVar1 != ((int *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG);
      puVar2 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x58)));
      if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_ARG,1);
        *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
      }
    }
    if (iVar7 == 0) {
      *((undefined1 *)GEN_TOP((param_1 + 0x74))) = 0;
    }
    uVar5 = (uint)*((byte *)GEN_TOP((param_1 + 0x74)));
    if (uVar5 != 0) {
      if (uVar5 == 1) {
        param_4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 1;
      }
      else {
        if (uVar5 - 2 != 0) {
          (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
          return uVar5 - 2;
        }
        param_4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x28,0)));
        (*(undefined4 *)(gen_frame + 0x18)) = 2;
      }
      if (param_4 == ((undefined *)GEN_TOP(0x0))) {
        *((undefined4 *)GEN_TOP((param_1 + 0x58))) = 0;
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
        return 0;
      }
      uVar5 = F_00cb8690(param_4 GEN_EDX_ARG,iVar7);
      *((uint *)GEN_TOP((param_1 + 0x58))) = uVar5;
      (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
      return uVar5;
    }
    iVar7 = 0;
    iVar4 = *((int *)GEN_TOP((param_1 + 0x40)));
    while (iVar3 = iVar4, iVar3 != param_1 + 0x44) {
      iVar7 = iVar7 + 1;
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *((int *)GEN_TOP((iVar3 + 8)));
      }
    }
    param_4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x18,0)));
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    if (param_4 == ((undefined *)GEN_TOP(0x0))) {
      ppvVar6 = ((undefined * PTR32 *)GEN_TOP(0x0));
    }
    else {
      ppvVar6 = ((undefined * PTR32 *)GEN_TOP(F_00cb6c00(param_4 GEN_EDX_ARG,iVar7)));
    }
    *((undefined * PTR32 * PTR32 *)GEN_TOP((param_1 + 0x58))) = ppvVar6;
    (*(undefined4 *)(gen_frame + 0x18)) = 0xffffffff;
    iVar7 = *((int *)GEN_TOP((param_1 + 0x40)));
    while (iVar4 = iVar7, iVar4 != param_1 + 0x44) {
      ppvVar6 = ((undefined * PTR32 *)GEN_TOP(F_00cbab30(iVar4 GEN_EDX_ARG,~param_3 & 1)));
      iVar7 = 0;
      if (iVar4 != 0) {
        iVar7 = *((int *)GEN_TOP((iVar4 + 8)));
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)ppvVar6;
}

/* ref: FUN_00cb9050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9050(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcb9050u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x164, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x14c);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  gen_args[5] = gen_a6;
  undefined4 * puVar1;
  ushort * puVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  undefined1 * puVar6;
  undefined * pvVar7;
  undefined * pvVar8;
  char * pcVar9;
  int iVar10;
  int iVar11;
  
  (*(undefined4 volatile *)(gen_frame + 0x140)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x13c)) = ((code *)REFP(0x10704fe));
  (*(undefined * PTR32 *)(gen_frame + 0x138)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x134)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x144);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x144);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x138));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x138)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  iVar10 = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = (*(undefined * PTR32 *)&gen_args[1]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x140)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129778));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x11298cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[27])REFP(0x1129860));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = (*(undefined4 *)&gen_args[0]);
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined2 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1a))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((int *)GEN_TOP(((int)this + 0x30))) = (*(int *)&gen_args[4]);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x112980c));
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0x44)));
  *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x4c))) = ((undefined4 *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x54))) = puVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x60))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 100))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x6c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x70))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x7a))) = 0xffff;
  *((undefined1 *)GEN_TOP(((int)this + 0x81))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x84))) = (*(undefined * PTR32 (*)[1])REFP(0x1129810));
  *((undefined4 *)GEN_TOP(((int)this + 0x8c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x90))) = 0;
  pcVar9 = ((char *)(gen_frame + 0x34));
  (*(char * PTR32 *)(gen_frame + 0x2c)) = pcVar9;
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 6;
  (*(undefined4 volatile *)(gen_frame + 0x140)) = 6;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(((*(int *)&gen_args[2]) - (int)((char *)(gen_frame + 0x34)))));
  do {
    cVar3 = *((char *)GEN_TOP((((*(int *)&gen_args[2]) - (int)((char *)(gen_frame + 0x34))) + (int)pcVar9)));
    if (cVar3 == '.') {
      cVar3 = '\0';
    }
    *pcVar9 = cVar3;
    pcVar9 = pcVar9 + 1;
  } while (cVar3 != '\0');
  F_00cb5730(((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,((char *)(gen_frame + 0x34)));
  uVar4 = F_00cb96c0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  *((ushort *)GEN_TOP(((int)this + 0x78))) = uVar4;
  uVar5 = F_00cb9720((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  (*(uint *)(gen_frame + 0x18)) = uVar5;
  uVar5 = F_00cb9840((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar5;
  if ((int)(*(uint *)(gen_frame + 0x18)) < 0) {
    (*(uint *)(gen_frame + 0x18)) = 10;
  }
  uVar5 = F_00cb9750((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
  if ((((*(uint *)(gen_frame + 0x18)) == 0) || (uVar5 == 0)) || ((*(int *)&gen_args[4]) == 0)) {
    *((undefined1 *)GEN_TOP(((int)this + 0x80))) = 0;
    (*(uint *)(gen_frame + 0x18)) = 0;
  }
  else {
    *((char *)GEN_TOP(((int)this + 0x80))) = (uVar5 != 1) + '\x01';
  }
  if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
    uVar4 = F_00cb9770((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    *((int *)GEN_TOP(((int)this + 0x74))) = (short)uVar4 - 1;
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,(uint)*((ushort *)GEN_TOP(((int)this + 0x78))) * 6,0)
    ;
    *((uint *)GEN_TOP(((int)this + 0x24))) = uVar5;
    uVar4 = F_00cb9680((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
    *((ushort *)GEN_TOP(((int)this + 0x7c))) = uVar4;
    if (uVar4 == 2) {
      pvVar7 = ((undefined *)GEN_TOP(F_00cb9660((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
      (*(undefined * PTR32 *)(gen_frame + 0x20)) = pvVar7;
      pvVar8 = ((undefined *)GEN_TOP(0x0));
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
      (*(uint *)(gen_frame + 0x24)) = 0;
      do {
        uVar5 = 0;
        if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
          (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)GEN_TOP(((int)((int)(uintptr_t)pvVar8) * 6)));
          (*(byte * PTR32 *)(gen_frame + 0x1c)) = ((byte *)GEN_TOP(((int)pvVar7 + 1)));
          do {
            if ((uint)*(*(byte * PTR32 *)(gen_frame + 0x1c)) == (int)(char)(&REFG(undefined, 0x1129924))[(int)((*(uint *)(gen_frame + 0x24)))]) {
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1)));
              *((short *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x2c)) + *((int *)GEN_TOP(((int)this + 0x24)))))) = (short)uVar5;
              (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)GEN_TOP(((int)(*(char * PTR32 *)(gen_frame + 0x2c)) + 6)));
            }
            (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 2;
            uVar5 = uVar5 + 1;
            pvVar8 = (*(undefined * PTR32 *)(gen_frame + 0x28));
          } while (uVar5 < *((ushort *)GEN_TOP(((int)this + 0x78))));
        }
        uVar5 = (*(uint *)(gen_frame + 0x24)) + 1;
        (*(uint *)(gen_frame + 0x24)) = uVar5;
      } while (uVar5 < 10);
      iVar10 = 0;
      (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)GEN_TOP(0x0));
      if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
        (*(uint *)(gen_frame + 0x24)) = 0;
        do {
          uVar5 = (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + (*(uint *)(gen_frame + 0x24)))));
          *((short *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4 + uVar5 * 6))) = (short)iVar10;
          iVar10 = iVar10 + *(int *)(&REFG(undefined, 0x134c29c) +
                                    (uint)CONCAT11(*((undefined1 *)GEN_TOP(((int)pvVar7 + uVar5 * 2))),
                                                   *((undefined1 *)GEN_TOP(((int)pvVar7 + uVar5 * 2 + 1)))) * 4
                                    );
          uVar5 = (int)(*(char * PTR32 *)(gen_frame + 0x2c)) + 1;
          (*(char * PTR32 *)(gen_frame + 0x2c)) = ((char *)GEN_TOP(uVar5));
          (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)this + 0x78))));
      }
      iVar11 = 0;
      *((int *)GEN_TOP(((int)this + 0x2c))) = iVar10;
      uVar5 = 0;
      if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
        do {
          *((ushort *)GEN_TOP((iVar11 + *((int *)GEN_TOP(((int)this + 0x24)))))) =
               CONCAT11(*((undefined1 *)GEN_TOP(((int)pvVar7 + uVar5 * 2))),
                        *((undefined1 *)GEN_TOP(((int)pvVar7 + uVar5 * 2 + 1))));
          puVar2 = ((ushort *)GEN_TOP((iVar11 + *((int *)GEN_TOP(((int)this + 0x24))))));
          *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + (&REFG(undefined4, 0x134c234))[(int)(*puVar2)];
          puVar2[1] = (ushort)uVar5;
          if (*((short *)GEN_TOP(((int)this + 0x7a))) == -1) {
            *((ushort *)GEN_TOP(((int)this + 0x7a))) = (ushort)uVar5;
          }
          uVar5 = uVar5 + 1;
          iVar11 = iVar11 + 6;
        } while (uVar5 < *((ushort *)GEN_TOP(((int)this + 0x78))));
      }
      pvVar8 = ((undefined *)GEN_TOP(F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pvVar8;
      (*(uint *)(gen_frame + 0x24)) = 0;
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      if (uVar4 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x20)) = (*(char * PTR32 *)(gen_frame + 0x2c));
        do {
          pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pvVar8;
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 7;
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 7;
          if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pvVar8 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x20)),this,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
          }
          *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 4))) = puVar1;
          *((undefined4 *)GEN_TOP((uVar5 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 6;
          (*(undefined4 volatile *)(gen_frame + 0x140)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x140)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 4))) = uVar5;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x20)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x20)) + 8)));
          *((uint *)GEN_TOP(((int)this + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)this + 0x5c))) = *((int *)GEN_TOP(((int)this + 0x5c))) + 1;
          (*(uint *)(gen_frame + 0x24)) = (*(uint *)(gen_frame + 0x24)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        } while ((*(uint *)(gen_frame + 0x24)) < uVar4);
      }
    }
    else {
      uVar5 = F_00cb9670((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
      (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(0x0));
      if (*((short *)GEN_TOP(((int)this + 0x78))) != 0) {
        puVar6 = ((undefined1 *)GEN_TOP((uVar5 + 1)));
        do {
          *((ushort *)GEN_TOP((iVar10 + *((int *)GEN_TOP(((int)this + 0x24)))))) = CONCAT11(puVar6[-1],*puVar6);
          *((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 4 + iVar10))) = CONCAT11(puVar6[1],puVar6[2]);
          *((int *)GEN_TOP(((int)this + 0x2c))) =
               *((int *)GEN_TOP(((int)this + 0x2c))) +
               *(int *)(&REFG(undefined, 0x134c29c) + (uint)CONCAT11(puVar6[-1],*puVar6) * 4);
          *((undefined2 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x24))) + 2 + iVar10))) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0));
          if (*((short *)GEN_TOP(((int)this + 0x7a))) == -1) {
            *((undefined2 *)GEN_TOP(((int)this + 0x7a))) = (*(undefined2 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0));
          }
          pvVar8 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 1)));
          puVar6 = puVar6 + 4;
          iVar10 = iVar10 + 6;
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar8;
        } while (pvVar8 < ((undefined *)GEN_TOP((uint)*((ushort *)GEN_TOP(((int)this + 0x78))))));
      }
      uVar4 = F_00cb96a0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      *((uint *)GEN_TOP(((int)this + 0x28))) = (uint)uVar4;
      pvVar8 = ((undefined *)GEN_TOP(F_00cb9790((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG)));
      (*(char * PTR32 *)(gen_frame + 0x2c)) = pvVar8;
      (*(byte * PTR32 *)(gen_frame + 0x1c)) = ((byte *)GEN_TOP(0x0));
      uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
      if (uVar4 != 0) {
        (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(char * PTR32 *)(gen_frame + 0x2c));
        do {
          pvVar8 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x50,0)));
          (*(char * PTR32 *)(gen_frame + 0x2c)) = pvVar8;
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 8;
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 8;
          if (pvVar8 == ((undefined *)GEN_TOP(0x0))) {
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cba5f0(pvVar8 GEN_EDX_ARG,(*(undefined * PTR32 *)(gen_frame + 0x28)),this,*((undefined4 *)GEN_TOP(((int)this + 0x28))));
          }
          *((undefined4 * PTR32 *)GEN_TOP((uVar5 + 4))) = puVar1;
          *((undefined4 *)GEN_TOP((uVar5 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x4c)));
          (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x140)) + 0)) = 6;
          (*(undefined4 volatile *)(gen_frame + 0x140)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x140)), 1, 3),6);
          if (*((int *)GEN_TOP(((int)this + 0x4c))) != 0) {
            *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x4c))) + 4))) = uVar5;
          }
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 8)));
          *((uint *)GEN_TOP(((int)this + 0x4c))) = uVar5;
          *((int *)GEN_TOP(((int)this + 0x5c))) = *((int *)GEN_TOP(((int)this + 0x5c))) + 1;
          (*(byte * PTR32 *)(gen_frame + 0x1c)) = (*(byte * PTR32 *)(gen_frame + 0x1c)) + 1;
          uVar4 = F_00cb96e0((*(undefined * PTR32 *)(gen_frame + 0x30)) GEN_EDX_ARG);
        } while ((*(byte * PTR32 *)(gen_frame + 0x1c)) < ((byte *)GEN_TOP((uint)uVar4)));
      }
    }
    F_00cb7df0(this GEN_EDX_ARG,(*(undefined4 *)(gen_frame + 0x14)));
    F_00cb8ed0((int)this + 0xc GEN_EDX_ARG,(*(uint *)(gen_frame + 0x18)),(char)(*(undefined4 *)&gen_args[5]),0);
    iVar10 = *((int *)GEN_TOP(((int)this + 0x4c)));
    *((undefined1 *)GEN_TOP(((int)this + 0x81))) = 0;
    for (; iVar10 != (int)this + 0x50; iVar10 = *((int *)GEN_TOP((iVar10 + 8)))) {
      if (*((char *)GEN_TOP((iVar10 + 0x30))) != '\0') {
        *((undefined1 *)GEN_TOP(((int)this + 0x81))) = 1;
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x138));
        return (uint)this;
      }
    }
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x138));
  return (uint)this;
}

/* ref: FUN_00cb9660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9660(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 4))) + 0x20;
}

/* ref: FUN_00cb9670 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9670(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 4))) + 0x20;
}

/* ref: FUN_00cb9680 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb9680(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 4))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 5))));
}

/* ref: FUN_00cb96a0 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb96a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 6))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 7))));
}

/* ref: FUN_00cb96c0 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb96c0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 8))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 9))));
}

/* ref: FUN_00cb96e0 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb96e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb96e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 10))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0xb))));
}

/* ref: FUN_00cb9700 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb9700(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0xc))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0xd))));
}

/* ref: FUN_00cb9720 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  ushort uVar2;
  
  uVar2 = CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xe))),
                   *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0xf)))) & 0x3fff;
  uVar1 = (uint)uVar2;
  if (uVar2 == 0x3fff) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

/* ref: FUN_00cb9750 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9750(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)(*((byte *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0xe))) >> 6);
}

/* ref: FUN_00cb9770 */
GEN_LIB GEN_NOFRAME ushort GEN_THISCALL F_00cb9770(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x10))),
                  *((undefined1 *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 4))) + 0x11))));
}

/* ref: FUN_00cb9790 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (CONCAT11(*((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4))),
               *((undefined1 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 5)))) < 3) {
    return iVar1 + 0x20 + (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 8))),*((undefined1 *)GEN_TOP((iVar1 + 9)))) * 2;
  }
  return iVar1 + 0x20 + (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 8))),*((undefined1 *)GEN_TOP((iVar1 + 9)))) * 4;
}

/* ref: FUN_00cb97e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb97e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb97e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 4))),*((undefined1 *)GEN_TOP((iVar1 + 5)))) < 3) {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 8))),*((undefined1 *)GEN_TOP((iVar1 + 9)))) * 2
    ;
  }
  else {
    iVar2 = iVar1 + 0x20 + (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 8))),*((undefined1 *)GEN_TOP((iVar1 + 9)))) * 4
    ;
  }
  return iVar2 + (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 10))),*((undefined1 *)GEN_TOP((iVar1 + 0xb)))) * 8;
}

/* ref: FUN_00cb9840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cb9840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9840u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  return CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 0x14))),*((undefined1 *)GEN_TOP((iVar1 + 0x15)))),
                           *((undefined1 *)GEN_TOP((iVar1 + 0x16)))),*((undefined1 *)GEN_TOP((iVar1 + 0x17))));
}

/* ref: FUN_00cb9900 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb9900(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9900u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0x81))) = param_2;
  return param_2;
}

/* ref: FUN_00cb9920 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9920(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcb9920u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  return param_2 * param_3 + 6 + in_ecx;
}

/* ref: FUN_00cb9940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9940(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9970 */
GEN_LIB GEN_FRAME uint F_00cb9970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcb9970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00c472af(param_2,param_3,((char *)REFP(0x1129938)),param_1,param_5,(&REFG(undefined * PTR32, 0x134c2d0))[(int)(*param_4)]);
  return uVar1;
}

/* ref: FUN_00cb99a0 */
GEN_LIB_GS GEN_FRAME uint F_00cb99a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcb99a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  undefined * apuVar1 [1];
  uint uVar2;
  char * _DstBuf;
  undefined4 uVar3;
  char * pcVar4;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  F_00c49908(param_2,param_3,param_1);
  *((undefined1 *)GEN_TOP((param_3 - 1 + param_2))) = 0;
  apuVar1[0] = (*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0];
  if (*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4) != 0) {
    (*((code *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x12b57b0))[0])))(param_2,param_3,*(int *)(&REFG(undefined, 0x134c2e8) + *param_4 * 4));
  }
  pcVar4 = ((char *)REFP(0x112995c));
  _DstBuf = ((char *)(gen_frame + 0x0));
  uVar3 = 0x100;
  F_00c472af(_DstBuf,0x100,((char *)REFP(0x112995c)));
  uVar2 = (*(code *)apuVar1[0])(param_2,param_3,((char *)(gen_frame + 0x0)),_DstBuf,uVar3,pcVar4,param_5);
  return uVar2;
}

/* ref: FUN_00cb9a30 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cb9a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9a30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x28))) != 0;
}

/* ref: FUN_00cb9a40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb9a40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  if ((*((uint *)GEN_TOP((in_ecx + 0x1c))) <= *param_2) && (*param_2 <= *((uint *)GEN_TOP((in_ecx + 0x20))))) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cb9ad0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cb9ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_00cb9b20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  return (uint)this;
}

/* ref: FUN_00cb9b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cb9b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00cb9b90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9b90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9b90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = 0;
  *((undefined1 *)GEN_TOP(((int)this + 6))) = 0;
  F_00cb5730(this GEN_EDX_FWD,*param_1);
  return (uint)this;
}

/* ref: FUN_00cb9be0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9be0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  return (uint)CONCAT11(*((undefined1 *)GEN_TOP(((int)this + 4))),*((undefined1 *)GEN_TOP(((int)this + 5)))) * param_1 + 6
         + (int)this;
}

/* ref: FUN_00cb9c60 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 * puVar1;
  
  puVar1 = ((undefined1 *)GEN_TOP((*(int *)this + 0x20 + param_1 * 8)));
  return CONCAT31(CONCAT21(CONCAT11(*puVar1,*((undefined1 *)GEN_TOP((*(int *)this + 0x21 + param_1 * 8)))),
                           puVar1[2]),puVar1[3]);
}

/* ref: FUN_00cb9c90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9c90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9c90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *(int *)this;
  return (int)CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((iVar1 + 0x24 + param_1 * 8))),
                                         *((undefined1 *)GEN_TOP((iVar1 + 0x25 + param_1 * 8)))),
                                *((undefined1 *)GEN_TOP((iVar1 + 0x26 + param_1 * 8)))),
                       *((undefined1 *)GEN_TOP((iVar1 + 0x27 + param_1 * 8)))) + iVar1;
}

/* ref: FUN_00cb9cd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cb9cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcb9cd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x84, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x7c);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
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
  
  piVar11 = (*(int * PTR32 *)&gen_args[1]);
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 volatile *)(gen_frame + 0x70)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x6c)) = ((code *)REFP(0x107053b));
  (*(undefined * PTR32 *)(gen_frame + 0x68)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x64)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x74);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x68));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x68)))))) { return (unsigned int)(uintptr_t)gen_eh_resume(); }
  piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 100)));
  (*(undefined * PTR32 *)(gen_frame + 0x28)) = this;
  (*(int * PTR32 *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[1]);
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x1c))))(piVar1 GEN_EDX_ARG,(*(int * PTR32 *)&gen_args[1]));
  if (uVar4 == 0) {
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG);
    (*(uint *)(gen_frame + 0x18)) = uVar4;
    uVar5 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0xc))) + 0x3c))))
                      (*((int *)GEN_TOP(((int)this + 0x10))) + 0xc);
    (*(uint *)(gen_frame + 0x20)) = uVar5;
    (*(int *)(gen_frame + 0x2c)) = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x28))) + uVar5 * 2;
    uVar5 = (uint)CONCAT12(*((undefined1 *)GEN_TOP((uVar4 + 8))),
                           CONCAT11(*((undefined1 *)GEN_TOP((uVar4 + 9))),*((undefined1 *)GEN_TOP((uVar4 + 10))))) << 5 |
            (uint)(*((byte *)GEN_TOP((uVar4 + 0xb))) >> 3);
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
    if (uVar5 != 0) {
      puVar9 = ((undefined1 *)GEN_TOP((uVar4 + 0x22)));
      do {
        iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[-2],puVar9[-1]),*puVar9),puVar9[1]);
        (*(int *)(gen_frame + 0x10)) = iVar6;
        if (iVar6 == *(*(int * PTR32 *)(gen_frame + 0x1c))) {
          iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar9[2],puVar9[3]),puVar9[4]),puVar9[5]);
          iVar7 = iVar6 + uVar4;
          uVar10 = (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar6 + 4 + uVar4))),
                                  *((undefined1 *)GEN_TOP((iVar6 + 5 + uVar4))));
          (*(int *)(gen_frame + 0x14)) = uVar10 * (*(int *)(gen_frame + 0x2c)) + 6 + iVar7;
          (*(uint *)(gen_frame + 0x24)) = 0;
          uVar4 = (*(uint *)(gen_frame + 0x18));
          if (uVar10 != 0) {
            (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = ((undefined1 *)GEN_TOP((iVar7 + 6)));
LAB_00cb9dfe: ;
            bVar3 = F_00cb4260((*(int * PTR32 *)(gen_frame + 0x1c)) GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x30)));
            if (bVar3 == 0) goto code_r0x00cb9e0e;
            this_00 = ((undefined *)GEN_TOP(F_00cb15d0(0xc)));
            puVar9 = (*(undefined1 * PTR32 *)(gen_frame + 0x30));
            uVar4 = (*(uint *)(gen_frame + 0x20));
            (*(undefined * PTR32 *)(gen_frame + 0x34)) = this_00;
            (*(undefined4 volatile *)(gen_frame + 0x70)) = 0;
            if (this_00 == ((undefined *)GEN_TOP(0x0))) {
              (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
            }
            else {
              uVar5 = F_00cb1240(this_00 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x30)),(*(uint *)(gen_frame + 0x20)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10))),
                                   (*(int *)(gen_frame + 0x14)),(*(int *)(gen_frame + 0x2c)));
              (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(uVar5));
            }
            (*(undefined4 volatile *)(gen_frame + 0x70)) = 0xffffffff;
            if (uVar4 != 0) {
              iVar6 = (int)((undefined2 *)(gen_frame + 0x44)) - (int)puVar9;
              uVar5 = uVar4;
              do {
                *(ushort *)(puVar9 + iVar6) = CONCAT11(*puVar9,puVar9[1]);
                puVar9 = puVar9 + 2;
                uVar5 = uVar5 - 1;
              } while (uVar5 != 0);
            }
            F_00cb42c0(((int *)(gen_frame + 0x38)) GEN_EDX_ARG,(*(int *)(gen_frame + 0x10)),((undefined2 *)(gen_frame + 0x44)),uVar4);
            this = (*(undefined * PTR32 *)(gen_frame + 0x28));
            piVar11 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) + 0x10))) + 100)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar11 + 0xc))))(piVar11 GEN_EDX_ARG,((int *)(gen_frame + 0x38)),(*(undefined * PTR32 *)(gen_frame + 0x34)));
            piVar11 = ((int *)(gen_frame + 0x38));
            goto LAB_00cb9ed5;
          }
        }
LAB_00cb9e22: ;
        uVar10 = (int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 1;
        puVar9 = puVar9 + 8;
        (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(uVar10));
      } while (uVar10 < uVar5);
    }
  }
  else {
LAB_00cb9ed5: ;
    F_00cb74f0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x10))) GEN_EDX_ARG,piVar11);
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x68));
  return;
code_r0x00cb9e0e: ;
  (*(undefined1 * PTR32 *)(gen_frame + 0x30)) = (*(undefined1 * PTR32 *)(gen_frame + 0x30)) + (*(int *)(gen_frame + 0x2c));
  uVar8 = (*(uint *)(gen_frame + 0x24)) + 1;
  (*(uint *)(gen_frame + 0x24)) = uVar8;
  uVar4 = (*(uint *)(gen_frame + 0x18));
  if (uVar10 <= uVar8) goto LAB_00cb9e22;
  goto LAB_00cb9dfe;
}

/* ref: FUN_00cb9f10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9f10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 8)));
  return (uint)param_2;
}

/* ref: FUN_00cb9f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9f20(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  *param_2 = in_ecx + 0xc;
  return (uint)param_2;
}

/* ref: FUN_00cb9f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  return param_1;
}

/* ref: FUN_00cb9f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcb9f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
    if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
      uVar1 = *((uint *)GEN_TOP((param_1 + 4)));
      *((uint *)GEN_TOP((*((int *)GEN_TOP((param_1 + 8))) + 4))) = uVar1;
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return uVar1;
}

/* ref: FUN_00cb9fb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cb9fb0(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcb9fb0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x1070568));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x8)) = in_ecx;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129968));
  F_00cb4120(in_ecx + 2 GEN_EDX_ARG);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return (uint)in_ecx;
}

/* ref: FUN_00cba000 */
GEN_LIB GEN_NOFRAME unsigned int F_00cba000(void)
{
  GEN_ENTER(0xcba000u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00cba010 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cba010(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00cba020 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba020(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcba020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 4))) = param_2;
  return param_2;
}

/* ref: FUN_00cba030 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cba030(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  return;
}

/* ref: FUN_00cba040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cba040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cba0a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba0a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcba0a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined * PTR32 *)GEN_TOP((param_1 + 4))) = this;
  *((undefined4 *)GEN_TOP((param_1 + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + 4))) = param_1;
  }
  *((uint *)GEN_TOP(((int)this + 8))) = param_1;
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) + 1;
  return param_1;
}

/* ref: FUN_00cba0d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba0d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcba0d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 8)));
  iVar2 = *((int *)GEN_TOP((param_2 + 4)));
  *param_1 = uVar1;
  if (iVar2 != 0) {
    *((undefined4 *)GEN_TOP((iVar2 + 8))) = uVar1;
  }
  if (*((int *)GEN_TOP((param_2 + 8))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((param_2 + 8))) + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  return (uint)param_1;
}

/* ref: FUN_00cba100 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcba100u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *((undefined4 *)GEN_TOP((iVar1 + 8)));
  if (iVar1 != 0) {
    if (*((int *)GEN_TOP((iVar1 + 4))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 4))) + 8))) = *((undefined4 *)GEN_TOP((iVar1 + 8)));
    }
    if (*((int *)GEN_TOP((iVar1 + 8))) != 0) {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 8))) + 4))) = *((undefined4 *)GEN_TOP((iVar1 + 4)));
    }
    *((int *)GEN_TOP(((int)this + 0x18))) = *((int *)GEN_TOP(((int)this + 0x18))) - 1;
  }
  return (uint)param_1;
}

/* ref: FUN_00cba140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba140(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcba140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cba180 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba180(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba180u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x30, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  uint * puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(uint * PTR32 *)&gen_args[0]);
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x107059b));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(uint * PTR32 *)&gen_args[0]) == ((uint *)GEN_TOP(0x0))) {
    (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(F_00406a50(4)));
  }
  else {
    uVar3 = -(uint)((int)(ZEXT48((*(uint * PTR32 *)&gen_args[0])) * 0x18 >> 0x20) != 0) | (uint)(ZEXT48((*(uint * PTR32 *)&gen_args[0])) * 0x18);
    (*(uint * PTR32 *)&gen_args[0]) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))
                                (REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,-(uint)(0xfffffffb < uVar3) | uVar3 + 4,0)));
  }
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0;
  if ((*(uint * PTR32 *)&gen_args[0]) == ((uint *)GEN_TOP(0x0))) {
    puVar1 = ((uint *)GEN_TOP(0x0));
  }
  else {
    puVar1 = (*(uint * PTR32 *)&gen_args[0]) + 1;
    *(*(uint * PTR32 *)&gen_args[0]) = uVar4;
    F_01051d8c(puVar1,0x18,uVar4,((code *)REFP(0xcb9fb0)),((code *)REFP(0xcba030)));
  }
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0xffffffff;
  *((uint * PTR32 *)GEN_TOP(((int)this + 4))) = puVar1;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar4;
  if (uVar4 != 0) {
    iVar2 = 0;
    do {
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4 + iVar2))) = 0;
      iVar2 = iVar2 + 0x18;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00cb6d10(this GEN_EDX_ARG);
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = (*(undefined4 *)&gen_args[1]);
  *((uint *)GEN_TOP(((int)this + 0x14))) = (*(uint *)&gen_args[2]);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00cba260 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba260(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcba260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  if ((param_2 & 2) != 0) {
    F_01051d29(param_1,0x18,param_1[-1],((code *)REFP(0xcba030)));
    if ((param_2 & 1) != 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1 - 1);
    }
    return (uint)(param_1 - 1);
  }
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x1129900));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cba2d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba2d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x28, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a1;
  
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x10705c8));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
  F_00cb4120((int)this + 0xc GEN_EDX_ARG);
  if ((*(int *)&gen_args[0]) != 0) {
    F_00cb4320(((undefined *)GEN_TOP(((int)this + 0xc))) GEN_EDX_ARG,(*(int *)&gen_args[0]));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)this;
}

/* ref: FUN_00cba380 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba380(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcba380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (param_1[1] != 0) {
    *((undefined4 *)GEN_TOP((param_1[1] + 8))) = param_1[2];
  }
  if (param_1[2] != 0) {
    *((undefined4 *)GEN_TOP((param_1[2] + 4))) = param_1[1];
  }
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cba3d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cba3d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba3d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x14)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x14))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  return uVar1;
}

/* ref: FUN_00cba420 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba420(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcba420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x30, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x28);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined4 * puVar5;
  
  iVar2 = (int)(*(undefined4 * PTR32 *)&gen_args[1]);
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x18)) = ((code *)REFP(0x1070603));
  (*(undefined * PTR32 *)(gen_frame + 0x14)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x20);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x14));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x14)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  if ((*(undefined4 * PTR32 *)&gen_args[1]) != ((undefined4 *)GEN_TOP(0x0))) {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x3c)));
    while (iVar1 = iVar3, iVar1 != (int)this + 0x40) {
      bVar4 = F_00cb4170(((undefined *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG,iVar2);
      if (bVar4 != 0) {
        (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
        return 0;
      }
      iVar3 = 0;
      if (iVar1 != 0) {
        iVar3 = *((int *)GEN_TOP((iVar1 + 8)));
      }
    }
  }
  puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(undefined4 volatile *)(gen_frame + 0x1c)) = 0;
  if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar5 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar5[1] = 0;
    puVar5[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x1c)) + 0)) = 1;
    (*(undefined4 volatile *)(gen_frame + 0x1c)) = 1;
    *puVar5 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    (*(undefined4 * PTR32 *)&gen_args[1]) = puVar5;
    F_00cb4120(puVar5 + 3 GEN_EDX_ARG);
    if (iVar2 != 0) {
      F_00cb4320(puVar5 + 3 GEN_EDX_ARG,iVar2);
    }
  }
  puVar5[1] = (int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x34;
  puVar5[2] = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x3c)));
  if (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x3c))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x3c))) + 4))) = puVar5;
  }
  *((undefined4 * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x3c))) = puVar5;
  *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x4c))) = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x10)) + 0x4c))) + 1;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x14));
  return (uint)puVar5;
}

/* ref: FUN_00cba510 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cba510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  while (iVar1 != 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      if (puVar2[1] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[1] + 8))) = puVar2[2];
      }
      if (puVar2[2] != 0) {
        *((undefined4 *)GEN_TOP((puVar2[2] + 4))) = puVar2[1];
      }
      *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) - 1;
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar2)))(puVar2 GEN_EDX_FWD,1);
    }
    iVar1 = *((int *)GEN_TOP(((int)this + 0x4c)));
  }
  return;
}

/* ref: FUN_00cba560 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcba560u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    if (param_2[1] != 0) {
      *((undefined4 *)GEN_TOP((param_2[1] + 8))) = param_2[2];
    }
    if (param_2[2] != 0) {
      *((undefined4 *)GEN_TOP((param_2[2] + 4))) = param_2[1];
    }
    *((int *)GEN_TOP(((int)this + 0x4c))) = *((int *)GEN_TOP(((int)this + 0x4c))) - 1;
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 8))))(REFG(int, 0x15d7724) + 4,param_1);
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*param_2)))(param_2 GEN_EDX_ARG,1);
  }
  return uVar1;
}

/* ref: FUN_00cba5b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba5b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xcba5b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  
  this_00 = ((undefined *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) * 0x58 + *((int *)GEN_TOP(((int)this + 8))))));
  *((int *)GEN_TOP(((int)this + 0x10))) = *((int *)GEN_TOP(((int)this + 0x10))) + 1;
  F_00cba180(this_00 GEN_EDX_FWD,param_1,param_2,param_3);
  *((int *)GEN_TOP(((int)this + 0x14))) = *((int *)GEN_TOP(((int)this + 0x14))) + param_1;
  return (uint)this_00;
}

/* ref: FUN_00cba5f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba5f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcba5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x30, 0);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x24);
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  gen_args[2] = gen_a3;
  undefined4 * puVar1;
  int iVar2;
  
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x14)) = ((code *)REFP(0x1070633));
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x10));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x10)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x11296dc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129984));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x112997c));
  *((int *)GEN_TOP(((int)this + 0x10))) = (*(int *)&gen_args[1]);
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x18)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x18)) = 1;
  puVar1 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) + 100))))(((int *)GEN_TOP(((*(int *)&gen_args[1]) + 0xc))) GEN_EDX_ARG)));
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x1a))) = 0;
  F_00cb5730(((undefined4 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_ARG,*puVar1);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined1 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x3c))) = ((undefined4 *)GEN_TOP(((int)this + 0x40)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  *((int *)GEN_TOP(((int)this + 0x44))) = (int)this + 0x34;
  *((uint *)GEN_TOP(((int)this + 0x1c))) =
       CONCAT31(CONCAT21(CONCAT11(*(*(undefined1 * PTR32 *)&gen_args[0]),(*(undefined1 * PTR32 *)&gen_args[0])[1]),(*(undefined1 * PTR32 *)&gen_args[0])[2]),(*(undefined1 * PTR32 *)&gen_args[0])[3]);
  iVar2 = CONCAT31(CONCAT21(CONCAT11((*(undefined1 * PTR32 *)&gen_args[0])[4],(*(undefined1 * PTR32 *)&gen_args[0])[5]),(*(undefined1 * PTR32 *)&gen_args[0])[6]),(*(undefined1 * PTR32 *)&gen_args[0])[7]);
  *((int *)GEN_TOP(((int)this + 0x24))) = iVar2;
  *((int *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 0x1c))) + iVar2;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x10));
  return (uint)this;
}

/* ref: FUN_00cba700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cba700(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcba700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cbace0((int)this - 0xc GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cba710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba710(unsigned int gen_a0 GEN_EDX_PARAM)
{
  GEN_ENTER(0xcba710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x24, 4);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x20);
  uint uVar1;
  
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10)) = ((code *)REFP(0x1070679));
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x18);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0xc)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129984));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x112997c));
  (*(undefined4 volatile *)(gen_frame + 0x14)) = 3;
  F_00cba510(this GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x40))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)this + 0x44))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x44))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x48)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x48))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x48))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x44)));
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x34))) = (*(undefined * PTR32 (*)[1])REFP(0x1129964));
  if (*((int *)GEN_TOP(((int)this + 0x38))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x38))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 0x3c)));
  }
  if (*((int *)GEN_TOP(((int)this + 0x3c))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x3c))) + 4))) = *((undefined4 *)GEN_TOP(((int)this + 0x38)));
  }
  (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x14)) + 0)) = 1;
  (*(undefined4 volatile *)(gen_frame + 0x14)) = CONCAT31(GEN_PIECE(&(*(undefined4 volatile *)(gen_frame + 0x14)), 1, 3),1);
  if ((*((char *)GEN_TOP(((int)this + 0x1a))) == '\0') && (*((int *)GEN_TOP(((int)this + 0x14))) != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,*((int *)GEN_TOP(((int)this + 0x14))));
    *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129818));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 8))) = *((undefined4 *)GEN_TOP(((int)this + 8)));
  }
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 4))) = *((undefined4 *)GEN_TOP(((int)this + 4)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0xc));
  return uVar1;
}

/* ref: FUN_00cba7f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cba7f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcba7f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  GEN_FRAME_DECL(0x8c, 12);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x88);
  gen_args[0] = gen_a1;
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int * piVar8;
  uint uVar9;
  int iVar10;
  undefined * pvVar11;
  undefined4 * puVar12;
  undefined1 * puVar13;
  undefined * pvVar14;
  undefined1 * puVar15;
  uint uVar16;
  int iVar17;
  undefined * pvVar18;
  undefined1 * puVar19;
  
  (*(undefined4 volatile *)(gen_frame + 0x7c)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x78)) = ((code *)REFP(0x10706ab));
  (*(undefined * PTR32 *)(gen_frame + 0x74)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  (*(uint *)(gen_frame + 0x70)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*(uint *)(gen_frame + 0x0)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80);
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x74));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x74)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  (*(undefined * PTR32 *)(gen_frame + 0x30)) = this;
  (*(int *)(gen_frame + 0x38)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(0x0));
  uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]) GEN_EDX_ARG);
  pvVar18 = ((undefined *)GEN_TOP(((uint)CONCAT12(*((undefined1 *)GEN_TOP((uVar9 + 8))),
                                    CONCAT11(*((undefined1 *)GEN_TOP((uVar9 + 9))),*((undefined1 *)GEN_TOP((uVar9 + 10))))
                                   ) << 5 | (uint)(*((byte *)GEN_TOP((uVar9 + 0xb))) >> 3))));
  pvVar14 = ((undefined *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0x18)) = uVar9;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = pvVar18;
  (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = ((undefined1 *)GEN_TOP(0x0));
  if (((undefined *)GEN_TOP(0x1)) < pvVar18) {
    iVar17 = ((int)pvVar18 - 2U >> 1) + 1;
    pvVar14 = ((undefined *)GEN_TOP((iVar17 * 2)));
    puVar15 = ((undefined1 *)GEN_TOP((uVar9 + 0x26)));
    (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar14;
    do {
      iVar10 = CONCAT31(CONCAT21(CONCAT11(puVar15[-2],puVar15[-1]),*puVar15),puVar15[1]);
      (*(int *)(gen_frame + 0x38)) = (*(int *)(gen_frame + 0x38)) +
                 (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar10 + 4 + uVar9))),
                                *((undefined1 *)GEN_TOP((iVar10 + uVar9 + 5))));
      iVar10 = CONCAT31(CONCAT21(CONCAT11(puVar15[6],puVar15[7]),puVar15[8]),puVar15[9]);
      (*(undefined * PTR32 *)(gen_frame + 0x3c)) = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x3c)) +
                         (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar10 + 4 + uVar9))),
                                        *((undefined1 *)GEN_TOP((iVar10 + 5 + uVar9)))))));
      puVar15 = puVar15 + 0x10;
      iVar17 = iVar17 - 1;
    } while (iVar17 != 0);
  }
  if (pvVar14 < pvVar18) {
    iVar17 = CONCAT31(CONCAT21(CONCAT11(*((undefined1 *)GEN_TOP((uVar9 + 0x24 + (int)((int)(uintptr_t)pvVar14) * 8))),
                                        *((undefined1 *)GEN_TOP((uVar9 + 0x25 + (int)((int)(uintptr_t)pvVar14) * 8)))),
                               *((undefined1 *)GEN_TOP((uVar9 + 0x26 + (int)((int)(uintptr_t)pvVar14) * 8)))),
                      *((undefined1 *)GEN_TOP((uVar9 + 0x27 + (int)((int)(uintptr_t)pvVar14) * 8))));
    (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = ((undefined1 *)GEN_TOP((uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar17 + 4 + uVar9))),
                              *((undefined1 *)GEN_TOP((iVar17 + 5 + uVar9))))));
  }
  uVar5 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x20)));
  iVar17 = (int)(*(undefined1 * PTR32 *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x38)) + (int)(*(undefined * PTR32 *)(gen_frame + 0x3c));
  (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = ((undefined1 *)GEN_TOP(iVar17));
  uVar6 = *((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x1c)));
  iVar10 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10))) + 100)));
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(uVar6));
  iVar7 = *((int *)GEN_TOP((iVar10 + 0x10)));
  *((int *)GEN_TOP((iVar10 + 0x10))) = iVar7 + 1;
  F_00cba180(((undefined *)GEN_TOP((iVar7 * 0x58 + *((int *)GEN_TOP((iVar10 + 8)))))) GEN_EDX_ARG,iVar17,uVar6,uVar5);
  pvVar14 = (*(undefined * PTR32 *)(gen_frame + 0x30));
  *((int *)GEN_TOP((iVar10 + 0x14))) = *((int *)GEN_TOP((iVar10 + 0x14))) + (int)(*(undefined1 * PTR32 *)(gen_frame + 0x40));
  pvVar11 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10))) + 0xc))) + 0x3c))))
                              (*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10))) + 0xc)));
  (*(undefined * PTR32 *)(gen_frame + 0x3c)) = pvVar11;
  (*(int *)(gen_frame + 0x38)) = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)pvVar14 + 0x10))) + 0x28))) + (int)((int)(uintptr_t)pvVar11) * 2;
  (*(undefined * PTR32 *)(gen_frame + 0x34)) = ((undefined *)GEN_TOP(0x0));
  if (pvVar18 != ((undefined *)GEN_TOP(0x0))) {
    puVar15 = ((undefined1 *)GEN_TOP((uVar9 + 0x22)));
    do {
      uVar1 = puVar15[-2];
      uVar2 = puVar15[-1];
      uVar3 = *puVar15;
      uVar4 = puVar15[1];
      iVar17 = CONCAT31(CONCAT21(CONCAT11(puVar15[2],puVar15[3]),puVar15[4]),puVar15[5]);
      iVar10 = iVar17 + uVar9;
      uVar16 = (uint)CONCAT11(*((undefined1 *)GEN_TOP((iVar17 + 4 + uVar9))),*((undefined1 *)GEN_TOP((iVar10 + 5))));
      (*(uint *)(gen_frame + 0x24)) = uVar16;
      (*(int *)(gen_frame + 0x10)) = uVar16 * (*(int *)(gen_frame + 0x38)) + 6 + iVar10;
      (*(uint *)(gen_frame + 0x20)) = 0;
      if (uVar16 != 0) {
        (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = ((undefined1 *)GEN_TOP((iVar10 + 6)));
        (*(int *)(gen_frame + 0x14)) = -(*(int *)(gen_frame + 0x38));
        puVar19 = ((undefined1 *)(gen_frame + 0x4a)) - iVar10;
        do {
          pvVar14 = ((undefined *)GEN_TOP(F_00cb15d0(0xc)));
          (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar14;
          (*(undefined4 volatile *)(gen_frame + 0x7c)) = 0;
          if (pvVar14 == ((undefined *)GEN_TOP(0x0))) {
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = ((undefined4 *)GEN_TOP(0x0));
          }
          else {
            puVar12 = ((undefined4 *)GEN_TOP(F_00cb1240(pvVar14 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x40)),(*(undefined * PTR32 *)(gen_frame + 0x3c)),*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10))),
                                   (*(int *)(gen_frame + 0x10)),(*(int *)(gen_frame + 0x38)))));
            (*(undefined4 * PTR32 *)(gen_frame + 0x2c)) = puVar12;
          }
          (*(undefined4 volatile *)(gen_frame + 0x7c)) = 0xffffffff;
          if ((*(undefined * PTR32 *)(gen_frame + 0x3c)) != ((undefined *)GEN_TOP(0x0))) {
            (*(undefined * PTR32 *)(gen_frame + 0x28)) = (*(undefined * PTR32 *)(gen_frame + 0x3c));
            puVar13 = (*(undefined1 * PTR32 *)(gen_frame + 0x40));
            do {
              *(ushort *)(puVar13 + (int)puVar19) = CONCAT11(*puVar13,puVar13[1]);
              puVar13 = puVar13 + 2;
              pvVar14 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x28)) - 1)));
              (*(undefined * PTR32 *)(gen_frame + 0x28)) = pvVar14;
            } while (pvVar14 != ((undefined *)GEN_TOP(0x0)));
          }
          F_00cb42c0(((undefined1 *)(gen_frame + 0x44)) GEN_EDX_ARG,CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4),((undefined1 *)(gen_frame + 0x50)), (*(undefined * PTR32 *)(gen_frame + 0x3c)));
          piVar8 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x30)) + 0x10))) + 100)));
          uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar8 + 0xc))))(piVar8 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x44)),(*(undefined4 * PTR32 *)(gen_frame + 0x2c)));
          if ((char)uVar9 == '\0') {
            if ((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) == ((undefined4 *)GEN_TOP(0x0))) {
              (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x74));
              return uVar9;
            }
            uVar9 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*(*(undefined4 * PTR32 *)(gen_frame + 0x2c)))))((*(undefined4 * PTR32 *)(gen_frame + 0x2c)) GEN_EDX_ARG,1);
            (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x74));
            return uVar9;
          }
          (*(undefined1 * PTR32 *)(gen_frame + 0x40)) = (*(undefined1 * PTR32 *)(gen_frame + 0x40)) + (*(int *)(gen_frame + 0x38));
          puVar19 = puVar19 + (*(int *)(gen_frame + 0x14));
          uVar16 = (*(uint *)(gen_frame + 0x20)) + 1;
          (*(uint *)(gen_frame + 0x20)) = uVar16;
          uVar9 = (*(uint *)(gen_frame + 0x18));
        } while (uVar16 < (*(uint *)(gen_frame + 0x24)));
      }
      pvVar11 = ((undefined *)GEN_TOP(((int)(*(undefined * PTR32 *)(gen_frame + 0x34)) + 1)));
      puVar15 = puVar15 + 8;
      (*(undefined * PTR32 *)(gen_frame + 0x34)) = pvVar11;
    } while (pvVar11 < (*(undefined * PTR32 *)(gen_frame + 0x1c)));
  }
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x74));
  return (uint)pvVar11;
}

/* ref: FUN_00cbab30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbab30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xcbab30u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  GEN_FRAME_DECL(0x120, 8);
  unsigned int *gen_args = (unsigned int *)(gen_frame + 0x11c);
  gen_args[0] = gen_a1;
  uint uVar1;
  undefined4 * puVar2;
  
  (*(undefined4 volatile *)(gen_frame + 0x110)) = 0xffffffff;
  (*(gen_code32 *)(gen_frame + 0x10c)) = ((code *)REFP(0x10706e9));
  (*(undefined * PTR32 *)(gen_frame + 0x108)) = (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0))));
  uVar1 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x114);
  (*(uint *)(gen_frame + 0x104)) = uVar1;
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = &(*(undefined * PTR32 *)(gen_frame + 0x108));
  if (setjmp(*gen_eh_landing((unsigned int)(uintptr_t)(&(*(undefined * PTR32 *)(gen_frame + 0x108)))))) { return (uint)(uintptr_t)gen_eh_resume(); }
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 4))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,0x1c,0)));
  (*(undefined4 * PTR32 *)(gen_frame + 0x0)) = puVar2;
  (*(undefined4 volatile *)(gen_frame + 0x110)) = 0;
  if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = ((undefined4 *)GEN_TOP(0x0));
  }
  else {
    puVar2[1] = 0;
    puVar2[2] = 0;
    (*(undefined1 *)((char *)&(*(undefined4 volatile *)(gen_frame + 0x110)) + 0)) = 1;
    (*(undefined4 volatile *)(gen_frame + 0x110)) = 1;
    *puVar2 = (*(undefined * PTR32 (*)[1])REFP(0x1129978));
    F_00cb4120(puVar2 + 3 GEN_EDX_ARG);
  }
  puVar2[1] = param_1 + 0x34;
  puVar2[2] = *((undefined4 *)GEN_TOP((param_1 + 0x3c)));
  (*(undefined4 volatile *)(gen_frame + 0x110)) = 0xffffffff;
  if (*((int *)GEN_TOP((param_1 + 0x3c))) != 0) {
    *((undefined4 * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x3c))) + 4))) = puVar2;
  }
  *((int *)GEN_TOP((param_1 + 0x4c))) = *((int *)GEN_TOP((param_1 + 0x4c))) + 1;
  *((undefined4 * PTR32 *)GEN_TOP((param_1 + 0x3c))) = puVar2;
  F_00c472af(((char *)(gen_frame + 0x4)),0x100,((char *)REFP(0x1129938)),*((undefined4 *)GEN_TOP((param_1 + 0x14))),
             *((undefined4 *)GEN_TOP((param_1 + 0x1c))),
             (&REFG(undefined * PTR32, 0x134c2d0))[(int)(*((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x10))) + 0x10))))],uVar1);
  *((int *)GEN_TOP((param_1 + 0x28))) = *((int *)GEN_TOP((param_1 + 0x28))) + 1;
  *(char *)(puVar2 + 6) = (*(char *)&gen_args[0]);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(int * PTR32, 0x15d7724)[1] + 4))))
                    (REFG(int * PTR32, 0x15d7724) + 1,((char *)(gen_frame + 0x4)),param_1 + 0xc,puVar2,0,0,(uint)((*(char *)&gen_args[0]) == '\0'));
  (*((void * PTR32 *)GEN_TOP((uintptr_t)(gen_teb32() + 0x0)))) = (*(undefined * PTR32 *)(gen_frame + 0x108));
  return uVar1;
}

/* ref: FUN_00cbac50 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cbac50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbac50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_GS(0x108, 8, 4);
  uint uVar1;
  uint uVar2;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x100)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x104));
  uVar1 = F_00cba420(this GEN_EDX_FWD,0,param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    F_00c472af(((char *)(gen_frame + 0x0)),0x100,((char *)REFP(0x1129938)),*((undefined4 *)GEN_TOP(((int)this + 0x14))),
               *((undefined4 *)GEN_TOP(((int)this + 0x1c))),
               (&REFG(undefined * PTR32, 0x134c2d0))[(int)(*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10))))]);
    *((int *)GEN_TOP(((int)this + 0x28))) = *((int *)GEN_TOP(((int)this + 0x28))) + 1;
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 4))))
                      (REFG(int, 0x15d7724) + 4,((char *)(gen_frame + 0x0)),(int)this + 0xc,uVar1,0,0,0);
  }
  return uVar2;
}

/* ref: FUN_00cbace0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbace0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbace0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00cba710(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7724) + 8))))(REFG(int * PTR32, 0x15d7724) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cbad10 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cbad10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbad10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_GS(0x14, 12, 4);
  byte bVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  bool bVar5;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0xc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x10));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0xc))))(param_1 GEN_EDX_FWD);
  bVar5 = (char)uVar2 == '\0';
  puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x18))))(param_1 GEN_EDX_ARG)));
  F_00cb4360(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,puVar3 + 3);
  if (*((short *)GEN_TOP(((int)puVar3 + 0x12))) == -1) {
    if (bVar5) {
      F_00cba7f0(((undefined *)GEN_TOP(((int)this - 0xc))) GEN_EDX_ARG,param_1);
    }
    if (puVar3[1] != 0) {
      *((undefined4 *)GEN_TOP((puVar3[1] + 8))) = puVar3[2];
    }
    if (puVar3[2] != 0) {
      *((undefined4 *)GEN_TOP((puVar3[2] + 4))) = puVar3[1];
    }
    *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
    ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 8))))(REFG(int, 0x15d7724) + 4,param_1);
    puVar3 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar3)))(puVar3 GEN_EDX_ARG,1)));
  }
  else {
    puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x30)));
    puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x34)));
    if (puVar4 != puVar3) {
      do {
        bVar1 = F_00cb4170(puVar4 + 3 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
        if (bVar1 != 0) {
          if (bVar5) {
            F_00cb9cd0(((undefined *)GEN_TOP(((int)this - 0xc))) GEN_EDX_ARG,param_1,puVar4 + 3);
          }
          if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
            if (puVar4[1] != 0) {
              *((undefined4 *)GEN_TOP((puVar4[1] + 8))) = puVar4[2];
            }
            if (puVar4[2] != 0) {
              *((undefined4 *)GEN_TOP((puVar4[2] + 4))) = puVar4[1];
            }
            *((int *)GEN_TOP(((int)this + 0x40))) = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar4)))(puVar4 GEN_EDX_ARG,1);
          }
          puVar3 = ((undefined4 *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7724) + 4))) + 8))))(REFG(int, 0x15d7724) + 4,param_1)));
          break;
        }
        if (puVar4 != ((undefined4 *)GEN_TOP(0x0))) {
          puVar4 = ((undefined4 *)GEN_TOP(puVar4[2]));
        }
        puVar3 = ((undefined4 *)GEN_TOP(((int)this + 0x34)));
      } while (puVar4 != puVar3);
    }
  }
  *((int *)GEN_TOP(((int)this + 0x1c))) = *((int *)GEN_TOP(((int)this + 0x1c))) - 1;
  if (!bVar5) {
    puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4)));
    *((undefined1 *)GEN_TOP(((int)this + 0x24))) = 1;
    *((undefined1 *)GEN_TOP(((int)puVar3 + 0x81))) = 1;
  }
  return (uint)puVar3;
}

/* ref: FUN_00cbae50 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00cbae50(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbae50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  return GEN_X87((float10)(float)((float10)*in_ecx / (float10)*(double *)&REFG(undefined, 0x1097260)));
}

/* ref: FUN_00cbaea0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbaea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbaea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = param_2;
  uVar1 = F_00d2cce0();
  in_ecx[2] = uVar1;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaed0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbaed0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  in_ecx[1] = 0xffffffff;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbaef0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbaef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbaef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00cbaf10 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbaf10(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaf10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  return;
}

/* ref: FUN_00cbaf20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbaf20(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbaf20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (in_ecx != param_2) {
    *((undefined4 *)GEN_TOP((in_ecx + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  return in_ecx;
}

/* ref: FUN_00cbaf40 */
GEN_LIB GEN_FRAME byte F_00cbaf40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbaf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) == *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00cbaf60 */
GEN_LIB GEN_FRAME byte F_00cbaf60(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbaf60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) != *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00cbaf80 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbaf80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbaf80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf720(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbafb0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbafb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbafb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbf770(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb010 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf7f0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb050(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb050u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*((undefined4 *)GEN_TOP((param_1 + 4))),param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x5c))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbb0e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb0e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb0e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x60))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),1,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb130 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0x60))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),0,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb1b0 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbb1b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb1b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbfb10(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb1e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb1e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbb1e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfb80(*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfbc0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  if (-1 < (int)uVar1) {
    uVar1 = F_00cbfc80(uVar1);
    F_00cbb870(param_1 GEN_EDX_ARG,uVar1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
  F_00cbb8a0(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbb2c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb2c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb2c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfc00(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb300 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbb300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cbfc40(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb330 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbb330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cbfef0(*((uint *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbb370 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb370u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbff60(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb3e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb3e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbffa0(*((undefined4 *)GEN_TOP(((int)this + 4))),(undefined1)param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb420 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbb420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb420u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cbffe0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbb480 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc0060(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbb4c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb4c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc00a0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbb4f0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb4f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    F_00cbfe90((undefined1)param_1,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb5d0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb5d0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb5d0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf940(*((undefined4 *)GEN_TOP((param_1 + 4))),param_2,local_c);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb640 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb640(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbf9b0(*((undefined4 *)GEN_TOP((param_1 + 4))),local_c);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x5c))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb6c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb6c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb6c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa10(*((undefined4 *)GEN_TOP((param_1 + 4))),local_c,param_3);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x60))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),1,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb750 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbb750(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb750u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cbfa70(*((undefined4 *)GEN_TOP((param_1 + 4))),local_c);
  if (*((int *)GEN_TOP((param_1 + 8))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 8))) + 0x60))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),0,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbb7d0 */
GEN_LIB GEN_FRAME uint F_00cbb7d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbb7d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb7f0 */
GEN_LIB GEN_FRAME uint F_00cbb7f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbb7f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cbb810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined4 *)this = param_1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BusController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb840(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11299a4));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cbb870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb870(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb890 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbb890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb890u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  return;
}

/* ref: FUN_00cbb8a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbb8a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb8a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbb8b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb8b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00cbb8d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb8d0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb8d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (in_ecx != param_2) {
    *((undefined4 *)GEN_TOP((in_ecx + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  return in_ecx;
}

/* ref: FUN_00cbb8f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbb8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbb8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0xffffffff;
}

/* ref: FUN_00cbb910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcbb910u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb930 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbb930(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb930u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    return (byte)uVar1;
  }
  return 1;
}

/* ref: FUN_00cbb950 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb950(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbb950u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x24))))
                       (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return in_EAX;
}

/* ref: FUN_00cbb980 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb980(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xcbb980u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  uint in_EAX = 0;
  
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    in_EAX = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x28))))
                       (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),
                        (undefined4)gen_fl2bits(param_3));
  }
  return in_EAX;
}

/* ref: FUN_00cbb9b0 */
GEN_LIB GEN_NOFRAME double GEN_THISCALL F_00cbb9b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb9b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x2c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))));
    return (double)extraout_ST0;
  }
  return 0.0;
}

/* ref: FUN_00cbb9d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbb9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xcbb9d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint in_EAX = 0;
  uint uVar1;
  
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x4c))))
                      (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cbb9f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbb9f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbb9f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x38))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
  }
  return 0;
}

/* ref: FUN_00cbba10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbba10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbba10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x3c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1);
    return;
  }
  return;
}

/* ref: FUN_00cbba30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbba30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbba30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x40))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,
               (int)((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return;
}

/* ref: FUN_00cbba70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbba70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbba70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x44))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,
               (int)((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8)));
  }
  return;
}

/* ref: FUN_00cbbab0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbab0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbab0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xc);
  }
  return;
}

/* ref: FUN_00cbbad0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbad0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbad0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),1);
  }
  return;
}

/* ref: FUN_00cbbaf0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbaf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbaf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),2);
  }
  return;
}

/* ref: FUN_00cbbb10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbb10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbb10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xd);
  }
  return;
}

/* ref: FUN_00cbbb30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbb30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbb30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),3);
  }
  return;
}

/* ref: FUN_00cbbb50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbb50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbb50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),4);
  }
  return;
}

/* ref: FUN_00cbbb70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbb70(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbb70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),5);
  }
  return;
}

/* ref: FUN_00cbbb90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbb90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbb90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),6);
  }
  return;
}

/* ref: FUN_00cbbbb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbbb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbbb0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),7);
  }
  return;
}

/* ref: FUN_00cbbbd0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbbd0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbbd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),8);
  }
  return;
}

/* ref: FUN_00cbbbf0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbbf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbbf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),9);
  }
  return;
}

/* ref: FUN_00cbbc10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbc10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbc10u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),10);
  }
  return;
}

/* ref: FUN_00cbbc30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbc30(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbbc30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x48))))
              (*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),0xb);
  }
  return;
}

/* ref: FUN_00cbbc50 */
GEN_LIB GEN_FRAME byte F_00cbbc50(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbc50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((param_1 + 4))) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((param_2 + 4))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
    return uVar1 == uVar2;
  }
  return uVar1 == 0xffffffff;
}

/* ref: FUN_00cbbca0 */
GEN_LIB GEN_FRAME byte F_00cbbca0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  if (*((int *)GEN_TOP((param_1 + 4))) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_1 + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP((param_1 + 4))) GEN_EDX_ARG);
  }
  if (*((int *)GEN_TOP((param_2 + 4))) != 0) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((param_2 + 4))) + 0x30))))(*((int * PTR32 *)GEN_TOP((param_2 + 4))) GEN_EDX_ARG);
    return uVar1 != uVar2;
  }
  return uVar1 != 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::ReverbController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbbcf0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbcf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x11299b8));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cbbd50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbbd50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbbd50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00cbbd70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbbd70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbbd90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbbd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbd90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  return (uint)this;
}

/* ref: FUN_00cbbdb0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbbdb0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbdb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  return;
}

/* ref: FUN_00cbbdc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbbdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (this != param_1) {
    *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP(((int)param_1 + 4)));
    *((undefined4 *)GEN_TOP(((int)this + 8))) = *((undefined4 *)GEN_TOP(((int)param_1 + 8)));
  }
  return (uint)this;
}

/* ref: FUN_00cbbde0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbbde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbde0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (((iVar1 != 0) && (-1 < iVar1)) && (uVar2 = F_00cc46a0(iVar1), uVar2 != 0)) {
    return uVar2;
  }
  return *((uint *)GEN_TOP(((int)this + 4)));
}

/* ref: FUN_00cbbe00 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbbe00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cc5590(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return uVar1;
}

/* ref: FUN_00cbbe10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbbe10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cc5630(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return bVar1;
}

/* ref: FUN_00cbbe20 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbbe20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbe20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cc56d0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return bVar1;
}

/* ref: FUN_00cbbe30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbe30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbe57: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbbe8a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbe57;
  }
  if ((int)uVar2 < 0) {
    F_00d07000(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2880(uVar2,param_1);
LAB_00cbbe8a: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbea0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbec7: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbbefa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbec7;
  }
  if ((int)uVar2 < 0) {
    F_00d07050(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2900(uVar2,param_1);
LAB_00cbbefa: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbf10 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbbf10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbbf10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbbf37: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbbf6a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbbf37;
  }
  if ((int)uVar2 < 0) {
    F_00d070a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
  }
  F_00cc2980(uVar2,param_1);
LAB_00cbbf6a: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbbff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbbff0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbbff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return uVar2;
    }
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc040 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbc040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc06b;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc06b: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06530(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc2c00(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc14d;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
LAB_00cbc14d: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d062d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc1cd;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
LAB_00cbc1cd: ;
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d063a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
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
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbc220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc220u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc24b;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc24b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07af0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3200(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc290 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbc290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbc2bb;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbc2bb: ;
  if ((int)uVar3 < 0) {
    bVar2 = F_00d06470(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  bVar2 = F_00cc30c0(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbc390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc390(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbc390u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc40a;
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc3cc: ;
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    if (uVar2 == 0) goto LAB_00cbc40a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc3cc;
  }
  if ((int)uVar2 < 0) {
    F_00d06010(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc34b0(uVar2,param_2,param_3);
LAB_00cbc40a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc420 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc420(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcbc420u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc480 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc35c0(uVar2,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc4e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc4e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc4e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc507: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbc53a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc507;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc53a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc550 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc550(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc577: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbc5aa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc577;
  }
  if ((int)uVar2 < 0) {
    F_00d06220(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3740(uVar2,param_1);
LAB_00cbc5aa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc5c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc5c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc5c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc5e7: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbc61a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc5e7;
  }
  if ((int)uVar2 < 0) {
    F_00d061d0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc37c0(uVar2,param_1);
LAB_00cbc61a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbc630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc657: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbc66d;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc657;
  }
  if ((int)uVar2 < 0) {
    F_00d065f0(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,(undefined1)param_1);
  }
LAB_00cbc66d: ;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc680(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbc680u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_2),
                       (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  if (uVar2 == 0) goto LAB_00cbc6fa;
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc6bc: ;
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    if (uVar2 == 0) goto LAB_00cbc6fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc6bc;
  }
  if ((int)uVar2 < 0) {
    F_00d060f0(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc38c0(uVar2,param_2,param_3);
LAB_00cbc6fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbc710(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbc710u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbc737: ;
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    if (uVar2 == 0) goto LAB_00cbc768;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbc737;
  }
  if ((int)uVar2 < 0) {
    F_00d06650(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,uVar2,param_2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc39c0(uVar2,param_2);
LAB_00cbc768: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbc780 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc780(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbc780u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,param_3);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc7e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbc7e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc80b;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc80b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d066a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3a40(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbc850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbc850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc87b;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc87b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06700(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3ae0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc8c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc8c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbc8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3640(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc920 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc920(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbc920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc36c0(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc980 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc980(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbc980u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3940(uVar2,param_2);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbc9e0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbc9e0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcbc9e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc4860(uVar2,param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbca50 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbca50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbca50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3c20(uVar2,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbcab0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbcab0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbcab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcade;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    *param_1 = 0;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcade: ;
  if ((int)uVar2 < 0) {
    F_00d06760(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc3b80(param_1,uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbcbc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbcbc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcbe4: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbcc0b;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcbe4;
  }
  if ((int)uVar2 < 0) {
    F_00d06810(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3d40(uVar2);
LAB_00cbcc0b: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcc20 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbcc20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcc20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcc4b;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcc4b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06860(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3dc0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcc90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbcc90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbcc90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbccb7: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbcce6;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbccb7;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3e60(uVar2);
    F_00cc6a70(param_1 GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
LAB_00cbcce6: ;
  F_00cc6a90(param_1 GEN_EDX_ARG);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbcd10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbcd10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbcd10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcd37: ;
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
    if (uVar2 == 0) goto LAB_00cbcd75;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcd37;
  }
  if ((int)uVar2 < 0) {
    F_00d068c0(*((undefined4 *)GEN_TOP((param_1 + 8))) GEN_EDX_ARG,uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4040(uVar2,param_2,param_3);
LAB_00cbcd75: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcd90 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbcd90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbcd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcdbf;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbcdbf: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06910(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc40d0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbce00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbce00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbce00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbce27: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbce5a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbce27;
  }
  if ((int)uVar2 < 0) {
    F_00d06970(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc41f0(uVar2,param_1);
LAB_00cbce5a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbce70 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbce70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbce70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbce97;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
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
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbced0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbced0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcefb;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcefb: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06f40(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc4d20(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcfb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbcfb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbcfb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  int iVar1;
  float10 fVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbcfde;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
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
    F_00d06270(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,param_1,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc4400(param_1,uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbd050 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbd050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd050u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd07f;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd07f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a00(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc44b0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd0c0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbd0c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd0ef;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd0ef: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a60(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc4560(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd130 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbd130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd15f;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd15f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06ac0(*((undefined4 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
  }
  else {
    fVar3 = F_00cc4600(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbd1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbd1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd1c7: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbd1fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd1c7;
  }
  if ((int)uVar2 < 0) {
    F_00d07b60(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4740(uVar2,param_1);
LAB_00cbd1fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbd210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbd210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd23b;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbd23b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07bb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc47c0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbd280 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbd280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    F_00cc2ec0(*((int *)GEN_TOP(((int)this + 4))),0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbd2b0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbd2b0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcbd2b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP((param_1 + 4))) != 0) {
    F_00cc48f0(*((int *)GEN_TOP((param_1 + 4))),param_2,param_3,param_4);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbd390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbd390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbd390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*((int *)GEN_TOP(((int)this + 4))) != 0) {
    uVar1 = F_00cc4ac0(*((int *)GEN_TOP(((int)this + 4))),param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00cbd3e0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbd3e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbd3e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd40a: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbd411;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd40a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *((undefined4 *)GEN_TOP((uVar2 + 0x30)));
        *param_2 = *((undefined4 *)GEN_TOP((uVar2 + 0x34)));
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00d05480(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,param_1,param_2,((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x10)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd411: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd500 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbd500(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xcbd500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd52a: ;
    uVar2 = *((uint *)GEN_TOP(((int)param_1 + 4)));
    if (uVar2 == 0) goto LAB_00cbd531;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd52a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(param_1 GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *((float *)GEN_TOP((uVar2 + 0x30))) = param_2;
        *((float *)GEN_TOP((uVar2 + 0x34))) = param_3;
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00d05480(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar2)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x50))))
              (piVar3 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),(undefined4)gen_fl2bits(param_3));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 1;
  }
LAB_00cbd531: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd610 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbd610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcbd610u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd63a: ;
    uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
    if (uVar2 == 0) goto LAB_00cbd641;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd63a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this GEN_EDX_ARG);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *((undefined4 *)GEN_TOP((uVar2 + 0x30)));
        *param_2 = *((undefined4 *)GEN_TOP((uVar2 + 0x34)));
        *param_3 = *((undefined4 *)GEN_TOP((uVar2 + 0x58)));
        *param_4 = *((undefined4 *)GEN_TOP((uVar2 + 0x50)));
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(F_00d05480(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2)));
  if (piVar3 != ((int *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 0x4c))))(piVar3 GEN_EDX_ARG,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd641: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd740 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbd740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbd740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd768;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
LAB_00cbd768: ;
  bVar2 = 0;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      bVar2 = F_00d07150(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return bVar2;
    }
    bVar2 = F_00cc4b60(uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbd8e0 */
GEN_LIB GEN_FRAME byte F_00cbd8e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbd8e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd911;
  }
  uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
LAB_00cbd911: ;
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_2 + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
      return uVar2 == uVar3;
    }
  }
  uVar3 = *((uint *)GEN_TOP((param_2 + 4)));
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return uVar2 == uVar3;
}

/* ref: FUN_00cbd970 */
GEN_LIB GEN_FRAME byte F_00cbd970(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbd970u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00cbd8e0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00cbd990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbd990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbd990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd9bd;
  }
  uVar3 = *((uint *)GEN_TOP(((int)this + 4)));
LAB_00cbd9bd: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    if (param_1 != 0) {
      F_00d05fb0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3,param_1);
    }
    if (0 < param_2) {
      F_00d07700(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3,param_2);
    }
    F_00d05e30(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar3,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  bVar2 = F_00cbc290(this GEN_EDX_ARG);
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
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdab0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbdab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_c;
  ushort uStack_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbdae0;
  }
  uVar3 = *((uint *)GEN_TOP(((int)param_1 + 4)));
LAB_00cbdae0: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    uStack_8 = gen_x87_cw | 0xc00;
    gen_set_x87_cw((unsigned short)uStack_8);
    local_c = (undefined4)
              (longlong)
              TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8));
    gen_set_x87_cw((unsigned short)gen_x87_cw);
    uVar3 = F_00d05f50(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar3,local_c);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  bVar2 = F_00cbc290(param_1 GEN_EDX_ARG);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar3 = F_00cc2d80(uVar3,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdbf0 */
GEN_LIB_GS GEN_FRAME uint GEN_THISCALL F_00cbdbf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbdbf0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_GS(0x48, 8, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x40)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x44));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbdc2f;
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
LAB_00cbdc2f: ;
  (*(ulonglong *)(gen_frame + 0x20)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x2c)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x80002;
  (*(uint *)(gen_frame + 0x14)) = uVar2;
  (*(uint *)(gen_frame + 0x30)) = param_1;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x10)),0x30);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d057a0(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_ARG,uVar2,param_1);
    }
    else if (param_1 == 0) {
      F_00cc2ec0(uVar2,0);
    }
    else {
      uVar3 = param_1;
      if (param_1 == 0xffffffff) {
        uVar3 = F_00cc3f00(uVar2);
        (*(uint *)(gen_frame + 0xc)) = uVar3;
        uVar4 = F_00cbced0(this GEN_EDX_ARG);
        uVar3 = 0;
        if (uVar4 != 0) {
          F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
          F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          uVar4 = F_00cbe7e0((*(uint *)(gen_frame + 0xc)));
          if (uVar4 != 0) {
            uVar3 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x76)));
          }
          F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
          F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        }
      }
      F_00cc4270(uVar2,1);
      F_00cc2ec0(uVar2,uVar3);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbdd20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdd20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbdd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cbc120(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbdd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdd70(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbdd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cbc1a0(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbddc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbddc0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbddc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cbc390(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbde10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbde10(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(uint param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xcbde10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(uint param_4 = (uint)gen_a3;)
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_4)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbdeb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdeb0(GEN_P(undefined4 param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbdeb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cbc680(param_1 GEN_EDX_FWD,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbdf00 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbdf00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbdf00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP((param_1 + 4)));
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *((uint *)GEN_TOP((param_1 + 4)));
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbdf90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdf90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_c;
  
  uVar1 = (*(undefined4 *)&gen_args[1]);
  (*(undefined2 *)((char *)&(*(undefined4 *)&gen_args[1]) + 0)) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(ushort)(*(undefined4 *)&gen_args[1]));
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP((*(uint *)&gen_args[0]))) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar2 = F_00cbd990(param_1 GEN_EDX_FWD,local_c,uVar1);
  return uVar2;
}

/* ref: FUN_00cbdfe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbdfe0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbdfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[3], &gen_a4, sizeof gen_a4);
  gen_args[4] = gen_a5;
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)param_1 + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbe010;
  }
  uVar3 = *((uint *)GEN_TOP(((int)param_1 + 4)));
LAB_00cbe010: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    if ((*(float *)&gen_args[3]) != 0.0) {
      F_00d05fb0(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[3])));
    }
    if (0 < (*(int *)&gen_args[4])) {
      F_00d07700(*((undefined * PTR32 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar3,(*(int *)&gen_args[4]));
    }
    uVar3 = F_00d05ee0(*((undefined4 *)GEN_TOP(((int)param_1 + 8))) GEN_EDX_ARG,uVar3,(*(uint *)&gen_args[0]),(*(float *)&gen_args[1]),(*(float *)&gen_args[2]));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  if ((*(float *)&gen_args[3]) != 0.0) {
    F_00cc2e20(uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[3])));
  }
  if (0 < (*(int *)&gen_args[4])) {
    F_00cc4ca0(uVar3,(*(int *)&gen_args[4]));
  }
  if ((*(uint *)&gen_args[0]) == 0) {
    dVar2 = GEN_X87(*(double *)&REFG(undefined, 0x1097260) * 0.0);
    (*(float *)&gen_args[3]) = gen_bits2f((int)dVar2);
    F_00cbddc0(param_1 GEN_EDX_ARG,(*(float *)&gen_args[1]),(uint)&(*(float *)&gen_args[3]));
    (*(float *)&gen_args[1]) = gen_bits2f((int)dVar2);
  }
  else {
    uVar5 = (*(uint *)&gen_args[0]);
    if ((*(uint *)&gen_args[0]) == 0xffffffff) {
      (*(float *)&gen_args[3]) = gen_bits2f(F_00cc3f00(uVar3));
      uVar4 = F_00cbced0(param_1 GEN_EDX_ARG);
      uVar5 = 0;
      if (uVar4 != 0) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_00cbe880(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        uVar4 = F_00cbe7e0((undefined4)gen_fl2bits((*(float *)&gen_args[3])));
        if (uVar4 != 0) {
          uVar5 = (uint)*((ushort *)GEN_TOP((uVar4 + 0x74)));
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      }
    }
    F_00cc4270(uVar3,1);
    F_00cbc390(param_1 GEN_EDX_ARG,(*(float *)&gen_args[2]),0);
    F_00cc4270(uVar3,1);
    F_00cbc390(param_1 GEN_EDX_ARG,(*(float *)&gen_args[1]),uVar5);
    (*(float *)&gen_args[1]) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  }
  uVar3 = F_00cbdf90(param_1 GEN_EDX_ARG,(uint)&(*(float *)&gen_args[1]),0);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbe1a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe1a0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cbdbf0(param_1 GEN_EDX_FWD,local_c);
  return uVar1;
}

/* ref: FUN_00cbe1f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe1f0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbe1f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  unsigned int gen_args[5];
  gen_args[0] = gen_a1;
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[2], &gen_a3, sizeof gen_a3);
  gen_args[3] = gen_a4;
  gen_args[4] = gen_a5;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_10;
  
  iVar1 = *(*(int * PTR32 *)&gen_args[0]);
  gen_set_x87_cw((unsigned short)gen_x87_cw | 0xc00);
  local_10 = (undefined4)
             (longlong)
             TRUNC((double)(float)((float10)*((int *)GEN_TOP((*(uint *)&gen_args[3]))) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                   *(double *)&REFG(undefined, 0x10912a8));
  uVar2 = local_10;
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  (*((undefined2 *)GEN_TOP(((char *)&(*(int * PTR32 *)&gen_args[0]) + 0)))) = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)(ushort)(*(int * PTR32 *)&gen_args[0]));
  local_10 = (undefined4)
             (longlong)
             TRUNC(*(double *)&REFG(undefined, 0x10912a8) *
                   (double)(float)((float10)iVar1 / (float10)*(double *)&REFG(undefined, 0x1097260)));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar3 = F_00cbdfe0(param_1 GEN_EDX_FWD,local_10,(*(float *)&gen_args[1]),(*(float *)&gen_args[2]),gen_bits2f((unsigned int)(uVar2)),(*(undefined4 *)&gen_args[4]));
  return uVar3;
}

/* ref: FUN_00cbe280 */
GEN_LIB GEN_FRAME ulonglong F_00cbe280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return CONCAT44(param_2,param_1);
}

/* ref: FUN_00cbe290 */
GEN_LIB GEN_FRAME uint F_00cbe290(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbe290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00cbe2a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe2a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xcbe2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  return (uint)this;
}

/* ref: FUN_00cbe2e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe2e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0xcbe2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_5;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = param_6;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = param_7;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cbe360 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe360(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbe380(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  return (uint)this;
}

/* ref: FUN_00cbe3b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe3b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe3b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  return;
}

/* ref: FUN_00cbe3c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe3c0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe3c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (in_ecx != param_2) {
    *((undefined4 *)GEN_TOP((in_ecx + 4))) = *((undefined4 *)GEN_TOP((param_2 + 4)));
  }
  return in_ecx;
}

/* ref: FUN_00cbe3e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbe3e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe3e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00cbe3f0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbe3f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbe3f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00cc88c0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00cbe410 */
GEN_LIB GEN_FRAME byte F_00cbe410(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) == *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00cbe430 */
GEN_LIB GEN_FRAME byte F_00cbe430(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((param_1 + 4))) != *((int *)GEN_TOP((param_2 + 4)));
}

/* ref: FUN_00cbe450 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbe450(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 100))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe4b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe4b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe4b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  F_00cc4ef0(uVar1);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 100))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),0);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe500 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbe500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),1,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe560 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbe560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP(((int)this + 4))));
  F_00cc5060(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 4))),0,param_1);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe5c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbe5c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbe5c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  uint uVar1;
  undefined4 local_c;
  ushort uStack_8;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_3)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00cc50e0(uVar1,param_2,local_c);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe6a0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbe6a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe6a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc79a0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe6e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe6e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe6e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a10(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe720 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe720u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a90(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe760 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbe760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7b10(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe7a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe7a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7b90(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe7e0 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cbe7e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbe7e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c10(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbe810(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c60(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe850 */
GEN_LIB GEN_FRAME uint GEN_STDCALL F_00cbe850(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbe850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7ce0(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbe880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7570(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe8b0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe8b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe8b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7600(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe8e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cbe8e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe8e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7670(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe910 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe910u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7700(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe940 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbe940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7d30(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe970 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbe970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7db0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe9a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cbe9a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbe9a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7e20(*((undefined4 *)GEN_TOP(((int)this + 4))));
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbe9d0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbe9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbe9d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7770();
  if ((char)param_1 == '\0') {
    if (uVar1 != *((uint *)GEN_TOP(((int)this + 4)))) goto LAB_00cbea15;
  }
  else if (uVar1 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc7e90(*((undefined4 *)GEN_TOP(((int)this + 4))),(char)param_1);
LAB_00cbea15: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea30 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbea30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbea30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7fd0(*((undefined4 *)GEN_TOP(((int)this + 4))),(undefined1)param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbea70 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbea70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcbea70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc8040(*((undefined4 *)GEN_TOP(((int)this + 4))),(undefined1)param_1);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbeb10 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cbeb10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbeb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc81d0(*((undefined4 *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbeb40 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cbeb40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcbeb40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc8430(*((uint *)GEN_TOP(((int)this + 4))));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbeb80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbeb80(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbeb80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00cc4170(uVar1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbebd0 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbebd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbebd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc8240(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cbec10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcbec10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc82f0(*((undefined4 *)GEN_TOP(((int)this + 4))),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec50 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00cbec50(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbec50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  float fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc83a0(*((undefined4 *)GEN_TOP((param_1 + 4))),param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float10)fVar1;
}

/* ref: FUN_00cbec90 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbec90(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbec90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 100))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbed20 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbed20(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbed20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),1,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_00cbedb0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00cbedb0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbedb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  ushort uStack_8;
  
  uStack_8 = gen_x87_cw | 0xc00;
  gen_set_x87_cw((unsigned short)uStack_8);
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*((int *)GEN_TOP(param_2)) / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_set_x87_cw((unsigned short)gen_x87_cw);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*((undefined4 *)GEN_TOP((param_1 + 4))));
  F_00cc5060(uVar1,uVar3);
  piVar2 = ((int *)GEN_TOP(F_00d2cce0()));
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x68))))(piVar2 GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + 4))),0,local_c);
  }
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BankController::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cbee40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbee40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cbee70 */
GEN_LIB GEN_FRAME unsigned int F_00cbee70(GEN_P(LPCSTR param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbee70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(LPCSTR param_1 = (LPCSTR)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return;
}

/* ref: FUN_00cbee90 */
GEN_LIB GEN_FRAME unsigned int F_00cbee90(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbee90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*((int *)GEN_TOP((param_1 + iVar2 * 4))) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((param_2 == 8) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined4, 0x15d7780) = 0;
    }
    else {
      REFG(undefined4, 0x15d7780) = F_00cce100(pvVar1 GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = REFG(undefined4, 0x15d7780);
    iVar2 = iVar2 + 1;
  }
  if ((1 < REFG(undefined4, 0x134c7e4)) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x14,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined4, 0x15d7734) = 0;
    }
    else {
      REFG(undefined4, 0x15d7734) = F_00ccdf30(pvVar1 GEN_EDX_ARG,REFG(undefined4, 0x134c7e4));
    }
    *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = REFG(undefined4, 0x15d7734);
    iVar2 = iVar2 + 1;
  }
  if ((param_3 != '\0') && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar1 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == ((undefined *)GEN_TOP(0x0))) {
      REFG(undefined4, 0x15d7774) = 0;
    }
    else {
      REFG(undefined4, 0x15d7774) = F_00ccdd90(pvVar1 GEN_EDX_ARG);
    }
    *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = REFG(undefined4, 0x15d7774);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < 8) {
    *((undefined4 *)GEN_TOP((param_1 + iVar2 * 4))) = 0;
  }
  return;
}

/* ref: FUN_00cbefe0 */
GEN_LIB GEN_FRAME uint F_00cbefe0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbefe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined * this;
  int iVar2;
  undefined4 uVar3;
  
  REFG(int, 0x15d7748) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  iVar2 = 0;
  REFG(undefined4, 0x15d777c) = uVar1;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x1ac,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == ((undefined *)GEN_TOP(0x0))) {
        uVar1 = 0;
      }
      else {
        uVar3 = *((undefined4 *)GEN_TOP((param_1 + 0x60)));
        uVar1 = F_00cd0170(param_1 GEN_EDX_ARG,iVar2);
        uVar1 = F_00cceda0(this GEN_EDX_ARG,iVar2,uVar1,uVar3);
      }
      *((uint *)GEN_TOP((REFG(undefined4, 0x15d777c) + iVar2 * 4))) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < REFG(int, 0x15d7748));
  }
  return uVar1;
}

/* ref: FUN_00cbf0c0 */
GEN_LIB GEN_FRAME uint F_00cbf0c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  code * pcVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined * this;
  int iVar4;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(undefined4, 0x15d7754) = *((uint *)GEN_TOP((param_1 + 0x38)));
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15d7754) = (uint)REFG(undefined1, 0x15d7799);
  }
  iVar4 = REFG(undefined4, 0x15d7754) * 4;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  pcVar1 = *((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8)));
  uVar2 = (*pcVar1)(REFG(int * PTR32, 0x15d778c),iVar4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  iVar4 = 0;
  REFG(undefined4, 0x15d7744) = uVar2;
  if (0 < (int)REFG(undefined4, 0x15d7754)) {
    do {
      puVar3 = ((undefined4 *)GEN_TOP(F_00cd0110(param_1 GEN_EDX_ARG,iVar4)));
      (*(undefined4 *)(gen_frame + 0x0)) = *puVar3;
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
      }
      if (REFG(char, 0x15d7798) != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        F_00cca420(&REFG(char, 0x15d7798) GEN_EDX_ARG,&(*(undefined4 *)(gen_frame + 0x0)),iVar4);
      }
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xe8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == ((undefined *)GEN_TOP(0x0))) {
        uVar2 = 0;
      }
      else {
        uVar2 = F_00cca0a0(this GEN_EDX_ARG,iVar4 + 1,&(*(undefined4 *)(gen_frame + 0x0)));
      }
      *((uint *)GEN_TOP((REFG(undefined4, 0x15d7744) + iVar4 * 4))) = uVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)REFG(undefined4, 0x15d7754));
  }
  return uVar2;
}

/* ref: FUN_00cbf230 */
GEN_LIB GEN_FRAME unsigned int F_00cbf230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(int, 0x15d7764) = *((int *)GEN_TOP((param_1 + 0x38)));
  }
  if (0 < REFG(int, 0x15d7764)) {
    iVar6 = REFG(int, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d7728) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar6,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    if (0 < REFG(int, 0x15d7764)) {
      iVar8 = 0;
      iVar6 = 1;
      do {
        if (REFG(int, 0x15d7784) == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
          }
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == ((undefined *)GEN_TOP(0x0))) goto LAB_00cbf377;
          uVar5 = F_00cd02e0(pvVar4 GEN_EDX_ARG,iVar6,*((undefined4 *)GEN_TOP((param_1 + 0x60))),0);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
          }
          pvVar4 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == ((undefined *)GEN_TOP(0x0))) {
LAB_00cbf377: ;
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cd02e0(pvVar4 GEN_EDX_ARG,iVar6,*((undefined4 *)GEN_TOP((param_1 + 0x60))),REFG(int, 0x15d7784));
          }
        }
        *((uint *)GEN_TOP((iVar8 + REFG(undefined4, 0x15d7728)))) = uVar5;
        iVar8 = iVar8 + 4;
        bVar3 = iVar6 < REFG(int, 0x15d7764);
        iVar6 = iVar6 + 1;
      } while (bVar3);
    }
  }
  if (REFG(int, 0x15d7784) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    if ((REFG(char, 0x15d7798) == '\0') && (iVar8 = 0, iVar6 = REFG(int, 0x15d7784), -1 < REFG(int, 0x15d7764))) {
      do {
        if (*((int *)GEN_TOP((iVar6 + iVar8 * 4))) != 0) {
          iVar7 = 0;
          do {
            iVar1 = *((int *)GEN_TOP((iVar6 + iVar8 * 4)));
            if (*((int *)GEN_TOP((iVar7 + iVar1))) == 0) break;
            piVar2 = *((int * PTR32 *)GEN_TOP((iVar7 + iVar1)));
            ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 4))))(piVar2 GEN_EDX_ARG,0);
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
GEN_LIB GEN_NOFRAME uint F_00cbf410(void)
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
      if ((*((int *)GEN_TOP((iVar5 + iVar4 * 4))) != 0) &&
         (puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + iVar4 * 4))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
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
        if ((*((int *)GEN_TOP((iVar5 + iVar4 * 4))) != 0) &&
           (puVar1 = *((undefined4 * PTR32 *)GEN_TOP((iVar5 + iVar4 * 4))), puVar1 != ((undefined4 *)GEN_TOP(0x0)))) {
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
          iVar5 = REFG(int, 0x15d7728);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < REFG(int, 0x15d7764));
    }
    if (iVar5 != 0) {
      F_00406810(iVar5);
    }
  }
  if ((REFG(int * PTR32, 0x15d7784) == ((int *)GEN_TOP(0x0))) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    if (REFG(undefined4 * PTR32, 0x15d7780) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7780))))(REFG(undefined4 * PTR32, 0x15d7780) GEN_EDX_ARG,1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7734) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7734))))(REFG(undefined4 * PTR32, 0x15d7734) GEN_EDX_ARG,1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7774) != ((undefined4 *)GEN_TOP(0x0))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7774))))(REFG(undefined4 * PTR32, 0x15d7774) GEN_EDX_ARG,1);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if ((REFG(char, 0x15d7798) == '\0') && (iVar5 = 0, 0 < REFG(int, 0x15d7748))) {
    do {
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP((REFG(int, 0x15d777c) + iVar5 * 4)));
      if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < REFG(int, 0x15d7748));
  }
  if (REFG(int * PTR32, 0x15d7784) != ((int *)GEN_TOP(0x0))) {
    iVar5 = 0;
    piVar3 = REFG(int * PTR32, 0x15d7784);
    if (-1 < REFG(int, 0x15d7764)) {
      do {
        if (piVar3[iVar5] != 0) {
          iVar4 = 0;
          do {
            if (*((int *)GEN_TOP((piVar3[iVar5] + iVar4))) == 0) break;
            puVar1 = *((undefined4 * PTR32 *)GEN_TOP((piVar3[iVar5] + iVar4)));
            if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
              ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*puVar1)))(puVar1 GEN_EDX_ARG,1);
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
    if (piVar3 != ((int *)GEN_TOP(0x0))) {
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
  if (REFG(undefined4 * PTR32, 0x15d773c) != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d773c))))(REFG(undefined4 * PTR32, 0x15d773c) GEN_EDX_ARG,1);
  }
  return uVar2;
}

/* ref: FUN_00cbf660 */
GEN_LIB GEN_FRAME uint F_00cbf660(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (param_1 == REFG(int, 0x112a808)) {
    return REFG(undefined4, 0x15d773c);
  }
  if ((-1 < param_1) && (param_1 <= REFG(int, 0x15d7754))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbf6a0 */
GEN_LIB GEN_FRAME byte F_00cbf6a0(unsigned int gen_a0)
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
    in_ecx = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + uVar3 * 4)));
  }
  if (in_ecx == 0) {
    return 0;
  }
  bVar2 = F_00cc9340(in_ecx GEN_EDX_ARG);
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
GEN_LIB GEN_FRAME uint F_00cbf720(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*((int *)GEN_TOP((iVar1 + 0xc))) != 0) {
    uVar2 = F_00cc1130(*((int *)GEN_TOP((iVar1 + 0xc))) GEN_EDX_ARG);
    return uVar2;
  }
  return (int)*((short *)GEN_TOP((iVar1 + 8)));
}

/* ref: FUN_00cbf770 */
GEN_LIB GEN_FRAME uint F_00cbf770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    in_ecx = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (in_ecx == 0) {
    return 0;
  }
  uVar1 = F_00cc9360(in_ecx GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cbf7b0 */
GEN_LIB GEN_FRAME byte F_00cbf7b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf7b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)*((undefined2 *)GEN_TOP((iVar1 + 10))) & 1;
}

/* ref: FUN_00cbf7f0 */
GEN_LIB GEN_FRAME unsigned int F_00cbf7f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbf7f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  int in_ecx;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return;
    }
    in_ecx = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (in_ecx != 0) {
    F_00cc9420(in_ecx GEN_EDX_ARG,(undefined1)param_2);
  }
  return;
}

/* ref: FUN_00cbf830 */
GEN_LIB GEN_FRAME uint F_00cbf830(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbf830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if (*((int *)GEN_TOP((iVar4 + iVar3 * 4))) != 0) {
        piVar1 = *((int * PTR32 *)GEN_TOP((iVar4 + iVar3 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_1);
        iVar4 = REFG(int, 0x15d7744);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < REFG(int, 0x15d7754));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d777c) + iVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7748));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7768)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7740) + iVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7768));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7750)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d772c) + iVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7750));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7788)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d774c) + iVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7788));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7778)) {
    do {
      piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d775c) + iVar4 * 4)));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7778));
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 4))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00cbf940 */
GEN_LIB GEN_FRAME uint F_00cbf940(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbf940u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))
                        (REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbf9b0 */
GEN_LIB GEN_FRAME uint F_00cbf9b0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbf9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x10))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfa10 */
GEN_LIB GEN_FRAME uint F_00cbfa10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbfa10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
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
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x14))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2,param_3);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x14))))(piVar1 GEN_EDX_ARG,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbfa70 */
GEN_LIB GEN_FRAME uint F_00cbfa70(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbfa70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
    piVar1 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar2 = 0;
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x18))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,param_2);
      return uVar2;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfad0 */
GEN_LIB GEN_FRAME byte F_00cbfad0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcbfad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((iVar1 + 0xe4)));
}

/* ref: FUN_00cbfb10 */
GEN_LIB GEN_FRAME byte F_00cbfb10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfb10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*((char *)GEN_TOP((iVar1 + 0xe4))) != '\0') && (*((char *)GEN_TOP((iVar1 + 0xe5))) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cbfb60 */
GEN_LIB GEN_FRAME uint F_00cbfb60(GEN_P(float param_1, float gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbfb60u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))(REFG(int * PTR32, 0x15d773c) GEN_EDX_ARG,(undefined4)gen_fl2bits(param_1),param_2);
  return uVar1;
}

/* ref: FUN_00cbfb80 */
GEN_LIB GEN_FRAME uint F_00cbfb80(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xcbfb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
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
    piVar2 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar1 = param_1;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x1c))))(piVar2 GEN_EDX_ARG,(undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00cbfbc0 */
GEN_LIB GEN_FRAME uint F_00cbfbc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfbc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0xffffffff;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00cbfc00 */
GEN_LIB GEN_FRAME uint F_00cbfc00(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbfc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *((uint *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (uVar1 != 0) {
    *((undefined4 *)GEN_TOP((uVar1 + 0xe0))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbfc40 */
GEN_LIB GEN_FRAME uint F_00cbfc40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfc40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *((uint *)GEN_TOP((iVar1 + 0xe0)));
}

/* ref: FUN_00cbfc80 */
GEN_LIB GEN_FRAME uint F_00cbfc80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfc80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if ((-1 < param_1) && (param_1 < REFG(int, 0x15d7748))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d777c) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfcb0 */
GEN_LIB GEN_FRAME uint F_00cbfcb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfcb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((REFG(int, 0x15d772c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7750))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d772c) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfce0 */
GEN_LIB GEN_FRAME uint F_00cbfce0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((REFG(int, 0x15d7740) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7768))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d7740) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfd10 */
GEN_LIB GEN_FRAME uint F_00cbfd10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfd10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((REFG(int, 0x15d774c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7788))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d774c) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfd40 */
GEN_LIB GEN_FRAME uint F_00cbfd40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfd40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((REFG(int, 0x15d775c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7778))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d775c) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfd70 */
GEN_LIB GEN_FRAME uint F_00cbfd70(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfd70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (((REFG(int, 0x15d7760) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7738))) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d7760) + param_1 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfda0 */
GEN_LIB GEN_NOFRAME uint F_00cbfda0(void)
{
  GEN_ENTER(0xcbfda0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d776c);
}

/* ref: FUN_00cbfdc0 */
GEN_LIB GEN_FRAME float F_00cbfdc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcbfdc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (REFG(int, 0x15d7730) <= param_1) {
    return *((float *)GEN_TOP((REFG(int, 0x15d7758) - 4 + REFG(int, 0x15d7730) * 4)));
  }
  return *((float *)GEN_TOP((REFG(int, 0x15d7758) + param_1 * 4)));
}

/* ref: FUN_00cbfdf0 */
GEN_LIB GEN_FRAME uint F_00cbfdf0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfdf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  if (REFG(int, 0x15d7730) <= param_1) {
    return *((uint *)GEN_TOP((REFG(int, 0x15d7770) - 4 + REFG(int, 0x15d7730) * 4)));
  }
  return *((uint *)GEN_TOP((REFG(int, 0x15d7770) + param_1 * 4)));
}

/* ref: FUN_00cbfe20 */
GEN_LIB GEN_FRAME uint F_00cbfe20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbfe20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((((REFG(int, 0x15d7784) != 0) && (-1 < param_1)) && (param_1 <= REFG(int, 0x15d7764))) && (param_2 < 4)) {
    return *((uint *)GEN_TOP((*((int *)GEN_TOP((REFG(int, 0x15d7784) + param_1 * 4))) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfe50 */
GEN_LIB GEN_NOFRAME uint F_00cbfe50(void)
{
  GEN_ENTER(0xcbfe50u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7780);
}

/* ref: FUN_00cbfe60 */
GEN_LIB GEN_NOFRAME uint F_00cbfe60(void)
{
  GEN_ENTER(0xcbfe60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7734);
}

/* ref: FUN_00cbfe90 */
GEN_LIB GEN_FRAME unsigned int F_00cbfe90(GEN_P(char param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbfe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char param_1 = (char)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (REFG(int * PTR32, 0x15d7774) != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7774) + 4))))(REFG(int * PTR32, 0x15d7774) GEN_EDX_ARG,(uint)(param_1 == '\0'));
    if (param_2 != 0) {
      F_00ccdd50(REFG(int * PTR32, 0x15d7774) GEN_EDX_ARG,param_2);
    }
  }
  return;
}

/* ref: FUN_00cbfef0 */
GEN_LIB GEN_FRAME float10 F_00cbfef0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbfef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if (((int)param_1 < 0) || (REFG(int, 0x15d7754) < (int)param_1)) goto LAB_00cbff4b;
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x34))) + 0x10))))(iVar1 + 0x34);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((iVar1 + 0x10))) + 0x10))))(iVar1 + 0x10);
    return GEN_X87((float10)(float)(extraout_ST0_00 * (float10)(double)extraout_ST0));
  }
LAB_00cbff4b: ;
  return (float10)0;
}

/* ref: FUN_00cbff60 */
GEN_LIB GEN_FRAME uint F_00cbff60(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbff60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
    piVar2 = *((int * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  uVar1 = param_1;
  if (piVar2 != ((int *)GEN_TOP(0x0))) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 8))))(piVar2 GEN_EDX_ARG,param_2);
  }
  return uVar1;
}

/* ref: FUN_00cbffa0 */
GEN_LIB GEN_FRAME uint F_00cbffa0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcbffa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *((uint *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (uVar1 != 0) {
    *((undefined1 *)GEN_TOP((uVar1 + 0xe6))) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbffe0 */
GEN_LIB GEN_FRAME byte F_00cbffe0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcbffe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *((byte *)GEN_TOP((iVar1 + 0xe6)));
}

/* ref: FUN_00cc0020 */
GEN_LIB GEN_FRAME uint F_00cc0020(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc0020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00cc9c60(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc0060 */
GEN_LIB GEN_FRAME uint F_00cc0060(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc0060u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
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
    iVar1 = *((int *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = F_00cc9d30(iVar1 GEN_EDX_ARG,(undefined1)param_2);
  return uVar2;
}

/* ref: FUN_00cc00a0 */
GEN_LIB GEN_FRAME uint F_00cc00a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc00a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    this = *((undefined * PTR32 *)GEN_TOP((REFG(int, 0x15d7744) - 4 + param_1 * 4)));
  }
  if (this == ((undefined *)GEN_TOP(0x0))) {
    return 0;
  }
  uVar1 = F_00cc9450(this GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00cc00e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00cc00e0(void)
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
  return;
}

/* ref: FUN_00cc0130 */
GEN_LIB GEN_FRAME uint F_00cc0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined1 uVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar2 = *((undefined4 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x60)));
  if ((REFG(int * PTR32, 0x15d7784) == ((int *)GEN_TOP(0x0))) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    uVar1 = *((undefined1 *)GEN_TOP(((*(int *)&gen_args[1]) + 0x1be)));
    ((undefined4 *)(gen_frame + 0x0))[0] = 0;
    F_00cbee90(((undefined4 *)(gen_frame + 0x0)),uVar2,uVar1);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_00cd0de0(pvVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[0]),uVar2,((undefined4 *)(gen_frame + 0x0)));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  else {
    F_00cbee90(*REFG(int * PTR32, 0x15d7784),uVar2,0);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != ((undefined *)GEN_TOP(0x0))) {
      uVar4 = F_00cd0de0(pvVar3 GEN_EDX_ARG,&(*(uint *)&gen_args[0]),uVar2,*REFG(int * PTR32, 0x15d7784));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  REFG(undefined4, 0x15d773c) = 0;
  return 0;
}

/* ref: FUN_00cc0260 */
GEN_LIB_GS GEN_FRAME uint F_00cc0260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xcc0260u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  GEN_FRAME_DECL_GS(0x808, 8, 4);
  uint extraout_EAX = 0;
  
  GEN_COOKIE((*(uint *)(gen_frame + 0x800)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x804));
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a080)),param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x0)),0x800,0x7ff,((char *)REFP(0x112a060)),param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x0)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  return extraout_EAX;
}

/* ref: FUN_00cc0300 */
GEN_LIB GEN_FRAME unsigned int F_00cc0300(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc0300u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar6 = *((int *)GEN_TOP((param_1 + 100)));
    (*(int *)(gen_frame + 0x30)) = *((int *)GEN_TOP((param_1 + 0x8c)));
    (*(int *)(gen_frame + 0x28)) = *((int *)GEN_TOP((param_1 + 0x90)));
    if (((iVar6 != -1) || (*((int *)GEN_TOP((param_1 + 0x8c))) != -1)) || (*((int *)GEN_TOP((param_1 + 0x90))) != -1)) {
      REFG(int, 0x15d7730) = *((int *)GEN_TOP((param_1 + 0x68)));
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      REFG(undefined4, 0x15d7758) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1,((char *)REFP(0x112a0a8)),0,0,0x10);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      REFG(undefined4, 0x15d7770) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1,((char *)REFP(0x112a0a8)),0,0,0x10);
      iVar1 = 0;
      if (0 < REFG(int, 0x15d7730)) {
        do {
          *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d7758) + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + 0x6c + iVar1 * 4)));
          *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d7770) + iVar1 * 4))) = *((undefined4 *)GEN_TOP((param_1 + 0x7c + iVar1 * 4)));
          iVar1 = iVar1 + 1;
        } while (iVar1 < REFG(int, 0x15d7730));
      }
      F_00cc2750(iVar6);
      REFG(undefined4, 0x15d7764) = *((uint *)GEN_TOP((param_1 + 0x38)));
      iVar1 = REFG(undefined4, 0x15d7764) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                       (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar1 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10
                                       )));
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      REFG(undefined4, 0x15d775c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      REFG(int, 0x15d7778) = 0;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
      }
      REFG(undefined4, 0x15d774c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      iVar1 = 0;
      REFG(int, 0x15d7788) = 0;
      if (-1 < (int)REFG(undefined4, 0x15d7764)) {
        do {
          if (((iVar1 == iVar6) || (iVar1 == -1)) || ((iVar1 == (*(int *)(gen_frame + 0x30)) || (iVar1 == (*(int *)(gen_frame + 0x28)))))) {
            if (iVar1 == 0) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              *REFG(uint * PTR32, 0x15d7784) = uVar2;
            }
            else {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xc,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              REFG(uint * PTR32, 0x15d7784)[iVar1] = uVar2;
            }
            iVar5 = 0;
            if (iVar1 == iVar6) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x38,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1b80(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1])) = uVar2;
              *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4))) = *((undefined4 *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1]));
              REFG(int, 0x15d776c) = REFG(int, 0x15d7778);
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
              iVar5 = 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + 4))) = 0;
            }
            if (iVar1 == -1) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3 GEN_EDX_ARG,0);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = uVar2;
              *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4))) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              iVar5 = iVar5 + 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x30))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x28))) {
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
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
    }
    REFG(undefined4, 0x15d7764) = (uint)REFG(undefined1, 0x15d82b0);
    iVar6 = REFG(undefined4, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,iVar6 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d774c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7788) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d772c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7750) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d7740) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7768) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d7760) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7738) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
    }
    REFG(undefined4, 0x15d775c) = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    iVar6 = 0;
    REFG(int, 0x15d7778) = 0;
    ((char *)(gen_frame + 0x0))[0] = '\0';
    ((char * PTR32 *)(gen_frame + 0x4))[0] = ((char *)GEN_TOP(0x0));
    ((char * PTR32 *)(gen_frame + 0x4))[1] = ((char *)GEN_TOP(0x0));
    ((char * PTR32 *)(gen_frame + 0x4))[2] = ((char *)GEN_TOP(0x0));
    ((char * PTR32 *)(gen_frame + 0x4))[3] = ((char *)GEN_TOP(0x0));
    if (-1 < (int)REFG(undefined4, 0x15d7764)) {
      do {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
        }
        F_00cca550(&REFG(char, 0x15d7798) GEN_EDX_ARG,((char *)(gen_frame + 0x0)),iVar6);
        if ('\x03' < ((char *)(gen_frame + 0x0))[0]) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
          }
          ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1129dfc)),
                          ((char *)REFP(0x1129dcc)),"BusContainer.cpp",0x27f,
                          "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
        }
        if (iVar6 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          *REFG(uint * PTR32, 0x15d7784) = uVar2;
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
          }
          uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          REFG(uint * PTR32, 0x15d7784)[iVar6] = uVar2;
        }
        iVar1 = 0;
        if ('\0' < ((char *)(gen_frame + 0x0))[0]) {
          do {
            switch((unsigned int)(uintptr_t)(*((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)])) {
            case '\0': ;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = 0;
              break;
            case '\x01': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7788)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1129ecc)),"","BusContainer.cpp",0x2e5,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4))) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              break;
            case '\x02': ;
            case '\x03': ;
            case '\x04': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,0x58,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1570(pvVar3 GEN_EDX_ARG);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7768)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1129f54)),&REFG(undefined, 0x1129af3),"BusContainer.cpp",0x2f7,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d7740) + REFG(int, 0x15d7768) * 4))) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7768) = REFG(int, 0x15d7768) + 1;
              break;
            case '\x05': ;
              switch((unsigned int)(uintptr_t)(((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)][0x10])) {
              case '\x01': ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x28)) = 0x10;
                pvVar3 = ((undefined *)GEN_TOP(F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x24)))));
                if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
LAB_00cc0d36: ;
                  iVar5 = 0;
                }
                else {
                  piVar4 = ((int *)GEN_TOP(F_00cc1640(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)],1)));
                  if (piVar4 != ((int *)GEN_TOP(0x0))) break;
                  iVar5 = 0;
                }
                goto LAB_00cc0d41;
              case '\x02': ;
                (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x30)) = 0x10;
                pvVar3 = ((undefined *)GEN_TOP(F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x2c)))));
                if (pvVar3 == ((undefined *)GEN_TOP(0x0))) goto LAB_00cc0d36;
                piVar4 = ((int *)GEN_TOP(F_00cc17d0(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)],1)));
                if (piVar4 == ((int *)GEN_TOP(0x0))) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x03': ;
                (*(char * PTR32 *)(gen_frame + 0x1c)) = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                pvVar3 = ((undefined *)GEN_TOP(F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x1c)))));
                if (pvVar3 == ((undefined *)GEN_TOP(0x0))) goto LAB_00cc0d36;
                piVar4 = ((int *)GEN_TOP(F_00cc1910(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)],1)));
                if (piVar4 == ((int *)GEN_TOP(0x0))) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x04': ;
                ((char * PTR32 *)(gen_frame + 0x4))[4] = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x18)) = 0x10;
                pvVar3 = ((undefined *)GEN_TOP(F_00cc0fd0(0x88,((char * PTR32 *)(gen_frame + 0x4)) + 4)));
                if ((pvVar3 == ((undefined *)GEN_TOP(0x0))) ||
                   (piVar4 = ((int *)GEN_TOP(F_00cc1a50(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)],1))), piVar4 == ((int *)GEN_TOP(0x0))))
                goto LAB_00cc0d36;
                break;
              default: ;
                goto switchD_00cc09e0_caseD_6;
              }
              iVar5 = *((int *)GEN_TOP((*piVar4 + 4))) + (int)piVar4;
LAB_00cc0d41: ;
              *((int *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = iVar5;
              break;
            case '\a': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
              }
              pvVar3 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,100,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == ((undefined *)GEN_TOP(0x0))) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1280(pvVar3 GEN_EDX_ARG,((char * PTR32 *)(gen_frame + 0x4))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7778)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))(((char *)REFP(0x1129fdc)),&REFG(undefined, 0x1129b0f),"BusContainer.cpp",0x2fc,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *((undefined4 *)GEN_TOP((REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4))) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
            }
switchD_00cc09e0_caseD_6: ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < ((char *)(gen_frame + 0x0))[0]);
        }
        if (((char *)(gen_frame + 0x0))[0] < 4) {
          iVar1 = ((char *)(gen_frame + 0x0))[0] * 4;
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
GEN_LIB GEN_FRAME uint F_00cc0dd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc0dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
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
    F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar1 = *((undefined4 *)GEN_TOP((param_1 + 4)));
  }
  else {
    uVar1 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798) GEN_EDX_ARG);
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
    *((undefined4 *)GEN_TOP((REFG(int, 0x15d773c) + 0xe8))) = REFG(undefined4, 0x15d7744);
    uVar2 = REFG(undefined4, 0x15d7754);
    *((uint *)GEN_TOP((REFG(int, 0x15d773c) + 0xec))) = REFG(undefined4, 0x15d7754);
  }
  return uVar2;
}

/* ref: FUN_00cc0f20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc0f20(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc0f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc0f30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc0f30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc0f30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_1;
  return (uint)this;
}

/* ref: FUN_00cc0f60 */
GEN_LIB GEN_FRAME uint F_00cc0f60(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xcc0f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 8))))(param_1 GEN_EDX_ARG,param_2,*param_3,0,0,param_3[1]);
  return uVar1;
}

/* ref: FUN_00cc0f90 */
GEN_LIB GEN_FRAME uint F_00cc0f90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc0f90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
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
GEN_LIB GEN_FRAME uint F_00cc0fd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc0fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc1020 */
GEN_LIB GEN_FRAME uint F_00cc1020(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc1020u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,((char *)REFP(0x112a0a8)),0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cc1070 */
GEN_LIB GEN_FRAME uint F_00cc1070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = ((int *)GEN_TOP(F_004042b0()));
  }
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c) GEN_EDX_ARG,param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc10c0 */
GEN_LIB GEN_FRAME uint F_00cc10c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xcc10c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc1130 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1130(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  int iVar1;
  
  do {
    iVar1 = in_ecx;
    in_ecx = *((int *)GEN_TOP((iVar1 + 0xc)));
  } while (in_ecx != 0);
  return (int)*((short *)GEN_TOP((iVar1 + 8)));
}

/* ref: FUN_00cc1160 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00cc1160(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xe6))) = param_2;
  return param_2;
}

/* ref: FUN_00cc1190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1190(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xe0))) = param_2;
  return param_2;
}

/* ref: FUN_00cc11c0 */
GEN_LIB GEN_FRAME float GEN_THISCALL F_00cc11c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc11c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x34))) + 0x10))))((int)this + 0x34);
  extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 0x10))))((int)this + 0x10);
  return GEN_X87((float)(extraout_ST0_00 * (float10)(double)extraout_ST0));
}

/* ref: FUN_00cc12a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc12a0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc12a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xe8))) = param_2;
  return param_2;
}

/* ref: FUN_00cc12b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc12b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc12b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xec))) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf7 */
GEN_LIB GEN_NOFRAME byte F_00cc12d0(void)
{
  GEN_ENTER(0xcc12d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf8 */
GEN_LIB GEN_NOFRAME uint F_00cc12e0(void)
{
  GEN_ENTER(0xcc12e0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc12f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc12f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cc1320 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1320(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x13 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 10 GEN_EDX_ARG);
  F_00cccb40(in_ecx + 1 GEN_EDX_ARG);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1350(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_2 & 1) != 0) {
    F_00406810(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00cc1390 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a170);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  return (uint)this;
}

/* ref: FUN_00cc13e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc13e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc13e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a1c0);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  return (uint)this;
}

/* ref: FUN_00cc1460 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1490 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1490(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a210);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  return (uint)this;
}

/* ref: FUN_00cc14e0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc14e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc14e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc1510 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1510u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a260);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  return (uint)this;
}

/* ref: FUN_00cc1560 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1560(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50 GEN_EDX_FWD);
  F_00cccb40(in_ecx + 0x2c GEN_EDX_ARG);
  F_00cccb40(in_ecx + 8 GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP((in_ecx + 4))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return;
}

/* ref: FUN_00cc15e0 */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00cc15e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc15e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return (float10)*((float *)GEN_TOP((in_ecx + 0x6c + param_2 * 4)));
}

/* ref: FUN_00cc15f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc15f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc15f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x7c + param_2 * 4)));
}

/* ref: FUN_00cc1640 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc1640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc16b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc16b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc16b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this + (-4 - *((int *)GEN_TOP(((int)this - 4))))))) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc16c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc16c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc16c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1bb0((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc16e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc16e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc16e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this + (-4 - *((int *)GEN_TOP(((int)this - 4))))))) GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cc16f0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc16f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc16f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0ab0((in_ecx - *((int *)GEN_TOP((in_ecx - 4)))) - 4 GEN_EDX_FWD);
  return uVar1;
}

/* ref: FUN_00cc1700 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1700(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd400();
  return uVar1;
}

/* ref: FUN_00cc1710 */
GEN_LIB GEN_NOFRAME byte GEN_THISCALL F_00cc1710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this + (-4 - *((int *)GEN_TOP(((int)this - 4))))))) GEN_EDX_FWD);
  return bVar1;
}

/* ref: FUN_00cc1720 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc1720u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00ccdb20((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cc1730 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1730u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00cd0950((int)this + (-4 - *((int *)GEN_TOP(((int)this - 4)))) GEN_EDX_FWD,(undefined1)param_1);
  return;
}

/* ref: FUN_00cc1740 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1740u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cc17d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc17d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc17d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1840 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00cc1840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc1840u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  F_00ccdb50((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return;
}

/* ref: FUN_00cc1850 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1850(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd410();
  return uVar1;
}

/* ref: FUN_00cc1860 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1860(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1c00((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc1880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc1880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc18c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc18c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xcc18c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(param_1 + 0x13 GEN_EDX_FWD);
  F_00cccb40(param_1 + 10 GEN_EDX_ARG);
  F_00cccb40(param_1 + 1 GEN_EDX_ARG);
  *param_1 = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_2 & 1) != 0) && (param_1 - 1 != ((undefined4 *)GEN_TOP(0x0)))) {
    F_00406810(param_1 - 1);
  }
  return (uint)(param_1 - 1);
}

/* ref: FUN_00cc1910 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00cc1910(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xcc1910u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0(((undefined *)GEN_TOP(((int)this + 0x18))) GEN_EDX_FWD,0);
  }
  F_00cd07a0(this GEN_EDX_ARG,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x10))) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)this + 4)))))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 4))) - 4 + (int)this))) = *((int *)GEN_TOP((*(int *)this + 4))) - 0x18;
  return (uint)this;
}

/* ref: FUN_00cc1980 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc1980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xcc1980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00cc1c50((int)this - *((int *)GEN_TOP(((int)this - 4))) GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: FUN_00cc19a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19a0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00ccd420();
  return uVar1;
}

/* ref: FUN_00cc19b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(float param_2, float gen_a2), GEN_P(float param_3, float gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xcc19b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(float param_2 = (float)gen_a2;)
  GEN_PIN(float param_3 = (float)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00ccdb80((int)this - 4 GEN_EDX_FWD,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc19c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00cc19c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xcc19c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00cd0920(((undefined *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x40 GEN_EDX_ARG);
  F_00cccb40((int)this + 0x1c GEN_EDX_ARG);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x18))) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

